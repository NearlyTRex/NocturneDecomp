// Name: core_motion.cpp_CMotionList_save_FUN_0052d170
// Address: 0052d170
// Address Range: [[0052d170, 0052d451]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionList_save_FUN_0052d170(CMotionList * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionList_save_FUN_0052d170(CMotionList *this_ptr,FILE *file_handle)

{
  CMotionList *pCVar1;
  int iVar2;
  uint unaff_EBP;
  uint unaff_EDI;
  char *pcVar3;
  uint *in_stack_00000010;
  int *piStack00000014;
  int iStack00000018;
  int in_stack_00000058;
  ulonglong uVar4;
  
  uVar4 = CONCAT44 /* combine 2-byte values */(unaff_EDI,unaff_EBP);
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
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",*(uint *)(iStack00000018 + 0x964))
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
                 *(uint *)(this_ptr->state_names[1] + 2),
                 *(uint *)(this_ptr->state_names[3] + 2));
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"// motion %d: exitForwardFromFrameNumber,exitForwardToMotionNumber,exitForwardToFrameNumber\n");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file_handle,"%d,%d,%g\n",*(uint *)(this_ptr->state_names[1] + 6));
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
