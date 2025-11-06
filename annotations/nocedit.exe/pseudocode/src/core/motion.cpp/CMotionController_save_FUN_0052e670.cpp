// Name: core_motion.cpp_CMotionController_save_FUN_0052e670
// Address: 0052e670
// Address Range: [[0052e670, 0052e6f6]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_save_FUN_0052e670(CMotionController * this_ptr, FILE * file_handle)
// Cross-references:
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0 (0040b9f0) at 0040baac [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_motion_cpp_0063ab84
//   TerminatedCString s_Tried_to_save_motion_con_0063ab97
//   TerminatedCString s_s_s_g_current_motion_nam_0063abe2
//   TerminatedCString s_s_s_g_current_motion_nam_0063ac14
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_save_FUN_0052e670(CMotionController *this_ptr,FILE *file_handle)

{
  SMotion *pSVar1;
  undefined4 in_stack_0000000c;
  undefined4 uVar2;
  
  if (this_ptr->current_motion_name[0] == '\0') {
    if (this_ptr->motion_list_ptr == (CMotionList *)0x0) {
      g_CurrentFilename = "..\\core\\motion.cpp";
      g_CurrentLineNumber = 0x536;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to save motion controller state without setting motion list pointer!");
    }
    uVar2 = (undefined4)((ulonglong)(double)this_ptr->current_frame_number >> 0x20);
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
    crt_stdio_c_fprintf_FUN_005fe6d0
              (file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",in_stack_0000000c,pSVar1,uVar2);
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n");
  return;
}


// Assembly code:
// 0052e670: PUSH EBX
//   Label: core_motion.cpp_CMotionController_save_FUN_0052e670
// 0052e671: PUSH EDI
// 0052e672: PUSH EBP
// 0052e673: MOV EBP,ESP
// 0052e675: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0052e678: CMP byte ptr [EBX + 0x30],0x0
// 0052e67c: JNZ 0x0052e6d1
//   XREF to: 0052e6d1 (CONDITIONAL_JUMP)
// 0052e67e: CMP dword ptr [EBX],0x0
// 0052e681: JNZ 0x0052e6a5
//   XREF to: 0052e6a5 (CONDITIONAL_JUMP)
// 0052e683: MOV EDI,0x63ab84
//   XREF to: 0063ab84 (DATA)
// 0052e688: MOV EAX,0x536
// 0052e68d: PUSH 0x63ab97
//   XREF to: 0063ab97 (DATA)
// 0052e692: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0052e698: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0052e69d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052e6a2: ADD ESP,0x4
// 0052e6a5: SUB ESP,0x8
//   Label: LAB_0052e6a5
// 0052e6a8: FLD float ptr [EBX + 0x8]
// 0052e6ab: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0052e6ae: PUSH EBX
// 0052e6af: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0052e6b4: ADD ESP,0x4
// 0052e6b7: PUSH EAX
// 0052e6b8: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0052e6bb: PUSH EDX
// 0052e6bc: PUSH 0x63abe2
//   XREF to: 0063abe2 (DATA)
// 0052e6c1: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0052e6c4: PUSH ECX
// 0052e6c5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052e6ca: ADD ESP,0x18
// 0052e6cd: POP EBP
// 0052e6ce: POP EDI
// 0052e6cf: POP EBX
// 0052e6d0: RET
// 0052e6d1: SUB ESP,0x8
//   Label: LAB_0052e6d1
// 0052e6d4: FLD float ptr [EBX + 0x8]
// 0052e6d7: ADD EBX,0x30
// 0052e6da: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0052e6dd: PUSH EBX
// 0052e6de: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0052e6e1: PUSH EDX
// 0052e6e2: PUSH 0x63ac14
//   XREF to: 0063ac14 (DATA)
// 0052e6e7: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0052e6ea: PUSH ECX
// 0052e6eb: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052e6f0: ADD ESP,0x18
// 0052e6f3: POP EBP
// 0052e6f4: POP EDI
// 0052e6f5: POP EBX
// 0052e6f6: RET
