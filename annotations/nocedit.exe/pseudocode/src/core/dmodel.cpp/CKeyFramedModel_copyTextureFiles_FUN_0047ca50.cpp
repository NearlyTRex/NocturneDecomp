// Name: core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
// Address: 0047ca50
// Address Range: [[0047ca50, 0047cbb4]]
// Convention: __cdecl
// Signature: int __cdecl core_dmodel_cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50 (CKeyFramedModel *this_ptr,char *source_drive,char *source_directory, char *destination_drive,char *destination_directory)

#include "nocturne.h"

int __cdecl
core_dmodel_cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
          (CKeyFramedModel *this_ptr,char *source_drive,char *source_directory,
          char *destination_drive,char *destination_directory)

{
  int iVar1;
  char local_318 [260];
  char local_214 [260];
  char local_110 [256];
  
  crt_string_c_splitpath_FUN_005ff178
            (this_ptr->model_filename,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  crt_file_c_makepath_FUN_005febfc(local_318,source_drive,source_directory,local_110,"raw")
  ;
  crt_file_c_makepath_FUN_005febfc
            (local_214,destination_drive,destination_directory,local_110,"raw");
  iVar1 = core_dmodel_cpp_copyFile_FUN_0047c930(local_318,local_214,1);
  if (iVar1 != 0) {
    crt_file_c_makepath_FUN_005febfc
              (local_318,source_drive,source_directory,local_110,"act");
    crt_file_c_makepath_FUN_005febfc
              (local_214,destination_drive,destination_directory,local_110,"act");
    iVar1 = core_dmodel_cpp_copyFile_FUN_0047c930(local_318,local_214,1);
    if (iVar1 != 0) {
      crt_file_c_makepath_FUN_005febfc
                (local_318,source_drive,source_directory,local_110,"opa");
      crt_file_c_makepath_FUN_005febfc
                (local_214,destination_drive,destination_directory,local_110,"opa");
      iVar1 = core_dmodel_cpp_copyFile_FUN_0047c930(local_318,local_214,0);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}
