// Name: core_motion.cpp_CMotionList_load_FUN_0052cd70
// Address: 0052cd70
// Address Range: [[0052cd70, 0052d169]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionList_load_FUN_0052cd70(CMotionList * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionList_load_FUN_0052cd70(CMotionList *this_ptr,FILE *file_handle)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  FILE *unaff_EBX;
  BADSPACEBASE *in_ESP;
  FILE *in_stack_0000000c;
  int *in_stack_00000014;
  FILE *in_stack_00000018;
  int in_stack_00000020;
  FILE *pFStack00000028;
  uint uVar4;
  int in_stack_ffffffd4;
  int in_stack_ffffffd8;
  char *pcVar5;
  char *pcVar6;
  
  uVar4 = 0xffffffff;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&stack0xffffffd0,uVar4);
  if (in_stack_ffffffd4 < 0) {
    g_CurrentFilename = "..\\core\\motion.cpp";
    g_CurrentLineNumber = 0x5b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading motion list.");
  }
  if (2 < in_stack_ffffffd8) {
    g_CurrentFilename = "..\\core\\motion.cpp";
    g_CurrentLineNumber = 0x5d;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Can't read motion list - it's version %d, and I can only handle up to version %d.  (Probably you have an old .exe)",in_stack_ffffffd8);
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  if (0 < *in_stack_00000014) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%s\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)in_stack_00000018->_ptr);
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  if (0 < *(int *)(in_stack_00000020 + 0x964)) {
    puVar2 = (uint *)(in_stack_00000020 + 0x968);
LAB_0052ce73:
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (-1 < iVar1) {
        if (iVar1 != 10) goto LAB_0052ce73;
      }
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"\"%[^\"]\",%f,%d,%d,%d\n");
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d,%f\n");
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%f,%d\n");
      puVar2[0xc] = (uint)unaff_EBX;
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      pcVar6 = "%d,%f\n";
      pcVar5 = (char *)file_handle;
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%f\n");
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = 0;
      unaff_EBX = file_handle;
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
      if (0 < (int)puVar2[0x1a]) {
        in_stack_00000020 = (int)(puVar2 + 0x1b);
        pFStack00000028 = (FILE *)(puVar2 + 0x1d);
        do {
          pcVar3 = (char *)(in_stack_00000020 + iVar1 * 0x18);
          pcVar5 = "%d,%d,%d,%f,%f,%d\n";
          pcVar6 = pcVar3;
          unaff_EBX = pFStack00000028;
          crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d,%d,%f,%f,%d\n");
          iVar1 = iVar1 + 1;
          *(FILE **)(pcVar3 + 4) = in_stack_0000000c;
          pFStack00000028 = (FILE *)&pFStack00000028->_ungotten;
        } while (iVar1 < (int)puVar2[0x1a]);
      }
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      in_stack_0000000c = (FILE *)(puVar2 + 0x129);
      iVar1 = 0;
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
      if (0 < (int)puVar2[0x129]) {
        do {
          in_stack_0000000c = (FILE *)(puVar2 + iVar1 * 2 + 0x12a);
          iVar1 = iVar1 + 1;
          unaff_EBX = (FILE *)0x52d054;
          crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d\n");
        } while (iVar1 < (int)puVar2[0x129]);
      }
      if ((int)in_stack_00000018 < 2) {
        puVar2[0x148] = 0;
      }
      else {
        do {
          iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        in_stack_0000000c = file_handle;
        iVar1 = 0;
        crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d");
        if (0 < (int)puVar2[0x148]) {
          do {
            iVar1 = iVar1 + 1;
            crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d");
          } while (iVar1 < (int)puVar2[0x148]);
        }
        do {
          in_stack_00000018 = file_handle;
          iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
      }
      puVar2 = &((FILE *)((int)pcVar5 + 0x540))->_flag;
    } while ((int)(pcVar6 + 1) < *(int *)(in_stack_00000020 + 0x964));
  }
  return;
}
