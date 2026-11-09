// Name: core_setutil.cpp_C3DSLight_create_FUN_0053b6b0
// Address: 0053b6b0
// Address Range: [[0053b6b0, 0053b808]]
// Convention: __cdecl
// Signature: undefined8 __cdecl core_setutil_cpp_C3DSLight_create_FUN_0053b6b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __cdecl core_setutil_cpp_C3DSLight_create_FUN_0053b6b0(int param_1)

{
  char cVar1;
  CDemonLight *this_ptr;
  uint uVar2;
  CDemonLight *this_ptr_00;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  
  this_ptr = (CDemonLight *)FUN_005b8be2(0x2fb0);
  this_ptr_00 = (CDemonLight *)0x0;
  if (this_ptr != (CDemonLight *)0x0) {
    this_ptr_00 = core_dlight_cpp_CDemonLight_ctor_FUN_00449c70
                            (this_ptr,*(int *)(param_1 + 0x1808),*(int *)(param_1 + 0x180c));
  }
  if (this_ptr_00 == (CDemonLight *)0x0) {
    _DAT_01d046a0 = "..\\core\\setutil.cpp";
    _DAT_01d046a4 = 0x2f9;
    core_main_c_FUN_004e4500("C3DSLight::create - Out of memory!");
  }
  core_dlight_cpp_CDemonLight_init_FUN_00449d90(this_ptr_00);
  if (*(int *)(param_1 + 0x11ec) < 1) {
    *(uint *)&this_ptr_00->field_0x1cb8 = 1;
  }
  else {
    *(uint *)&this_ptr_00->field_0x1cb8 = *(uint *)(param_1 + 0x11f0);
  }
  if ((uint *)&this_ptr_00->field_0x4 != (uint *)(param_1 + 0x104)) {
    *(uint *)&this_ptr_00->field_0x4 = *(uint *)(param_1 + 0x104);
    *(uint *)&this_ptr_00->field_0x8 = *(uint *)(param_1 + 0x108);
    *(uint *)&this_ptr_00->field_0xc = *(uint *)(param_1 + 0x10c);
  }
  core_dirmat_cpp_FUN_00449280
            ((CMatrix3x3f *)&this_ptr_00->field_0x10,(CVector3f *)(param_1 + 0x110));
  *(uint *)&this_ptr_00->field_0x38 = *(uint *)(param_1 + 0x11c);
  iVar3 = *(int *)(param_1 + 0x11ec);
  iVar5 = 0;
  if (0 < iVar3) {
    iVar7 = param_1 + 0x11f4;
    iVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      uVar2 = core_dfilter_cpp_FUN_00447660
                        (g_CFilterCachePtr,iVar7,*(uint *)(param_1 + 0x11f0));
      *(uint *)(iVar4 + 0x1810) = uVar2;
      iVar7 = iVar7 + 0x28;
      iVar3 = *(int *)(param_1 + 0x11ec);
      iVar4 = iVar4 + 4;
    } while (iVar5 < iVar3);
  }
  pcVar6 = (char *)(param_1 + 4);
  pcVar8 = &this_ptr_00->field_0x40;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  return CONCAT44(iVar3,this_ptr_00);
}
