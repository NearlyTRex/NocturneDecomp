// Name: core_gore.cpp_CFootstep_init_FUN_004ed240
// Address: 004ed240
// Address Range: [[004ed240, 004ed3b6]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CFootstep_init_FUN_004ed240(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CFootstep_init_FUN_004ed240(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,int blood_type)

{
  float fVar2;
  int iVar2;
  float *pfVar3;
  CVector3f *pCVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar3;
  float10 fVar4;
  CVector3f local_40;
  CVector3f local_34 [2];
  float local_18;
  float fVar1;
  
  iVar2 = 0;
  pCVar4 = this_ptr->corners;
  do {
    fVar5 = (float10)fsin((float10)(orientation->vec).y);
    fVar6 = (float10)fcos((float10)(orientation->vec).y);
    fVar3 = fVar5 * (float10)0.5;
    fVar4 = fVar6 * (float10)0.5;
    local_40.x = (float)(fVar3 * (float10)*(float *)((int)g_FootstepCornerMultipliers[1] + iVar2) +
                         -fVar4 * (float10)*(float *)((int)g_FootstepCornerMultipliers[0] + iVar2) +
                        (float10)position->x);
    local_40.z = (float)(fVar4 * (float10)*(float *)((int)g_FootstepCornerMultipliers[1] + iVar2) +
                        fVar3 * (float10)*(float *)((int)g_FootstepCornerMultipliers[0] + iVar2)) +
                 position->z;
    if (local_34 != &local_40) {
      local_34[0].x = local_40.x;
      local_34[0].y = position->y;
      local_34[0].z = local_40.z;
    }
    local_40.y = position->y + 1.0;
    local_34[0].y = local_34[0].y + -3.0f;
    fVar2 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                      (&g_CDemonRaytraceInstance,&local_40,local_34,(CVector3f *)0x0,(int *)0x0);
    fVar1 = (local_40.y - fVar2 * (float)4) + 0.08333334f;
    if (pCVar4 != &local_40) {
      pCVar4->x = local_40.x;
      pCVar4->y = fVar1;
      pCVar4->z = local_40.z;
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
