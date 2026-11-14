// Name: core_fire.cpp_CFireEffect_createBulletTrail_FUN_004a27e0
// Address: 004a27e0
// Address Range: [[004a27e0, 004a282f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004a27e0(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createBulletTrail_FUN_004a27e0(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

{
  int iVar1;
  
  iVar1 = _DAT_01cefd10 * 0x24;
  _DAT_01cefd10 = _DAT_01cefd10 + 1;
  if (9 < _DAT_01cefd10) {
    _DAT_01cefd10 = 0;
  }
  core_fire_cpp_CBulletTrail_init_FUN_0049aca0
            ((CBulletTrail *)(iVar1 + 0x1cefd14),start_position,end_position,model_ptr,
             segment_length);
  return;
}
