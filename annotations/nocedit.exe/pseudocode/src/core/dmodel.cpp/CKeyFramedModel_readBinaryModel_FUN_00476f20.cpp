// Name: core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20
// Address: 00476f20
// Address Range: [[00476f20, 00477109]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20(CKeyFramedModel * this_ptr, FILE * file)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20(CKeyFramedModel *this_ptr,FILE *file)

{
  SIZE_T SVar1;
  FILE *pFVar2;
  FILE *pFVar3;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar4;
  FILE *size;
  FILE *vertex_count;
  char *poly_count;
  char *in_stack_ffffffd4;
  char *local_28;
  int local_24;
  uint local_20 [4];
  
  vertex_count = (FILE *)&DAT_00000001;
  size = (FILE *)0x18;
  poly_count = (char *)file;
  SVar1 = crt_stdio_c_fread_FUN_005fd990(&stack0xffffffd4,0x18,1,file);
  if (SVar1 != 1) goto LAB_00476f99;
  do {
    if (((int)local_28 < 3) || (4 < (int)local_28)) {
      poly_count = "KFM file is invalid version %d";
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0xed;
      in_stack_ffffffd4 = local_28;
      core_main_c_displayErrorAndQuit_FUN_00506f10("KFM file is invalid version %d");
    }
    local_20[0] = 0;
    if (((int)size < 4) || (SVar1 = crt_stdio_c_fread_FUN_005fd990(local_20,4,1,file), SVar1 == 1))
    {
      core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
                (this_ptr,(int)vertex_count,(int)poly_count,(int)in_stack_ffffffd4,(int)local_28,
                 local_24);
      size = file;
      pFVar2 = (FILE *)crt_stdio_c_fread_FUN_005fd990
                                 (this_ptr->vertex_list,
                                  this_ptr->vertex_count * this_ptr->frame_count * 0xc,1,file);
      if (pFVar2 == (FILE *)&DAT_00000001) {
        if (this_ptr->poly_count < 1) {
LAB_0047706d:
          if (0 < this_ptr->texture_count) {
            crt_memory_c_memset_FUN_005fde40(this_ptr->texture_list,0,0x5460);
            for (iVar4 = 0; iVar4 < this_ptr->texture_count; iVar4 = iVar4 + 1) {
              vertex_count = (FILE *)&DAT_00000001;
              size = (FILE *)0x18;
              SVar1 = crt_stdio_c_fread_FUN_005fd990(this_ptr->texture_list + iVar4,0x18,1,file);
              if (SVar1 != 1) goto LAB_00476f99;
            }
          }
          vertex_count = (FILE *)&DAT_00000001;
          size = (FILE *)(this_ptr->part_count << 3);
          SVar1 = crt_stdio_c_fread_FUN_005fd990(this_ptr->part_list,(SIZE_T)size,1,file);
          if (SVar1 == 1) {
            if (unaff_EBP != 0) {
              core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(this_ptr);
              return;
            }
            return;
          }
        }
        else {
          vertex_count = file;
          pFVar3 = (FILE *)crt_stdio_c_fread_FUN_005fd990
                                     (this_ptr->poly_vert_list,this_ptr->poly_count * 0x48,1,file);
          size = pFVar2;
          if (pFVar3 == (FILE *)&DAT_00000001) {
            size = (FILE *)(this_ptr->poly_count << 2);
            SVar1 = crt_stdio_c_fread_FUN_005fd990
                              (this_ptr->poly_texture_index_list,(SIZE_T)size,1,file);
            vertex_count = pFVar3;
            if (SVar1 == 1) goto LAB_0047706d;
          }
        }
      }
    }
LAB_00476f99:
    in_stack_ffffffd4 = "Error reading keyframed model file";
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0xe7;
    poly_count = (char *)0x476fb9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading keyframed model file");
  } while( true );
}
