// Name: core_cloth.cpp_CCloth_load_FUN_00438cf0
// Address: 00438cf0
// MANUAL RECONSTRUCTION
// Address Range: [[00438cf0, 00439257]]
// Convention: __cdecl
// Signature: int __cdecl core_cloth_cpp_CCloth_load_FUN_00438cf0(CCloth *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_cloth_cpp_CCloth_load_FUN_00438cf0(CCloth *this_ptr,char *filename)

{
  _FILE *stream;
  SClothBone *pSVar9;
  CVector3f *pCVar10;
  int iVar11;
  int iVar2;
  int *piVar14;
  int iVar16;
  char acStack_238 [256];
  char local_138 [256];
  float fVar1;
  float fVar3;
  float fVar6;
  float fVar7;
  float fVar4;
  float fVar5;
  float fVar2;
  
  stream = engine_dosio_cpp_getFile_FUN_00481a50("models",filename,"rt");
  if (stream == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 155;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::load - Unable to open file %s",filename);
  }
  _fgets(local_138,0xff,stream);
  _fscanf(stream,"%d\n",&this_ptr->version_num);
  if (3 < this_ptr->version_num) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 162;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("%s is version %d, this .EXE is old and can only handle up to version %d",filename,this_ptr->version_num,3);
  }
  _fgets(local_138,0xff,stream);
  _fscanf(stream,"%s\n",acStack_238);
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&this_ptr->model,acStack_238);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00478190(&this_ptr->model);
  _fgets(local_138,0xff,stream);
  if (this_ptr->version_num < 3) {
    _fscanf(stream,"%f,%f,%f,%f,%f,%f\n",&this_ptr->weight,&this_ptr->gravity,&this_ptr->dampen,
               &this_ptr->spring,&this_ptr->body_friction,&this_ptr->floor_friction);
    fVar6 = 0.05f;
    fVar5 = 0.5f;
    fVar4 = 0.5f;
    fVar3 = 0.005f;
    fVar2 = 0.9f;
    fVar1 = 32.0f;
    this_ptr->weight = 0.125f;
    fVar7 = 0.15f;
    this_ptr->gravity = fVar1;
    this_ptr->dampen = fVar2;
    this_ptr->spring = fVar3;
    this_ptr->body_friction = fVar4;
    this_ptr->floor_friction = fVar5;
    this_ptr->wind_area = fVar6;
    this_ptr->mom_inert = fVar7;
  }
  else {
    _fscanf(stream,"%f,%f,%f,%f,%f,%f,%f,%f\n",&this_ptr->weight,&this_ptr->gravity,
               &this_ptr->dampen,&this_ptr->spring,&this_ptr->body_friction,
               &this_ptr->floor_friction,&this_ptr->wind_area,&this_ptr->mom_inert);
  }
  _fgets(local_138,0xff,stream);
  _fscanf(stream,"%f\n",&this_ptr->transparency);
  if (this_ptr->version_num < 2) {
    this_ptr->double_sided = 0;
  }
  else {
    _fgets(local_138,0xff,stream);
    _fscanf(stream,"%d\n",&this_ptr->double_sided);
  }
  _fgets(local_138,0xff,stream);
  _fscanf(stream,"%d\n",&this_ptr->locked_vertex_count);
  core_cloth_cpp_CCloth_allocMemory_FUN_00438c50(this_ptr);
  iVar11 = 0;
  _fgets(local_138,0xff,stream);
  if (0 < this_ptr->locked_vertex_count) {
    piVar14 = this_ptr->locked_vertex_indices;
    do {
      iVar11 = iVar11 + 1;
      _fscanf(stream,"%d\n",piVar14);
      piVar14 = piVar14 + 1;
    } while (iVar11 < this_ptr->locked_vertex_count);
  }
  core_cloth_cpp_CCloth_initializeConnections_FUN_004394e0(this_ptr);
  _fgets(local_138,0xff,stream);
  _fscanf(stream,"%d\n",&this_ptr->collide_bone_count);
  iVar2 = 0;
  if (0 < this_ptr->collide_bone_count) {
    do {
      pSVar9 = this_ptr->collide_bones + iVar2;
      iVar2 = iVar2 + 1;
      _fscanf(stream,"\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f, %f\n",pSVar9->name,
                 &pSVar9->radius1,&pSVar9->radius2,&pSVar9->euler1.x,&pSVar9->euler1.y,
                 &pSVar9->euler1.z,&pSVar9->euler2.x,&pSVar9->euler2.z,&pSVar9->euler2.y,
                 &pSVar9->length);
    } while (iVar2 < this_ptr->collide_bone_count);
  }
  iVar16 = 0;
  iVar2 = shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\core\\cloth.cpp",274);
  if (0 < (this_ptr->model).vertex_count) {
    do {
      pCVar10 = &this_ptr->vertices[iVar16].offset_pos;
      pCVar10->x = (float)(this_ptr->model).vertex_list[iVar16].x * 0.00390625f;
      pCVar10->y = (float)(this_ptr->model).vertex_list[iVar16].y * 0.00390625f;
      pCVar10->z = (float)(this_ptr->model).vertex_list[iVar16].z * 0.00390625f;
      iVar2 = (this_ptr->model).vertex_count;
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar2);
  }
  return iVar2;
}
