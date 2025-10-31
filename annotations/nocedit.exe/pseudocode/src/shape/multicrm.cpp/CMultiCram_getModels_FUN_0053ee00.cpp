// Name: shape_multicrm.cpp_CMultiCram_getModels_FUN_0053ee00
// Address: 0053ee00
// Address Range: [[0053ee00, 0053ee23]]
// Convention: __cdecl
// Signature: void * shape_multicrm.cpp_CMultiCram_getModels_FUN_0053ee00(CMultiCram * this_ptr, CDSEModel * * dest_array)

#include "nocturne.h"

void * __cdecl
shape_multicrm_cpp_CMultiCram_getModels_FUN_0053ee00(CMultiCram *this_ptr,CDSEModel **dest_array)

{
  *dest_array = this_ptr->models[0];
  dest_array[1] = this_ptr->models[1];
  dest_array[2] = this_ptr->models[2];
  return dest_array;
}


// Assembly code:
// 0053ee00: PUSH EBX
//   Label: shape_multicrm.cpp_CMultiCram_getModels_FUN_0053ee00
// 0053ee01: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0053ee05: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0053ee09: ADD EAX,0x4
// 0053ee0c: MOV EDX,dword ptr [EAX]
// 0053ee0e: LEA EBX,[EAX + 0x4]
// 0053ee11: MOV dword ptr [ECX],EDX
// 0053ee13: LEA EDX,[ECX + 0x4]
// 0053ee16: MOV EBX,dword ptr [EBX]
// 0053ee18: MOV dword ptr [EDX],EBX
// 0053ee1a: MOV EAX,dword ptr [EAX + 0x8]
// 0053ee1d: MOV dword ptr [EDX + 0x4],EAX
// 0053ee20: MOV EAX,ECX
// 0053ee22: POP EBX
// 0053ee23: RET
