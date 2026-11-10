// Name: core_doc.cpp_CDoc_getGrabbed_FUN_0045dc40
// Address: 0045dc40
// Address Range: [[0045dc40, 0045dd2a]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_getGrabbed_FUN_0045dc40(CDoc *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_doc_cpp_CDoc_getGrabbed_FUN_0045dc40(CDoc *this_ptr,CDemonActor *grabber,int grab_type)

{
  uint uVar1;
  int iVar2;
  
  if (grabber != (CDemonActor *)0x0) {
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"?CDoc::startGettingGrabbed by %s, type %d\n" + 1,grabber,grab_type);
    uVar1 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"  current motion is %s\n",uVar1);
    if ((((*(int *)&this_ptr->field_0x25608 == 0) && (*(int *)&this_ptr->field_0x25604 == 0)) &&
        (*(int *)&this_ptr->field_0x25610 == 0)) &&
       ((*(int *)&this_ptr->field_0x256a4 == 0 || (*(int *)&this_ptr->field_0x256a4 == 3)))) {
      iVar2 = core_hero_cpp_CHero_getGrabbed_FUN_004cea50((CHero *)this_ptr,grabber,grab_type);
      if (iVar2 != 0) {
        if (*(int *)&this_ptr->field_0x25698 != *(int *)&this_ptr->field_0x2620) {
          (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,0,0);
        }
        if (*(int *)&this_ptr->field_0x25698 != *(int *)&this_ptr->field_0x2698) {
          (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,1,0);
        }
        *(uint *)&this_ptr->field_0x2573c = 0;
      }
      return iVar2;
    }
  }
  return 0;
}
