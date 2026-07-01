// Name: core_procedur.cpp_CProceduralTexture_createWaterFrames_FUN_005542b0
// Address: 005542b0
// Address Range: [[005542b0, 00554610]]
// Convention: __cdecl
// Signature: void __cdecl core_procedur_cpp_CProceduralTexture_createWaterFrames_FUN_005542b0(CProceduralTexture *this_ptr)

#include "nocturne.h"

void __cdecl core_procedur_cpp_CProceduralTexture_createWaterFrames_FUN_005542b0(CProceduralTexture *this_ptr)

{
  int iVar1;
  float wave_offset;
  uint uVar5;
  _FILE *p_Var6;
  _FILE *file;
  CProceduralTexture *pCVar7;
  int *piVar8;
  CProceduralTexture *pCVar9;
  CProceduralTexture *pCVar10;
  int *piVar2;
  CProceduralTexture *pCVar3;
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
  byte bVar3;
  uchar *puVar4;
  float *pfVar1;
  float *pfVar2;
  
  pCVar3 = this_ptr;
  do {
    iVar1 = rand();
    pCVar3->wave_x[0] = (float)iVar1 * 3.051851e-05f * (float)256;
    iVar1 = rand();
    pCVar3->wave_y[0] = (float)iVar1 * 3.051851e-05f * (float)256;
    iVar1 = rand();
    piVar2 = &pCVar3->height;
    pCVar3->wave_radius[0] = (float)iVar1 * 3.051851e-05f * (float)128;
    pCVar3 = (CProceduralTexture *)piVar2;
  } while (piVar2 != (int *)(this_ptr->texture + 0x1f8));
  local_1c = 0;
  do {
    memset(this_ptr->texture,0,0x10000);
    pCVar3 = this_ptr;
    do {
      wave_offset = core_procedur_cpp_CProceduralTexture_calculateWaveOffset_FUN_00554620
                              (this_ptr,pCVar3->wave_radius[0],(float)local_1c);
      pfVar1 = pCVar3->wave_y;
      pfVar2 = pCVar3->wave_x;
      pCVar3 = (CProceduralTexture *)&pCVar3->height;
      core_procedur_cpp_CProceduralTexture_applyRipple_FUN_00554670
                (this_ptr,*pfVar2,*pfVar1,wave_offset);
      pCVar7 = this_ptr;
      pCVar9 = this_ptr;
      pCVar13 = (CProceduralTexture *)(this_ptr->texture + 0xf8);
      pCVar12 = this_ptr;
    } while (pCVar3 != (CProceduralTexture *)(this_ptr->texture + 0x1f8));
    do {
      do {
        uVar5 = pCVar7->texture[0] + 0x10;
        if (0xff < uVar5) {
          uVar5 = 0xff;
        }
        pCVar3 = (CProceduralTexture *)((int)&pCVar9->width + 1);
        pCVar7 = (CProceduralTexture *)((int)&pCVar7->width + 1);
        pCVar9->texture[0] = (uchar)uVar5;
        pCVar9 = pCVar3;
      } while (pCVar3 != pCVar13);
      pCVar7 = (CProceduralTexture *)(pCVar12->texture + 0xf8);
      pCVar9 = pCVar7;
      pCVar13 = (CProceduralTexture *)(pCVar13->texture + 0xf8);
      pCVar12 = pCVar7;
    } while (pCVar7 != (CProceduralTexture *)(this_ptr->texture + 0xfff8));
    _sprintf(local_130,"water%d.raw",local_1c);
    p_Var6 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_130,"wb");
    if (p_Var6 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\procedur.cpp";
      g_CurrentLineNumber = 100;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write water frame");
    }
    _fwrite(this_ptr->texture,0x100,0x100,p_Var6);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\core\\procedur.cpp",102);
    _sprintf(local_130,"water%d.act",local_1c);
    file = engine_dosio_cpp_getFile_FUN_00481a50("art",local_130,"wb");
    if (file == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\procedur.cpp";
      g_CurrentLineNumber = 105;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write water frame");
    }
    iVar11 = 0;
    do {
      _fputc(iVar11,file);
      _fputc(iVar11,file);
      _fputc(iVar11,file);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x100);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\procedur.cpp",111);
    iVar14 = 0;
    iVar1 = 0;
    local_18 = (CProceduralTexture *)(this_ptr->texture + 0xf8);
    do {
      pCVar10 = (CProceduralTexture *)(this_ptr->texture + iVar14 * 0x100 + -8);
      piVar8 = *(int **)((int)g_ScreenBufferArray + iVar1);
      do {
        bVar3 = pCVar10->texture[0];
        pCVar10 = (CProceduralTexture *)((int)&pCVar10->width + 1);
        *piVar8 = (uint)bVar3 * 0x10000 + (uint)CONCAT11(bVar3,bVar3);
        piVar8 = piVar8 + 1;
      } while (pCVar10 != local_18);
      iVar1 = iVar1 + 4;
      local_18 = (CProceduralTexture *)(local_18->texture + 0xf8);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x100);
    local_1c = local_1c + 1;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  } while (local_1c < 0x10);
  return;
}
