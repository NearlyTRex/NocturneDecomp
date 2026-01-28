// Name: core_ammo.cpp_CAmmo_writeDependencies_FUN_004113e0
// Address: 004113e0
// Address Range: [[004113e0, 004114de]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_writeDependencies_FUN_004113e0(CAmmo *this_ptr,FILE *file_handle)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_writeDependencies_FUN_004113e0(CAmmo *this_ptr,FILE *file_handle)

{
  int iVar1;
  char *str1;
  
  str1 = (this_ptr->model).model_name;
  iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"gatbullet.kfm");
  if (iVar1 != 0) {
    iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"holybullet.kfm");
    if (iVar1 != 0) {
      iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"woodbullet.kfm");
      if (iVar1 != 0) {
        iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"silverbullet.kfm");
        if (iVar1 != 0) {
          iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"goldbullet.kfm");
          if (iVar1 != 0) {
            iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"lithiumbullet.kfm");
            if (iVar1 != 0) {
              iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"mercurybullet.kfm");
              if (iVar1 != 0) {
                iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"shell.kfm");
                if (iVar1 != 0) {
                  iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"stake.kfm");
                  if (iVar1 != 0) {
                    iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"dynamitebundle.kfm");
                    if (iVar1 != 0) {
                      iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"tommybullet.kfm");
                      if (iVar1 != 0) {
                        core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
                                  (&this_ptr->model,file_handle);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}
