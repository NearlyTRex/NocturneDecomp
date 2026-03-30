// Name: core_setedit.cpp_CDemonSet_renderCameraBackdrop_FUN_0057d340
// Address: 0057d340
// MANUAL RECONSTRUCTION
// Address Range: [[0057d340, 0057d654]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_renderCameraBackdrop_FUN_0057d340(CDemonSet *this_ptr,C3DSCamera *camera)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_renderCameraBackdrop_FUN_0057d340(CDemonSet *this_ptr,C3DSCamera *camera)

{
  CVector3f *pCVar1;
  char local_120 [100];
  CVector3f local_bc;
  CVector3i local_b0;
  CVector3f local_a4;
  CVector3i local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3i local_74;
  CVector3i local_68;
  CVector3i local_5c;
  CVector3f local_50;
  CVector3i local_44;
  CVector3f local_38;
  CVector3i local_2c;
  CVector3f local_20;
  CVector3f *local_14;
  float *pfVar1;
  float *pfVar2;
  
  pCVar1 = &camera->position;
  pfVar1 = &(camera->position).z;
  pfVar2 = &(camera->position).y;
  if (camera->is_panning != 0) {
    _sprintf(local_120,"%sn",camera->name);
    local_a4.x = 0.0;
    local_a4.z = 0.0;
    local_a4.y = 0.0;
    local_98.x = (int)pCVar1->x;
    local_98.y = (int)*pfVar2;
    local_98.z = (int)*pfVar1;
    core_setedit_cpp_renderBackdropImage_FUN_0057ce80
              (&local_98,&local_a4,local_120,0x1fc,0x1fc,0x1fe,0x1fe,1.0);
    _sprintf(local_120,"%ss",camera->name);
    local_8c.x = 0.0;
    local_8c.z = 0.0;
    local_8c.y = 3.1415927;
    local_74.x = (int)pCVar1->x;
    local_74.y = (int)*pfVar2;
    local_74.z = (int)*pfVar1;
    core_setedit_cpp_renderBackdropImage_FUN_0057ce80
              (&local_74,&local_8c,local_120,0x1fc,0x1fc,0x1fe,0x1fe,1.0);
    _sprintf(local_120,"%se",camera->name);
    local_38.x = 0.0;
    local_38.z = 0.0;
    local_38.y = 1.5707964;
    local_68.x = (int)pCVar1->x;
    local_68.y = (int)*pfVar2;
    local_68.z = (int)*pfVar1;
    core_setedit_cpp_renderBackdropImage_FUN_0057ce80
              (&local_68,&local_38,local_120,0x1fc,0x1fc,0x1fe,0x1fe,1.0);
    _sprintf(local_120,"%sw",camera->name);
    local_80.x = 0.0;
    local_80.z = 0.0;
    local_80.y = -1.5707964;
    local_b0.x = (int)pCVar1->x;
    local_b0.y = (int)*pfVar2;
    local_b0.z = (int)*pfVar1;
    core_setedit_cpp_renderBackdropImage_FUN_0057ce80
              (&local_b0,&local_80,local_120,0x1fc,0x1fc,0x1fe,0x1fe,1.0);
    _sprintf(local_120,"%su",camera->name);
    local_50.z = 0.0;
    local_50.y = 0.0;
    local_50.x = -1.5707964;
    local_5c.x = (int)pCVar1->x;
    local_5c.y = (int)*pfVar2;
    local_5c.z = (int)*pfVar1;
    core_setedit_cpp_renderBackdropImage_FUN_0057ce80
              (&local_5c,&local_50,local_120,0x1fc,0x1fc,0x1fe,0x1fe,1.0);
    _sprintf(local_120,"%sd",camera->name);
    local_20.z = 0.0;
    local_20.y = 0.0;
    local_20.x = 1.5707964;
    local_44.x = (int)pCVar1->x;
    local_44.y = (int)*pfVar2;
    local_44.z = (int)*pfVar1;
    core_setedit_cpp_renderBackdropImage_FUN_0057ce80
              (&local_44,&local_20,local_120,0x1fc,0x1fc,0x1fe,0x1fe,1.0);
    return;
  }
  local_bc.x = (camera->orientation).x;
  local_bc.y = (camera->orientation).y;
  local_bc.z = (camera->orientation).z;
  local_2c.x = (int)pCVar1->x;
  local_2c.y = (int)*pfVar2;
  local_2c.z = (int)*pfVar1;
  core_setedit_cpp_renderBackdropImage_FUN_0057ce80
            (&local_2c,&local_bc,camera->name,0x280,0x1e0,0x27f,0x1df,
             (float)18 / camera->projection_scale);
  return;
}
