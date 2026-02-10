// Name: core_boxactor.cpp_CBoxActor_FUN_004218d0
// Address: 004218d0
// Address Range: [[004218d0, 004219d6]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_FUN_004218d0(CBoxActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_FUN_004218d0(CBoxActor *this_ptr)

{
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  this_ptr->unk5 = 0;
  if ((0.0 < this_ptr->weight_in_pounds) &&
     ((int *)(this_ptr->base).validation_magic == &g_ActorMagicNumber)) {
    if ((this_ptr->model).model_ptr != (CKeyFramedModel *)0x0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)
                (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffb4);
      fStack_14 = fStack_44 + fStack_38;
      fStack_10 = fStack_40 + fStack_34;
      CStack_20.x = fStack_14 * 0.5f;
      CStack_20.y = fStack_10 * 0.5f;
      fStack_c = fStack_3c + fStack_30;
      CStack_20.z = fStack_c * 0.5f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base,&CStack_2c,&CStack_20);
      fStack_8 = fStack_38 - fStack_44;
      core_box_cpp_CBox_setupCorners_FUN_0041dd20
                ((CBox *)&this_ptr->sim_box,&CStack_2c,&(this_ptr->base).orient.vec,
                 (CVector3f *)&fStack_8,this_ptr->weight_in_pounds);
      return;
    }
    this_ptr->unk5 = -1;
  }
  return;
}
