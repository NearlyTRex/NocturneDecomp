// Name: core_prye.cpp_CPrye_getGrabbed_FUN_00526e30
// Address: 00526e30
// Address Range: [[00526e30, 00526f4f]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_CPrye_getGrabbed_FUN_00526e30(CPrye *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_prye_cpp_CPrye_getGrabbed_FUN_00526e30(CPrye *this_ptr,CDemonActor *grabber,int grab_type)

{
  SMotion *pSVar1;
  int iVar2;
  int iVar3;
  
  if (grabber != (CDemonActor *)0x0) {
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"@@CPrye::startGettingGrabbed by %s, type %d\n" + 2,grabber,grab_type);
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&this_ptr->field_0x158);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"  current motion is %s\n",pSVar1);
    if ((((*(int *)&this_ptr->field_0x20b98 == 0) && (*(int *)&this_ptr->field_0x20b94 == 0)) &&
        (*(int *)&this_ptr->field_0x20ba0 == 0)) &&
       (((((iVar2 = *(int *)&this_ptr->field_0x20b64, iVar2 == 0 || (iVar2 == 3)) ||
          ((iVar2 == 7 || ((iVar2 == 10 || (iVar2 == 0xb)))))) || (iVar2 == 0xc)) || (iVar2 == 0xd))
       )) {
      iVar2 = core_hero_cpp_FUN_004d2af0(this_ptr,grabber,grab_type);
      if (iVar2 != 0) {
        if ((*(int *)&this_ptr->field_0x25b0 != *(int *)&this_ptr->field_0x20c24) &&
           (iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(int *)&this_ptr->field_0x25b0,DAT_007e1a50), iVar3 == 0)) {
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,0,0);
        }
        if (*(int *)&this_ptr->field_0x20c24 != *(int *)&this_ptr->field_0x2628) {
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1,0);
        }
        *(uint *)&this_ptr->field_0x20cc8 = 0;
      }
      return iVar2;
    }
  }
  return 0;
}
