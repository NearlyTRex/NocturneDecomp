// Name: core_simbox.cpp_CSimBox_process_FUN_00588f20
// Address: 00588f20
// Address Range: [[00588f20, 005890e6]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_process_FUN_00588f20(CSimBox *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_process_FUN_00588f20(CSimBox *this_ptr,float delta_time)

{
  COrientation *pCVar1;
  CDemonActor_vtable *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  float in_stack_00000014;
  float local_18;
  
  if ((this_ptr->type == 1) && (*(int *)(this_ptr->unk + 0x254) == 0)) {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->trigger_event);
    if (iVar3 != 0) {
      this_ptr->unk[0x254] = '\x01';
      this_ptr->unk[0x255] = '\0';
      this_ptr->unk[0x256] = '\0';
      this_ptr->unk[599] = '\0';
      if ((CVector3f *)(this_ptr->unk + 0x4c) != &this_ptr->initial_velocity) {
        *(float *)(this_ptr->unk + 0x4c) = (this_ptr->initial_velocity).x;
        *(float *)(this_ptr->unk + 0x50) = (this_ptr->initial_velocity).y;
        *(float *)(this_ptr->unk + 0x54) = (this_ptr->initial_velocity).z;
      }
      if ((CVector3f *)(this_ptr->unk + 0x70) != &this_ptr->init_rot_vel) {
        *(float *)(this_ptr->unk + 0x70) = (this_ptr->init_rot_vel).x;
        *(float *)(this_ptr->unk + 0x74) = (this_ptr->init_rot_vel).y;
        *(float *)(this_ptr->unk + 0x78) = (this_ptr->init_rot_vel).z;
      }
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         ((CMatrix3x3f *)(this_ptr->unk + 0x18),(CVector3f *)&local_18,
                          (CVector3f *)(this_ptr->unk + 0x4c));
      if ((CVector3f *)(this_ptr->unk + 0x40) != pCVar4) {
        ((CVector3f *)(this_ptr->unk + 0x40))->x = pCVar4->x;
        *(float *)(this_ptr->unk + 0x44) = pCVar4->y;
        *(float *)(this_ptr->unk + 0x48) = pCVar4->z;
      }
    }
  }
  if (this_ptr->type == 0) {
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x13);
    if (iVar3 != 0) {
      (this_ptr->base).location.position.x = *(float *)(this_ptr->unk + 0x25c);
      (this_ptr->base).location.position.y = *(float *)(this_ptr->unk + 0x260);
      (this_ptr->base).location.position.z = *(float *)(this_ptr->unk + 0x264);
      iVar3 = rand();
      (this_ptr->base).orient.pitch =
           ((float)iVar3 * 3.051851e-05f + (float)-0.5) * (float)3.1415926535000001;
      iVar3 = rand();
      (this_ptr->base).orient.heading =
           (float)iVar3 * 3.051851e-05f * (float)3.1415926535000001 * (float)2;
      iVar3 = rand();
      pCVar2 = (this_ptr->base).vtable._ub;
      (this_ptr->base).orient.bank =
           (float)iVar3 * 3.051851e-05f * (float)3.1415926535000001 * (float)2;
      local_18 = 8.133377e-39;
      (*pCVar2->setup)(&this_ptr->base);
    }
  }
  if (*(int *)(this_ptr->unk + 0x254) != 0) {
    local_18 = 8.133425e-39;
    core_box_cpp_CBox_process_FUN_0041e2f0((CBox *)this_ptr->unk,in_stack_00000014);
    (this_ptr->base).location.position.x = *(float *)this_ptr->unk;
    (this_ptr->base).location.position.y = *(float *)(this_ptr->unk + 4);
    (this_ptr->base).location.position.z = *(float *)(this_ptr->unk + 8);
    pCVar1 = &(this_ptr->base).orient;
    if (pCVar1 != (COrientation *)(this_ptr->unk + 0xc)) {
      pCVar1->pitch = *(float *)(this_ptr->unk + 0xc);
      (this_ptr->base).orient.bank = *(float *)(this_ptr->unk + 0x10);
      (this_ptr->base).orient.heading = *(float *)(this_ptr->unk + 0x14);
      return;
    }
  }
  return;
}
