// Name: core_boxactor.cpp_CBoxActor_dtor_FUN_00423670
// Address: 00423670
// Address Range: [[00423670, 004236d4]]
// Convention: __cdecl
// Signature: CBoxActor * core_boxactor.cpp_CBoxActor_dtor_FUN_00423670(CBoxActor * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CBoxActorTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_box.cpp_CBox_dtor_FUN_0041dd00
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CBoxActor * __cdecl
core_boxactor_cpp_CBoxActor_dtor_FUN_00423670(CBoxActor *this_ptr,uint d1,uint d2,uint d3)

{
  CBox *pCVar1;
  CBoxActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBoxActorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00((CBox *)&this_ptr->sim_box);
  ptr = (CBoxActor *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar1[-2].scrape_points + 2),1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00423670: PUSH EBX
//   Label: core_boxactor.cpp_CBoxActor_dtor_FUN_00423670
// 00423671: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00423675: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0042367a: JNZ 0x004236ad
//   XREF to: 004236ad (CONDITIONAL_JUMP)
// 0042367c: PUSH 0x0
// 0042367e: ADD EBX,0x394
// 00423684: PUSH EBX
// 00423685: CALL core_box.cpp_CBox_dtor_FUN_0041dd00
//   XREF to: 0041dd00 (UNCONDITIONAL_CALL)
// 0042368a: ADD ESP,0x8
// 0042368d: PUSH 0x1
// 0042368f: LEA EBX,[EAX + 0xfffffc6c]
// 00423695: PUSH EBX
// 00423696: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0042369b: ADD ESP,0x8
// 0042369e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004236a2: MOV EBX,EAX
// 004236a4: TEST DL,0x2
// 004236a7: JNZ 0x004236c8
//   XREF to: 004236c8 (CONDITIONAL_JUMP)
// 004236a9: MOV EAX,EBX
// 004236ab: POP EBX
// 004236ac: RET
// 004236ad: PUSH 0x65b3d0
//   Label: LAB_004236ad
//   XREF to: 0065b3d0 (DATA)
// 004236b2: PUSH EBX
// 004236b3: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004236b8: ADD ESP,0x8
// 004236bb: PUSH EAX
// 004236bc: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004236c1: ADD ESP,0x4
// 004236c4: MOV EAX,EBX
// 004236c6: POP EBX
// 004236c7: RET
// 004236c8: PUSH EAX
//   Label: LAB_004236c8
// 004236c9: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004236ce: ADD ESP,0x4
// 004236d1: MOV EAX,EBX
// 004236d3: POP EBX
// 004236d4: RET
