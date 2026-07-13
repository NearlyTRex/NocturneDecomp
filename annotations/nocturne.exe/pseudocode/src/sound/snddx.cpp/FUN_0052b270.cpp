// Name: FUN_0052b270
// Address: 0052b270
// Address Range: [[0052b270, 0052b7d4]]
// Convention: unknown
// Signature: bool FUN_0052b270(undefined4 param_1,int param_2,byte param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0052b270(uint param_1,int param_2,byte param_3)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  float local_cb8;
  byte auStack_cb4 [400];
  byte auStack_b24 [400];
  byte auStack_994 [400];
  byte auStack_804 [400];
  byte auStack_674 [400];
  byte auStack_4e4 [388];
  byte auStack_360 [412];
  byte auStack_1c4 [400];
  double dStack_34;
  float local_2c;
  float local_28;
  int local_24;
  int *local_20;
  int iStack_1c;
  float local_18;
  
  iVar3 = *(int *)(param_2 + 0x6c);
  if ((((iVar3 < 1) || (0x1e < iVar3)) || (*(int *)(iVar3 * 4 + 0x2dc92a8) == 0)) ||
     (*(int *)(iVar3 * 4 + 0x2dc9324) == 0)) {
    _DAT_01cc4800 = "..\\sound\\snddx.cpp";
    _DAT_01cc4804 = 0x2f3;
    FUN_004c8440();
  }
  bVar5 = true;
  local_20 = *(int **)(iVar3 * 4 + 0x2dc92a8);
  local_24 = 0;
  piVar2 = *(int **)(iVar3 * 4 + 0x2dc9324);
  if ((local_20 == (int *)0x0) || (piVar2 == (int *)0x0)) {
    return false;
  }
  if ((param_3 & 0x88) != 0) {
    local_2c = *(float *)(param_2 + 0xfc);
    local_28 = *(float *)(param_2 + 0x104);
    local_18 = (float)FUN_00527380();
    local_cb8 = local_18;
    if (((*(byte *)(param_2 + 0x5c) & 1) == 0) && (0.0 < local_18)) {
      local_cb8 = local_18 / local_18;
      local_2c = local_2c * local_18;
      local_28 = local_28 * local_18;
    }
  }
  if ((param_3 & 2) != 0) {
    iVar3 = (**(code **)(*piVar2 + 0x4c))
                      (piVar2,(float)*(double *)(param_2 + 4),(float)*(double *)(param_2 + 0xc),
                       (float)*(double *)(param_2 + 0x14),1);
    if (iVar3 != 0) {
      uVar4 = FUN_00529a90();
      FUN_00563c90(auStack_804,"DirectSux: Unable to %s.  (%s)",
                   "Set hardware sfx 3d buffer position",uVar4);
      FUN_00529980();
    }
    bVar5 = iVar3 == 0;
    local_24 = 1;
  }
  if ((param_3 & 4) != 0) {
    iVar3 = (**(code **)(*piVar2 + 0x50))
                      (piVar2,(float)*(double *)(param_2 + 0x24),(float)*(double *)(param_2 + 0x2c),
                       (float)*(double *)(param_2 + 0x34),1);
    if (iVar3 != 0) {
      uVar4 = FUN_00529a90();
      FUN_00563c90(auStack_994,"DirectSux: Unable to %s.  (%s)",
                   "Set hardware sfx 3d buffer velocity",uVar4);
      bVar5 = false;
      FUN_00529980();
    }
    local_24 = 1;
  }
  if ((param_3 & 8) != 0) {
    dVar1 = (double)(*(float *)(param_2 + 0x44) * local_cb8);
    if (0.0 < dVar1) {
      if (dVar1 < 1.0) {
        dStack_34 = (double)FUN_005648c0(dVar1 * 0.6931471805599453 * _DAT_0059467f);
        fVar6 = (float10)dStack_34;
        FUN_00563a30();
        iStack_1c = (int)ROUND(fVar6);
        if (iStack_1c < 1) {
          if (iStack_1c < -10000) goto LAB_0052b3c8;
        }
        else {
          iStack_1c = 0;
        }
      }
      else {
        iStack_1c = 0;
      }
    }
    else {
LAB_0052b3c8:
      iStack_1c = -10000;
    }
    iVar3 = (**(code **)(*local_20 + 0x3c))(local_20,iStack_1c);
    if (iVar3 != 0) {
      uVar4 = FUN_00529a90();
      FUN_00563c90(auStack_4e4,"DirectSux: Unable to %s.  (%s)",
                   "Set hardware sfx secondary buffer volume",uVar4);
      bVar5 = false;
      FUN_00529980();
    }
  }
  if ((param_3 & 0x10) != 0) {
    fVar6 = (float10)*(int *)(*(int *)(param_2 + 0x74) + 0x10c) *
            (float10)*(float *)(param_2 + 0x48);
    FUN_00563a30();
    dStack_34 = (double)(longlong)ROUND(fVar6);
    iVar3 = (**(code **)(*local_20 + 0x44))(local_20,SUB84(dStack_34,0));
    if (iVar3 != 0) {
      uVar4 = FUN_00529a90();
      FUN_00563c90(auStack_b24,"DirectSux: Unable to %s.  (%s)",
                   "Set hardware sfx secondary buffer frequency",uVar4);
      bVar5 = false;
      FUN_00529980();
    }
  }
  if ((param_3 & 0x40) != 0) {
    uVar4 = 0;
    if ((*(byte *)(param_2 + 0x5c) & 1) != 0) {
      uVar4 = 2;
    }
    iVar3 = (**(code **)(*piVar2 + 0x48))(piVar2,uVar4,1);
    if (iVar3 != 0) {
      uVar4 = FUN_00529a90();
      FUN_00563c90(auStack_674,"DirectSux: Unable to %s.  (%s)",
                   "Set hardware sfx 3d buffer mode",uVar4);
      bVar5 = false;
      FUN_00529980();
    }
    local_24 = 1;
  }
  if ((param_3 & 0x80) == 0) {
    if (local_24 != 0) goto LAB_0052b4a2;
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x44))(piVar2,local_2c,1);
    if (iVar3 != 0) {
      uVar4 = FUN_00529a90(iVar3);
      FUN_00563c90(auStack_360,"DirectSux: Unable to %s.  (%s)",
                   "Set hardware sfx 3d buffer minimum distance",uVar4);
      bVar5 = false;
      FUN_00529980(auStack_360);
    }
    iVar3 = (**(code **)(*piVar2 + 0x40))(piVar2,dStack_34._0_4_,1);
    if (iVar3 != 0) {
      uVar4 = FUN_00529a90();
      FUN_00563c90(auStack_cb4,"DirectSux: Unable to %s.  (%s)",
                   "Set hardware sfx 3d buffer maximum distance",uVar4);
      bVar5 = false;
      FUN_00529980();
    }
LAB_0052b4a2:
    if (_DAT_02dc9220 == (int *)0x0) {
      _DAT_01cc4800 = "..\\sound\\snddx.cpp";
      _DAT_01cc4804 = 0x37c;
      FUN_004c8440();
    }
    iVar3 = (**(code **)(*_DAT_02dc9220 + 0x44))();
    if (iVar3 != 0) {
      uVar4 = FUN_00529a90();
      FUN_00563c90(auStack_1c4,"DirectSux: Unable to %s.  (%s)",
                   "Commit hardware sfx 3d buffer settings",uVar4);
      FUN_00529980();
      goto LAB_0052b4e4;
    }
  }
  if (bVar5 != false) {
    return bVar5;
  }
LAB_0052b4e4:
  FUN_00529980();
  return false;
}
