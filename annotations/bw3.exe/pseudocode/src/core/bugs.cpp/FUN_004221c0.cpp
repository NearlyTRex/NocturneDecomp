// Name: core_bugs.cpp_FUN_004221c0
// Address: 004221c0
// Address Range: [[004221c0, 0042256b]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_004221c0(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_FUN_004221c0(CBugs *this_ptr,float delta_time)

{
  float fVar1;
  CPathMap *this_ptr_00;
  byte *puVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  byte bVar6;
  float afStackY_10a8 [1004];
  CBugs *this_ptr_01;
  CVector3f *velocity;
  CMatrix3x3f aCStack_e8 [40];
  float fStack_c0;
  float afStack_bc [2];
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [4];
  float fStack_94;
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [4];
  float fStack_70;
  float afStack_6c [3];
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  CVector3f CStack_3c;
  float fStack_30;
  float afStack_2c [4];
  float fStack_1c;
  float *pfStack_18;
  float fStack_14;
  
  bVar6 = 0;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
  if ((*(int *)&this_ptr->field_0x1bd30 != 0) &&
     (iVar5 = *(int *)&this_ptr->field_0xcde4, iVar5 != 0)) {
    afStack_80[2] = *(float *)&this_ptr->field_0x20 - *(float *)(iVar5 + 0x20);
    afStack_80[3] = *(float *)&this_ptr->field_0x24 - *(float *)(iVar5 + 0x24);
    fStack_70 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar5 + 0x28);
    afStack_a4[2] = afStack_80[2];
    afStack_a4[(uint)bVar6 * -2 + 3] = afStack_80[(uint)bVar6 * -2 + 3];
    afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    if ((ABS(afStack_a4[3]) < (float)_DAT_005b7851) &&
       ((ABS(afStack_a4[2]) < (float)_DAT_005b7851 && (ABS(fStack_94) < (float)_DAT_005b7851)))) {
      core_bugs_cpp_FUN_00421c90(this_ptr);
      core_bugs_cpp_FUN_00423cd0(this_ptr,*(CDemonActor **)&this_ptr->field_0xcde4);
      if (*(int *)&this_ptr->field_0xd054 == 1) {
        core_bugs_cpp_FUN_00422570(this_ptr,delta_time);
        *(uint *)&this_ptr->field_0x1be94 = 1;
        *(uint *)&this_ptr->field_0x1be98 = 0x41200000;
        return;
      }
      goto LAB_0042229f;
    }
  }
  if ((*(int *)&this_ptr->field_0x1bd2c != 0) &&
     (iVar5 = *(int *)&this_ptr->field_0xcde4, iVar5 != 0)) {
    this_ptr_00 = (CPathMap *)(**(code **)(*(int *)(iVar5 + 0x154) + 0xc4))(iVar5);
    if (this_ptr_00 == (CPathMap *)0x0) {
      this_ptr_00 = core_path_cpp_getPathMap_FUN_0050ced0
                              ((CLocation *)(*(int *)&this_ptr->field_0xcde4 + 0x20));
    }
    pfStack_18 = (float *)&this_ptr->field_0x20;
    iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_0050c680
                      (this_ptr_00,(CVector3f *)pfStack_18,&CStack_90,*(int *)&this_ptr->field_0x6c)
    ;
    if (iVar5 != 0) {
      core_dirmat_cpp_FUN_0045b550(aCStack_e8,&CStack_90);
      afStack_6c[2] = _DAT_005dcbd4 * delta_time;
      afStack_6c[0] = 0.0;
      afStack_6c[1] = 0.0;
      fStack_14 = afStack_6c[2];
      core_dirmat_cpp_FUN_0045b800(aCStack_e8,afStack_80 + 5);
      velocity = &CStack_3c;
      CStack_3c._0_4_ = CStack_b4._0_4_;
      *(uint *)((int)&CStack_3c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_b4 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_3c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_b4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      pfVar3 = (float *)((int)this_ptr + (uint)bVar6 * -8 + 0x24);
      afStack_5c[2] = *(float *)&this_ptr->field_0x20;
      afStack_5c[(uint)bVar6 * -2 + 3] = *pfVar3;
      this_ptr_01 = this_ptr;
      afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] = pfVar3[(uint)bVar6 * -2 + 1];
      core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr_01,velocity);
      pfVar3 = pfStack_18;
      fVar1 = afStack_5c[2];
      pfVar4 = (float *)((int)this_ptr + (uint)bVar6 * -8 + 0x24);
      fStack_48 = *(float *)&this_ptr->field_0x20;
      afStack_5c[(uint)bVar6 * -2 + 6] = *pfVar4;
      afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] = pfVar4[(uint)bVar6 * -2 + 1];
      *pfVar3 = fVar1;
      pfVar3[1] = afStack_5c[3];
      pfVar3[2] = fStack_4c;
      fStack_c0 = fStack_48 - *pfVar3;
      afStack_bc[0] = fStack_44 - pfVar3[1];
      afStack_bc[1] = fStack_40 - pfVar3[2];
      fStack_30 = fStack_48 - *pfVar3;
      afStack_2c[(uint)bVar6 * -2] = afStack_bc[(uint)bVar6 * -2];
      afStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      fStack_84 = *(float *)&this_ptr->field_0x1be68 + *(float *)&this_ptr->field_0x1be74;
      afStack_80[0] = *(float *)&this_ptr->field_0x1be6c + *(float *)&this_ptr->field_0x1be78;
      afStack_80[1] = *(float *)&this_ptr->field_0x1be70 + *(float *)&this_ptr->field_0x1be7c;
      fStack_60 = fStack_84;
      afStack_5c[(uint)bVar6 * -2] = afStack_80[(uint)bVar6 * -2];
      afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      afStack_2c[2] = fStack_60 * _DAT_005b7859;
      afStack_2c[3] = afStack_5c[0] * _DAT_005b7859;
      fStack_1c = afStack_5c[1] * _DAT_005b7859;
      fStack_a8 = fStack_60 * _DAT_005b7859;
      afStack_a4[(uint)bVar6 * -2] = afStack_2c[(uint)bVar6 * -2 + 3];
      afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      afStack_2c[0] = afStack_a4[0];
      if ((((*(float *)&this_ptr->field_0x1be68 <= fStack_30) &&
           (*(float *)&this_ptr->field_0x1be6c <= afStack_a4[0])) &&
          (*(float *)&this_ptr->field_0x1be70 <= afStack_2c[1])) &&
         (((fStack_30 <= *(float *)&this_ptr->field_0x1be74 &&
           (afStack_a4[0] <= *(float *)&this_ptr->field_0x1be78)) &&
          (afStack_2c[1] <= *(float *)&this_ptr->field_0x1be7c)))) {
        core_bugs_cpp_FUN_00423fb0(this_ptr,afStack_5c + 5);
      }
    }
  }
  core_bugs_cpp_FUN_00421c90(this_ptr);
LAB_0042229f:
  iVar5 = 0;
  if (0 < *(int *)&this_ptr->field_0xd058) {
    puVar2 = &this_ptr->field_0xd05c;
    do {
      iVar5 = iVar5 + 1;
      core_bugs_cpp_FUN_00422a00(this_ptr,puVar2,delta_time,0);
      puVar2 = puVar2 + 0x40;
    } while (iVar5 < *(int *)&this_ptr->field_0xd058);
  }
  core_bugs_cpp_FUN_00423bc0(this_ptr);
  return;
}
