// Name: core_skeledit.cpp_FUN_005897b0
// Address: 005897b0
// Address Range: [[005897b0, 00589a33]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_005897b0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_005897b0(void)

{
  FILE *file;
  int iVar1;
  int iVar2;
  byte *puVar3;
  int local_10;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x28);
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("skeledit.ini",(char *)0x0,"rt","..\\core\\skeledit.cpp",
                    0x124);
  if (file == (FILE *)0x0) {
    return;
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&local_10);
  if (local_10 != 1) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x12d);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Deleting old %s file.","skeledit.ini");
    crt_io_c_deleteFile_FUN_005ff9d0("skeledit.ini");
    return;
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  DAT_03670848 = 0;
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if ((iVar2 < 0) || (iVar2 == 10)) goto LAB_00589863;
    puVar3 = &DAT_03670848;
  } while (iVar2 != 0x22);
  while ((iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file), -1 < iVar2 && (iVar2 != 10))) {
    if (iVar2 == 0x22) {
      iVar2 = 1;
      goto LAB_005899ac;
    }
    *puVar3 = (char)iVar2;
    puVar3[1] = 0;
    puVar3 = puVar3 + 1;
  }
  goto LAB_00589863;
  while ((iVar1 != 10 || (iVar2 = iVar2 + -1, 0 < iVar2))) {
LAB_00589a04:
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  }
  goto LAB_005898a6;
  while ((iVar1 != 10 || (iVar2 = iVar2 + -1, 0 < iVar2))) {
LAB_0058990c:
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  }
  goto LAB_00589923;
  while ((iVar1 != 10 || (iVar2 = iVar2 + -1, 0 < iVar2))) {
LAB_005899ac:
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  }
LAB_00589863:
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  DAT_03670950 = 0;
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if ((iVar2 < 0) || (iVar2 == 10)) goto LAB_005898a6;
    puVar3 = &DAT_03670950;
  } while (iVar2 != 0x22);
  while ((iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file), -1 < iVar2 && (iVar2 != 10))) {
    if (iVar2 == 0x22) {
      iVar2 = 1;
      goto LAB_00589a04;
    }
    *puVar3 = (char)iVar2;
    puVar3[1] = 0;
    puVar3 = puVar3 + 1;
  }
LAB_005898a6:
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  DAT_03670a58 = 0;
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if ((iVar2 < 0) || (iVar2 == 10)) goto LAB_00589923;
    puVar3 = &DAT_03670a58;
  } while (iVar2 != 0x22);
  while ((iVar2 = crt_stdio_c_fgetc_FUN_005fe840(file), -1 < iVar2 && (iVar2 != 10))) {
    if (iVar2 == 0x22) {
      iVar2 = 1;
      goto LAB_0058990c;
    }
    *puVar3 = (char)iVar2;
    puVar3[1] = 0;
    puVar3 = puVar3 + 1;
  }
LAB_00589923:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x13f);
  return;
}
