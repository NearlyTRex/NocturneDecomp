// Name: core_ammo.cpp_CAmmo_addFilesToExtract_FUN_004113e0
// Address: 004113e0
// Address Range: [[004113e0, 004114de]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_addFilesToExtract_FUN_004113e0(CAmmo *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_addFilesToExtract_FUN_004113e0(CAmmo *this_ptr,_FILE *file_handle)

{
  int iVar1;
  char *str1;
  
  str1 = (this_ptr->model).model_name;
  iVar1 = _strcmp(str1,"gatbullet.kfm");
  if (iVar1 != 0) {
    iVar1 = _strcmp(str1,"holybullet.kfm");
    if (iVar1 != 0) {
      iVar1 = _strcmp(str1,"woodbullet.kfm");
      if (iVar1 != 0) {
        iVar1 = _strcmp(str1,"silverbullet.kfm");
        if (iVar1 != 0) {
          iVar1 = _strcmp(str1,"goldbullet.kfm");
          if (iVar1 != 0) {
            iVar1 = _strcmp(str1,"lithiumbullet.kfm");
            if (iVar1 != 0) {
              iVar1 = _strcmp(str1,"mercurybullet.kfm");
              if (iVar1 != 0) {
                iVar1 = _strcmp(str1,"shell.kfm");
                if (iVar1 != 0) {
                  iVar1 = _strcmp(str1,"stake.kfm");
                  if (iVar1 != 0) {
                    iVar1 = _strcmp(str1,"dynamitebundle.kfm");
                    if (iVar1 != 0) {
                      iVar1 = _strcmp(str1,"tommybullet.kfm");
                      if (iVar1 != 0) {
                        core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
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
