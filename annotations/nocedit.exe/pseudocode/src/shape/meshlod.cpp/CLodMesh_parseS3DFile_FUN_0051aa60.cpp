// Name: shape_meshlod.cpp_CLodMesh_parseS3DFile_FUN_0051aa60
// Address: 0051aa60
// Address Range: [[0051aa60, 0051ad52]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_parseS3DFile_FUN_0051aa60(CLodMesh *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_parseS3DFile_FUN_0051aa60(CLodMesh *this_ptr,_FILE *file_handle)

{
  int iVar1;
  CLodFace *pCVar2;
  CLodVert *pCVar3;
  int iVar4;
  char local_234 [260];
  char local_130 [256];
  int local_30;
  int local_2c;
  byte local_28 [4];
  int local_24;
  byte local_20 [4];
  byte local_1c [4];
  int local_18;
  int local_14;
  
  iVar4 = 1;
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = _fscanf(file_handle,"%d\n",&local_30);
  if (iVar4 == 1) goto LAB_0051aad4;
LAB_0051aab1:
  do {
    do {
      g_CurrentFilename = "..\\shape\\meshlod.cpp";
      g_CurrentLineNumber = 0x1080;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Corruption in S3D detected!");
LAB_0051aad4:
      if ((local_30 < 0x66) || (0x67 < local_30)) {
        g_CurrentFilename = "..\\shape\\meshlod.cpp";
        g_CurrentLineNumber = 0x1084;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("Can't import S3D file version %d, I can only do up to version %d.",local_30,0x67);
      }
      iVar4 = 1;
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
      iVar4 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d\n",&local_18,&local_14,&local_2c,
                         &local_24,local_28,local_20,local_1c);
    } while (iVar4 != 7);
    shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0(this_ptr,local_2c,local_14,local_18);
    for (iVar4 = local_24 + 1; 0 < iVar4; iVar4 = iVar4 + -1) {
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) goto LAB_0051abcf;
      } while (iVar1 != 10);
    }
LAB_0051abcf:
    iVar4 = 1;
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    for (iVar4 = 0; iVar4 < this_ptr->submesh_count; iVar4 = iVar4 + 1) {
      iVar1 = _fscanf(file_handle,"%[^\n]\n",local_234);
      if (iVar1 != 1) goto LAB_0051aab1;
      splitpath(local_234,(char *)0x0,(char *)0x0,local_130,(char *)0x0);
      makepath
                (this_ptr->submesh_data[iVar4].texture_filename,(char *)0x0,(char *)0x0,local_130,
                 "raw");
    }
    iVar4 = 1;
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    for (iVar4 = 0; iVar4 < this_ptr->tri_count; iVar4 = iVar4 + 1) {
      pCVar2 = this_ptr->tri_data + iVar4;
      iVar1 = _fscanf(file_handle,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",pCVar2,&pCVar2->vertex_idx_0,
                         pCVar2->uv_coords,pCVar2->uv_coords[0] + 1,&pCVar2->vertex_idx_1,
                         pCVar2->uv_coords + 1,pCVar2->uv_coords[1] + 1,&pCVar2->vertex_idx_2,
                         pCVar2->uv_coords + 2,pCVar2->uv_coords[2] + 1);
      if (iVar1 != 10) goto LAB_0051aab1;
    }
    iVar4 = 1;
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    iVar4 = 0;
    while( true ) {
      if (this_ptr->vertex_count <= iVar4) {
        this_ptr->active_attribute_count = 1;
        this_ptr->sort_attribute_count = 2;
        this_ptr->reserved_attribute_count = 0;
        shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330(this_ptr);
        return;
      }
      pCVar3 = this_ptr->vertex_data + iVar4;
      iVar1 = _fscanf(file_handle,"%f,%f,%f\n",pCVar3,&(pCVar3->position).y,
                         &(pCVar3->position).z);
      if (iVar1 != 3) break;
      iVar4 = iVar4 + 1;
    }
  } while( true );
}
