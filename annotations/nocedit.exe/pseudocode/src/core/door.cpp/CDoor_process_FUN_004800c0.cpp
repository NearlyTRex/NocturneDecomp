// Name: core_door.cpp_CDoor_process_FUN_004800c0
// Address: 004800c0
// Address Range: [[004800c0, 004807c0]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_process_FUN_004800c0(CDoor * this_ptr)
// Globals:
//   void* switchdataD_004800b0 = 0048011a
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_02d05310
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   core_door.cpp_CDoor_reposition_FUN_0047fd20
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_event.cpp_FUN_004aabe0
//   core_setcolid.cpp_CDemonSet_FUN_00574440
//   core_setcolid.cpp_CDemonSet_FUN_005744d0
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_process_FUN_004800c0(CDoor *this_ptr)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  float in_stack_00000008;
  undefined1 auStack_c8 [40];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  float local_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  float local_50;
  int iStack_4c;
  float fStack_48;
  CMatrix3x3f *pCStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  int iVar7;
  
  CStack_7c.y = (this_ptr->base_actor).location.position.x;
  CStack_7c.z = (this_ptr->base_actor).location.position.y;
  local_70 = (this_ptr->base_actor).location.position.z;
  local_50 = this_ptr->param;
  if (1 < this_ptr->one_shot) {
    return;
  }
  switch(this_ptr->door_state) {
  case 0:
    iVar7 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                      (g_CEventListPtr,this_ptr->field7_0x2e8);
    if (iVar7 != 0) {
      cVar1 = this_ptr->field9_0x47c[1000];
      this_ptr->door_state = 1;
      if (cVar1 != '\0') {
        (*((this_ptr->base_actor).metadata.vtable)->playSound)
                  (&this_ptr->base_actor,this_ptr->field9_0x47c + 1000);
      }
      core_setcolid_cpp_CDemonSet_FUN_005744d0(g_CDemonSetPtr);
    }
    this_ptr->param = 0.0;
    break;
  case 1:
    this_ptr->param = (in_stack_00000008 * this_ptr->max_param) / this_ptr->open_speed + local_50;
    if (this_ptr->max_param <= 0.0) {
      if (this_ptr->param < this_ptr->max_param) {
        this_ptr->door_state = 2;
        this_ptr->param = this_ptr->max_param;
        if (this_ptr->one_shot != 0) {
          this_ptr->one_shot = 2;
        }
      }
    }
    else if (this_ptr->max_param < this_ptr->param) {
      this_ptr->door_state = 2;
      this_ptr->param = this_ptr->max_param;
      if (this_ptr->one_shot != 0) {
        this_ptr->one_shot = 2;
      }
    }
    break;
  case 2:
    iVar7 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                      (g_CEventListPtr,this_ptr->field7_0x2e8 + 100);
    if ((iVar7 != 0) &&
       (cVar1 = this_ptr->field9_0x47c[0x44c], this_ptr->door_state = 3, cVar1 != '\0')) {
      (*((this_ptr->base_actor).metadata.vtable)->playSound)
                (&this_ptr->base_actor,this_ptr->field9_0x47c + 0x44c);
    }
    this_ptr->param = this_ptr->max_param;
    break;
  case 3:
    this_ptr->param = local_50 - (in_stack_00000008 * this_ptr->max_param) / this_ptr->close_speed;
    if (this_ptr->max_param <= 0.0) {
      if (0.0 < this_ptr->param) {
        this_ptr->door_state = 0;
        this_ptr->param = 0.0;
        if (this_ptr->one_shot != 0) {
          this_ptr->one_shot = 2;
        }
        core_setcolid_cpp_CDemonSet_FUN_00574440(g_CDemonSetPtr);
      }
    }
    else if (this_ptr->param < 0.0) {
      this_ptr->door_state = 0;
      this_ptr->param = 0.0;
      if (this_ptr->one_shot != 0) {
        this_ptr->one_shot = 2;
      }
      core_setcolid_cpp_CDemonSet_FUN_00574440(g_CDemonSetPtr);
    }
  }
  if (this_ptr->door_state == 0) {
    cVar1 = this_ptr->field7_0x2e8[300];
  }
  else {
    if (this_ptr->door_state != 2) goto LAB_004801a8;
    cVar1 = this_ptr->field7_0x2e8[200];
  }
  if (cVar1 != '\0') {
    core_event_cpp_FUN_004aabe0();
  }
LAB_004801a8:
  core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
  if ((this_ptr->param != local_50) && (this_ptr->door_type != 3)) {
    iVar6 = 0;
    (*((this_ptr->base_actor).metadata.vtable)->getBoundingBox)
              (&this_ptr->base_actor,(CBoundingBox3D *)(auStack_c8 + 0x20));
    iStack_4c = 0;
    pCStack_44 = &(this_ptr->base_actor).orient_matrix;
    for (iVar7 = 0; iVar7 < g_CDemonSetPtr->damage_listener_count; iVar7 = iVar7 + 1) {
      iVar2 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar6 + -4);
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)auStack_c8);
      iVar4 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x34))();
      if (((iVar4 == 2) &&
          ((float)auStack_c8._20_4_ + *(float *)(iVar2 + 0x24) <=
           (this_ptr->base_actor).location.position.y + fStack_90)) &&
         ((this_ptr->base_actor).location.position.y + fStack_9c <=
          (float)auStack_c8._24_4_ + *(float *)(iVar2 + 0x24))) {
        CStack_7c.x = *(float *)(iVar2 + 0x20) - (this_ptr->base_actor).location.position.x;
        CStack_7c.y = *(float *)(iVar2 + 0x24) - (this_ptr->base_actor).location.position.y;
        CStack_7c.z = *(float *)(iVar2 + 0x28) - (this_ptr->base_actor).location.position.z;
        pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                           (pCStack_44,&CStack_88,&CStack_7c);
        if (&CStack_64 != pCVar5) {
          CStack_64.x = pCVar5->x;
          CStack_64.y = pCVar5->y;
          CStack_64.z = pCVar5->z;
        }
        fStack_40 = CStack_64.x + (float)auStack_c8._28_4_;
        if (((fStack_a0 <= fStack_40) &&
            (fStack_3c = CStack_64.x - (float)auStack_c8._28_4_, fStack_3c <= fStack_94)) &&
           ((fStack_38 = CStack_64.z + (float)auStack_c8._28_4_, fStack_98 <= fStack_38 &&
            (fStack_34 = CStack_64.z - (float)auStack_c8._28_4_, fStack_34 <= fStack_8c)))) {
          if (((fStack_a0 <= fStack_3c) && (fStack_40 <= fStack_94)) &&
             ((fStack_98 <= fStack_34 && (fStack_38 <= fStack_8c)))) goto LAB_0048059d;
          fVar3 = (float)auStack_c8._28_4_ * (float)auStack_c8._28_4_;
          fStack_28 = SQRT(fVar3 - (fStack_94 - CStack_64.x) * (fStack_94 - CStack_64.x));
          fStack_2c = CStack_64.z + fStack_28;
          fStack_28 = CStack_64.z - fStack_28;
          if (((fStack_98 <= fStack_2c) && (fStack_2c <= fStack_8c)) ||
             ((fStack_98 <= fStack_28 && (fStack_28 <= fStack_8c)))) goto LAB_0048059d;
          fStack_14 = SQRT(fVar3 - (fStack_a0 - CStack_64.x) * (fStack_a0 - CStack_64.x));
          fStack_1c = CStack_64.z + fStack_14;
          fStack_14 = CStack_64.z - fStack_14;
          if (((fStack_98 <= fStack_1c) && (fStack_1c <= fStack_8c)) ||
             ((fStack_98 <= fStack_14 && (fStack_14 <= fStack_8c)))) goto LAB_0048059d;
          fStack_18 = SQRT(fVar3 - (fStack_8c - CStack_64.z) * (fStack_8c - CStack_64.z));
          fStack_20 = CStack_64.x + fStack_18;
          fStack_18 = CStack_64.x - fStack_18;
          if (((fStack_a0 <= fStack_20) && (fStack_20 <= fStack_94)) ||
             ((fStack_a0 <= fStack_18 && (fStack_18 <= fStack_94)))) goto LAB_0048059d;
          fStack_30 = SQRT(fVar3 - (fStack_98 - CStack_64.z) * (fStack_98 - CStack_64.z));
          fStack_24 = CStack_64.x + fStack_30;
          fStack_30 = CStack_64.x - fStack_30;
          if (((fStack_a0 <= fStack_24) && (fStack_24 <= fStack_94)) ||
             ((fStack_a0 <= fStack_30 && (fStack_30 <= fStack_94)))) goto LAB_0048059d;
        }
      }
      iVar6 = iVar6 + 4;
    }
    if (iStack_4c != 0) {
LAB_0048059d:
      (this_ptr->base_actor).location.position.x = local_70;
      (this_ptr->base_actor).location.position.y = fStack_6c;
      (this_ptr->base_actor).location.position.z = fStack_68;
      this_ptr->param = fStack_48;
      core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
      return;
    }
  }
  return;
}


// Assembly code:
// 004800c0: PUSH EBX
//   Label: core_door.cpp_CDoor_process_FUN_004800c0
// 004800c1: PUSH ESI
// 004800c2: PUSH EDI
// 004800c3: PUSH EBP
// 004800c4: SUB ESP,0xc0
// 004800ca: MOV ESI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[0x4] (READ)
// 004800d1: LEA EDX,[ESI + 0x20]
// 004800d4: MOV EAX,dword ptr [EDX]
// 004800d6: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 004800da: LEA EAX,[EDX + 0x4]
// 004800dd: MOV EAX,dword ptr [EAX]
// 004800df: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 004800e3: LEA EAX,[EDX + 0x8]
// 004800e6: MOV EAX,dword ptr [EAX]
// 004800e8: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 004800ec: MOV EAX,dword ptr [ESI + 0x9ac]
// 004800f2: MOV EDX,dword ptr [ESI + 0x9c8]
// 004800f8: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004800ff: CMP EDX,0x2
// 00480102: JGE 0x0048021d
//   XREF to: 0048021d (CONDITIONAL_JUMP)
// 00480108: MOV EAX,dword ptr [ESI + 0x2e0]
// 0048010e: CMP EAX,0x3
// 00480111: JA 0x00480176
//   XREF to: 00480176 (CONDITIONAL_JUMP)
// 00480113: JMP dword ptr [EAX*0x4 + 0x4800b0]
//   Label: switchD
//   XREF to: 0048011a (COMPUTED_JUMP)
//   XREF to: 00480228 (COMPUTED_JUMP)
//   XREF to: 0048027a (COMPUTED_JUMP)
//   XREF to: 0048033d (COMPUTED_JUMP)
//   XREF to: 004800b0 (DATA)
// 0048011a: LEA EAX,[ESI + 0x2e8]
//   Label: caseD_0
// 00480120: PUSH EAX
// 00480121: MOV EBX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00480127: PUSH EBX
//   XREF to: 02d05310 (DATA)
// 00480128: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0048012d: ADD ESP,0x8
// 00480130: TEST EAX,EAX
// 00480132: JZ 0x0048016c
//   XREF to: 0048016c (CONDITIONAL_JUMP)
// 00480134: MOV DL,byte ptr [ESI + 0x864]
// 0048013a: MOV dword ptr [ESI + 0x2e0],0x1
// 00480144: TEST DL,DL
// 00480146: JZ 0x0048015c
//   XREF to: 0048015c (CONDITIONAL_JUMP)
// 00480148: LEA EDX,[ESI + 0x864]
// 0048014e: PUSH EDX
// 0048014f: MOV EAX,dword ptr [ESI + 0x154]
// 00480155: PUSH ESI
// 00480156: CALL dword ptr [EAX + 0x24]
// 00480159: ADD ESP,0x8
// 0048015c: PUSH ESI
//   Label: LAB_0048015c
// 0048015d: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00480163: PUSH EDI
//   XREF to: 03114278 (DATA)
// 00480164: CALL core_setcolid.cpp_CDemonSet_FUN_005744d0
//   XREF to: 005744d0 (UNCONDITIONAL_CALL)
// 00480169: ADD ESP,0x8
// 0048016c: MOV dword ptr [ESI + 0x9ac],0x0
//   Label: LAB_0048016c
// 00480176: MOV EAX,dword ptr [ESI + 0x2e0]
//   Label: default
// 0048017c: TEST EAX,EAX
// 0048017e: JBE 0x00480410
//   XREF to: 00480410 (CONDITIONAL_JUMP)
// 00480184: CMP EAX,0x2
// 00480187: JNZ 0x004801a8
//   XREF to: 004801a8 (CONDITIONAL_JUMP)
// 00480189: CMP byte ptr [ESI + 0x3b0],0x0
// 00480190: JZ 0x004801a8
//   XREF to: 004801a8 (CONDITIONAL_JUMP)
// 00480192: LEA EAX,[ESI + 0x3b0]
// 00480198: PUSH EAX
// 00480199: MOV EBP,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 0048019f: PUSH EBP
//   XREF to: 02d05310 (DATA)
// 004801a0: CALL core_event.cpp_FUN_004aabe0
//   Label: LAB_004801a0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 004801a5: ADD ESP,0x8
// 004801a8: PUSH ESI
//   Label: LAB_004801a8
// 004801a9: CALL core_door.cpp_CDoor_reposition_FUN_0047fd20
//   XREF to: 0047fd20 (UNCONDITIONAL_CALL)
// 004801ae: ADD ESP,0x4
// 004801b1: FLD float ptr [ESI + 0x9ac]
// 004801b7: FCOMP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x50] (READ)
// 004801be: FNSTSW AX
// 004801c0: SAHF
// 004801c1: JZ 0x0048021d
//   XREF to: 0048021d (CONDITIONAL_JUMP)
// 004801c3: CMP dword ptr [ESI + 0x2d8],0x3
// 004801ca: JZ 0x0048021d
//   XREF to: 0048021d (CONDITIONAL_JUMP)
// 004801cc: LEA EDX,[ESP + 0x28]
//   XREF to: Stack[-0xa8] (DATA)
// 004801d0: PUSH EDX
// 004801d1: MOV EAX,dword ptr [ESI + 0x154]
// 004801d7: PUSH ESI
// 004801d8: XOR EDI,EDI
// 004801da: CALL dword ptr [EAX + 0x14]
// 004801dd: ADD ESP,0x8
// 004801e0: XOR ECX,ECX
// 004801e2: LEA EBP,[ESI + 0x20]
// 004801e5: MOV dword ptr [ESP + 0x7c],ECX
// 004801e9: LEA EAX,[ESI + 0x3c]
// 004801ec: MOV dword ptr [ESP + 0xb8],ECX
// 004801f3: MOV dword ptr [ESP + 0x84],EAX
// 004801fa: MOV EAX,[0x006810c8]
//   Label: LAB_004801fa
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 004801ff: MOV EDX,dword ptr [ESP + 0xb8]
// 00480206: CMP EDX,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 0048020c: JL 0x00480446
//   XREF to: 00480446 (CONDITIONAL_JUMP)
// 00480212: CMP dword ptr [ESP + 0x7c],0x0
// 00480217: JNZ 0x0048059d
//   XREF to: 0048059d (CONDITIONAL_JUMP)
// 0048021d: ADD ESP,0xc0
//   Label: LAB_0048021d
// 00480223: POP EBP
// 00480224: POP EDI
// 00480225: POP ESI
// 00480226: POP EBX
// 00480227: RET
// 00480228: LEA EAX,[ESI + 0x34c]
//   Label: caseD_2
// 0048022e: PUSH EAX
// 0048022f: MOV EAX,[0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00480234: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 00480235: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0048023a: ADD ESP,0x8
// 0048023d: TEST EAX,EAX
// 0048023f: JZ 0x00480269
//   XREF to: 00480269 (CONDITIONAL_JUMP)
// 00480241: MOV AH,byte ptr [ESI + 0x8c8]
// 00480247: MOV dword ptr [ESI + 0x2e0],0x3
// 00480251: TEST AH,AH
// 00480253: JZ 0x00480269
//   XREF to: 00480269 (CONDITIONAL_JUMP)
// 00480255: LEA EDX,[ESI + 0x8c8]
// 0048025b: PUSH EDX
// 0048025c: MOV EAX,dword ptr [ESI + 0x154]
// 00480262: PUSH ESI
// 00480263: CALL dword ptr [EAX + 0x24]
// 00480266: ADD ESP,0x8
// 00480269: MOV EAX,dword ptr [ESI + 0x9b0]
//   Label: LAB_00480269
// 0048026f: MOV dword ptr [ESI + 0x9ac],EAX
// 00480275: JMP 0x00480176
//   XREF to: 00480176 (UNCONDITIONAL_JUMP)
// 0048027a: FLD float ptr [ESP + 0xd8]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 00480281: FMUL float ptr [ESI + 0x9b0]
// 00480287: FDIV float ptr [ESI + 0x9b4]
// 0048028d: FLD float ptr [ESI + 0x9b0]
// 00480293: FXCH
// 00480295: FADD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x50] (READ)
// 0048029c: FLDZ
// 0048029e: FXCH
// 004802a0: FSTP float ptr [ESI + 0x9ac]
// 004802a6: FCOMPP
// 004802a8: FNSTSW AX
// 004802aa: SAHF
// 004802ab: JNC 0x004802f5
//   XREF to: 004802f5 (CONDITIONAL_JUMP)
// 004802ad: FLD float ptr [ESI + 0x9ac]
// 004802b3: FCOMP float ptr [ESI + 0x9b0]
// 004802b9: FNSTSW AX
// 004802bb: SAHF
// 004802bc: JBE 0x00480176
//   XREF to: 00480176 (CONDITIONAL_JUMP)
// 004802c2: MOV dword ptr [ESI + 0x2e0],0x2
// 004802cc: FLD float ptr [ESI + 0x9b0]
// 004802d2: MOV ECX,dword ptr [ESI + 0x9c8]
// 004802d8: FSTP float ptr [ESI + 0x9ac]
// 004802de: TEST ECX,ECX
// 004802e0: JZ 0x00480176
//   XREF to: 00480176 (CONDITIONAL_JUMP)
// 004802e6: MOV dword ptr [ESI + 0x9c8],0x2
// 004802f0: JMP 0x00480176
//   XREF to: 00480176 (UNCONDITIONAL_JUMP)
// 004802f5: FLD float ptr [ESI + 0x9ac]
//   Label: LAB_004802f5
// 004802fb: FCOMP float ptr [ESI + 0x9b0]
// 00480301: FNSTSW AX
// 00480303: SAHF
// 00480304: JNC 0x00480176
//   XREF to: 00480176 (CONDITIONAL_JUMP)
// 0048030a: MOV dword ptr [ESI + 0x2e0],0x2
// 00480314: FLD float ptr [ESI + 0x9b0]
// 0048031a: MOV EDX,dword ptr [ESI + 0x9c8]
// 00480320: FSTP float ptr [ESI + 0x9ac]
// 00480326: TEST EDX,EDX
// 00480328: JZ 0x00480176
//   XREF to: 00480176 (CONDITIONAL_JUMP)
// 0048032e: MOV dword ptr [ESI + 0x9c8],0x2
// 00480338: JMP 0x00480176
//   XREF to: 00480176 (UNCONDITIONAL_JUMP)
// 0048033d: FLD float ptr [ESP + 0xd8]
//   Label: caseD_3
//   XREF to: Stack[0x8] (READ)
// 00480344: FMUL float ptr [ESI + 0x9b0]
// 0048034a: FDIV float ptr [ESI + 0x9b8]
// 00480350: FLD float ptr [ESI + 0x9b0]
// 00480356: FXCH
// 00480358: FSUBR float ptr [ESP + 0x80]
//   XREF to: Stack[-0x50] (READ)
// 0048035f: FLDZ
// 00480361: FXCH
// 00480363: FSTP float ptr [ESI + 0x9ac]
// 00480369: FCOMPP
// 0048036b: FNSTSW AX
// 0048036d: SAHF
// 0048036e: JNC 0x004803c0
//   XREF to: 004803c0 (CONDITIONAL_JUMP)
// 00480370: FLD float ptr [ESI + 0x9ac]
// 00480376: FLDZ
// 00480378: FCOMPP
// 0048037a: FNSTSW AX
// 0048037c: SAHF
// 0048037d: JBE 0x00480176
//   XREF to: 00480176 (CONDITIONAL_JUMP)
// 00480383: MOV dword ptr [ESI + 0x2e0],0x0
// 0048038d: MOV EDI,dword ptr [ESI + 0x9c8]
// 00480393: MOV dword ptr [ESI + 0x9ac],0x0
// 0048039d: TEST EDI,EDI
// 0048039f: JZ 0x004803ab
//   XREF to: 004803ab (CONDITIONAL_JUMP)
// 004803a1: MOV dword ptr [ESI + 0x9c8],0x2
// 004803ab: PUSH ESI
//   Label: LAB_004803ab
// 004803ac: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004803b2: PUSH EBP
//   XREF to: 03114278 (DATA)
// 004803b3: CALL core_setcolid.cpp_CDemonSet_FUN_00574440
//   XREF to: 00574440 (UNCONDITIONAL_CALL)
// 004803b8: ADD ESP,0x8
// 004803bb: JMP 0x00480176
//   XREF to: 00480176 (UNCONDITIONAL_JUMP)
// 004803c0: FLD float ptr [ESI + 0x9ac]
//   Label: LAB_004803c0
// 004803c6: FLDZ
// 004803c8: FCOMPP
// 004803ca: FNSTSW AX
// 004803cc: SAHF
// 004803cd: JNC 0x00480176
//   XREF to: 00480176 (CONDITIONAL_JUMP)
// 004803d3: MOV dword ptr [ESI + 0x2e0],0x0
// 004803dd: MOV ECX,dword ptr [ESI + 0x9c8]
// 004803e3: MOV dword ptr [ESI + 0x9ac],0x0
// 004803ed: TEST ECX,ECX
// 004803ef: JZ 0x004803fb
//   XREF to: 004803fb (CONDITIONAL_JUMP)
// 004803f1: MOV dword ptr [ESI + 0x9c8],0x2
// 004803fb: PUSH ESI
//   Label: LAB_004803fb
// 004803fc: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00480402: PUSH EBX
//   XREF to: 03114278 (DATA)
// 00480403: CALL core_setcolid.cpp_CDemonSet_FUN_00574440
//   XREF to: 00574440 (UNCONDITIONAL_CALL)
// 00480408: ADD ESP,0x8
// 0048040b: JMP 0x00480176
//   XREF to: 00480176 (UNCONDITIONAL_JUMP)
// 00480410: CMP byte ptr [ESI + 0x414],0x0
//   Label: LAB_00480410
// 00480417: JZ 0x004801a8
//   XREF to: 004801a8 (CONDITIONAL_JUMP)
// 0048041d: LEA EAX,[ESI + 0x414]
// 00480423: PUSH EAX
// 00480424: MOV EAX,[0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00480429: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 0048042a: JMP 0x004801a0
//   XREF to: 004801a0 (UNCONDITIONAL_JUMP)
// 0048042f: MOV EDX,dword ptr [ESP + 0xb8]
//   Label: LAB_0048042f
// 00480436: INC EDX
// 00480437: ADD EDI,0x4
// 0048043a: MOV dword ptr [ESP + 0xb8],EDX
// 00480441: JMP 0x004801fa
//   XREF to: 004801fa (UNCONDITIONAL_JUMP)
// 00480446: MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f09c]
//   Label: LAB_00480446
//   XREF to: 03263314 (READ)
// 0048044d: MOV EAX,ESP
// 0048044f: PUSH EAX
// 00480450: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 00480455: ADD ESP,0x4
// 00480458: MOV EAX,ESP
// 0048045a: PUSH EAX
// 0048045b: MOV EDX,dword ptr [EBX + 0x154]
// 00480461: PUSH EBX
// 00480462: CALL dword ptr [EDX + 0x34]
// 00480465: ADD ESP,0x8
// 00480468: CMP EAX,0x2
// 0048046b: JNZ 0x0048042f
//   XREF to: 0048042f (CONDITIONAL_JUMP)
// 0048046d: FLD float ptr [ESP + 0x14]
// 00480471: FADD float ptr [EBX + 0x24]
// 00480474: FLD float ptr [ESI + 0x24]
// 00480477: FADD float ptr [ESP + 0x38]
// 0048047b: FCOMPP
// 0048047d: FNSTSW AX
// 0048047f: SAHF
// 00480480: JC 0x0048042f
//   XREF to: 0048042f (CONDITIONAL_JUMP)
// 00480482: FLD float ptr [ESP + 0x18]
// 00480486: FADD float ptr [EBX + 0x24]
// 00480489: FLD float ptr [ESI + 0x24]
// 0048048c: FADD float ptr [ESP + 0x2c]
// 00480490: FCOMPP
// 00480492: FNSTSW AX
// 00480494: SAHF
// 00480495: JA 0x0048042f
//   XREF to: 0048042f (CONDITIONAL_JUMP)
// 00480497: FLD float ptr [EBX + 0x20]
// 0048049a: LEA EAX,[ESP + 0x4c]
// 0048049e: FSUB float ptr [EBP]
// 004804a1: PUSH EAX
// 004804a2: FSTP float ptr [ESP + 0x50]
// 004804a6: LEA EAX,[ESP + 0x44]
// 004804aa: FLD float ptr [EBX + 0x24]
// 004804ad: PUSH EAX
// 004804ae: FSUB float ptr [EBP + 0x4]
// 004804b1: MOV EAX,dword ptr [ESP + 0x8c]
// 004804b8: FSTP float ptr [ESP + 0x58]
// 004804bc: FLD float ptr [EBX + 0x28]
// 004804bf: FSUB float ptr [EBP + 0x8]
// 004804c2: PUSH EAX
// 004804c3: FSTP float ptr [ESP + 0x60]
// 004804c7: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 004804cc: MOV EBX,EAX
// 004804ce: LEA EAX,[ESP + 0x70]
// 004804d2: ADD ESP,0xc
// 004804d5: CMP EAX,EBX
// 004804d7: JZ 0x004804ed
//   XREF to: 004804ed (CONDITIONAL_JUMP)
// 004804d9: MOV EAX,dword ptr [EBX]
// 004804db: MOV dword ptr [ESP + 0x64],EAX
// 004804df: MOV EAX,dword ptr [EBX + 0x4]
// 004804e2: MOV dword ptr [ESP + 0x68],EAX
// 004804e6: MOV EAX,dword ptr [EBX + 0x8]
// 004804e9: MOV dword ptr [ESP + 0x6c],EAX
// 004804ed: FLD float ptr [ESP + 0x64]
//   Label: LAB_004804ed
// 004804f1: FADD float ptr [ESP + 0x1c]
// 004804f5: FST float ptr [ESP + 0x88]
// 004804fc: FCOMP float ptr [ESP + 0x28]
// 00480500: FNSTSW AX
// 00480502: SAHF
// 00480503: JC 0x0048042f
//   XREF to: 0048042f (CONDITIONAL_JUMP)
// 00480509: FLD float ptr [ESP + 0x64]
// 0048050d: FSUB float ptr [ESP + 0x1c]
// 00480511: FST float ptr [ESP + 0x8c]
// 00480518: FCOMP float ptr [ESP + 0x34]
// 0048051c: FNSTSW AX
// 0048051e: SAHF
// 0048051f: JA 0x0048042f
//   XREF to: 0048042f (CONDITIONAL_JUMP)
// 00480525: FLD float ptr [ESP + 0x6c]
// 00480529: FADD float ptr [ESP + 0x1c]
// 0048052d: FST float ptr [ESP + 0x90]
// 00480534: FCOMP float ptr [ESP + 0x30]
// 00480538: FNSTSW AX
// 0048053a: SAHF
// 0048053b: JC 0x0048042f
//   XREF to: 0048042f (CONDITIONAL_JUMP)
// 00480541: FLD float ptr [ESP + 0x6c]
// 00480545: FSUB float ptr [ESP + 0x1c]
// 00480549: FST float ptr [ESP + 0x94]
// 00480550: FCOMP float ptr [ESP + 0x3c]
// 00480554: FNSTSW AX
// 00480556: SAHF
// 00480557: JA 0x0048042f
//   XREF to: 0048042f (CONDITIONAL_JUMP)
// 0048055d: FLD float ptr [ESP + 0x8c]
// 00480564: FCOMP float ptr [ESP + 0x28]
// 00480568: FNSTSW AX
// 0048056a: SAHF
// 0048056b: JC 0x004805d5
//   XREF to: 004805d5 (CONDITIONAL_JUMP)
// 0048056d: FLD float ptr [ESP + 0x88]
// 00480574: FCOMP float ptr [ESP + 0x34]
// 00480578: FNSTSW AX
// 0048057a: SAHF
// 0048057b: JA 0x004805d5
//   XREF to: 004805d5 (CONDITIONAL_JUMP)
// 0048057d: FLD float ptr [ESP + 0x94]
// 00480584: FCOMP float ptr [ESP + 0x30]
// 00480588: FNSTSW AX
// 0048058a: SAHF
// 0048058b: JC 0x004805d5
//   XREF to: 004805d5 (CONDITIONAL_JUMP)
// 0048058d: FLD float ptr [ESP + 0x90]
// 00480594: FCOMP float ptr [ESP + 0x3c]
// 00480598: FNSTSW AX
// 0048059a: SAHF
// 0048059b: JA 0x004805d5
//   XREF to: 004805d5 (CONDITIONAL_JUMP)
// 0048059d: LEA EDX,[ESI + 0x20]
//   Label: LAB_0048059d
// 004805a0: MOV EAX,dword ptr [ESP + 0x58]
// 004805a4: MOV dword ptr [EDX],EAX
// 004805a6: MOV EAX,dword ptr [ESP + 0x5c]
// 004805aa: MOV dword ptr [EDX + 0x4],EAX
// 004805ad: MOV EAX,dword ptr [ESP + 0x60]
// 004805b1: MOV dword ptr [EDX + 0x8],EAX
// 004805b4: MOV EAX,dword ptr [ESP + 0x80]
// 004805bb: PUSH ESI
// 004805bc: MOV dword ptr [ESI + 0x9ac],EAX
// 004805c2: CALL core_door.cpp_CDoor_reposition_FUN_0047fd20
//   XREF to: 0047fd20 (UNCONDITIONAL_CALL)
// 004805c7: ADD ESP,0x4
// 004805ca: ADD ESP,0xc0
// 004805d0: POP EBP
// 004805d1: POP EDI
// 004805d2: POP ESI
// 004805d3: POP EBX
// 004805d4: RET
// 004805d5: FLD float ptr [ESP + 0x1c]
//   Label: LAB_004805d5
// 004805d9: FMUL ST0
// 004805db: FLD float ptr [ESP + 0x34]
// 004805df: FSUB float ptr [ESP + 0x64]
// 004805e3: FMUL ST0
// 004805e5: FXCH
// 004805e7: FSTP float ptr [ESP + 0xbc]
// 004805ee: FSUBR float ptr [ESP + 0xbc]
// 004805f5: FSQRT
// 004805f7: FLD float ptr [ESP + 0x6c]
// 004805fb: FLD ST0
// 004805fd: FADD ST0,ST2
// 004805ff: FXCH
// 00480601: FSUBRP ST2,ST0
// 00480603: FSTP float ptr [ESP + 0x9c]
// 0048060a: FSTP float ptr [ESP + 0xa0]
// 00480611: FLD float ptr [ESP + 0x9c]
// 00480618: FCOMP float ptr [ESP + 0x30]
// 0048061c: FNSTSW AX
// 0048061e: SAHF
// 0048061f: JC 0x00480635
//   XREF to: 00480635 (CONDITIONAL_JUMP)
// 00480621: FLD float ptr [ESP + 0x9c]
// 00480628: FCOMP float ptr [ESP + 0x3c]
// 0048062c: FNSTSW AX
// 0048062e: SAHF
// 0048062f: JBE 0x0048059d
//   XREF to: 0048059d (CONDITIONAL_JUMP)
// 00480635: FLD float ptr [ESP + 0xa0]
//   Label: LAB_00480635
// 0048063c: FCOMP float ptr [ESP + 0x30]
// 00480640: FNSTSW AX
// 00480642: SAHF
// 00480643: JC 0x00480659
//   XREF to: 00480659 (CONDITIONAL_JUMP)
// 00480645: FLD float ptr [ESP + 0xa0]
// 0048064c: FCOMP float ptr [ESP + 0x3c]
// 00480650: FNSTSW AX
// 00480652: SAHF
// 00480653: JBE 0x0048059d
//   XREF to: 0048059d (CONDITIONAL_JUMP)
// 00480659: FLD float ptr [ESP + 0x28]
//   Label: LAB_00480659
// 0048065d: FSUB float ptr [ESP + 0x64]
// 00480661: FMUL ST0
// 00480663: FSUBR float ptr [ESP + 0xbc]
// 0048066a: FSQRT
// 0048066c: FLD float ptr [ESP + 0x6c]
// 00480670: FLD ST0
// 00480672: FADD ST0,ST2
// 00480674: FXCH
// 00480676: FSUBRP ST2,ST0
// 00480678: FSTP float ptr [ESP + 0xac]
// 0048067f: FSTP float ptr [ESP + 0xb4]
// 00480686: FLD float ptr [ESP + 0xac]
// 0048068d: FCOMP float ptr [ESP + 0x30]
// 00480691: FNSTSW AX
// 00480693: SAHF
// 00480694: JC 0x004806aa
//   XREF to: 004806aa (CONDITIONAL_JUMP)
// 00480696: FLD float ptr [ESP + 0xac]
// 0048069d: FCOMP float ptr [ESP + 0x3c]
// 004806a1: FNSTSW AX
// 004806a3: SAHF
// 004806a4: JBE 0x0048059d
//   XREF to: 0048059d (CONDITIONAL_JUMP)
// 004806aa: FLD float ptr [ESP + 0xb4]
//   Label: LAB_004806aa
// 004806b1: FCOMP float ptr [ESP + 0x30]
// 004806b5: FNSTSW AX
// 004806b7: SAHF
// 004806b8: JC 0x004806ce
//   XREF to: 004806ce (CONDITIONAL_JUMP)
// 004806ba: FLD float ptr [ESP + 0xb4]
// 004806c1: FCOMP float ptr [ESP + 0x3c]
// 004806c5: FNSTSW AX
// 004806c7: SAHF
// 004806c8: JBE 0x0048059d
//   XREF to: 0048059d (CONDITIONAL_JUMP)
// 004806ce: FLD float ptr [ESP + 0x3c]
//   Label: LAB_004806ce
// 004806d2: FSUB float ptr [ESP + 0x6c]
// 004806d6: FMUL ST0
// 004806d8: FSUBR float ptr [ESP + 0xbc]
// 004806df: FSQRT
// 004806e1: FLD float ptr [ESP + 0x64]
// 004806e5: FLD ST0
// 004806e7: FADD ST0,ST2
// 004806e9: FXCH
// 004806eb: FSUBRP ST2,ST0
// 004806ed: FSTP float ptr [ESP + 0xa8]
// 004806f4: FSTP float ptr [ESP + 0xb0]
// 004806fb: FLD float ptr [ESP + 0xa8]
// 00480702: FCOMP float ptr [ESP + 0x28]
// 00480706: FNSTSW AX
// 00480708: SAHF
// 00480709: JC 0x0048071f
//   XREF to: 0048071f (CONDITIONAL_JUMP)
// 0048070b: FLD float ptr [ESP + 0xa8]
// 00480712: FCOMP float ptr [ESP + 0x34]
// 00480716: FNSTSW AX
// 00480718: SAHF
// 00480719: JBE 0x0048059d
//   XREF to: 0048059d (CONDITIONAL_JUMP)
// 0048071f: FLD float ptr [ESP + 0xb0]
//   Label: LAB_0048071f
// 00480726: FCOMP float ptr [ESP + 0x28]
// 0048072a: FNSTSW AX
// 0048072c: SAHF
// 0048072d: JC 0x00480743
//   XREF to: 00480743 (CONDITIONAL_JUMP)
// 0048072f: FLD float ptr [ESP + 0xb0]
// 00480736: FCOMP float ptr [ESP + 0x34]
// 0048073a: FNSTSW AX
// 0048073c: SAHF
// 0048073d: JBE 0x0048059d
//   XREF to: 0048059d (CONDITIONAL_JUMP)
// 00480743: FLD float ptr [ESP + 0x30]
//   Label: LAB_00480743
// 00480747: FSUB float ptr [ESP + 0x6c]
// 0048074b: FMUL ST0
// 0048074d: FSUBR float ptr [ESP + 0xbc]
// 00480754: FSQRT
// 00480756: FLD float ptr [ESP + 0x64]
// 0048075a: FLD ST0
// 0048075c: FADD ST0,ST2
// 0048075e: FXCH
// 00480760: FSUBRP ST2,ST0
// 00480762: FSTP float ptr [ESP + 0xa4]
// 00480769: FSTP float ptr [ESP + 0x98]
// 00480770: FLD float ptr [ESP + 0xa4]
// 00480777: FCOMP float ptr [ESP + 0x28]
// 0048077b: FNSTSW AX
// 0048077d: SAHF
// 0048077e: JC 0x00480794
//   XREF to: 00480794 (CONDITIONAL_JUMP)
// 00480780: FLD float ptr [ESP + 0xa4]
// 00480787: FCOMP float ptr [ESP + 0x34]
// 0048078b: FNSTSW AX
// 0048078d: SAHF
// 0048078e: JBE 0x0048059d
//   XREF to: 0048059d (CONDITIONAL_JUMP)
// 00480794: FLD float ptr [ESP + 0x98]
//   Label: LAB_00480794
// 0048079b: FCOMP float ptr [ESP + 0x28]
// 0048079f: FNSTSW AX
// 004807a1: SAHF
// 004807a2: JC 0x0048042f
//   XREF to: 0048042f (CONDITIONAL_JUMP)
// 004807a8: FLD float ptr [ESP + 0x98]
// 004807af: FCOMP float ptr [ESP + 0x34]
// 004807b3: FNSTSW AX
// 004807b5: SAHF
// 004807b6: JA 0x0048042f
//   XREF to: 0048042f (CONDITIONAL_JUMP)
// 004807bc: JMP 0x0048059d
//   XREF to: 0048059d (UNCONDITIONAL_JUMP)
