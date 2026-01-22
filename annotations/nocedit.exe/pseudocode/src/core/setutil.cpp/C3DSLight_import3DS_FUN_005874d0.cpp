// Name: core_setutil.cpp_C3DSLight_import3DS_FUN_005874d0
// Address: 005874d0
// Address Range: [[005874d0, 0058754d]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_import3DS_FUN_005874d0(C3DSLight * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSLight_import3DS_FUN_005874d0(C3DSLight *this_ptr,FILE *file_handle)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  char local_188 [255];
  byte uStack_89;
  char acStack_88 [80];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float afStack_20 [2];
  byte auStack_18 [4];
  char *local_14;
  
  bVar6 = 0;
  local_14 = this_ptr->name;
  crt_stdio_c_fgets_FUN_005fefd0(local_188,0xff,file_handle);
  pcVar4 = local_188;
  uVar2 = 0xffffffff;
  pcVar5 = local_188;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar2 - 1)) {
    local_188[~uVar2 - 2] = '\0';
  }
  iVar3 = -1;
  pcVar5 = local_188;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  uStack_89 = 0;
  pcVar5 = local_14;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",this_ptr);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%d,%d,%d\n",&this_ptr->color,&(this_ptr->color).g,&(this_ptr->color).b
            );
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",&this_ptr->atten_start);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",&this_ptr->atten_end);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",&this_ptr->pos,&(this_ptr->pos).y,&(this_ptr->pos).z);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n",&fStack_38,&fStack_34,&fStack_30);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",afStack_20);
  crt_stdio_c_fgets_FUN_005fefd0(acStack_88,0x50,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",&this_ptr->fov);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",auStack_18);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",auStack_18);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",auStack_18);
  fStack_2c = fStack_38 - (this_ptr->pos).x;
  fStack_28 = fStack_34 - (this_ptr->pos).y;
  fStack_24 = fStack_30 - (this_ptr->pos).z;
  (this_ptr->orient).z = afStack_20[0];
  fVar7 = (float10)fStack_24;
  fVar8 = crt_math_c_atan2_FUN_006013b1((float10)fStack_2c,fVar7);
  (this_ptr->orient).y = (float)fVar8;
  fVar7 = crt_math_c_atan2_FUN_006013b1((float10)fStack_2c,fVar7);
  (this_ptr->orient).x = (float)-fVar7;
  return;
}
