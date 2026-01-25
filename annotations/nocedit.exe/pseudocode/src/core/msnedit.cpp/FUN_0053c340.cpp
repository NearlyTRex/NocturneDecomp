// Name: core_msnedit.cpp_FUN_0053c340
// Address: 0053c340
// Address Range: [[0053c340, 0053c4e7]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053c340()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053c340(uint param_1, uint param_2,
   uint param_3) */

CDemonActor * core_msnedit_cpp_FUN_0053c340(void)

{
  CDemonActor *actor_ptr;
  int iVar1;
  float unaff_EDI;
  CDemonActor *pCVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  byte auStack_68 [8];
  float fStack_60;
  byte auStack_5c [20];
  float local_48;
  CVector3f local_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f local_20;
  float local_14;
  
  if ((((in_stack_00000004[5] < in_stack_00000008) && (in_stack_00000004[6] < in_stack_0000000c)) &&
      (in_stack_00000008 < in_stack_00000004[7] + -1)) &&
     (in_stack_0000000c < in_stack_00000004[8] + -1)) {
    CStack_2c.y = (float)g_CDemonCameraInstance.base.position.x;
    CStack_2c.z = (float)g_CDemonCameraInstance.base.position.y;
    local_20.x = (float)g_CDemonCameraInstance.base.position.z;
    core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
              (&g_CDemonCameraInstance,(CVector3f *)(auStack_5c + 0x10),in_stack_00000008,
               in_stack_0000000c);
    local_20.z = (float)1000 /
                 SQRT(local_44.x * local_44.x +
                      (float)auStack_5c._16_4_ * (float)auStack_5c._16_4_ + local_48 * local_48);
    auStack_5c._16_4_ = (float)auStack_5c._16_4_ * local_20.z;
    local_48 = local_48 * local_20.z;
    local_44.x = local_44.x * local_20.z;
    pCVar2 = (CDemonActor *)0x0;
    actor_ptr = (CDemonActor *)in_stack_00000004[0x152];
    local_14 = 1.01;
    for (; actor_ptr != (CDemonActor *)0x0; actor_ptr = actor_ptr->next_actor) {
      if (((*in_stack_00000004 == (actor_ptr->location).area_id) && (actor_ptr->field26_0x148 == 0))
         && ((g_DisableMouseHitOnBarrier == 0 ||
             (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CBarrier"),
             iVar1 == 0)))) {
        (*((actor_ptr->vtable)._ub)->getBoundingBox)(actor_ptr,(CBoundingBox3D *)(auStack_68 + 4));
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(actor_ptr,&CStack_38,&local_20);
        core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                  (actor_ptr,&CStack_2c,&local_44);
        fStack_60 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                              ((CBoundingBox3D *)auStack_5c,&CStack_38,&CStack_2c,(CVector3f *)0x0);
        auStack_68 = (byte  [8])(double)fStack_60;
        local_14 = fStack_60;
        if (((0.0 < (double)auStack_68) && (fStack_60 <= unaff_EDI)) && ((double)auStack_68 <= 1.0))
        {
          pCVar2 = actor_ptr;
          unaff_EDI = fStack_60;
        }
      }
    }
    return pCVar2;
  }
  return (CDemonActor *)0x0;
}
