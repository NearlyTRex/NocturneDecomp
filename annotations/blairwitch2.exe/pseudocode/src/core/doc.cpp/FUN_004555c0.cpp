// Name: FUN_004555c0
// Address: 004555c0
// Address Range: [[004555c0, 00455d00]]
// Convention: unknown
// Signature: void FUN_004555c0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004555c0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  uint auStackY_1914 [1521];
  float fVar8;
  float fVar9;
  uint *puVar10;
  uint uVar11;
  byte *puVar12;
  uint local_138;
  uint local_128;
  uint local_118;
  uint local_108;
  uint local_f8;
  uint local_e8;
  uint local_d8;
  uint local_c8;
  uint local_b8;
  uint local_a8;
  uint local_98;
  uint local_88;
  uint local_78;
  uint local_68;
  double local_58;
  double local_50;
  float local_48;
  float local_44;
  float local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  float local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  if ((*(int *)(param_1 + 0x2d04) < 0) || (0xf < *(int *)(param_1 + 0x2d04))) {
    _DAT_01d046a0 = "..\\core\\doc.cpp";
    _DAT_01d046a4 = 0xbe0;
    FUN_004e4500("CDoc::makeDrawDecision - draw motion out of range!");
  }
  local_1c = 1.0;
  if (*(int *)(*(int *)(param_1 + 0x2d04) * 0x38 + 0x2834 + param_1) == 0) {
    local_1c = *(float *)(param_1 + 0x2d08);
  }
  if (*(int *)(*(int *)(param_1 + 0x2d04) * 0x38 + 0x2838 + param_1) == 0) {
    local_1c = (1.0 - *(float *)(param_1 + 0x2d08)) * local_1c;
  }
  iVar1 = param_1 + 0x2b4;
  local_40 = (float)FUN_005038a0(iVar1,0x2a);
  local_14 = (float)FUN_005038a0(iVar1,0x2b);
  local_40 = local_14 + local_40;
  local_14 = (float)FUN_005038a0(iVar1,0x26);
  local_40 = local_14 + local_40;
  local_14 = (float)FUN_005038a0(iVar1,0x24);
  local_1c = (1.0 - (local_14 + local_40)) * local_1c;
  if (local_1c < 0.0) {
    local_1c = 0.0;
  }
  if (*(int *)(param_1 + 0x2d04) != 9) goto LAB_00455742;
  local_30 = (float)FUN_00503e60(param_1 + 0x2b4);
  local_24 = 1.0;
  local_14 = local_30;
  iVar1 = FUN_005035c0(param_1 + 0x2b4);
  iVar1 = *(int *)(iVar1 + 0x24);
  if ((iVar1 == 0x17) || (iVar1 == 0x18)) {
    local_24 = local_30 + (float)_DAT_005d025f;
LAB_0045571c:
    local_24 = local_24 * (float)_DAT_005d0257;
  }
  else if ((iVar1 == 0x19) || (iVar1 == 0x1a)) {
    local_24 = (float)_DAT_005d024f - local_30;
    goto LAB_0045571c;
  }
  if ((int)local_24 < 0x3f800001) {
    if (local_24 < 0.0) {
      local_24 = 0.0;
    }
  }
  else {
    local_24 = 1.0;
  }
  local_1c = local_1c * local_24;
LAB_00455742:
  local_58 = (double)local_1c;
  if ((float)_DAT_005d0267 < local_1c) {
    if (1.0 < local_58) {
      local_1c = 1.0;
    }
    uVar2 = FUN_00547890(param_1 + 0x2b4,param_1 + *(int *)(param_1 + 0x2d04) * 0x38 + 0x283c,1);
    local_3c = FUN_00502f10(uVar2);
    local_34 = FUN_00503f50(param_1 + 0x2b4,local_3c,*(uint *)(param_1 + 0x2d08));
    local_14 = (float)local_34;
    FUN_0040c8f0(*(uint *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4),_DAT_01cede1c)
    ;
    FUN_0040c8f0(*(uint *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4),_DAT_01d0557c)
    ;
    uVar2 = _DAT_01b4d29c;
    if ((*(int *)(param_1 + 0x2d04) == 1) && (*(int *)(param_1 + 0x2d08) == 0x3f800000)) {
      uVar2 = _DAT_01b4d264;
    }
    if ((*(int *)(param_1 + 0x2d04) == 3) && (*(int *)(param_1 + 0x2d08) == 0x3f800000)) {
      uVar2 = _DAT_01b4d268;
    }
    if (((3 < *(int *)(param_1 + 0x2d04)) && (*(int *)(param_1 + 0x2d04) < 7)) &&
       (*(int *)(param_1 + 0x2d08) == 0x3f800000)) {
      uVar2 = _DAT_01b4d268;
    }
    if ((*(int *)(param_1 + 0x2d04) == 8) && (*(int *)(param_1 + 0x2d08) == 0x3f800000)) {
      uVar2 = _DAT_01b4d268;
    }
    if (((*(int *)(param_1 + 0x2d04) == 7) &&
        (uVar2 = _DAT_01b4d268, *(float *)(param_1 + 0x2d08) < 1.0)) &&
       (iVar1 = FUN_005035c0(param_1 + 0x2b4), uVar2 = _DAT_01b4d29c, *(int *)(iVar1 + 0x24) == 0))
    {
      uVar2 = 0xffffffff;
    }
    local_14 = (float)FUN_005038a0(param_1 + 0x2b4,0x13);
    local_1c = (1.0 - local_14) * local_1c;
    FUN_00545a60(param_1 + 0x2b4,local_3c,local_34,local_1c,uVar2,&LAB_00544cc0);
    if ((*(int *)(param_1 + 0x2d04) == 0) || (*(int *)(param_1 + 0x2d04) == 1)) {
      FUN_00593df0(param_1 + 0x964 + _DAT_01b4d28c * 0x10,_DAT_01b4d26c * 0x10 + param_1 + 0x964,
                   *(uint *)(param_1 + 0x2d08));
      puVar10 = (uint *)(param_1 + 0x964 + _DAT_01b4d28c * 0x10);
      puVar4 = puVar10 + (uint)bVar6 * -2 + 1;
      *puVar10 = local_128;
      *puVar4 = *(uint *)(&stack0xfffffedc + (uint)bVar6 * -8);
      puVar4[(uint)bVar6 * -2 + 1] =
           *(uint *)(&stack0xfffffee0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      (puVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffee0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
    }
    if ((*(int *)(param_1 + 0x2d04) == 1) || (*(int *)(param_1 + 0x2d04) == 0xe)) {
      local_28 = *(float *)(param_1 + 0x2567c);
      local_2c = 0x3e860a92;
      local_38 = 0x3f19999a;
      local_20 = 0.0;
      if (local_28 < 0.0) {
        local_20 = ((local_28 + _DAT_005d026f) / (0xBF860A92 + _DAT_005d026f)) * _DAT_005d0273;
      }
      if (0.0 < local_28) {
        local_20 = ((local_28 - 0.2617994) / (0x3F9C61AA - 0.2617994)) * 0.6;
      }
      local_14 = (float)FUN_0042a5a0(param_1,1);
      local_50 = (double)((1.0 - local_14) * local_1c);
      local_14 = (float)FUN_0042a5a0(param_1,0x12);
      local_20 = (1.0 - local_14) * (float)local_50 * local_20;
      if (0.0 < local_20) {
        FUN_00593fa0(local_28,local_20,_DAT_01b4d29c,&LAB_0044fe40);
        puVar10 = &stack0xfffffec8;
        local_138 = local_118;
        *(uint *)((int)&stack0xfffffecc + (uint)bVar6 * 0xfffffffe * 4) =
             *(uint *)(&stack0xfffffeec + (uint)bVar6 * -8);
        fVar8 = (float)(param_1 + 0x2b4);
        *(uint *)(&stack0xfffffed0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xfffffef0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        *(uint *)
         ((int)(&stack0xfffffed0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4
         ) = *(uint *)
              ((int)(&stack0xfffffef0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
              ((uint)bVar6 * -2 + 1) * 4);
        local_40 = (float)(param_1 + 0x2b4);
        FUN_00546f40(fVar8,puVar10);
        FUN_00593fa0(-local_28,local_20,_DAT_01b4d264,&LAB_0044fe40);
        fVar8 = local_40;
        puVar10 = &stack0xffffff98;
        local_68 = local_108;
        *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * 0xfffffffe * 4) =
             *(uint *)(&stack0xfffffefc + (uint)bVar6 * -8);
        *(uint *)(&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffff00 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        *(uint *)
         ((int)(&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4
         ) = *(uint *)
              ((int)(&stack0xffffff00 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
              ((uint)bVar6 * -2 + 1) * 4);
        FUN_00546f40(fVar8,puVar10);
      }
      local_14 = (float)FUN_0042a5a0(param_1,3);
      local_50 = (double)((1.0 - local_14) * local_1c);
      local_14 = (float)FUN_0042a5a0(param_1,0x12);
      local_44 = (1.0 - local_14) * (float)local_50;
      FUN_00593fe0(*(uint *)(param_1 + 0x25680));
      fVar8 = local_44;
      puVar12 = &LAB_0044fe40;
      puVar10 = &stack0xffffff38;
      iVar1 = param_1 + 0x2b4;
      local_c8 = local_88;
      *(uint *)((int)&stack0xffffff3c + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff7c + (uint)bVar6 * -8);
      uVar2 = _DAT_01b4d29c;
      *(uint *)(&stack0xffffff40 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff80 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)
       ((int)(&stack0xffffff40 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff80 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
              ((uint)bVar6 * -2 + 1) * 4);
      FUN_00546f40(iVar1,puVar10,fVar8,uVar2,puVar12);
      FUN_004562a0(param_1,0);
      puVar10 = (uint *)(param_1 + 0x964 + _DAT_01b4d28c * 0x10);
      puVar4 = (uint *)(_DAT_01b4d26c * 0x10 + 0x964 + param_1);
      puVar5 = puVar10 + (uint)bVar6 * -2 + 1;
      puVar3 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar10 = *puVar4;
      *puVar5 = *puVar3;
      puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
      (puVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
           (puVar3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    }
    if ((*(int *)(param_1 + 0x2d04) == 0xc) || (*(int *)(param_1 + 0x2d04) == 0xd)) {
      local_14 = (float)FUN_0042a5a0(param_1,3);
      local_18 = (1.0 - local_14) * local_1c;
      FUN_00593fa0(*(uint *)(param_1 + 0x2565c));
      fVar8 = local_18;
      puVar12 = &LAB_0044fe40;
      puVar10 = &stack0xffffff88;
      local_78 = local_f8;
      *(uint *)((int)&stack0xffffff8c + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff0c + (uint)bVar6 * -8);
      fVar9 = (float)(param_1 + 0x2b4);
      uVar2 = _DAT_01b4d29c;
      *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff10 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)
       ((int)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff10 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
              ((uint)bVar6 * -2 + 1) * 4);
      local_40 = (float)(param_1 + 0x2b4);
      FUN_00546f40(fVar9,puVar10,fVar8,uVar2,puVar12);
      FUN_00593fe0(*(uint *)(param_1 + 0x25660));
      fVar8 = local_18;
      puVar12 = &LAB_0044fe40;
      local_a8 = local_d8;
      *(uint *)((int)&stack0xffffff5c + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff2c + (uint)bVar6 * -8);
      uVar2 = _DAT_01b4d29c;
      *(uint *)(&stack0xffffff60 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff30 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)
       ((int)(&stack0xffffff60 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff30 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
              ((uint)bVar6 * -2 + 1) * 4);
      FUN_00546f40(local_40,&stack0xffffff58,fVar8,uVar2,puVar12);
    }
    if (*(int *)(param_1 + 0x2d04) == 9) {
      fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x25718) / (float10)_DAT_005f5164,
                              (float10)1);
      local_48 = (float)fVar7;
      FUN_00593fe0(local_48);
      puVar12 = &LAB_00544cc0;
      uVar11 = 0x3f800000;
      puVar10 = &stack0xffffff48;
      param_1 = param_1 + 0x2b4;
      local_b8 = local_e8;
      *(uint *)((int)&stack0xffffff4c + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff1c + (uint)bVar6 * -8);
      uVar2 = _DAT_01b4d268;
      *(uint *)(&stack0xffffff50 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff20 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)
       ((int)(&stack0xffffff50 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff20 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
              ((uint)bVar6 * -2 + 1) * 4);
      FUN_00546f40(param_1,puVar10,uVar11,uVar2,puVar12);
      FUN_00593fe0(-local_48);
      puVar12 = &LAB_00544cc0;
      puVar10 = &stack0xffffff48;
      uVar11 = 0x3f800000;
      local_b8 = local_98;
      *(uint *)((int)&stack0xffffff4c + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff6c + (uint)bVar6 * -8);
      uVar2 = _DAT_01b4d264;
      *(uint *)(&stack0xffffff50 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff70 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)
       ((int)(&stack0xffffff50 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff70 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
              ((uint)bVar6 * -2 + 1) * 4);
      FUN_00546f40(param_1,puVar10,uVar11,uVar2,puVar12);
      return;
    }
  }
  return;
}
