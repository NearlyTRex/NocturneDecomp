// Name: core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10
// Address: 00478e10
// Address Range: [[00478e10, 0047925a]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel * this_ptr, char * output_filename)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel *this_ptr,char *output_filename)

{
  FILE *file;
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint in_stack_0000000c;
  int in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_00000024;
  int iStack00000028;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  
  pcVar2 = output_filename;
  do {
    pcVar1 = pcVar2;
    if (*pcVar2 == ':') goto LAB_00478e35;
    if (*pcVar2 == '\0') break;
    pcVar1 = pcVar2 + 1;
    if (*pcVar1 == ':') goto LAB_00478e35;
    pcVar2 = pcVar2 + 2;
  } while (*pcVar1 != '\0');
  pcVar1 = (char *)0x0;
LAB_00478e35:
  pcVar2 = output_filename;
  if (pcVar1 == (char *)0x0) {
    do {
      pcVar1 = pcVar2;
      if (*pcVar2 == '\\') goto LAB_00478e57;
      if (*pcVar2 == '\0') break;
      pcVar1 = pcVar2 + 1;
      if (*pcVar1 == '\\') goto LAB_00478e57;
      pcVar2 = pcVar2 + 2;
    } while (*pcVar1 != '\0');
    pcVar1 = (char *)0x0;
LAB_00478e57:
    if (pcVar1 == (char *)0x0) {
      file = engine_dosio_c_getFile_FUN_00481a50("models",output_filename,"wt");
      goto LAB_00478e7f;
    }
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (output_filename,(char *)0x0,"wt","..\\core\\dmodel.cpp",0x569);
LAB_00478e7f:
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x56d;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Can't create demon model %s",in_stack_0000000c);
  }
  iVar3 = *(int *)(output_filename + 0x5698);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// .KFM version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",8);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// vertexCount,polyCount,textureCount,partCount,frameCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file,"%d,%d,%d,%d,%d\n",*(uint *)(in_stack_00000014 + 0x104),
             *(uint *)(in_stack_00000014 + 0x110),*(uint *)(in_stack_00000014 + 0x120),
             *(uint *)(in_stack_00000014 + 0x5584),*(uint *)(in_stack_00000014 + 0x100))
  ;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// useCollisionListFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",(uint)(iVar3 != 0));
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// transparentPixelFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",*(uint *)(in_stack_00000024 + 0x569c));
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// disableBackfaceCulling\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// envMapListFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// vertex list: x,y,z\n");
  for (iVar3 = 0; iVar3 < *(int *)(in_stack_0000003c + 0x104) * *(int *)(in_stack_0000003c + 0x100);
      iVar3 = iVar3 + 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d,%d\n");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// poly list: textureIndex, n, verts(index,x2s,y2s)\n");
  iStack00000028 = 0;
  if (0 < *(int *)(in_stack_00000040 + 0x110)) {
    in_stack_00000024 = 0;
    do {
      iVar3 = *(int *)(in_stack_00000040 + 0x114) + in_stack_00000024;
      iVar4 = 0;
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d");
      if (0 < *(int *)(iVar3 + 4)) {
        do {
          iVar4 = iVar4 + 1;
          crt_stdio_c_fprintf_FUN_005fe6d0(file,", %d,%d,%d");
        } while (iVar4 < *(int *)(iVar3 + 4));
      }
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"\n");
      in_stack_00000024 = in_stack_00000024 + 0x48;
      iStack00000028 = iStack00000028 + 1;
    } while (iStack00000028 < *(int *)(in_stack_00000040 + 0x110));
  }
  if (in_stack_0000001c != 0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"// envMapOpacity list\n");
    iVar3 = 0;
    if (0 < *(int *)(in_stack_00000040 + 0x110)) {
      do {
        crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_stack_00000040 + 0x110));
    }
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// texture list\n");
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000044 + 0x120)) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s\n");
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_stack_00000044 + 0x120));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// part list (vertexCount, polyCount)\n");
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000048 + 0x5584)) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d\n");
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_stack_00000048 + 0x5584));
  }
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x5e1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing model to %s");
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dmodel.cpp",0x5e5);
  return;
}
