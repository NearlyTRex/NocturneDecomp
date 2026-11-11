// Name: core_fire.cpp_CRing_activate_FUN_0049fce0
// Address: 0049fce0
// Address Range: [[0049fce0, 0049fde9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRing_activate_FUN_0049fce0(CRing *this_ptr,undefined4 *param_2,int param_3,CCharacter *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CRing_activate_FUN_0049fce0(CRing *this_ptr,uint *param_2,int param_3,CCharacter *param_4)

{
  float fVar1;
  CRing *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (&this_ptr->center != (CVector3f *)param_2) {
    (this_ptr->center).x = (float)*param_2;
    (this_ptr->center).y = (float)param_2[1];
    (this_ptr->center).z = (float)param_2[2];
  }
  fVar1 = (float)core_setcolid_cpp_FUN_0053bc80(g_CDemonSetPtr,&this_ptr->center,0);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  if ((this_ptr->center).y - fVar1 < 1.0) {
    (this_ptr->center).y = fVar1 + 1.0;
  }
  this_ptr->ring_type = param_3;
  this_ptr->owner = param_4;
  pCVar3 = this_ptr->points;
  iVar4 = 0;
  pCVar2 = this_ptr;
  do {
    if (pCVar3 != &this_ptr->center) {
      pCVar3->x = (this_ptr->center).x;
      pCVar3->y = (this_ptr->center).y;
      pCVar3->z = (this_ptr->center).z;
    }
    fVar5 = (float10)fcos((float10)iVar4 * (float10)_DAT_005c0900);
    fVar6 = (float10)fsin((float10)iVar4 * (float10)_DAT_005c0900);
    pCVar3 = pCVar3 + 1;
    pCVar2->directions[0].y = 0.0;
    iVar4 = iVar4 + 1;
    pCVar2->directions[0].x = (float)fVar5;
    pCVar2->directions[0].z = (float)fVar6;
    pCVar2 = (CRing *)&(pCVar2->center).z;
  } while (iVar4 < 0x10);
  this_ptr->segment_timer = 0.05;
  this_ptr->radius = 0.0;
  this_ptr->hit_count = 0;
  this_ptr->lifetime = 2.0;
  return;
}
