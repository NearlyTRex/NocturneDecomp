// Name: core_turret.cpp_FUN_0057fa00
// Address: 0057fa00
// Address Range: [[0057fa00, 0057fbb9]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_FUN_0057fa00(CTurret *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_turret_cpp_FUN_0057fa00(CTurret *this_ptr,float delta_time)

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
  if (*(float *)&this_ptr->field_0x9c8 <= 0.0) {
    if (*(int *)&this_ptr->field_0x8dc != 0) {
      target_pos = &this_ptr->field_0x9a8;
      iVar1 = core_turret_cpp_FUN_0057f700
                        (this_ptr,(CVector3f *)target_pos,delta_time * (float)_DAT_005ed81c);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(*(int *)&this_ptr->field_0x8dc + 0x2b0) + 0x24))
                  (*(int *)&this_ptr->field_0x8dc);
        puVar2 = (uint *)&stack0xffffff98;
        puVar4 = &stack0xffffff80;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        iStack_18 = 0;
        pfVar3 = (float *)((int)this_ptr + (uint)bVar5 * -8 + 0x9ac);
        fStack_38 = *(float *)&this_ptr->field_0x9a8;
        pfStack_1c = (float *)target_pos;
        afStack_34[(uint)bVar5 * -2] = *pfVar3;
        afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = pfVar3[(uint)bVar5 * -2 + 1];
        while( true ) {
          afStack_34[2] = (float)core_actor_cpp_FUN_0040cf60(0x3dcccccd,0x3f666666);
          *(float *)&this_ptr->field_0x9a8 =
               local_80 * afStack_34[2] + (1.0 - afStack_34[2]) * fStack_74;
          fStack_14 = afStack_34[2];
          afStack_34[2] = (float)core_actor_cpp_FUN_0040cf60(0x3dcccccd,0x3f666666);
          *(uint *)&this_ptr->field_0x9ac = uStack_7c;
          *(float *)&this_ptr->field_0x9b0 =
               fStack_78 * afStack_34[2] + (1.0 - afStack_34[2]) * fStack_6c;
          fStack_14 = afStack_34[2];
          core_actor_cpp_FUN_00408d70(*(uint *)&this_ptr->field_0x8dc,target_pos);
          CStack_50._0_4_ = CStack_44._0_4_;
          *(uint *)((int)&CStack_50 + (uint)bVar5 * -8 + 4) =
               *(uint *)((int)&CStack_44 + (uint)bVar5 * -8 + 4);
          *(uint *)((int)&CStack_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               *(uint *)((int)&CStack_44 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          if ((CVector3f *)target_pos != &CStack_50) {
            *(uint *)target_pos = CStack_50._0_4_;
            *(uint *)&this_ptr->field_0x9ac = CStack_50._4_4_;
            *(uint *)&this_ptr->field_0x9b0 = CStack_50._8_4_;
          }
          if (_DAT_005ed824 <
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
  else if (*(float *)&this_ptr->field_0x45c <= 0.0) {
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xec))(this_ptr);
  }
  return;
}
