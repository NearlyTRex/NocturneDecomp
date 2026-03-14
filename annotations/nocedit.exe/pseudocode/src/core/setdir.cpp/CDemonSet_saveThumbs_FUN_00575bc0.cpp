// Name: core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0
// Address: 00575bc0
// Address Range: [[00575bc0, 00575bff]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575bc0(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575bc0(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar2;
  uint uVar3;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  CVector3f CStack_14;
  int iVar1;
  
  core_setdir_cpp_CDemonSet_freeThumbs_FUN_00575df0(this_ptr);
  iVar2 = 0;
LAB_00575bd4:
  while( true ) {
    if (this_ptr->camera_count <= iVar2) {
      return;
    }
    if (this_ptr->cameras[iVar2].is_panning != 0) break;
    core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00574910
              (g_CZThumbPool + iVar2 * 6,&this_ptr->cameras[iVar2].position,
               &this_ptr->cameras[iVar2].orientation,0x40,0x30,
               this_ptr->cameras[iVar2].projection_scale * (float)0.055555555555555601,file_handle);
    iVar2 = iVar2 + 1;
  }
  uVar3 = 0;
  do {
    switch(uVar3) {
    default:
      CStack_5c.z = 0.0;
      CStack_5c.y = 0.0;
      CStack_5c.x = 0.0;
      if (&CStack_2c != &CStack_5c) {
        CStack_2c.y = 0.0;
LAB_00575c20:
        CStack_2c.x = 0.0;
LAB_00575c24:
        CStack_2c.z = 0.0;
      }
      break;
    case 1:
      CStack_14.z = 0.0;
      CStack_14.x = 0.0;
      CStack_14.y = 3.1415927;
      if (&CStack_2c != &CStack_14) {
        CStack_2c.y = 3.1415927;
        goto LAB_00575c20;
      }
      break;
    case 2:
      CStack_50.z = 0.0;
      CStack_50.x = 0.0;
      CStack_50.y = 1.5707964;
      if (&CStack_2c != &CStack_50) {
        CStack_2c.y = 1.5707964;
        goto LAB_00575c20;
      }
      break;
    case 3:
      CStack_44.z = 0.0;
      CStack_44.x = 0.0;
      CStack_44.y = -1.5707964;
      if (&CStack_2c != &CStack_44) {
        CStack_2c.y = -1.5707964;
        goto LAB_00575c20;
      }
      break;
    case 4:
      CStack_20.z = 0.0;
      CStack_20.y = 0.0;
      CStack_20.x = -1.5707964;
      if (&CStack_2c != &CStack_20) {
        CStack_2c.x = -1.5707964;
        CStack_2c.y = 0.0;
        goto LAB_00575c24;
      }
      break;
    case 5:
      CStack_38.x = 1.5707964;
      CStack_38.z = 0.0;
      CStack_38.y = 0.0;
      if (&CStack_2c != &CStack_38) {
        CStack_2c.x = 1.5707964;
        CStack_2c.y = 0.0;
        goto LAB_00575c24;
      }
    }
    while( true ) {
      iVar1 = iVar2 * 6 + uVar3;
      uVar3 = uVar3 + 1;
      core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00574910
                (g_CZThumbPool + iVar1,&this_ptr->cameras[iVar2].position,&CStack_2c,0x40,0x40,1.0,
                 file_handle);
      if (5 < (int)uVar3) {
        iVar2 = iVar2 + 1;
        goto LAB_00575bd4;
      }
      if (uVar3 < 6) break;
      g_CurrentFilename = "..\\core\\setdir.cpp";
      g_CurrentLineNumber = 0x39d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
    }
  } while( true );
}
