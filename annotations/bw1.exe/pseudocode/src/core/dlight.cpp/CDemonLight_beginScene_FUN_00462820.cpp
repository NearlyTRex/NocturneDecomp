// Name: core_dlight.cpp_CDemonLight_beginScene_FUN_00462820
// Address: 00462820
// Address Range: [[00462820, 00462a08]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(CDemonLight *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(CDemonLight *this_ptr,int skip_clear_buffers)

{
  longlong lVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  CDemonLight *pCVar3;
  
  if (*(int *)&this_ptr->field_0x11e4 != 0) {
    _DAT_01d1d400 = "..\\core\\dlight.cpp";
    _DAT_01d1d404 = 0xf3;
    core_main_c_FUN_005030e0("CDemonLight::beginScene - Scene already open");
  }
  *(uint *)&this_ptr->field_0x11e4 = 1;
  core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044ce60
            ((CDemonCamera *)this_ptr,skip_clear_buffers);
  engine_matrix_c_FUN_00483c10
            (DAT_00612560,0,0,*(int *)&this_ptr->field_0x1cc0 + -1,
             *(int *)&this_ptr->field_0x1cc4 + -1);
  *(int *)&this_ptr->field_0x11dc = *(int *)&this_ptr->field_0x1cc0 + -1;
  *(uint *)&this_ptr->field_0x11d4 = 0;
  *(int *)&this_ptr->field_0x11e0 = *(int *)&this_ptr->field_0x1cc4 + -1;
  *(uint *)&this_ptr->field_0x11d8 = 0;
  this_ptr_00 = DAT_00612560;
  *(uint *)&this_ptr->field_0x1d0 = 0;
  *(int *)&this_ptr->field_0x168 = skip_clear_buffers;
  engine_drender_cpp_FUN_004834b0(this_ptr_00,(CVector3f *)&this_ptr->field_0x4);
  engine_matrix_c_FUN_004839b0(DAT_00612560,*(uint *)&this_ptr->field_0x38);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
            (DAT_00612560,(CMatrix3x3f *)&this_ptr->field_0x10);
  lVar1 = (longlong)*(int *)&this_ptr->field_0x2fa4 * (longlong)(int)_DAT_01c51d60;
  _DAT_01c51d60 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)&this_ptr->field_0x2fa4 * (longlong)(int)_DAT_01c51d6c;
  _DAT_01c51d6c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)&this_ptr->field_0x2fa4 * (longlong)(int)_DAT_01c51d78;
  _DAT_01c51d78 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (skip_clear_buffers == 0) {
    _memset
              (*(int *)&this_ptr->field_0x1cc0 * *(int *)&this_ptr->field_0x1cc4 * 2);
  }
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x1cc4) {
    do {
      *(uint *)&pCVar3->field_0x1cd4 = *(uint *)(&DAT_01c4354c + iVar2 * 4);
      *(int *)(&DAT_01c4354c + iVar2 * 4) =
           *(int *)&this_ptr->field_0x1cc0 * iVar2 * 2 + *(int *)&this_ptr->field_0x2f94;
      iVar2 = iVar2 + 1;
      pCVar3 = (CDemonLight *)&pCVar3->field_0x4;
    } while (iVar2 < *(int *)&this_ptr->field_0x1cc4);
  }
  core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90((CDemonCamera *)this_ptr);
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(DAT_00612560,1);
  if (skip_clear_buffers == 0) {
    _DAT_01bc0cd0 = skip_clear_buffers;
    return;
  }
  _DAT_01bc0cd0 = 0x8000;
  return;
}
