// Name: shape_edittool.cpp_CPickList_handleInput_FUN_00474ea0
// Address: 00474ea0
// Address Range: [[00474ea0, 00475229]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_CPickList_handleInput_FUN_00474ea0(int *param_1)

#include "nocturne.h"

uint shape_edittool_cpp_CPickList_handleInput_FUN_00474ea0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  char cStack_14;
  
  bVar9 = 0;
  iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x1c);
  if ((iVar3 != 0) &&
     (iVar3 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040(param_1,param_1[0x46]),
     iVar3 != 0)) {
LAB_0047509f:
    param_1[0x43] = 1;
    return 0;
  }
  iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,1);
  if (iVar3 != 0) {
    return 0xffffffff;
  }
  iVar3 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d);
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x52);
    if (iVar3 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(param_1);
    }
    iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x2e);
    if (iVar3 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(param_1);
    }
  }
  piVar1 = param_1 + 0x2a;
  do {
    do {
      while( true ) {
        iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70();
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x48);
          if (iVar3 != 0) {
            *(byte *)(param_1 + 0x2a) = 0;
            param_1[0x46] = param_1[0x46] + -1;
          }
          iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x50);
          if (iVar3 != 0) {
            *(byte *)(param_1 + 0x2a) = 0;
            param_1[0x46] = param_1[0x46] + 1;
          }
          iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x47);
          if (iVar3 != 0) {
            *(byte *)(param_1 + 0x2a) = 0;
            param_1[0x46] = 0;
          }
          iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x4f);
          if (iVar3 != 0) {
            *(byte *)(param_1 + 0x2a) = 0;
            param_1[0x46] = *param_1;
          }
          iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x49);
          if (iVar3 != 0) {
            *(byte *)(param_1 + 0x2a) = 0;
            param_1[0x46] = param_1[0x46] - param_1[0x48];
            param_1[0x47] = param_1[0x47] - param_1[0x48];
          }
          iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x51);
          if (iVar3 != 0) {
            *(byte *)(param_1 + 0x2a) = 0;
            param_1[0x46] = param_1[0x46] + param_1[0x48];
            param_1[0x47] = param_1[0x47] + param_1[0x48];
          }
          iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x4b);
          if (iVar3 != 0) {
            *(byte *)(param_1 + 0x2a) = 0;
            param_1[0x46] = param_1[0x46] - param_1[0x49];
          }
          iVar3 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x4d);
          if (iVar3 != 0) {
            *(byte *)(param_1 + 0x2a) = 0;
            param_1[0x46] = param_1[0x46] + param_1[0x49];
          }
          return 0;
        }
        iVar3 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(0x01CC30E4);
        if (iVar3 == 8) {
          *(byte *)(param_1 + 0x2a) = 0;
        }
        cVar2 = (char)param_1[5];
        if (cVar2 == '\0') break;
        piVar7 = param_1;
        for (iVar8 = 0; (cVar2 != '\0' && (iVar8 < *param_1)); iVar8 = iVar8 + 1) {
          iVar5 = toupper((char)piVar7[5]);
          if (iVar5 == iVar3) {
            param_1[0x46] = iVar8;
            shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(param_1);
            iVar5 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040(param_1,param_1[0x46]);
            if (iVar5 != 0) goto LAB_0047509f;
          }
          cVar2 = *(char *)((int)piVar7 + 0x15);
          piVar7 = (int *)((int)piVar7 + 1);
        }
      }
      cStack_14 = (char)iVar3;
      if (((&DAT_005c168c)[(byte)(cStack_14 + 1)] & 0xe0) != 0) {
        uVar6 = 0xffffffff;
        piVar7 = piVar1;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          iVar3 = *piVar7;
          piVar7 = (int *)((int)piVar7 + (uint)bVar9 * -2 + 1);
        } while ((char)iVar3 != '\0');
        uVar6 = ~uVar6;
        if (uVar6 - 1 < 99) {
          *(char *)((int)param_1 + uVar6 + 0xa7) = cStack_14;
          *(byte *)(uVar6 + 0xa8 + (int)param_1) = 0;
        }
      }
    } while ((char)param_1[0x2a] == '\0');
    uVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(param_1,param_1[0x46]);
    iVar3 = _stricmp(piVar1,uVar4);
    if (iVar3 < 1) {
      param_1[0x46] = 0;
    }
    while (param_1[0x46] < *param_1) {
      uVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(param_1,param_1[0x46]);
      iVar3 = _stricmp(piVar1,uVar4);
      if (iVar3 < 1) break;
      param_1[0x46] = param_1[0x46] + 1;
    }
  } while( true );
}
