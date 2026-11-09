// Name: core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470
// Address: 00538470
// Address Range: [[00538470, 0053866c]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00538470(CZThumb *this_ptr,CVector3f *camera_pos,CVector3f *look_at_pos,int width,int height,float projection_scale,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00538470(CZThumb *this_ptr,CVector3f *camera_pos,CVector3f *look_at_pos,int width,int height,float projection_scale,_FILE *file_handle)

{
  int iVar1;
  void *pvVar2;
  int value;
  int iVar3;
  int iVar4;
  
  core_setdir_cpp_CZThumb_free_FUN_005386a0(this_ptr);
  if ((CVector3f *)&this_ptr->field_0x8 != camera_pos) {
    *(uint *)&this_ptr->field_0x8 = *(uint *)camera_pos;
    *(uint *)&this_ptr->field_0xc = *(uint *)&camera_pos->field_0x4;
    *(uint *)&this_ptr->field_0x10 = *(uint *)&camera_pos->field_0x8;
  }
  if ((CVector3f *)&this_ptr->field_0x14 != look_at_pos) {
    *(uint *)&this_ptr->field_0x14 = *(uint *)look_at_pos;
    *(uint *)&this_ptr->field_0x18 = *(uint *)&look_at_pos->field_0x4;
    *(uint *)&this_ptr->field_0x1c = *(uint *)&look_at_pos->field_0x8;
  }
  *(int *)this_ptr = width;
  *(int *)&this_ptr->field_0x4 = height;
  *(float *)&this_ptr->field_0x20 = projection_scale;
  pvVar2 = FUN_005b8580(*(int *)this_ptr * *(int *)&this_ptr->field_0x4 * 4);
  *(void **)&this_ptr->field_0x24 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x9f;
    core_main_c_FUN_004e4500("Out of memory");
  }
  if (file_handle != (_FILE *)0x0) {
    _fread(*(uint *)&this_ptr->field_0x24,*(int *)this_ptr * *(int *)&this_ptr->field_0x4,
               4,file_handle);
    return;
  }
  value = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,0);
  iVar1 = *(int *)&this_ptr->field_0x4;
  if (_DAT_020b0258 != 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x67;
    core_main_c_FUN_004e4500("saveZBufferTable - already saved!");
  }
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 4;
      *(uint *)(&DAT_020b0258 + iVar4) = *(uint *)(&DAT_01c2b64c + iVar4);
      iVar4 = iVar3;
    } while (iVar3 < iVar1 * 4);
  }
  core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00538970(this_ptr);
  core_setdir_cpp_CZThumb_pushRenderingContext_FUN_005389b0(this_ptr);
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280
            (DAT_0060b280,(CVector3i *)0x2093940);
  engine_special_cpp_clearZBufferNative_FUN_0055b254();
  core_set_cpp_FUN_0052d0e0(g_CDemonSetPtr,9999.9,0);
  core_setdir_cpp_CZThumb_popRenderingContext_FUN_00538a30(this_ptr);
  iVar1 = *(int *)&this_ptr->field_0x4;
  if (_DAT_020b0258 == 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x70;
    core_main_c_FUN_004e4500("saveZBufferTable - not saved!");
  }
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 4;
      *(uint *)(&DAT_01c2b64c + iVar4) = *(uint *)(&DAT_020b0258 + iVar4);
      iVar4 = iVar3;
    } while (iVar3 < iVar1 * 4);
  }
  _DAT_020b0258 = 0;
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,value);
  return;
}
