// Name: core_turret.cpp_CTurret_updatePatrol_FUN_005a3650
// Address: 005a3650
// Address Range: [[005a3650, 005a3809]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_005a3650(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_005a3650(CTurret *this_ptr,float delta_time)

{
  byte *target_pos;
  int iVar1;
  uint *puVar2;
  float *pfVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1038 [1003];
  float local_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_6c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [6];
  float *pfStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  if (*(float *)&this_ptr->field_0x86c <= 0.0) {
    if (*(int *)&this_ptr->field_0x780 != 0) {
      target_pos = &this_ptr->field_0x84c;
      iVar1 = core_turret_cpp_FUN_005a3350
                        (this_ptr,(CVector3f *)target_pos,delta_time * (float)_DAT_005f8b78);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(*(int *)&this_ptr->field_0x780 + 0x154) + 0x1c))
                  (*(int *)&this_ptr->field_0x780);
        puVar2 = (uint *)&stack0xffffff98;
        puVar4 = &stack0xffffff80;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        iStack_18 = 0;
        pfVar3 = (float *)((int)this_ptr + (uint)bVar5 * -8 + 0x850);
        fStack_38 = *(float *)&this_ptr->field_0x84c;
        pfStack_1c = (float *)target_pos;
        afStack_34[(uint)bVar5 * -2] = *pfVar3;
        afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = pfVar3[(uint)bVar5 * -2 + 1];
        while( true ) {
          afStack_34[2] = (float)core_actor_cpp_FUN_0040cc00(0x3dcccccd,0x3f666666);
          *(float *)&this_ptr->field_0x84c =
               local_80 * afStack_34[2] + (1.0 - afStack_34[2]) * fStack_74;
          fStack_14 = afStack_34[2];
          afStack_34[2] = (float)core_actor_cpp_FUN_0040cc00(0x3dcccccd,0x3f666666);
          *(uint *)&this_ptr->field_0x850 = uStack_7c;
          *(float *)&this_ptr->field_0x854 =
               fStack_78 * afStack_34[2] + (1.0 - afStack_34[2]) * fStack_6c;
          fStack_14 = afStack_34[2];
          core_actor_cpp_FUN_00408b40(*(uint *)&this_ptr->field_0x780,target_pos);
          CStack_50._0_4_ = CStack_44._0_4_;
          *(uint *)((int)&CStack_50 + (uint)bVar5 * -8 + 4) =
               *(uint *)((int)&CStack_44 + (uint)bVar5 * -8 + 4);
          *(uint *)((int)&CStack_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               *(uint *)((int)&CStack_44 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          if ((CVector3f *)target_pos != &CStack_50) {
            *(uint *)target_pos = CStack_50._0_4_;
            *(uint *)&this_ptr->field_0x850 = CStack_50._4_4_;
            *(uint *)&this_ptr->field_0x854 = CStack_50._8_4_;
          }
          if (_DAT_005f8b80 <
              (pfStack_1c[2] - afStack_34[1]) * (pfStack_1c[2] - afStack_34[1]) +
              (pfStack_1c[1] - afStack_34[0]) * (pfStack_1c[1] - afStack_34[0]) +
              (*pfStack_1c - fStack_38) * (*pfStack_1c - fStack_38)) break;
          iStack_18 = iStack_18 + 1;
          if (4 < iStack_18) {
            return;
          }
        }
      }
    }
  }
  else if (*(float *)&this_ptr->field_0x300 <= 0.0) {
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0xe4))(this_ptr);
  }
  return;
}
