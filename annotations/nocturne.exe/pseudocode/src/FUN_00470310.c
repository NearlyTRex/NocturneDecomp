// Name: FUN_00470310
// Address: 00470310
// Address Range: [[00470310, 004703ef]]
// Convention: unknown
// Signature: bool FUN_00470310(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

bool FUN_00470310(uint param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  byte auStack_17c [20];
  char acStack_168 [348];
  byte *puStack_c;
  
  puStack_c = &stack0x0000000c;
  _vsprintf(0x1bcb8d0,param_2,&puStack_c);
  puStack_c = (byte *)0x0;
  FUN_00474c90(auStack_17c);
  uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("[Y]es");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(auStack_17c,uVar2);
  uVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("[N]o");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(auStack_17c,uVar2);
  pcVar3 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("yn");
  pcVar5 = acStack_168;
  do {
    cVar1 = *pcVar3;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                    (auStack_17c,0x1bcb8d0,0xffffffff);
  shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(auStack_17c,0);
  return iVar4 == 0;
}
