// Name: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110
// Address: 00477110
// Address Range: [[00477110, 0047768b]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110(CKeyFramedModel * this_ptr, FILE * file)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004775bb) */
/* WARNING: Removing unreachable block (ram,0x00477650) */
/* WARNING: Removing unreachable block (ram,0x004775e6) */
/* WARNING: Removing unreachable block (ram,0x004775ed) */
/* WARNING: Removing unreachable block (ram,0x004775fa) */
/* WARNING: Removing unreachable block (ram,0x004775ff) */
/* WARNING: Removing unreachable block (ram,0x00477604) */
/* WARNING: Removing unreachable block (ram,0x00477618) */
/* WARNING: Removing unreachable block (ram,0x0047764b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00477110(CKeyFramedModel *this_ptr,FILE *file)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CKeyFramedModel *in_stack_00000018;
  CKeyFramedModel *in_stack_00000024;
  int in_stack_00000028;
  uint uVar3;
  int in_stack_ffffffc4;
  int in_stack_ffffffc8;
  int in_stack_ffffffd4;
  int in_stack_ffffffd8;
  int in_stack_ffffffdc;
  int local_20;
  int local_1c;
  
  iVar2 = 1;
  uVar3 = 0xffffffff;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&stack0xffffffc0,uVar3);
  if (in_stack_ffffffc4 < 5) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x128;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("KFM file is invalid version %d",in_stack_ffffffc4);
  }
  if (8 < in_stack_ffffffc8) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 299;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("KFM file is version %d, this .exe can only handle up to version %d",in_stack_ffffffc8);
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file,"%d,%d,%d,%d,%d\n",&stack0xffffffd0,&stack0xffffffd4,&stack0xffffffd8);
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
            (in_stack_00000018,in_stack_ffffffd4,in_stack_ffffffd8,in_stack_ffffffdc,local_20,
             local_1c);
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n");
  if (in_stack_ffffffdc < 6) {
    in_stack_00000024->transparent_pixel_flag = 0;
  }
  else {
    iVar2 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n");
  }
  if (in_stack_ffffffdc < 8) {
    in_stack_00000024->disable_backface_culling = 0;
  }
  else {
    iVar2 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n");
  }
  if (6 < in_stack_ffffffdc) {
    iVar2 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n");
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  for (iVar2 = 0; iVar2 < in_stack_00000024->vertex_count * in_stack_00000024->frame_count;
      iVar2 = iVar2 + 1) {
    crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d,%d,%d\n");
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  if (0 < *(int *)(in_stack_00000028 + 0x110)) {
    this_ptr = (CKeyFramedModel *)0x0;
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d,%d");
      iVar2 = 0;
      if (0 < _DAT_00000004) {
        this_ptr = (CKeyFramedModel *)0x18;
        do {
          crt_stdio_c_fscanf_FUN_005fe7c0(file,", %d,%d,%d");
          iVar2 = iVar2 + 1;
        } while (iVar2 < _DAT_00000004);
      }
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"\n");
      this_ptr = (CKeyFramedModel *)(this_ptr->model_filename + 1);
    } while ((int)this_ptr < in_stack_00000024->poly_count);
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000028 + 0x120)) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"%[^\n]\n");
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_stack_00000024->texture_count);
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000028 + 0x5584)) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d,%d\n");
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_stack_00000024->part_count);
  }
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x197;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading KFM model");
  }
  if (in_stack_ffffffd8 == 0) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(in_stack_00000024);
  return;
}
