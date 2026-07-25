// Name: FUN_0056ed08
// Address: 0056ed08
// Address Range: [[0056ed08, 0056eed5]]
// Convention: unknown
// Signature: undefined4 FUN_0056ed08(PEXCEPTION_RECORD param_1,undefined4 param_2,PCONTEXT param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0056eda9) */

uint FUN_0056ed08(PEXCEPTION_RECORD param_1,uint param_2,PCONTEXT param_3)

{
  byte *pbVar1;
  int iVar2;
  LONG LVar3;
  int iVar4;
  _EXCEPTION_POINTERS local_14;
  
  if ((param_1->ExceptionFlags & 6) != 0) {
    return 1;
  }
  switch(param_1->ExceptionCode) {
  case 0xc000008d:
    iVar4 = 0x82;
    break;
  case 0xc000008e:
switchD_0056ed30_caseD_c000008e:
    iVar4 = 0x83;
    break;
  case 0xc000008f:
    iVar4 = 0x86;
    break;
  case 0xc0000090:
    pbVar1 = (byte *)(param_3->FloatSave).ErrorOffset;
    iVar4 = 0x81;
    if (*(short *)pbVar1 == -0x527) {
      iVar4 = 0x88;
    }
    else if (*(short *)pbVar1 == -0xe27) {
      iVar4 = 0x8e;
    }
    else {
      if (((*pbVar1 == 0xdb) || (*pbVar1 == 0xdf)) && ((pbVar1[1] & 0x30) == 0x10)) {
        iVar4 = 0x8d;
      }
      if ((((*pbVar1 & 1) == 0) && ((pbVar1[1] & 0x30) == 0x30)) &&
         ((((param_3->FloatSave).TagWord & 0xffff) >>
           ((byte)(((param_3->FloatSave).StatusWord & 0xffff) >> 0xb) & 7) * '\x02' & 1) == 1))
      goto switchD_0056ed30_caseD_c000008e;
      if (iVar4 == -1) goto switchD_0056ed30_default;
    }
    break;
  case 0xc0000091:
    iVar4 = 0x84;
    break;
  case 0xc0000092:
    if (((param_3->FloatSave).StatusWord & 0x200) == 0) {
      iVar4 = 0x8b;
    }
    else {
      iVar4 = 0x8a;
    }
    break;
  case 0xc0000093:
    iVar4 = 0x85;
    break;
  default:
switchD_0056ed30_default:
    if (DAT_005c1f70 != (code *)0x0) {
      iVar4 = 1;
      do {
        iVar2 = (*DAT_005c1f6c)(iVar4,param_1->ExceptionCode);
        if (iVar2 != 0) {
          if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 3)) break;
          DAT_02de5c24 = '\x01';
          (*DAT_005c1f70)(iVar4);
          if (DAT_02de5c24 != '\0') {
            return 0;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xd);
    }
    goto LAB_0056eeab;
  }
  DAT_02de5c24 = '\x01';
  FUN_00571500();
  iVar4 = FUN_005716d8(iVar4);
  if ((iVar4 != -1) && (DAT_02de5c24 != '\0')) {
    *(ushort *)&(param_3->FloatSave).StatusWord =
         ((ushort)(param_3->FloatSave).StatusWord >> 8 & 0x7f) << 8;
    return 0;
  }
LAB_0056eeab:
  local_14.ExceptionRecord = param_1;
  local_14.ContextRecord = param_3;
  LVar3 = UnhandledExceptionFilter(&local_14);
  if (LVar3 == 0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xffffffff);
}
