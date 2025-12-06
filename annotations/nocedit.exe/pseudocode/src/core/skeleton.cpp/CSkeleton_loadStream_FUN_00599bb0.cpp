// Name: core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0
// Address: 00599bb0
// Address Range: [[00599bb0, 00599fb6]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0(CSkeleton * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CSkeleton_loadStream_FUN_00599bb0(CSkeleton *this_ptr,FILE *file_handle)

{
  int iVar1;
  int unaff_EBX;
  int unaff_ESI;
  FILE *in_stack_0000000c;
  FILE *in_stack_00000010;
  FILE *in_stack_00000018;
  CSkeleton *in_stack_0000001c;
  CMotionList *in_stack_00000020;
  FILE *in_stack_00000024;
  FILE *in_stack_00000028;
  int in_stack_ffffffe8;
  int in_stack_ffffffec;
  
  core_skeleton_cpp_CSkeleton_free_FUN_00599a50(this_ptr);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000000c);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%d\n");
  if (in_stack_ffffffe8 < 1) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x10d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid skeleton version");
  }
  if (in_stack_ffffffec < 2) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x10e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Old skeleton version %d not supported");
  }
  if (g_CSkeletonVersion < in_stack_ffffffec) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x10f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Skeleton version %d is newer than .EXE, which can only process up to version %d");
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000018);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)in_stack_0000001c,"%d,%d\n");
  core_skeleton_cpp_CSkeleton_allocMemory_FUN_00599910(in_stack_0000001c,unaff_ESI,unaff_EBX);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000024);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < (int)in_stack_00000024[0x170c]._link) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000024,"\"%[^\"]\",%d\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_stack_00000020[1].state_names[2] + 0x10));
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000024);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  if (0 < (int)in_stack_00000024[0x178d]._ptr) {
    do {
      iVar1 = 0;
      if (0 < *(int *)(in_stack_00000020[1].state_names[2] + 0x10)) {
        do {
          iVar1 = iVar1 + 1;
          crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000024,"%f,%f,%f,%f\n");
        } while (iVar1 < *(int *)(in_stack_00000020[1].state_names[2] + 0x10));
      }
      this_ptr = (CSkeleton *)((int)&(this_ptr->motion_list).state_count + 1);
    } while ((int)this_ptr < in_stack_00000020[1].motions[0].signals[10].value);
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000024);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < (int)in_stack_00000024[0x178d]._ptr) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000024,"%f,%f,%f\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_stack_00000020[1].motions[0].signals[10].value);
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000024);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < (int)in_stack_00000024[0x178d]._ptr) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000024,"%f,%f,%f\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_stack_00000020[1].motions[0].signals[10].value);
  }
  if ((in_stack_00000024->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x144;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::loadStream - error reading file.");
  }
  core_motion_cpp_CMotionList_load_FUN_0052cd70(in_stack_00000020,in_stack_00000024);
  if (unaff_EBX < 3) {
    in_stack_00000024[0x178d]._handle = -0x383cb080;
  }
  else {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000028);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < (int)in_stack_00000024[0x170c]._link) {
      do {
        crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000028,"%f,%f,%f\n");
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)in_stack_00000024[0x170c]._link);
    }
  }
  if ((in_stack_00000028->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x15f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::loadStream - error reading file.");
    return;
  }
  return;
}
