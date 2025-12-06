// Name: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
// Address: 0056db80
// Address Range: [[0056db80, 0056dda4]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)

#include "nocturne.h"

int __cdecl
core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
          (CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int unaff_EDI;
  int iVar5;
  byte bVar6;
  SMirrorReflection *in_stack_00000010;
  int aiStackY_102c [1011];
  CDemonLight *in_stack_ffffffbc;
  CVector3i *in_stack_ffffffc0;
  CVector3i local_3c;
  int local_30 [5];
  uint uStack_1c;
  int local_14;
  CVector3i *pCVar7;
  
  bVar6 = 0;
  if (g_LightingSystemDirty != 0) {
    core_set_cpp_CDemonSet_FUN_0056d4a0(this_ptr);
    g_LightingSystemDirty = 0;
  }
  iVar4 = 0;
  iVar3 = 0;
  if (0 < g_PrimaryDirectionalLightCount) {
    iVar5 = 0;
    do {
      puVar1 = (uint *)((int)&g_PrimaryDirectionalLights + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      iVar2 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
                        (&g_CDemonCameraInstance,surface_normal,(CDemonLight *)*puVar1,
                         surface_normal);
      iVar3 = iVar3 + iVar2;
    } while (iVar4 < g_PrimaryDirectionalLightCount);
  }
  iVar4 = 0;
  if (0 < g_SecondaryDirectionalLightCount) {
    iVar5 = 0;
    do {
      puVar1 = (uint *)((int)g_SecondaryDirectionalLights + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      iVar2 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
                        (&g_CDemonCameraInstance,surface_normal,(CDemonLight *)*puVar1,
                         surface_normal);
      iVar3 = iVar3 + iVar2;
    } while (iVar4 < g_SecondaryDirectionalLightCount);
  }
  iVar4 = 0;
  if (0 < g_GlobeLightCount) {
    iVar5 = 0;
    do {
      puVar1 = (uint *)((int)&g_GlobeLights + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      iVar2 = core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850
                        ((CDemonGlobe *)*puVar1,surface_normal,surface_normal);
      iVar3 = iVar3 + iVar2;
    } while (iVar4 < g_GlobeLightCount);
  }
  local_14 = 0;
  pCVar7 = world_position;
  if (0 < world_position[0x1ce64].y) {
    do {
      core_mirror_cpp_transformMirrorVertex_FUN_005229b0
                ((SMirrorReflection *)(pCVar7[0x1ce64].z + 0x1ec),(CVector3f *)surface_normal,
                 (CVector3f *)in_stack_ffffffbc);
      in_stack_ffffffbc = (CDemonLight *)local_3c.z;
      local_30[(uint)bVar6 * -2 + -4] = local_30[(uint)bVar6 * -2];
      *(int *)((int)&local_3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           local_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      if (surface_normal != (CVector3i *)0x0) {
        in_stack_ffffffbc = (CDemonLight *)surface_normal;
        core_mirror_cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50
                  ((CVector3i *)(*(int *)(unaff_EDI + 0x15acb8) + 0x1ec),in_stack_00000010,
                   surface_normal,in_stack_ffffffc0);
        uStack_1c = local_30[3];
        local_30[(uint)bVar6 * -2 + 6] = local_30[(uint)bVar6 * -2 + 4];
        local_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             local_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
      }
      iVar4 = 0;
      if (0 < g_DynamicLightCount) {
        iVar5 = 0;
        do {
          if (surface_normal == (CVector3i *)0x0) {
            in_stack_ffffffbc = *(CDemonLight **)((int)g_DynamicLights + iVar5);
            in_stack_ffffffc0 = (CVector3i *)0x0;
          }
          else {
            in_stack_ffffffc0 = (CVector3i *)(local_30 + 6);
            in_stack_ffffffbc = *(CDemonLight **)((int)g_DynamicLights + iVar5);
          }
          iVar2 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
                            (&g_CDemonCameraInstance,&local_3c,in_stack_ffffffbc,in_stack_ffffffc0);
          iVar3 = iVar3 + iVar2;
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar4 < g_DynamicLightCount);
      }
      local_14 = local_14 + 1;
      pCVar7 = (CVector3i *)&pCVar7->y;
    } while (local_14 < world_position[0x1ce64].y);
  }
  return iVar3;
}
