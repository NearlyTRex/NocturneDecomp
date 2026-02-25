// Name: core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00574580
// Address: 00574580
// Address Range: [[00574580, 00574688]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00574580(CDemonSet *this_ptr,CVector3f *point)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00574580(CDemonSet *this_ptr,CVector3f *point)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  CDemonSet *pCVar2;
  CBoundingBox3D CStack_34;
  CVector3f local_1c;
  
  if ((ABS(g_CWaterPtr->water_level_y) == 0.0) || (g_CWaterPtr->water_level_y <= point->y)) {
    iVar1 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                                (pCVar2->actors[0],g_CWaterActorClassInfo.name_hash);
        if (this_ptr_00 != (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(this_ptr_00,&local_1c,point);
          (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,&CStack_34);
          CStack_34.min.y = CStack_34.min.y + -10.0f;
          if ((((CStack_34.min.x <= local_1c.x) && (CStack_34.min.y <= local_1c.y)) &&
              (CStack_34.min.z <= local_1c.z)) &&
             (((local_1c.x <= CStack_34.max.x && (local_1c.y <= CStack_34.max.y)) &&
              (local_1c.z <= CStack_34.max.z)))) {
            return 1;
          }
        }
        iVar1 = iVar1 + 1;
        pCVar2 = (CDemonSet *)pCVar2->cameras;
      } while (iVar1 < this_ptr->actor_count);
    }
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}
