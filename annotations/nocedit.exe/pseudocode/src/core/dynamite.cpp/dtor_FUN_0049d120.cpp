// Name: core_dynamite.cpp_dtor_FUN_0049d120
// Address: 0049d120
// Address Range: [[0049d120, 0049d16d]]
// Convention: __cdecl
// Signature: CDynamite * core_dynamite.cpp_dtor_FUN_0049d120(CDynamite * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CDynamiteTypeInfo
// Function calls:
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_dtor_FUN_0049d120(CDynamite *this_ptr,uint d1,uint d2)

{
  CDynamite *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CDynamiteTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CDynamite *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0049d120: PUSH EBX
//   Label: core_dynamite.cpp_dtor_FUN_0049d120
// 0049d121: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049d125: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0049d12a: JNZ 0x0049d146
//   XREF to: 0049d146 (CONDITIONAL_JUMP)
// 0049d12c: PUSH 0x1
// 0049d12e: PUSH EBX
// 0049d12f: CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   XREF to: 005edf80 (UNCONDITIONAL_CALL)
// 0049d134: ADD ESP,0x8
// 0049d137: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0049d13b: MOV EBX,EAX
// 0049d13d: TEST DL,0x2
// 0049d140: JNZ 0x0049d161
//   XREF to: 0049d161 (CONDITIONAL_JUMP)
// 0049d142: MOV EAX,EBX
// 0049d144: POP EBX
// 0049d145: RET
// 0049d146: PUSH 0x65d420
//   Label: LAB_0049d146
//   XREF to: 0065d420 (DATA)
// 0049d14b: PUSH EBX
// 0049d14c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0049d151: ADD ESP,0x8
// 0049d154: PUSH EAX
// 0049d155: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0049d15a: ADD ESP,0x4
// 0049d15d: MOV EAX,EBX
// 0049d15f: POP EBX
// 0049d160: RET
// 0049d161: PUSH EAX
//   Label: LAB_0049d161
// 0049d162: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0049d167: ADD ESP,0x4
// 0049d16a: MOV EAX,EBX
// 0049d16c: POP EBX
// 0049d16d: RET
