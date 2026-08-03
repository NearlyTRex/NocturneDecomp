// Name: core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00511b50
// Address: 00511b50
// Address Range: [[00511b50, 00511c58]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00511b50(CDemonSet *this_ptr,CVector3f *point)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00511b50(CDemonSet *this_ptr,CVector3f *point)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  CDemonSet *pCVar2;
  CBoundingBox3D CStack_34;
  CVector3f local_1c;
  
  if (((*(uint *)(0x02DD1210 + 4) & 0x7fffffff) == 0) ||
     (*(float *)(0x02DD1210 + 4) <= point->y)) {
    iVar1 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040d890
                                (pCVar2->actors[0],g_CWaterActorActorType_02ddd598.name_hash);
        if (this_ptr_00 != (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(this_ptr_00,&local_1c,point);
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
