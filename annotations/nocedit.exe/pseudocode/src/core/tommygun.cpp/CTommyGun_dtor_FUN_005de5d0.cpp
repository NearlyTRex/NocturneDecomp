// Name: core_tommygun.cpp_CTommyGun_dtor_FUN_005de5d0
// Address: 005de5d0
// Address Range: [[005de5d0, 005de61d]]
// Convention: __cdecl
// Signature: CTommyGun * core_tommygun.cpp_CTommyGun_dtor_FUN_005de5d0(CTommyGun * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CTommyGunTypeInfo
// Function calls:
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CTommyGun * __cdecl
core_tommygun_cpp_CTommyGun_dtor_FUN_005de5d0(CTommyGun *this_ptr,uint d1,uint d2)

{
  CTommyGun *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTommyGunTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CTommyGun *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005de5d0: PUSH EBX
//   Label: core_tommygun.cpp_CTommyGun_dtor_FUN_005de5d0
// 005de5d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005de5d5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005de5da: JNZ 0x005de5f6
//   XREF to: 005de5f6 (CONDITIONAL_JUMP)
// 005de5dc: PUSH 0x1
// 005de5de: PUSH EBX
// 005de5df: CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   XREF to: 005edf80 (UNCONDITIONAL_CALL)
// 005de5e4: ADD ESP,0x8
// 005de5e7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005de5eb: MOV EBX,EAX
// 005de5ed: TEST DL,0x2
// 005de5f0: JNZ 0x005de611
//   XREF to: 005de611 (CONDITIONAL_JUMP)
// 005de5f2: MOV EAX,EBX
// 005de5f4: POP EBX
// 005de5f5: RET
// 005de5f6: PUSH 0x664780
//   Label: LAB_005de5f6
//   XREF to: 00664780 (DATA)
// 005de5fb: PUSH EBX
// 005de5fc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005de601: ADD ESP,0x8
// 005de604: PUSH EAX
// 005de605: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005de60a: ADD ESP,0x4
// 005de60d: MOV EAX,EBX
// 005de60f: POP EBX
// 005de610: RET
// 005de611: PUSH EAX
//   Label: LAB_005de611
// 005de612: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005de617: ADD ESP,0x4
// 005de61a: MOV EAX,EBX
// 005de61c: POP EBX
// 005de61d: RET
