// Name: core_motion.cpp_CMotionController_load_FUN_0052e5d0
// Address: 0052e5d0
// Address Range: [[0052e5d0, 0052e663]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_load_FUN_0052e5d0(CMotionController * this_ptr, FILE * file_handle)
// Cross-references:
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0 (0040b9f0) at 0040ba29 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_0063ab2f
//   TerminatedCString s_d_f_0063ab31
//   TerminatedCString s_f_0063ab37
//   TerminatedCString s_core_motion_cpp_0063ab44
//   TerminatedCString s_CMotionController_load_e_0063ab57
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_load_FUN_0052e5d0(CMotionController *this_ptr,FILE *file_handle)

{
  int iVar1;
  
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," ");
  this_ptr->current_motion_name[0] = '\0';
  this_ptr->current_motion_index = -1;
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                    (file_handle,"%d,%f",&this_ptr->current_motion_index,
                     &this_ptr->current_frame_number);
  if ((iVar1 != 2) &&
     (iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (file_handle,"\"%[^\"]\" , %f",this_ptr->current_motion_name,
                         &this_ptr->current_frame_number), iVar1 != 2)) {
    g_CurrentFilename = "..\\core\\motion.cpp";
    g_CurrentLineNumber = 0x51e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMotionController::load - error parsing file");
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}


// Assembly code:
// 0052e5d0: PUSH EBX
//   Label: core_motion.cpp_CMotionController_load_FUN_0052e5d0
// 0052e5d1: PUSH EDI
// 0052e5d2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052e5d6: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052e5da: PUSH ESI
// 0052e5db: PUSH 0x63ab2f
//   XREF to: 0063ab2f (DATA)
// 0052e5e0: PUSH EDI
// 0052e5e1: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052e5e6: ADD ESP,0x8
// 0052e5e9: LEA ESI,[EBX + 0x8]
// 0052e5ec: PUSH ESI
// 0052e5ed: LEA EAX,[EBX + 0x4]
// 0052e5f0: PUSH EAX
// 0052e5f1: PUSH 0x63ab31
//   XREF to: 0063ab31 (DATA)
// 0052e5f6: MOV byte ptr [EBX + 0x30],0x0
// 0052e5fa: PUSH EDI
// 0052e5fb: MOV dword ptr [EBX + 0x4],0xffffffff
// 0052e602: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052e607: ADD ESP,0x10
// 0052e60a: CMP EAX,0x2
// 0052e60d: JNZ 0x0052e627
//   XREF to: 0052e627 (CONDITIONAL_JUMP)
// 0052e60f: MOV EBX,EDI
//   Label: LAB_0052e60f
// 0052e611: POP ESI
// 0052e612: PUSH EBX
//   Label: LAB_0052e612
// 0052e613: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052e618: ADD ESP,0x4
// 0052e61b: TEST EAX,EAX
// 0052e61d: JL 0x0052e624
//   XREF to: 0052e624 (CONDITIONAL_JUMP)
// 0052e61f: CMP EAX,0xa
// 0052e622: JNZ 0x0052e612
//   XREF to: 0052e612 (CONDITIONAL_JUMP)
// 0052e624: POP EDI
//   Label: LAB_0052e624
// 0052e625: POP EBX
// 0052e626: RET
// 0052e627: PUSH ESI
//   Label: LAB_0052e627
// 0052e628: ADD EBX,0x30
// 0052e62b: PUSH EBX
// 0052e62c: PUSH 0x63ab37
//   XREF to: 0063ab37 (DATA)
// 0052e631: PUSH EDI
// 0052e632: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052e637: ADD ESP,0x10
// 0052e63a: CMP EAX,0x2
// 0052e63d: JZ 0x0052e60f
//   XREF to: 0052e60f (CONDITIONAL_JUMP)
// 0052e63f: MOV EDX,0x63ab44
//   XREF to: 0063ab44 (PARAM)
// 0052e644: MOV ECX,0x51e
// 0052e649: PUSH 0x63ab57
//   XREF to: 0063ab57 (DATA)
// 0052e64e: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0052e654: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0052e65a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052e65f: ADD ESP,0x4
// 0052e662: JMP 0x0052e60f
//   XREF to: 0052e60f (UNCONDITIONAL_JUMP)
