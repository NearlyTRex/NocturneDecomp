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
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  float10 fVar7;
  float10 x;
  double dVar8;
  float in_stack_fffffdd8;
  char acStack_128 [8];
  char acStack_120 [248];
  float fStack_28;
  float fStack_24;
  C3DSCamera *local_20;
  char *pcStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  local_20 = this_ptr;
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffdc4,0xff,file_handle);
  uVar2 = 0xffffffff;
  pcVar4 = &stack0xfffffdc8;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar2 - 1)) {
    (&stack0xfffffdc6)[~uVar2] = 0;
  }
  iVar3 = -1;
  pcVar4 = &stack0xfffffdc8;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar4 = &stack0xfffffdc8;
  pcVar5 = pcStack_1c;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",&this_ptr->position,&(this_ptr->position).y,
             &(this_ptr->position).z);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n",&fStack_28,&fStack_24);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)in_stack_fffffdd8);
  uVar2 = (uint)ROUND(dVar8);
  if (uVar2 < 0x2e) {
    if (uVar2 < 0x17) {
      if (9 < uVar2) {
        if (uVar2 < 0xb) {
          this_ptr->projection_scale = 200.0;
          goto LAB_00585deb;
        }
        if (uVar2 == 0xf) {
          this_ptr->projection_scale = 135.0;
          goto LAB_00585deb;
        }
      }
    }
    else {
      if (uVar2 < 0x18) {
        this_ptr->projection_scale = 85.0;
        goto LAB_00585deb;
      }
      if (0x26 < uVar2) {
        if (uVar2 < 0x28) {
          this_ptr->projection_scale = 50.0;
          goto LAB_00585deb;
        }
        if (uVar2 == 0x2d) {
          this_ptr->projection_scale = 43.456;
          goto LAB_00585deb;
        }
      }
    }
  }
  else {
    if (uVar2 < 0x2f) {
      this_ptr->projection_scale = 42.157;
      goto LAB_00585deb;
    }
    if (uVar2 < 0x49) {
      if (0x35 < uVar2) {
        if (uVar2 < 0x37) {
          this_ptr->projection_scale = 35.0;
          goto LAB_00585deb;
        }
        if (uVar2 == 0x41) {
          this_ptr->projection_scale = 28.0;
          goto LAB_00585deb;
        }
      }
    }
    else {
      if (uVar2 < 0x4a) {
        this_ptr->projection_scale = 24.0;
        goto LAB_00585deb;
      }
      if (0x52 < uVar2) {
        if (uVar2 < 0x54) {
          this_ptr->projection_scale = 20.0;
          goto LAB_00585deb;
        }
        if (uVar2 == 100) {
          this_ptr->projection_scale = 15.0;
          goto LAB_00585deb;
        }
      }
    }
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_128,"Warning! Camera %s has unknown lens : %f");
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0(acStack_120,0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
LAB_00585deb:
  fStack_28 = (float)pcStack_1c - (this_ptr->position).x;
  fStack_24 = fStack_18 - (this_ptr->position).y;
  local_20 = (C3DSCamera *)(fStack_14 - (this_ptr->position).z);
  (this_ptr->orientation).z = unaff_ESI;
  fVar7 = crt_math_c_atan2_FUN_006013b1((float10)fStack_28,(float10)(float)local_20);
  *(float *)(extraout_ECX + 0x110) = (float)fVar7;
  fVar7 = crt_math_c_atan2_FUN_006013b1((float10)fStack_28,x);
  *(float *)(extraout_ECX_00 + 0x10c) = (float)-fVar7;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(extraout_ECX_00 + 0x118),(CVector3f *)(extraout_ECX_00 + 0x10c));
  return;
}
