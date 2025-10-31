// Name: core_melee.cpp_FUN_0050edf0
// Address: 0050edf0
// Address Range: [[0050edf0, 0050ee3d]]
// Convention: __cdecl
// Signature: CMelee * core_melee.cpp_FUN_0050edf0(CMelee * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CMeleeTypeInfo
// Function calls:
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_FUN_0050edf0(CMelee *this_ptr,uint d1,uint d2)

{
  CMelee *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMeleeTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CMelee *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0050edf0: PUSH EBX
//   Label: core_melee.cpp_FUN_0050edf0
// 0050edf1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050edf5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0050edfa: JNZ 0x0050ee16
//   XREF to: 0050ee16 (CONDITIONAL_JUMP)
// 0050edfc: PUSH 0x1
// 0050edfe: PUSH EBX
// 0050edff: CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   XREF to: 005edf80 (UNCONDITIONAL_CALL)
// 0050ee04: ADD ESP,0x8
// 0050ee07: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050ee0b: MOV EBX,EAX
// 0050ee0d: TEST DL,0x2
// 0050ee10: JNZ 0x0050ee31
//   XREF to: 0050ee31 (CONDITIONAL_JUMP)
// 0050ee12: MOV EAX,EBX
// 0050ee14: POP EBX
// 0050ee15: RET
// 0050ee16: PUSH 0x661280
//   Label: LAB_0050ee16
//   XREF to: 00661280 (DATA)
// 0050ee1b: PUSH EBX
// 0050ee1c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0050ee21: ADD ESP,0x8
// 0050ee24: PUSH EAX
// 0050ee25: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0050ee2a: ADD ESP,0x4
// 0050ee2d: MOV EAX,EBX
// 0050ee2f: POP EBX
// 0050ee30: RET
// 0050ee31: PUSH EAX
//   Label: LAB_0050ee31
// 0050ee32: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0050ee37: ADD ESP,0x4
// 0050ee3a: MOV EAX,EBX
// 0050ee3c: POP EBX
// 0050ee3d: RET
