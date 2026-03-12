// Name: core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90
// Address: 00585c90
// Address Range: [[00585c90, 00585d2b]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_import3DS_FUN_00585c90(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */

void __cdecl core_setutil_cpp_C3DSCamera_import3DS_FUN_00585c90(C3DSCamera *this_ptr,_FILE *file_handle)

{
  float fVar1;
  char cVar2;
  float fVar3;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  C3DSCamera *pCVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar6;
  float10 fVar8;
  uint uStack_240;
  char local_23c [255];
  char acStack_13c [256];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  C3DSCamera *local_20;
  float fStack_1c;
  uint uStack_18;
  char cVar1;
  
  bVar6 = 0;
  local_20 = this_ptr;
  _fgets(local_23c,0xff,file_handle);
  uVar2 = 0xffffffff;
  pcVar5 = local_23c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar2 - 1)) {
    local_23c[~uVar2 - 2] = '\0';
  }
  iVar3 = -1;
  pcVar5 = local_23c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar2 != '\0');
  pcVar4 = local_23c;
  pCVar5 = local_20;
  do {
    cVar2 = *pcVar4;
    pCVar5->name[0] = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pCVar5->name[1] = cVar2;
    pCVar5 = (C3DSCamera *)(pCVar5->name + 2);
  } while (cVar2 != '\0');
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->position,&(this_ptr->position).y);
  _fscanf(file_handle,"%f,%f,%f\n",&fStack_30,&fStack_2c);
  _fscanf(file_handle,"%f\n");
  _fscanf(file_handle,"%f\n");
  _fscanf(file_handle,"%f\n");
  uStack_18 = (uint)ROUND(ROUND(uStack_240));
  if (uStack_18 < 0x2e) {
    if (uStack_18 < 0x17) {
      if (9 < uStack_18) {
        if (uStack_18 < 0xb) {
          this_ptr->projection_scale = 200.0;
          goto LAB_00585deb;
        }
        if (uStack_18 == 0xf) {
          this_ptr->projection_scale = 135.0;
          goto LAB_00585deb;
        }
      }
    }
    else {
      if (uStack_18 < 0x18) {
        this_ptr->projection_scale = 85.0;
        goto LAB_00585deb;
      }
      if (0x26 < uStack_18) {
        if (uStack_18 < 0x28) {
          this_ptr->projection_scale = 50.0;
          goto LAB_00585deb;
        }
        if (uStack_18 == 0x2d) {
          this_ptr->projection_scale = 43.456;
          goto LAB_00585deb;
        }
      }
    }
  }
  else {
    if (uStack_18 < 0x2f) {
      this_ptr->projection_scale = 42.157;
      goto LAB_00585deb;
    }
    if (uStack_18 < 0x49) {
      if (0x35 < uStack_18) {
        if (uStack_18 < 0x37) {
          this_ptr->projection_scale = 35.0;
          goto LAB_00585deb;
        }
        if (uStack_18 == 0x41) {
          this_ptr->projection_scale = 28.0;
          goto LAB_00585deb;
        }
      }
    }
    else {
      if (uStack_18 < 0x4a) {
        this_ptr->projection_scale = 24.0;
        goto LAB_00585deb;
      }
      if (0x52 < uStack_18) {
        if (uStack_18 < 0x54) {
          this_ptr->projection_scale = 20.0;
          goto LAB_00585deb;
        }
        if (uStack_18 == 100) {
          this_ptr->projection_scale = 15.0;
          goto LAB_00585deb;
        }
      }
    }
  }
  _sprintf
            (acStack_13c,"Warning! Camera %s has unknown lens : %f",this_ptr,(double)uStack_240);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
LAB_00585deb:
  fVar3 = fStack_30 - (this_ptr->position).x;
  fVar1 = (this_ptr->position).y;
  fVar7 = (float10)fStack_28 - (float10)(this_ptr->position).z;
  fVar6 = (float10)fVar3;
  (this_ptr->orientation).z = fStack_1c;
  fVar8 = (float10)fpatan((float10)fVar3,(float10)(float)fVar7);
  (this_ptr->orientation).y = (float)fVar8;
  fVar6 = (float10)fpatan((float10)(fStack_2c - fVar1),
                          SQRT(fVar6 * fVar6 + fVar7 * (float10)(float)fVar7));
  (this_ptr->orientation).x = (float)-fVar6;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&this_ptr->rotation_matrix,&this_ptr->orientation);
  return;
}
