// Name: core_skeledit.cpp_loadIni_FUN_005897b0
// Address: 005897b0
// Address Range: [[005897b0, 00589a33]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_loadIni_FUN_005897b0(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_loadIni_FUN_005897b0(void)

{
  _FILE *file;
  int iVar1;
  int iVar2;
  char *pcVar3;
  int local_10;
  
  __STK();
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
  iVar2 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  g_SkeleditLastPOSImported[0] = '\0';
  do {
    iVar2 = _fgetc(file);
    if ((iVar2 < 0) || (iVar2 == 10)) goto LAB_00589863;
    pcVar3 = g_SkeleditLastPOSImported;
  } while (iVar2 != 0x22);
  while ((iVar2 = _fgetc(file), -1 < iVar2 && (iVar2 != 10))) {
    if (iVar2 == 0x22) {
      iVar2 = 1;
      goto LAB_005899ac;
    }
    *pcVar3 = (char)iVar2;
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 1;
  }
  goto LAB_00589863;
  while ((iVar1 != 10 || (iVar2 = iVar2 + -1, 0 < iVar2))) {
LAB_00589a04:
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  }
  goto LAB_005898a6;
  while ((iVar1 != 10 || (iVar2 = iVar2 + -1, 0 < iVar2))) {
LAB_0058990c:
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  }
  goto LAB_00589923;
  while ((iVar1 != 10 || (iVar2 = iVar2 + -1, 0 < iVar2))) {
LAB_005899ac:
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  }
LAB_00589863:
  iVar2 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  g_SkeleditLastMOTImported[0] = '\0';
  do {
    iVar2 = _fgetc(file);
    if ((iVar2 < 0) || (iVar2 == 10)) goto LAB_005898a6;
    pcVar3 = g_SkeleditLastMOTImported;
  } while (iVar2 != 0x22);
  while ((iVar2 = _fgetc(file), -1 < iVar2 && (iVar2 != 10))) {
    if (iVar2 == 0x22) {
      iVar2 = 1;
      goto LAB_00589a04;
    }
    *pcVar3 = (char)iVar2;
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 1;
  }
LAB_005898a6:
  iVar2 = 1;
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  g_SkeleditLastTestSkeletonDir[0] = '\0';
  do {
    iVar2 = _fgetc(file);
    if ((iVar2 < 0) || (iVar2 == 10)) goto LAB_00589923;
    pcVar3 = g_SkeleditLastTestSkeletonDir;
  } while (iVar2 != 0x22);
  while ((iVar2 = _fgetc(file), -1 < iVar2 && (iVar2 != 10))) {
    if (iVar2 == 0x22) {
      iVar2 = 1;
      goto LAB_0058990c;
    }
    *pcVar3 = (char)iVar2;
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 1;
  }
LAB_00589923:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x13f);
  return;
}
