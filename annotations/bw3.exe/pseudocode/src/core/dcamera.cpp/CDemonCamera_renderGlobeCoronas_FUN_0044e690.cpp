// Name: core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690
// Address: 0044e690
// Address Range: [[0044e690, 0044eeaf]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int aiStackY_107c [1014];
  int local_94;
  int local_88;
  uint *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  uint *local_6c;
  int local_68;
  int local_64;
  uint *local_60;
  uint *local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint *local_38;
  uint *local_34;
  byte *local_30;
  uint *local_2c;
  int local_28;
  uint *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  byte local_14;
  
  bVar1 = 0;
  if ((*(int *)&g_CGamePtr->field_0xc != 0) || ((force_render == 0 && (globe->corona_mode != 0)))) {
    _DAT_015484c8 = globe;
    core_dcamera_cpp_FUN_0044a3e0(this_ptr,globe);
    _DAT_015484d0 = local_94;
    *(uint *)(&DAT_015484d4 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffff70 + (uint)bVar1 * -8);
    *(uint *)(&DAT_015484d8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if (globe->corona_mode == 0) {
      _DAT_015484cc = 0;
    }
    else {
      _DAT_015484cc = _DAT_015484d0;
      if (_DAT_015484d0 != 0) {
        bVar1 = (char)_DAT_013405b0 + 0x10;
        _DAT_015484cc = 1;
        _DAT_015484d0 = _DAT_015484d0 >> (bVar1 & 0x1f);
        _DAT_015484d4 = _DAT_015484d4 >> (bVar1 & 0x1f);
      }
    }
    iVar4 = 0;
    if (0 < this_ptr->display_height) {
      iVar2 = 0;
      do {
        *(int *)(iVar2 + 0x14fb300) = this_ptr->framebuffer_width;
        *(uint *)(iVar2 + 0x14fb6c0) = 0;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar4 < this_ptr->display_height);
    }
    if (((force_render == 0) && (globe->corona_mode != 0)) &&
       (_DAT_005f1848 = 0xffffffff, globe->corona_mode == 2)) {
      if (_DAT_012a6558 != 0) {
        iVar4 = 0;
        do {
          if (globe == *(CDemonGlobe **)(iVar4 + 0x12a655c)) {
            iVar10 = 0;
            iVar2 = iVar4 + 0x12a655c;
            if (this_ptr->display_height < 1) {
              _DAT_005f1848 = 0xffffffff;
              return;
            }
            do {
              if (*(int *)(iVar2 + 4) != this_ptr->framebuffer_width) {
                core_dcamera_cpp_blendCoronaTextureSpan_FUN_0044e590
                          (iVar10,*(int *)(iVar2 + 4),*(uint *)(iVar2 + 0x3c4),
                           iVar4 + 0x12a655c);
              }
              iVar10 = iVar10 + 1;
              iVar2 = iVar2 + 4;
            } while (iVar10 < this_ptr->display_height);
            return;
          }
          iVar4 = iVar4 + 0x13384;
        } while (iVar4 < (int)(_DAT_012a6558 * 0x13384));
      }
      if (_DAT_012a6558 < 8) {
        iVar4 = _DAT_012a6558 * 0x13384;
        _DAT_012a6558 = _DAT_012a6558 + 1;
        local_80 = (uint *)(iVar4 + 0x12a655c);
        core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045abd0(globe);
        local_54 = 0;
        if (0 < this_ptr->display_height) {
          local_6c = local_80 + 0x1e1;
          local_68 = 0x874588;
          local_70 = 0x14fba80;
          local_60 = local_80;
          do {
            iVar4 = local_54 * 4;
            if (this_ptr->framebuffer_width != *(int *)(iVar4 + 0x14fb300)) {
              local_48 = local_54;
              local_88 = *(int *)(iVar4 + 0x14fb300);
              local_50 = *(int *)(iVar4 + 0x14fb6c0);
              local_5c = local_80;
              local_20 = (int *)(local_68 + local_88 * 0xc);
              local_2c = (uint *)(local_70 + local_88 * 4);
              local_24 = (uint *)(*(int *)(&DAT_01c60dac + (local_54 << (DAT_013405b0 & 0x1f)) * 4)
                                 + (local_88 << (DAT_013405b0 & 0x1f)) * 4);
              local_30 = (byte *)((int)local_6c + local_88);
              for (; local_88 < local_50; local_88 = local_88 + 1) {
                local_14 = 0;
                if (((*local_24 < *local_2c) &&
                    (uVar3 = *local_20 - (_DAT_015484c8->position_scaled).x,
                    uVar11 = (int)uVar3 >> 0x1f, iVar4 = (uVar3 ^ uVar11) - uVar11,
                    iVar4 < _DAT_015484c8->linear_radius_scaled)) &&
                   ((uVar3 = local_20[1] - (_DAT_015484c8->position_scaled).y,
                    uVar11 = (int)uVar3 >> 0x1f, iVar2 = (uVar3 ^ uVar11) - uVar11,
                    iVar2 < _DAT_015484c8->linear_radius_scaled &&
                    ((uVar3 = local_20[2] - (_DAT_015484c8->position_scaled).z,
                     uVar11 = (int)uVar3 >> 0x1f, iVar10 = (uVar3 ^ uVar11) - uVar11,
                     iVar10 < _DAT_015484c8->linear_radius_scaled &&
                     (local_3c = iVar2 * iVar2 + iVar4 * iVar4 + iVar10 * iVar10,
                     local_3c < _DAT_015484c8->quadratic_radius_scaled)))))) {
                  if (_DAT_015484cc != 0) {
                    local_40 = 0;
                    if (*local_24 == 0) {
                      iVar4 = 0x7fffffff;
                    }
                    else {
                      iVar4 = (int)(0x7fffffff / (longlong)(int)*local_24);
                    }
                    iVar5 = _DAT_015484d8 - iVar4;
                    iVar6 = iVar5 >> 0x1f;
                    local_1c = (_DAT_015484d0 - local_88) * 0x10;
                    local_18 = (_DAT_015484d4 - local_54) * 0x10;
                    iVar7 = local_88 << 8;
                    iVar10 = local_54 << 8;
                    iVar2 = 0x10;
                    do {
                      if (*(int *)((iVar10 >> 8) * 0x500 + 0xb52a48 + (iVar7 >> 8) * 4) <
                          iVar4 + -0x80) break;
                      iVar2 = iVar2 + -1;
                      iVar4 = iVar4 + ((int)((iVar5 + iVar6 * -0x10) - (uint)(iVar6 << 3 < 0)) >> 4)
                      ;
                      iVar7 = iVar7 + local_1c;
                      iVar10 = iVar10 + local_18;
                    } while (0 < iVar2);
                    local_44 = _DAT_015484d8;
                    if (iVar2 != 0) goto LAB_0044eb2b;
                  }
                  local_14 = (byte)
                             (((_DAT_015484c8->quadratic_radius_scaled - local_3c >> 0x10) * 0x3f) /
                             (_DAT_015484c8->quadratic_radius_scaled >> 0x10));
                }
LAB_0044eb2b:
                bVar1 = DAT_013405b0;
                local_2c = local_2c + 1;
                local_20 = local_20 + 3;
                *local_30 = local_14;
                local_24 = local_24 + (1 << (bVar1 & 0x1f));
                local_30 = local_30 + 1;
              }
              iVar4 = local_80[local_54 + 1];
              iVar2 = local_80[local_54 + 0xf1];
              for (pcVar9 = (char *)((int)local_80 + iVar4 + local_54 * 0x140 + 0x784);
                  (iVar4 < iVar2 && (*pcVar9 == '\0')); pcVar9 = pcVar9 + 1) {
                iVar4 = iVar4 + 1;
              }
              for (pcVar9 = (char *)((int)local_80 + iVar2 + local_54 * 0x140 + 0x783);
                  (iVar4 < iVar2 && (*pcVar9 == '\0')); pcVar9 = pcVar9 + -1) {
                iVar2 = iVar2 + -1;
              }
              local_80[local_54 + 1] = iVar4;
              local_80[local_54 + 0xf1] = iVar2;
              core_dcamera_cpp_blendCoronaTextureSpan_FUN_0044e590
                        (local_54,*(uint *)(local_54 * 4 + 0x14fb300),
                         *(uint *)(local_54 * 4 + 0x14fb6c0),local_80);
            }
            local_6c = local_6c + 0x50;
            local_70 = local_70 + 0x500;
            local_68 = local_68 + 0xf00;
            local_60[1] = *(uint *)(local_54 * 4 + 0x14fb300);
            iVar4 = local_54 * 4;
            local_54 = local_54 + 1;
            local_60[0xf1] = *(uint *)(iVar4 + 0x14fb6c0);
            local_60 = local_60 + 1;
          } while (local_54 < this_ptr->display_height);
        }
        *local_80 = globe;
        return;
      }
      _DAT_015484cc = 0;
    }
    core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045abd0(globe);
    local_64 = 0;
    if (0 < this_ptr->display_height) {
      local_58 = 0;
      local_78 = 0x14fba80;
      local_7c = 0xb2cfc8;
      local_74 = 0x874588;
      do {
        if (this_ptr->framebuffer_width != *(int *)(local_58 + 0x14fb300)) {
          local_28 = *(int *)(local_58 + 0x14fb300);
          iVar4 = *(int *)(local_58 + 0x14fb6c0);
          pcVar9 = (char *)(local_7c + local_28);
          local_34 = (uint *)(local_78 + local_28 * 4);
          piVar8 = (int *)(local_28 * 0xc + local_74);
          local_38 = (uint *)(*(int *)(&DAT_01c60dac + (local_64 << (DAT_013405b0 & 0x1f)) * 4) +
                             (local_28 << (DAT_013405b0 & 0x1f)) * 4);
          iVar2 = local_28 - iVar4;
          while (SBORROW4(local_28,iVar4) != iVar2 < 0) {
            if ((((*local_38 < *local_34) &&
                 (uVar3 = *piVar8 - (_DAT_015484c8->position_scaled).x,
                 (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) <
                 _DAT_015484c8->linear_radius_scaled)) &&
                (uVar11 = piVar8[1] - (_DAT_015484c8->position_scaled).y,
                (int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)) <
                _DAT_015484c8->linear_radius_scaled)) &&
               (uVar12 = piVar8[2] - (_DAT_015484c8->position_scaled).z,
               (int)((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f)) <
               _DAT_015484c8->linear_radius_scaled)) {
              iVar2 = uVar12 * uVar12 + uVar3 * uVar3 + uVar11 * uVar11;
              if (iVar2 < _DAT_015484c8->quadratic_radius_scaled) {
                *pcVar9 = *pcVar9 + (char)((ulonglong)
                                           ((longlong)
                                            (_DAT_015484c8->quadratic_radius_scaled - iVar2 >> 0x10)
                                           * (longlong)_DAT_015484c8->falloff_value) >> 0x10);
              }
            }
            piVar8 = piVar8 + 3;
            pcVar9 = pcVar9 + 1;
            local_34 = local_34 + 1;
            local_38 = local_38 + (1 << (DAT_013405b0 & 0x1f));
            local_28 = local_28 + 1;
            iVar2 = local_28 - iVar4;
          }
        }
        local_58 = local_58 + 4;
        local_78 = local_78 + 0x500;
        local_7c = local_7c + 0x140;
        local_74 = local_74 + 0xf00;
        local_64 = local_64 + 1;
      } while (local_64 < this_ptr->display_height);
    }
  }
  return;
}
