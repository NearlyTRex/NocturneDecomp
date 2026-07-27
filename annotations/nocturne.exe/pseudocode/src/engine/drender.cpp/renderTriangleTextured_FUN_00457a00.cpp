// Name: engine_drender.cpp_renderTriangleTextured_FUN_00457a00
// Address: 00457a00
// Address Range: [[00457a00, 00458071]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00457a00(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00457a00(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *apuStack_70 [17];
  uint local_2c;
  int *local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  int *local_18;
  int *local_14;
  
  if (DAT_006b0280 != 0) {
    apuStack_70[0] = &DAT_005c5014 + param_1[2] * 0xc;
    iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                      (&DAT_005c5014 + *param_1 * 0xc,&DAT_005c5014 + param_1[1] * 0xc);
    if (iVar6 == 0) {
      return;
    }
  }
  _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
  if ((_DAT_01c02594 == 0) || (DAT_006b0278 != 0)) {
    _DAT_01b4cd30 = 0;
    _DAT_01b4d1b8 = 0;
    local_24 = 0;
    _DAT_01b4d1b4 = 0x4b0;
    if (0 < param_2) {
      local_28 = param_1;
      do {
        iVar6 = local_24 + 1;
        if (param_2 <= iVar6) {
          iVar6 = 0;
        }
        iVar5 = param_1[iVar6] * 0x30;
        iVar7 = *local_28 * 0x30;
        local_1c = &DAT_005c5014 + param_1[iVar6] * 0xc;
        iVar6 = *(int *)(&DAT_005c5028 + iVar5) >> 0x10;
        iVar2 = *(int *)(&DAT_005c5028 + iVar7) >> 0x10;
        if (iVar2 != iVar6) {
          iVar3 = iVar2;
          puVar8 = &DAT_005c5014 + *local_28 * 0xc;
          if (*(int *)(&DAT_005c5028 + iVar5) < *(int *)(&DAT_005c5028 + iVar7)) {
            iVar3 = iVar6;
            iVar6 = iVar2;
            puVar8 = local_1c;
            local_1c = &DAT_005c5014 + *local_28 * 0xc;
          }
          iVar5 = _DAT_01b4cd30 * 0x48;
          *(int *)(&DAT_01b4cd34 + iVar5) = iVar3;
          iVar2 = _DAT_01b4d1b4;
          *(int *)(iVar5 + 0x1b4cd38) = iVar6;
          if (iVar3 < iVar2) {
            _DAT_01b4d1b4 = iVar3;
          }
          if (_DAT_01b4d1b8 < iVar6) {
            _DAT_01b4d1b8 = iVar6;
          }
          if ((uint)(local_1c[5] - puVar8[5]) < 0x10000) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)(0xffffffff / (ulonglong)(uint)(local_1c[5] - puVar8[5]));
          }
          uVar9 = (uint)(ushort)((ushort)puVar8[5] ^ 0xffff);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[4] - puVar8[4]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1b4cd40) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1b4cd3c) =
               puVar8[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[6] - puVar8[6]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1b4cd50) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1b4cd4c) =
               puVar8[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[7] - puVar8[7]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1b4cd58) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1b4cd54) =
               puVar8[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[8] - puVar8[8]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1b4cd48) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1b4cd44) =
               puVar8[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[0xb] - puVar8[0xb]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1b4cd68) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1b4cd64) =
               puVar8[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (DAT_006b0278 == 0) {
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[3] - puVar8[3]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1b4cd60) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar2 = puVar8[3];
          }
          else {
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[2] - puVar8[2]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1b4cd60) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar2 = puVar8[2];
          }
          *(uint *)(iVar5 + 0x1b4cd5c) = iVar2 + local_2c;
          if (((uint)_DAT_01c039a0 & 0x200) != 0) {
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[9] - puVar8[9]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1b4cd70) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1b4cd6c) = puVar8[9] + local_2c;
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[10] - puVar8[10]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1b4cd78) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            *(uint *)(iVar5 + 0x1b4cd74) =
                 puVar8[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          _DAT_01b4cd30 = _DAT_01b4cd30 + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
      } while (local_24 < param_2);
    }
    local_18 = (int *)&DAT_01b4cd34;
    iVar6 = 0;
    _DAT_01b4d768 = 0;
    if (0 < _DAT_01b4cd30) {
      do {
        if ((_DAT_01b4d1b4 == *local_18) && (local_18 != (int *)0x0)) goto LAB_00457bb4;
        iVar6 = iVar6 + 1;
        local_18 = local_18 + 0x12;
      } while (iVar6 < _DAT_01b4cd30);
    }
    local_18 = (int *)0x0;
LAB_00457bb4:
    if (local_18 != (int *)0x0) {
      local_14 = (int *)&DAT_01b4cd34;
      iVar6 = 0;
      if (0 < _DAT_01b4cd30) {
        do {
          if ((_DAT_01b4d1b4 == *local_14) && (local_14 != local_18)) goto LAB_00457beb;
          iVar6 = iVar6 + 1;
          local_14 = local_14 + 0x12;
        } while (iVar6 < _DAT_01b4cd30);
      }
      local_14 = (int *)0x0;
LAB_00457beb:
      if (local_14 != (int *)0x0) {
        local_20 = _DAT_01b4d1b4;
        do {
          if (local_18[1] <= local_20) {
            *local_18 = -1;
            local_18 = (int *)&DAT_01b4cd34;
            iVar6 = 0;
            if (0 < _DAT_01b4cd30) {
              do {
                if ((local_20 == *local_18) && (local_18 != local_14)) goto LAB_00457c46;
                iVar6 = iVar6 + 1;
                local_18 = local_18 + 0x12;
              } while (iVar6 < _DAT_01b4cd30);
            }
            local_18 = (int *)0x0;
LAB_00457c46:
            if (local_18 == (int *)0x0) {
              return;
            }
          }
          if (local_14[1] <= local_20) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01b4cd34;
            iVar6 = 0;
            if (0 < _DAT_01b4cd30) {
              do {
                if ((local_20 == *local_14) && (local_14 != local_18)) goto LAB_00457c96;
                iVar6 = iVar6 + 1;
                local_14 = local_14 + 0x12;
              } while (iVar6 < _DAT_01b4cd30);
            }
            local_14 = (int *)0x0;
LAB_00457c96:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          apuStack_70[1] = (uint *)0x457cb9;
          engine_special_cpp_renderScanline_FUN_00530710(local_14,local_18,local_20);
          if (_DAT_01b4d768 != 0) {
            return;
          }
          local_1c[2] = local_1c[2] + local_1c[3];
          local_1c[6] = local_1c[6] + local_1c[7];
          local_1c[8] = local_1c[8] + local_1c[9];
          local_1c[4] = local_1c[4] + local_1c[5];
          local_1c[10] = local_1c[10] + local_1c[0xb];
          local_1c[0xc] = local_1c[0xc] + local_1c[0xd];
          local_18[2] = local_18[2] + local_18[3];
          local_18[6] = local_18[6] + local_18[7];
          local_18[8] = local_18[8] + local_18[9];
          local_18[4] = local_18[4] + local_18[5];
          local_18[10] = local_18[10] + local_18[0xb];
          local_18[0xc] = local_18[0xc] + local_18[0xd];
          if (((uint)_DAT_01c039a0 & 0x200) == 0) {
            local_24 = local_24 + 1;
          }
          else {
            local_1c[0xe] = local_1c[0xe] + local_1c[0xf];
            local_1c[0x10] = local_1c[0x10] + local_1c[0x11];
            local_18[0xe] = local_18[0xe] + local_18[0xf];
            local_18[0x10] = local_18[0x10] + local_18[0x11];
            local_24 = local_24 + 1;
          }
        } while( true );
      }
    }
  }
  else {
    iVar6 = 0;
    if (0 < param_2) {
      do {
        iVar6 = iVar6 + 1;
        apuStack_70[iVar6] = &DAT_005c5014 + *param_1 * 0xc;
        param_1 = param_1 + 1;
      } while (iVar6 < param_2);
    }
    apuStack_70[0] = _DAT_01c039a0;
    engine_special_cpp_drawPolygon2_FUN_00532650(apuStack_70 + 1,param_2);
  }
  return;
}
