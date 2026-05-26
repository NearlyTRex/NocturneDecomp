// Name: core_setutil.cpp_C3DSLight_import3DS_FUN_005874d0
// Address: 005874d0
// MANUAL RECONSTRUCTION
// Address Range: [[005874d0, 0058754d]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_import3DS_FUN_005874d0(C3DSLight *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_import3DS_FUN_005874d0(C3DSLight *this_ptr,_FILE *file_handle)

{
  float fVar3;
  int iVar5;
  float10 fVar9;
  float10 fVar10;
  float10 fVar5;
  float10 fVar11;
  char local_188 [255];
  char acStack_88 [80];
  float fStack_38;
  float fStack_34;
  float afStack_30 [4];
  float afStack_20 [2];
  byte auStack_18 [4];
  float fVar2;
  float fVar1;
  
  _fgets(local_188,0xff,file_handle);
  iVar5 = strlen(local_188);
  if (0 < iVar5) {
    local_188[iVar5 - 1] = '\0';
  }
  strcpy(this_ptr->name,local_188);
  _fscanf(file_handle,"%d\n",&this_ptr->light_type);
  _fscanf(file_handle,"%d,%d,%d\n",&(this_ptr->color).r,&(this_ptr->color).g,&(this_ptr->color).b);
  _fscanf(file_handle,"%f\n",&this_ptr->atten_start);
  _fscanf(file_handle,"%f\n",&this_ptr->atten_end);
  _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->pos).x,&(this_ptr->pos).y,&(this_ptr->pos).z);
  _fscanf(file_handle,"%f,%f,%f\n",&fStack_38,&fStack_34,(float *)afStack_30);
  _fscanf(file_handle,"%f\n",(float *)afStack_20);
  _fgets(acStack_88,0x50,file_handle);
  _fscanf(file_handle,"%f\n",&this_ptr->fov);
  _fscanf(file_handle,"%f\n",(float *)auStack_18);
  _fscanf(file_handle,"%f\n",(float *)auStack_18);
  _fscanf(file_handle,"%f\n",(float *)auStack_18);
  fVar3 = fStack_38 - (this_ptr->pos).x;
  fVar1 = (this_ptr->pos).y;
  fVar9 = (float10)afStack_30[0] - (float10)(this_ptr->pos).z;
  fVar2 = (float)fVar9;
  fVar10 = (float10)fVar3;
  (this_ptr->orient).z = afStack_20[0];
  fVar11 = (float10)fpatan((float10)fVar3,(float10)fVar2);
  (this_ptr->orient).y = (float)fVar11;
  fVar5 = (float10)fpatan((float10)(fStack_34 - fVar1),
                          SQRT(fVar10 * fVar10 + fVar9 * (float10)fVar2));
  (this_ptr->orient).x = (float)-fVar5;
  return;
}
