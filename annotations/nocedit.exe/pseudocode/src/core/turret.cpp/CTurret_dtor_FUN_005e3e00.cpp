// Name: core_turret.cpp_CTurret_dtor_FUN_005e3e00
// Address: 005e3e00
// Address Range: [[005e3e00, 005e3e4d]]
// Convention: __cdecl
// Signature: CTurret * core_turret.cpp_CTurret_dtor_FUN_005e3e00(CTurret * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CTurretTypeInfo
// Function calls:
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_CTurret_dtor_FUN_005e3e00(CTurret *this_ptr,uint d1,uint d2)

{
  CTurret *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTurretTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CTurret *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005e3e00: PUSH EBX
//   Label: core_turret.cpp_CTurret_dtor_FUN_005e3e00
// 005e3e01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e3e05: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005e3e0a: JNZ 0x005e3e26
//   XREF to: 005e3e26 (CONDITIONAL_JUMP)
// 005e3e0c: PUSH 0x1
// 005e3e0e: PUSH EBX
// 005e3e0f: CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   XREF to: 005edf80 (UNCONDITIONAL_CALL)
// 005e3e14: ADD ESP,0x8
// 005e3e17: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e3e1b: MOV EBX,EAX
// 005e3e1d: TEST DL,0x2
// 005e3e20: JNZ 0x005e3e41
//   XREF to: 005e3e41 (CONDITIONAL_JUMP)
// 005e3e22: MOV EAX,EBX
// 005e3e24: POP EBX
// 005e3e25: RET
// 005e3e26: PUSH 0x664c90
//   Label: LAB_005e3e26
//   XREF to: 00664c90 (DATA)
// 005e3e2b: PUSH EBX
// 005e3e2c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005e3e31: ADD ESP,0x8
// 005e3e34: PUSH EAX
// 005e3e35: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005e3e3a: ADD ESP,0x4
// 005e3e3d: MOV EAX,EBX
// 005e3e3f: POP EBX
// 005e3e40: RET
// 005e3e41: PUSH EAX
//   Label: LAB_005e3e41
// 005e3e42: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005e3e47: ADD ESP,0x4
// 005e3e4a: MOV EAX,EBX
// 005e3e4c: POP EBX
// 005e3e4d: RET
