// Name: core_lightgun.cpp_FUN_00506a50
// Address: 00506a50
// Address Range: [[00506a50, 00506a9d]]
// Convention: __cdecl
// Signature: CLightGun * core_lightgun.cpp_FUN_00506a50(CLightGun * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CLightGunTypeInfo
// Function calls:
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CLightGun * __cdecl core_lightgun_cpp_FUN_00506a50(CLightGun *this_ptr,uint d1,uint d2)

{
  CLightGun *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CLightGunTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CLightGun *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00506a50: PUSH EBX
//   Label: core_lightgun.cpp_FUN_00506a50
// 00506a51: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00506a55: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00506a5a: JNZ 0x00506a76
//   XREF to: 00506a76 (CONDITIONAL_JUMP)
// 00506a5c: PUSH 0x1
// 00506a5e: PUSH EBX
// 00506a5f: CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   XREF to: 005edf80 (UNCONDITIONAL_CALL)
// 00506a64: ADD ESP,0x8
// 00506a67: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00506a6b: MOV EBX,EAX
// 00506a6d: TEST DL,0x2
// 00506a70: JNZ 0x00506a91
//   XREF to: 00506a91 (CONDITIONAL_JUMP)
// 00506a72: MOV EAX,EBX
// 00506a74: POP EBX
// 00506a75: RET
// 00506a76: PUSH 0x660b70
//   Label: LAB_00506a76
//   XREF to: 00660b70 (DATA)
// 00506a7b: PUSH EBX
// 00506a7c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00506a81: ADD ESP,0x8
// 00506a84: PUSH EAX
// 00506a85: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00506a8a: ADD ESP,0x4
// 00506a8d: MOV EAX,EBX
// 00506a8f: POP EBX
// 00506a90: RET
// 00506a91: PUSH EAX
//   Label: LAB_00506a91
// 00506a92: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00506a97: ADD ESP,0x4
// 00506a9a: MOV EAX,EBX
// 00506a9c: POP EBX
// 00506a9d: RET
