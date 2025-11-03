// Name: core_anvil.cpp_CAnvil_process_FUN_00411d90
// Address: 00411d90
// Address Range: [[00411d90, 00411eb4]]
// Convention: __cdecl
// Signature: void core_anvil.cpp_CAnvil_process_FUN_00411d90(CAnvil * this_ptr)
// Globals:
//   undefined4 DAT_00614d2b
//   undefined4 DAT_00614d33
//   CEventList* g_CEventListPtr = 02d05310
//   CEventList g_CEventListInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_anvil_cpp_CAnvil_process_FUN_00411d90(CAnvil *this_ptr)

{
  CHero *pCVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  float in_stack_0000000c;
  SDamageInfo local_44;
  CAnvil *pCStack_8;
  
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->drop_condition);
  iVar3 = g_LocalHeroIndex;
  if (iVar4 != 0) {
    this_ptr->triggered = 1;
    pCVar1 = g_HeroActors[iVar3];
    (this_ptr->base_actor).location.position.x =
         (pCVar1->base_character).base_actor.location.position.x;
    (this_ptr->base_actor).location.position.y =
         (pCVar1->base_character).base_actor.location.position.y;
    (this_ptr->base_actor).location.position.z =
         (pCVar1->base_character).base_actor.location.position.z;
    (this_ptr->base_actor).location.area_id = (pCVar1->base_character).base_actor.location.area_id;
    (this_ptr->base_actor).location.position.y =
         this_ptr->drop_height + (this_ptr->base_actor).location.position.y;
  }
  if (this_ptr->triggered != 0) {
    fVar2 = this_ptr->yvel - in_stack_0000000c * (float)_DAT_00614d2b;
    this_ptr->yvel = fVar2;
    iVar3 = g_LocalHeroIndex;
    (this_ptr->base_actor).location.position.y = fVar2 + (this_ptr->base_actor).location.position.y;
    if ((this_ptr->base_actor).location.position.y <
        (g_HeroActors[iVar3]->base_character).base_actor.location.position.y) {
      (this_ptr->base_actor).location.position.y =
           (g_HeroActors[iVar3]->base_character).base_actor.location.position.y;
      this_ptr->yvel = 0.0;
    }
    if ((this_ptr->base_actor).location.position.y <
        (g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.location.position.y +
        (float)_DAT_00614d33) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_44);
      local_44.damage_flags = 0x461c3f9a;
      local_44.attacker = (CDemonActor *)&DAT_00000008;
      local_44.wielder = &this_ptr->base_actor;
      pCStack_8 = this_ptr;
      (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
        playAmbientSoundWithVolume)
                ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],(char *)&local_44.damage_amount,
                 unaff_EDI);
      return;
    }
  }
  return;
}


// Assembly code:
// 00411d90: PUSH EBX
//   Label: core_anvil.cpp_CAnvil_process_FUN_00411d90
// 00411d91: SUB ESP,0x44
// 00411d94: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00411d98: LEA EAX,[EBX + 0x2d4]
// 00411d9e: PUSH EAX
// 00411d9f: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00411da5: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 00411da6: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00411dab: ADD ESP,0x8
// 00411dae: TEST EAX,EAX
// 00411db0: JNZ 0x00411e23
//   XREF to: 00411e23 (CONDITIONAL_JUMP)
// 00411db2: CMP dword ptr [EBX + 0x33c],0x0
//   Label: LAB_00411db2
// 00411db9: JZ 0x00411e1e
//   XREF to: 00411e1e (CONDITIONAL_JUMP)
// 00411dbb: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 00411dbf: FMUL double ptr [0x00614d2b]
//   XREF to: 00614d2b (READ)
// 00411dc5: FSUBR float ptr [EBX + 0x340]
// 00411dcb: FST float ptr [EBX + 0x340]
// 00411dd1: FADD float ptr [EBX + 0x24]
// 00411dd4: MOV EDX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 00411dda: FSTP float ptr [EBX + 0x24]
// 00411ddd: MOV EDX,dword ptr [EDX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00411de4: FLD float ptr [EBX + 0x24]
// 00411de7: FCOMP float ptr [EDX + 0x24]
// 00411dea: FNSTSW AX
// 00411dec: SAHF
// 00411ded: JNC 0x00411dff
//   XREF to: 00411dff (CONDITIONAL_JUMP)
// 00411def: MOV EAX,dword ptr [EDX + 0x24]
// 00411df2: MOV dword ptr [EBX + 0x24],EAX
// 00411df5: MOV dword ptr [EBX + 0x340],0x0
// 00411dff: MOV EAX,[0x02db87d0]
//   Label: LAB_00411dff
//   XREF to: 02db87d0 (READ)
// 00411e04: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00411e0b: FLD float ptr [EAX + 0x24]
// 00411e0e: FADD double ptr [0x00614d33]
//   XREF to: 00614d33 (READ)
// 00411e14: FLD float ptr [EBX + 0x24]
// 00411e17: FCOMPP
// 00411e19: FNSTSW AX
// 00411e1b: SAHF
// 00411e1c: JC 0x00411e64
//   XREF to: 00411e64 (CONDITIONAL_JUMP)
// 00411e1e: ADD ESP,0x44
//   Label: LAB_00411e1e
// 00411e21: POP EBX
// 00411e22: RET
// 00411e23: MOV EAX,[0x02db87d0]
//   Label: LAB_00411e23
//   XREF to: 02db87d0 (READ)
// 00411e28: MOV dword ptr [EBX + 0x33c],0x1
// 00411e32: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00411e39: LEA EDX,[EBX + 0x20]
// 00411e3c: MOV ECX,dword ptr [EAX + 0x20]
// 00411e3f: MOV dword ptr [EDX],ECX
// 00411e41: MOV ECX,dword ptr [EAX + 0x24]
// 00411e44: MOV dword ptr [EDX + 0x4],ECX
// 00411e47: MOV ECX,dword ptr [EAX + 0x28]
// 00411e4a: MOV dword ptr [EDX + 0x8],ECX
// 00411e4d: MOV EAX,dword ptr [EAX + 0x2c]
// 00411e50: MOV dword ptr [EDX + 0xc],EAX
// 00411e53: FLD float ptr [EBX + 0x338]
// 00411e59: FADD float ptr [EBX + 0x24]
// 00411e5c: FSTP float ptr [EBX + 0x24]
// 00411e5f: JMP 0x00411db2
//   XREF to: 00411db2 (UNCONDITIONAL_JUMP)
// 00411e64: PUSH EDI
//   Label: LAB_00411e64
// 00411e65: PUSH ESI
// 00411e66: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x48] (DATA)
// 00411e6a: PUSH EAX
// 00411e6b: MOV ESI,0x461c3f9a
// 00411e70: MOV EDI,0x8
// 00411e75: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00411e7a: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x48] (DATA)
// 00411e7e: ADD ESP,0x4
// 00411e81: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 00411e86: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 00411e8a: MOV dword ptr [ESP + 0x38],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00411e8e: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00411e92: PUSH EDX
// 00411e93: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00411e9a: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 00411e9e: PUSH EAX
// 00411e9f: MOV EBX,dword ptr [EAX + 0x154]
// 00411ea5: CALL dword ptr [EBX + 0x11c]
// 00411eab: ADD ESP,0x8
// 00411eae: POP ESI
// 00411eaf: POP EDI
// 00411eb0: ADD ESP,0x44
// 00411eb3: POP EBX
// 00411eb4: RET
