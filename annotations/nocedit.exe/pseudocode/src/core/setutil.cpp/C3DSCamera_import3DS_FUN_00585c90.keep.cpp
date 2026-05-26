// Name: core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90
// Address: 00585c90
// MANUAL RECONSTRUCTION
// Address Range: [[00585c90, 00585d2b]]
// NOTE: Ghidra's function end address is wrong — actual code extends to 00585feb.
// The .asm file is truncated; fscanf calls and the lens switch table are past 00585d2b.
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_import3DS_FUN_00585c90(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_import3DS_FUN_00585c90(C3DSCamera *this_ptr,_FILE *file_handle)

{
  float fVar1;
  float fVar3;
  int iVar3;
  float10 fVar7;
  float10 fVar6;
  float10 fVar8;
  uint uStack_240;
  char local_23c [255];
  char acStack_13c [256];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_1c;
  uint uStack_18;

  _fgets(local_23c,0xff,file_handle);
  iVar3 = strlen(local_23c);
  if (0 < iVar3) {
    local_23c[iVar3 - 1] = '\0';
  }
  strcpy(this_ptr->name,local_23c);
  _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->position).x,&(this_ptr->position).y,
             &(this_ptr->position).z);
  _fscanf(file_handle,"%f,%f,%f\n",&fStack_30,&fStack_2c,&fStack_28);
  _fscanf(file_handle,"%f\n",(float *)&uStack_240);
  _fscanf(file_handle,"%f\n",&fStack_1c);
  _fscanf(file_handle,"%f\n",&this_ptr->projection_scale);
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
            (acStack_13c,"Warning! Camera %s has unknown lens : %f",this_ptr->name,(double)uStack_240);
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
