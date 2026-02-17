// Name: core_setutil.cpp_C3DSLight_import3DS_FUN_005874d0
// Address: 005874d0
// Address Range: [[005874d0, 0058754d]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_import3DS_FUN_005874d0(C3DSLight *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */

void __cdecl core_setutil_cpp_C3DSLight_import3DS_FUN_005874d0(C3DSLight *this_ptr,_FILE *file_handle)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  char local_188 [255];
  byte uStack_89;
  char acStack_88 [80];
  float fStack_38;
  float fStack_34;
  float afStack_30 [4];
  float afStack_20 [2];
  byte auStack_18 [4];
  char *local_14;
  
  bVar8 = 0;
  local_14 = this_ptr->name;
  _fgets(local_188,0xff,file_handle);
  pcVar6 = local_188;
  uVar4 = 0xffffffff;
  pcVar7 = local_188;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  } while (cVar3 != '\0');
  if (0 < (int)(~uVar4 - 1)) {
    local_188[~uVar4 - 2] = '\0';
  }
  iVar5 = -1;
  pcVar7 = local_188;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  } while (cVar3 != '\0');
  uStack_89 = 0;
  pcVar7 = local_14;
  do {
    cVar3 = *pcVar6;
    *pcVar7 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar3;
    pcVar7 = pcVar7 + 2;
  } while (cVar3 != '\0');
  _fscanf(file_handle,"%d\n",this_ptr);
  _fscanf(file_handle,"%d,%d,%d\n",&this_ptr->color,&(this_ptr->color).g,&(this_ptr->color).b
            );
  _fscanf(file_handle,"%f\n",&this_ptr->atten_start);
  _fscanf(file_handle,"%f\n",&this_ptr->atten_end);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->pos,&(this_ptr->pos).y,&(this_ptr->pos).z);
  _fscanf(file_handle,"%f,%f,%f\n",&fStack_38,&fStack_34,afStack_30);
  _fscanf(file_handle,"%f\n",afStack_20);
  _fgets(acStack_88,0x50,file_handle);
  _fscanf(file_handle,"%f\n",&this_ptr->fov);
  _fscanf(file_handle,"%f\n",auStack_18);
  _fscanf(file_handle,"%f\n",auStack_18);
  _fscanf(file_handle,"%f\n",auStack_18);
  fStack_38 = fStack_38 - (this_ptr->pos).x;
  fVar1 = (this_ptr->pos).y;
  fVar9 = (float10)afStack_30[0] - (float10)(this_ptr->pos).z;
  fVar2 = (float)fVar9;
  fVar10 = (float10)fStack_38;
  (this_ptr->orient).z = afStack_20[0];
  fVar11 = (float10)fpatan((float10)fStack_38,(float10)fVar2);
  (this_ptr->orient).y = (float)fVar11;
  fVar9 = (float10)fpatan((float10)(fStack_34 - fVar1),
                          SQRT(fVar10 * fVar10 + fVar9 * (float10)fVar2));
  (this_ptr->orient).x = (float)-fVar9;
  return;
}
