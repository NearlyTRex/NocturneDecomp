// Name: engine_drender.cpp_renderTriangleSimple_FUN_00458080
// Address: 00458080
// Address Range: [[00458080, 00458570]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_00458080(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_00458080(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  uint *apuStack_78 [17];
  uint local_34;
  int *local_30;
  int local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  
  if (DAT_006b0280 != 0) {
    apuStack_78[0] = &DAT_005c5014 + param_1[2] * 0xc;
    iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                      (&DAT_005c5014 + *param_1 * 0xc,&DAT_005c5014 + param_1[1] * 0xc);
    if (iVar8 == 0) {
      return;
    }
  }
  _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
  if ((_DAT_01c02594 == 0) || (DAT_006b0278 != 0)) {
    if (_DAT_01c039a4 != 0) {
      if (_DAT_01c039a4 < 2) {
        iVar8 = 0;
        piVar7 = param_1;
        if (0 < param_2) {
          do {
            apuStack_78[0] = (uint *)0x1;
            iVar8 = iVar8 + 1;
            engine_prim_c_prepareDepthBuffer_FUN_004f9870(&DAT_005c5014 + *piVar7 * 0xc);
            piVar7 = piVar7 + 1;
          } while (iVar8 < param_2);
        }
      }
      else if ((_DAT_01c039a4 == 6) && (iVar8 = 0, piVar7 = param_1, 0 < param_2)) {
        do {
          apuStack_78[0] = (uint *)0x1;
          iVar8 = iVar8 + 1;
          engine_prim_c_replaceWWithDepth_FUN_004f99d0(&DAT_005c5014 + *piVar7 * 0xc);
          piVar7 = piVar7 + 1;
        } while (iVar8 < param_2);
      }
    }
    _DAT_01b4cd30 = 0;
    _DAT_01b4d1b8 = 0;
    local_2c = 0;
    _DAT_01b4d1b4 = 0x4b0;
    if (0 < param_2) {
      local_30 = param_1;
      do {
        iVar8 = local_2c + 1;
        if (param_2 <= iVar8) {
          iVar8 = 0;
        }
        iVar2 = param_1[iVar8] * 0x30;
        local_20 = &DAT_005c5014 + param_1[iVar8] * 0xc;
        iVar3 = *local_30 * 0x30;
        local_24 = &DAT_005c5014 + *local_30 * 0xc;
        iVar4 = *(int *)(&DAT_005c5028 + iVar3) >> 0x10;
        iVar8 = *(int *)(&DAT_005c5028 + iVar2) >> 0x10;
        local_28 = local_20;
        if (iVar4 != iVar8) {
          iVar5 = iVar4;
          puVar9 = local_24;
          if (*(int *)(&DAT_005c5028 + iVar2) < *(int *)(&DAT_005c5028 + iVar3)) {
            iVar5 = iVar8;
            iVar8 = iVar4;
            puVar9 = local_20;
            local_28 = local_24;
          }
          iVar3 = _DAT_01b4cd30 * 0x48;
          *(int *)(&DAT_01b4cd34 + iVar3) = iVar5;
          iVar2 = _DAT_01b4d1b4;
          *(int *)(iVar3 + 0x1b4cd38) = iVar8;
          if (iVar5 < iVar2) {
            _DAT_01b4d1b4 = iVar5;
          }
          if (_DAT_01b4d1b8 < iVar8) {
            _DAT_01b4d1b8 = iVar8;
          }
          if ((uint)(local_28[5] - puVar9[5]) < 0x10000) {
            iVar8 = 0;
          }
          else {
            iVar8 = (int)(0xffffffff / (ulonglong)(uint)(local_28[5] - puVar9[5]));
          }
          lVar1 = (longlong)iVar8 * (longlong)(int)(local_28[4] - puVar9[4]);
          *(uint *)(iVar3 + 0x1b4cd40) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          lVar1 = (longlong)iVar8 * (longlong)((local_28[2] - puVar9[2]) * 0x100);
          *(uint *)(iVar3 + 0x1b4cd60) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          uVar6 = (uint)(ushort)((ushort)puVar9[5] ^ 0xffff);
          lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1b4cd40);
          local_34 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar3 + 0x1b4cd3c) = puVar9[4] + local_34;
          lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1b4cd60);
          _DAT_01b4cd30 = _DAT_01b4cd30 + 1;
          *(uint *)(iVar3 + 0x1b4cd5c) =
               (puVar9[2] * 0x100 - _DAT_01b4d1fc) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
        local_30 = local_30 + 1;
        local_2c = local_2c + 1;
      } while (local_2c < param_2);
    }
    iVar8 = 0;
    _DAT_01b4d768 = 0;
    local_14 = (int *)&DAT_01b4cd34;
    if (0 < _DAT_01b4cd30) {
      do {
        if ((_DAT_01b4d1b4 == *local_14) && (local_14 != (int *)0x0)) goto LAB_00458274;
        iVar8 = iVar8 + 1;
        local_14 = local_14 + 0x12;
      } while (iVar8 < _DAT_01b4cd30);
    }
    local_14 = (int *)0x0;
LAB_00458274:
    if (local_14 != (int *)0x0) {
      local_18 = (int *)&DAT_01b4cd34;
      iVar8 = 0;
      if (0 < _DAT_01b4cd30) {
        do {
          if ((_DAT_01b4d1b4 == *local_18) && (local_18 != local_14)) goto LAB_004582ad;
          iVar8 = iVar8 + 1;
          local_18 = local_18 + 0x12;
        } while (iVar8 < _DAT_01b4cd30);
      }
      local_18 = (int *)0x0;
LAB_004582ad:
      local_1c = _DAT_01b4d1b4;
      if (local_18 != (int *)0x0) {
        do {
          if (local_14[1] <= local_1c) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01b4cd34;
            iVar8 = 0;
            if (0 < _DAT_01b4cd30) {
              do {
                if ((local_1c == *local_14) && (local_14 != local_18)) goto LAB_00458308;
                iVar8 = iVar8 + 1;
                local_14 = local_14 + 0x12;
              } while (iVar8 < _DAT_01b4cd30);
            }
            local_14 = (int *)0x0;
LAB_00458308:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          if (local_18[1] <= local_1c) {
            *local_18 = -1;
            local_18 = (int *)&DAT_01b4cd34;
            iVar8 = 0;
            if (0 < _DAT_01b4cd30) {
              do {
                if ((local_1c == *local_18) && (local_18 != local_14)) goto LAB_00458358;
                iVar8 = iVar8 + 1;
                local_18 = local_18 + 0x12;
              } while (iVar8 < _DAT_01b4cd30);
            }
            local_18 = (int *)0x0;
LAB_00458358:
            if (local_18 == (int *)0x0) {
              return;
            }
          }
          apuStack_78[1] = (uint *)0x45837b;
          wincore_windll_cpp_renderScanline_FUN_00530710(local_18,local_14,local_1c);
          if (_DAT_01b4d768 != 0) {
            return;
          }
          local_18[2] = local_18[2] + local_18[3];
          local_18[10] = local_18[10] + local_18[0xb];
          *(int *)(local_1c + 8) = *(int *)(local_1c + 8) + *(int *)(local_1c + 0xc);
          *(int *)(local_1c + 0x28) = *(int *)(local_1c + 0x28) + *(int *)(local_1c + 0x2c);
          local_1c = (int)local_20 + 1;
        } while( true );
      }
    }
  }
  else {
    if (0 < param_2) {
      iVar8 = 0;
      do {
        iVar2 = *param_1;
        iVar8 = iVar8 + 1;
        param_1 = param_1 + 1;
        apuStack_78[iVar8] = &DAT_005c5014 + iVar2 * 0xc;
      } while (iVar8 < param_2);
    }
    apuStack_78[0] = _DAT_01c039a0;
    wincore_windll_cpp_drawPolygon2_FUN_00532650(apuStack_78 + 1,param_2);
  }
  return;
}
