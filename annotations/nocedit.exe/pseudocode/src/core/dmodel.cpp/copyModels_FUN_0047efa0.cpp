// Name: core_dmodel.cpp_copyModels_FUN_0047efa0
// Address: 0047efa0
// Address Range: [[0047efa0, 0047efae]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_copyModels_FUN_0047efa0(CKeyFramedModel **first,CKeyFramedModel **second)

#include "nocturne.h"

CKeyFramedModel * __cdecl
core_dmodel_cpp_copyModels_FUN_0047efa0(CKeyFramedModel **first,CKeyFramedModel **second)

{
  *first = *second;
  return (CKeyFramedModel *)first;
}
