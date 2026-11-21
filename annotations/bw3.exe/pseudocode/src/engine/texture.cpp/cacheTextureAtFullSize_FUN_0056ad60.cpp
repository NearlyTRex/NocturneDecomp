// Name: engine_texture.cpp_cacheTextureAtFullSize_FUN_0056ad60
// Address: 0056ad60
// Address Range: [[0056ad60, 0056b30d]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_cacheTextureAtFullSize_FUN_0056ad60(SMRGLTextureBasic *texture,char *filename)

#include "nocturne.h"

void __cdecl engine_texture_cpp_cacheTextureAtFullSize_FUN_0056ad60(SMRGLTextureBasic *texture,char *filename)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  char *pcVar10;
  char acStack_364 [4];
  uint uStack_360;
  char acStack_264 [256];
  char acStack_164 [256];
  byte auStack_64 [44];
  uchar *puStack_38;
  int iStack_34;
  uchar *puStack_30;
  void *pvStack_2c;
  uchar *puStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  void *pvStack_18;
  int iStack_14;
  int iStack_10;
  
  if (filename == (char *)0x0) {
    engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10(texture);
    return;
  }
  if (g_INT_02cf5fd8 == 0) {
    pvStack_18 = (void *)g_INT_02cf5fd8;
    puStack_28 = (uchar *)g_INT_02cf5fd8;
    iStack_14 = g_INT_02cf5fd8;
    iVar3 = engine_dosio_cpp_getFileSize_FUN_004657f0("art",filename);
    if (iVar3 == 0x1000) {
      iStack_14 = 0x40;
    }
    else if (iVar3 == 0x4000) {
      iStack_14 = 0x80;
    }
    else if (iVar3 == 0x10000) {
      iStack_14 = 0x100;
    }
    else {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 1394;
      core_main_c_displayErrorAndQuit_FUN_004e4330("cacheTextureAtFullSize - %s is not a 64, 128, or 256 texture");
    }
    pvStack_2c = malloc(iStack_14 * iStack_14);
    if (pvStack_2c == (void *)0x0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 1399;
      core_main_c_displayErrorAndQuit_FUN_004e4330("cacheTextureAtFullSize - Out of memory");
    }
    puStack_38 = (uchar *)malloc(0x300);
    if (puStack_38 == (uchar *)0x0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 1403;
      core_main_c_displayErrorAndQuit_FUN_004e4330("cacheTextureAtFullSize - Out of memory");
    }
    support_trstream_cpp_CInStreamFile_ctor_FUN_005738c0((CInStreamFile *)auStack_64);
    iVar3 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_00573fc0
                      ((CInStreamFile *)auStack_64,"art",filename,1);
    if (iVar3 == 0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 1408;
      core_main_c_displayErrorAndQuit_FUN_004e4330("cacheTextureAtFullSize - Can't open texture %s, but for some reason, I got it's length");
    }
    support_trstream_cpp_CInStreamFile_read_FUN_00573c00
              ((CInStreamFile *)auStack_64,pvStack_2c,iStack_14 * iStack_14);
    support_trstream_cpp_CInStreamFile_close_FUN_00573db0((CInStreamFile *)auStack_64);
    engine_dosio_cpp_splitPath_FUN_00465e50
              (filename,(char *)0x0,(char *)0x0,acStack_364,(char *)0x0);
    engine_dosio_cpp_makePath_FUN_00465e80
              (acStack_264,(char *)0x0,(char *)0x0,acStack_364,".ACT");
    engine_dosio_cpp_makePath_FUN_00465e80
              (acStack_164,(char *)0x0,(char *)0x0,acStack_364,".OPA");
    iVar3 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_00573fc0
                      ((CInStreamFile *)auStack_64,"art",acStack_264,1);
    if (iVar3 == 0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 1421;
      core_main_c_displayErrorAndQuit_FUN_004e4330("cacheTextureAtFullSize - Can't open %s");
    }
    support_trstream_cpp_CInStreamFile_read_FUN_00573c00
              ((CInStreamFile *)auStack_64,puStack_38,0x300);
    support_trstream_cpp_CInStreamFile_close_FUN_00573db0((CInStreamFile *)auStack_64);
    iVar3 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_00573fc0
                      ((CInStreamFile *)auStack_64,"art",acStack_164,1);
    if (iVar3 != 0) {
      pvStack_18 = malloc(iStack_14 * iStack_14);
      if (pvStack_18 == (void *)0x0) {
        g_CurrentFilename = "..\\engine\\texture.cpp";
        g_CurrentLineNumber = 1429;
        core_main_c_displayErrorAndQuit_FUN_004e4330("cacheTextureAtFullSize - Out of memory");
      }
      support_trstream_cpp_CInStreamFile_read_FUN_00573c00
                ((CInStreamFile *)auStack_64,pvStack_18,iStack_14 * iStack_14);
      support_trstream_cpp_CInStreamFile_close_FUN_00573db0((CInStreamFile *)auStack_64);
    }
    puStack_30 = (uchar *)malloc(iStack_14 * iStack_14 * 4);
    if (puStack_30 == (uchar *)0x0) {
      g_CurrentFilename = "..\\engine\\texture.cpp";
      g_CurrentLineNumber = 1492;
      core_main_c_displayErrorAndQuit_FUN_004e4330("cacheTextureAtFullSize - Out of memory");
    }
    if (pvStack_18 != (void *)0x0) {
      puStack_28 = (uchar *)malloc(iStack_14 * iStack_14 * 4);
      if (puStack_28 == (uchar *)0x0) {
        g_CurrentFilename = "..\\engine\\texture.cpp";
        g_CurrentLineNumber = 1498;
        core_main_c_displayErrorAndQuit_FUN_004e4330("cacheTextureAtFullSize - Out of memory");
      }
    }
    iStack_20 = 0;
    if (0 < iStack_14) {
      iStack_24 = iStack_14 * 2;
      iStack_34 = iStack_14 * 4;
      iStack_1c = 0;
      do {
        puVar8 = puStack_30 + iStack_1c;
        puVar5 = puStack_28 + iStack_1c;
        puVar6 = (uchar *)((int)pvStack_2c + iStack_20 * iStack_14);
        puVar4 = (uchar *)(iStack_20 * iStack_14 + (int)pvStack_18);
        iStack_10 = 0;
        if (0 < iStack_14) {
          puVar7 = puVar5 + iStack_24;
          puVar9 = puVar8 + iStack_24;
          do {
            uVar1 = *puVar6;
            *puVar8 = uVar1;
            puVar8[1] = uVar1;
            *puVar9 = uVar1;
            puVar9[1] = uVar1;
            if (pvStack_18 != (void *)0x0) {
              uVar1 = *puVar4;
              *puVar5 = uVar1;
              puVar5[1] = uVar1;
              *puVar7 = uVar1;
              puVar7[1] = uVar1;
            }
            puVar6 = puVar6 + 1;
            puVar4 = puVar4 + 1;
            puVar9 = puVar9 + 2;
            puVar8 = puVar8 + 2;
            puVar7 = puVar7 + 2;
            iStack_10 = iStack_10 + 1;
            puVar5 = puVar5 + 2;
          } while (iStack_10 < iStack_14);
        }
        iStack_1c = iStack_1c + iStack_34;
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < iStack_14);
    }
    debugFree(pvStack_2c);
    if (pvStack_18 != (void *)0x0) {
      debugFree(pvStack_18);
    }
    engine_texture_cpp_storePalettedTexture_FUN_0056aab0
              (texture,iStack_14 * 2,puStack_30,puStack_38,puStack_28);
    uStack_360 = 0x56b1ef;
    support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40((CInStreamFile *)(auStack_64 + 0x14),0);
    return;
  }
  pcVar10 = texture->texture_name;
  do {
    cVar2 = *filename;
    *pcVar10 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = filename[1];
    filename = filename + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10(texture);
  return;
}
