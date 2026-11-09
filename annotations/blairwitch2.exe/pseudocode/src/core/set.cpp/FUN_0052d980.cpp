// Name: core_set.cpp_FUN_0052d980
// Address: 0052d980
// Address Range: [[0052d980, 0052dc0d]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0052d980(CDemonSet *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_0052d980(CDemonSet *param_1)

{
  CDemonLight *this_ptr;
  char *text;
  uint uVar1;
  int iVar2;
  byte *puVar3;
  CDemonSet *pCVar4;
  int iVar5;
  
  iVar5 = 0;
  text = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Initializing scene");
  core_level_cpp_FUN_004e1600(0x01D03000,text,iVar5);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_00449f60();
  core_dfilter_cpp_CFilterCache_free_FUN_00447610(g_CFilterCachePtr);
  _DAT_01fc9608 = 0;
  *(uint *)&param_1->field_0x15acc8 = 0;
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0043b4c0(&g_CDemonCameraInstance);
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00442bf0
            (&g_CDemonCameraInstance,(SFog *)&param_1->field_0x15ac40);
  *(uint *)&param_1->field_0x15ac64 = *(uint *)&param_1->field_0x15ac40;
  *(uint *)&param_1->field_0x15ac68 = *(uint *)&param_1->field_0x15ac44;
  *(uint *)&param_1->field_0x15ac6c = *(uint *)&param_1->field_0x15ac48;
  if (&param_1->field_0x15ac70 != &param_1->field_0x15ac4c) {
    *(uint *)&param_1->field_0x15ac70 = *(uint *)&param_1->field_0x15ac4c;
    *(uint *)&param_1->field_0x15ac74 = *(uint *)&param_1->field_0x15ac50;
    *(uint *)&param_1->field_0x15ac78 = *(uint *)&param_1->field_0x15ac54;
  }
  *(uint *)&param_1->field_0x15ac7c = *(uint *)&param_1->field_0x15ac58;
  *(uint *)&param_1->field_0x15ac80 = *(uint *)&param_1->field_0x15ac5c;
  *(uint *)&param_1->field_0x15ac84 = *(uint *)&param_1->field_0x15ac60;
  iVar5 = 0;
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00441e80
            (&g_CDemonCameraInstance,*(float *)&param_1->field_0x14d150);
  do {
    if (*(int *)(&DAT_01fc8d04 + iVar5) != 0) {
      _DAT_01d046a0 = "..\\core\\set.cpp";
      _DAT_01d046a4 = 0x3e4;
      core_main_c_FUN_004e4500("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 != 0x180);
  iVar5 = 0;
  _DAT_01fc8d00 = 0;
  pCVar4 = param_1;
  if (0 < *(int *)&param_1->field_0x19a2c) {
    do {
      if (*(int *)&pCVar4->field_0x19a30 == 0) {
        uVar1 = core_setutil_cpp_C3DSLight_create_FUN_0053b6b0
                          (&param_1->field_0x19a30 + iVar5 * 0x1898);
        *(uint *)(&DAT_01fc8d04 + _DAT_01fc8d00 * 4) = uVar1;
        core_setutil_cpp_C3DSLight_apply_FUN_0053b810
                  (&param_1->field_0x19a30 + iVar5 * 0x1898,uVar1);
        _DAT_01fc8d00 = _DAT_01fc8d00 + 1;
        if (0x60 < _DAT_01fc8d00) {
          _DAT_01d046a0 = "..\\core\\set.cpp";
          _DAT_01d046a4 = 0x3fb;
          core_main_c_FUN_004e4500("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar5 = iVar5 + 1;
      pCVar4 = (CDemonSet *)&pCVar4->field_0x1898;
    } while (iVar5 < *(int *)&param_1->field_0x19a2c);
  }
  iVar5 = 0;
  if (0 < _DAT_01fc8d00) {
    iVar2 = 0;
    do {
      this_ptr = *(CDemonLight **)(&DAT_01fc8d04 + iVar2);
      core_dlight_cpp_CDemonLight_beginScene_FUN_0044a020(this_ptr,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60(this_ptr);
      core_set_cpp_FUN_0052d0e0(param_1,9999.9,0);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(this_ptr,0);
    } while (iVar5 < _DAT_01fc8d00);
  }
  *(uint *)&param_1->field_0x15aeb8 = 0xffffffff;
  *(uint *)&param_1->field_0x15aebc = 0xffffffff;
  iVar5 = 0;
  _DAT_01fc8e84 = 0;
  _DAT_01fc9cd4 = 0;
  _DAT_01fc961c = 0;
  _DAT_01fc97b0 = 0;
  *(uint *)&param_1->field_0x15aec0 = 0;
  core_setdir_cpp_FUN_0053a610(param_1);
  if (0 < *(int *)param_1) {
    puVar3 = &param_1->field_0x104;
    pCVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      uVar1 = core_setdir_cpp_FUN_0053a760(param_1,puVar3);
      *(uint *)&pCVar4->field_0x1a0 = uVar1;
      puVar3 = puVar3 + 0x1a4;
      pCVar4 = (CDemonSet *)&pCVar4->field_0x1a4;
    } while (iVar5 < *(int *)param_1);
  }
  core_weather_cpp_CWeather_setWeatherType_FUN_0058b470
            (0x02661F80,*(EWeatherType *)&param_1->field_0x16167c);
  return;
}
