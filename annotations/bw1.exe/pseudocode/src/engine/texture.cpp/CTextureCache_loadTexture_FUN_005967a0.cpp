// Name: engine_texture.cpp_CTextureCache_loadTexture_FUN_005967a0
// Address: 005967a0
// Address Range: [[005967a0, 00596e5f]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_005967a0(CTextureCache *this_ptr,char *texture_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_005967a0(CTextureCache *this_ptr,char *texture_name)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uchar *puVar6;
  uint uVar7;
  int iVar8;
  STextureCacheEntry *pSVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  double dVar15;
  char local_1dc [128];
  char local_15c [128];
  char local_dc [128];
  CInStreamFile local_5c;
  int local_30;
  int iStack_24;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar14 = 0;
  support_trstream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_5c);
  uVar7 = 0xffffffff;
  pcVar12 = texture_name;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + (uint)bVar14 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x3f < ~uVar7 - 1) {
    _DAT_01d1d400 = "..\\engine\\texture.cpp";
    _DAT_01d1d404 = 0xfb;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Texture name is too big : %s");
  }
  memset((void *)0x2c8a688,0,0x214);
  memset((void *)0x2c8a89c,0,0x214);
  memset((void *)0x2c8aab0,0,0x214);
  engine_dosio_cpp_FUN_00478e20(0x2c8a688,&DAT_005f7965,texture_name);
  iVar5 = engine_dosio_cpp_findFile_FUN_00478e90((SFoundFileInfo *)0x2c8a688);
  if (iVar5 == 0) {
    _DAT_01d1d400 = "..\\engine\\texture.cpp";
    _DAT_01d1d404 = 0x107;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CTextureCache::load - Can't get file info on %s");
  }
  uVar7 = _DAT_02c8a88c;
  local_1c = engine_texture_cpp_CTextureCache_findFreeSlot_FUN_00596680(this_ptr);
  pSVar9 = this_ptr->entries + local_1c;
  pcVar12 = pSVar9->texture_name;
  pcVar10 = texture_name;
  do {
    cVar1 = *pcVar10;
    *pcVar12 = cVar1;
    pcVar11 = texture_name;
    pcVar13 = local_1dc;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
    pcVar13 = local_1dc;
  } while (cVar1 != '\0');
  do {
    cVar1 = *pcVar11;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar11[1];
    pcVar13[1] = cVar1;
    pcVar11 = pcVar11 + 2;
    pcVar13 = pcVar13 + 2;
  } while (cVar1 != '\0');
  engine_dosio_cpp_changeFileExtension_FUN_004796b0(local_1dc,&DAT_005f79af);
  engine_dosio_cpp_FUN_00478e20(0x2c8a89c,&DAT_005f79b4,local_1dc);
  local_30 = engine_dosio_cpp_findFile_FUN_00478e90((SFoundFileInfo *)0x2c8a89c);
  pcVar12 = local_15c;
  pcVar10 = texture_name;
  do {
    cVar1 = *pcVar10;
    *pcVar12 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
  } while (cVar1 != '\0');
  engine_dosio_cpp_changeFileExtension_FUN_004796b0(local_15c,&DAT_005f79b8);
  engine_dosio_cpp_FUN_00478e20(0x2c8aab0,&DAT_005f79bd,local_15c);
  iVar5 = engine_dosio_cpp_findFile_FUN_00478e90((SFoundFileInfo *)0x2c8aab0);
  if (local_30 == 0) {
    if (uVar7 < 0x10000) {
      if (uVar7 < 0x1000) {
LAB_00596e18:
        _sprintf(local_dc,"CTextureCache::load - Bad texture length : %s,%d");
        _DAT_01d1d400 = "..\\engine\\texture.cpp";
        _DAT_01d1d404 = 0x194;
        core_main_c_displayErrorAndQuit_FUN_005030e0(local_dc);
      }
      else if (uVar7 < 0x1001) {
        local_18 = 0x20;
      }
      else {
        if (uVar7 != 0x4000) goto LAB_00596e18;
        local_18 = 0x40;
      }
    }
    else if (uVar7 < 0x10001) {
      local_18 = 0x80;
    }
    else if (uVar7 < 0x100000) {
      if (uVar7 != 0x40000) goto LAB_00596e18;
      local_18 = 0x100;
    }
    else if (uVar7 < 0x100001) {
      local_18 = 0x200;
    }
    else {
      if (uVar7 != 0x400000) goto LAB_00596e18;
      local_18 = 0x400;
    }
    pSVar9->dimension = local_18;
    puVar6 = (uchar *)malloc(uVar7);
    pSVar9->true_color_data = puVar6;
    if (puVar6 == (uchar *)0x0) {
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x19e;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CTextureCache::load - Out of memory");
    }
    support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
              (&local_5c,&DAT_005f7b43,texture_name,1);
    support_trstream_cpp_CInStreamFile_read_FUN_005a0c10(&local_5c,pSVar9->true_color_data,uVar7);
    support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(&local_5c);
    goto LAB_00596c09;
  }
  puVar6 = (uchar *)malloc(0x300);
  pSVar9->palette_data = puVar6;
  if (puVar6 == (uchar *)0x0) {
    _DAT_01d1d400 = "..\\engine\\texture.cpp";
    _DAT_01d1d404 = 0x131;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CTextureCache::load - Out of memory");
  }
  if (uVar7 < 0x4000) {
    if (uVar7 < 0x400) {
LAB_005969d1:
      _sprintf(local_dc,"CTextureCache::load - Bad texture length : %s,%d");
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x14a;
      core_main_c_displayErrorAndQuit_FUN_005030e0(local_dc);
    }
    else if (uVar7 < 0x401) {
      local_18 = 0x20;
    }
    else {
      if (uVar7 != 0x1000) goto LAB_005969d1;
      local_18 = 0x40;
    }
  }
  else if (uVar7 < 0x4001) {
    local_18 = 0x80;
  }
  else if (uVar7 < 0x40000) {
    if (uVar7 != 0x10000) goto LAB_005969d1;
    local_18 = 0x100;
  }
  else if (uVar7 < 0x40001) {
    local_18 = 0x200;
  }
  else {
    if (uVar7 != 0x100000) goto LAB_005969d1;
    local_18 = 0x400;
  }
  pSVar9->dimension = local_18;
  puVar6 = (uchar *)malloc(uVar7);
  pSVar9->texture_data = puVar6;
  if (puVar6 == (uchar *)0x0) {
    _DAT_01d1d400 = "..\\engine\\texture.cpp";
    _DAT_01d1d404 = 0x154;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CTextureCache::load - Out of memory");
  }
  if (iVar5 != 0) {
    puVar6 = (uchar *)malloc(uVar7);
    pSVar9->opacity_data = puVar6;
    if (puVar6 == (uchar *)0x0) {
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x15a;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CTextureCache::load - Out of memory");
    }
  }
  support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
            (&local_5c,&DAT_005f7ab6,local_1dc,1);
  support_trstream_cpp_CInStreamFile_read_FUN_005a0c10(&local_5c,pSVar9->palette_data,0x300);
  support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(&local_5c);
  if (iVar5 != 0) {
    support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
              (&local_5c,&DAT_005f7aba,local_15c,1);
    support_trstream_cpp_CInStreamFile_read_FUN_005a0c10
              (&local_5c,pSVar9->opacity_data,local_18 * local_18);
    support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(&local_5c);
  }
  support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
            (&local_5c,&DAT_005f7abe,texture_name,1);
  support_trstream_cpp_CInStreamFile_read_FUN_005a0c10
            (&local_5c,pSVar9->texture_data,local_18 * local_18);
  support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(&local_5c);
  fVar4 = _DAT_005f7b52;
  fVar3 = _DAT_005f7b4e;
  fVar2 = _DAT_005f7b4a;
  if (_DAT_02c8a678 != 0) {
    iVar5 = 0;
    do {
      puVar6 = pSVar9->palette_data;
      local_14 = (uint)puVar6[iVar5 + 2];
      local_1dc[0] = -0x27;
      local_1dc[1] = 'k';
      local_1dc[2] = 'Y';
      local_1dc[3] = '\0';
      dVar15 = round
                         ((double)((float)puVar6[iVar5 + 2] * fVar4 +
                                  (float)puVar6[iVar5 + 1] * fVar3 + (float)puVar6[iVar5] * fVar2));
      iStack_24 = (int)ROUND(dVar15);
      puVar6[iVar5] = (uchar)iStack_24;
      pSVar9->palette_data[iVar5 + 1] = (uchar)iStack_24;
      iVar8 = iVar5 + 3;
      pSVar9->palette_data[iVar5 + 2] = (uchar)iStack_24;
      iVar5 = iVar8;
    } while (iVar8 != 0x300);
  }
LAB_00596c09:
  support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_5c,0);
  return local_1c;
}
