// Name: core_ammo.cpp_CAmmo_dtor_FUN_004114e0
// Address: 004114e0
// Address Range: [[004114e0, 0041152d]]
// Convention: __cdecl
// Signature: CAmmo * core_ammo.cpp_CAmmo_dtor_FUN_004114e0(CAmmo * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CAmmoTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_004114e0(CAmmo *this_ptr,uint d1,uint d2)

{
  CAmmo *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CAmmoTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CAmmo *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004114e0: PUSH EBX
//   Label: core_ammo.cpp_CAmmo_dtor_FUN_004114e0
// 004114e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004114e5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004114ea: JNZ 0x00411506
//   XREF to: 00411506 (CONDITIONAL_JUMP)
// 004114ec: PUSH 0x1
// 004114ee: PUSH EBX
// 004114ef: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004114f4: ADD ESP,0x8
// 004114f7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004114fb: MOV EBX,EAX
// 004114fd: TEST DL,0x2
// 00411500: JNZ 0x00411521
//   XREF to: 00411521 (CONDITIONAL_JUMP)
// 00411502: MOV EAX,EBX
// 00411504: POP EBX
// 00411505: RET
// 00411506: PUSH 0x659a90
//   Label: LAB_00411506
//   XREF to: 00659a90 (DATA)
// 0041150b: PUSH EBX
// 0041150c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00411511: ADD ESP,0x8
// 00411514: PUSH EAX
// 00411515: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0041151a: ADD ESP,0x4
// 0041151d: MOV EAX,EBX
// 0041151f: POP EBX
// 00411520: RET
// 00411521: PUSH EAX
//   Label: LAB_00411521
// 00411522: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00411527: ADD ESP,0x4
// 0041152a: MOV EAX,EBX
// 0041152c: POP EBX
// 0041152d: RET
