// Name: FUN_004f7ae0
// Address: 004f7ae0
// Address Range: [[004f7ae0, 004f80d1]]
// Convention: unknown
// Signature: undefined4 FUN_004f7ae0(undefined4 *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f7ae0(uint *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  uint *puVar13;
  uint *puVar14;
  int *piVar15;
  byte bVar16;
  int aiStackY_2004 [1977];
  char local_110;
  char local_10f;
  char local_10e;
  char local_10d;
  char local_108 [80];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  char local_ac [80];
  char local_5c [32];
  uint local_3c;
  uint local_38;
  uint local_34;
  int aiStack_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar16 = 0;
  engine_pod_cpp_CPodFile_cleanup_FUN_004f80e0(param_1);
  pcVar12 = (char *)(param_1 + 1);
  iVar2 = _fullpath(pcVar12,param_2,0x100);
  if (iVar2 == 0) {
    do {
      cVar1 = *param_2;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
  }
  uVar3 = engine_dosio_cpp_getFileTimestamp_FUN_00456910(0,param_1 + 1);
  param_1[0x41] = uVar3;
  iVar2 = _fopen(param_1 + 1,"rb");
  local_1c = iVar2;
  if (iVar2 != 0) {
    _fread(&local_110,1,0x60,iVar2);
    if ((((local_110 == 'P') && (local_10f == 'O')) && (local_10e == 'D')) && (local_10d == '2')) {
      pcVar8 = local_108;
      pcVar12 = (char *)(param_1 + 0x42);
      *param_1 = 2;
      do {
        cVar1 = *pcVar8;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      param_1[0x82] = local_b8;
      param_1[0x85] = local_b4;
      iVar4 = malloc(param_1[0x82] * 0x14);
      param_1[0x83] = iVar4;
      if (iVar4 != 0) {
        _fread(iVar4,param_1[0x82],0x14,iVar2);
        iVar2 = *(int *)(param_1[0x83] + 8) + -0x60 + param_1[0x82] * -0x14;
        if (((int)param_1[0x82] <= iVar2) && (iVar2 <= param_1[0x82] * 0x100)) {
          iVar4 = malloc(iVar2);
          param_1[0x84] = iVar4;
          if (iVar4 == 0) {
            _DAT_01cc4800 = "..\\engine\\pod.cpp";
            _DAT_01cc4804 = 0xfe;
            FUN_004c8440("Out of memory!");
          }
          _fread(param_1[0x84],iVar2,1,local_1c);
          iVar4 = param_1[0x83] + (param_1[0x82] + -1) * 0x14;
          param_1[0x86] = *(int *)(iVar4 + 8) + *(int *)(iVar4 + 4);
          goto LAB_004f7d60;
        }
      }
    }
    else {
      *param_1 = 1;
      _fseek(local_1c,0,0);
      _fread(&local_b0,1,0x54,local_1c);
      pcVar8 = local_ac;
      pcVar12 = (char *)(param_1 + 0x42);
      param_1[0x82] = local_b0;
      do {
        cVar1 = *pcVar8;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      iVar2 = malloc(param_1[0x82] * 0x14);
      param_1[0x83] = iVar2;
      if (iVar2 != 0) {
        iVar2 = 0;
        local_18 = 0;
        if (0 < (int)param_1[0x82]) {
          iVar4 = 0;
          do {
            _fread(local_5c,1,0x28,local_1c);
            *(int *)(iVar4 + param_1[0x83]) = iVar2;
            uVar6 = 0xffffffff;
            pcVar12 = local_5c;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar12 + (uint)bVar16 * -2 + 1;
            } while (cVar1 != '\0');
            iVar2 = iVar2 + ~uVar6;
            iVar7 = realloc(param_1[0x84],iVar2);
            param_1[0x84] = iVar7;
            if (iVar7 == 0) {
              _DAT_01cc4800 = "..\\engine\\pod.cpp";
              _DAT_01cc4804 = 0x128;
              FUN_004c8440("Out of memory!");
            }
            pcVar8 = (char *)(param_1[0x84] + *(int *)(iVar4 + param_1[0x83]));
            pcVar12 = local_5c;
            do {
              cVar1 = *pcVar12;
              *pcVar8 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar12[1];
              pcVar12 = pcVar12 + 2;
              pcVar8[1] = cVar1;
              pcVar8 = pcVar8 + 2;
            } while (cVar1 != '\0');
            *(uint *)(param_1[0x83] + 4 + iVar4) = local_3c;
            *(uint *)(param_1[0x83] + iVar4 + 8) = local_38;
            *(uint *)(iVar4 + 0x10 + param_1[0x83]) = 0;
            local_18 = local_18 + 1;
            *(uint *)(param_1[0x83] + iVar4 + 0xc) = param_1[0x41];
            iVar4 = iVar4 + 0x14;
          } while (local_18 < (int)param_1[0x82]);
        }
        param_1[0x85] = 0;
LAB_004f7d60:
        _fclose(local_1c);
        iVar4 = 0;
        if (0 < (int)param_1[0x82]) {
          iVar7 = 0;
          do {
            piVar5 = (int *)(param_1[0x83] + iVar7);
            if ((*piVar5 < 0) || (iVar2 <= *piVar5)) goto LAB_004f7b75;
            *piVar5 = param_1[0x84] + *piVar5;
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 0x14;
          } while (iVar4 < (int)param_1[0x82]);
        }
        local_20 = param_1[0x82];
        while (local_20 = local_20 + -1, 0 < local_20) {
          if (0 < local_20) {
            local_14 = local_20 * 0x14;
            iVar4 = 0x14;
            iVar2 = 0;
            do {
              iVar7 = _stricmp
                                (*(uint *)(iVar2 + param_1[0x83]),
                                 *(uint *)(param_1[0x83] + iVar4));
              if (0 < iVar7) {
                iVar7 = param_1[0x83];
                puVar11 = (uint *)(iVar7 + iVar2);
                piVar5 = puVar11 + (uint)bVar16 * -2 + 1;
                local_34 = *puVar11;
                piVar15 = aiStack_30 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1;
                piVar9 = piVar5 + (uint)bVar16 * -2 + 1;
                aiStack_30[(uint)bVar16 * -2] = *piVar5;
                *piVar15 = *piVar9;
                piVar15[(uint)bVar16 * -2 + 1] = piVar9[(uint)bVar16 * -2 + 1];
                (piVar15 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
                     (piVar9 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
                puVar14 = (uint *)(iVar7 + iVar4);
                puVar13 = puVar11 + (uint)bVar16 * -2 + 1;
                puVar10 = puVar14 + (uint)bVar16 * -2 + 1;
                *puVar11 = *puVar14;
                puVar14 = puVar13 + (uint)bVar16 * -2 + 1;
                puVar11 = puVar10 + (uint)bVar16 * -2 + 1;
                *puVar13 = *puVar10;
                *puVar14 = *puVar11;
                puVar14[(uint)bVar16 * -2 + 1] = puVar11[(uint)bVar16 * -2 + 1];
                (puVar14 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
                     (puVar11 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
                piVar9 = (uint *)(param_1[0x83] + iVar4) + (uint)bVar16 * -2 + 1;
                *(uint *)(param_1[0x83] + iVar4) = local_34;
                piVar15 = piVar9 + (uint)bVar16 * -2 + 1;
                piVar5 = aiStack_30 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1;
                *piVar9 = aiStack_30[(uint)bVar16 * -2];
                *piVar15 = *piVar5;
                piVar15[(uint)bVar16 * -2 + 1] = piVar5[(uint)bVar16 * -2 + 1];
                (piVar15 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
                     (piVar5 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
              }
              iVar2 = iVar2 + 0x14;
              iVar4 = iVar4 + 0x14;
            } while (iVar2 < local_14);
          }
        }
        return 1;
      }
    }
  }
LAB_004f7b75:
  if (local_1c != 0) {
    _fclose(local_1c);
  }
  engine_pod_cpp_CPodFile_cleanup_FUN_004f80e0(param_1);
  return 0;
}
