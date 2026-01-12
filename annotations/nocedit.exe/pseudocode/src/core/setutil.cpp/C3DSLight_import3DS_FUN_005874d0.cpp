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
  float fVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  float10 fVar9;
  float10 x;
  float unaff_retaddr;
  float fStack0000000c;
  float in_stack_00000010;
  char acStack_6c [88];
  char *local_14;
  
  bVar8 = 0;
  local_14 = this_ptr->name;
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe78,0xff,file_handle);
  uVar3 = 0xffffffff;
  pcVar6 = &stack0xfffffe78;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar3 - 1)) {
    (&stack0xfffffe76)[~uVar3] = 0;
  }
  iVar4 = -1;
  pcVar6 = &stack0xfffffe78;
  do {
    pcVar5 = &stack0xfffffe78;
    pcVar7 = local_14;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar6;
    pcVar5 = &stack0xfffffe78;
    pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar7[1] = cVar1;
    pcVar5 = pcVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",this_ptr);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%d,%d,%d\n",&this_ptr->color,&(this_ptr->color).g);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fgets_FUN_005fefd0(acStack_6c,0x50,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  fVar2 = unaff_ESI - (this_ptr->pos).x;
  fStack0000000c = unaff_retaddr - (this_ptr->pos).z;
  (this_ptr->orient).z = in_stack_00000010;
  fVar9 = crt_math_c_atan2_FUN_006013b1((float10)fVar2,(float10)fStack0000000c);
  (this_ptr->orient).y = (float)fVar9;
  fVar9 = crt_math_c_atan2_FUN_006013b1((float10)fVar2,x);
  (this_ptr->orient).x = (float)-fVar9;
  return;
}
