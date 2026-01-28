// Name: core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20
// Address: 00476f20
// Address Range: [[00476f20, 00477109]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20(CKeyFramedModel *this_ptr,FILE *file)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20(CKeyFramedModel *this_ptr,FILE *file)

{
  SIZE_T SVar1;
  int iVar2;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  SVar1 = crt_stdio_c_fread_FUN_005fd990(&local_2c,0x18,1,file);
  if (SVar1 != 1) goto LAB_00476f99;
  do {
    if ((local_2c < 3) || (4 < local_2c)) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0xed;
      core_main_c_displayErrorAndQuit_FUN_00506f10("KFM file is invalid version %d",local_2c);
    }
    local_14 = 0;
    if ((local_2c < 4) || (SVar1 = crt_stdio_c_fread_FUN_005fd990(&local_14,4,1,file), SVar1 == 1))
    {
      core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
                (this_ptr,local_28,local_24,local_20,local_1c,local_18);
      SVar1 = crt_stdio_c_fread_FUN_005fd990
                        (this_ptr->vertex_list,this_ptr->vertex_count * this_ptr->frame_count * 0xc,
                         1,file);
      if ((SVar1 == 1) &&
         ((this_ptr->poly_count < 1 ||
          ((SVar1 = crt_stdio_c_fread_FUN_005fd990
                              (this_ptr->poly_vert_list,this_ptr->poly_count * 0x48,1,file),
           SVar1 == 1 &&
           (SVar1 = crt_stdio_c_fread_FUN_005fd990
                              (this_ptr->poly_texture_index_list,this_ptr->poly_count << 2,1,file),
           SVar1 == 1)))))) {
        if (0 < this_ptr->texture_count) {
          crt_memory_c_memset_FUN_005fde40(this_ptr->texture_list,0,0x5460);
          for (iVar2 = 0; iVar2 < this_ptr->texture_count; iVar2 = iVar2 + 1) {
            SVar1 = crt_stdio_c_fread_FUN_005fd990(this_ptr->texture_list + iVar2,0x18,1,file);
            if (SVar1 != 1) goto LAB_00476f99;
          }
        }
        SVar1 = crt_stdio_c_fread_FUN_005fd990(this_ptr->part_list,this_ptr->part_count << 3,1,file)
        ;
        if (SVar1 == 1) {
          if (local_14 != 0) {
            core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(this_ptr);
            return;
          }
          return;
        }
      }
    }
LAB_00476f99:
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading keyframed model file");
  } while( true );
}
