// Name: core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_0044de20
// Address: 0044de20
// Address Range: [[0044de20, 0044e009]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_0044de20(CKeyFramedModel *this_ptr,_FILE *file)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_0044de20(CKeyFramedModel *this_ptr,_FILE *file)

{
  SIZE_T SVar1;
  int iVar2;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  SVar1 = _fread(&local_2c,0x18,1,file);
  if (SVar1 != 1) goto LAB_0044de99;
  do {
    if ((local_2c < 3) || (4 < local_2c)) {
      _DAT_01d046a0 = "..\\core\\dmodel.cpp";
      _DAT_01d046a4 = 0xed;
      core_main_c_FUN_004e4500("KFM file is invalid version %d",local_2c);
    }
    local_14 = 0;
    if ((local_2c < 4) || (SVar1 = _fread(&local_14,4,1,file), SVar1 == 1))
    {
      core_dmodel_cpp_FUN_0044ea80(this_ptr,local_28,local_24,local_20,local_1c,local_18);
      SVar1 = _fread(this_ptr->vertex_list,this_ptr->vertex_count * this_ptr->frame_count * 0xc,
                         1,file);
      if ((SVar1 == 1) &&
         ((this_ptr->poly_count < 1 ||
          ((SVar1 = _fread(this_ptr->poly_vert_list,this_ptr->poly_count * 0x48,1,file),
           SVar1 == 1 &&
           (SVar1 = _fread(this_ptr->poly_texture_index_list,this_ptr->poly_count << 2,1,file),
           SVar1 == 1)))))) {
        if (0 < this_ptr->texture_count) {
          memset(this_ptr->texture_list,0,0x120);
          for (iVar2 = 0; iVar2 < this_ptr->texture_count; iVar2 = iVar2 + 1) {
            SVar1 = _fread(this_ptr->texture_list + iVar2,0x18,1,file);
            if (SVar1 != 1) goto LAB_0044de99;
          }
        }
        SVar1 = _fread(this_ptr->part_list,this_ptr->part_count << 3,1,file)
        ;
        if (SVar1 == 1) {
          if (local_14 != 0) {
            core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_0044f760(this_ptr);
            return;
          }
          return;
        }
      }
    }
LAB_0044de99:
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0xe7;
    core_main_c_FUN_004e4500("Error reading keyframed model file");
  } while( true );
}
