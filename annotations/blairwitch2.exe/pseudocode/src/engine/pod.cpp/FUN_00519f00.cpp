// Name: engine_pod.cpp_FUN_00519f00
// Address: 00519f00
// Address Range: [[00519f00, 0051a8e8]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_FUN_00519f00(CPodFile *this_ptr,char *pod_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_pod_cpp_FUN_00519f00(CPodFile *this_ptr,char *pod_filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  ulong size;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  bool bVar11;
  byte local_6a4 [256];
  char local_5a4 [268];
  uint local_498;
  byte local_490 [8];
  char local_488 [80];
  uint local_438;
  uint local_434;
  uint local_42c;
  char local_428 [80];
  char local_3d8 [80];
  uint local_388;
  ulong local_380;
  uint local_37c;
  byte local_370 [4];
  char local_36c [256];
  uint local_26c;
  char local_260 [256];
  byte local_160 [8];
  char local_158 [80];
  uint local_108;
  uint local_104;
  int local_100;
  char local_fc [80];
  char local_ac [64];
  uint local_6c;
  uint local_68;
  uint local_60;
  char local_5c [32];
  uint local_3c;
  uint local_38;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  int local_30;
  ulong local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  ulong local_14;
  
  bVar10 = 0;
  local_18 = 0;
  engine_pod_cpp_CPodFile_cleanup_FUN_0051a8f0(this_ptr);
  engine_dosio_cpp_FUN_00460910(local_6a4,0,pod_filename);
  iVar2 = engine_dosio_cpp_findFileNormally_FUN_004609e0(local_6a4);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar8 = local_5a4;
  pcVar9 = &this_ptr->field_0x4;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr->field_0x104 = local_498;
  iVar2 = _fopen(&this_ptr->field_0x4,&DAT_005e2407);
  local_30 = iVar2;
  if (iVar2 == 0) goto LAB_00519fa2;
  engine_dosio_cpp_FUN_00461070(pod_filename,(char *)0x0,(char *)0x0,(char *)0x0,local_260);
  iVar3 = _stricmp(local_260,&DAT_005e240a);
  if ((iVar3 == 0) ||
     (iVar3 = _stricmp(local_260,&DAT_005e240e), iVar3 == 0)) {
    _fread(local_370,1,0x110,local_30);
    pcVar9 = local_36c;
    pcVar8 = &this_ptr->field_0x108;
    *(uint *)&this_ptr->field_0x410 = local_26c;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pvVar4 = FUN_005b8580(*(int *)&this_ptr->field_0x410 * 0x14);
    *(void **)&this_ptr->field_0x414 = pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_00519fa2;
    size = 0;
    local_2c = 0;
    local_28 = 0;
    if (0 < *(int *)&this_ptr->field_0x410) {
      local_1c = 0;
      do {
        _fread(local_ac,1,0x50,local_30);
        *(ulong *)(*(int *)&this_ptr->field_0x414 + local_1c) = size;
        uVar7 = 0xffffffff;
        pcVar8 = local_ac;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        size = size + ~uVar7;
        if ((int)local_2c < (int)size) {
          local_2c = (*(int *)&this_ptr->field_0x410 - local_28) * 0x30 + size;
          pvVar4 = realloc(*(void **)&this_ptr->field_0x418,local_2c);
          *(void **)&this_ptr->field_0x418 = pvVar4;
          if (pvVar4 == (void *)0x0) {
            _DAT_01d046a0 = "..\\engine\\pod.cpp";
            _DAT_01d046a4 = 0x198;
            core_main_c_FUN_004e4500("Out of memory!");
          }
        }
        pcVar8 = local_ac;
        pcVar9 = (char *)(*(int *)&this_ptr->field_0x418 +
                         *(int *)(*(int *)&this_ptr->field_0x414 + local_1c));
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        *(uint *)(local_1c + *(int *)&this_ptr->field_0x414 + 4) = local_6c;
        *(uint *)(*(int *)&this_ptr->field_0x414 + local_1c + 8) = local_68;
        *(uint *)(local_1c + *(int *)&this_ptr->field_0x414 + 0x10) = local_60;
        local_28 = local_28 + 1;
        *(uint *)(local_1c + *(int *)&this_ptr->field_0x414 + 0xc) =
             *(uint *)&this_ptr->field_0x104;
        local_1c = local_1c + 0x14;
      } while (local_28 < *(int *)&this_ptr->field_0x410);
    }
    bVar11 = SBORROW4(size,local_2c);
    iVar2 = size - local_2c;
  }
  else {
    _fread(&local_34,1,4,iVar2);
    _fseek(iVar2,0,0);
    iVar3 = local_30;
    if ((((local_34 == 'P') && (local_33 == 'O')) && (local_32 == 'D')) && (local_31 == '3')) {
      pcVar9 = local_488;
      _fread(local_490,1,0x120,iVar2);
      pcVar8 = &this_ptr->field_0x108;
      *(uint *)this_ptr = 300;
      do {
        cVar1 = *pcVar9;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar9 = local_428;
      pcVar8 = &this_ptr->field_0x208;
      do {
        cVar1 = *pcVar9;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar9 = local_3d8;
      pcVar8 = &this_ptr->field_0x308;
      do {
        cVar1 = *pcVar9;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      *(uint *)&this_ptr->field_0x410 = local_438;
      *(uint *)&this_ptr->field_0x41c = local_434;
      *(uint *)&this_ptr->field_0x424 = local_37c;
      *(uint *)&this_ptr->field_0x408 = local_42c;
      pvVar4 = FUN_005b8580(*(int *)&this_ptr->field_0x410 * 0x14);
      *(void **)&this_ptr->field_0x414 = pvVar4;
      if (pvVar4 != (void *)0x0) {
        _fseek(iVar2,local_388,0);
        _fread(*(uint *)&this_ptr->field_0x414,*(uint *)&this_ptr->field_0x410,0x14,
                   iVar2);
        if ((*(byte *)(iVar2 + 0xc) & 0x20) == 0) {
          iVar2 = 0;
          if (0 < *(int *)&this_ptr->field_0x410) {
            do {
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)&this_ptr->field_0x410);
          }
          if ((*(int *)&this_ptr->field_0x410 <= (int)local_380) &&
             ((int)local_380 <= *(int *)&this_ptr->field_0x410 * 0x100)) {
            pvVar4 = FUN_005b8580(local_380);
            *(void **)&this_ptr->field_0x418 = pvVar4;
            if (pvVar4 == (void *)0x0) {
              _DAT_01d046a0 = "..\\engine\\pod.cpp";
              _DAT_01d046a4 = 0x1ed;
              core_main_c_FUN_004e4500("Out of memory!");
            }
            _fread(*(uint *)&this_ptr->field_0x418,local_380,1,local_30);
            if ((*(byte *)(local_30 + 0xc) & 0x20) == 0) {
              uVar6 = _ftell(local_30);
              *(uint *)&this_ptr->field_0x428 = uVar6;
              *(int *)&this_ptr->field_0x420 =
                   *(int *)&this_ptr->field_0x428 + *(int *)&this_ptr->field_0x424 * 0x108;
              size = local_380;
              goto LAB_0051a22e;
            }
          }
        }
      }
      goto LAB_00519fa2;
    }
    if (((local_34 == 'P') && (local_33 == 'O')) && ((local_32 == 'D' && (local_31 == '2')))) {
      pcVar9 = local_158;
      _fread(local_160,1,0x60,local_30);
      pcVar8 = &this_ptr->field_0x108;
      *(uint *)this_ptr = 200;
      do {
        cVar1 = *pcVar9;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      *(uint *)&this_ptr->field_0x410 = local_108;
      *(uint *)&this_ptr->field_0x41c = local_104;
      pvVar4 = FUN_005b8580(*(int *)&this_ptr->field_0x410 * 0x14);
      *(void **)&this_ptr->field_0x414 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_00519fa2;
      _fread(pvVar4,*(uint *)&this_ptr->field_0x410,0x14,iVar3);
      iVar2 = 0;
      if (0 < *(int *)&this_ptr->field_0x410) {
        do {
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)&this_ptr->field_0x410);
      }
      iVar2 = *(int *)&this_ptr->field_0x410;
      size = *(int *)(*(int *)&this_ptr->field_0x414 + 8) + -0x60 + iVar2 * -0x14;
      if (((int)size < iVar2) || (iVar2 * 0x100 < (int)size)) goto LAB_00519fa2;
      pvVar4 = FUN_005b8580(size);
      *(void **)&this_ptr->field_0x418 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d046a0 = "..\\engine\\pod.cpp";
        _DAT_01d046a4 = 0x228;
        core_main_c_FUN_004e4500("Out of memory!");
      }
      _fread(*(uint *)&this_ptr->field_0x418,size,1,local_30);
      iVar2 = *(int *)&this_ptr->field_0x414 + (*(int *)&this_ptr->field_0x410 + -1) * 0x14;
      *(int *)&this_ptr->field_0x420 = *(int *)(iVar2 + 8) + *(int *)(iVar2 + 4);
      goto LAB_0051a22e;
    }
    *(uint *)this_ptr = 1;
    _fread(&local_100,1,0x54,local_30);
    if ((local_100 < 1) || (99999 < local_100)) {
LAB_00519fa2:
      if (local_30 != 0) {
        _fclose(local_30);
      }
      engine_pod_cpp_CPodFile_cleanup_FUN_0051a8f0(this_ptr);
      return 0;
    }
    pcVar9 = local_fc;
    pcVar8 = &this_ptr->field_0x108;
    *(int *)&this_ptr->field_0x410 = local_100;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pvVar4 = FUN_005b8580(*(int *)&this_ptr->field_0x410 * 0x14);
    *(void **)&this_ptr->field_0x414 = pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_00519fa2;
    size = 0;
    local_14 = 0;
    local_20 = 0;
    if (0 < *(int *)&this_ptr->field_0x410) {
      local_24 = 0;
      do {
        _fread(local_5c,1,0x28,local_30);
        *(ulong *)(*(int *)&this_ptr->field_0x414 + local_24) = size;
        uVar7 = 0xffffffff;
        pcVar8 = local_5c;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        size = size + ~uVar7;
        if ((int)local_14 < (int)size) {
          local_14 = (*(int *)&this_ptr->field_0x410 - local_20) * 0x30 + size;
          pvVar4 = realloc(*(void **)&this_ptr->field_0x418,local_14);
          *(void **)&this_ptr->field_0x418 = pvVar4;
          if (pvVar4 == (void *)0x0) {
            _DAT_01d046a0 = "..\\engine\\pod.cpp";
            _DAT_01d046a4 = 0x260;
            core_main_c_FUN_004e4500("Out of memory!");
          }
        }
        pcVar8 = local_5c;
        pcVar9 = (char *)(*(int *)&this_ptr->field_0x418 +
                         *(int *)(*(int *)&this_ptr->field_0x414 + local_24));
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        *(uint *)(*(int *)&this_ptr->field_0x414 + local_24 + 4) = local_3c;
        *(uint *)(local_24 + *(int *)&this_ptr->field_0x414 + 8) = local_38;
        *(uint *)(*(int *)&this_ptr->field_0x414 + local_24 + 0x10) = 0;
        *(uint *)(*(int *)&this_ptr->field_0x414 + local_24 + 0xc) =
             *(uint *)&this_ptr->field_0x104;
        local_24 = local_24 + 0x14;
        local_20 = local_20 + 1;
      } while (local_20 < *(int *)&this_ptr->field_0x410);
    }
    bVar11 = SBORROW4(size,local_14);
    iVar2 = size - local_14;
  }
  if (bVar11 != iVar2 < 0) {
    local_18 = 1;
  }
LAB_0051a22e:
  _fclose(local_30);
  if (local_18 != 0) {
    pvVar4 = realloc(*(void **)&this_ptr->field_0x418,size);
    *(void **)&this_ptr->field_0x418 = pvVar4;
    if (pvVar4 == (void *)0x0) {
      _DAT_01d046a0 = "..\\engine\\pod.cpp";
      _DAT_01d046a4 = 0x27b;
      core_main_c_FUN_004e4500("realloc returns NULL shrinking filenameBlockSize to fit.");
    }
  }
  iVar2 = 0;
  if (0 < *(int *)&this_ptr->field_0x410) {
    iVar3 = 0;
    do {
      piVar5 = (int *)(*(int *)&this_ptr->field_0x414 + iVar3);
      if ((*piVar5 < 0) || ((int)size <= *piVar5)) goto LAB_00519fa2;
      *piVar5 = *(int *)&this_ptr->field_0x418 + *piVar5;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < *(int *)&this_ptr->field_0x410);
  }
  _qsort
            (*(uint *)&this_ptr->field_0x414,*(uint *)&this_ptr->field_0x410,0x14,
             engine_pod_cpp_FUN_00519ee0);
  return 1;
}
