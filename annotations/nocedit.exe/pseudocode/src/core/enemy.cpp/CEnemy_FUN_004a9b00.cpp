// Name: core_enemy.cpp_CEnemy_FUN_004a9b00
// Address: 004a9b00
// Address Range: [[004a9b00, 004a9c26]]
// Convention: __cdecl
// Signature: void core_enemy.cpp_CEnemy_FUN_004a9b00(CEnemy * this_ptr)
// Globals:
//   TerminatedCString s_Capture_006243ba
//   undefined4 DAT_0065d7c8
//   CEventList* g_CEventListPtr = 02d05310
//   CGame* g_CGamePtr = 02d81a9c
//   CEventList g_CEventListInstance
//   CGame g_CGameInstance
//   undefined4 DAT_02d81c70
//   undefined4 DAT_02d81ccc
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_FUN_004a9b00(CEnemy *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CConsole *this_ptr_00;
  int iVar5;
  CPathMap *this_ptr_01;
  int iVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  float in_stack_00000008;
  CVector3f CStack_48;
  CVector3f *local_3c;
  float local_38;
  int local_34;
  float fStack_30;
  int local_2c;
  CLocation *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  fVar1 = this_ptr->victim_height;
  iVar5 = *(int *)this_ptr[1].base_character.base_actor.actor_name;
  if (iVar5 == 0) {
    if (((g_CGamePtr->field54_0x1d4 != 0) || (g_CGamePtr->allow_enemy_attack_flag == 0)) ||
       (iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (g_CEventListPtr,"Capture"), iVar5 != 0)) {
      this_ptr->field4_0xbe30 = 0;
      this_ptr->field6_0xbe38[8] = '\0';
      this_ptr->field6_0xbe38[9] = '\0';
      this_ptr->field6_0xbe38[10] = '\0';
      this_ptr->field6_0xbe38[0xb] = '\0';
      this_ptr->field6_0xbe38[4] = '\0';
      this_ptr->field6_0xbe38[5] = '\0';
      this_ptr->field6_0xbe38[6] = '\0';
      this_ptr->field6_0xbe38[7] = '\0';
      return;
    }
    fVar2 = *(float *)(this_ptr->field6_0xbe38 + 8) - in_stack_00000008;
    *(float *)(this_ptr->field6_0xbe38 + 8) = fVar2;
    if (fVar2 <= 0.0) {
      this_ptr->field4_0xbe30 = 0;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.5);
      local_38 = *(float *)(this_ptr->field6_0xbe38 + 0xc) *
                 *(float *)(this_ptr->field6_0xbe38 + 0xc);
      iVar5 = 0;
      *(float *)(this_ptr->field6_0xbe38 + 8) = local_14;
      if ((*(int *)(this_ptr->field6_0xbe38 + 4) == 0) &&
         (this_ptr->guard_distance < *(float *)(this_ptr->field6_0xbe38 + 0xc))) {
        local_38 = this_ptr->guard_distance * this_ptr->guard_distance;
      }
      local_28 = &(this_ptr->base_character).base_actor.location;
      local_2c = 0;
      local_20 = 0;
      for (local_24 = 0; local_24 < g_CDemonSetPtr->damage_listener_count; local_24 = local_24 + 1)
      {
        iVar8 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + local_2c + -4);
        iVar7 = (**(code **)(*(int *)(iVar8 + 0x154) + 0xf8))();
        if ((((iVar7 != 0) && (iVar7 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x120))(), iVar7 == 0)
             ) && (iVar7 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x68))(), iVar7 == 0)) &&
           (*(float *)(iVar8 + 0x2618) <= 0.0)) {
          fVar2 = *(float *)(iVar8 + 0x20) - (local_28->position).x;
          fVar3 = *(float *)(iVar8 + 0x24) - (local_28->position).y;
          fVar4 = *(float *)(iVar8 + 0x28) - (local_28->position).z;
          if ((ABS(fVar3) <= fVar1) &&
             (fVar3 = fVar3 * FLOAT_006243d6,
             fStack_30 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3, fStack_30 <= local_38)) {
            *(int *)((int)&DAT_02cf2bf4 + local_20) = iVar8;
            *(float *)((int)&DAT_02cf4b34 + local_20) = fStack_30;
            local_20 = local_20 + 4;
            iVar5 = iVar5 + 1;
          }
        }
        local_2c = local_2c + 4;
      }
      local_34 = *(int *)(this_ptr->field6_0xbe38 + 4);
      local_3c = &(this_ptr->base_character).base_actor.location.position;
      this_ptr->field6_0xbe38[4] = '\0';
      this_ptr->field6_0xbe38[5] = '\0';
      this_ptr->field6_0xbe38[6] = '\0';
      this_ptr->field6_0xbe38[7] = '\0';
      while( true ) {
        iVar7 = 0;
        local_18 = 1e+20;
        iVar8 = -1;
        if (0 < iVar5) {
          iVar6 = 0;
          do {
            if (*(float *)((int)&DAT_02cf4b34 + iVar6) < local_18) {
              local_18 = *(float *)((int)&DAT_02cf4b34 + iVar6);
              iVar8 = iVar7;
            }
            iVar7 = iVar7 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar7 < iVar5);
        }
        if (iVar8 < 0) break;
        local_1c = (&DAT_02cf2bf4)[iVar8];
        iVar7 = core_enemy_cpp_FUN_004a9a50();
        this_ptr_00 = g_CConsolePtr;
        if (iVar7 != 0) {
          *(int *)(this_ptr->field6_0xbe38 + 4) = local_1c;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (this_ptr_00,"%s can see hero\n",this_ptr);
          return;
        }
        if ((((*(int *)(this_ptr[1].base_character.base_actor.actor_name + 4) != 0) ||
             ((*(int *)(this_ptr[1].base_character.base_actor.actor_name + 4) == 0 &&
              (local_1c == local_34)))) &&
            (this_ptr_01 = (CPathMap *)(**(code **)(*(int *)(local_1c + 0x154) + 0xbc))(),
            this_ptr_01 != (CPathMap *)0x0)) &&
           (iVar7 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                              (this_ptr_01,local_3c,&CStack_48,
                               (this_ptr->base_character).base_actor.field7_0x6c), iVar7 == 1)) {
          *(int *)(this_ptr->field6_0xbe38 + 4) = local_1c;
          return;
        }
        (&DAT_02cf4b34)[iVar8] = 0x7149f2ca;
        if (local_34 == local_1c) {
          *(int *)(this_ptr->field6_0xbe38 + 4) = local_1c;
        }
      }
    }
    else if ((*(int *)(this_ptr->field6_0xbe38 + 4) != 0) &&
            (iVar5 = (**(code **)(*(int *)(*(int *)(this_ptr->field6_0xbe38 + 4) + 0x154) + 0x120))
                               (), iVar5 != 0)) {
      this_ptr->field6_0xbe38[8] = '\0';
      this_ptr->field6_0xbe38[9] = '\0';
      this_ptr->field6_0xbe38[10] = '\0';
      this_ptr->field6_0xbe38[0xb] = '\0';
      this_ptr->field4_0xbe30 = 0;
      this_ptr->field6_0xbe38[4] = '\0';
      this_ptr->field6_0xbe38[5] = '\0';
      this_ptr->field6_0xbe38[6] = '\0';
      this_ptr->field6_0xbe38[7] = '\0';
      return;
    }
  }
  else {
    if (iVar5 == DAT_0065d7c8) {
      this_ptr->field6_0xbe38[4] = '\0';
      this_ptr->field6_0xbe38[5] = '\0';
      this_ptr->field6_0xbe38[6] = '\0';
      this_ptr->field6_0xbe38[7] = '\0';
    }
    else {
      *(int *)(this_ptr->field6_0xbe38 + 4) = iVar5;
    }
    this_ptr->field4_0xbe30 = 0;
    this_ptr->field6_0xbe38[8] = '\0';
    this_ptr->field6_0xbe38[9] = '\0';
    this_ptr->field6_0xbe38[10] = '\0';
    this_ptr->field6_0xbe38[0xb] = '\0';
  }
  return;
}


// Assembly code:
// 004a9b00: PUSH EBX
//   Label: core_enemy.cpp_CEnemy_FUN_004a9b00
// 004a9b01: PUSH ESI
// 004a9b02: PUSH EDI
// 004a9b03: PUSH EBP
// 004a9b04: MOV EBP,ESP
// 004a9b06: SUB ESP,0x48
// 004a9b09: AND ESP,0xfffffff8
// 004a9b0c: MOV EDI,dword ptr [EBP + 0x14]
// 004a9b0f: MOV EAX,dword ptr [EDI + 0xbeb0]
// 004a9b15: MOV EDX,dword ptr [EDI + 0xbeb4]
// 004a9b1b: MOV dword ptr [ESP],EAX
// 004a9b1e: TEST EDX,EDX
// 004a9b20: JZ 0x004a9b57
//   XREF to: 004a9b57 (CONDITIONAL_JUMP)
// 004a9b22: CMP EDX,dword ptr [0x0065d7c8]
//   XREF to: 0065d7c8 (READ)
// 004a9b28: JNZ 0x004a9b4f
//   XREF to: 004a9b4f (CONDITIONAL_JUMP)
// 004a9b2a: MOV dword ptr [EDI + 0xbe3c],0x0
// 004a9b34: MOV dword ptr [EDI + 0xbe30],0x0
//   Label: LAB_004a9b34
// 004a9b3e: MOV dword ptr [EDI + 0xbe40],0x0
// 004a9b48: MOV ESP,EBP
//   Label: LAB_004a9b48
// 004a9b4a: POP EBP
// 004a9b4b: POP EDI
// 004a9b4c: POP ESI
// 004a9b4d: POP EBX
// 004a9b4e: RET
// 004a9b4f: MOV dword ptr [EDI + 0xbe3c],EDX
//   Label: LAB_004a9b4f
// 004a9b55: JMP 0x004a9b34
//   XREF to: 004a9b34 (UNCONDITIONAL_JUMP)
// 004a9b57: MOV EAX,[0x0067b654]
//   Label: LAB_004a9b57
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (DATA)
// 004a9b5c: CMP dword ptr [EAX + 0x1d4],0x0
//   XREF to: 02d81c70 (READ)
// 004a9b63: JNZ 0x004a9b6e
//   XREF to: 004a9b6e (CONDITIONAL_JUMP)
// 004a9b65: CMP dword ptr [EAX + 0x230],0x0
//   XREF to: 02d81ccc (READ)
// 004a9b6c: JNZ 0x004a9b93
//   XREF to: 004a9b93 (CONDITIONAL_JUMP)
// 004a9b6e: MOV dword ptr [EDI + 0xbe30],0x0
//   Label: LAB_004a9b6e
// 004a9b78: MOV dword ptr [EDI + 0xbe40],0x0
// 004a9b82: MOV dword ptr [EDI + 0xbe3c],0x0
// 004a9b8c: MOV ESP,EBP
// 004a9b8e: POP EBP
// 004a9b8f: POP EDI
// 004a9b90: POP ESI
// 004a9b91: POP EBX
// 004a9b92: RET
// 004a9b93: PUSH 0x6243ba
//   Label: LAB_004a9b93
//   XREF to: 006243ba (DATA)
// 004a9b98: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004a9b9e: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 004a9b9f: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004a9ba4: ADD ESP,0x8
// 004a9ba7: TEST EAX,EAX
// 004a9ba9: JNZ 0x004a9b6e
//   XREF to: 004a9b6e (CONDITIONAL_JUMP)
// 004a9bab: FLD float ptr [EDI + 0xbe40]
// 004a9bb1: FSUB float ptr [EBP + 0x18]
// 004a9bb4: FST float ptr [EDI + 0xbe40]
// 004a9bba: FLDZ
// 004a9bbc: FCOMPP
// 004a9bbe: FNSTSW AX
// 004a9bc0: SAHF
// 004a9bc1: JNC 0x004a9c0e
//   XREF to: 004a9c0e (CONDITIONAL_JUMP)
// 004a9bc3: MOV EBX,dword ptr [EDI + 0xbe3c]
// 004a9bc9: TEST EBX,EBX
// 004a9bcb: JZ 0x004a9b48
//   XREF to: 004a9b48 (CONDITIONAL_JUMP)
// 004a9bd1: PUSH EBX
// 004a9bd2: MOV EDX,dword ptr [EBX + 0x154]
// 004a9bd8: CALL dword ptr [EDX + 0x120]
// 004a9bde: ADD ESP,0x4
// 004a9be1: TEST EAX,EAX
// 004a9be3: JZ 0x004a9b48
//   XREF to: 004a9b48 (CONDITIONAL_JUMP)
// 004a9be9: MOV dword ptr [EDI + 0xbe40],0x0
// 004a9bf3: MOV dword ptr [EDI + 0xbe30],0x0
// 004a9bfd: MOV dword ptr [EDI + 0xbe3c],0x0
// 004a9c07: MOV ESP,EBP
// 004a9c09: POP EBP
// 004a9c0a: POP EDI
// 004a9c0b: POP ESI
// 004a9c0c: POP EBX
// 004a9c0d: RET
// 004a9c0e: PUSH 0x3fc00000
//   Label: LAB_004a9c0e
// 004a9c13: PUSH 0x3f000000
// 004a9c18: MOV dword ptr [EDI + 0xbe30],0x0
// 004a9c22: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
