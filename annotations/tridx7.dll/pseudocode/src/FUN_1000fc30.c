// Name: FUN_1000fc30
// Address: 1000fc30
// Address Range: [[1000fc30, 1000fe35]]
// Convention: unknown
// Signature: uint FUN_1000fc30(ushort *param_1,undefined4 *param_2,uint param_3,uint param_4)

#include "nocturne.h"

uint FUN_1000fc30(ushort *param_1,uint *param_2,uint param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint unaff_EDI;
  
  uVar6 = 0;
  uVar5 = CONCAT22((short)((uint)unaff_EDI >> 0x10),*param_1);
  iVar2 = FUN_10010870(uVar5,8);
  puVar1 = param_1;
  while (puVar7 = puVar1 + 1, iVar2 != 0) {
    uVar5 = CONCAT22((short)(uVar5 >> 0x10),*puVar7);
    iVar2 = FUN_10010870(uVar5,8);
    puVar1 = puVar7;
  }
  if ((short)uVar5 == 0x2d) {
    uVar5 = (uint)*puVar7;
    param_4 = param_4 | 2;
    puVar7 = puVar1 + 2;
  }
  else if ((short)uVar5 == 0x2b) {
    uVar5 = (uint)*puVar7;
    puVar7 = puVar1 + 2;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (uint *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if ((short)uVar5 == 0x30) {
      if ((*puVar7 == 0x78) || (*puVar7 == 0x58)) {
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
    else {
      param_3 = 10;
    }
  }
  if (((param_3 == 0x10) && ((short)uVar5 == 0x30)) && ((*puVar7 == 0x78 || (*puVar7 == 0x58)))) {
    uVar5 = (uint)puVar7[1];
    puVar7 = puVar7 + 2;
  }
  uVar3 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    iVar2 = FUN_10010870(uVar5,4);
    if (iVar2 == 0) {
      iVar2 = FUN_10010870(uVar5,0x103);
      if (iVar2 == 0) {
LAB_1000fd8c:
        puVar7 = puVar7 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (uint *)0x0) {
            puVar7 = param_1;
          }
          uVar6 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < uVar6)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < uVar6)))))))) {
          puVar4 = (uint *)FUN_10008a20();
          *puVar4 = 0x22;
          if ((param_4 & 1) == 0) {
            if ((param_4 & 2) == 0) {
              uVar6 = 0x7fffffff;
            }
            else {
              uVar6 = 0x80000000;
            }
          }
          else {
            uVar6 = 0xffffffff;
          }
        }
        if (param_2 != (uint *)0x0) {
          *param_2 = puVar7;
        }
        if ((param_4 & 2) != 0) {
          uVar6 = -uVar6;
        }
        return uVar6;
      }
      uVar5 = FUN_10010750(uVar5);
      uVar5 = (uVar5 & 0xffff) - 0x37;
    }
    else {
      uVar5 = (uVar5 & 0xffff) - 0x30;
    }
    if (param_3 <= uVar5) goto LAB_1000fd8c;
    uVar8 = param_4 | 8;
    if ((uVar6 < uVar3) || ((uVar3 == uVar6 && (uVar5 <= (uint)(0xffffffff % (ulonglong)param_3)))))
    {
      uVar6 = uVar6 * param_3 + uVar5;
    }
    else {
      uVar8 = param_4 | 0xc;
    }
    uVar5 = (uint)*puVar7;
    puVar7 = puVar7 + 1;
    param_4 = uVar8;
  } while( true );
}
