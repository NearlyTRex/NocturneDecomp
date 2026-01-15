// Name: core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90
// Address: 00585c90
// Address Range: [[00585c90, 00585d2b]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90(C3DSCamera * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSCamera_import3DS_FUN_00585c90(C3DSCamera *this_ptr,FILE *file_handle)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  char *pcVar4;
  C3DSCamera *pCVar5;
  byte bVar6;
  float10 fVar7;
  float10 x;
  double dVar8;
  float fVar9;
  uint local_23c;
  char acStack_238 [252];
  char acStack_13c [3];
  byte uStack_139;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  byte auStack_24 [8];
  C3DSCamera *pCStack_1c;
  uint auStack_18 [2];
  
  bVar6 = 0;
  pCStack_1c = this_ptr;
  crt_stdio_c_fgets_FUN_005fefd0(acStack_238,0xff,file_handle);
  uVar2 = 0xffffffff;
  pcVar4 = acStack_238;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar2 - 1)) {
    acStack_238[~uVar2 - 2] = '\0';
  }
  iVar3 = -1;
  pcVar4 = acStack_238;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  uStack_139 = 0;
  pcVar4 = acStack_238;
  pCVar5 = pCStack_1c;
  do {
    cVar1 = *pcVar4;
    pCVar5->name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pCVar5->name[1] = cVar1;
    pCVar5 = (C3DSCamera *)(pCVar5->name + 2);
  } while (cVar1 != '\0');
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",&this_ptr->position,&(this_ptr->position).y,
             &(this_ptr->position).z);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n",&fStack_2c,&fStack_28,auStack_24);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",auStack_18);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",&local_23c);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",&this_ptr->projection_scale);
  fVar9 = 8.115118e-39;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)local_23c);
  auStack_18[0] = (uint)ROUND(dVar8);
  if (auStack_18[0] < 0x2e) {
    if (auStack_18[0] < 0x17) {
      if (9 < auStack_18[0]) {
        if (auStack_18[0] < 0xb) {
          this_ptr->projection_scale = 200.0;
          goto LAB_00585deb;
        }
        if (auStack_18[0] == 0xf) {
          this_ptr->projection_scale = 135.0;
          goto LAB_00585deb;
        }
      }
    }
    else {
      if (auStack_18[0] < 0x18) {
        this_ptr->projection_scale = 85.0;
        goto LAB_00585deb;
      }
      if (0x26 < auStack_18[0]) {
        if (auStack_18[0] < 0x28) {
          this_ptr->projection_scale = 50.0;
          goto LAB_00585deb;
        }
        if (auStack_18[0] == 0x2d) {
          this_ptr->projection_scale = 43.456;
          goto LAB_00585deb;
        }
      }
    }
  }
  else {
    if (auStack_18[0] < 0x2f) {
      this_ptr->projection_scale = 42.157;
      goto LAB_00585deb;
    }
    if (auStack_18[0] < 0x49) {
      if (0x35 < auStack_18[0]) {
        if (auStack_18[0] < 0x37) {
          this_ptr->projection_scale = 35.0;
          goto LAB_00585deb;
        }
        if (auStack_18[0] == 0x41) {
          this_ptr->projection_scale = 28.0;
          goto LAB_00585deb;
        }
      }
    }
    else {
      if (auStack_18[0] < 0x4a) {
        this_ptr->projection_scale = 24.0;
        goto LAB_00585deb;
      }
      if (0x52 < auStack_18[0]) {
        if (auStack_18[0] < 0x54) {
          this_ptr->projection_scale = 20.0;
          goto LAB_00585deb;
        }
        if (auStack_18[0] == 100) {
          this_ptr->projection_scale = 15.0;
          goto LAB_00585deb;
        }
      }
    }
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_13c,"Warning! Camera %s has unknown lens : %f",this_ptr,(double)fVar9);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
LAB_00585deb:
  fStack_3c = fStack_30 - (this_ptr->position).x;
  fStack_38 = fStack_2c - (this_ptr->position).y;
  fStack_34 = fStack_28 - (this_ptr->position).z;
  (this_ptr->orientation).z = (float)pCStack_1c;
  fVar7 = crt_math_c_atan2_FUN_006013b1((float10)fStack_3c,(float10)fStack_34);
  *(float *)(extraout_ECX + 0x110) = (float)fVar7;
  fVar7 = crt_math_c_atan2_FUN_006013b1((float10)fStack_3c,x);
  *(float *)(extraout_ECX_00 + 0x10c) = (float)-fVar7;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(extraout_ECX_00 + 0x118),(CVector3f *)(extraout_ECX_00 + 0x10c));
  return;
}
