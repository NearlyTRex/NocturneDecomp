// Name: core_shovel.cpp_CShovel_dtor_FUN_00588c80
// Address: 00588c80
// Address Range: [[00588c80, 00588ccd]]
// Convention: __cdecl
// Signature: CShovel * core_shovel.cpp_CShovel_dtor_FUN_00588c80(CShovel * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CShovelTypeInfo
// Function calls:
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_00588c80(CShovel *this_ptr,uint d1,uint d2)

{
  CWeapon *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CShovelTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return (CShovel *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CShovel *)ptr;
}


// Assembly code:
// 00588c80: PUSH EBX
//   Label: core_shovel.cpp_CShovel_dtor_FUN_00588c80
// 00588c81: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00588c85: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00588c8a: JNZ 0x00588ca6
//   XREF to: 00588ca6 (CONDITIONAL_JUMP)
// 00588c8c: PUSH 0x1
// 00588c8e: PUSH EBX
// 00588c8f: CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   XREF to: 005edf80 (UNCONDITIONAL_CALL)
// 00588c94: ADD ESP,0x8
// 00588c97: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00588c9b: MOV EBX,EAX
// 00588c9d: TEST DL,0x2
// 00588ca0: JNZ 0x00588cc1
//   XREF to: 00588cc1 (CONDITIONAL_JUMP)
// 00588ca2: MOV EAX,EBX
// 00588ca4: POP EBX
// 00588ca5: RET
// 00588ca6: PUSH 0x662ce0
//   Label: LAB_00588ca6
//   XREF to: 00662ce0 (DATA)
// 00588cab: PUSH EBX
// 00588cac: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00588cb1: ADD ESP,0x8
// 00588cb4: PUSH EAX
// 00588cb5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00588cba: ADD ESP,0x4
// 00588cbd: MOV EAX,EBX
// 00588cbf: POP EBX
// 00588cc0: RET
// 00588cc1: PUSH EAX
//   Label: LAB_00588cc1
// 00588cc2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00588cc7: ADD ESP,0x4
// 00588cca: MOV EAX,EBX
// 00588ccc: POP EBX
// 00588ccd: RET
