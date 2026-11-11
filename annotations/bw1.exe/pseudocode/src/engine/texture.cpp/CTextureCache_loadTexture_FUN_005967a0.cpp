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
  int iVar2;
  uchar *puVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_EDX;
  STextureCacheEntry *pSVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  char local_1dc [128];
  char local_15c [128];
  char local_dc [128];
  CInStreamFile local_5c;
  int local_30;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar10 = 0;
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_5c);
  uVar4 = 0xffffffff;
  pcVar8 = texture_name;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x3f < ~uVar4 - 1) {
    _DAT_01d1d400 = "..\\engine\\texture.cpp";
    _DAT_01d1d404 = 0xfb;
    core_main_c_FUN_005030e0("Texture name is too big : %s",texture_name);
  }
  memset((void *)0x2c8a688,0,0x214);
  memset((void *)0x2c8a89c,0,0x214);
  memset((void *)0x2c8aab0,0,0x214);
  engine_dosio_cpp_FUN_00478e20(0x2c8a688,&DAT_005f7965,texture_name);
  iVar2 = engine_dosio_cpp_findFile_FUN_00478e90(0x2c8a688);
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\engine\\texture.cpp";
    _DAT_01d1d404 = 0x107;
    core_main_c_FUN_005030e0("CTextureCache::load - Can't get file info on %s",texture_name);
  }
  uVar4 = _DAT_02c8a88c;
  local_1c = engine_texture_cpp_FUN_00596680(this_ptr);
  pSVar5 = this_ptr->entries + local_1c;
  pcVar8 = pSVar5->texture_name;
  pcVar6 = texture_name;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    pcVar7 = texture_name;
    pcVar9 = local_1dc;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
    pcVar9 = local_1dc;
  } while (cVar1 != '\0');
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar9[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  engine_dosio_cpp_changeFileExtension_FUN_004796b0(local_1dc,&DAT_005f79af);
  engine_dosio_cpp_FUN_00478e20(0x2c8a89c,&DAT_005f79b4,local_1dc);
  local_30 = engine_dosio_cpp_findFile_FUN_00478e90(0x2c8a89c);
  pcVar8 = local_15c;
  pcVar6 = texture_name;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  engine_dosio_cpp_changeFileExtension_FUN_004796b0(local_15c,&DAT_005f79b8);
  engine_dosio_cpp_FUN_00478e20(0x2c8aab0,&DAT_005f79bd,local_15c);
  iVar2 = engine_dosio_cpp_findFile_FUN_00478e90(0x2c8aab0);
  if (local_30 == 0) {
    if (uVar4 < 0x10000) {
      if (uVar4 < 0x1000) {
LAB_00596e18:
        _sprintf(local_dc,"CTextureCache::load - Bad texture length : %s,%d");
        _DAT_01d1d400 = "..\\engine\\texture.cpp";
        _DAT_01d1d404 = 0x194;
        core_main_c_FUN_005030e0(local_dc);
      }
      else if (uVar4 < 0x1001) {
        local_18 = 0x20;
      }
      else {
        if (uVar4 != 0x4000) goto LAB_00596e18;
        local_18 = 0x40;
      }
    }
    else if (uVar4 < 0x10001) {
      local_18 = 0x80;
    }
    else if (uVar4 < 0x100000) {
      if (uVar4 != 0x40000) goto LAB_00596e18;
      local_18 = 0x100;
    }
    else if (uVar4 < 0x100001) {
      local_18 = 0x200;
    }
    else {
      if (uVar4 != 0x400000) goto LAB_00596e18;
      local_18 = 0x400;
    }
    pSVar5->dimension = local_18;
    puVar3 = (uchar *)malloc(uVar4);
    pSVar5->true_color_data = puVar3;
    if (puVar3 == (uchar *)0x0) {
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x19e;
      core_main_c_FUN_005030e0("CTextureCache::load - Out of memory");
    }
    support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
              (&local_5c,&DAT_005f7b43,texture_name,1);
    unkaddr_0059f520_cpp_CInStreamFile_read_FUN_005a0c10
              (&local_5c,(uint *)pSVar5->true_color_data,uVar4);
    unkaddr_0059f520_cpp_CInStreamFile_close_FUN_005a0dc0(&local_5c);
    goto LAB_00596c09;
  }
  puVar3 = (uchar *)malloc(0x300);
  pSVar5->palette_data = puVar3;
  if (puVar3 == (uchar *)0x0) {
    _DAT_01d1d400 = "..\\engine\\texture.cpp";
    _DAT_01d1d404 = 0x131;
    core_main_c_FUN_005030e0("CTextureCache::load - Out of memory");
  }
  if (uVar4 < 0x4000) {
    if (uVar4 < 0x400) {
LAB_005969d1:
      _sprintf(local_dc,"CTextureCache::load - Bad texture length : %s,%d");
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x14a;
      core_main_c_FUN_005030e0(local_dc);
    }
    else if (uVar4 < 0x401) {
      local_18 = 0x20;
    }
    else {
      if (uVar4 != 0x1000) goto LAB_005969d1;
      local_18 = 0x40;
    }
  }
  else if (uVar4 < 0x4001) {
    local_18 = 0x80;
  }
  else if (uVar4 < 0x40000) {
    if (uVar4 != 0x10000) goto LAB_005969d1;
    local_18 = 0x100;
  }
  else if (uVar4 < 0x40001) {
    local_18 = 0x200;
  }
  else {
    if (uVar4 != 0x100000) goto LAB_005969d1;
    local_18 = 0x400;
  }
  pSVar5->dimension = local_18;
  puVar3 = (uchar *)malloc(uVar4);
  pSVar5->texture_data = puVar3;
  if (puVar3 == (uchar *)0x0) {
    _DAT_01d1d400 = "..\\engine\\texture.cpp";
    _DAT_01d1d404 = 0x154;
    core_main_c_FUN_005030e0("CTextureCache::load - Out of memory");
  }
  if (iVar2 != 0) {
    puVar3 = (uchar *)malloc(uVar4);
    pSVar5->opacity_data = puVar3;
    if (puVar3 == (uchar *)0x0) {
      _DAT_01d1d400 = "..\\engine\\texture.cpp";
      _DAT_01d1d404 = 0x15a;
      core_main_c_FUN_005030e0("CTextureCache::load - Out of memory");
    }
  }
  support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
            (&local_5c,&DAT_005f7ab6,local_1dc,1);
  unkaddr_0059f520_cpp_CInStreamFile_read_FUN_005a0c10
            (&local_5c,(uint *)pSVar5->palette_data,0x300);
  unkaddr_0059f520_cpp_CInStreamFile_close_FUN_005a0dc0(&local_5c);
  if (iVar2 != 0) {
    support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
              (&local_5c,&DAT_005f7aba,local_15c,1);
    unkaddr_0059f520_cpp_CInStreamFile_read_FUN_005a0c10
              (&local_5c,(uint *)pSVar5->opacity_data,local_18 * local_18);
    unkaddr_0059f520_cpp_CInStreamFile_close_FUN_005a0dc0(&local_5c);
  }
  support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
            (&local_5c,&DAT_005f7abe,texture_name,1);
  unkaddr_0059f520_cpp_CInStreamFile_read_FUN_005a0c10
            (&local_5c,(uint *)pSVar5->texture_data,local_18 * local_18);
  unkaddr_0059f520_cpp_CInStreamFile_close_FUN_005a0dc0(&local_5c);
  if (_DAT_02c8a678 != 0) {
    iVar2 = 0;
    fVar11 = (float10)_DAT_005f7b52;
    fVar12 = (float10)_DAT_005f7b4e;
    fVar13 = (float10)_DAT_005f7b4a;
    do {
      puVar3 = pSVar5->palette_data;
      local_14 = (uint)puVar3[iVar2 + 2];
      fVar14 = (float10)puVar3[iVar2 + 2] * fVar11 +
               (float10)puVar3[iVar2 + 1] * fVar12 + (float10)puVar3[iVar2] * fVar13;
      round();
      local_20 = (int)ROUND(fVar14);
      *(uchar *)(extraout_ECX + extraout_EDX) = (uchar)local_20;
      pSVar5->palette_data[extraout_EDX + 1] = (uchar)local_20;
      iVar2 = extraout_EDX + 3;
      pSVar5->palette_data[extraout_EDX + 2] = (uchar)local_20;
    } while (iVar2 != 0x300);
  }
LAB_00596c09:
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_5c,0);
  return local_1c;
}
