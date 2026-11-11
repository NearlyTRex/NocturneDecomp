// Name: core_gore.cpp_CFootstep_init_FUN_004ce170
// Address: 004ce170
// Address Range: [[004ce170, 004ce300]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CFootstep_init_FUN_004ce170(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CFootstep_init_FUN_004ce170(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,EBloodType blood_type)

{
  CFootstep *pCVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  float10 fVar5;
  float10 fVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_18;
  
  iVar3 = 0;
  pCVar1 = this_ptr;
  do {
    pCVar4 = pCVar1->corners;
    fVar5 = (float10)fsin((float10)(orientation->vec).y);
    fVar6 = (float10)fcos((float10)(orientation->vec).y);
    fVar5 = fVar5 * (float10)_DAT_005c4739;
    fVar6 = fVar6 * (float10)_DAT_005c4739;
    local_34 = (float)(fVar5 * (float10)*(float *)((int)&DAT_005ffe9c + iVar3) +
                       -fVar6 * (float10)*(float *)((int)&DAT_005ffe8c + iVar3) +
                      (float10)position->x);
    local_2c = (float)(fVar6 * (float10)*(float *)((int)&DAT_005ffe9c + iVar3) +
                      fVar5 * (float10)*(float *)((int)&DAT_005ffe8c + iVar3)) + position->z;
    if (&local_40 != &local_34) {
      local_40 = local_34;
      local_3c = position->y;
      local_38 = local_2c;
    }
    local_30 = position->y + 1.0;
    local_3c = local_3c + _DAT_005c4749;
    local_18 = (float)core_dtrace_cpp_FUN_00473cd0
                                (&g_CDemonRaytraceInstance,&local_34,&local_40,0,0);
    fVar2 = (local_30 - local_18 * (float)_DAT_005c4741) + _DAT_005c474d;
    if (pCVar4 != (CVector3f *)&local_34) {
      pCVar4->x = local_34;
      pCVar1->corners[0].y = fVar2;
      pCVar1->corners[0].z = local_2c;
    }
    iVar3 = iVar3 + 4;
    pCVar1 = (CFootstep *)pCVar4;
  } while (iVar3 != 0x10);
  pCVar4 = this_ptr->corners;
  do {
    if ((float)_DAT_005c4739 < ABS(this_ptr->corners[0].y - pCVar4[1].y)) {
      pCVar4[1].y = this_ptr->corners[0].y;
    }
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != this_ptr->corners + 3);
  this_ptr->expired = 0;
  this_ptr->alpha = alpha;
  this_ptr->is_bloody = is_bloody;
  this_ptr->blood_type = blood_type;
  this_ptr->area_id = *(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c);
  return;
}
