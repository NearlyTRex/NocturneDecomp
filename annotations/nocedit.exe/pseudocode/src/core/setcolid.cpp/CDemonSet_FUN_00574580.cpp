// Name: core_setcolid.cpp_CDemonSet_FUN_00574580
// Address: 00574580
// Address Range: [[00574580, 00574688]]
// Convention: __cdecl
// Signature: int core_setcolid.cpp_CDemonSet_FUN_00574580(CDemonSet * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10 (0040ca10) at 0040ca8a [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ea40 (0042ea40) at 0042eb34 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_006463fa = -10
//   CWater* g_CWaterPtr = 03f875e0
//   undefined4 DAT_03f875e4
//   undefined4 g_CWaterActorClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408f10

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
          core_actor_cpp_CDemonActor_FUN_00408f10(this_ptr_00);
          (*((this_ptr_00->metadata).vtable)->getBoundingBox)(this_ptr_00,&CStack_2c);
          fStack_14 = fStack_14 + FLOAT_006463fa;
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


// Assembly code:
// 00574580: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_FUN_00574580
// 00574581: PUSH ESI
// 00574582: PUSH EDI
// 00574583: PUSH EBP
// 00574584: SUB ESP,0x24
// 00574587: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0057458b: MOV EAX,[0x006844f0]
//   XREF to: 006844f0 (READ)
// 00574590: TEST dword ptr [EAX + 0x4],0x7fffffff
//   XREF to: 03f875e4 (READ)
// 00574597: JZ 0x005745a8
//   XREF to: 005745a8 (CONDITIONAL_JUMP)
// 00574599: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 0057459d: FLD float ptr [EDX + 0x4]
// 005745a0: FCOMP float ptr [EAX + 0x4]
//   XREF to: 03f875e4 (READ)
// 005745a3: FNSTSW AX
// 005745a5: SAHF
// 005745a6: JC 0x005745e9
//   XREF to: 005745e9 (CONDITIONAL_JUMP)
// 005745a8: MOV ECX,dword ptr [EBP + 0x14d154]
//   Label: LAB_005745a8
// 005745ae: XOR ESI,ESI
// 005745b0: TEST ECX,ECX
// 005745b2: JLE 0x005745df
//   XREF to: 005745df (CONDITIONAL_JUMP)
// 005745b4: MOV EDI,EBP
// 005745b6: MOV EAX,[0x03f939a0]
//   Label: LAB_005745b6
//   XREF to: 03f939a0 (READ)
// 005745bb: PUSH EAX
// 005745bc: MOV EDX,dword ptr [EDI + 0x14d158]
// 005745c2: PUSH EDX
// 005745c3: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005745c8: MOV EBX,EAX
// 005745ca: ADD ESP,0x8
// 005745cd: TEST EAX,EAX
// 005745cf: JNZ 0x005745f0
//   XREF to: 005745f0 (CONDITIONAL_JUMP)
// 005745d1: INC ESI
//   Label: LAB_005745d1
// 005745d2: MOV EBX,dword ptr [EBP + 0x14d154]
// 005745d8: ADD EDI,0x4
// 005745db: CMP ESI,EBX
// 005745dd: JL 0x005745b6
//   XREF to: 005745b6 (CONDITIONAL_JUMP)
// 005745df: XOR EAX,EAX
//   Label: LAB_005745df
// 005745e1: ADD ESP,0x24
//   Label: LAB_005745e1
// 005745e4: POP EBP
// 005745e5: POP EDI
// 005745e6: POP ESI
// 005745e7: POP EBX
// 005745e8: RET
// 005745e9: MOV EAX,0x1
//   Label: LAB_005745e9
// 005745ee: JMP 0x005745e1
//   XREF to: 005745e1 (UNCONDITIONAL_JUMP)
// 005745f0: MOV ECX,dword ptr [ESP + 0x3c]
//   Label: LAB_005745f0
//   XREF to: Stack[0x8] (READ)
// 005745f4: PUSH ECX
// 005745f5: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x1c] (DATA)
// 005745f9: PUSH EAX
// 005745fa: PUSH EBX
// 005745fb: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00574600: ADD ESP,0xc
// 00574603: MOV EAX,ESP
// 00574605: PUSH EAX
// 00574606: MOV EDX,dword ptr [EBX + 0x154]
// 0057460c: PUSH EBX
// 0057460d: CALL dword ptr [EDX + 0x14]
// 00574610: ADD ESP,0x8
// 00574613: FLD float ptr [ESP + 0x4]
// 00574617: FADD float ptr [0x006463fa]
//   XREF to: 006463fa (READ)
// 0057461d: FLD float ptr [ESP]
// 00574620: FXCH
// 00574622: FSTP float ptr [ESP + 0x4]
// 00574626: FCOMP float ptr [ESP + 0x18]
// 0057462a: FNSTSW AX
// 0057462c: SAHF
// 0057462d: JA 0x005745d1
//   XREF to: 005745d1 (CONDITIONAL_JUMP)
// 0057462f: FLD float ptr [ESP + 0x4]
// 00574633: FCOMP float ptr [ESP + 0x1c]
// 00574637: FNSTSW AX
// 00574639: SAHF
// 0057463a: JA 0x005745d1
//   XREF to: 005745d1 (CONDITIONAL_JUMP)
// 0057463c: FLD float ptr [ESP + 0x8]
// 00574640: FCOMP float ptr [ESP + 0x20]
// 00574644: FNSTSW AX
// 00574646: SAHF
// 00574647: JA 0x005745d1
//   XREF to: 005745d1 (CONDITIONAL_JUMP)
// 00574649: FLD float ptr [ESP + 0xc]
// 0057464d: FCOMP float ptr [ESP + 0x18]
// 00574651: FNSTSW AX
// 00574653: SAHF
// 00574654: JC 0x005745d1
//   XREF to: 005745d1 (CONDITIONAL_JUMP)
// 0057465a: FLD float ptr [ESP + 0x10]
// 0057465e: FCOMP float ptr [ESP + 0x1c]
// 00574662: FNSTSW AX
// 00574664: SAHF
// 00574665: JC 0x005745d1
//   XREF to: 005745d1 (CONDITIONAL_JUMP)
// 0057466b: FLD float ptr [ESP + 0x14]
// 0057466f: FCOMP float ptr [ESP + 0x20]
// 00574673: FNSTSW AX
// 00574675: SAHF
// 00574676: JC 0x005745d1
//   XREF to: 005745d1 (CONDITIONAL_JUMP)
// 0057467c: MOV EAX,0x1
// 00574681: ADD ESP,0x24
// 00574684: POP EBP
// 00574685: POP EDI
// 00574686: POP ESI
// 00574687: POP EBX
// 00574688: RET
