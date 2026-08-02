// Name: crt_unknown.c_FUN_00569928
// Address: 00569928
// Address Range: [[00569928, 00569f8b]]
// Convention: unknown
// Signature: undefined8 crt_unknown_c_FUN_00569928(byte *param_1,int *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00569928(byte *param_1,int *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  ushort *puVar5;
  uint in_EAX;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint *in_ECX;
  uint *puVar9;
  int iVar10;
  ushort in_DS;
  uint local_24;
  uint *local_20;
  byte local_1c;
  byte local_1b;
  uint local_18;
  
  *(uint *)(param_3 + 0x20) = 0;
  *(uint *)(param_3 + 0x24) = 0;
  *(uint *)(param_3 + 0x28) = 0;
  *(uint *)(param_3 + 0x2c) = 0;
  local_18 = CONCAT22(local_18._2_2_,in_DS);
  *(uint *)(param_3 + 0x30) = 0;
  bVar1 = *(byte *)(param_3 + 0x15);
  puVar9 = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  *(uint *)(param_3 + 0x34) = 0;
  if (bVar1 < 0x69) {
    if (0x57 < bVar1) {
      if (bVar1 < 0x59) goto LAB_005699a4;
      if (bVar1 == 100) goto LAB_005699fe;
    }
    goto LAB_00569ac5;
  }
  if (bVar1 < 0x6a) {
LAB_005699fe:
    if ((*(byte *)(param_3 + 0x1f) & 1) == 0) {
      if ((*(byte *)(param_3 + 0x1e) & 0x20) == 0) {
        puVar4 = (uint *)*param_2;
        *param_2 = (int)(puVar4 + 1);
        in_ECX = (uint *)*puVar4;
        if ((*(byte *)(param_3 + 0x1e) & 0x10) != 0) {
          in_ECX = (uint *)(int)(short)in_ECX;
        }
      }
      else {
        puVar4 = (uint *)*param_2;
        *param_2 = (int)(puVar4 + 1);
        in_ECX = (uint *)*puVar4;
      }
    }
    else {
      puVar9 = (uint *)*param_2;
      *param_2 = (int)(puVar9 + 1);
      local_24 = *puVar9;
      puVar4 = (uint *)*param_2;
      *param_2 = (int)(puVar4 + 1);
      local_20 = (uint *)*puVar4;
    }
    if ((*(byte *)(param_3 + 0x1f) & 1) == 0) {
      if (-1 < (int)in_ECX) goto LAB_00569a9c;
    }
    else if (((uint)local_20 & 0x80000000) == 0) {
LAB_00569a9c:
      puVar9 = (uint *)((uint)*(byte *)(param_3 + 0x1e) << 8);
      if (((uint)puVar9 & 0x400) == 0) {
        if ((*(byte *)(param_3 + 0x1e) & 2) != 0) {
          puVar9 = *(uint **)(param_3 + 0x20);
          *(int *)(param_3 + 0x20) = (int)puVar9 + 1;
          param_1[(int)puVar9] = 0x20;
        }
      }
      else {
        puVar9 = *(uint **)(param_3 + 0x20);
        *(int *)(param_3 + 0x20) = (int)puVar9 + 1;
        param_1[(int)puVar9] = 0x2b;
      }
      goto LAB_00569ac5;
    }
    puVar9 = *(uint **)(param_3 + 0x20);
    *(int *)(param_3 + 0x20) = (int)puVar9 + 1;
    param_1[(int)puVar9] = 0x2d;
    if ((*(byte *)(param_3 + 0x1f) & 1) == 0) {
      in_ECX = (uint *)-(int)in_ECX;
    }
    else {
      puVar9 = (uint *)~(uint)local_20;
      local_24 = ~local_24 + 1;
      local_20 = puVar9;
      if (local_24 == 0) {
        puVar9 = (uint *)((int)puVar9 + 1);
        local_20 = puVar9;
      }
    }
  }
  else if (bVar1 < 0x75) {
    if (bVar1 == 0x6f) goto LAB_005699a4;
  }
  else if ((bVar1 < 0x76) || (bVar1 == 0x78)) {
LAB_005699a4:
    if ((*(byte *)(param_3 + 0x1f) & 1) == 0) {
      if ((*(byte *)(param_3 + 0x1e) & 0x20) == 0) {
        puVar3 = (uint *)*param_2;
        puVar9 = puVar3 + 1;
        *param_2 = (int)puVar9;
        in_ECX = (uint *)*puVar3;
        if ((*(byte *)(param_3 + 0x1e) & 0x10) != 0) {
          in_ECX = (uint *)((uint)in_ECX & 0xffff);
        }
      }
      else {
        puVar4 = (uint *)*param_2;
        *param_2 = (int)(puVar4 + 1);
        in_ECX = (uint *)*puVar4;
      }
    }
    else {
      puVar9 = (uint *)*param_2;
      *param_2 = (int)(puVar9 + 1);
      local_24 = *puVar9;
      piVar2 = (int *)*param_2;
      *param_2 = (int)(piVar2 + 1);
      puVar9 = (uint *)*piVar2;
      local_20 = puVar9;
    }
  }
LAB_00569ac5:
  bVar1 = *(byte *)(param_3 + 0x15);
  iVar10 = 10;
  if (bVar1 < 100) {
    if (bVar1 < 0x47) {
      if (0x44 < bVar1) {
        if (bVar1 < 0x46) goto LAB_00569bb9;
LAB_00569b83:
        if ((*(byte *)(param_3 + 0x1e) & 0x10) == 0) {
LAB_00569bb9:
          FUN_00569850(param_1,param_2,param_3);
          FUN_0056986c(param_3);
          local_18 = CONCAT22(local_18._2_2_,in_DS);
          return CONCAT44(local_18,param_1 + 1);
        }
        puVar4 = (uint *)*param_2;
        *param_2 = (int)(puVar4 + 1);
        FUN_0056974c(param_1,*puVar4,param_3);
        uVar7 = FUN_0056963c(param_1,in_DS,0xffffffff);
        *(uint *)(param_3 + 0x28) = uVar7;
        goto LAB_00569f7d;
      }
      if (bVar1 == 0x43) {
        puVar5 = (ushort *)*param_2;
        *param_2 = (int)(puVar5 + 2);
        iVar10 = WideCharToSingleByte
                           ((wchar_t)param_1,(char *)(uint)*puVar5);
        if (iVar10 == -1) {
          *(uint *)(param_3 + 0x20) = 0;
          return CONCAT44(local_18,param_1);
        }
        *(int *)(param_3 + 0x20) = iVar10;
        return CONCAT44(local_18,param_1);
      }
    }
    else {
      if (bVar1 < 0x48) goto LAB_00569bb9;
      if (bVar1 < 0x53) {
        if (bVar1 == 0x50) {
LAB_00569df2:
          if (*(int *)(param_3 + 4) == 0) {
            if ((*(byte *)(param_3 + 0x1e) & 0x80) == 0) {
              *(uint *)(param_3 + 4) = 8;
            }
            else {
              *(uint *)(param_3 + 4) = 0xd;
            }
          }
          *(byte *)(param_3 + 0x1e) = *(byte *)(param_3 + 0x1e) & 0xf9;
          puVar4 = (uint *)*param_2;
          *param_2 = (int)(puVar4 + 1);
          uVar7 = *puVar4;
          pbVar6 = param_1;
          if ((*(byte *)(param_3 + 0x1e) & 0x80) != 0) {
            *param_2 = (int)(puVar4 + 2);
            FUN_005696e8(puVar4[1] & 0xffff,param_1,4);
            param_1[4] = 0x3a;
            pbVar6 = param_1 + 5;
          }
          FUN_005696e8(uVar7,pbVar6,8);
          if (*(char *)(param_3 + 0x15) == 'P') {
            FUN_00569f8c(param_1);
          }
          uVar7 = FUN_0056963c(param_1,local_18 & 0xffff,0xffffffff);
          *(uint *)(param_3 + 0x20) = uVar7;
          return CONCAT44(local_18,param_1);
        }
      }
      else {
        if (bVar1 < 0x54) {
LAB_00569be3:
          *param_1 = 0;
          if ((*(byte *)(param_3 + 0x1e) & 0x80) == 0) {
            if ((*(byte *)(param_3 + 0x1e) & 0x40) == 0) {
              puVar4 = (uint *)*param_2;
              *param_2 = (int)(puVar4 + 1);
              pbVar6 = (byte *)*puVar4;
            }
            else {
              puVar4 = (uint *)*param_2;
              *param_2 = (int)(puVar4 + 1);
              pbVar6 = (byte *)*puVar4;
            }
            if (pbVar6 != (byte *)0x0) {
              local_18 = CONCAT22(local_18._2_2_,in_DS);
              param_1 = pbVar6;
            }
          }
          else {
            puVar4 = (uint *)*param_2;
            *param_2 = (int)(puVar4 + 2);
            if (((byte *)*puVar4 != (byte *)0x0) || (*(short *)(puVar4 + 1) != 0)) {
              param_1 = (byte *)*puVar4;
              local_18 = CONCAT22((short)((uint)puVar9 >> 0x10),*(short *)(puVar4 + 1));
            }
          }
          if (*(char *)(param_3 + 0x15) == 'S') {
            if ((*(byte *)(param_3 + 0x1e) & 0x10) == 0) {
              iVar10 = FUN_0056966c
                                 (param_1,local_18 & 0xffff,*(uint *)(param_3 + 8));
            }
            else {
              uVar7 = *(uint *)(param_3 + 8);
LAB_00569c7e:
              iVar10 = FUN_0056963c(param_1,local_18 & 0xffff,uVar7);
            }
          }
          else {
            if ((*(byte *)(param_3 + 0x1e) & 0x20) == 0) {
              uVar7 = *(uint *)(param_3 + 8);
              goto LAB_00569c7e;
            }
            iVar10 = FUN_0056966c
                               (param_1,local_18 & 0xffff,*(uint *)(param_3 + 8));
          }
          iVar8 = *(int *)(param_3 + 8);
          *(int *)(param_3 + 0x28) = iVar10;
          if ((-1 < iVar8) && (iVar8 < iVar10)) {
            *(int *)(param_3 + 0x28) = iVar8;
            return CONCAT44(local_18,param_1);
          }
          goto LAB_00569f7d;
        }
        if (0x57 < bVar1) {
          if (bVar1 < 0x59) {
LAB_00569cb5:
            if (((*(byte *)(param_3 + 0x1e) & 1) != 0) &&
               (((puVar9 = in_ECX, (*(byte *)(param_3 + 0x1f) & 1) != 0 &&
                 (puVar9 = local_20, local_24 != 0)) || (puVar9 != (uint *)0x0)))) {
              iVar10 = *(int *)(param_3 + 0x20);
              *(int *)(param_3 + 0x20) = iVar10 + 1;
              param_1[iVar10] = 0x30;
              iVar10 = *(int *)(param_3 + 0x20);
              *(int *)(param_3 + 0x20) = iVar10 + 1;
              param_1[iVar10] = *(byte *)(param_3 + 0x15);
            }
            iVar10 = 0x10;
            goto LAB_00569cf7;
          }
          if (bVar1 == 99) {
            *(uint *)(param_3 + 0x20) = 1;
            if ((*(byte *)(param_3 + 0x1e) & 0x20) == 0) {
              pbVar6 = (byte *)*param_2;
              *param_2 = (int)(pbVar6 + 4);
              *param_1 = *pbVar6;
              return CONCAT44(local_18,param_1);
            }
            puVar5 = (ushort *)*param_2;
            *param_2 = (int)(puVar5 + 2);
            iVar8 = WideCharToSingleByte
                              ((wchar_t)&local_1c,(char *)(uint)*puVar5);
            iVar10 = _DAT_02de5c30;
            if (((iVar8 != -1) && (*param_1 = local_1c, iVar10 != 0)) &&
               ((*(byte *)(local_1c + 0x2de5c41) & 1) != 0)) {
              param_1[1] = local_1b;
              *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 1;
              return CONCAT44(local_18,param_1);
            }
            goto LAB_00569f7d;
          }
        }
      }
    }
LAB_00569f6a:
    *(uint *)(param_3 + 4) = 0;
    *param_1 = *(byte *)(param_3 + 0x15);
    *(uint *)(param_3 + 0x20) = 1;
    goto LAB_00569f7d;
  }
  if (100 < bVar1) {
    if (bVar1 < 0x6f) {
      if (bVar1 < 0x66) goto LAB_00569bb9;
      if (bVar1 < 0x67) goto LAB_00569b83;
      if (bVar1 < 0x68) goto LAB_00569bb9;
      if (bVar1 != 0x69) goto LAB_00569f6a;
    }
    else {
      if (0x6f < bVar1) {
        if (bVar1 < 0x73) {
          if (bVar1 == 0x70) goto LAB_00569df2;
        }
        else {
          if (bVar1 < 0x74) goto LAB_00569be3;
          if (0x74 < bVar1) {
            if (bVar1 < 0x76) goto LAB_00569d17;
            if (bVar1 == 0x78) goto LAB_00569cb5;
          }
        }
        goto LAB_00569f6a;
      }
LAB_00569cf7:
      if ((*(char *)(param_3 + 0x15) == 'o') && (iVar10 = 8, (*(byte *)(param_3 + 0x1e) & 1) != 0))
      {
        iVar8 = *(int *)(param_3 + 0x20);
        *(int *)(param_3 + 0x20) = iVar8 + 1;
        param_1[iVar8] = 0x30;
      }
    }
  }
LAB_00569d17:
  local_18 = CONCAT22(local_18._2_2_,in_DS);
  pbVar6 = param_1 + *(int *)(param_3 + 0x20);
  if ((*(byte *)(param_3 + 0x1f) & 1) == 0) {
    if ((*(int *)(param_3 + 8) != 0) || (in_ECX != (uint *)0x0)) {
      utoa
                ((uint)in_ECX,(char *)(param_1 + *(int *)(param_3 + 0x20)),iVar10);
      if (*(char *)(param_3 + 0x15) == 'X') {
        FUN_00569f8c(param_1);
      }
      goto LAB_00569daa;
    }
    *pbVar6 = 0;
    iVar10 = 0;
  }
  else if (((*(int *)(param_3 + 8) == 0) && (local_24 == 0)) && (local_20 == (uint *)0x0)) {
    *pbVar6 = 0;
    iVar10 = 0;
  }
  else {
    i64toa
              ((longlong *)&local_24,(char *)(param_1 + *(int *)(param_3 + 0x20)),iVar10);
    if (*(char *)(param_3 + 0x15) == 'X') {
      FUN_00569f8c(param_1);
    }
LAB_00569daa:
    iVar10 = FUN_0056963c(pbVar6,local_18 & 0xffff,0xffffffff);
  }
  *(int *)(param_3 + 0x28) = iVar10;
  if (iVar10 < *(int *)(param_3 + 8)) {
    *(int *)(param_3 + 0x24) = *(int *)(param_3 + 8) - iVar10;
  }
  param_1 = pbVar6;
  if (*(int *)(param_3 + 8) == -1) {
    FUN_0056986c(param_3);
    return CONCAT44(local_18,pbVar6);
  }
LAB_00569f7d:
  return CONCAT44(local_18,param_1);
}
