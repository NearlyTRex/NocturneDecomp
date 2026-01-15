// Name: core_setcolid.cpp_CDemonSet_FUN_00574580
// Address: 00574580
// Address Range: [[00574580, 00574688]]
// Convention: __cdecl
// Signature: int core_setcolid.cpp_CDemonSet_FUN_00574580(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_FUN_00574580(CDemonSet *this_ptr)

{
  CDemonActor *this_ptr_00;
  float unaff_EBP;
  int iVar1;
  float unaff_EDI;
  CDemonSet *pCVar2;
  CVector3f *in_stack_00000008;
  CBoundingBox3D CStack_34;
  CVector3f local_1c;
  
  if ((ABS(g_CWaterPtr->water_level_y) == 0.0) ||
     (g_CWaterPtr->water_level_y <= in_stack_00000008->y)) {
    iVar1 = 0;
    pCVar2 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                                (*(CDemonActor **)pCVar2->actor_list_data,
                                 g_CWaterActorClassInfo.name_hash);
        if (this_ptr_00 != (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (this_ptr_00,&local_1c,in_stack_00000008);
          (*this_ptr_00->vtable->getBoundingBox)(this_ptr_00,&CStack_34);
          CStack_34.max.x = CStack_34.max.x + -10f;
          if ((((CStack_34.min.z <= local_1c.z) && (CStack_34.max.x <= unaff_EBP)) &&
              (CStack_34.max.y <= unaff_EDI)) &&
             (((local_1c.z <= CStack_34.max.z && (unaff_EBP <= local_1c.x)) &&
              (unaff_EDI <= local_1c.y)))) {
            return 1;
          }
        }
        iVar1 = iVar1 + 1;
        pCVar2 = (CDemonSet *)pCVar2->cameras;
      } while (iVar1 < (int)this_ptr->actor_list_ptr);
    }
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}
