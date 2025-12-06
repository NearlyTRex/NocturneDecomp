// Name: core_setutil.cpp_C3DSLight_load_FUN_00586310
// Address: 00586310
// Address Range: [[00586310, 00586a8b]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_load_FUN_00586310(C3DSLight * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_load_FUN_00586310(C3DSLight *this_ptr,FILE *file_handle)

{
  char *pcVar1;
  BADSPACEBASE *in_ESP;
  C3DSLight *pCVar2;
  int iVar3;
  int iVar4;
  char in_stack_0000001c;
  char cStack00000020;
  int in_stack_0000002c;
  C3DSLight *in_stack_00000030;
  char (*in_stack_00000034) [40];
  uint in_stack_00000038;
  uint in_stack_0000003c;
  
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffeb8,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%[^\n]\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffec0,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffec8,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffed0,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  if (g_CDemonSetPtr->set_file_version < 0x15) {
    this_ptr->aspect = 1.0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffed8,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  }
  if (g_CDemonSetPtr->set_file_version < 0x16) {
    this_ptr->intensity = 1.0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffee0,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  }
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffee0,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffee4,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f,%f,%f\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffeec,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef4,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffefc,0xff,file_handle);
  }
  if (g_CDemonSetPtr->set_file_version < 9) {
    this_ptr->blend_filter = 1;
  }
  else {
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  }
  iVar3 = 0;
  if (0 < this_ptr->filter_count) {
    _cStack00000020 = this_ptr->filter_indices;
    in_stack_00000034 = this_ptr->filter_names;
    in_stack_00000030 = this_ptr;
    do {
      in_stack_0000002c = iVar3 * 4;
      if (g_CDemonSetPtr->set_file_version < 0x10) {
        crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%s\n");
        this_ptr->filter_indices[iVar3] = 0;
      }
      else {
        crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%d,%s\n");
      }
      iVar3 = iVar3 + 1;
      in_stack_00000034 = in_stack_00000034 + 1;
      pcVar1 = in_stack_00000030->name;
      in_stack_00000030->filters[0] = (CDemonFilter *)0x0;
      in_stack_00000030 = (C3DSLight *)pcVar1;
    } while (iVar3 < this_ptr->filter_count);
  }
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff00,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  if (g_CDemonSetPtr->set_file_version < 0x13) {
    (this_ptr->filter_vel).x = 0;
    (this_ptr->filter_vel).y = 0;
    (this_ptr->filter_pos).x = 0;
    (this_ptr->filter_pos).y = 0;
    this_ptr->move_filter = 0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff04,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d,%d,%d,%d\n");
  }
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff0c,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff10,0xff,file_handle);
  if (g_CDemonSetPtr->set_file_version < 0xb) {
    iVar3 = 100;
    if (6 < g_CDemonSetPtr->set_file_version) {
      if (g_CDemonSetPtr->set_file_version < 0x1a) {
        iVar3 = 200;
      }
      else {
        iVar3 = 0xfa;
      }
    }
    if (iVar3 != 0) {
      iVar4 = 0;
      pCVar2 = this_ptr;
      do {
        if (g_CDemonSetPtr->set_file_version < 2) {
          crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
          pCVar2->visible_flags[0] = in_stack_0000001c;
          pcVar1 = this_ptr->field8_0x21e + iVar4 + 6;
          pcVar1[0] = '\x01';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1 = this_ptr->field8_0x21e + iVar4 + 10;
          pcVar1[0] = '>';
          pcVar1[1] = '\x01';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1 = this_ptr->field8_0x21e + iVar4 + 0xe;
          pcVar1[0] = '\x01';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1 = this_ptr->field8_0x21e + iVar4 + 0x12;
          pcVar1[0] = -0x12;
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
        }
        else {
          crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d,%d,%d,%d\n");
          pCVar2->visible_flags[0] = cStack00000020;
        }
        iVar4 = iVar4 + 0x10;
        pCVar2 = (C3DSLight *)((int)&pCVar2->light_type + 1);
      } while (iVar4 < iVar3 << 4);
    }
  }
  else {
    crt_memory_c_memset_FUN_005fde40(this_ptr->visible_flags,0,0xfa);
    crt_memory_c_memset_FUN_005fde40(this_ptr->field8_0x21e + 6,0,4000);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
    iVar3 = 0;
    if (0 < (int)_cStack00000020) {
      do {
        crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d,%d,%d,%d\n");
        if (0xf9 < (int)in_stack_00000030) {
          g_CurrentFilename = "..\\core\\setutil.cpp";
          g_CurrentLineNumber = 0x2d8;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid camera number in visiblilty list!");
        }
        this_ptr->visible_flags[in_stack_0000002c] = '\x01';
        *(C3DSLight **)(this_ptr->field8_0x21e + in_stack_0000002c * 0x10 + 6) = in_stack_00000030;
        *(uint *)(this_ptr->field8_0x21e + in_stack_0000002c * 0x10 + 10) = in_stack_00000038;
        *(char (**) [40])(this_ptr->field8_0x21e + in_stack_0000002c * 0x10 + 0xe) =
             in_stack_00000034;
        *(uint *)(this_ptr->field8_0x21e + in_stack_0000002c * 0x10 + 0x12) =
             in_stack_0000003c;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)_cStack00000020);
    }
  }
  *(float *)this_ptr->field12_0x11d8 = this_ptr->atten_end * this_ptr->atten_end;
  *(float *)(this_ptr->field12_0x11d8 + 4) = 1.0 / this_ptr->atten_end;
  return;
}
