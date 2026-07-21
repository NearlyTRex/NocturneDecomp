// Name: FUN_00422050
// Address: 00422050
// Address Range: [[00422050, 00422368]]
// Convention: unknown
// Signature: void FUN_00422050(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422050(int param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  byte auStack_a8 [40];
  uint uStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  byte auStack_50 [12];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  float fStack_30;
  byte auStack_2c [12];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float *pfStack_14;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
  if ((*(int *)(param_1 + 0x19704) != 0) && (iVar2 = *(int *)(param_1 + 0xbca4), iVar2 != 0)) {
    fStack_74 = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
    fStack_70 = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
    fStack_6c = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
    if ((ABS(fStack_70) < (float)_DAT_00579d1d) &&
       ((ABS(fStack_74) < (float)_DAT_00579d1d && (ABS(fStack_6c) < (float)_DAT_00579d1d)))) {
      FUN_00421b80(param_1);
      FUN_00423790(param_1,*(uint *)(param_1 + 0xbca4));
      if (*(int *)(param_1 + 0xbd24) == 1) {
        core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00422370(param_1,param_2);
        return;
      }
      goto LAB_00422116;
    }
  }
  if ((*(int *)(param_1 + 0x19700) != 0) && (iVar2 = *(int *)(param_1 + 0xbca4), iVar2 != 0)) {
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0xbc))(iVar2);
    if (iVar2 == 0) {
      iVar2 = core_path_cpp_getPathMap_FUN_004f1e00(*(int *)(param_1 + 0xbca4) + 0x20);
    }
    pfVar1 = (float *)(param_1 + 0x20);
    iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                      (iVar2,pfVar1,auStack_50,*(uint *)(param_1 + 0x6c));
    if (iVar2 != 0) {
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(auStack_a8,auStack_50);
      fStack_78 = _DAT_0059aeb4 * param_2;
      uStack_80 = 0;
      uStack_7c = 0;
      pfStack_14 = (float *)fStack_78;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(auStack_a8,auStack_2c,&uStack_80);
      fStack_68 = *pfVar1;
      uStack_64 = *(uint *)(param_1 + 0x24);
      pfStack_14 = (float *)(param_1 + 0x28);
      fStack_60 = *pfStack_14;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,auStack_2c);
      fStack_38 = *pfVar1;
      uStack_34 = *(uint *)(param_1 + 0x24);
      fStack_30 = *pfStack_14;
      *pfVar1 = fStack_68;
      *(uint *)(param_1 + 0x24) = uStack_64;
      *(float *)(param_1 + 0x28) = fStack_60;
      fStack_44 = fStack_38 - *pfVar1;
      fStack_3c = fStack_30 - *(float *)(param_1 + 0x28);
      fStack_20 = *(float *)(param_1 + 0x19834) + *(float *)(param_1 + 0x19840);
      fStack_1c = *(float *)(param_1 + 0x19838) + *(float *)(param_1 + 0x19844);
      fStack_5c = fStack_20 * _DAT_00579d25;
      fStack_18 = *(float *)(param_1 + 0x1983c) + *(float *)(param_1 + 0x19848);
      fStack_58 = fStack_1c * _DAT_00579d25;
      fStack_54 = fStack_18 * _DAT_00579d25;
      fStack_40 = fStack_58;
      if ((((*(float *)(param_1 + 0x19834) <= fStack_44) &&
           (*(float *)(param_1 + 0x19838) <= fStack_58)) &&
          (*(float *)(param_1 + 0x1983c) <= fStack_3c)) &&
         (((fStack_44 <= *(float *)(param_1 + 0x19840) &&
           (fStack_58 <= *(float *)(param_1 + 0x19844))) &&
          (fStack_3c <= *(float *)(param_1 + 0x19848))))) {
        core_bugs_cpp_CBugs_applySwarmTranslation_FUN_00423a50(param_1,&fStack_38);
      }
    }
  }
  FUN_00421b80(param_1);
LAB_00422116:
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xbd28)) {
    iVar3 = param_1 + 0xbd2c;
    do {
      iVar2 = iVar2 + 1;
      core_bugs_cpp_CBugs_updateBugPathfinding_FUN_004227b0(param_1,iVar3,param_2,0);
      iVar3 = iVar3 + 0x40;
    } while (iVar2 < *(int *)(param_1 + 0xbd28));
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00423680(param_1);
  return;
}
