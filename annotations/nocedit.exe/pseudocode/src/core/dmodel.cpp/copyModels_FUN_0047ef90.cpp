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


// Assembly code:
// 0047ef90: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_dmodel.cpp_copyModels_FUN_0047ef90
//   XREF to: Stack[0x4] (READ)
// 0047ef94: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0047ef98: MOV EAX,dword ptr [EAX]
// 0047ef9a: MOV dword ptr [EDX],EAX
// 0047ef9c: MOV EAX,EDX
// 0047ef9e: RET
