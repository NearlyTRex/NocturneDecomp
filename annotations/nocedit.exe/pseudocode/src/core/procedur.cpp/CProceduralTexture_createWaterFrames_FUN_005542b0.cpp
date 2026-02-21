// Name: core_procedur.cpp_CProceduralTexture_createWaterFrames_FUN_005542b0
// Address: 005542b0
// Address Range: [[005542b0, 00554610]]
// Convention: __cdecl
// Signature: void __cdecl core_procedur_cpp_CProceduralTexture_createWaterFrames_FUN_005542b0(CProceduralTexture *this_ptr)

#include "nocturne.h"

void __cdecl core_procedur_cpp_CProceduralTexture_createWaterFrames_FUN_005542b0(CProceduralTexture *this_ptr)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  uchar *puVar4;
  uint uVar5;
  _FILE *p_Var6;
  CProceduralTexture *pCVar7;
  int *piVar8;
  CProceduralTexture *pCVar9;
  CProceduralTexture *pCVar10;
  int iVar11;
  CProceduralTexture *pCVar12;
  CProceduralTexture *pCVar13;
  int iVar14;
  char local_130 [256];
  CProceduralTexture *local_30;
  CProceduralTexture *local_2c;
  uchar *local_28;
  uchar *local_24;
  CProceduralTexture *local_20;
  int local_1c;
  CProceduralTexture *local_18;
  float local_14;
  
  pCVar10 = this_ptr;
  do {
    local_14 = (float)rand();
    pCVar10->wave_x[0] = (float)(int)local_14 * 3.051851e-05f * (float)256;
    local_14 = (float)rand();
    pCVar10->wave_y[0] = (float)(int)local_14 * 3.051851e-05f * (float)256;
    local_14 = (float)rand();
    piVar8 = &pCVar10->height;
    pCVar10->wave_radius[0] = (float)(int)local_14 * 3.051851e-05f * (float)128;
    pCVar10 = (CProceduralTexture *)piVar8;
  } while (piVar8 != (int *)(this_ptr->texture + 0x1f8));
  local_28 = this_ptr->texture;
  local_20 = (CProceduralTexture *)(this_ptr->texture + 0xfff8);
  local_24 = this_ptr->texture + 0x1f8;
  local_30 = (CProceduralTexture *)(this_ptr->texture + 0xf8);
  local_1c = 0;
  local_2c = local_30;
  do {
    memset(local_28,0,0x10000);
    puVar4 = local_24;
    pCVar10 = this_ptr;
    do {
      local_14 = (float)local_1c;
      local_14 = core_procedur_cpp_CProceduralTexture_calculateWaveOffset_FUN_00554620
                           (this_ptr,pCVar10->wave_radius[0],(float)local_1c);
      pfVar1 = pCVar10->wave_y;
      pfVar2 = pCVar10->wave_x;
      pCVar10 = (CProceduralTexture *)&pCVar10->height;
      core_procedur_cpp_CProceduralTexture_applyRipple_FUN_00554670
                (this_ptr,*pfVar2,*pfVar1,local_14);
      pCVar7 = this_ptr;
      pCVar9 = this_ptr;
      pCVar13 = local_30;
      pCVar12 = this_ptr;
    } while (pCVar10 != (CProceduralTexture *)puVar4);
    do {
      do {
        uVar5 = pCVar7->texture[0] + 0x10;
        if (0xff < uVar5) {
          uVar5 = 0xff;
        }
        pCVar10 = (CProceduralTexture *)((int)&pCVar9->width + 1);
        pCVar9->texture[0] = (uchar)uVar5;
        pCVar7 = (CProceduralTexture *)((int)&pCVar7->width + 1);
        pCVar9 = pCVar10;
      } while (pCVar10 != pCVar13);
      pCVar7 = (CProceduralTexture *)(pCVar12->texture + 0xf8);
      pCVar9 = pCVar7;
      pCVar13 = (CProceduralTexture *)(pCVar13->texture + 0xf8);
      pCVar12 = pCVar7;
    } while (pCVar7 != local_20);
    _sprintf(local_130,"water%d.raw",local_1c);
    p_Var6 = engine_dosio_c_getFile_FUN_00481a50("art",local_130,"wb");
    if (p_Var6 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\procedur.cpp";
      g_CurrentLineNumber = 100;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write water frame");
    }
    _fwrite(local_28,0x100,0x100,p_Var6);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\core\\procedur.cpp",0x66);
    _sprintf(local_130,"water%d.act",local_1c);
    p_Var6 = engine_dosio_c_getFile_FUN_00481a50("art",local_130,"wb");
    if (p_Var6 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\procedur.cpp";
      g_CurrentLineNumber = 0x69;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write water frame");
    }
    iVar11 = 0;
    do {
      _fputc(iVar11,p_Var6);
      _fputc(iVar11,p_Var6);
      _fputc(iVar11,p_Var6);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x100);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\core\\procedur.cpp",0x6f);
    iVar14 = 0;
    iVar11 = 0;
    local_18 = local_2c;
    do {
      pCVar10 = (CProceduralTexture *)(this_ptr->texture + iVar14 * 0x100 + -8);
      piVar8 = *(int **)((int)g_ScreenBufferArray + iVar11);
      do {
        bVar3 = pCVar10->texture[0];
        pCVar10 = (CProceduralTexture *)((int)&pCVar10->width + 1);
        *piVar8 = (uint)bVar3 * 0x10000 + (uint)CONCAT11(bVar3,bVar3);
        piVar8 = piVar8 + 1;
      } while (pCVar10 != local_18);
      iVar11 = iVar11 + 4;
      local_18 = (CProceduralTexture *)(local_18->texture + 0xf8);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x100);
    iVar11 = local_1c + 1;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_1c = iVar11;
  } while (iVar11 < 0x10);
  return;
}
