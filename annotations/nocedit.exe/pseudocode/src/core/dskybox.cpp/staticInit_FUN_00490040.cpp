// Name: core_dskybox.cpp_staticInit_FUN_00490040
// Address: 00490040
// Address Range: [[00490040, 00490061]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_staticInit_FUN_00490040(void)

#include "nocturne.h"

void __cdecl core_dskybox_cpp_staticInit_FUN_00490040(void)

{
  core_dskybox_cpp_initializeSkyboxTexture_FUN_00490070(g_SkyDomeTextureData);
  g_SkyDomeCenter.x = 0.0;
  g_SkyDomeCenter.y = 0.0;
  g_SkyDomeCenter.z = 0.0;
  return;
}
