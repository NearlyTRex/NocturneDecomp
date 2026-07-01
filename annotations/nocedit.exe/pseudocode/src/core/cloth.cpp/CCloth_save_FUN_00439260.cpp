// Name: core_cloth.cpp_CCloth_save_FUN_00439260
// Address: 00439260
// Address Range: [[00439260, 004394df]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_save_FUN_00439260(CCloth *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_save_FUN_00439260(CCloth *this_ptr,char *filename)

{
  _FILE *file;
  int iVar1;
  SClothBone *pSVar2;
  int iVar2;
  
  file = engine_dosio_cpp_getFile_FUN_00481a50("models",filename,"wt");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 301;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::save - Unable to open file");
  }
  _fprintf(file,"version\n");
  _fprintf(file,"%d\n");
  _fprintf(file,"model\n");
  _fprintf(file,"%s\n");
  _fprintf(file,"weight,gravity,dampen,spring,bodyFriction,floorFriction,windArea,momInert\n");
  _fprintf(file,"%f,%f,%f,%f,%f,%f,%f,%f\n",(double)this_ptr->weight,(double)this_ptr->gravity,
             (double)this_ptr->dampen,(double)this_ptr->spring,(double)this_ptr->body_friction,
             (double)this_ptr->floor_friction,(double)this_ptr->wind_area,
             (double)this_ptr->mom_inert);
  _fprintf(file,"transparency\n");
  _fprintf(file,"%f\n",(double)this_ptr->transparency);
  _fprintf(file,"doubleSided\n");
  _fprintf(file,"%d\n");
  _fprintf(file,"lockedVertexCount\n");
  _fprintf(file,"%d\n");
  iVar1 = 0;
  _fprintf(file,"lockedVertexList\n");
  if (0 < this_ptr->locked_vertex_count) {
    do {
      iVar1 = iVar1 + 1;
      _fprintf(file,"%d\n");
    } while (iVar1 < this_ptr->locked_vertex_count);
  }
  _fprintf(file,"collideBoneCount\n");
  iVar2 = 0;
  _fprintf(file,"%d\n");
  if (0 < this_ptr->collide_bone_count) {
    pSVar2 = this_ptr->collide_bones;
    do {
      iVar2 = iVar2 + 1;
      _fprintf(file,"\"%s\",%g,%g, %g,%g,%g, %g,%g,%g, %g\n",pSVar2,(double)pSVar2->radius1,
                 (double)pSVar2->radius2,(double)(pSVar2->euler1).x,(double)(pSVar2->euler1).y,
                 (double)(pSVar2->euler1).z,(double)(pSVar2->euler2).x,(double)(pSVar2->euler2).z,
                 (double)(pSVar2->euler2).y,(double)pSVar2->length);
      pSVar2 = pSVar2 + 1;
    } while (iVar2 < this_ptr->collide_bone_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\cloth.cpp",379);
  return;
}
