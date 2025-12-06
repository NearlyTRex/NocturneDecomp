// Name: core_dmodel.cpp_copyModels_FUN_0047ef90
// Address: 0047ef90
// Address Range: [[0047ef90, 0047ef9e]]
// Convention: __cdecl
// Signature: CKeyFramedModel * * core_dmodel.cpp_copyModels_FUN_0047ef90(CKeyFramedModel * * first, CKeyFramedModel * * second)

#include "nocturne.h"

CKeyFramedModel ** __cdecl
core_dmodel_cpp_copyModels_FUN_0047ef90(CKeyFramedModel **first,CKeyFramedModel **second)

{
  *first = *second;
  return first;
}
