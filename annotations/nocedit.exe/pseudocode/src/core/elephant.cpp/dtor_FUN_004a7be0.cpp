// Name: core_elephant.cpp_dtor_FUN_004a7be0
// Address: 004a7be0
// Address Range: [[004a7be0, 004a7c2d]]
// Convention: __cdecl
// Signature: void * core_elephant.cpp_dtor_FUN_004a7be0(CElephantGun * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CElephantGunTypeInfo
// Function calls:
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void * __cdecl core_elephant_cpp_dtor_FUN_004a7be0(CElephantGun *this_ptr,uint d1,uint d2)

{
  CWeapon *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CElephantGunTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004a7be0: PUSH EBX
//   Label: core_elephant.cpp_dtor_FUN_004a7be0
// 004a7be1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a7be5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004a7bea: JNZ 0x004a7c06
//   XREF to: 004a7c06 (CONDITIONAL_JUMP)
// 004a7bec: PUSH 0x1
// 004a7bee: PUSH EBX
// 004a7bef: CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   XREF to: 005edf80 (UNCONDITIONAL_CALL)
// 004a7bf4: ADD ESP,0x8
// 004a7bf7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004a7bfb: MOV EBX,EAX
// 004a7bfd: TEST DL,0x2
// 004a7c00: JNZ 0x004a7c21
//   XREF to: 004a7c21 (CONDITIONAL_JUMP)
// 004a7c02: MOV EAX,EBX
// 004a7c04: POP EBX
// 004a7c05: RET
// 004a7c06: PUSH 0x65d640
//   Label: LAB_004a7c06
//   XREF to: 0065d640 (DATA)
// 004a7c0b: PUSH EBX
// 004a7c0c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004a7c11: ADD ESP,0x8
// 004a7c14: PUSH EAX
// 004a7c15: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004a7c1a: ADD ESP,0x4
// 004a7c1d: MOV EAX,EBX
// 004a7c1f: POP EBX
// 004a7c20: RET
// 004a7c21: PUSH EAX
//   Label: LAB_004a7c21
// 004a7c22: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004a7c27: ADD ESP,0x4
// 004a7c2a: MOV EAX,EBX
// 004a7c2c: POP EBX
// 004a7c2d: RET
