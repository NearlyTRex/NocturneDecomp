// Name: core_enemy.cpp_FUN_00488110
// Address: 00488110
// Address Range: [[00488110, 004881a9]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_FUN_00488110(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_enemy_cpp_FUN_00488110(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)

{
  uint *puVar1;
  byte bVar2;
  float10 fVar3;
  uint auStackY_1008 [1011];
  CVector3f *direction;
  int iVar4;
  EBloodType blood_type;
  CVector3f CStack_20;
  int iStack_14;
  
  bVar2 = 0;
  iVar4 = *(int *)&this_ptr->field_0x10a78;
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x108))(iVar4,point,radius,damage_info);
    if (0.0 < *(float *)(damage_info + 4)) {
      fVar3 = (float10)*(float *)(damage_info + 4) * (float10)_DAT_005d2da9 * (float10)_DAT_005d2db1
      ;
      blood_type = BLOOD_TYPE_RED;
      round();
      iVar4 = (int)ROUND(fVar3);
      direction = (CVector3f *)0x0;
      puVar1 = (uint *)((int)point + (uint)bVar2 * -8 + 4);
      CStack_20._0_4_ = *(uint *)point;
      iStack_14 = iVar4;
      *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + 4) = *puVar1;
      *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           puVar1[(uint)bVar2 * -2 + 1];
      core_gore_cpp_FUN_004c9850(g_CGorePtr,&CStack_20,direction,iVar4,blood_type);
      return 1;
    }
  }
  return 0;
}
