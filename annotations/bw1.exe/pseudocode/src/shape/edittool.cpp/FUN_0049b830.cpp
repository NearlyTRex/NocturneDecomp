// Name: shape_edittool.cpp_FUN_0049b830
// Address: 0049b830
// Address Range: [[0049b830, 0049be44]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_FUN_0049b830(CPickList *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0049bd6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_FUN_0049b830(CPickList *this_ptr)

{
  byte *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  char local_164 [300];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  byte *local_14;
  
  shape_edittool_cpp_FUN_00496ee0(g_CEditorToolsPtr);
  shape_edittool_cpp_FUN_00497660(g_CEditorToolsPtr,1);
  local_28 = _DAT_01c4f008;
  local_24 = *(int *)&this_ptr->field_0x198;
  local_34 = 0;
  if (0 < *(int *)&this_ptr->field_0x1a8) {
    do {
      local_1c = _DAT_01c4f00c;
      local_2c = 0;
      if (0 < *(int *)&this_ptr->field_0x1a0) {
        do {
          iVar6 = local_1c;
          iVar7 = local_28;
          if (*(int *)this_ptr <= local_24) break;
          if (local_24 == *(int *)&this_ptr->field_0x194) {
            iVar9 = local_28 + *(int *)&this_ptr->field_0x1a4 + -1;
            iVar8 = local_1c + *(int *)&this_ptr->field_0x18c + -1;
            uVar10 = _DAT_01c3f5a0;
            if (*(int *)&this_ptr->field_0x188 != 0) {
              uVar10 = _DAT_01c3f5a4;
            }
            local_38 = iVar9;
            local_30 = iVar8;
            if (_DAT_01c3f544 == 0) {
              engine_2d_c_fillRectColor_FUN_004031c0(local_28,local_1c,iVar9,iVar8,uVar10);
            }
            else {
              iVar3 = (uVar10 & 0xff) * 3;
              engine_mini3d_cpp_FUN_00517d50
                        ((uint)(&DAT_01c4e9fa)[iVar3] |
                         (uint)(&DAT_01c4e9f8)[iVar3] << 0x10 | (uint)(&DAT_01c4e9f9)[iVar3] << 8);
              engine_mini3d_cpp_FUN_00518010(iVar7,iVar6,local_38,local_30);
            }
            if (*(int *)&this_ptr->field_0x3bc == -1) {
              uVar10 = _DAT_01c3f544;
              if (_DAT_01c3f544 != 0) {
                engine_mini3d_cpp_FUN_00517d50
                          ((uint)DAT_01c4e9fa | (uint)DAT_01c4e9f9 << 8 | (uint)DAT_01c4e9f8 << 0x10
                          );
                uVar10 = _DAT_01c4f020;
              }
              _DAT_01c4f020 = uVar10;
              shape_edittool_cpp_FUN_00492a40(local_28,local_1c,iVar9,iVar8,1);
            }
          }
          local_18 = 0;
          pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0
                              ((CStrList *)this_ptr,local_24);
          iVar6 = local_28 + *(int *)&this_ptr->field_0x190;
          local_20 = _DAT_01c3f598;
          iVar7 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_0049c100(this_ptr,local_24);
          if (iVar7 == 0) {
            local_20 = _DAT_01c3f59c;
          }
          local_14 = &this_ptr->field_0x0 + local_18 * 4;
          do {
            cVar2 = *pcVar11;
            pcVar4 = pcVar11;
            pcVar12 = local_164;
            while ((pcVar11 = pcVar4, cVar2 != '\0' && (pcVar11 = pcVar4 + 1, *pcVar4 != '\t'))) {
              *pcVar12 = *pcVar4;
              pcVar12 = pcVar12 + 1;
              cVar2 = *pcVar11;
              pcVar4 = pcVar11;
            }
            *pcVar12 = '\0';
            engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
            engine_mini3d_cpp_FUN_00512320(0x3f800000);
            engine_font_cpp_FUN_004c1dd0(_DAT_01c3eb50,local_164,iVar6,local_1c,local_20,0xffffffff)
            ;
            puVar1 = local_14 + 4;
            iVar6 = iVar6 + *(int *)(local_14 + 0x10);
            local_18 = local_18 + 1;
            local_14 = puVar1;
          } while (*pcVar11 != '\0');
          local_1c = local_1c + *(int *)&this_ptr->field_0x18c;
          local_24 = local_24 + 1;
          local_2c = local_2c + 1;
        } while (local_2c < *(int *)&this_ptr->field_0x1a0);
      }
      uVar10 = _DAT_01c4f020;
      if (0 < local_34) {
        uVar5 = _DAT_01c3f5a8;
        if (_DAT_01c3f544 != 0) {
          iVar7 = (_DAT_01c3f5a8 & 0xff) * 3;
          engine_mini3d_cpp_FUN_00517d50
                    ((uint)(&DAT_01c4e9fa)[iVar7] |
                     (uint)(&DAT_01c4e9f9)[iVar7] << 8 | (uint)(&DAT_01c4e9f8)[iVar7] << 0x10);
          uVar5 = _DAT_01c4f020;
        }
        _DAT_01c4f020 = uVar5;
        iVar6 = shape_edittool_cpp_calculateGridHeight_FUN_0049d450();
        iVar7 = DAT_0061b49c / 0x60;
        if (*(int *)&this_ptr->field_0x1f0 == 2) {
          iVar8 = 3;
        }
        else {
          iVar8 = 1;
        }
        iVar9 = shape_edittool_cpp_FUN_0049d9e0((char *)0x0);
        if (*(int *)&this_ptr->field_0x1f0 != 2) {
          iVar6 = 0;
        }
        engine_2d_c_drawLine_FUN_004011a0
                  (local_28,_DAT_01c4f00c,local_28,_DAT_01c4f014 - (iVar6 + iVar9 + iVar7 * iVar8));
      }
      local_34 = local_34 + 1;
      local_28 = local_28 + *(int *)&this_ptr->field_0x1a4;
      _DAT_01c4f020 = uVar10;
    } while (local_34 < *(int *)&this_ptr->field_0x1a8);
  }
  if (*(int *)&this_ptr->field_0x1f0 == 1) {
    *(uint *)&this_ptr->field_0x1bc = *(uint *)&this_ptr->field_0x198;
    *(uint *)&this_ptr->field_0x1c0 = *(uint *)this_ptr;
    *(uint *)&this_ptr->field_0x1c4 = *(uint *)&this_ptr->field_0x1a0;
  }
  else {
    if (*(int *)&this_ptr->field_0x1f0 != 2) goto LAB_0049ba48;
    *(int *)&this_ptr->field_0x1bc = *(int *)&this_ptr->field_0x198 / *(int *)&this_ptr->field_0x1a0
    ;
    *(int *)&this_ptr->field_0x1c0 =
         (*(int *)this_ptr + *(int *)&this_ptr->field_0x1a0 + -1) / *(int *)&this_ptr->field_0x1a0;
    *(uint *)&this_ptr->field_0x1c4 = *(uint *)&this_ptr->field_0x1a8;
  }
  shape_edittool_cpp_FUN_0049caa0(&this_ptr->field_0x1bc);
LAB_0049ba48:
  if (this_ptr->field_0x5c != '\0') {
    shape_edittool_cpp_FUN_0049d580(&this_ptr->field_0x1f4,*(int *)&this_ptr->field_0x3bc == 0);
  }
  if (this_ptr->field_0xc0 != '\0') {
    shape_edittool_cpp_FUN_0049d580(&this_ptr->field_0x2d8,*(int *)&this_ptr->field_0x3bc == 1);
  }
  if (*(int *)&this_ptr->field_0x58 == 0) {
    shape_edittool_cpp_FUN_00497870(g_CEditorToolsPtr,0);
    return;
  }
  return;
}
