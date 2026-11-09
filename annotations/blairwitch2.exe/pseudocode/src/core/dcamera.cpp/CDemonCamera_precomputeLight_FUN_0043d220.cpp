// Name: core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0043d220
// Address: 0043d220
// Address Range: [[0043d220, 0043d766]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0043d220(CDemonCamera *this_ptr,CDemonLight *light_source,CRect *rect)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0043d220(CDemonCamera *this_ptr,CDemonLight *light_source,CRect *rect)

{
  int iVar1;
  CDemonLight *pCVar2;
  byte *puVar3;
  ushort *puVar4;
  CRect *pCVar5;
  CRect *pCVar6;
  int iVar7;
  byte bVar8;
  int aiStackY_185c [1523];
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_64;
  int local_60 [4];
  byte *local_50;
  int local_4c;
  byte *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  byte *local_30;
  int local_2c;
  float *local_28;
  int *local_24;
  int *local_20;
  uint *local_1c;
  int local_18;
  
  bVar8 = 0;
  local_40 = 0x80;
  local_3c = 0;
  iVar1 = _strcmp(&light_source->field_0x1c74,"@movscrn.raw" + 1);
  if (iVar1 == 0) {
    local_3c = 1;
    local_40 = 0x100;
  }
  if (rect == (CRect *)0x0) {
    _DAT_0126e7a8 = rect;
    _DAT_00b667a4 = rect;
  }
  pCVar6 = _DAT_00b667a4 + 1;
  iVar1 = (int)_DAT_00b667a4 * 0x4b000 + 0xb667a8;
  if ((CRect *)0x18 < pCVar6) {
    iVar1 = 0;
  }
  _DAT_00b667a4 = pCVar6;
  *(int *)&light_source->field_0x1c48 = iVar1;
  pCVar5 = _DAT_00b667a4 + 1;
  iVar1 = (int)pCVar6 * 0x4b000 + 0xb667a8;
  if ((CRect *)0x18 < pCVar5) {
    iVar1 = 0;
  }
  _DAT_00b667a4 = pCVar5;
  *(int *)&light_source->field_0x1c4c = iVar1;
  _DAT_00b667a4 = _DAT_00b667a4 + 1;
  iVar1 = (int)pCVar5 * 0x4b000 + 0xb667a8;
  if ((CRect *)0x18 < _DAT_00b667a4) {
    iVar1 = 0;
  }
  *(int *)&light_source->field_0x1c50 = iVar1;
  if (((*(int *)&light_source->field_0x1c48 == 0) || (*(int *)&light_source->field_0x1c4c == 0)) ||
     (*(int *)&light_source->field_0x1c50 == 0)) {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x6c6;
    core_main_c_FUN_004e4500("CDemonCamera::precomputeLight - Too many lights visible from camera %s",&this_ptr->field_0x40);
  }
  core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_0044cf50(light_source);
  if ((rect == (CRect *)0x0) || (*(int *)&this_ptr->field_0x148 != 0x1e0)) {
    local_7c = *(int *)&this_ptr->field_0x150 + -1;
    local_78 = 0;
    local_74 = *(int *)&this_ptr->field_0x154 + -1;
    local_80 = 0;
  }
  else {
    pCVar6 = rect + (uint)bVar8 * -8 + 4;
    local_80 = *(int *)rect;
    *(uint *)((int)&stack0xffffff84 + (uint)bVar8 * -8) = *(uint *)pCVar6;
    *(uint *)((int)&stack0xffffff88 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(pCVar6 + (uint)bVar8 * -8 + 4);
    ((uint *)((int)&stack0xffffff88 + (uint)bVar8 * -8 + (uint)bVar8 * -8))
    [(uint)bVar8 * -2 + 1] = *(uint *)(pCVar6 + (uint)bVar8 * -8 + 4 + (uint)bVar8 * -8 + 4);
    iVar1 = 0;
    pCVar2 = light_source;
    if (0 < local_78) {
      do {
        *(uint *)&pCVar2->field_0x14c8 = 999;
        iVar1 = iVar1 + 1;
        *(uint *)&pCVar2->field_0x1888 = 0;
        pCVar2 = (CDemonLight *)&pCVar2->field_0x4;
      } while (iVar1 < local_78);
    }
    iVar1 = local_74 + 1;
    if (iVar1 < *(int *)&this_ptr->field_0x154) {
      puVar3 = &light_source->field_0x4 + local_74 * 4;
      do {
        *(uint *)(puVar3 + 0x14c8) = 999;
        *(uint *)(puVar3 + 0x1888) = 0;
        iVar1 = iVar1 + 1;
        puVar3 = puVar3 + 4;
      } while (iVar1 < *(int *)&this_ptr->field_0x154);
    }
  }
  local_2c = local_78;
  if (local_78 <= local_74) {
    local_60[2] = local_80 * 0xc;
    local_4c = local_80 * 4;
    local_44 = local_78 * 0x500;
    local_50 = &DAT_0083c7d4 + local_78 * 0xf00;
    local_60[3] = local_78 * 0xf00 + 0xa005d4;
    local_48 = &light_source->field_0x0 + local_78 * 4;
    do {
      local_30 = local_50 + local_60[2];
      local_34 = 999;
      local_28 = (float *)(local_60[3] + local_60[2]);
      local_20 = (int *)(local_4c + *(int *)&light_source->field_0x1c48 + local_44);
      local_1c = (uint *)(local_4c + *(int *)&light_source->field_0x1c4c + local_44);
      local_38 = 0;
      local_24 = (int *)(local_4c + *(int *)&light_source->field_0x1c50 + local_44);
      local_18 = local_80;
      if (local_80 <= local_7c) {
        do {
          if ((((local_18 < 1) || (local_2c < 1)) ||
              ((iVar1 = local_18 * *(int *)&this_ptr->field_0x14c,
               iVar7 = *(int *)&this_ptr->field_0x144 + -2, iVar1 - iVar7 != 0 && iVar7 <= iVar1 ||
               (iVar7 = local_2c * *(int *)&this_ptr->field_0x14c,
               iVar1 = *(int *)&this_ptr->field_0x148 + -2, iVar7 - iVar1 != 0 && iVar1 <= iVar7))))
             || ((local_3c == 0 &&
                 (local_28[2] * *(float *)&light_source->field_0x30 +
                  *local_28 * *(float *)&light_source->field_0x18 +
                  local_28[1] * *(float *)&light_source->field_0x24 < 0.0)))) {
LAB_0043d47f:
            *local_20 = 0;
            *local_1c = 0;
LAB_0043d497:
            *local_24 = 0;
          }
          else {
            core_dcamera_cpp_FUN_0043cbe0(light_source,local_30);
            local_64 = local_70;
            local_60[(uint)bVar8 * -2] = *(int *)(&stack0xffffff94 + (uint)bVar8 * -8);
            local_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 *(int *)(&stack0xffffff98 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            if (local_60[1] < 1) goto LAB_0043d47f;
            *local_20 = local_60[1] - local_40;
            puVar4 = core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0044a810
                               (light_source,(CVector3i *)&local_64,(uchar)local_18,(uchar)local_2c)
            ;
            *local_1c = puVar4;
            if (puVar4 == (ushort *)0x0) {
              *local_20 = 0;
              *local_1c = 0;
              goto LAB_0043d497;
            }
            *local_24 = ((local_60[0] >> (light_source->field_0x1ccc & 0x1f) &
                         *(uint *)&light_source->field_0x1c68) <<
                        (light_source->field_0x1c60 & 0x1f)) +
                        (local_64 >> (light_source->field_0x1cc8 & 0x1f) &
                        *(uint *)&light_source->field_0x1c68);
            if (local_38 < local_18) {
              local_38 = local_18;
            }
            if (local_18 < local_34) {
              local_34 = local_18;
            }
          }
          local_28 = local_28 + 3;
          local_30 = local_30 + 0xc;
          local_20 = local_20 + 1;
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
          local_18 = local_18 + 1;
        } while (local_18 <= local_7c);
      }
      local_44 = local_44 + 0x500;
      local_60[3] = local_60[3] + 0xf00;
      local_50 = local_50 + 0xf00;
      *(int *)(local_48 + 0x14c8) = local_34;
      *(int *)(local_48 + 0x1888) = local_38;
      local_48 = local_48 + 4;
      local_2c = local_2c + 1;
    } while (local_2c <= local_74);
  }
  return;
}
