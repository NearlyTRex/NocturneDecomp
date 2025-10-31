// Name: core_morph.cpp_CMorphModel_ctor_FUN_0052a4c0
// Address: 0052a4c0
// Address Range: [[0052a4c0, 0052a4ed]]
// Convention: __cdecl
// Signature: CMorphModel * core_morph.cpp_CMorphModel_ctor_FUN_0052a4c0(CMorphModel * this_ptr)

#include "nocturne.h"

CMorphModel * __cdecl core_morph_cpp_CMorphModel_ctor_FUN_0052a4c0(CMorphModel *this_ptr)

{
  this_ptr->field2_0x58[0] = '\0';
  this_ptr->field2_0x58[1] = '\0';
  this_ptr->field2_0x58[2] = '\0';
  this_ptr->field2_0x58[3] = '\0';
  this_ptr->field2_0x58[4] = '\0';
  this_ptr->field2_0x58[5] = '\0';
  this_ptr->field2_0x58[6] = '\0';
  this_ptr->field2_0x58[7] = '\0';
  this_ptr->field2_0x58[8] = '\0';
  this_ptr->field2_0x58[9] = '\0';
  this_ptr->field2_0x58[10] = '\0';
  this_ptr->field2_0x58[0xb] = '\0';
  this_ptr->field2_0x58[0xc] = '\0';
  this_ptr->field2_0x58[0xd] = '\0';
  this_ptr->field2_0x58[0xe] = '\0';
  this_ptr->field2_0x58[0xf] = '\0';
  this_ptr->padding_0x0[0] = '\0';
  this_ptr->padding_0x0[1] = '\0';
  this_ptr->padding_0x0[2] = '\0';
  this_ptr->padding_0x0[3] = '\0';
  this_ptr->numPoints = 0;
  return this_ptr;
}


// Assembly code:
// 0052a4c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_morph.cpp_CMorphModel_ctor_FUN_0052a4c0
//   XREF to: Stack[0x4] (READ)
// 0052a4c4: MOV dword ptr [EAX + 0x58],0x0
// 0052a4cb: MOV dword ptr [EAX + 0x5c],0x0
// 0052a4d2: MOV dword ptr [EAX + 0x60],0x0
// 0052a4d9: MOV dword ptr [EAX + 0x64],0x0
// 0052a4e0: MOV dword ptr [EAX],0x0
// 0052a4e6: MOV dword ptr [EAX + 0x54],0x0
// 0052a4ed: RET
