// Name: core_spike.cpp_FUN_005b8950
// Address: 005b8950
// Address Range: [[005b8950, 005b8e8b]]
// Convention: unknown
// Signature: undefined core_spike.cpp_FUN_005b8950()
// Cross-references:
//   core_spike.cpp_FUN_005b8410 (005b8410) at 005b8717 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00652ebc = -0.1000000
//   float FLOAT_00652ec0 = 0.1000000
//   float FLOAT_00652ec4 = 2
//   float FLOAT_00652ec8 = 10
//   WatcomTypeInfo g_CVectorTypeInfo
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

/* Signature: undefined1 actors_other_spike.cpp_FUN_005b8950(undefined4 param_1) */

void core_spike_cpp_FUN_005b8950(void)

{
  CDemonActor *this_ptr;
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  int iVar4;
  float fVar5;
  CVector3f *point;
  BADSPACEBASE *in_ESP;
  uint corner_index;
  float unaff_retaddr;
  CDemonActor *in_stack_00000004;
  int iStack00000008;
  int iStack00000010;
  int in_stack_00000024;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [28];
  undefined1 auStack_e4 [24];
  float fStack_cc;
  float fStack_c8;
  void *pvStack_c4;
  undefined1 auStack_c0 [28];
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  CVector3f CStack_94;
  CBoundingBox3D CStack_88;
  CVector3f CStack_70;
  CVector3f CStack_60;
  undefined1 auStack_54 [12];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_38 [8];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_24 [8];
  float fStack_1c;
  undefined4 uStack_18;
  
  (*in_stack_00000004->vtable->getBoundingBox)
            (in_stack_00000004,(CBoundingBox3D *)(auStack_100 + 0x14));
  CStack_88.max.y = 0.1;
  CStack_88.max.z = 0.1;
  CStack_70.x = 0.0;
  auStack_e4._12_4_ = (float)auStack_e4._12_4_ + FLOAT_00652ebc;
  auStack_e4._16_4_ = (float)auStack_e4._16_4_ + FLOAT_00652ebc;
  fStack_cc = fStack_cc + FLOAT_00652ec0;
  fStack_c8 = fStack_c8 + FLOAT_00652ec0;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0((CBoundingBox3D *)auStack_c0);
  corner_index = 0;
  point = (CVector3f *)&stack0xfffffe4c;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xfffffe4c,8,&g_CVectorTypeInfo);
  do {
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)(auStack_e4 + 0x14),(CVector3f *)(auStack_38 + 4),
                        corner_index);
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (in_stack_00000004,(CVector3f *)auStack_54,pCVar3);
    if (point != pCVar3) {
      point->x = pCVar3->x;
      point->y = pCVar3->y;
      point->z = pCVar3->z;
    }
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)(auStack_c0 + 0x10),point);
    point = point + 1;
  } while ((int)corner_index < 8);
  fStack_1c = SQRT((float)auStack_c0._4_4_ * (float)auStack_c0._4_4_ +
                   (float)pvStack_c4 * (float)pvStack_c4 +
                   (float)auStack_c0._0_4_ * (float)auStack_c0._0_4_);
  CStack_94.z = (float)auStack_c0._16_4_ - (float)auStack_c0._4_4_;
  CStack_94.x = 0.0;
  CStack_94.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_70,&CStack_94);
  iStack00000008 = 0;
  for (iStack00000010 = 0; iStack00000010 < g_CDemonSetPtr->damage_listener_count;
      iStack00000010 = iStack00000010 + 1) {
    this_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iStack00000008 + -4);
    fVar5 = (in_stack_00000004->location).position.x - (this_ptr->location).position.x;
    fVar2 = (in_stack_00000004->location).position.y - (this_ptr->location).position.y;
    fVar1 = (in_stack_00000004->location).position.z - (this_ptr->location).position.z;
    if (fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5 <= unaff_retaddr) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)(auStack_118 + 0x14));
      auStack_100._0_4_ = 0.0;
      iVar4 = (*this_ptr->vtable->hasCollision)(this_ptr,(SCollisionInfo *)auStack_100);
      if (iVar4 != 0) {
        auStack_e4._12_4_ = 0.0;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (in_stack_00000004,(CVector3f *)auStack_24,&(this_ptr->location).position);
        if ((float)auStack_24._4_4_ < fStack_a4) {
          auStack_24._4_4_ = fStack_a4;
        }
        if (fStack_98 < (float)auStack_24._4_4_) {
          auStack_24._4_4_ = fStack_98;
        }
        if (fStack_1c < fStack_a0) {
          fStack_1c = fStack_a0;
        }
        if (CStack_94.x < fStack_1c) {
          fStack_1c = CStack_94.x;
        }
        uStack_18 = 0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (in_stack_00000004,(CVector3f *)auStack_38,(CVector3f *)(auStack_24 + 4));
        fVar5 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                          (this_ptr,(CVector3f *)(auStack_38 + 4),(CVector3f *)(auStack_54 + 8),
                           (CVector3f *)(auStack_c0 + 4),(SCollisionInfo *)auStack_e4,
                           in_stack_00000024,&CStack_88);
        if ((0.0 <= fVar5) && (fVar5 <= 1.0)) {
          CStack_60.x = fStack_30 + fStack_48 * fVar5;
          CStack_60.y = fStack_2c + fStack_44 * fVar5;
          CStack_60.z = fStack_28 + fStack_40 * fVar5;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (this_ptr,(CVector3f *)auStack_54,&CStack_60);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_118);
          auStack_118._8_4_ = in_stack_00000004[3].field28_0x150;
          auStack_e4._0_4_ = (CDemonActor *)0x67;
          if (auStack_100 + 8 != auStack_54 + 8) {
            auStack_100._8_4_ = auStack_54._8_4_;
            auStack_100._12_4_ = fStack_48;
            auStack_100._16_4_ = fStack_44;
          }
          auStack_e4._4_4_ = in_stack_00000004;
          auStack_e4._8_4_ = in_stack_00000004;
          (*this_ptr->vtable[1].playAmbientSoundWithVolume)(this_ptr,auStack_118 + 4,fVar5);
        }
      }
    }
    iStack00000008 = iStack00000008 + 4;
  }
  return;
}


// Assembly code:
// 005b8950: PUSH EBX
//   Label: core_spike.cpp_FUN_005b8950
// 005b8951: PUSH ESI
// 005b8952: PUSH EDI
// 005b8953: PUSH EBP
// 005b8954: MOV EBP,ESP
// 005b8956: SUB ESP,0x1c4
// 005b895c: AND ESP,0xfffffff8
// 005b895f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b8962: LEA EAX,[ESP + 0xec]
//   XREF to: Stack[-0xec] (DATA)
// 005b8969: PUSH EAX
// 005b896a: MOV EDX,dword ptr [ESI + 0x154]
// 005b8970: PUSH ESI
// 005b8971: XOR EBX,EBX
// 005b8973: CALL dword ptr [EDX + 0x14]
// 005b8976: MOV EDX,0x3dcccccd
// 005b897b: ADD ESP,0x8
// 005b897e: LEA EAX,[ESP + 0x104]
// 005b8985: FLD float ptr [ESP + 0xec]
// 005b898c: FLD float ptr [ESP + 0xf0]
// 005b8993: FLD float ptr [ESP + 0xf8]
// 005b899a: FLD float ptr [ESP + 0xfc]
// 005b89a1: MOV dword ptr [ESP + 0x14c],EDX
// 005b89a8: MOV dword ptr [ESP + 0x150],EDX
// 005b89af: MOV dword ptr [ESP + 0x154],EBX
// 005b89b6: PUSH EAX
// 005b89b7: FXCH ST3
// 005b89b9: FLD float ptr [0x00652ebc]
//   XREF to: 00652ebc (READ)
// 005b89bf: FXCH
// 005b89c1: FADD ST0,ST1
// 005b89c3: FXCH ST3
// 005b89c5: FADDP
// 005b89c7: FXCH
// 005b89c9: FLD float ptr [0x00652ec0]
//   XREF to: 00652ec0 (READ)
// 005b89cf: FXCH
// 005b89d1: FADD ST0,ST1
// 005b89d3: FXCH ST4
// 005b89d5: FADDP
// 005b89d7: FXCH ST2
// 005b89d9: FSTP float ptr [ESP + 0xf0]
// 005b89e0: FSTP float ptr [ESP + 0xf4]
// 005b89e7: FXCH
// 005b89e9: FSTP float ptr [ESP + 0xfc]
// 005b89f0: FSTP float ptr [ESP + 0x100]
// 005b89f7: CALL core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
//   XREF to: 00420fb0 (UNCONDITIONAL_CALL)
// 005b89fc: ADD ESP,0x4
// 005b89ff: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 005b8a04: PUSH 0x8
// 005b8a06: LEA EAX,[ESP + 0x14]
// 005b8a0a: PUSH EAX
// 005b8a0b: XOR EDI,EDI
// 005b8a0d: LEA EBX,[ESP + 0x18]
// 005b8a11: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005b8a16: ADD ESP,0xc
// 005b8a19: PUSH EDI
//   Label: LAB_005b8a19
// 005b8a1a: LEA EAX,[ESP + 0x18c]
// 005b8a21: PUSH EAX
// 005b8a22: LEA EAX,[ESP + 0xf4]
// 005b8a29: PUSH EAX
// 005b8a2a: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 005b8a2f: ADD ESP,0xc
// 005b8a32: PUSH EAX
// 005b8a33: LEA EAX,[ESP + 0x168]
// 005b8a3a: PUSH EAX
// 005b8a3b: PUSH ESI
// 005b8a3c: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005b8a41: ADD ESP,0xc
// 005b8a44: CMP EBX,EAX
// 005b8a46: JZ 0x005b8a58
//   XREF to: 005b8a58 (CONDITIONAL_JUMP)
// 005b8a48: MOV EDX,dword ptr [EAX]
// 005b8a4a: MOV dword ptr [EBX],EDX
// 005b8a4c: MOV EDX,dword ptr [EAX + 0x4]
// 005b8a4f: MOV dword ptr [EBX + 0x4],EDX
// 005b8a52: MOV EDX,dword ptr [EAX + 0x8]
// 005b8a55: MOV dword ptr [EBX + 0x8],EDX
// 005b8a58: PUSH EBX
//   Label: LAB_005b8a58
// 005b8a59: LEA EAX,[ESP + 0x108]
// 005b8a60: PUSH EAX
// 005b8a61: INC EDI
// 005b8a62: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 005b8a67: ADD EBX,0xc
// 005b8a6a: ADD ESP,0x8
// 005b8a6d: CMP EDI,0x8
// 005b8a70: JL 0x005b8a19
//   XREF to: 005b8a19 (CONDITIONAL_JUMP)
// 005b8a72: FLD float ptr [ESP + 0xf0]
// 005b8a79: FMUL ST0
// 005b8a7b: FLD float ptr [ESP + 0xec]
// 005b8a82: FMUL ST0
// 005b8a84: FADDP
// 005b8a86: FLD float ptr [ESP + 0xf4]
// 005b8a8d: FMUL ST0
// 005b8a8f: FADDP
// 005b8a91: FSQRT
// 005b8a93: FLD float ptr [ESP + 0xf8]
// 005b8a9a: FMUL ST0
// 005b8a9c: FLD float ptr [ESP + 0xfc]
// 005b8aa3: FMUL ST0
// 005b8aa5: FADDP
// 005b8aa7: FLD float ptr [ESP + 0x100]
// 005b8aae: FMUL ST0
// 005b8ab0: FXCH ST2
// 005b8ab2: FSTP float ptr [ESP + 0x194]
// 005b8ab9: MOV EAX,dword ptr [ESP + 0x194]
// 005b8ac0: FADDP
// 005b8ac2: MOV dword ptr [ESP + 0x1a8],EAX
// 005b8ac9: FSQRT
// 005b8acb: FST float ptr [ESP + 0x1a4]
// 005b8ad2: FCOMP float ptr [ESP + 0x194]
// 005b8ad9: FNSTSW AX
// 005b8adb: SAHF
// 005b8adc: JA 0x005b8beb
//   XREF to: 005b8beb (CONDITIONAL_JUMP)
// 005b8ae2: FLD float ptr [ESP + 0x1a8]
//   Label: LAB_005b8ae2
// 005b8ae9: FLD float ptr [ESP + 0x100]
// 005b8af0: FSUB float ptr [ESP + 0xf4]
// 005b8af7: FXCH
// 005b8af9: FMUL float ptr [0x00652ec4]
//   XREF to: 00652ec4 (READ)
// 005b8aff: FXCH
// 005b8b01: FSTP float ptr [ESP + 0x1c0]
// 005b8b08: FADD float ptr [0x00652ec8]
//   XREF to: 00652ec8 (READ)
// 005b8b0e: MOV EAX,dword ptr [ESP + 0x1c0]
// 005b8b15: FST float ptr [ESP + 0x1a8]
// 005b8b1c: MOV dword ptr [ESP + 0x124],EAX
// 005b8b23: LEA EAX,[ESP + 0x11c]
// 005b8b2a: FMUL float ptr [ESP + 0x1a8]
// 005b8b31: PUSH EAX
// 005b8b32: LEA EAX,[ESP + 0x144]
// 005b8b39: XOR EDI,EDI
// 005b8b3b: PUSH EAX
// 005b8b3c: MOV dword ptr [ESP + 0x124],EDI
// 005b8b43: MOV dword ptr [ESP + 0x128],EDI
// 005b8b4a: PUSH ESI
// 005b8b4b: FSTP float ptr [ESP + 0x1b8]
// 005b8b52: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005b8b57: ADD ESP,0xc
// 005b8b5a: LEA EAX,[ESI + 0x20]
// 005b8b5d: MOV dword ptr [ESP + 0x1bc],EDI
// 005b8b64: MOV dword ptr [ESP + 0x1b8],EAX
// 005b8b6b: MOV dword ptr [ESP + 0x1b4],EDI
// 005b8b72: MOV EAX,[0x006810c8]
//   Label: LAB_005b8b72
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 005b8b77: MOV EDX,dword ptr [ESP + 0x1bc]
// 005b8b7e: CMP EDX,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 005b8b84: JGE 0x005b8e85
//   XREF to: 005b8e85 (CONDITIONAL_JUMP)
// 005b8b8a: ADD EAX,dword ptr [ESP + 0x1b4]
// 005b8b91: MOV EBX,dword ptr [EAX + 0x14f09c]
//   XREF to: 03263314 (DATA)
//   XREF to: 03263318 (DATA)
// 005b8b97: MOV EAX,dword ptr [ESP + 0x1b8]
// 005b8b9e: LEA EDI,[EBX + 0x20]
// 005b8ba1: FLD float ptr [EAX]
// 005b8ba3: FSUB float ptr [EDI]
// 005b8ba5: FMUL ST0
// 005b8ba7: FLD float ptr [EAX + 0x4]
// 005b8baa: FSUB float ptr [EDI + 0x4]
// 005b8bad: FMUL ST0
// 005b8baf: FLD float ptr [EAX + 0x8]
// 005b8bb2: FXCH
// 005b8bb4: FADDP ST2,ST0
// 005b8bb6: FSUB float ptr [EDI + 0x8]
// 005b8bb9: FMUL ST0
// 005b8bbb: FADDP
// 005b8bbd: FCOMP float ptr [ESP + 0x1ac]
// 005b8bc4: FNSTSW AX
// 005b8bc6: SAHF
// 005b8bc7: JBE 0x005b8bfe
//   XREF to: 005b8bfe (CONDITIONAL_JUMP)
// 005b8bc9: MOV ECX,dword ptr [ESP + 0x1bc]
//   Label: LAB_005b8bc9
// 005b8bd0: MOV EDX,dword ptr [ESP + 0x1b4]
// 005b8bd7: INC ECX
// 005b8bd8: ADD EDX,0x4
// 005b8bdb: MOV dword ptr [ESP + 0x1bc],ECX
// 005b8be2: MOV dword ptr [ESP + 0x1b4],EDX
// 005b8be9: JMP 0x005b8b72
//   XREF to: 005b8b72 (UNCONDITIONAL_JUMP)
// 005b8beb: MOV EAX,dword ptr [ESP + 0x1a4]
//   Label: LAB_005b8beb
// 005b8bf2: MOV dword ptr [ESP + 0x1a8],EAX
// 005b8bf9: JMP 0x005b8ae2
//   XREF to: 005b8ae2 (UNCONDITIONAL_JUMP)
// 005b8bfe: LEA EAX,[ESP + 0xa8]
//   Label: LAB_005b8bfe
// 005b8c05: PUSH EAX
// 005b8c06: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 005b8c0b: ADD ESP,0x4
// 005b8c0e: LEA EDX,[ESP + 0xa8]
// 005b8c15: XOR EAX,EAX
// 005b8c17: PUSH EDX
// 005b8c18: MOV dword ptr [ESP + 0xac],EAX
// 005b8c1f: PUSH EBX
// 005b8c20: MOV EAX,dword ptr [EBX + 0x154]
// 005b8c26: CALL dword ptr [EAX + 0x34]
// 005b8c29: ADD ESP,0x8
// 005b8c2c: MOV dword ptr [ESP + 0x1b0],EAX
// 005b8c33: TEST EAX,EAX
// 005b8c35: JZ 0x005b8bc9
//   XREF to: 005b8bc9 (CONDITIONAL_JUMP)
// 005b8c37: PUSH EDI
// 005b8c38: LEA EAX,[ESP + 0x174]
// 005b8c3f: PUSH EAX
// 005b8c40: XOR EDX,EDX
// 005b8c42: PUSH ESI
// 005b8c43: MOV dword ptr [ESP + 0xc8],EDX
// 005b8c4a: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005b8c4f: ADD ESP,0xc
// 005b8c52: FLD float ptr [ESP + 0x170]
// 005b8c59: FCOMP float ptr [ESP + 0xec]
// 005b8c60: FNSTSW AX
// 005b8c62: SAHF
// 005b8c63: JNC 0x005b8c73
//   XREF to: 005b8c73 (CONDITIONAL_JUMP)
// 005b8c65: MOV EAX,dword ptr [ESP + 0xec]
// 005b8c6c: MOV dword ptr [ESP + 0x170],EAX
// 005b8c73: FLD float ptr [ESP + 0x170]
//   Label: LAB_005b8c73
// 005b8c7a: FCOMP float ptr [ESP + 0xf8]
// 005b8c81: FNSTSW AX
// 005b8c83: SAHF
// 005b8c84: JBE 0x005b8c94
//   XREF to: 005b8c94 (CONDITIONAL_JUMP)
// 005b8c86: MOV EAX,dword ptr [ESP + 0xf8]
// 005b8c8d: MOV dword ptr [ESP + 0x170],EAX
// 005b8c94: FLD float ptr [ESP + 0x174]
//   Label: LAB_005b8c94
// 005b8c9b: FCOMP float ptr [ESP + 0xf0]
// 005b8ca2: FNSTSW AX
// 005b8ca4: SAHF
// 005b8ca5: JNC 0x005b8cb5
//   XREF to: 005b8cb5 (CONDITIONAL_JUMP)
// 005b8ca7: MOV EAX,dword ptr [ESP + 0xf0]
// 005b8cae: MOV dword ptr [ESP + 0x174],EAX
// 005b8cb5: FLD float ptr [ESP + 0x174]
//   Label: LAB_005b8cb5
// 005b8cbc: FCOMP float ptr [ESP + 0xfc]
// 005b8cc3: FNSTSW AX
// 005b8cc5: SAHF
// 005b8cc6: JBE 0x005b8cd6
//   XREF to: 005b8cd6 (CONDITIONAL_JUMP)
// 005b8cc8: MOV EAX,dword ptr [ESP + 0xfc]
// 005b8ccf: MOV dword ptr [ESP + 0x174],EAX
// 005b8cd6: LEA EAX,[ESP + 0x170]
//   Label: LAB_005b8cd6
// 005b8cdd: PUSH EAX
// 005b8cde: LEA EAX,[ESP + 0x15c]
// 005b8ce5: PUSH EAX
// 005b8ce6: XOR ECX,ECX
// 005b8ce8: PUSH ESI
// 005b8ce9: MOV dword ptr [ESP + 0x184],ECX
// 005b8cf0: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005b8cf5: ADD ESP,0xc
// 005b8cf8: LEA EAX,[ESP + 0x104]
// 005b8cff: PUSH EAX
// 005b8d00: MOV EDI,dword ptr [ESP + 0x1b4]
// 005b8d07: PUSH EDI
// 005b8d08: LEA EAX,[ESP + 0xb0]
// 005b8d0f: PUSH EAX
// 005b8d10: LEA EAX,[ESP + 0xdc]
// 005b8d17: PUSH EAX
// 005b8d18: LEA EAX,[ESP + 0x150]
// 005b8d1f: PUSH EAX
// 005b8d20: LEA EAX,[ESP + 0x16c]
// 005b8d27: PUSH EAX
// 005b8d28: PUSH EBX
// 005b8d29: CALL core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
//   XREF to: 00409470 (UNCONDITIONAL_CALL)
// 005b8d2e: MOV dword ptr [ESP + 0x1dc],EAX
// 005b8d35: FLD float ptr [ESP + 0x1dc]
// 005b8d3c: ADD ESP,0x1c
// 005b8d3f: FLDZ
// 005b8d41: FXCH
// 005b8d43: FST float ptr [ESP + 0x8]
// 005b8d47: FSTP double ptr [ESP]
// 005b8d4a: FCOMP double ptr [ESP]
// 005b8d4d: FNSTSW AX
// 005b8d4f: SAHF
// 005b8d50: JA 0x005b8bc9
//   XREF to: 005b8bc9 (CONDITIONAL_JUMP)
// 005b8d56: FLD1
// 005b8d58: FCOMP double ptr [ESP]
// 005b8d5b: FNSTSW AX
// 005b8d5d: SAHF
// 005b8d5e: JC 0x005b8bc9
//   XREF to: 005b8bc9 (CONDITIONAL_JUMP)
// 005b8d64: FLD float ptr [ESP + 0x8]
// 005b8d68: FLD float ptr [ESP + 0x140]
// 005b8d6f: FMUL ST1
// 005b8d71: FLD float ptr [ESP + 0x144]
// 005b8d78: FMUL ST2
// 005b8d7a: FLD float ptr [ESP + 0x148]
// 005b8d81: FMULP ST3
// 005b8d83: FLD float ptr [ESP + 0x158]
// 005b8d8a: FLD float ptr [ESP + 0x15c]
// 005b8d91: LEA EAX,[ESP + 0x128]
// 005b8d98: FLD float ptr [ESP + 0x160]
// 005b8d9f: PUSH EAX
// 005b8da0: FXCH ST4
// 005b8da2: FSTP float ptr [ESP + 0x180]
// 005b8da9: FXCH ST2
// 005b8dab: FSTP float ptr [ESP + 0x184]
// 005b8db2: FXCH ST3
// 005b8db4: FSTP float ptr [ESP + 0x188]
// 005b8dbb: LEA EAX,[ESP + 0x138]
// 005b8dc2: FXCH ST2
// 005b8dc4: FADD float ptr [ESP + 0x180]
// 005b8dcb: FXCH ST2
// 005b8dcd: FADD float ptr [ESP + 0x184]
// 005b8dd4: FXCH
// 005b8dd6: FADD float ptr [ESP + 0x188]
// 005b8ddd: PUSH EAX
// 005b8dde: FXCH ST2
// 005b8de0: FSTP float ptr [ESP + 0x130]
// 005b8de7: FSTP float ptr [ESP + 0x134]
// 005b8dee: PUSH EBX
// 005b8def: FSTP float ptr [ESP + 0x13c]
// 005b8df6: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005b8dfb: ADD ESP,0xc
// 005b8dfe: LEA EAX,[ESP + 0x6c]
// 005b8e02: PUSH EAX
// 005b8e03: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005b8e08: ADD ESP,0x4
// 005b8e0b: MOV EAX,dword ptr [ESI + 0x558]
// 005b8e11: MOV dword ptr [ESP + 0x70],EAX
// 005b8e15: MOV EAX,0x67
// 005b8e1a: LEA EDI,[ESP + 0x88]
// 005b8e21: MOV dword ptr [ESP + 0x9c],EAX
// 005b8e28: LEA EAX,[ESP + 0x134]
// 005b8e2f: CMP EDI,EAX
// 005b8e31: JZ 0x005b8e5d
//   XREF to: 005b8e5d (CONDITIONAL_JUMP)
// 005b8e33: MOV EAX,dword ptr [ESP + 0x134]
// 005b8e3a: MOV dword ptr [ESP + 0x88],EAX
// 005b8e41: MOV EAX,dword ptr [ESP + 0x138]
// 005b8e48: MOV dword ptr [ESP + 0x8c],EAX
// 005b8e4f: MOV EAX,dword ptr [ESP + 0x13c]
// 005b8e56: MOV dword ptr [ESP + 0x90],EAX
// 005b8e5d: LEA EDI,[ESP + 0x6c]
//   Label: LAB_005b8e5d
// 005b8e61: MOV dword ptr [ESP + 0xa0],ESI
// 005b8e68: MOV dword ptr [ESP + 0xa4],ESI
// 005b8e6f: PUSH EDI
// 005b8e70: MOV EAX,dword ptr [EBX + 0x154]
// 005b8e76: PUSH EBX
// 005b8e77: CALL dword ptr [EAX + 0x11c]
// 005b8e7d: ADD ESP,0x8
// 005b8e80: JMP 0x005b8bc9
//   XREF to: 005b8bc9 (UNCONDITIONAL_JUMP)
// 005b8e85: MOV ESP,EBP
//   Label: LAB_005b8e85
// 005b8e87: POP EBP
// 005b8e88: POP EDI
// 005b8e89: POP ESI
// 005b8e8a: POP EBX
// 005b8e8b: RET
