// Name: core_flamegun.cpp_FUN_004cbb00
// Address: 004cbb00
// Address Range: [[004cbb00, 004cbb4d]]
// Convention: __cdecl
// Signature: CFlameThrower * core_flamegun.cpp_FUN_004cbb00(CFlameThrower * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CFlameThrowerTypeInfo
// Function calls:
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CFlameThrower * __cdecl core_flamegun_cpp_FUN_004cbb00(CFlameThrower *this_ptr,uint d1,uint d2)

{
  CFlameThrower *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CFlameThrowerTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CFlameThrower *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004cbb00: PUSH EBX
//   Label: core_flamegun.cpp_FUN_004cbb00
// 004cbb01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cbb05: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004cbb0a: JNZ 0x004cbb26
//   XREF to: 004cbb26 (CONDITIONAL_JUMP)
// 004cbb0c: PUSH 0x1
// 004cbb0e: PUSH EBX
// 004cbb0f: CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   XREF to: 005edf80 (UNCONDITIONAL_CALL)
// 004cbb14: ADD ESP,0x8
// 004cbb17: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004cbb1b: MOV EBX,EAX
// 004cbb1d: TEST DL,0x2
// 004cbb20: JNZ 0x004cbb41
//   XREF to: 004cbb41 (CONDITIONAL_JUMP)
// 004cbb22: MOV EAX,EBX
// 004cbb24: POP EBX
// 004cbb25: RET
// 004cbb26: PUSH 0x65e390
//   Label: LAB_004cbb26
//   XREF to: 0065e390 (DATA)
// 004cbb2b: PUSH EBX
// 004cbb2c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004cbb31: ADD ESP,0x8
// 004cbb34: PUSH EAX
// 004cbb35: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004cbb3a: ADD ESP,0x4
// 004cbb3d: MOV EAX,EBX
// 004cbb3f: POP EBX
// 004cbb40: RET
// 004cbb41: PUSH EAX
//   Label: LAB_004cbb41
// 004cbb42: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004cbb47: ADD ESP,0x4
// 004cbb4a: MOV EAX,EBX
// 004cbb4c: POP EBX
// 004cbb4d: RET
