// Name: FUN_0050d220
// Address: 0050d220
// Address Range: [[0050d220, 0050d46a]]
// Convention: unknown
// Signature: char * FUN_0050d220(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_0050d220(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _DAT_01d1ee90 = *(uint *)(0x01CCF390 + 0xd0);
  pcVar3 = (char *)0x0;
  if (param_1 == 599) {
    pcVar3 = (char *)FUN_00531090("(none)");
  }
  if (param_1 == 0x255) {
    pcVar3 = (char *)FUN_00531090("Mouse X-Axis");
  }
  if (param_1 == 0x256) {
    pcVar3 = (char *)FUN_00531090("Mouse Y-Axis");
  }
  if (param_1 == 0x200) {
    pcVar3 = (char *)FUN_00531090("Mouse B1");
  }
  if (param_1 == 0x201) {
    pcVar3 = (char *)FUN_00531090("Mouse B2");
  }
  if (param_1 == 0x20c) {
    pcVar3 = (char *)FUN_00531090("Mouse B3");
  }
  if (param_1 == 0x202) {
    pcVar3 = (char *)FUN_00531090("Button 1");
  }
  if (param_1 == 0x203) {
    pcVar3 = (char *)FUN_00531090("Button 2");
  }
  if (param_1 == 0x204) {
    pcVar3 = (char *)FUN_00531090("Button 3");
  }
  if (param_1 == 0x205) {
    pcVar3 = (char *)FUN_00531090("Button 4");
  }
  if (param_1 == 0x206) {
    pcVar3 = (char *)FUN_00531090("Button 5");
  }
  if (param_1 == 0x207) {
    pcVar3 = (char *)FUN_00531090("Button 6");
  }
  if (param_1 == 0x208) {
    pcVar3 = (char *)FUN_00531090("Button 7");
  }
  if (param_1 == 0x209) {
    pcVar3 = (char *)FUN_00531090("Button 8");
  }
  if (param_1 == 0x20a) {
    pcVar3 = (char *)FUN_00531090("Button 9");
  }
  if (param_1 == 0x20b) {
    pcVar3 = (char *)FUN_00531090("Button 10");
  }
  if (param_1 == 0x251) {
    pcVar3 = (char *)FUN_00531090("Gamepad left");
  }
  if (param_1 == 0x252) {
    pcVar3 = (char *)FUN_00531090("Gamepad right");
  }
  if (param_1 == 0x253) {
    pcVar3 = (char *)FUN_00531090("Gamepad forward");
  }
  if (param_1 == 0x254) {
    pcVar3 = (char *)FUN_00531090("Gamepad back");
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)FUN_005b30e0(param_1);
  }
  pcVar2 = (char *)(_DAT_01d219e0 * 0x100 + 0x1d219e8);
  pcVar4 = pcVar2;
  _DAT_01d219e0 = (_DAT_01d219e0 + 1) % 10;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return pcVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return pcVar2;
}
