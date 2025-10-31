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


// Assembly code:
// 0047efb0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_dmodel.cpp_copyModels_FUN_0047efb0
//   XREF to: Stack[0x4] (READ)
// 0047efb4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0047efb8: MOV EAX,dword ptr [EAX]
// 0047efba: MOV dword ptr [EDX],EAX
// 0047efbc: MOV EAX,EDX
// 0047efbe: RET
