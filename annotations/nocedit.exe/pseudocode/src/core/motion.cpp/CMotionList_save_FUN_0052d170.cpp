// Name: core_motion.cpp_CMotionList_save_FUN_0052d170
// Address: 0052d170
// Address Range: [[0052d170, 0052d451]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionList_save_FUN_0052d170(CMotionList * this_ptr, FILE * file_handle)
// Cross-references:
//   core_skeledit.cpp_FUN_0058b3a0 (0058b3a0) at 0058b5c2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_motion_list_version_0063a663
//   TerminatedCString s_d_0063a67b
//   TerminatedCString s_state_list_0063a67f
//   TerminatedCString s_d_0063a68e
//   TerminatedCString s_s_0063a692
//   TerminatedCString s_motion_count_0063a696
//   TerminatedCString s_d_0063a6a7
//   TerminatedCString s_motion_d_name_fps_state__0063a6ab
//   TerminatedCString s_s_g_d_d_d_0063a6e1
//   TerminatedCString s_motion_d_exitForwardFrom_0063a6f3
//   TerminatedCString s_d_d_g_0063a750
//   TerminatedCString s_motion_d_exitForwardCmd__0063a75a
//   TerminatedCString s_d_g_d_0063a7ad
//   TerminatedCString s_motion_d_exitBackwardToM_0063a7b7
//   TerminatedCString s_d_g_0063a7fb
//   TerminatedCString s_motion_d_transition_coun_0063a802
//   TerminatedCString s_d_0063a87a
//   TerminatedCString s_d_d_d_g_g_d_0063a87e
//   TerminatedCString s_motion_d_signal_count_li_0063a891
//   TerminatedCString s_d_0063a8c6
//   TerminatedCString s_d_d_0063a8ca
//   TerminatedCString s_motion_d_marker_count_li_0063a8d1
//   TerminatedCString s_d_0063a8f2
//   TerminatedCString s_d_0063a8f5
//   TerminatedCString s_anon_0063a8f9
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionList_save_FUN_0052d170(CMotionList *this_ptr,FILE *file_handle)

{
  CMotionList *pCVar1;
  int iVar2;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  char *pcVar3;
  undefined4 *in_stack_00000010;
  int *piStack00000014;
  int iStack00000018;
  int in_stack_00000058;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(unaff_EDI,unaff_EBP);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion list version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",2);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// state list\n",uVar4);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",*in_stack_00000010);
  iVar2 = 0;
  if (0 < *piStack00000014) {
    do {
      iVar2 = iVar2 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n");
    } while (iVar2 < *piStack00000014);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion count\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",*(undefined4 *)(iStack00000018 + 0x964))
  ;
  pcVar3 = (char *)0x0;
  if (0 < *(int *)(iStack00000018 + 0x964)) {
    this_ptr = (CMotionList *)(iStack00000018 + 0x968);
    do {
      pCVar1 = this_ptr;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d: \"name\",fps,state,frameStart,frameCount\n",pcVar3);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file_handle,"\"%s\",%g,%d,%d,%d\n",this_ptr,
                 (double)*(float *)(this_ptr->state_names[0] + 0x1c),
                 *(undefined4 *)(this_ptr->state_names[1] + 2),
                 *(undefined4 *)(this_ptr->state_names[3] + 2));
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d: exitForwardFromFrameNumber,exitForwardToMotionNumber,exitForwardToFrameNumber\n");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file_handle,"%d,%d,%g\n",*(undefined4 *)(this_ptr->state_names[1] + 6));
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d: exitForwardCmd,exitForwardTweenTime,exitForwardsetNewStateAsDesired\n");
      pcVar3 = "%d,%g,%d\n";
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d,%g,%d\n");
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d: exitBackwardToMotionNumber,exitBackwardToFrameNumber\n");
      this_ptr = (CMotionList *)0x52d2f4;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d,%g\n");
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d transition count, list: desiredState, cmd, toMotionNumber, toFrameNumber, tweenTime, setNewStateAsDesired\n");
      iVar2 = 0;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
      if (0 < *(int *)(pCVar1->state_names[3] + 10)) {
        do {
          this_ptr = (CMotionList *)"%d,%d,%d,%g,%g,%d\n";
          iVar2 = iVar2 + 1;
          pcVar3 = (char *)file_handle;
          crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d,%d,%d,%g,%g,%d\n");
        } while (iVar2 < *(int *)(pCVar1->state_names[3] + 10));
      }
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d signal count, list: frameNumber, value\n");
      iVar2 = 0;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
      if (0 < *(int *)(pCVar1->state_names[0x27] + 0xe)) {
        do {
          iVar2 = iVar2 + 1;
          crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d,%d\n");
        } while (iVar2 < *(int *)(pCVar1->state_names[0x27] + 0xe));
      }
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d marker count, list\n");
      iVar2 = 0;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d");
      if (0 < *(int *)(pCVar1->state_names[0x2b] + 0x12)) {
        do {
          iVar2 = iVar2 + 1;
          crt_stdio_c_fprintf_FUN_005fe6d0(file_handle," %d");
        } while (iVar2 < *(int *)(pCVar1->state_names[0x2b] + 0x12));
      }
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"\n");
      pcVar3 = (char *)((int)&((FILE *)pcVar3)->_ptr + 1);
    } while ((int)pcVar3 < *(int *)(in_stack_00000058 + 0x964));
  }
  return;
}


// Assembly code:
// 0052d170: PUSH EBX
//   Label: core_motion.cpp_CMotionList_save_FUN_0052d170
// 0052d171: PUSH ESI
// 0052d172: PUSH EDI
// 0052d173: PUSH EBP
// 0052d174: SUB ESP,0x8
// 0052d177: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0052d17b: PUSH 0x63a663
//   XREF to: 0063a663 (DATA)
// 0052d180: PUSH ESI
// 0052d181: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d186: ADD ESP,0x8
// 0052d189: PUSH 0x2
// 0052d18b: PUSH 0x63a67b
//   XREF to: 0063a67b (DATA)
// 0052d190: PUSH ESI
// 0052d191: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d196: ADD ESP,0xc
// 0052d199: PUSH 0x63a67f
//   XREF to: 0063a67f (DATA)
// 0052d19e: PUSH ESI
// 0052d19f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d1a4: ADD ESP,0x8
// 0052d1a7: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0052d1ab: MOV EDX,dword ptr [EBX]
// 0052d1ad: PUSH EDX
// 0052d1ae: PUSH 0x63a68e
//   XREF to: 0063a68e (DATA)
// 0052d1b3: PUSH ESI
// 0052d1b4: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d1b9: ADD ESP,0xc
// 0052d1bc: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0052d1c0: MOV ECX,dword ptr [EDI]
// 0052d1c2: XOR EBX,EBX
// 0052d1c4: TEST ECX,ECX
// 0052d1c6: JLE 0x0052d1f0
//   XREF to: 0052d1f0 (CONDITIONAL_JUMP)
// 0052d1c8: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0052d1cc: ADD EDI,0x4
// 0052d1cf: PUSH EDI
//   Label: LAB_0052d1cf
// 0052d1d0: PUSH 0x63a692
//   XREF to: 0063a692 (DATA)
// 0052d1d5: PUSH ESI
// 0052d1d6: INC EBX
// 0052d1d7: ADD EDI,0x1e
// 0052d1da: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d1df: MOV EAX,dword ptr [EBP]
// 0052d1e2: ADD ESP,0xc
// 0052d1e5: CMP EBX,EAX
// 0052d1e7: JL 0x0052d1cf
//   XREF to: 0052d1cf (CONDITIONAL_JUMP)
// 0052d1e9: LEA EAX,[EAX]
// 0052d1ef: NOP
// 0052d1f0: PUSH 0x63a696
//   Label: LAB_0052d1f0
//   XREF to: 0063a696 (DATA)
// 0052d1f5: PUSH ESI
// 0052d1f6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d1fb: ADD ESP,0x8
// 0052d1fe: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0052d202: MOV EDX,dword ptr [EBX + 0x964]
// 0052d208: PUSH EDX
// 0052d209: PUSH 0x63a6a7
//   XREF to: 0063a6a7 (DATA)
// 0052d20e: PUSH ESI
// 0052d20f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d214: ADD ESP,0xc
// 0052d217: XOR ECX,ECX
// 0052d219: MOV EDI,dword ptr [EBX + 0x964]
// 0052d21f: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x18] (DATA)
// 0052d222: TEST EDI,EDI
// 0052d224: JLE 0x0052d44a
//   XREF to: 0052d44a (CONDITIONAL_JUMP)
// 0052d22a: ADD EBX,0x968
// 0052d230: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0052d234: MOV ECX,dword ptr [ESP]
//   Label: LAB_0052d234
//   XREF to: Stack[-0x18] (DATA)
// 0052d237: PUSH ECX
// 0052d238: PUSH 0x63a6ab
//   XREF to: 0063a6ab (DATA)
// 0052d23d: PUSH ESI
// 0052d23e: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0052d242: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d247: ADD ESP,0xc
// 0052d24a: MOV EBP,dword ptr [EDI + 0x64]
// 0052d24d: PUSH EBP
// 0052d24e: MOV EAX,dword ptr [EDI + 0x60]
// 0052d251: PUSH EAX
// 0052d252: MOV EDX,dword ptr [EDI + 0x24]
// 0052d255: PUSH EDX
// 0052d256: SUB ESP,0x8
// 0052d259: FLD float ptr [EDI + 0x20]
// 0052d25c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0052d25f: PUSH EDI
// 0052d260: PUSH 0x63a6e1
//   XREF to: 0063a6e1 (DATA)
// 0052d265: PUSH ESI
// 0052d266: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d26b: ADD ESP,0x20
// 0052d26e: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0052d271: PUSH EBX
// 0052d272: PUSH 0x63a6f3
//   XREF to: 0063a6f3 (DATA)
// 0052d277: PUSH ESI
// 0052d278: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d27d: ADD ESP,0xc
// 0052d280: SUB ESP,0x8
// 0052d283: FLD float ptr [EDI + 0x38]
// 0052d286: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0052d289: MOV EBP,dword ptr [EDI + 0x34]
// 0052d28c: PUSH EBP
// 0052d28d: MOV EAX,dword ptr [EDI + 0x28]
// 0052d290: PUSH EAX
// 0052d291: PUSH 0x63a750
//   XREF to: 0063a750 (DATA)
// 0052d296: PUSH ESI
// 0052d297: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d29c: ADD ESP,0x18
// 0052d29f: PUSH EBX
// 0052d2a0: PUSH 0x63a75a
//   XREF to: 0063a75a (DATA)
// 0052d2a5: PUSH ESI
// 0052d2a6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d2ab: ADD ESP,0xc
// 0052d2ae: MOV ECX,dword ptr [EDI + 0x40]
// 0052d2b1: PUSH ECX
// 0052d2b2: SUB ESP,0x8
// 0052d2b5: FLD float ptr [EDI + 0x3c]
// 0052d2b8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0052d2bb: MOV EBP,dword ptr [EDI + 0x30]
// 0052d2be: PUSH EBP
// 0052d2bf: PUSH 0x63a7ad
//   XREF to: 0063a7ad (DATA)
// 0052d2c4: PUSH ESI
// 0052d2c5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d2ca: ADD ESP,0x18
// 0052d2cd: PUSH EBX
// 0052d2ce: PUSH 0x63a7b7
//   XREF to: 0063a7b7 (DATA)
// 0052d2d3: PUSH ESI
// 0052d2d4: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d2d9: ADD ESP,0xc
// 0052d2dc: SUB ESP,0x8
// 0052d2df: FLD float ptr [EDI + 0x54]
// 0052d2e2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0052d2e5: MOV EDX,dword ptr [EDI + 0x50]
// 0052d2e8: PUSH EDX
// 0052d2e9: PUSH 0x63a7fb
//   XREF to: 0063a7fb (DATA)
// 0052d2ee: PUSH ESI
// 0052d2ef: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d2f4: ADD ESP,0x14
// 0052d2f7: PUSH EBX
// 0052d2f8: PUSH 0x63a802
//   XREF to: 0063a802 (DATA)
// 0052d2fd: PUSH ESI
// 0052d2fe: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d303: ADD ESP,0xc
// 0052d306: MOV EBP,dword ptr [EDI + 0x68]
// 0052d309: PUSH EBP
// 0052d30a: PUSH 0x63a87a
//   XREF to: 0063a87a (DATA)
// 0052d30f: PUSH ESI
// 0052d310: XOR EBP,EBP
// 0052d312: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d317: MOV EAX,dword ptr [EDI + 0x68]
// 0052d31a: ADD ESP,0xc
// 0052d31d: TEST EAX,EAX
// 0052d31f: JLE 0x0052d35e
//   XREF to: 0052d35e (CONDITIONAL_JUMP)
// 0052d321: LEA EBX,[EDI + 0x6c]
// 0052d324: MOV EDX,dword ptr [EBX + 0x14]
//   Label: LAB_0052d324
// 0052d327: PUSH EDX
// 0052d328: SUB ESP,0x8
// 0052d32b: FLD float ptr [EBX + 0x10]
// 0052d32e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0052d331: SUB ESP,0x8
// 0052d334: FLD float ptr [EBX + 0xc]
// 0052d337: FSTP double ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0052d33a: MOV ECX,dword ptr [EBX + 0x8]
// 0052d33d: PUSH ECX
// 0052d33e: MOV EAX,dword ptr [EBX + 0x4]
// 0052d341: PUSH EAX
// 0052d342: MOV EDX,dword ptr [EBX]
// 0052d344: PUSH EDX
// 0052d345: PUSH 0x63a87e
//   XREF to: 0063a87e (DATA)
// 0052d34a: PUSH ESI
// 0052d34b: ADD EBX,0x18
// 0052d34e: INC EBP
// 0052d34f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d354: MOV ECX,dword ptr [EDI + 0x68]
// 0052d357: ADD ESP,0x28
// 0052d35a: CMP EBP,ECX
// 0052d35c: JL 0x0052d324
//   XREF to: 0052d324 (CONDITIONAL_JUMP)
// 0052d35e: MOV EBX,dword ptr [ESP]
//   Label: LAB_0052d35e
//   XREF to: Stack[-0x18] (DATA)
// 0052d361: PUSH EBX
// 0052d362: PUSH 0x63a891
//   XREF to: 0063a891 (DATA)
// 0052d367: PUSH ESI
// 0052d368: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d36d: ADD ESP,0xc
// 0052d370: MOV EBP,dword ptr [EDI + 0x4a4]
// 0052d376: PUSH EBP
// 0052d377: PUSH 0x63a8c6
//   XREF to: 0063a8c6 (DATA)
// 0052d37c: PUSH ESI
// 0052d37d: XOR EBP,EBP
// 0052d37f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d384: MOV EAX,dword ptr [EDI + 0x4a4]
// 0052d38a: ADD ESP,0xc
// 0052d38d: TEST EAX,EAX
// 0052d38f: JLE 0x0052d3bd
//   XREF to: 0052d3bd (CONDITIONAL_JUMP)
// 0052d391: MOV EBX,EDI
// 0052d393: MOV EDX,dword ptr [EBX + 0x4ac]
//   Label: LAB_0052d393
// 0052d399: PUSH EDX
// 0052d39a: MOV ECX,dword ptr [EBX + 0x4a8]
// 0052d3a0: PUSH ECX
// 0052d3a1: PUSH 0x63a8ca
//   XREF to: 0063a8ca (DATA)
// 0052d3a6: PUSH ESI
// 0052d3a7: ADD EBX,0x8
// 0052d3aa: INC EBP
// 0052d3ab: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d3b0: MOV EAX,dword ptr [EDI + 0x4a4]
// 0052d3b6: ADD ESP,0x10
// 0052d3b9: CMP EBP,EAX
// 0052d3bb: JL 0x0052d393
//   XREF to: 0052d393 (CONDITIONAL_JUMP)
// 0052d3bd: MOV EDX,dword ptr [ESP]
//   Label: LAB_0052d3bd
//   XREF to: Stack[-0x18] (DATA)
// 0052d3c0: PUSH EDX
// 0052d3c1: PUSH 0x63a8d1
//   XREF to: 0063a8d1 (DATA)
// 0052d3c6: PUSH ESI
// 0052d3c7: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d3cc: ADD ESP,0xc
// 0052d3cf: MOV ECX,dword ptr [EDI + 0x520]
// 0052d3d5: PUSH ECX
// 0052d3d6: PUSH 0x63a8f2
//   XREF to: 0063a8f2 (DATA)
// 0052d3db: PUSH ESI
// 0052d3dc: XOR EBP,EBP
// 0052d3de: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d3e3: MOV EBX,dword ptr [EDI + 0x520]
// 0052d3e9: ADD ESP,0xc
// 0052d3ec: TEST EBX,EBX
// 0052d3ee: JLE 0x0052d415
//   XREF to: 0052d415 (CONDITIONAL_JUMP)
// 0052d3f0: MOV EBX,EDI
// 0052d3f2: MOV EAX,dword ptr [EBX + 0x524]
//   Label: LAB_0052d3f2
// 0052d3f8: PUSH EAX
// 0052d3f9: PUSH 0x63a8f5
//   XREF to: 0063a8f5 (DATA)
// 0052d3fe: PUSH ESI
// 0052d3ff: ADD EBX,0x4
// 0052d402: INC EBP
// 0052d403: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d408: MOV EDX,dword ptr [EDI + 0x520]
// 0052d40e: ADD ESP,0xc
// 0052d411: CMP EBP,EDX
// 0052d413: JL 0x0052d3f2
//   XREF to: 0052d3f2 (CONDITIONAL_JUMP)
// 0052d415: PUSH 0x63a8f9
//   Label: LAB_0052d415
//   XREF to: 0063a8f9 (DATA)
// 0052d41a: PUSH ESI
// 0052d41b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052d420: ADD ESP,0x8
// 0052d423: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0052d427: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0052d42a: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0052d42e: ADD EBP,0x54c
// 0052d434: INC EAX
// 0052d435: MOV EDX,dword ptr [EDI + 0x964]
// 0052d43b: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0052d43f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0052d442: CMP EAX,EDX
// 0052d444: JL 0x0052d234
//   XREF to: 0052d234 (CONDITIONAL_JUMP)
// 0052d44a: ADD ESP,0x8
//   Label: LAB_0052d44a
// 0052d44d: POP EBP
// 0052d44e: POP EDI
// 0052d44f: POP ESI
// 0052d450: POP EBX
// 0052d451: RET
