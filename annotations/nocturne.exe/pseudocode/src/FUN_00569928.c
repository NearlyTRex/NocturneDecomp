// Name: FUN_00569928
// Address: 00569928
// Address Range: [[00569928, 00569f8b]]
// Convention: unknown
// Signature: undefined8 FUN_00569928(byte *param_1,uint *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00569928(byte *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  ushort *puVar4;
  uint in_EAX;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint *in_ECX;
  uint *puVar8;
  uint uVar9;
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
  puVar8 = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
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
        puVar8 = (uint *)*param_2;
        *param_2 = (uint)(puVar8 + 1);
        in_ECX = (uint *)*puVar8;
        if ((*(byte *)(param_3 + 0x1e) & 0x10) != 0) {
          in_ECX = (uint *)(int)(short)in_ECX;
        }
      }
      else {
        puVar8 = (uint *)*param_2;
        *param_2 = (uint)(puVar8 + 1);
        in_ECX = (uint *)*puVar8;
      }
    }
    else {
      puVar8 = (uint *)*param_2;
      *param_2 = (uint)(puVar8 + 1);
      local_24 = *puVar8;
      puVar3 = (uint *)*param_2;
      *param_2 = (uint)(puVar3 + 1);
      local_20 = (uint *)*puVar3;
    }
    if ((*(byte *)(param_3 + 0x1f) & 1) == 0) {
      if (-1 < (int)in_ECX) goto LAB_00569a9c;
    }
    else if (((uint)local_20 & 0x80000000) == 0) {
LAB_00569a9c:
      puVar8 = (uint *)((uint)*(byte *)(param_3 + 0x1e) << 8);
      if (((uint)puVar8 & 0x400) == 0) {
        if ((*(byte *)(param_3 + 0x1e) & 2) != 0) {
          puVar8 = *(uint **)(param_3 + 0x20);
          *(uint *)(param_3 + 0x20) = (int)puVar8 + 1;
          param_1[(int)puVar8] = 0x20;
        }
      }
      else {
        puVar8 = *(uint **)(param_3 + 0x20);
        *(uint *)(param_3 + 0x20) = (int)puVar8 + 1;
        param_1[(int)puVar8] = 0x2b;
      }
      goto LAB_00569ac5;
    }
    puVar8 = *(uint **)(param_3 + 0x20);
    *(uint *)(param_3 + 0x20) = (int)puVar8 + 1;
    param_1[(int)puVar8] = 0x2d;
    if ((*(byte *)(param_3 + 0x1f) & 1) == 0) {
      in_ECX = (uint *)-(int)in_ECX;
    }
    else {
      puVar8 = (uint *)~(uint)local_20;
      local_24 = ~local_24 + 1;
      local_20 = puVar8;
      if (local_24 == 0) {
        puVar8 = (uint *)((int)puVar8 + 1);
        local_20 = puVar8;
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
        puVar2 = (uint *)*param_2;
        puVar8 = puVar2 + 1;
        *param_2 = (uint)puVar8;
        in_ECX = (uint *)*puVar2;
        if ((*(byte *)(param_3 + 0x1e) & 0x10) != 0) {
          in_ECX = (uint *)((uint)in_ECX & 0xffff);
        }
      }
      else {
        puVar2 = (uint *)*param_2;
        *param_2 = (uint)(puVar2 + 1);
        in_ECX = (uint *)*puVar2;
      }
    }
    else {
      puVar8 = (uint *)*param_2;
      *param_2 = (uint)(puVar8 + 1);
      local_24 = *puVar8;
      puVar8 = (uint *)*param_2;
      *param_2 = (uint)(puVar8 + 1);
      puVar8 = (uint *)*puVar8;
      local_20 = puVar8;
    }
  }
LAB_00569ac5:
  bVar1 = *(byte *)(param_3 + 0x15);
  uVar9 = 10;
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
        puVar3 = (uint *)*param_2;
        *param_2 = (uint)(puVar3 + 1);
        FUN_0056974c(param_1,*puVar3,param_3);
        uVar9 = FUN_0056963c(param_1,in_DS,0xffffffff);
        *(uint *)(param_3 + 0x28) = uVar9;
        goto LAB_00569f7d;
      }
      if (bVar1 == 0x43) {
        puVar4 = (ushort *)*param_2;
        *param_2 = (uint)(puVar4 + 2);
        iVar6 = FUN_0056f3a0(param_1,*puVar4);
        if (iVar6 == -1) {
          *(uint *)(param_3 + 0x20) = 0;
          return CONCAT44(local_18,param_1);
        }
        *(int *)(param_3 + 0x20) = iVar6;
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
          puVar3 = (uint *)*param_2;
          *param_2 = (uint)(puVar3 + 1);
          uVar9 = *puVar3;
          pbVar5 = param_1;
          if ((*(byte *)(param_3 + 0x1e) & 0x80) != 0) {
            *param_2 = (uint)(puVar3 + 2);
            FUN_005696e8(puVar3[1] & 0xffff,param_1,4);
            param_1[4] = 0x3a;
            pbVar5 = param_1 + 5;
          }
          FUN_005696e8(uVar9,pbVar5,8);
          if (*(char *)(param_3 + 0x15) == 'P') {
            FUN_00569f8c(param_1);
          }
          uVar9 = FUN_0056963c(param_1,local_18 & 0xffff,0xffffffff);
          *(uint *)(param_3 + 0x20) = uVar9;
          return CONCAT44(local_18,param_1);
        }
      }
      else {
        if (bVar1 < 0x54) {
LAB_00569be3:
          *param_1 = 0;
          if ((*(byte *)(param_3 + 0x1e) & 0x80) == 0) {
            if ((*(byte *)(param_3 + 0x1e) & 0x40) == 0) {
              puVar3 = (uint *)*param_2;
              *param_2 = (uint)(puVar3 + 1);
              pbVar5 = (byte *)*puVar3;
            }
            else {
              puVar3 = (uint *)*param_2;
              *param_2 = (uint)(puVar3 + 1);
              pbVar5 = (byte *)*puVar3;
            }
            if (pbVar5 != (byte *)0x0) {
              local_18 = CONCAT22(local_18._2_2_,in_DS);
              param_1 = pbVar5;
            }
          }
          else {
            puVar3 = (uint *)*param_2;
            *param_2 = (uint)(puVar3 + 2);
            if (((byte *)*puVar3 != (byte *)0x0) || (*(short *)(puVar3 + 1) != 0)) {
              param_1 = (byte *)*puVar3;
              local_18 = CONCAT22((short)((uint)puVar8 >> 0x10),*(short *)(puVar3 + 1));
            }
          }
          if (*(char *)(param_3 + 0x15) == 'S') {
            if ((*(byte *)(param_3 + 0x1e) & 0x10) == 0) {
              iVar6 = FUN_0056966c(param_1,local_18 & 0xffff,*(uint *)(param_3 + 8));
            }
            else {
              uVar9 = *(uint *)(param_3 + 8);
LAB_00569c7e:
              iVar6 = FUN_0056963c(param_1,local_18 & 0xffff,uVar9);
            }
          }
          else {
            if ((*(byte *)(param_3 + 0x1e) & 0x20) == 0) {
              uVar9 = *(uint *)(param_3 + 8);
              goto LAB_00569c7e;
            }
            iVar6 = FUN_0056966c(param_1,local_18 & 0xffff,*(uint *)(param_3 + 8));
          }
          iVar7 = *(int *)(param_3 + 8);
          *(int *)(param_3 + 0x28) = iVar6;
          if ((-1 < iVar7) && (iVar7 < iVar6)) {
            *(int *)(param_3 + 0x28) = iVar7;
            return CONCAT44(local_18,param_1);
          }
          goto LAB_00569f7d;
        }
        if (0x57 < bVar1) {
          if (bVar1 < 0x59) {
LAB_00569cb5:
            if (((*(byte *)(param_3 + 0x1e) & 1) != 0) &&
               (((puVar8 = in_ECX, (*(byte *)(param_3 + 0x1f) & 1) != 0 &&
                 (puVar8 = local_20, local_24 != 0)) || (puVar8 != (uint *)0x0)))) {
              iVar6 = *(int *)(param_3 + 0x20);
              *(int *)(param_3 + 0x20) = iVar6 + 1;
              param_1[iVar6] = 0x30;
              iVar6 = *(int *)(param_3 + 0x20);
              *(int *)(param_3 + 0x20) = iVar6 + 1;
              param_1[iVar6] = *(byte *)(param_3 + 0x15);
            }
            uVar9 = 0x10;
            goto LAB_00569cf7;
          }
          if (bVar1 == 99) {
            *(uint *)(param_3 + 0x20) = 1;
            if ((*(byte *)(param_3 + 0x1e) & 0x20) == 0) {
              pbVar5 = (byte *)*param_2;
              *param_2 = (uint)(pbVar5 + 4);
              *param_1 = *pbVar5;
              return CONCAT44(local_18,param_1);
            }
            puVar4 = (ushort *)*param_2;
            *param_2 = (uint)(puVar4 + 2);
            iVar7 = FUN_0056f3a0(&local_1c,*puVar4);
            iVar6 = _DAT_02de5c30;
            if (((iVar7 != -1) && (*param_1 = local_1c, iVar6 != 0)) &&
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
      if ((*(char *)(param_3 + 0x15) == 'o') && (uVar9 = 8, (*(byte *)(param_3 + 0x1e) & 1) != 0)) {
        iVar6 = *(int *)(param_3 + 0x20);
        *(int *)(param_3 + 0x20) = iVar6 + 1;
        param_1[iVar6] = 0x30;
      }
    }
  }
LAB_00569d17:
  local_18 = CONCAT22(local_18._2_2_,in_DS);
  pbVar5 = param_1 + *(int *)(param_3 + 0x20);
  if ((*(byte *)(param_3 + 0x1f) & 1) == 0) {
    if ((*(int *)(param_3 + 8) != 0) || (in_ECX != (uint *)0x0)) {
      FUN_0056f4f0(in_ECX,param_1 + *(int *)(param_3 + 0x20),uVar9);
      if (*(char *)(param_3 + 0x15) == 'X') {
        FUN_00569f8c(param_1);
      }
      goto LAB_00569daa;
    }
    *pbVar5 = 0;
    iVar6 = 0;
  }
  else if (((*(int *)(param_3 + 8) == 0) && (local_24 == 0)) && (local_20 == (uint *)0x0)) {
    *pbVar5 = 0;
    iVar6 = 0;
  }
  else {
    FUN_0056f3e0(&local_24,param_1 + *(int *)(param_3 + 0x20),uVar9);
    if (*(char *)(param_3 + 0x15) == 'X') {
      FUN_00569f8c(param_1);
    }
LAB_00569daa:
    iVar6 = FUN_0056963c(pbVar5,local_18 & 0xffff,0xffffffff);
  }
  *(int *)(param_3 + 0x28) = iVar6;
  if (iVar6 < *(int *)(param_3 + 8)) {
    *(int *)(param_3 + 0x24) = *(int *)(param_3 + 8) - iVar6;
  }
  param_1 = pbVar5;
  if (*(int *)(param_3 + 8) == -1) {
    FUN_0056986c(param_3);
    return CONCAT44(local_18,pbVar5);
  }
LAB_00569f7d:
  return CONCAT44(local_18,param_1);
}
