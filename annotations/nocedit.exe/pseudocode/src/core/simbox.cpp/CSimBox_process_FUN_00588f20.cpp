// Name: core_simbox.cpp_CSimBox_process_FUN_00588f20
// Address: 00588f20
// Address Range: [[00588f20, 005890e6]]
// Convention: __cdecl
// Signature: void core_simbox.cpp_CSimBox_process_FUN_00588f20(CSimBox * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_process_FUN_00588f20(CSimBox *this_ptr,float delta_time)

{
  COrientation *pCVar1;
  CDemonActor_vtable *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  float in_stack_00000014;
  float local_18;
  
  if ((*(int *)(this_ptr->unk + 0x17c) == 1) && (*(int *)(this_ptr->unk + 0x454) == 0)) {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->unk + 0x184);
    if (iVar3 != 0) {
      this_ptr->unk[0x454] = '\x01';
      this_ptr->unk[0x455] = '\0';
      this_ptr->unk[0x456] = '\0';
      this_ptr->unk[0x457] = '\0';
      if (this_ptr->unk + 0x24c != this_ptr->unk + 0x1e8) {
        *(uint *)(this_ptr->unk + 0x24c) = *(uint *)(this_ptr->unk + 0x1e8);
        *(uint *)(this_ptr->unk + 0x250) = *(uint *)(this_ptr->unk + 0x1ec);
        *(uint *)(this_ptr->unk + 0x254) = *(uint *)(this_ptr->unk + 0x1f0);
      }
      if (this_ptr->unk + 0x270 != this_ptr->unk + 500) {
        *(uint *)(this_ptr->unk + 0x270) = *(uint *)(this_ptr->unk + 500);
        *(uint *)(this_ptr->unk + 0x274) = *(uint *)(this_ptr->unk + 0x1f8);
        *(uint *)(this_ptr->unk + 0x278) = *(uint *)(this_ptr->unk + 0x1fc);
      }
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         ((CMatrix3x3f *)(this_ptr->unk + 0x218),(CVector3f *)&local_18,
                          (CVector3f *)(this_ptr->unk + 0x24c));
      if ((CVector3f *)(this_ptr->unk + 0x240) != pCVar4) {
        ((CVector3f *)(this_ptr->unk + 0x240))->x = pCVar4->x;
        *(float *)(this_ptr->unk + 0x244) = pCVar4->y;
        *(float *)(this_ptr->unk + 0x248) = pCVar4->z;
      }
    }
  }
  if (*(int *)(this_ptr->unk + 0x17c) == 0) {
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x13);
    if (iVar3 != 0) {
      (this_ptr->base).location.position.x = *(float *)(this_ptr->unk + 0x45c);
      (this_ptr->base).location.position.y = *(float *)(this_ptr->unk + 0x460);
      (this_ptr->base).location.position.z = *(float *)(this_ptr->unk + 0x464);
      iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
      (this_ptr->base).orient.pitch =
           ((float)iVar3 * 3.051851e-05f + (float)-0.5) * (float)3.1415926535000001;
      iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
      (this_ptr->base).orient.heading =
           (float)iVar3 * 3.051851e-05f * (float)3.1415926535000001 * (float)2;
      iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
      pCVar2 = (this_ptr->base).vtable._ub;
      (this_ptr->base).orient.bank =
           (float)iVar3 * 3.051851e-05f * (float)3.1415926535000001 * (float)2;
      local_18 = 8.133377e-39;
      (*pCVar2->setup)(&this_ptr->base);
    }
  }
  if (*(int *)(this_ptr->unk + 0x454) != 0) {
    local_18 = 8.133425e-39;
    core_box_cpp_CBox_process_FUN_0041e2f0((CBox *)(this_ptr->unk + 0x200),in_stack_00000014);
    (this_ptr->base).location.position.x = (((CBox *)(this_ptr->unk + 0x200))->position).x;
    (this_ptr->base).location.position.y = *(float *)(this_ptr->unk + 0x204);
    (this_ptr->base).location.position.z = *(float *)(this_ptr->unk + 0x208);
    pCVar1 = &(this_ptr->base).orient;
    if (pCVar1 != (COrientation *)(this_ptr->unk + 0x20c)) {
      pCVar1->pitch = *(float *)(this_ptr->unk + 0x20c);
      (this_ptr->base).orient.bank = *(float *)(this_ptr->unk + 0x210);
      (this_ptr->base).orient.heading = *(float *)(this_ptr->unk + 0x214);
      return;
    }
  }
  return;
}
