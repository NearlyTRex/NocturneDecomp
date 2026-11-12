// Name: core_setutil.cpp_C3DSLight_create_FUN_00542940
// Address: 00542940
// Address Range: [[00542940, 00542a98]]
// Convention: __cdecl
// Signature: undefined8 __cdecl core_setutil_cpp_C3DSLight_create_FUN_00542940(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __cdecl core_setutil_cpp_C3DSLight_create_FUN_00542940(int param_1)

{
  char cVar1;
  CDemonLight *this_ptr;
  uint uVar2;
  CDemonLight *this_ptr_00;
  int iVar3;
  UVector3 *pUVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  
  this_ptr = (CDemonLight *)operator_new(0x2fac);
  this_ptr_00 = (CDemonLight *)0x0;
  if (this_ptr != (CDemonLight *)0x0) {
    this_ptr_00 = core_dlight_cpp_CDemonLight_ctor_FUN_0045c180
                            (this_ptr,*(int *)(param_1 + 0x1808),*(int *)(param_1 + 0x180c));
  }
  if (this_ptr_00 == (CDemonLight *)0x0) {
    _DAT_01d71de0 = "..\\core\\setutil.cpp";
    _DAT_01d71de4 = 0x2f9;
    core_main_c_FUN_004e4330("C3DSLight::create - Out of memory!");
  }
  core_dlight_cpp_CDemonLight_init_FUN_0045c2a0(this_ptr_00);
  if (*(int *)(param_1 + 0x11ec) < 1) {
    this_ptr_00->shadow_bounds_mode = SHADOW_BOUNDS_CIRCULAR;
  }
  else {
    this_ptr_00->shadow_bounds_mode = *(EShadowBoundsMode *)(param_1 + 0x11f0);
  }
  pUVar4 = &(this_ptr_00->base).base.position;
  if (pUVar4 != (UVector3 *)(param_1 + 0x104)) {
    (pUVar4->f).x = *(float *)(param_1 + 0x104);
    (this_ptr_00->base).base.position.f.y = *(float *)(param_1 + 0x108);
    (this_ptr_00->base).base.position.f.z = *(float *)(param_1 + 0x10c);
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
            (&(this_ptr_00->base).base.rotation_matrix,(CVector3f *)(param_1 + 0x110));
  (this_ptr_00->base).base.focal_length = *(float *)(param_1 + 0x11c);
  iVar3 = *(int *)(param_1 + 0x11ec);
  iVar6 = 0;
  if (0 < iVar3) {
    iVar8 = param_1 + 0x11f4;
    iVar5 = param_1;
    do {
      iVar6 = iVar6 + 1;
      uVar2 = core_dfilter_cpp_FUN_00459710
                        (g_CFilterCachePtr,iVar8,*(uint *)(param_1 + 0x11f0));
      *(uint *)(iVar5 + 0x1810) = uVar2;
      iVar8 = iVar8 + 0x28;
      iVar3 = *(int *)(param_1 + 0x11ec);
      iVar5 = iVar5 + 4;
    } while (iVar6 < iVar3);
  }
  pcVar7 = (char *)(param_1 + 4);
  pcVar9 = (this_ptr_00->base).camera_name;
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  return CONCAT44(iVar3,this_ptr_00);
}
