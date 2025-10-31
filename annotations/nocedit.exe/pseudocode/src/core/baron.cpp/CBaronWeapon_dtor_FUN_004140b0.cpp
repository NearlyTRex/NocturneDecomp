// Name: core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0
// Address: 004140b0
// Address Range: [[004140b0, 004140fd]]
// Convention: __cdecl
// Signature: CBaronWeapon * core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0(CBaronWeapon * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CBaronWeaponTypeInfo
// Function calls:
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CBaronWeapon * __cdecl
core_baron_cpp_CBaronWeapon_dtor_FUN_004140b0(CBaronWeapon *this_ptr,uint d1,uint d2)

{
  CBaronWeapon *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBaronWeaponTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CBaronWeapon *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004140b0: PUSH EBX
//   Label: core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0
// 004140b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004140b5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004140ba: JNZ 0x004140d6
//   XREF to: 004140d6 (CONDITIONAL_JUMP)
// 004140bc: PUSH 0x1
// 004140be: PUSH EBX
// 004140bf: CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   XREF to: 005edf80 (UNCONDITIONAL_CALL)
// 004140c4: ADD ESP,0x8
// 004140c7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004140cb: MOV EBX,EAX
// 004140cd: TEST DL,0x2
// 004140d0: JNZ 0x004140f1
//   XREF to: 004140f1 (CONDITIONAL_JUMP)
// 004140d2: MOV EAX,EBX
// 004140d4: POP EBX
// 004140d5: RET
// 004140d6: PUSH 0x65a2f0
//   Label: LAB_004140d6
//   XREF to: 0065a2f0 (DATA)
// 004140db: PUSH EBX
// 004140dc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004140e1: ADD ESP,0x8
// 004140e4: PUSH EAX
// 004140e5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004140ea: ADD ESP,0x4
// 004140ed: MOV EAX,EBX
// 004140ef: POP EBX
// 004140f0: RET
// 004140f1: PUSH EAX
//   Label: LAB_004140f1
// 004140f2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004140f7: ADD ESP,0x4
// 004140fa: MOV EAX,EBX
// 004140fc: POP EBX
// 004140fd: RET
