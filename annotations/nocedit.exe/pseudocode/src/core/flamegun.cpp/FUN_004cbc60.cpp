// Name: core_flamegun.cpp_FUN_004cbc60
// Address: 004cbc60
// Address Range: [[004cbc60, 004cbcad]]
// Convention: __cdecl
// Signature: CFlashlight * core_flamegun.cpp_FUN_004cbc60(CFlashlight * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CFlashlightTypeInfo
// Function calls:
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CFlashlight * __cdecl core_flamegun_cpp_FUN_004cbc60(CFlashlight *this_ptr,uint d1,uint d2)

{
  CWeapon *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CFlashlightTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return (CFlashlight *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CFlashlight *)ptr;
}


// Assembly code:
// 004cbc60: PUSH EBX
//   Label: core_flamegun.cpp_FUN_004cbc60
// 004cbc61: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cbc65: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004cbc6a: JNZ 0x004cbc86
//   XREF to: 004cbc86 (CONDITIONAL_JUMP)
// 004cbc6c: PUSH 0x1
// 004cbc6e: PUSH EBX
// 004cbc6f: CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   XREF to: 005edf80 (UNCONDITIONAL_CALL)
// 004cbc74: ADD ESP,0x8
// 004cbc77: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004cbc7b: MOV EBX,EAX
// 004cbc7d: TEST DL,0x2
// 004cbc80: JNZ 0x004cbca1
//   XREF to: 004cbca1 (CONDITIONAL_JUMP)
// 004cbc82: MOV EAX,EBX
// 004cbc84: POP EBX
// 004cbc85: RET
// 004cbc86: PUSH 0x65e4e0
//   Label: LAB_004cbc86
//   XREF to: 0065e4e0 (DATA)
// 004cbc8b: PUSH EBX
// 004cbc8c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004cbc91: ADD ESP,0x8
// 004cbc94: PUSH EAX
// 004cbc95: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004cbc9a: ADD ESP,0x4
// 004cbc9d: MOV EAX,EBX
// 004cbc9f: POP EBX
// 004cbca0: RET
// 004cbca1: PUSH EAX
//   Label: LAB_004cbca1
// 004cbca2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004cbca7: ADD ESP,0x4
// 004cbcaa: MOV EAX,EBX
// 004cbcac: POP EBX
// 004cbcad: RET
