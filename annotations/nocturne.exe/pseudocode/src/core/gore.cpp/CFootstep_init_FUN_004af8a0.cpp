// Name: core_gore.cpp_CFootstep_init_FUN_004af8a0
// Address: 004af8a0
// Address Range: [[004af8a0, 004afa16]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CFootstep_init_FUN_004af8a0(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CFootstep_init_FUN_004af8a0(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,int blood_type)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
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
  
  iVar2 = 0;
  pCVar4 = this_ptr->corners;
  do {
    fVar5 = (float10)fsin((float10)(orientation->vec).y);
    fVar6 = (float10)fcos((float10)(orientation->vec).y);
    fVar5 = fVar5 * (float10)0.5;
    fVar6 = fVar6 * (float10)0.5;
    local_40 = (float)(fVar5 * (float10)*(float *)((int)&FLOAT_005ba83c + iVar2) +
                       -fVar6 * (float10)*(float *)((int)&FLOAT_005ba82c + iVar2) +
                      (float10)position->x);
    local_38 = (float)(fVar6 * (float10)*(float *)((int)&FLOAT_005ba83c + iVar2) +
                      fVar5 * (float10)*(float *)((int)&FLOAT_005ba82c + iVar2)) + position->z;
    if (&local_34 != &local_40) {
      local_34 = local_40;
      local_30 = position->y;
      local_2c = local_38;
    }
    local_3c = position->y + 1.0;
    local_30 = local_30 + -3.0f;
    local_18 = (float)core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
                                (&DAT_01fba938,&local_40,&local_34,0,0);
    fVar1 = (local_3c - local_18 * (float)4) + 0.08333334f;
    if (pCVar4 != (CVector3f *)&local_40) {
      pCVar4->x = local_40;
      pCVar4->y = fVar1;
      pCVar4->z = local_38;
    }
    iVar2 = iVar2 + 4;
    pCVar4 = pCVar4 + 1;
  } while (iVar2 != 0x10);
  pfVar3 = &this_ptr->corners[0].y;
  do {
    if ((float)0.5 < ABS(this_ptr->corners[0].y - pfVar3[3])) {
      pfVar3[3] = this_ptr->corners[0].y;
    }
    pfVar3 = pfVar3 + 3;
  } while (pfVar3 != &this_ptr->corners[3].y);
  this_ptr->expired = 0;
  this_ptr->alpha = alpha;
  this_ptr->is_bloody = is_bloody;
  this_ptr->blood_type = blood_type;
  return;
}
