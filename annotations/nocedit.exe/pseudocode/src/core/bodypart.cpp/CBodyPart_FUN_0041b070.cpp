// Name: core_bodypart.cpp_CBodyPart_FUN_0041b070
// Address: 0041b070
// Address Range: [[0041b070, 0041b1a9]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_CBodyPart_FUN_0041b070(CBodyPart * this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041b070(CBodyPart *this_ptr)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  float fStack00000008;
  float fStack0000000c;
  float fStack00000010;
  float fStack_4c;
  float in_stack_ffffffc8;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f CStack_20;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if ((2 < *(int *)(this_ptr->field1_0x158 + 0x1c)) && (0 < *(int *)(this_ptr->field1_0x158 + 0x28))
     ) {
    (*((this_ptr->base_actor).vtable)->getBoundingBox)
              (&this_ptr->base_actor,(CBoundingBox3D *)&fStack_4c);
    fStack_14 = in_stack_ffffffc8 + fStack_2c;
    fStack_10 = fStack_34 + fStack_28;
    CStack_20.x = fStack_14 * 0.5f;
    CStack_20.y = fStack_10 * 0.5f;
    fStack_c = fStack_30 + fStack_24;
    CStack_20.z = fStack_c * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base_actor,(CVector3f *)&stack0xfffffff8,&CStack_20);
    fStack00000008 = fStack_28 - fStack_34;
    fStack0000000c = fStack_24 - fStack_30;
    fStack00000010 = CStack_20.x - fStack_2c;
    fStack_4c = 6.03303e-39;
    core_box_cpp_CBox_setupCorners_FUN_0041dd20
              ((CBox *)(this_ptr->field1_0x158 + 0xb74),(CVector3f *)&stack0xfffffffc,
               (CVector3f *)&(this_ptr->base_actor).orient,(CVector3f *)&stack0x00000008,5.0);
    return;
  }
  (this_ptr->base_actor).was_created = 2;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr);
  pCVar1 = (CVector3f *)(this_ptr->field1_0x158 + 0x10);
  if (pCVar1 != &g_ZeroVector) {
    pCVar1->x = g_ZeroVector.x;
    *(float *)(this_ptr->field1_0x158 + 0x14) = g_ZeroVector.y;
    *(float *)(this_ptr->field1_0x158 + 0x18) = g_ZeroVector.z;
  }
  if ((CVector3f *)(this_ptr->field1_0x158 + 4) == pCVar1) {
    return;
  }
  ((CVector3f *)(this_ptr->field1_0x158 + 4))->x = pCVar1->x;
  *(uint *)(this_ptr->field1_0x158 + 8) = *(uint *)(this_ptr->field1_0x158 + 0x14);
  *(uint *)(this_ptr->field1_0x158 + 0xc) = *(uint *)(this_ptr->field1_0x158 + 0x18);
  return;
}
