// Name: core_dmodel.cpp_copyModels_FUN_0047efb0
// Address: 0047efb0
// Address Range: [[0047efb0, 0047efbe]]
// Convention: __cdecl
// Signature: CKeyFramedModel * core_dmodel.cpp_copyModels_FUN_0047efb0(CKeyFramedModel * * first, CKeyFramedModel * * second)

#include "nocturne.h"

CKeyFramedModel * __cdecl
core_dmodel_cpp_copyModels_FUN_0047efb0(CKeyFramedModel **first,CKeyFramedModel **second)

{
  *first = *second;
  return (CKeyFramedModel *)first;
}
