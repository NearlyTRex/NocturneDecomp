// Name: core_fldnotes.cpp_SPageResource_setLink_FUN_004ba790
// Address: 004ba790
// Address Range: [[004ba790, 004ba823]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SPageResource_setLink_FUN_004ba790(SPageResource *this_ptr,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_SPageResource_setLink_FUN_004ba790(SPageResource *this_ptr,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (this_ptr->link == (char *)0x0) {
    if (param_2 == (char *)0x0) {
      return;
    }
  }
  else {
    FUN_005c09f0(this_ptr->link);
    this_ptr->link = (char *)0x0;
    if (param_2 == (char *)0x0) {
      return;
    }
  }
  uVar3 = 0xffffffff;
  pcVar2 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)malloc(~uVar3);
  this_ptr->link = pcVar2;
  if (pcVar2 == (char *)0x0) {
    _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
    _DAT_01d1d404 = 0x370;
    core_main_c_FUN_005030e0("Out of memory");
  }
  pcVar2 = this_ptr->link;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
