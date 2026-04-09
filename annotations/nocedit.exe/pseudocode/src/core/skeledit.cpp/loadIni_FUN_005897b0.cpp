// Name: core_skeledit.cpp_loadIni_FUN_005897b0
// Address: 005897b0
// Address Range: [[005897b0, 00589a38]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_loadIni_FUN_005897b0(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_loadIni_FUN_005897b0(void)

{
  _FILE *file;
  int iVar1;
  int iVar3;
  int iVar2;
  int iVar4;
  char *pcVar3;
  char *pcVar5;
  int local_10;
  
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("skeledit.ini",(char *)0x0,"rt","..\\core\\skeledit.cpp",
                    0x124);
  if (file == (_FILE *)0x0) {
    return;
  }
  iVar2 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  _fscanf(file,"%d\n",&local_10);
  if (local_10 != 1) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x12d);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Deleting old %s file.","skeledit.ini");
    remove("skeledit.ini");
    return;
  }
  iVar4 = 1;
  do {
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  g_SkeleditLastPOSImported[0] = '\0';
  do {
    iVar4 = _fgetc(file);
    if ((iVar4 < 0) || (iVar4 == 10)) goto LAB_00589863;
    pcVar5 = g_SkeleditLastPOSImported;
  } while (iVar4 != 0x22);
  while ((iVar4 = _fgetc(file), -1 < iVar4 && (iVar4 != 10))) {
    if (iVar4 == 0x22) {
      iVar4 = 1;
      goto LAB_005899ac;
    }
    *pcVar5 = (char)iVar4;
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 1;
  }
  goto LAB_00589863;
  while ((iVar3 != 10 || (iVar4 = iVar4 + -1, 0 < iVar4))) {
LAB_00589a04:
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  }
  goto LAB_005898a6;
  while ((iVar3 != 10 || (iVar4 = iVar4 + -1, 0 < iVar4))) {
LAB_0058990c:
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  }
  goto LAB_00589923;
  while ((iVar3 != 10 || (iVar4 = iVar4 + -1, 0 < iVar4))) {
LAB_005899ac:
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  }
LAB_00589863:
  iVar4 = 1;
  do {
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  g_SkeleditLastMOTImported[0] = '\0';
  do {
    iVar4 = _fgetc(file);
    if ((iVar4 < 0) || (iVar4 == 10)) goto LAB_005898a6;
    pcVar5 = g_SkeleditLastMOTImported;
  } while (iVar4 != 0x22);
  while ((iVar4 = _fgetc(file), -1 < iVar4 && (iVar4 != 10))) {
    if (iVar4 == 0x22) {
      iVar4 = 1;
      goto LAB_00589a04;
    }
    *pcVar5 = (char)iVar4;
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 1;
  }
LAB_005898a6:
  iVar4 = 1;
  do {
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  g_SkeleditLastTestSkeletonDir[0] = '\0';
  do {
    iVar4 = _fgetc(file);
    if ((iVar4 < 0) || (iVar4 == 10)) goto LAB_00589923;
    pcVar3 = g_SkeleditLastTestSkeletonDir;
  } while (iVar4 != 0x22);
  while ((iVar4 = _fgetc(file), -1 < iVar4 && (iVar4 != 10))) {
    if (iVar4 == 0x22) {
      iVar4 = 1;
      goto LAB_0058990c;
    }
    *pcVar3 = (char)iVar4;
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 1;
  }
LAB_00589923:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x13f);
  return;
}
