// Name: core_script.cpp_CCmdParse_FUN_00562620
// Address: 00562620
// Address Range: [[00562620, 005626c4]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParse_FUN_00562620(CCmdParse *this_ptr,int param_2)

#include "nocturne.h"

int __cdecl core_script_cpp_CCmdParse_FUN_00562620(CCmdParse *this_ptr,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  CCmdParse *pCVar5;
  int iVar6;
  CCmdParse *pCVar7;
  
  uVar2 = 0xffffffff;
  pCVar5 = this_ptr + 1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    piVar1 = &pCVar5->unk;
    pCVar5 = (CCmdParse *)((int)&pCVar5->unk + 1);
  } while ((char)*piVar1 != '\0');
  uVar3 = 0xffffffff;
  pCVar5 = this_ptr + 0x1a;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    piVar1 = &pCVar5->unk;
    pCVar5 = (CCmdParse *)((int)&pCVar5->unk + 1);
  } while ((char)*piVar1 != '\0');
  iVar4 = ~uVar2 + (~uVar3 - 2);
  iVar6 = 0;
  if (0 < this_ptr[0x33].unk) {
    pCVar5 = this_ptr + 0x34;
    do {
      uVar2 = 0xffffffff;
      pCVar7 = pCVar5;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        piVar1 = &pCVar7->unk;
        pCVar7 = (CCmdParse *)((int)&pCVar7->unk + 1);
      } while ((char)*piVar1 != '\0');
      iVar4 = iVar4 + (~uVar2 - 1);
      if (param_2 < iVar4) goto LAB_00562676;
      uVar2 = 0xffffffff;
      pCVar7 = pCVar5 + 0x19;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        piVar1 = &pCVar7->unk;
        pCVar7 = (CCmdParse *)((int)&pCVar7->unk + 1);
      } while ((char)*piVar1 != '\0');
      iVar4 = iVar4 + (~uVar2 - 1);
      if (param_2 <= iVar4) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      pCVar5 = pCVar5 + 0xca;
    } while (iVar6 < this_ptr[0x33].unk);
  }
  if (iVar4 + 1 < param_2) {
LAB_00562676:
    iVar4 = -1;
  }
  else {
    iVar4 = this_ptr[0x33].unk + -1;
  }
  return iVar4;
}
