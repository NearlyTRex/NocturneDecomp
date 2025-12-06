// Name: core_setcolid.cpp_CDemonSet_FUN_00574580
// Address: 00574580
// Address Range: [[00574580, 00574688]]
// Convention: __cdecl
// Signature: int core_setcolid.cpp_CDemonSet_FUN_00574580(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_FUN_00574580(CDemonSet *this_ptr)

{
  CDemonActor *this_ptr_00;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float unaff_ESI;
  int iVar1;
  float unaff_EDI;
  CDemonSet *pCVar2;
  float unaff_retaddr;
  float in_stack_00000008;
  CVector3f *in_stack_0000000c;
  CBoundingBox3D CStack_2c;
  float fStack_14;
  
  if ((ABS(g_CWaterPtr->water_level_y) == 0.0) ||
     (g_CWaterPtr->water_level_y <= *(float *)((int)in_stack_00000008 + 4))) {
    iVar1 = 0;
    pCVar2 = this_ptr;
    if (0 < (int)this_ptr->actor_list_ptr) {
      do {
        this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                                (*(CDemonActor **)pCVar2->actor_list_data,
                                 g_CWaterActorClassInfo.name_hash);
        if (this_ptr_00 != (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (this_ptr_00,(CVector3f *)&CStack_2c.max.z,in_stack_0000000c);
          (*this_ptr_00->vtable->getBoundingBox)(this_ptr_00,&CStack_2c);
          fStack_14 = fStack_14 + -10f;
          if ((((CStack_2c.max.z <= unaff_retaddr) && (fStack_14 <= (float)this_ptr)) &&
              (unaff_EBP <= in_stack_00000008)) &&
             (((unaff_retaddr <= unaff_EDI && ((float)this_ptr <= unaff_ESI)) &&
              (in_stack_00000008 <= unaff_EBX)))) {
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
