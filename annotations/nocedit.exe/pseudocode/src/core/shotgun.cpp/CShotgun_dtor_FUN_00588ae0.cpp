// Name: core_shotgun.cpp_CShotgun_dtor_FUN_00588ae0
// Address: 00588ae0
// Address Range: [[00588ae0, 00588b2d]]
// Convention: __cdecl
// Signature: CShotgun * core_shotgun.cpp_CShotgun_dtor_FUN_00588ae0(CShotgun * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CShotgunTypeInfo
// Function calls:
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CShotgun * __cdecl core_shotgun_cpp_CShotgun_dtor_FUN_00588ae0(CShotgun *this_ptr,uint d1,uint d2)

{
  CShotgun *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CShotgunTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CShotgun *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00588ae0: PUSH EBX
//   Label: core_shotgun.cpp_CShotgun_dtor_FUN_00588ae0
// 00588ae1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00588ae5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00588aea: JNZ 0x00588b06
//   XREF to: 00588b06 (CONDITIONAL_JUMP)
// 00588aec: PUSH 0x1
// 00588aee: PUSH EBX
// 00588aef: CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   XREF to: 005edf80 (UNCONDITIONAL_CALL)
// 00588af4: ADD ESP,0x8
// 00588af7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00588afb: MOV EBX,EAX
// 00588afd: TEST DL,0x2
// 00588b00: JNZ 0x00588b21
//   XREF to: 00588b21 (CONDITIONAL_JUMP)
// 00588b02: MOV EAX,EBX
// 00588b04: POP EBX
// 00588b05: RET
// 00588b06: PUSH 0x662b90
//   Label: LAB_00588b06
//   XREF to: 00662b90 (DATA)
// 00588b0b: PUSH EBX
// 00588b0c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00588b11: ADD ESP,0x8
// 00588b14: PUSH EAX
// 00588b15: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00588b1a: ADD ESP,0x4
// 00588b1d: MOV EAX,EBX
// 00588b1f: POP EBX
// 00588b20: RET
// 00588b21: PUSH EAX
//   Label: LAB_00588b21
// 00588b22: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00588b27: ADD ESP,0x4
// 00588b2a: MOV EAX,EBX
// 00588b2c: POP EBX
// 00588b2d: RET
