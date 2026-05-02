// Name: core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0
// Address: 0056d4a0
// MANUAL RECONSTRUCTION
// Address Range: [[0056d4a0, 0056db79]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

{
  float fVar1;
  float fVar5;
  int iVar5;
  int iVar6;
  int iVar7;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  int iVar10;
  int iVar11;
  float local_b8;
  float local_b4;
  float local_b0;
  CVector3f local_ac;
  CVector3f local_a0 [2];
  float local_88;
  float local_84;
  float local_80;
  int local_7c;
  int local_78;
  int local_74;
  CVector3f local_64;
  CVector3f local_58 [3];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float fVar2;
  C3DSLight *pCVar1;
  float fVar4;
  float fVar3;

  if (position == (CVector3f *)0x0) {
    g_PrimaryDirectionalLightCount = 0;
    for (iVar5 = 0; iVar5 < g_DynamicLightCount; iVar5 = iVar5 + 1) {
      if (g_DynamicLights[iVar5]->light_enabled_flag != 0) {
        g_PrimaryDirectionalLights[g_PrimaryDirectionalLightCount] = g_DynamicLights[iVar5];
        g_PrimaryDirectionalLightCount = g_PrimaryDirectionalLightCount + 1;
      }
    }
    g_SecondaryDirectionalLightCount = 0;
    for (iVar6 = 0; iVar6 < g_SpotLightCount; iVar6 = iVar6 + 1) {
      if (g_SpotLightList[iVar6]->light_enabled_flag != 0) {
        g_SecondaryDirectionalLights[g_SecondaryDirectionalLightCount] = g_SpotLightList[iVar6];
        g_SecondaryDirectionalLightCount = g_SecondaryDirectionalLightCount + 1;
      }
    }
    g_GlobeLightCount = g_CoronaGlobeCount;
    for (iVar7 = 0; iVar7 < g_CoronaGlobeCount; iVar7 = iVar7 + 1) {
      g_GlobeLights[iVar7] = g_CoronaGlobes[iVar7];
    }
    g_ColorCorrectionCount = g_OmniLightCount;
    for (iVar7 = 0; iVar7 < g_OmniLightCount; iVar7 = iVar7 + 1) {
      g_VisibleOmniLights[iVar7] = g_OmniLights[iVar7];
    }
  }
  else {
    local_24 = 0;
    g_PrimaryDirectionalLightCount = 0;
    for (local_24 = 0; local_24 < g_DynamicLightCount; local_24 = local_24 + 1) {
      if ((g_DynamicLights[local_24]->light_enabled_flag != 0) &&
         (iVar7 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                            (&g_DynamicLights[local_24]->base,position,orientation,
                             aabb_min,aabb_max), iVar7 != 0)) {
        g_PrimaryDirectionalLights[g_PrimaryDirectionalLightCount] = g_DynamicLights[local_24];
        g_PrimaryDirectionalLightCount = g_PrimaryDirectionalLightCount + 1;
      }
    }
    g_SecondaryDirectionalLightCount = 0;
    for (local_20 = 0; local_20 < g_SpotLightCount; local_20 = local_20 + 1) {
      if ((g_SpotLightList[local_20]->light_enabled_flag != 0) &&
         (iVar11 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                             (&g_SpotLightList[local_20]->base,position,orientation,
                              aabb_min,aabb_max), iVar11 != 0)) {
        g_SecondaryDirectionalLights[g_SecondaryDirectionalLightCount] = g_SpotLightList[local_20];
        g_SecondaryDirectionalLightCount = g_SecondaryDirectionalLightCount + 1;
      }
    }
    g_ColorCorrectionCount = 0;
    for (local_1c = 0; local_1c < g_OmniLightCount; local_1c = local_1c + 1) {
      pCVar1 = g_OmniLights[local_1c];
      local_64.x = (pCVar1->pos).x - position->x;
      local_64.y = (pCVar1->pos).y - position->y;
      local_64.z = (pCVar1->pos).z - position->z;
      pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (rotation_matrix,local_a0,&local_64);
      if (&local_64 != pCVar7) {
        local_64.x = pCVar7->x;
        local_64.y = pCVar7->y;
        local_64.z = pCVar7->z;
      }
      if ((((aabb_min->x <= local_64.x + pCVar1->atten_end) &&
           (aabb_min->y <= local_64.y + pCVar1->atten_end)) &&
          (aabb_min->z <= local_64.z + pCVar1->atten_end)) &&
         (((local_64.x - pCVar1->atten_end <= aabb_max->x &&
           (local_64.y - pCVar1->atten_end <= aabb_max->y)) &&
          (local_64.z - pCVar1->atten_end <= aabb_max->z)))) {
        g_VisibleOmniLights[g_ColorCorrectionCount] = pCVar1;
        g_ColorCorrectionCount = g_ColorCorrectionCount + 1;
      }
    }
    g_GlobeLightCount = 0;
    iVar7 = g_CoronaGlobeCount;
    for (local_28 = 0; local_28 < g_CoronaGlobeCount; local_28 = local_28 + 1) {
      iVar7 = core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00471770
                        (g_CoronaGlobes[local_28],position,rotation_matrix,
                         aabb_min,aabb_max);
      if (iVar7 != 0) {
        g_GlobeLights[g_GlobeLightCount] = g_CoronaGlobes[local_28];
        g_GlobeLightCount = g_GlobeLightCount + 1;
      }
    }
    for (local_18 = 0; local_18 < g_VisibleCoronaGlobeCount; local_18 = local_18 + 1) {
      iVar10 = core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00471770
                         (g_VisibleCoronaGlobes[local_18],position,
                          rotation_matrix,aabb_min,aabb_max);
      iVar7 = 0;
      if (iVar10 != 0) {
        g_GlobeLights[g_GlobeLightCount] = g_VisibleCoronaGlobes[local_18];
        g_GlobeLightCount = g_GlobeLightCount + 1;
      }
    }
    if (0 < g_ColorCorrectionCount) {
      local_ac.x = aabb_max->x - aabb_min->x;
      local_ac.y = aabb_max->y - aabb_min->y;
      local_ac.z = aabb_max->z - aabb_min->z;
      pCVar8 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (rotation_matrix,local_58,&local_ac);
      iVar7 = 0;
      local_80 = 0.0;
      local_84 = 0.0;
      local_88 = 0.0;
      local_b0 = 0.0;
      local_b4 = 0.0;
      local_b8 = 0.0;
      for (iVar11 = 0; iVar11 < g_ColorCorrectionCount; iVar11 = iVar11 + 1) {
        pCVar1 = g_VisibleOmniLights[iVar11];
        if (pCVar1->atten_end == 0.0f) {
          local_b8 = *(float *)&pCVar1->color.r + local_b8;
          local_b4 = *(float *)&pCVar1->color.g + local_b4;
          local_b0 = *(float *)&pCVar1->color.b + local_b0;
          iVar7 = iVar7 + 1;
        }
        else {
          fVar4 = pCVar1->pos.x - (position->x + pCVar8->x);
          fVar2 = pCVar1->pos.y - (position->y + pCVar8->y);
          fVar3 = pCVar1->pos.z - (position->z + pCVar8->z);
          fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4;
          if (fVar1 <= pCVar1->atten_end_squared) {
            fVar1 = (1.0 - core_chain_cpp_fastSqrt_FUN_00431350(fVar1) *
                            pCVar1->atten_end_reciprocal) * 0.666f;
            fVar5 = (float)2;
            local_88 = fVar1 * *(float *)&pCVar1->color.r * fVar5 + local_88;
            local_84 = fVar1 * *(float *)&pCVar1->color.g * fVar5 + local_84;
            local_80 = fVar1 * *(float *)&pCVar1->color.b * fVar5 + local_80;
          }
        }
      }
      if (iVar7 == 0) {
        local_78 = 0xaaaa;
        local_74 = 0xaaaa;
        local_7c = 0xaaaa;
      }
      else {
        local_7c = (int)ROUND(local_b8 * 256.0f);
        local_78 = (int)ROUND(local_b4 * 256.0f);
        local_74 = (int)ROUND(local_b0 * 256.0f);
      }
      g_ColorCorrectionLightMultiplier = (int)ROUND(local_88 * 256.0f) + local_7c;
      g_ColorCorrectionColorMultiplier = (int)ROUND(local_84 * 256.0f) + local_78;
      iVar7 = (int)ROUND(local_80 * 256.0f) + local_74;
      if (0xffff < g_ColorCorrectionLightMultiplier) {
        g_ColorCorrectionLightMultiplier = 0xffff;
      }
      if (0xffff < g_ColorCorrectionColorMultiplier) {
        g_ColorCorrectionColorMultiplier = 0xffff;
      }
      g_ColorCorrectionFogMultiplier = iVar7;
      if (0xffff < iVar7) {
        g_ColorCorrectionFogMultiplier = 0xffff;
        return iVar7;
      }
    }
  }
  return iVar7;
}
