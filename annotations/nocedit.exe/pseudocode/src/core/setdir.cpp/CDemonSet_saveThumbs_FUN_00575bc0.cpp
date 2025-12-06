// Name: core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0
// Address: 00575bc0
// Address Range: [[00575bc0, 00575bff]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0(CDemonSet * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575bc0(CDemonSet *this_ptr,FILE *file_handle)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint uVar3;
  float unaff_EDI;
  FILE *in_stack_0000000c;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  float fStack_10;
  float fStack_c;
  
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
               this_ptr->cameras[iVar2].projection_scale * (float)0.055555555555555601,in_stack_0000000c)
    ;
    iVar2 = iVar2 + 1;
    unaff_EDI = CStack_58.x;
  }
  uVar3 = 0;
  do {
    switch(uVar3) {
    default:
      CStack_58.z = 0.0;
      CStack_58.y = 0.0;
      CStack_58.x = 0.0;
      if (&CStack_28 != &CStack_58) {
        CStack_28.y = 0.0;
LAB_00575c20:
        CStack_28.x = 0.0;
LAB_00575c24:
        CStack_28.z = 0.0;
      }
      break;
    case 1:
      fStack_10 = 0.0;
      fStack_c = 3.1415927;
      if (&CStack_28 != (CVector3f *)&fStack_10) {
        CStack_28.y = 3.1415927;
        goto LAB_00575c20;
      }
      break;
    case 2:
      CStack_4c.z = 0.0;
      CStack_4c.x = 0.0;
      CStack_4c.y = 1.5707964;
      if (&CStack_28 != &CStack_4c) {
        CStack_28.y = 1.5707964;
        goto LAB_00575c20;
      }
      break;
    case 3:
      CStack_40.z = 0.0;
      CStack_40.x = 0.0;
      CStack_40.y = -1.5707964;
      if (&CStack_28 != &CStack_40) {
        CStack_28.y = -1.5707964;
        goto LAB_00575c20;
      }
      break;
    case 4:
      CStack_1c.z = 0.0;
      CStack_1c.y = 0.0;
      CStack_1c.x = -1.5707964;
      if (&CStack_28 != &CStack_1c) {
        CStack_28.x = -1.5707964;
        CStack_28.y = 0.0;
        goto LAB_00575c24;
      }
      break;
    case 5:
      CStack_34.x = 1.5707964;
      CStack_34.z = 0.0;
      CStack_34.y = 0.0;
      if (&CStack_28 != &CStack_34) {
        CStack_28.x = 1.5707964;
        CStack_28.y = 0.0;
        goto LAB_00575c24;
      }
    }
    while( true ) {
      iVar1 = iVar2 * 6 + uVar3;
      uVar3 = uVar3 + 1;
      core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00574910
                (g_CZThumbPool + iVar1,&this_ptr->cameras[iVar2].position,&CStack_28,0x40,0x40,1.0,
                 in_stack_0000000c);
      if (5 < (int)uVar3) {
        iVar2 = iVar2 + 1;
        unaff_EDI = CStack_58.x;
        goto LAB_00575bd4;
      }
      if (uVar3 < 6) break;
      g_CurrentFilename = "..\\core\\setdir.cpp";
      g_CurrentLineNumber = 0x39d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze",unaff_EDI);
    }
  } while( true );
}
