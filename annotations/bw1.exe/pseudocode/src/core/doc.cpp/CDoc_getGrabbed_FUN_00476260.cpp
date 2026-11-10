// Name: core_doc.cpp_CDoc_getGrabbed_FUN_00476260
// Address: 00476260
// Address Range: [[00476260, 004763b2]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_getGrabbed_FUN_00476260(CDoc *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_doc_cpp_CDoc_getGrabbed_FUN_00476260(CDoc *this_ptr,CDemonActor *grabber,int grab_type)

{
  SMotion *pSVar1;
  float fVar2;
  int iVar3;
  
  if (grabber != (CDemonActor *)0x0) {
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"CDoc::startGettingGrabbed by %s, type %d\n",grabber,grab_type);
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"  current motion is %s\n",pSVar1);
    if (((*(int *)&this_ptr->field_0x1ff78 == 0) && (*(int *)&this_ptr->field_0x1ff74 == 0)) &&
       (*(int *)&this_ptr->field_0x1ff80 == 0)) {
      fVar2 = core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
      if ((*(int *)&this_ptr->field_0x2c98 == 0xc) || (*(int *)&this_ptr->field_0x2c98 == 0xd)) {
        if ((fVar2 <= (float)_DAT_005da64c) || (_DAT_005da654 <= (double)fVar2)) {
LAB_0047631f:
          iVar3 = core_hero_cpp_CHero_getGrabbed_FUN_004eadf0((CHero *)this_ptr,grabber,grab_type);
          if (iVar3 != 0) {
            if (*(int *)&this_ptr->field_0x20004 != *(int *)&this_ptr->field_0x25b0) {
              (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,0,0);
            }
            if (*(int *)&this_ptr->field_0x20004 != *(int *)&this_ptr->field_0x2628) {
              (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1,0);
            }
            *(uint *)&this_ptr->field_0x200a8 = 0;
          }
          return iVar3;
        }
      }
      else if (*(int *)&this_ptr->field_0x1ff5c != 3) {
        if (*(int *)&this_ptr->field_0x1ff5c != 0) {
          return 0;
        }
        goto LAB_0047631f;
      }
    }
  }
  return 0;
}
