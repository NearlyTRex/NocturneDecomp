// Name: shape_meshlod.cpp_CLodMesh_findOrAddSubmesh_FUN_00518790
// Address: 00518790
// Address Range: [[00518790, 00518863]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_findOrAddSubmesh_FUN_00518790(CLodMesh *this_ptr,char *texture_filename)

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodMesh_findOrAddSubmesh_FUN_00518790(CLodMesh *this_ptr,char *texture_filename)

{
  char cVar1;
  int iVar2;
  SLodSubmesh *pSVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  iVar4 = 0;
  if (0 < this_ptr->submesh_count) {
    iVar5 = 0;
    do {
      iVar2 = stricmp
                        (this_ptr->submesh_data->texture_filename + iVar5,texture_filename);
      if (iVar2 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x48;
    } while (iVar4 < this_ptr->submesh_count);
  }
  pSVar3 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->submesh_data,(this_ptr->submesh_count + 1) * 0x48,
                      "..\\shape\\meshlod.cpp",0xb6d);
  this_ptr->submesh_data = pSVar3;
  if (pSVar3 == (SLodSubmesh *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0xb6e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
  }
  pcVar6 = this_ptr->submesh_data[this_ptr->submesh_count].texture_filename;
  do {
    cVar1 = *texture_filename;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = texture_filename[1];
    texture_filename = texture_filename + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar4 = this_ptr->submesh_count;
  this_ptr->submesh_count = iVar4 + 1;
  return iVar4;
}
