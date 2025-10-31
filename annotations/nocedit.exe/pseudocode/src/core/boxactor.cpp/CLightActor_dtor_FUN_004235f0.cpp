// Name: core_boxactor.cpp_CLightActor_dtor_FUN_004235f0
// Address: 004235f0
// Address Range: [[004235f0, 00423664]]
// Convention: __cdecl
// Signature: CLightActor * core_boxactor.cpp_CLightActor_dtor_FUN_004235f0(CLightActor * this_ptr, uint d1)
// Globals:
//   WatcomTypeInfo g_CLightActorTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_box.cpp_CBox_dtor_FUN_0041dd00
//   core_dlight.cpp_CDemonLight_dtor_FUN_00472760
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_004235f0(CLightActor *this_ptr,uint d1)

{
  CDemonLight *pCVar1;
  CBox *pCVar2;
  CLightActor *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  byte in_stack_00000014;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CLightActorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_dlight_cpp_CDemonLight_dtor_FUN_00472760
                     ((CDemonLight *)(this_ptr->field1_0x66c + 4),0,unaff_EBX,unaff_retaddr);
  pCVar2 = core_box_cpp_CBox_dtor_FUN_0041dd00
                     ((CBox *)(pCVar1[-1].saved_screen_buffer_rows + 0x3ff));
  ptr = (CLightActor *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-2].scrape_points + 2),1);
  if ((in_stack_00000014 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004235f0: PUSH EBX
//   Label: core_boxactor.cpp_CLightActor_dtor_FUN_004235f0
// 004235f1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004235f5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004235fa: JNZ 0x0042363d
//   XREF to: 0042363d (CONDITIONAL_JUMP)
// 004235fc: PUSH 0x0
// 004235fe: ADD EBX,0x670
// 00423604: PUSH EBX
// 00423605: CALL core_dlight.cpp_CDemonLight_dtor_FUN_00472760
//   XREF to: 00472760 (UNCONDITIONAL_CALL)
// 0042360a: ADD ESP,0x8
// 0042360d: PUSH 0x0
// 0042360f: SUB EAX,0x2dc
// 00423614: PUSH EAX
// 00423615: CALL core_box.cpp_CBox_dtor_FUN_0041dd00
//   XREF to: 0041dd00 (UNCONDITIONAL_CALL)
// 0042361a: ADD ESP,0x8
// 0042361d: PUSH 0x1
// 0042361f: LEA EBX,[EAX + 0xfffffc6c]
// 00423625: PUSH EBX
// 00423626: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0042362b: ADD ESP,0x8
// 0042362e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00423632: MOV EBX,EAX
// 00423634: TEST DL,0x2
// 00423637: JNZ 0x00423658
//   XREF to: 00423658 (CONDITIONAL_JUMP)
// 00423639: MOV EAX,EBX
// 0042363b: POP EBX
// 0042363c: RET
// 0042363d: PUSH 0x65b3b0
//   Label: LAB_0042363d
//   XREF to: 0065b3b0 (DATA)
// 00423642: PUSH EBX
// 00423643: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00423648: ADD ESP,0x8
// 0042364b: PUSH EAX
// 0042364c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00423651: ADD ESP,0x4
// 00423654: MOV EAX,EBX
// 00423656: POP EBX
// 00423657: RET
// 00423658: PUSH EAX
//   Label: LAB_00423658
// 00423659: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0042365e: ADD ESP,0x4
// 00423661: MOV EAX,EBX
// 00423663: POP EBX
// 00423664: RET
