// Name: core_charactr.cpp_CCharacter_FUN_0042ea40
// Address: 0042ea40
// Address Range: [[0042ea40, 0042ec3f]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042ea40(CCharacter * this_ptr)
// Cross-references:
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 005448da [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bbaae [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8c0b [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_Bip01_head_006175ca
//   TerminatedCString s_Bip01_head_006175d5
//   undefined4 DAT_006175e2
//   undefined4 DAT_006175ea
//   undefined4 DAT_006175ee
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CFireEffect g_CFireEffectInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_0326eeec
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_setcolid.cpp_CDemonSet_FUN_00574580
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_FUN_0042ea40(CCharacter *this_ptr)

{
  float fVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  CVector3f *pCVar3;
  CSkeleton *this_ptr_01;
  BADSPACEBASE *in_ESP;
  float in_stack_00000008;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  if ((*(int *)this_ptr->field13_0x2620 != 0) &&
     (*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbd4) < (float)_DAT_006175e2)) {
    iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0(&(this_ptr->model).motion_controller);
    if (*(int *)(iVar2 + 0x24) == 0) {
      if ((*(int *)(this_ptr->cloth_data + 0x1c0) == 0) &&
         (fVar1 = *(float *)(this_ptr->cloth_data + 0x1b8) - in_stack_00000008,
         *(float *)(this_ptr->cloth_data + 0x1b8) = fVar1, fVar1 < 0.0)) {
        *(float *)(this_ptr->cloth_data + 0x1b8) =
             *(float *)(this_ptr->cloth_data + 0x1b8) + _DAT_006175ea;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                  (&this_ptr->base_actor,&local_1c,(CVector3f *)&stack0xffffffb4);
        core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(&this_ptr->model);
        iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                          (this_ptr_01,"?Bip01 head" + 1);
        if (iVar2 != -1) {
          pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             ((CVector3f *)&stack0xffffffa8,(CVector3f *)&stack0xffffff9c,
                              (CMatrix3x4f *)0x0);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (&this_ptr->base_actor,&local_34,pCVar3);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&local_34,0.5,&local_1c,0x8000);
        }
      }
      fVar1 = *(float *)(this_ptr->cloth_data + 0x1bc) - in_stack_00000008;
      *(float *)(this_ptr->cloth_data + 0x1bc) = fVar1;
      if (fVar1 < 0.0) {
        *(float *)(this_ptr->cloth_data + 0x1bc) =
             *(float *)(this_ptr->cloth_data + 0x1bc) + _DAT_006175ee;
        core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(&this_ptr->model);
        iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 head")
        ;
        if (iVar2 != -1) {
          local_40.x = 0.0;
          local_40.y = 0.2;
          local_40.z = 0.5;
          pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             ((CVector3f *)&stack0xffffff90,&local_40,
                              (CMatrix3x4f *)((this_ptr->model).field3_0x508 + iVar2 * 0x30 + 0x978)
                             );
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (&this_ptr->base_actor,&local_28,pCVar3);
          iVar2 = core_setcolid_cpp_CDemonSet_FUN_00574580(g_CDemonSetPtr);
          if (iVar2 == 0) {
            *(uint *)(this_ptr->cloth_data + 0x1c0) =
                 (uint)(*(int *)(this_ptr->cloth_data + 0x1c0) == 0);
            return;
          }
        }
      }
    }
  }
  return;
}


// Assembly code:
// 0042ea40: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042ea40
// 0042ea41: PUSH ESI
// 0042ea42: PUSH EDI
// 0042ea43: PUSH EBP
// 0042ea44: MOV EBP,ESP
// 0042ea46: SUB ESP,0x60
// 0042ea49: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042ea4c: CMP dword ptr [EBX + 0x2620],0x0
// 0042ea53: JZ 0x0042ea6b
//   XREF to: 0042ea6b (CONDITIONAL_JUMP)
// 0042ea55: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0042ea5a: FLD float ptr [EAX + 0x15ac74]
//   XREF to: 0326eeec (READ)
// 0042ea60: FCOMP double ptr [0x006175e2]
//   XREF to: 006175e2 (READ)
// 0042ea66: FNSTSW AX
// 0042ea68: SAHF
// 0042ea69: JC 0x0042ea72
//   XREF to: 0042ea72 (CONDITIONAL_JUMP)
// 0042ea6b: MOV ESP,EBP
//   Label: LAB_0042ea6b
// 0042ea6d: POP EBP
// 0042ea6e: POP EDI
// 0042ea6f: POP ESI
// 0042ea70: POP EBX
// 0042ea71: RET
// 0042ea72: LEA ESI,[EBX + 0x158]
//   Label: LAB_0042ea72
// 0042ea78: PUSH ESI
// 0042ea79: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0042ea7e: MOV EAX,dword ptr [EAX + 0x24]
// 0042ea81: ADD ESP,0x4
// 0042ea84: TEST EAX,EAX
// 0042ea86: JNZ 0x0042ea6b
//   XREF to: 0042ea6b (CONDITIONAL_JUMP)
// 0042ea88: CMP dword ptr [EBX + 0x2c58],0x0
// 0042ea8f: JZ 0x0042eb60
//   XREF to: 0042eb60 (CONDITIONAL_JUMP)
// 0042ea95: FLD float ptr [EBX + 0x2c54]
//   Label: LAB_0042ea95
// 0042ea9b: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042ea9e: FST float ptr [EBX + 0x2c54]
// 0042eaa4: FLDZ
// 0042eaa6: FCOMPP
// 0042eaa8: FNSTSW AX
// 0042eaaa: SAHF
// 0042eaab: JBE 0x0042ea6b
//   XREF to: 0042ea6b (CONDITIONAL_JUMP)
// 0042eaad: FLD float ptr [EBX + 0x2c54]
// 0042eab3: LEA EAX,[EBX + 0x158]
// 0042eab9: FADD float ptr [0x006175ee]
//   XREF to: 006175ee (READ)
// 0042eabf: PUSH EAX
// 0042eac0: FSTP float ptr [EBX + 0x2c54]
// 0042eac6: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0042eacb: ADD ESP,0x4
// 0042eace: PUSH 0x0
// 0042ead0: PUSH 0x6175d5
//   XREF to: 006175d5 (DATA)
// 0042ead5: PUSH EAX
// 0042ead6: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0042eadb: ADD ESP,0xc
// 0042eade: CMP EAX,-0x1
// 0042eae1: JZ 0x0042ea6b
//   XREF to: 0042ea6b (CONDITIONAL_JUMP)
// 0042eae3: MOV ESI,EAX
// 0042eae5: SHL EAX,0x2
// 0042eae8: SUB EAX,ESI
// 0042eaea: SHL EAX,0x4
// 0042eaed: LEA ESI,[EBX + 0xfd8]
// 0042eaf3: MOV ECX,0x3e4ccccd
// 0042eaf8: ADD EAX,ESI
// 0042eafa: XOR EDX,EDX
// 0042eafc: PUSH EAX
// 0042eafd: LEA EAX,[EBP + -0x30]
//   XREF to: Stack[-0x40] (DATA)
// 0042eb00: MOV dword ptr [EBP + -0x30],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 0042eb03: PUSH EAX
// 0042eb04: LEA EAX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 0042eb07: MOV ESI,0x3f000000
// 0042eb0c: PUSH EAX
// 0042eb0d: MOV dword ptr [EBP + -0x2c],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 0042eb10: MOV dword ptr [EBP + -0x28],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 0042eb13: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0042eb18: ADD ESP,0xc
// 0042eb1b: PUSH EAX
// 0042eb1c: LEA EAX,[EBP + -0x18]
//   XREF to: Stack[-0x28] (DATA)
// 0042eb1f: PUSH EAX
// 0042eb20: PUSH EBX
// 0042eb21: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042eb26: ADD ESP,0xc
// 0042eb29: LEA EAX,[EBP + -0x18]
//   XREF to: Stack[-0x28] (DATA)
// 0042eb2c: PUSH EAX
// 0042eb2d: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0042eb33: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0042eb34: CALL core_setcolid.cpp_CDemonSet_FUN_00574580
//   XREF to: 00574580 (UNCONDITIONAL_CALL)
// 0042eb39: ADD ESP,0x8
// 0042eb3c: TEST EAX,EAX
// 0042eb3e: JNZ 0x0042ea6b
//   XREF to: 0042ea6b (CONDITIONAL_JUMP)
// 0042eb44: CMP dword ptr [EBX + 0x2c58],0x0
// 0042eb4b: SETZ AL
// 0042eb4e: AND EAX,0xff
// 0042eb53: MOV dword ptr [EBX + 0x2c58],EAX
// 0042eb59: MOV ESP,EBP
// 0042eb5b: POP EBP
// 0042eb5c: POP EDI
// 0042eb5d: POP ESI
// 0042eb5e: POP EBX
// 0042eb5f: RET
// 0042eb60: FLD float ptr [EBX + 0x2c50]
//   Label: LAB_0042eb60
// 0042eb66: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042eb69: FST float ptr [EBX + 0x2c50]
// 0042eb6f: FLDZ
// 0042eb71: FCOMPP
// 0042eb73: FNSTSW AX
// 0042eb75: SAHF
// 0042eb76: JBE 0x0042ea95
//   XREF to: 0042ea95 (CONDITIONAL_JUMP)
// 0042eb7c: FLD float ptr [EBX + 0x2c50]
// 0042eb82: FADD float ptr [0x006175ea]
//   XREF to: 006175ea (READ)
// 0042eb88: MOV EAX,0xbf000000
// 0042eb8d: FSTP float ptr [EBX + 0x2c50]
// 0042eb93: MOV dword ptr [EBP + -0x38],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0042eb96: LEA EAX,[EBP + -0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 0042eb99: PUSH EAX
// 0042eb9a: LEA EAX,[EBP + -0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 0042eb9d: PUSH EAX
// 0042eb9e: MOV EDX,0x3f800000
// 0042eba3: XOR EDI,EDI
// 0042eba5: PUSH EBX
// 0042eba6: MOV dword ptr [EBP + -0x3c],EDI
//   XREF to: Stack[-0x4c] (WRITE)
// 0042eba9: MOV dword ptr [EBP + -0x34],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0042ebac: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0042ebb1: ADD ESP,0xc
// 0042ebb4: PUSH ESI
// 0042ebb5: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0042ebba: ADD ESP,0x4
// 0042ebbd: PUSH EDI
// 0042ebbe: PUSH 0x6175ca
//   XREF to: 006175ca (DATA)
// 0042ebc3: PUSH EAX
// 0042ebc4: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0042ebc9: ADD ESP,0xc
// 0042ebcc: CMP EAX,-0x1
// 0042ebcf: JZ 0x0042ea95
//   XREF to: 0042ea95 (CONDITIONAL_JUMP)
// 0042ebd5: MOV ESI,EAX
// 0042ebd7: SHL EAX,0x2
// 0042ebda: SUB EAX,ESI
// 0042ebdc: SHL EAX,0x4
// 0042ebdf: LEA ESI,[EBX + 0xfd8]
// 0042ebe5: MOV EDI,0x3f000000
// 0042ebea: ADD EAX,ESI
// 0042ebec: XOR ECX,ECX
// 0042ebee: PUSH EAX
// 0042ebef: LEA EAX,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 0042ebf2: MOV dword ptr [EBP + -0x54],ECX
//   XREF to: Stack[-0x64] (WRITE)
// 0042ebf5: PUSH EAX
// 0042ebf6: LEA EAX,[EBP + -0x48]
//   XREF to: Stack[-0x58] (DATA)
// 0042ebf9: MOV ESI,0x3e4ccccd
// 0042ebfe: PUSH EAX
// 0042ebff: MOV dword ptr [EBP + -0x4c],EDI
//   XREF to: Stack[-0x5c] (WRITE)
// 0042ec02: MOV dword ptr [EBP + -0x50],ESI
//   XREF to: Stack[-0x60] (WRITE)
// 0042ec05: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0042ec0a: ADD ESP,0xc
// 0042ec0d: PUSH EAX
// 0042ec0e: LEA EAX,[EBP + -0x24]
//   XREF to: Stack[-0x34] (DATA)
// 0042ec11: PUSH EAX
// 0042ec12: PUSH EBX
// 0042ec13: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042ec18: ADD ESP,0xc
// 0042ec1b: PUSH 0x8000
// 0042ec20: LEA EAX,[EBP + -0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 0042ec23: PUSH EAX
// 0042ec24: LEA EAX,[EBP + -0x24]
//   XREF to: Stack[-0x34] (DATA)
// 0042ec27: PUSH 0x3f000000
// 0042ec2c: PUSH EAX
// 0042ec2d: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0042ec32: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 0042ec33: CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
// 0042ec38: ADD ESP,0x14
// 0042ec3b: JMP 0x0042ea95
//   XREF to: 0042ea95 (UNCONDITIONAL_JUMP)
