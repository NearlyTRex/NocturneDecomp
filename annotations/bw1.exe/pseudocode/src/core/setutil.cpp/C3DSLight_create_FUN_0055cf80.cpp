// Name: core_setutil.cpp_C3DSLight_create_FUN_0055cf80
// Address: 0055cf80
// Address Range: [[0055cf80, 0055d0d8]]
// Convention: __cdecl
// Signature: undefined8 __cdecl core_setutil_cpp_C3DSLight_create_FUN_0055cf80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __cdecl core_setutil_cpp_C3DSLight_create_FUN_0055cf80(int param_1)

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
  
  this_ptr = (CDemonLight *)FUN_005c0f32(0x2fac);
  this_ptr_00 = (CDemonLight *)0x0;
  if (this_ptr != (CDemonLight *)0x0) {
    this_ptr_00 = core_dlight_cpp_CDemonLight_ctor_FUN_00462470
                            (this_ptr,*(int *)(param_1 + 0x1808),*(int *)(param_1 + 0x180c));
  }
  if (this_ptr_00 == (CDemonLight *)0x0) {
    _DAT_01d1d400 = "..\\core\\setutil.cpp";
    _DAT_01d1d404 = 0x2f9;
    core_main_c_FUN_005030e0("C3DSLight::create - Out of memory!");
  }
  core_dlight_cpp_CDemonLight_init_FUN_00462590(this_ptr_00);
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
  core_dirmat_cpp_FUN_0045f3e0
            ((CMatrix3x3f *)&this_ptr_00->field_0x10,(CVector3f *)(param_1 + 0x110));
  *(uint *)&this_ptr_00->field_0x38 = *(uint *)(param_1 + 0x11c);
  iVar3 = *(int *)(param_1 + 0x11ec);
  iVar5 = 0;
  if (0 < iVar3) {
    iVar7 = param_1 + 0x11f4;
    iVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      uVar2 = core_dfilter_cpp_FUN_0045d7c0
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
