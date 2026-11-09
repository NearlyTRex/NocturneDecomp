// Name: shape_edittool.cpp_FUN_00482350
// Address: 00482350
// Address Range: [[00482350, 0048276a]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_FUN_00482350(CPickList *param_1)

#include "nocturne.h"

uint shape_edittool_cpp_FUN_00482350(CPickList *param_1)

{
  byte *str1;
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x1c);
  if (iVar2 != 0) {
    if (*(int *)&param_1->field_0x3bc == 1) {
      return 0xffffffff;
    }
    iVar2 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00483aa0
                      (param_1,*(int *)&param_1->field_0x194);
    if (iVar2 != 0) {
      *(uint *)&param_1->field_0x188 = 1;
      return 0;
    }
  }
  iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = (*(code *)**(uint **)0x01D02F84)(0x01D02F84,0x1d);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x52);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00481540((CStrList *)param_1);
    }
    iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x2e);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00481540((CStrList *)param_1);
    }
  }
  iVar5 = 0;
  iVar2 = (*(code *)**(uint **)0x01D02F84)(0x01D02F84,0x2a);
  if ((iVar2 == 0) &&
     (iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0xf), iVar2 != 0)) {
    iVar5 = 1;
  }
  iVar2 = (*(code *)**(uint **)0x01D02F84)(0x01D02F84,0x2a);
  if ((iVar2 != 0) &&
     (iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0xf), iVar2 != 0)) {
    iVar5 = -1;
  }
  iVar2 = 0;
  do {
    iVar6 = *(int *)&param_1->field_0x3bc + iVar5;
    *(int *)&param_1->field_0x3bc = iVar6;
    if (1 < iVar6) {
      *(uint *)&param_1->field_0x3bc = 0xffffffff;
      goto LAB_0048245a;
    }
    if (iVar6 < -1) {
      *(uint *)&param_1->field_0x3bc = 1;
LAB_00482597:
      if (param_1->field_0xc0 != '\0') {
        if (*(int *)&param_1->field_0x3bc != -1) {
          return 0;
        }
        goto LAB_0048245a;
      }
    }
    else if ((iVar6 != 0) || (param_1->field_0x5c != '\0')) {
      if (*(int *)&param_1->field_0x3bc == 1) goto LAB_00482597;
      if (*(int *)&param_1->field_0x3bc != -1) {
        return 0;
      }
      goto LAB_0048245a;
    }
    iVar2 = iVar2 + 1;
    if (9 < iVar2) {
      if (*(int *)&param_1->field_0x3bc != -1) {
        return 0;
      }
LAB_0048245a:
      str1 = &param_1->field_0x124;
      do {
        do {
          do {
            iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_0058eb40();
            if (iVar2 == 0) {
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x48);
              if (iVar2 != 0) {
                param_1->field_0x124 = 0;
                *(int *)&param_1->field_0x194 = *(int *)&param_1->field_0x194 + -1;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x50);
              if (iVar2 != 0) {
                param_1->field_0x124 = 0;
                *(int *)&param_1->field_0x194 = *(int *)&param_1->field_0x194 + 1;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x47);
              if (iVar2 != 0) {
                param_1->field_0x124 = 0;
                *(uint *)&param_1->field_0x194 = 0;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x4f);
              if (iVar2 != 0) {
                param_1->field_0x124 = 0;
                *(uint *)&param_1->field_0x194 = *(uint *)param_1;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x49);
              if (iVar2 != 0) {
                param_1->field_0x124 = 0;
                *(int *)&param_1->field_0x194 =
                     *(int *)&param_1->field_0x194 - *(int *)&param_1->field_0x19c;
                *(int *)&param_1->field_0x198 =
                     *(int *)&param_1->field_0x198 - *(int *)&param_1->field_0x19c;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x51);
              if (iVar2 != 0) {
                param_1->field_0x124 = 0;
                *(int *)&param_1->field_0x194 =
                     *(int *)&param_1->field_0x194 + *(int *)&param_1->field_0x19c;
                *(int *)&param_1->field_0x198 =
                     *(int *)&param_1->field_0x198 + *(int *)&param_1->field_0x19c;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x4b);
              if (iVar2 != 0) {
                param_1->field_0x124 = 0;
                *(int *)&param_1->field_0x194 =
                     *(int *)&param_1->field_0x194 - *(int *)&param_1->field_0x1a0;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x4d);
              if (iVar2 != 0) {
                param_1->field_0x124 = 0;
                *(int *)&param_1->field_0x194 =
                     *(int *)&param_1->field_0x194 + *(int *)&param_1->field_0x1a0;
              }
              return 0;
            }
            iVar2 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004dfea0(0x01D02F84);
            if (iVar2 == 8) {
              param_1->field_0x124 = 0;
            }
          } while (*(int *)&param_1->field_0x1b4 != 0);
          if (((&DAT_0061ed94)[(byte)((char)iVar2 + 1)] & 0xe0) != 0) {
            uVar4 = 0xffffffff;
            pcVar3 = str1;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            if (uVar4 - 1 < 99) {
              (&param_1->field_0x123)[uVar4] = (char)iVar2;
              (&param_1->field_0x124)[uVar4] = 0;
            }
          }
        } while (param_1->field_0x124 == '\0');
        pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240
                           ((CStrList *)param_1,*(int *)&param_1->field_0x194);
        iVar2 = _stricmp(str1,pcVar3);
        if (iVar2 < 1) {
          *(uint *)&param_1->field_0x194 = 0;
        }
        while (*(int *)&param_1->field_0x194 < *(int *)param_1) {
          pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240
                             ((CStrList *)param_1,*(int *)&param_1->field_0x194);
          iVar2 = _stricmp(str1,pcVar3);
          if (iVar2 < 1) break;
          *(int *)&param_1->field_0x194 = *(int *)&param_1->field_0x194 + 1;
        }
      } while( true );
    }
  } while( true );
}
