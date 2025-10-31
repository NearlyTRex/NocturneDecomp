// Name: core_dmodel.cpp_copyModels_FUN_0047efa0
// Address: 0047efa0
// Address Range: [[0047efa0, 0047efae]]
// Convention: __cdecl
// Signature: CKeyFramedModel * core_dmodel.cpp_copyModels_FUN_0047efa0(CKeyFramedModel * * first, CKeyFramedModel * * second)

#include "nocturne.h"

CKeyFramedModel * __cdecl
core_dmodel_cpp_copyModels_FUN_0047efa0(CKeyFramedModel **first,CKeyFramedModel **second)

{
  *first = *second;
  return (CKeyFramedModel *)first;
}


// Assembly code:
// 0047efa0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_dmodel.cpp_copyModels_FUN_0047efa0
//   XREF to: Stack[0x4] (READ)
// 0047efa4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0047efa8: MOV EAX,dword ptr [EAX]
// 0047efaa: MOV dword ptr [EDX],EAX
// 0047efac: MOV EAX,EDX
// 0047efae: RET
