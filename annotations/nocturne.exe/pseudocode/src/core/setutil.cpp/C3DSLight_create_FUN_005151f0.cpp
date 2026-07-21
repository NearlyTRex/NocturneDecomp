// Name: core_setutil.cpp_C3DSLight_create_FUN_005151f0
// Address: 005151f0
// Address Range: [[005151f0, 00515344]]
// Convention: __cdecl
// Signature: char * __cdecl core_setutil_cpp_C3DSLight_create_FUN_005151f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_setutil_cpp_C3DSLight_create_FUN_005151f0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  
  iVar2 = FUN_0056497c(0x2fac);
  pcVar4 = (char *)0x0;
  if (iVar2 != 0) {
    pcVar4 = (char *)core_dlight_cpp_CDemonLight_ctor_FUN_0044e110
                               (iVar2,*(uint *)(param_1 + 0x1808),
                                *(uint *)(param_1 + 0x180c));
  }
  if (pcVar4 == (char *)0x0) {
    _DAT_01cc4800 = "..\\core\\setutil.cpp";
    _DAT_01cc4804 = 0x2c6;
    FUN_004c8440("C3DSLight::create - Out of memory!");
  }
  core_dlight_cpp_CDemonLight_init_FUN_0044e1e0(pcVar4);
  if (*(int *)(param_1 + 0x11ec) < 1) {
    pcVar4[0x1cb8] = '\x01';
    pcVar4[0x1cb9] = '\0';
    pcVar4[0x1cba] = '\0';
    pcVar4[0x1cbb] = '\0';
  }
  else {
    *(uint *)(pcVar4 + 0x1cb8) = *(uint *)(param_1 + 0x11f0);
  }
  if (pcVar4 + 0x104 != (char *)(param_1 + 0x104)) {
    *(uint *)(pcVar4 + 0x104) = *(uint *)(param_1 + 0x104);
    *(uint *)(pcVar4 + 0x108) = *(uint *)(param_1 + 0x108);
    *(uint *)(pcVar4 + 0x10c) = *(uint *)(param_1 + 0x10c);
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(pcVar4 + 0x110,param_1 + 0x110);
  *(uint *)(pcVar4 + 0x138) = *(uint *)(param_1 + 0x11c);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x11ec)) {
    iVar5 = param_1 + 0x11f4;
    iVar7 = param_1;
    do {
      iVar2 = iVar2 + 1;
      uVar3 = core_dfilter_cpp_CFilterCache_getFilter_FUN_0044bd20
                        (0x014B8DE8,iVar5,*(uint *)(param_1 + 0x11f0));
      *(uint *)(iVar7 + 0x1810) = uVar3;
      iVar5 = iVar5 + 0x28;
      iVar7 = iVar7 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x11ec));
  }
  pcVar6 = (char *)(param_1 + 4);
  pcVar8 = pcVar4;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') {
      return pcVar4;
    }
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  return pcVar4;
}
