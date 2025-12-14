// Name: core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
// Address: 0047ca50
// Address Range: [[0047ca50, 0047cbb4]]
// Convention: __cdecl
// Signature: int core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50(CKeyFramedModel * this_ptr, char * source_drive, char * source_directory, char * destination_drive, char * destination_directory)

#include "nocturne.h"

int __cdecl
core_dmodel_cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
          (CKeyFramedModel *this_ptr,char *source_drive,char *source_directory,
          char *destination_drive,char *destination_directory)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char acStack_2f4 [232];
  char acStack_20c [4];
  char acStack_208 [8];
  char acStack_200 [4];
  char acStack_1fc [8];
  char acStack_1f4 [4];
  char acStack_1f0 [224];
  char local_110 [4];
  char acStack_10c [4];
  char acStack_108 [8];
  char acStack_100 [4];
  char acStack_fc [8];
  char acStack_f4 [4];
  char acStack_f0 [224];
  
  crt_string_c_splitpath_FUN_005ff178
            (this_ptr->model_filename,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  crt_file_c_makepath_FUN_005febfc
            (&stack0xfffffcec,source_drive,source_directory,acStack_10c,"raw");
  crt_file_c_makepath_FUN_005febfc
            (acStack_20c,destination_drive,destination_directory,acStack_108,"raw");
  iVar1 = core_dmodel_cpp_copyFile_FUN_0047c930(&stack0xfffffcf4,acStack_208,1);
  if (iVar1 != 0) {
    crt_file_c_makepath_FUN_005febfc
              (&stack0xfffffcf8,source_drive,source_directory,acStack_100,"act");
    crt_file_c_makepath_FUN_005febfc
              (acStack_200,destination_drive,destination_directory,acStack_fc,"act");
    iVar1 = core_dmodel_cpp_copyFile_FUN_0047c930(&stack0xfffffd00,acStack_1fc,1);
    if (iVar1 != 0) {
      crt_file_c_makepath_FUN_005febfc
                (&stack0xfffffd04,source_drive,source_directory,acStack_f4,"opa");
      crt_file_c_makepath_FUN_005febfc
                (acStack_1f4,destination_drive,destination_directory,acStack_f0,"opa");
      iVar1 = core_dmodel_cpp_copyFile_FUN_0047c930(acStack_2f4,acStack_1f0,0);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}
