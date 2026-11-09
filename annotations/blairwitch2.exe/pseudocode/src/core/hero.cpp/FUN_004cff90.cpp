// Name: core_hero.cpp_FUN_004cff90
// Address: 004cff90
// Address Range: [[004cff90, 004d006a]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004cff90(int param_1,int param_2)

#include "nocturne.h"

void core_hero_cpp_FUN_004cff90(int param_1,int param_2)

{
  char *str1;
  int iVar1;
  
  str1 = *(char **)(param_1 + param_2 * 0x78 + 0x2620);
  if (str1 != (char *)0x0) {
    iVar1 = _strcmp(str1,"?63Ravinammo01" + 1);
    if (iVar1 == 0) {
      core_event_cpp_FUN_00490f80(0x01C38BC0,"searchedravine",1);
    }
    iVar1 = _strcmp(str1,"63Ravinammo02");
    if (iVar1 == 0) {
      core_event_cpp_FUN_00490f80(0x01C38BC0,"searchedravine",1);
    }
    iVar1 = _strcmp(str1,"63Ravinfood01");
    if (iVar1 == 0) {
      core_event_cpp_FUN_00490f80(0x01C38BC0,"searchedravine",1);
    }
    core_inv_cpp_FUN_004dadb0(param_1 + 0x2437c,str1,1,0);
    *(uint *)(param_1 + 0x2620 + param_2 * 0x78) = 0;
  }
  return;
}
