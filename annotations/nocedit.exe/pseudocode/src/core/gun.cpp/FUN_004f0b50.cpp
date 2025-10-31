// Name: core_gun.cpp_FUN_004f0b50
// Address: 004f0b50
// Address Range: [[004f0b50, 004f0b9d]]
// Convention: __cdecl
// Signature: CGun * core_gun.cpp_FUN_004f0b50(CGun * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CGunTypeInfo
// Function calls:
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_FUN_004f0b50(CGun *this_ptr,uint d1,uint d2)

{
  CWeapon *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CGunTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return (CGun *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CGun *)ptr;
}


// Assembly code:
// 004f0b50: PUSH EBX
//   Label: core_gun.cpp_FUN_004f0b50
// 004f0b51: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f0b55: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004f0b5a: JNZ 0x004f0b76
//   XREF to: 004f0b76 (CONDITIONAL_JUMP)
// 004f0b5c: PUSH 0x1
// 004f0b5e: PUSH EBX
// 004f0b5f: CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   XREF to: 005edf80 (UNCONDITIONAL_CALL)
// 004f0b64: ADD ESP,0x8
// 004f0b67: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f0b6b: MOV EBX,EAX
// 004f0b6d: TEST DL,0x2
// 004f0b70: JNZ 0x004f0b91
//   XREF to: 004f0b91 (CONDITIONAL_JUMP)
// 004f0b72: MOV EAX,EBX
// 004f0b74: POP EBX
// 004f0b75: RET
// 004f0b76: PUSH 0x65f3b0
//   Label: LAB_004f0b76
//   XREF to: 0065f3b0 (DATA)
// 004f0b7b: PUSH EBX
// 004f0b7c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004f0b81: ADD ESP,0x8
// 004f0b84: PUSH EAX
// 004f0b85: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004f0b8a: ADD ESP,0x4
// 004f0b8d: MOV EAX,EBX
// 004f0b8f: POP EBX
// 004f0b90: RET
// 004f0b91: PUSH EAX
//   Label: LAB_004f0b91
// 004f0b92: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004f0b97: ADD ESP,0x4
// 004f0b9a: MOV EAX,EBX
// 004f0b9c: POP EBX
// 004f0b9d: RET
