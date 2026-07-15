// Name: crt_math.c___multtwelve_FUN_1000e8f0
// Address: 1000e8f0
// Address Range: [[1000e8f0, 1000eb95]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c___multtwelve_FUN_1000e8f0(_LDBL12 *a,_LDBL12 *b)

#include "nocturne.h"

void __cdecl __multtwelve(_LDBL12 *a,_LDBL12 *b)

{
  uint *result;
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  ushort local_1a;
  uint local_18;
  short local_14 [4];
  int local_c;
  int local_8;
  int local_4;
  
  local_18._0_1_ = 0;
  local_18._1_1_ = 0;
  local_18._2_2_ = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  uVar1 = (*(ushort *)(b->ld12 + 10) ^ *(ushort *)(a->ld12 + 10)) & 0x8000;
  uVar3 = *(ushort *)(a->ld12 + 10) & 0x7fff;
  uVar4 = *(ushort *)(b->ld12 + 10) & 0x7fff;
  local_1a = uVar3 + uVar4;
  if (((0x7ffe < uVar3) || (0x7ffe < uVar4)) || (0xbffd < local_1a)) {
    a->ld12[4] = '\0';
    a->ld12[5] = '\0';
    a->ld12[6] = '\0';
    a->ld12[7] = '\0';
    a->ld12[0] = '\0';
    a->ld12[1] = '\0';
    a->ld12[2] = '\0';
    a->ld12[3] = '\0';
    *(uint *)(a->ld12 + 8) = (-(uint)(uVar1 == 0) & 0x80000000) - 0x8000;
    return;
  }
  if (local_1a < 0x3fc0) {
    a->ld12[8] = '\0';
    a->ld12[9] = '\0';
    a->ld12[10] = '\0';
    a->ld12[0xb] = '\0';
    a->ld12[4] = '\0';
    a->ld12[5] = '\0';
    a->ld12[6] = '\0';
    a->ld12[7] = '\0';
    a->ld12[0] = '\0';
    a->ld12[1] = '\0';
    a->ld12[2] = '\0';
    a->ld12[3] = '\0';
    return;
  }
  if (((uVar3 == 0) && (local_1a = local_1a + 1, (*(uint *)(a->ld12 + 8) & 0x7fffffff) == 0)) &&
     ((*(int *)(a->ld12 + 4) == 0 && (*(int *)a->ld12 == 0)))) {
    a->ld12[10] = '\0';
    a->ld12[0xb] = '\0';
    return;
  }
  if (((uVar4 == 0) && (local_1a = local_1a + 1, (*(uint *)(b->ld12 + 8) & 0x7fffffff) == 0)) &&
     ((*(int *)(b->ld12 + 4) == 0 && (*(int *)b->ld12 == 0)))) {
    a->ld12[8] = '\0';
    a->ld12[9] = '\0';
    a->ld12[10] = '\0';
    a->ld12[0xb] = '\0';
    a->ld12[4] = '\0';
    a->ld12[5] = '\0';
    a->ld12[6] = '\0';
    a->ld12[7] = '\0';
    a->ld12[0] = '\0';
    a->ld12[1] = '\0';
    a->ld12[2] = '\0';
    a->ld12[3] = '\0';
    return;
  }
  local_8 = 0;
  local_c = 0;
  do {
    iVar5 = 8;
    iVar7 = local_c * 2;
    local_4 = 5 - local_c;
    if (0 < 5 - local_c) {
      result = (uint *)((int)&local_18 + local_8);
      do {
        uVar2 = _addl
                          (*result,(uint)*(ushort *)(b->ld12 + iVar5) *
                                   (uint)*(ushort *)(a->ld12 + iVar7),result);
        if (uVar2 != 0) {
          *(short *)((int)local_14 + local_8) = *(short *)((int)local_14 + local_8) + 1;
        }
        iVar7 = iVar7 + 2;
        iVar5 = iVar5 + -2;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
    local_8 = local_8 + 2;
    local_c = local_c + 1;
  } while (local_c < 5);
  local_1a = local_1a + 0xc002;
  if (0 < (short)local_1a) {
    do {
      if ((local_14[3] & 0x8000U) != 0) break;
      _shl_12(&local_18);
      local_1a = local_1a - 1;
    } while (0 < (short)local_1a);
    if (0 < (short)local_1a) goto LAB_1000eac3;
  }
  local_1a = local_1a - 1;
  if ((short)local_1a < 0) {
    iVar7 = CONCAT22(local_18._2_2_,CONCAT11(local_18._1_1_,(byte)local_18));
    sVar6 = -local_1a;
    local_1a = 0;
    do {
      if (((byte)local_18 & 1) != 0) {
        iVar7 = iVar7 + 1;
      }
      _shr_12(&local_18);
      sVar6 = sVar6 + -1;
    } while (sVar6 != 0);
  }
  else {
    iVar7 = CONCAT22(local_18._2_2_,CONCAT11(local_18._1_1_,(byte)local_18));
  }
  if (iVar7 != 0) {
    local_18._0_1_ = (byte)local_18 | 1;
  }
LAB_1000eac3:
  iVar5 = CONCAT22(local_14[2],local_14[1]);
  iVar7 = CONCAT22(local_14[0],local_18._2_2_);
  if (0x8000 < CONCAT11(local_18._1_1_,(byte)local_18)) {
    if (CONCAT22(local_14[0],local_18._2_2_) == -1) {
      iVar7 = 0;
      if (CONCAT22(local_14[2],local_14[1]) == -1) {
        if (local_14[3] == 0xffff) {
          local_14[3] = 0x8000;
          local_1a = local_1a + 1;
          iVar5 = 0;
          iVar7 = 0;
        }
        else {
          local_14[3] = local_14[3] + 1;
          iVar5 = 0;
          iVar7 = 0;
        }
      }
      else {
        iVar5 = CONCAT22(local_14[2],local_14[1]) + 1;
      }
    }
    else {
      iVar7 = CONCAT22(local_14[0],local_18._2_2_) + 1;
      iVar5 = CONCAT22(local_14[2],local_14[1]);
    }
  }
  local_14[0] = (short)((uint)iVar7 >> 0x10);
  local_18._2_2_ = (ushort)iVar7;
  local_14[2] = (short)((uint)iVar5 >> 0x10);
  local_14[1] = (short)iVar5;
  if (local_1a < 0x7fff) {
    *(ushort *)a->ld12 = local_18._2_2_;
    *(uint *)(a->ld12 + 2) = CONCAT22(local_14[1],local_14[0]);
    *(uint *)(a->ld12 + 6) = CONCAT22(local_14[3],local_14[2]);
    *(ushort *)(a->ld12 + 10) = local_1a | uVar1;
    return;
  }
  a->ld12[4] = '\0';
  a->ld12[5] = '\0';
  a->ld12[6] = '\0';
  a->ld12[7] = '\0';
  a->ld12[0] = '\0';
  a->ld12[1] = '\0';
  a->ld12[2] = '\0';
  a->ld12[3] = '\0';
  *(uint *)(a->ld12 + 8) = (-(uint)(uVar1 == 0) & 0x80000000) - 0x8000;
  return;
}
