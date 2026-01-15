// Name: core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0
// Address: 0058b3a0
// Address Range: [[0058b3a0, 0058b658]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton *this_ptr,FILE *file_handle)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  char *pcVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  CMotionList *in_stack_00000004;
  int local_1c;
  int local_18;
  int local_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x4c);
  crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)this_ptr,"// skeleton version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)this_ptr,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)this_ptr,"// bonecount, frameCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            ((FILE *)this_ptr,"%d,%d\n",
             *(uint *)(in_stack_00000004[1].state_names[2] + 0x10));
  iVar9 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)this_ptr,"// boneList\n");
  if (0 < *(int *)(in_stack_00000004[1].state_names[2] + 0x10)) {
    pcVar6 = in_stack_00000004[1].state_names[2] + 0x14;
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)this_ptr,"\"%s\", %d\n",pcVar6);
      iVar9 = iVar9 + 1;
      pcVar6 = pcVar6 + 0x24;
    } while (iVar9 < *(int *)(in_stack_00000004[1].state_names[2] + 0x10));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)this_ptr,"// angle list: w,x,y,z\n");
  pfVar7 = (float *)in_stack_00000004[1].motions[0].signals[0xb].frame_number;
  local_18 = 0;
  if (0 < in_stack_00000004[1].motions[0].signals[10].value) {
    do {
      iVar9 = 0;
      if (0 < *(int *)(in_stack_00000004[1].state_names[2] + 0x10)) {
        do {
          pfVar1 = pfVar7 + 3;
          pfVar2 = pfVar7 + 2;
          pfVar3 = pfVar7 + 1;
          fVar4 = *pfVar7;
          pfVar7 = pfVar7 + 4;
          iVar9 = iVar9 + 1;
          crt_stdio_c_fprintf_FUN_005fe6d0
                    ((FILE *)this_ptr,"%g,%g,%g,%g\n",(double)fVar4,(double)*pfVar3,
                     (double)*pfVar2,(double)*pfVar1);
        } while (iVar9 < *(int *)(in_stack_00000004[1].state_names[2] + 0x10));
      }
      local_18 = local_18 + 1;
    } while (local_18 < in_stack_00000004[1].motions[0].signals[10].value);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)this_ptr,"// root offset list: x,y,z\n");
  local_1c = 0;
  if (0 < in_stack_00000004[1].motions[0].signals[10].value) {
    iVar9 = 0;
    do {
      iVar5 = in_stack_00000004[1].motions[0].signals[0xb].value;
      crt_stdio_c_fprintf_FUN_005fe6d0
                ((FILE *)this_ptr,"%g,%g,%g\n",(double)*(float *)(iVar9 + iVar5),
                 (double)*(float *)(iVar9 + 4 + iVar5),(double)*(float *)(iVar9 + 8 + iVar5));
      iVar9 = iVar9 + 0xc;
      local_1c = local_1c + 1;
    } while (local_1c < in_stack_00000004[1].motions[0].signals[10].value);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)this_ptr,"// canceled movement list: x,y,z\n");
  local_14 = 0;
  if (0 < in_stack_00000004[1].motions[0].signals[10].value) {
    iVar9 = 0;
    do {
      iVar5 = in_stack_00000004[1].motions[0].signals[0xc].frame_number;
      crt_stdio_c_fprintf_FUN_005fe6d0
                ((FILE *)this_ptr,"%g,%g,%g\n",(double)*(float *)(iVar9 + iVar5),
                 (double)*(float *)(iVar9 + 4 + iVar5),(double)*(float *)(iVar9 + 8 + iVar5));
      iVar9 = iVar9 + 0xc;
      local_14 = local_14 + 1;
    } while (local_14 < in_stack_00000004[1].motions[0].signals[10].value);
  }
  core_motion_cpp_CMotionList_save_FUN_0052d170(in_stack_00000004,(FILE *)this_ptr);
  iVar9 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)this_ptr,"// reference bone org list: x,y,z\n");
  if (0 < *(int *)(in_stack_00000004[1].state_names[2] + 0x10)) {
    piVar8 = &in_stack_00000004[1].motions[0].signals[0xc].value;
    do {
      pfVar7 = (float *)(piVar8 + 2);
      pfVar1 = (float *)(piVar8 + 1);
      fVar4 = (float)*piVar8;
      piVar8 = piVar8 + 3;
      iVar9 = iVar9 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0
                ((FILE *)this_ptr,"%g,%g,%g\n",(double)fVar4,(double)*pfVar1,(double)*pfVar7);
    } while (iVar9 < *(int *)(in_stack_00000004[1].state_names[2] + 0x10));
  }
  if (((this_ptr->motion_list).state_names[0][8] & 0x20U) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x49f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::saveStream - error writing file.");
    return;
  }
  return;
}
