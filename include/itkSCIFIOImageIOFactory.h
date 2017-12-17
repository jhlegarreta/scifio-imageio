/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#ifndef itkSCIFIOImageIOFactory_h
#define itkSCIFIOImageIOFactory_h

#include "SCIFIOExport.h"
#include "itkObjectFactoryBase.h"
#include "itkImageIOBase.h"

namespace itk
{
class SCIFIO_EXPORT SCIFIOImageIOFactory : public ObjectFactoryBase
{
public:
  /** Standard class typedefs **/
  typedef SCIFIOImageIOFactory      Self;
  typedef ObjectFactoryBase         Superclass;
  typedef SmartPointer<Self>        Pointer;
  typedef SmartPointer<const Self>  ConstPointer;

  /** Class methods used to interface with the registered factories **/
  const char* GetITKSourceVersion(void) const override;
  const char* GetDescription(void) const override;

  /** Method for class instantiation **/
  itkFactorylessNewMacro(Self);

  /** RTTI (and related methods) **/
  itkTypeMacro(SCIFIOImageIOFactory, ObjectFactoryBase);

  /** Register one factory of this type **/
  static void RegisterOneFactory(void)
    {
    SCIFIOImageIOFactory::Pointer SCIFIOFactory = SCIFIOImageIOFactory::New();
    ObjectFactoryBase::RegisterFactoryInternal(SCIFIOFactory);
    }

protected:
  SCIFIOImageIOFactory();
  ~SCIFIOImageIOFactory() override;

private:
  SCIFIOImageIOFactory(const Self&); // purposely not implemented
  void operator=(const Self&); // purposely not implemented
};
} // end namespace itk

#endif // itkSCIFIOImageIOFactory_h
