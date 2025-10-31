// Name: core_hero.cpp_FUN_004f33b0
// Address: 004f33b0
// Address Range: [[004f33b0, 004f3576]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f33b0()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5e3d [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062ec76 = 10
//   double DOUBLE_0062ec7e = 1.04719755116667
//   double DOUBLE_0062ec86 = 5
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_FUN_0040cd70
//   core_charactr.cpp_CCharacter_FUN_0042d360
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f33b0(undefined4 param_1) */

undefined4 core_hero_cpp_FUN_004f33b0(void)

{
  CLocation *pCVar1;
  CCharacter *this_ptr;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  float fVar5;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  int iStack_6c;
  float fVar6;
  CVector3f CStack_2c;
  undefined4 local_20;
  float local_1c;
  int iStack_18;
  
  iVar3 = core_charactr_cpp_CCharacter_FUN_0042d360(in_stack_00000004);
  if (iVar3 == 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) != 0) {
      return 1;
    }
    pCVar1 = &(in_stack_00000004->base_actor).location;
    iStack_18 = 0;
    for (local_1c = 0.0; (int)local_1c < (int)g_CDemonSetPtr->actor_list_ptr;
        local_1c = (float)((int)local_1c + 1)) {
      this_ptr = *(CCharacter **)(g_CDemonSetPtr->actor_list_data + iStack_18);
      fVar6 = (this_ptr->base_actor).location.position.x - (pCVar1->position).x;
      fVar2 = (this_ptr->base_actor).location.position.z -
              (in_stack_00000004->base_actor).location.position.z;
      if (((ABS((this_ptr->base_actor).location.position.y -
                (in_stack_00000004->base_actor).location.position.y) <= (float)DOUBLE_0062ec76) &&
          (SQRT(fVar2 * fVar2 + fVar6 * fVar6) <= (float)DOUBLE_0062ec76)) &&
         (this_ptr != in_stack_00000004)) {
        pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_2c,(CVector3f *)&stack0xffffffa4);
        fVar5 = core_actor_cpp_FUN_0040cd70(pCVar4->y - (in_stack_00000004->base_actor).orient.bank)
        ;
        if (ABS(fVar5) <= (float)DOUBLE_0062ec7e) {
          pCVar4 = core_actor_cpp_CDemonActor_FUN_00408f10(&this_ptr->base_actor);
          if ((pCVar4->z <= 0.0) &&
             ((*((this_ptr->base_actor).metadata.vtable)->getInteractionInfo)
                        (&this_ptr->base_actor,(SInteractionInfo *)&stack0xffffff90), fVar6 != 0.0))
          {
            CStack_2c.z = 0.0;
            local_20 = 0;
            iStack_6c = 0x4f3525;
            local_1c = fVar2;
            core_actor_cpp_CDemonActor_FUN_00408ec0(&this_ptr->base_actor);
            fVar6 = CStack_2c.x - (pCVar1->position).x;
            fVar2 = CStack_2c.z - (in_stack_00000004->base_actor).location.position.z;
            if ((SQRT(fVar2 * fVar2 + fVar6 * fVar6) <= (float)DOUBLE_0062ec86) &&
               (iVar3 = (*((this_ptr->base_actor).metadata.vtable)->startInteraction)
                                  (&this_ptr->base_actor,&in_stack_00000004->base_actor), iVar3 != 0
               )) {
              *(CCharacter **)(in_stack_00000004[2].cloth_data + 0x54d0) = this_ptr;
              return 1;
            }
          }
        }
      }
      iStack_18 = iStack_18 + 4;
    }
  }
  return 0;
}


// Assembly code:
// 004f33b0: PUSH EBX
//   Label: core_hero.cpp_FUN_004f33b0
// 004f33b1: PUSH ESI
// 004f33b2: PUSH EDI
// 004f33b3: PUSH EBP
// 004f33b4: MOV EBP,ESP
// 004f33b6: SUB ESP,0x70
// 004f33b9: AND ESP,0xfffffff8
// 004f33bc: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f33bf: PUSH EDI
// 004f33c0: CALL core_charactr.cpp_CCharacter_FUN_0042d360
//   XREF to: 0042d360 (UNCONDITIONAL_CALL)
// 004f33c5: ADD ESP,0x4
// 004f33c8: TEST EAX,EAX
// 004f33ca: JNZ 0x004f3449
//   XREF to: 004f3449 (CONDITIONAL_JUMP)
// 004f33d0: CMP dword ptr [EDI + 0x1fbb0],0x0
// 004f33d7: JNZ 0x004f3452
//   XREF to: 004f3452 (CONDITIONAL_JUMP)
// 004f33dd: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004f33e1: LEA ESI,[EDI + 0x20]
// 004f33e4: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f33e8: MOV EAX,[0x006810c8]
//   Label: LAB_004f33e8
//   XREF to: 006810c8 (READ)
// 004f33ed: MOV EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x20] (READ)
// 004f33f1: CMP EDX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004f33f7: JGE 0x004f3449
//   XREF to: 004f3449 (CONDITIONAL_JUMP)
// 004f33f9: ADD EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 004f33fd: MOV EBX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
//   XREF to: 032613d4 (DATA)
// 004f3403: LEA EAX,[EBX + 0x20]
// 004f3406: FLD float ptr [EAX]
// 004f3408: FSUB float ptr [ESI]
// 004f340a: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x60] (WRITE)
// 004f340e: FLD float ptr [EAX + 0x4]
// 004f3411: FSUB float ptr [ESI + 0x4]
// 004f3414: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x5c] (WRITE)
// 004f3418: FLD float ptr [EAX + 0x8]
// 004f341b: FXCH
// 004f341d: FABS
// 004f341f: FXCH
// 004f3421: FSUB float ptr [ESI + 0x8]
// 004f3424: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x58] (WRITE)
// 004f3428: FCOMP double ptr [0x0062ec76]
//   XREF to: 0062ec76 (READ)
// 004f342e: FNSTSW AX
// 004f3430: SAHF
// 004f3431: JBE 0x004f3459
//   XREF to: 004f3459 (CONDITIONAL_JUMP)
// 004f3433: MOV EBX,dword ptr [ESP + 0x60]
//   Label: LAB_004f3433
//   XREF to: Stack[-0x20] (READ)
// 004f3437: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 004f343b: INC EBX
// 004f343c: ADD ECX,0x4
// 004f343f: MOV dword ptr [ESP + 0x60],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 004f3443: MOV dword ptr [ESP + 0x64],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f3447: JMP 0x004f33e8
//   XREF to: 004f33e8 (UNCONDITIONAL_JUMP)
// 004f3449: XOR EAX,EAX
//   Label: LAB_004f3449
// 004f344b: MOV ESP,EBP
//   Label: LAB_004f344b
// 004f344d: POP EBP
// 004f344e: POP EDI
// 004f344f: POP ESI
// 004f3450: POP EBX
// 004f3451: RET
// 004f3452: MOV EAX,0x1
//   Label: LAB_004f3452
// 004f3457: JMP 0x004f344b
//   XREF to: 004f344b (UNCONDITIONAL_JUMP)
// 004f3459: FLD float ptr [ESP + 0x20]
//   Label: LAB_004f3459
//   XREF to: Stack[-0x60] (READ)
// 004f345d: FMUL ST0
// 004f345f: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x58] (READ)
// 004f3463: FMUL ST0
// 004f3465: XOR EAX,EAX
// 004f3467: FADDP
// 004f3469: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004f346d: FSQRT
// 004f346f: FCOMP double ptr [0x0062ec76]
//   XREF to: 0062ec76 (READ)
// 004f3475: FNSTSW AX
// 004f3477: SAHF
// 004f3478: JA 0x004f3433
//   XREF to: 004f3433 (CONDITIONAL_JUMP)
// 004f347a: CMP EBX,EDI
// 004f347c: JZ 0x004f3433
//   XREF to: 004f3433 (CONDITIONAL_JUMP)
// 004f347e: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x60] (DATA)
// 004f3482: PUSH EAX
// 004f3483: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x30] (DATA)
// 004f3487: PUSH EAX
// 004f3488: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f348d: FLD float ptr [EAX + 0x4]
// 004f3490: ADD ESP,0x8
// 004f3493: FSUB float ptr [EDI + 0x34]
// 004f3496: SUB ESP,0x4
// 004f3499: FSTP float ptr [ESP]
//   XREF to: Stack[-0x84] (DATA)
// 004f349c: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f34a1: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f34a5: FLD float ptr [ESP + 0x70]
//   XREF to: Stack[-0x14] (READ)
// 004f34a9: FABS
// 004f34ab: ADD ESP,0x4
// 004f34ae: FCOMP double ptr [0x0062ec7e]
//   XREF to: 0062ec7e (READ)
// 004f34b4: FNSTSW AX
// 004f34b6: SAHF
// 004f34b7: JA 0x004f3433
//   XREF to: 004f3433 (CONDITIONAL_JUMP)
// 004f34bd: PUSH ESI
// 004f34be: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x3c] (DATA)
// 004f34c2: PUSH EAX
// 004f34c3: PUSH EBX
// 004f34c4: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004f34c9: FLD float ptr [EAX + 0x8]
// 004f34cc: FLDZ
// 004f34ce: ADD ESP,0xc
// 004f34d1: FCOMPP
// 004f34d3: FNSTSW AX
// 004f34d5: SAHF
// 004f34d6: JC 0x004f3433
//   XREF to: 004f3433 (CONDITIONAL_JUMP)
// 004f34dc: MOV EDX,ESP
// 004f34de: PUSH EDX
// 004f34df: MOV EAX,dword ptr [EBX + 0x154]
// 004f34e5: PUSH EBX
// 004f34e6: CALL dword ptr [EAX + 0x90]
// 004f34ec: ADD ESP,0x8
// 004f34ef: CMP dword ptr [ESP],0x0
// 004f34f3: JZ 0x004f3433
//   XREF to: 004f3433 (CONDITIONAL_JUMP)
// 004f34f9: MOV ECX,dword ptr [ESP + 0x4]
// 004f34fd: TEST ECX,ECX
// 004f34ff: JNZ 0x004f3433
//   XREF to: 004f3433 (CONDITIONAL_JUMP)
// 004f3505: MOV EAX,dword ptr [ESP + 0x8]
// 004f3509: MOV dword ptr [ESP + 0x40],EAX
// 004f350d: LEA EAX,[ESP + 0x38]
// 004f3511: PUSH EAX
// 004f3512: LEA EAX,[ESP + 0x30]
// 004f3516: PUSH EAX
// 004f3517: PUSH EBX
// 004f3518: MOV dword ptr [ESP + 0x44],ECX
// 004f351c: MOV dword ptr [ESP + 0x48],ECX
// 004f3520: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f3525: ADD ESP,0xc
// 004f3528: FLD float ptr [ESP + 0x2c]
// 004f352c: FSUB float ptr [ESI]
// 004f352e: FMUL ST0
// 004f3530: FLD float ptr [ESP + 0x34]
// 004f3534: FSUB float ptr [ESI + 0x8]
// 004f3537: FMUL ST0
// 004f3539: FADDP
// 004f353b: FSQRT
// 004f353d: FCOMP double ptr [0x0062ec86]
//   XREF to: 0062ec86 (READ)
// 004f3543: FNSTSW AX
// 004f3545: SAHF
// 004f3546: JA 0x004f3433
//   XREF to: 004f3433 (CONDITIONAL_JUMP)
// 004f354c: PUSH EDI
// 004f354d: MOV EAX,dword ptr [EBX + 0x154]
// 004f3553: PUSH EBX
// 004f3554: CALL dword ptr [EAX + 0x94]
// 004f355a: ADD ESP,0x8
// 004f355d: TEST EAX,EAX
// 004f355f: JZ 0x004f3433
//   XREF to: 004f3433 (CONDITIONAL_JUMP)
// 004f3565: MOV EAX,0x1
// 004f356a: MOV dword ptr [EDI + 0x1fbb0],EBX
// 004f3570: MOV ESP,EBP
// 004f3572: POP EBP
// 004f3573: POP EDI
// 004f3574: POP ESI
// 004f3575: POP EBX
// 004f3576: RET
