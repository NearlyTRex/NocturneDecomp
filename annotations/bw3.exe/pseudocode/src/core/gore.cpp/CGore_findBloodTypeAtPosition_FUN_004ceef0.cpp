// Name: core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004ceef0
// Address: 004ceef0
// Address Range: [[004ceef0, 004cf00d]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004ceef0(CGore *this_ptr,CVector3f *position,int *out_blood_type)

#include "nocturne.h"

int __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004ceef0(CGore *this_ptr,CVector3f *position,int *out_blood_type)

{
  CBloodPool *pCVar1;
  CBloodSplat *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_BloodPoolCount) {
    pCVar1 = g_CBloodPool_ARRAY_01d4a944;
    do {
      if (((((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.area_id ==
             pCVar1->area_id) &&
           (ABS(position->y - (pCVar1->position).y) <= (float)0.5)) &&
          (ABS(position->x - (pCVar1->position).x) <= (float)1.333)) &&
         (ABS(position->z - (pCVar1->position).z) <= (float)1.333)) {
        *out_blood_type = pCVar1->blood_type;
        return 1;
      }
      iVar3 = iVar3 + 1;
      pCVar1 = pCVar1 + 1;
    } while (iVar3 < g_BloodPoolCount);
  }
  iVar3 = 0;
  if (0 < g_BloodSplatCount) {
    pCVar2 = g_CBloodSplat_ARRAY_01d276bc;
    do {
      if (((pCVar2->is_wall_splat == 0) &&
          (pCVar2->area_id ==
           (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.area_id)) &&
         ((ABS(position->y - (pCVar2->position).y) <= (float)0.5 &&
          ((ABS(position->x - (pCVar2->position).x) <= (float)0.5 &&
           (ABS(position->z - (pCVar2->position).z) <= (float)0.5)))))) {
        *out_blood_type = pCVar2->blood_type;
        return 1;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 < g_BloodSplatCount);
  }
  return 0;
}
