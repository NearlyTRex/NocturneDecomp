// Name: core_flies.cpp_FUN_004cccb0
// Address: 004cccb0
// Address Range: [[004cccb0, 004ccd14]]
// Convention: __cdecl
// Signature: CFlies * core_flies.cpp_FUN_004cccb0(CFlies * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CFliesTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_flies.cpp_FUN_004ccd60
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_FUN_004cccb0(CFlies *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  CFlies *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CFliesTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_flies_cpp_FUN_004ccd60();
  ptr = (CFlies *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar1 + -0x168),1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004cccb0: PUSH EBX
//   Label: core_flies.cpp_FUN_004cccb0
// 004cccb1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cccb5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004cccba: JNZ 0x004ccced
//   XREF to: 004ccced (CONDITIONAL_JUMP)
// 004cccbc: PUSH 0x0
// 004cccbe: ADD EBX,0x168
// 004cccc4: PUSH EBX
// 004cccc5: CALL core_flies.cpp_FUN_004ccd60
//   XREF to: 004ccd60 (UNCONDITIONAL_CALL)
// 004cccca: ADD ESP,0x8
// 004ccccd: PUSH 0x1
// 004ccccf: LEA EBX,[EAX + 0xfffffe98]
// 004cccd5: PUSH EBX
// 004cccd6: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004cccdb: ADD ESP,0x8
// 004cccde: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004ccce2: MOV EBX,EAX
// 004ccce4: TEST DL,0x2
// 004ccce7: JNZ 0x004ccd08
//   XREF to: 004ccd08 (CONDITIONAL_JUMP)
// 004ccce9: MOV EAX,EBX
// 004ccceb: POP EBX
// 004cccec: RET
// 004ccced: PUSH 0x65e630
//   Label: LAB_004ccced
//   XREF to: 0065e630 (DATA)
// 004cccf2: PUSH EBX
// 004cccf3: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004cccf8: ADD ESP,0x8
// 004cccfb: PUSH EAX
// 004cccfc: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004ccd01: ADD ESP,0x4
// 004ccd04: MOV EAX,EBX
// 004ccd06: POP EBX
// 004ccd07: RET
// 004ccd08: PUSH EAX
//   Label: LAB_004ccd08
// 004ccd09: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004ccd0e: ADD ESP,0x4
// 004ccd11: MOV EAX,EBX
// 004ccd13: POP EBX
// 004ccd14: RET
