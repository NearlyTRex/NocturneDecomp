// Name: core_gore.cpp_CFootstep_init_FUN_004ce170
// Address: 004ce170
// Address Range: [[004ce170, 004ce300]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CFootstep_init_FUN_004ce170(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CFootstep_init_FUN_004ce170(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,EBloodType blood_type)

{
  CFootstep *pCVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  float10 fVar5;
  float10 fVar6;
  CVector3f local_40;
  CVector3f local_34 [2];
  float local_18;
  
  iVar3 = 0;
  pCVar1 = this_ptr;
  do {
    pCVar4 = pCVar1->corners;
    fVar5 = (float10)fsin((float10)(orientation->vec).y);
    fVar6 = (float10)fcos((float10)(orientation->vec).y);
    fVar5 = fVar5 * (float10)0.5;
    fVar6 = fVar6 * (float10)0.5;
    local_34[0].x =
         (float)(fVar5 * (float10)*(float *)((int)&DAT_005ffe9c + iVar3) +
                 -fVar6 * (float10)*(float *)((int)g_FLOAT_ARRAY_005ffe8c + iVar3) +
                (float10)position->x);
    local_34[0].z =
         (float)(fVar6 * (float10)*(float *)((int)&DAT_005ffe9c + iVar3) +
                fVar5 * (float10)*(float *)((int)g_FLOAT_ARRAY_005ffe8c + iVar3)) + position->z;
    if (&local_40 != local_34) {
      local_40.x = local_34[0].x;
      local_40.y = position->y;
      local_40.z = local_34[0].z;
    }
    local_34[0].y = position->y + 1.0;
    local_40.y = local_40.y + -3.0f;
    local_18 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00473cd0
                         (&g_CDemonRaytraceInstance,local_34,&local_40,(CVector3f *)0x0,(int *)0x0);
    fVar2 = (local_34[0].y - local_18 * (float)4) + 0.08333334f;
    if (pCVar4 != local_34) {
      pCVar4->x = local_34[0].x;
      pCVar1->corners[0].y = fVar2;
      pCVar1->corners[0].z = local_34[0].z;
    }
    iVar3 = iVar3 + 4;
    pCVar1 = (CFootstep *)pCVar4;
  } while (iVar3 != 0x10);
  pCVar4 = this_ptr->corners;
  do {
    if ((float)0.5 < ABS(this_ptr->corners[0].y - pCVar4[1].y)) {
      pCVar4[1].y = this_ptr->corners[0].y;
    }
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != this_ptr->corners + 3);
  this_ptr->expired = 0;
  this_ptr->alpha = alpha;
  this_ptr->is_bloody = is_bloody;
  this_ptr->blood_type = blood_type;
  this_ptr->area_id = (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.area_id;
  return;
}
