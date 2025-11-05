// Name: core_charactr.cpp_CCharacter_FUN_0042a830
// Address: 0042a830
// Address Range: [[0042a830, 0042acfa]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042a830(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00429870 (00429870) at 004298a2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_character_onfire_fallapa_006170ca
//   TerminatedCString s_character_onfire_loop_wa_006170e9
//   double DOUBLE_0061710a = 65535
//   double DOUBLE_00617112 = 0.600000000000000
//   double DOUBLE_0061711a = 0.0200000000000000
//   double DOUBLE_00617122 = 0.400000000000000
//   double DOUBLE_0061712a = 0.5
//   undefined4 DAT_0065b82c
//   undefined4 DAT_0065b830
//   undefined4 DAT_00823c54
//   undefined4 DAT_00823c58
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_charactr.cpp_CCharacter_FUN_0042a520
//   core_charactr.cpp_CCharacter_FUN_0042b9e0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   sound_sndmain.cpp_CallComputingDelay2_FUN_005a9ae0
//   sound_sndmain.cpp_FUN_005a8a60
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_FUN_0042a830(CCharacter *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  CSkeleton *pCVar3;
  CDeformableModel *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  CCharacter *pCVar10;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  char *pcVar11;
  char *pcVar12;
  float in_stack_00000008;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CDeformableModelInstance *local_44;
  char *local_40;
  CSkeleton *local_38;
  CDeformableModel *local_34;
  int local_2c;
  int local_28;
  int local_20;
  CCharacter *local_1c;
  CSkeleton *local_18;
  char *pcStack_14;
  
  this_ptr_00 = &this_ptr->model;
  local_18 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  if (*(int *)(this_ptr->cloth_data + 0x8d40) == 0) {
    if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
      pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      local_38 = pCVar3;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
      iVar9 = 0;
      if (0 < pCVar3->bone_count) {
        iVar5 = 0;
        do {
          *(undefined4 *)((int)&DAT_00823c54 + iVar5) = 0;
          iVar9 = iVar9 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar9 < local_38->bone_count);
      }
      fVar1 = DAT_0065b830;
      iVar9 = 0;
      if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
        fVar2 = (float)DOUBLE_0061710a;
        pCVar10 = this_ptr;
        do {
          iVar9 = iVar9 + 1;
          (&DAT_00823c54)[*(int *)(pCVar10->cloth_data + 0x488)] =
               (float)(&DAT_00823c54)[*(int *)(pCVar10->cloth_data + 0x488)] +
               (*(float *)(pCVar10->cloth_data + 0x498) * fVar2) / fVar1;
          pCVar10 = (CCharacter *)((pCVar10->base_actor).actor_name + 0x18);
        } while (iVar9 < *(int *)(this_ptr->cloth_data + 0x478));
      }
      iVar9 = 0;
      local_2c = 0;
      if (0 < local_38->bone_count) {
        local_44 = &this_ptr->model;
        iVar5 = 0;
        local_34 = pCVar4;
        do {
          if ((float)DOUBLE_0061710a <= *(float *)((int)&DAT_00823c54 + iVar5)) {
            iVar9 = iVar9 + 1;
          }
          if (local_34->farthest_child_bone[0] == -1) {
            iVar9 = iVar9 + 1;
          }
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(local_44);
          if ((this_ptr->model).part_visibility_flags
              [*(int *)((int)pCVar4->bone_to_part_map + iVar5)] == 0) {
            iVar9 = iVar9 + 1;
          }
          iVar5 = iVar5 + 4;
          local_34 = (CDeformableModel *)local_34->lod_info;
          local_2c = local_2c + 1;
        } while (local_2c < local_38->bone_count);
      }
      if (iVar9 == local_38->bone_count) {
        this_ptr->cloth_data[0x8d44] = '\0';
        this_ptr->cloth_data[0x8d45] = '\0';
        this_ptr->cloth_data[0x8d46] = -0x80;
        this_ptr->cloth_data[0x8d47] = '?';
        this_ptr->cloth_data[0x8d40] = '\x01';
        this_ptr->cloth_data[0x8d41] = '\0';
        this_ptr->cloth_data[0x8d42] = '\0';
        this_ptr->cloth_data[0x8d43] = '\0';
      }
      CStack_54.z = (float)*(int *)(this_ptr->cloth_data + 0x478) * (float)DOUBLE_00617112 *
                    (float)DOUBLE_0061711a + (float)DOUBLE_00617122;
      iVar9 = sound_sndmain_cpp_CallComputingDelay2_FUN_005a9ae0();
      if (iVar9 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_FUN_005a8a60();
        uVar7 = (*((this_ptr->base_actor).vtable)->playAmbientSound)
                          (&this_ptr->base_actor,"character-onfire-loop.wav");
        *(undefined4 *)(this_ptr->cloth_data + 0x8d3c) = uVar7;
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
    }
  }
  else {
    fVar1 = *(float *)(this_ptr->cloth_data + 0x8d44) - in_stack_00000008;
    *(float *)(this_ptr->cloth_data + 0x8d44) = fVar1;
    if (fVar1 < 0.0) {
      sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
      (*((this_ptr->base_actor).vtable)->playSound)
                (&this_ptr->base_actor,"character-onfire-fallapart.wav");
      core_charactr_cpp_CCharacter_FUN_0042b9e0(this_ptr);
    }
  }
  local_20 = 0;
  if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
    local_38 = (CSkeleton *)(this_ptr->model).bone_transform.bone_world_matrices;
    local_40 = this_ptr->cloth_data + 0x934;
    pcVar11 = this_ptr->cloth_data + 0x484;
    local_1c = this_ptr;
    pcVar12 = this_ptr->cloth_data + 0x954;
    do {
      if ((this_ptr->model).part_visibility_flags[*(int *)pcVar11] != 0) {
        (this_ptr->base_actor).is_transparent = 1;
        pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&CStack_54,(CVector3f *)(pcVar11 + 8),
                            (CMatrix3x4f *)
                            ((int)(local_38->motion_list).state_names +
                            *(int *)(pcVar11 + 4) * 0x30 + -4));
        pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&this_ptr->base_actor,&CStack_60,pCVar6);
        *(float *)pcVar12 = pCVar6->x;
        *(float *)(pcVar12 + 4) = pCVar6->y;
        *(float *)(pcVar12 + 8) = pCVar6->z;
        fVar1 = (float)DOUBLE_0061712a;
        *(float *)(local_1c->cloth_data + 0xa8c) = *(float *)(pcVar11 + 0x14) * fVar1;
        *(int *)(local_1c->cloth_data + 0xa90) = *(int *)(pcVar11 + 0x14);
        *(float *)(local_1c->cloth_data + 0xa94) = *(float *)(pcVar11 + 0x14) * fVar1;
        (**(code **)(*(int *)(local_40 + local_20 * 0x2a4 + 0x154) + 4))();
      }
      pcVar11 = pcVar11 + 0x18;
      pcVar12 = pcVar12 + 0x2a4;
      local_1c = (CCharacter *)&(local_1c->model).transformed_vertices[0x14].y;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(this_ptr->cloth_data + 0x478));
  }
  if ((*(int *)(this_ptr->field11_0x25a0 + 0x74) == 0) &&
     (0 < *(int *)(this_ptr->cloth_data + 0x478))) {
    local_18 = (CSkeleton *)(this_ptr->cloth_data + 0x484);
    local_34 = (CDeformableModel *)(in_stack_00000008 * _DAT_0065b82c);
    local_28 = 0;
    do {
      pcStack_14 = (char *)local_18;
      if (((this_ptr->model).part_visibility_flags[*(int *)local_18] != 0) &&
         (fVar1 = (float)local_34 * *(float *)(this_ptr->cloth_data + 0x480) +
                  *(float *)((int)local_18 + 0x14), *(float *)((int)local_18 + 0x14) = fVar1,
         DAT_0065b830 < fVar1)) {
        *(float *)((int)local_18 + 0x14) = DAT_0065b830;
        iVar5 = 0;
        iVar9 = unaff_EBP;
        if (0 < *(int *)(unaff_EBP + 0x28558)) {
          do {
            if (*(uint *)(iVar9 + 0x2857c) == *(uint *)(pcStack_14 + 4)) {
              uVar8 = *(uint *)(iVar9 + 0x2857c) ^ *(uint *)(pcStack_14 + 4);
              pCVar10 = this_ptr;
              if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
                do {
                  if (iVar5 == *(int *)(pCVar10->cloth_data + 0x488)) break;
                  uVar8 = uVar8 + 1;
                  pCVar10 = (CCharacter *)((pCVar10->base_actor).actor_name + 0x18);
                } while ((int)uVar8 < *(int *)(this_ptr->cloth_data + 0x478));
              }
              if (uVar8 == *(uint *)(this_ptr->cloth_data + 0x478)) {
                core_charactr_cpp_CCharacter_FUN_0042a520(this_ptr);
              }
            }
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + 0x24;
          } while (iVar5 < *(int *)(unaff_EBP + 0x28558));
        }
        iVar9 = 0;
        if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
          pCVar10 = this_ptr;
          do {
            if (*(int *)(*(int *)(pcStack_14 + 4) * 0x24 + unaff_EBP + 0x2857c) ==
                *(int *)(pCVar10->cloth_data + 0x488)) break;
            iVar9 = iVar9 + 1;
            pCVar10 = (CCharacter *)((pCVar10->base_actor).actor_name + 0x18);
          } while (iVar9 < *(int *)(this_ptr->cloth_data + 0x478));
        }
        if (iVar9 == *(int *)(this_ptr->cloth_data + 0x478)) {
          core_charactr_cpp_CCharacter_FUN_0042a520(this_ptr);
        }
      }
      local_18 = (CSkeleton *)((int)local_18 + 0x18);
      local_28 = local_28 + 1;
    } while (local_28 < *(int *)(this_ptr->cloth_data + 0x478));
  }
  return;
}


// Assembly code:
// 0042a830: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042a830
// 0042a831: PUSH ESI
// 0042a832: PUSH EDI
// 0042a833: PUSH EBP
// 0042a834: MOV EBP,ESP
// 0042a836: SUB ESP,0x54
// 0042a839: AND ESP,0xfffffff8
// 0042a83c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042a83f: LEA EDI,[EBX + 0x158]
// 0042a845: PUSH EDI
// 0042a846: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0042a84b: ADD ESP,0x4
// 0042a84e: MOV EDX,dword ptr [EBX + 0xb7d8]
// 0042a854: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0042a858: TEST EDX,EDX
// 0042a85a: JNZ 0x0042ab50
//   XREF to: 0042ab50 (CONDITIONAL_JUMP)
// 0042a860: CMP dword ptr [EBX + 0x2f10],0x0
// 0042a867: JLE 0x0042a9e5
//   XREF to: 0042a9e5 (CONDITIONAL_JUMP)
// 0042a86d: PUSH EDI
// 0042a86e: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0042a873: ADD ESP,0x4
// 0042a876: PUSH EDI
// 0042a877: MOV ESI,EAX
// 0042a879: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0042a87d: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0042a882: ADD ESP,0x4
// 0042a885: MOV EDI,EAX
// 0042a887: MOV EAX,dword ptr [ESI + 0x28558]
// 0042a88d: XOR EDX,EDX
// 0042a88f: TEST EAX,EAX
// 0042a891: JLE 0x0042a8b0
//   XREF to: 0042a8b0 (CONDITIONAL_JUMP)
// 0042a893: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 0042a897: XOR EAX,EAX
// 0042a899: XOR ECX,ECX
//   Label: LAB_0042a899
// 0042a89b: MOV dword ptr [EAX + 0x823c54],ECX
//   XREF to: 00823c54 (WRITE)
//   XREF to: 00823c58 (WRITE)
// 0042a8a1: INC EDX
// 0042a8a2: MOV ECX,dword ptr [ESI + 0x28558]
// 0042a8a8: ADD EAX,0x4
// 0042a8ab: CMP EDX,ECX
// 0042a8ad: JL 0x0042a899
//   XREF to: 0042a899 (CONDITIONAL_JUMP)
// 0042a8af: NOP
// 0042a8b0: MOV ESI,dword ptr [EBX + 0x2f10]
//   Label: LAB_0042a8b0
// 0042a8b6: XOR EAX,EAX
// 0042a8b8: TEST ESI,ESI
// 0042a8ba: JLE 0x0042a8fe
//   XREF to: 0042a8fe (CONDITIONAL_JUMP)
// 0042a8bc: FLD float ptr [0x0065b830]
//   XREF to: 0065b830 (READ)
// 0042a8c2: FLD double ptr [0x0061710a]
//   XREF to: 0061710a (READ)
// 0042a8c8: MOV ESI,EBX
// 0042a8ca: FLD float ptr [ESI + 0x2f30]
//   Label: LAB_0042a8ca
// 0042a8d0: MOV EDX,dword ptr [ESI + 0x2f20]
// 0042a8d6: FMUL ST1
// 0042a8d8: FLD float ptr [EDX*0x4 + 0x823c54]
//   XREF to: 00823c54 (DATA)
// 0042a8df: FLD ST3
// 0042a8e1: FDIVP ST2,ST0
// 0042a8e3: FADDP
// 0042a8e5: INC EAX
// 0042a8e6: FSTP float ptr [EDX*0x4 + 0x823c54]
//   XREF to: 00823c54 (DATA)
// 0042a8ed: MOV EDX,dword ptr [EBX + 0x2f10]
// 0042a8f3: ADD ESI,0x18
// 0042a8f6: CMP EAX,EDX
// 0042a8f8: JL 0x0042a8ca
//   XREF to: 0042a8ca (CONDITIONAL_JUMP)
// 0042a8fa: FSTP ST0
// 0042a8fc: FSTP ST0
// 0042a8fe: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0042a8fe
//   XREF to: Stack[-0x38] (READ)
// 0042a902: XOR ESI,ESI
// 0042a904: MOV EDX,dword ptr [EAX + 0x28558]
// 0042a90a: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 0042a90e: TEST EDX,EDX
// 0042a910: JLE 0x0042a98e
//   XREF to: 0042a98e (CONDITIONAL_JUMP)
// 0042a916: LEA EAX,[EBX + 0x158]
// 0042a91c: MOV dword ptr [ESP + 0x34],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 0042a920: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0042a924: XOR EDI,EDI
// 0042a926: FLD float ptr [EDI + 0x823c54]
//   Label: LAB_0042a926
//   XREF to: 00823c54 (READ)
//   XREF to: 00823c58 (READ)
// 0042a92c: FCOMP double ptr [0x0061710a]
//   XREF to: 0061710a (READ)
// 0042a932: FNSTSW AX
// 0042a934: SAHF
// 0042a935: JC 0x0042a938
//   XREF to: 0042a938 (CONDITIONAL_JUMP)
// 0042a937: INC ESI
// 0042a938: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_0042a938
//   XREF to: Stack[-0x34] (READ)
// 0042a93c: CMP dword ptr [EAX + 0x8dcc],-0x1
// 0042a943: JNZ 0x0042a946
//   XREF to: 0042a946 (CONDITIONAL_JUMP)
// 0042a945: INC ESI
// 0042a946: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_0042a946
//   XREF to: Stack[-0x44] (READ)
// 0042a94a: PUSH ECX
// 0042a94b: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0042a950: MOV EAX,dword ptr [EDI + EAX*0x1 + 0x8c3c]
// 0042a957: MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 0042a95e: ADD ESP,0x4
// 0042a961: TEST EDX,EDX
// 0042a963: JZ 0x0042aba4
//   XREF to: 0042aba4 (CONDITIONAL_JUMP)
// 0042a969: MOV ECX,dword ptr [ESP + 0x34]
//   Label: LAB_0042a969
//   XREF to: Stack[-0x34] (READ)
// 0042a96d: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2c] (READ)
// 0042a971: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 0042a975: ADD EDI,0x4
// 0042a978: ADD ECX,0x4
// 0042a97b: INC EAX
// 0042a97c: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 0042a980: MOV ECX,dword ptr [EDX + 0x28558]
// 0042a986: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0042a98a: CMP EAX,ECX
// 0042a98c: JL 0x0042a926
//   XREF to: 0042a926 (CONDITIONAL_JUMP)
// 0042a98e: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0042a98e
//   XREF to: Stack[-0x38] (READ)
// 0042a992: CMP ESI,dword ptr [EAX + 0x28558]
// 0042a998: JNZ 0x0042a9ae
//   XREF to: 0042a9ae (CONDITIONAL_JUMP)
// 0042a99a: MOV dword ptr [EBX + 0xb7dc],0x3f800000
// 0042a9a4: MOV dword ptr [EBX + 0xb7d8],0x1
// 0042a9ae: FILD dword ptr [EBX + 0x2f10]
//   Label: LAB_0042a9ae
// 0042a9b4: FMUL double ptr [0x00617112]
//   XREF to: 00617112 (READ)
// 0042a9ba: FMUL double ptr [0x0061711a]
//   XREF to: 0061711a (READ)
// 0042a9c0: FADD double ptr [0x00617122]
//   XREF to: 00617122 (READ)
// 0042a9c6: MOV EAX,dword ptr [EBX + 0xb7d4]
// 0042a9cc: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (WRITE)
// 0042a9d0: PUSH dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 0042a9d4: PUSH EAX
// 0042a9d5: CALL sound_sndmain.cpp_CallComputingDelay2_FUN_005a9ae0
//   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)
// 0042a9da: ADD ESP,0x8
// 0042a9dd: TEST EAX,EAX
// 0042a9df: JZ 0x0042abaa
//   XREF to: 0042abaa (CONDITIONAL_JUMP)
// 0042a9e5: XOR ECX,ECX
//   Label: LAB_0042a9e5
// 0042a9e7: MOV ESI,dword ptr [EBX + 0x2f10]
// 0042a9ed: MOV dword ptr [ESP + 0x40],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0042a9f1: TEST ESI,ESI
// 0042a9f3: JLE 0x0042aae4
//   XREF to: 0042aae4 (CONDITIONAL_JUMP)
// 0042a9f9: LEA EAX,[EBX + 0xfd8]
// 0042a9ff: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0042aa03: LEA EAX,[EBX + 0x33cc]
// 0042aa09: LEA ESI,[EBX + 0x2f1c]
// 0042aa0f: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0042aa13: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0042aa17: LEA EDI,[EBX + 0x33ec]
// 0042aa1d: MOV EAX,dword ptr [ESI]
//   Label: LAB_0042aa1d
// 0042aa1f: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 0042aa27: JZ 0x0042aab7
//   XREF to: 0042aab7 (CONDITIONAL_JUMP)
// 0042aa2d: MOV dword ptr [EBX + 0xfc],0x1
// 0042aa37: IMUL EAX,dword ptr [ESI + 0x4],0x30
// 0042aa3b: ADD EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 0042aa3f: PUSH EAX
// 0042aa40: LEA EAX,[ESI + 0x8]
// 0042aa43: PUSH EAX
// 0042aa44: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x5c] (DATA)
// 0042aa48: PUSH EAX
// 0042aa49: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0042aa4e: ADD ESP,0xc
// 0042aa51: PUSH EAX
// 0042aa52: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x68] (DATA)
// 0042aa56: PUSH EAX
// 0042aa57: PUSH EBX
// 0042aa58: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042aa5d: ADD ESP,0xc
// 0042aa60: IMUL EDX,dword ptr [ESP + 0x40],0x2a4
//   XREF to: Stack[-0x28] (READ)
// 0042aa68: MOV ECX,dword ptr [EAX]
// 0042aa6a: MOV dword ptr [EDI],ECX
// 0042aa6c: MOV ECX,dword ptr [EAX + 0x4]
// 0042aa6f: MOV dword ptr [EDI + 0x4],ECX
// 0042aa72: MOV ECX,dword ptr [EAX + 0x8]
// 0042aa75: MOV dword ptr [EDI + 0x8],ECX
// 0042aa78: FLD double ptr [0x0061712a]
//   XREF to: 0061712a (READ)
// 0042aa7e: FLD float ptr [ESI + 0x14]
// 0042aa81: FMUL ST1
// 0042aa83: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 0042aa87: FSTP float ptr [EAX + 0x3524]
// 0042aa8d: MOV ECX,dword ptr [ESI + 0x14]
// 0042aa90: MOV dword ptr [EAX + 0x3528],ECX
// 0042aa96: FLD float ptr [ESI + 0x14]
// 0042aa99: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 0042aa9d: FMULP
// 0042aa9f: ADD EDX,ECX
// 0042aaa1: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042aaa4: PUSH EDX
// 0042aaa5: FSTP float ptr [EAX + 0x352c]
// 0042aaab: MOV EAX,dword ptr [EDX + 0x154]
// 0042aab1: CALL dword ptr [EAX + 0x4]
// 0042aab4: ADD ESP,0x8
// 0042aab7: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0042aab7
//   XREF to: Stack[-0x24] (READ)
// 0042aabb: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 0042aabf: ADD ESI,0x18
// 0042aac2: ADD EDI,0x2a4
// 0042aac8: MOV ECX,dword ptr [EBX + 0x2f10]
// 0042aace: ADD EAX,0x2a4
// 0042aad3: INC EDX
// 0042aad4: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0042aad8: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0042aadc: CMP EDX,ECX
// 0042aade: JL 0x0042aa1d
//   XREF to: 0042aa1d (CONDITIONAL_JUMP)
// 0042aae4: MOV ESI,dword ptr [EBX + 0x2614]
//   Label: LAB_0042aae4
// 0042aaea: TEST ESI,ESI
// 0042aaec: JNZ 0x0042ab49
//   XREF to: 0042ab49 (CONDITIONAL_JUMP)
// 0042aaee: MOV EAX,dword ptr [EBX + 0x2f10]
// 0042aaf4: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 0042aaf8: TEST EAX,EAX
// 0042aafa: JLE 0x0042ab49
//   XREF to: 0042ab49 (CONDITIONAL_JUMP)
// 0042aafc: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042aaff: LEA EAX,[EBX + 0x2f1c]
// 0042ab05: FMUL float ptr [0x0065b82c]
//   XREF to: 0065b82c (READ)
// 0042ab0b: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0042ab0f: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0042ab13: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_0042ab13
//   XREF to: Stack[-0x20] (READ)
// 0042ab17: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0042ab1b: MOV EAX,dword ptr [EAX]
// 0042ab1d: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 0042ab25: JNZ 0x0042abdd
//   XREF to: 0042abdd (CONDITIONAL_JUMP)
// 0042ab2b: MOV ESI,dword ptr [ESP + 0x48]
//   Label: LAB_0042ab2b
// 0042ab2f: MOV EDI,dword ptr [ESP + 0x38]
// 0042ab33: MOV EDX,dword ptr [EBX + 0x2f10]
// 0042ab39: ADD ESI,0x18
// 0042ab3c: INC EDI
// 0042ab3d: MOV dword ptr [ESP + 0x48],ESI
// 0042ab41: MOV dword ptr [ESP + 0x38],EDI
// 0042ab45: CMP EDI,EDX
// 0042ab47: JL 0x0042ab13
//   XREF to: 0042ab13 (CONDITIONAL_JUMP)
// 0042ab49: MOV ESP,EBP
//   Label: LAB_0042ab49
// 0042ab4b: POP EBP
// 0042ab4c: POP EDI
// 0042ab4d: POP ESI
// 0042ab4e: POP EBX
// 0042ab4f: RET
// 0042ab50: FLD float ptr [EBX + 0xb7dc]
//   Label: LAB_0042ab50
// 0042ab56: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042ab59: FST float ptr [EBX + 0xb7dc]
// 0042ab5f: FLDZ
// 0042ab61: FCOMPP
// 0042ab63: FNSTSW AX
// 0042ab65: SAHF
// 0042ab66: JBE 0x0042a9e5
//   XREF to: 0042a9e5 (CONDITIONAL_JUMP)
// 0042ab6c: MOV EDX,dword ptr [EBX + 0xb7d4]
// 0042ab72: PUSH EDX
// 0042ab73: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0042ab78: ADD ESP,0x4
// 0042ab7b: PUSH 0x6170ca
//   XREF to: 006170ca (DATA)
// 0042ab80: MOV EAX,dword ptr [EBX + 0x154]
// 0042ab86: PUSH EBX
// 0042ab87: CALL dword ptr [EAX + 0x24]
// 0042ab8a: ADD ESP,0x8
// 0042ab8d: PUSH 0x0
// 0042ab8f: PUSH 0xbf800000
// 0042ab94: PUSH 0x0
// 0042ab96: PUSH EBX
// 0042ab97: CALL core_charactr.cpp_CCharacter_FUN_0042b9e0
//   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)
// 0042ab9c: ADD ESP,0x10
// 0042ab9f: JMP 0x0042a9e5
//   XREF to: 0042a9e5 (UNCONDITIONAL_JUMP)
// 0042aba4: INC ESI
//   Label: LAB_0042aba4
// 0042aba5: JMP 0x0042a969
//   XREF to: 0042a969 (UNCONDITIONAL_JUMP)
// 0042abaa: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   Label: LAB_0042abaa
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 0042abaf: PUSH dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 0042abb3: CALL sound_sndmain.cpp_FUN_005a8a60
//   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
// 0042abb8: ADD ESP,0x4
// 0042abbb: PUSH 0x6170e9
//   XREF to: 006170e9 (DATA)
// 0042abc0: MOV EAX,dword ptr [EBX + 0x154]
// 0042abc6: PUSH EBX
// 0042abc7: CALL dword ptr [EAX + 0x28]
// 0042abca: ADD ESP,0x8
// 0042abcd: MOV dword ptr [EBX + 0xb7d4],EAX
// 0042abd3: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 0042abd8: JMP 0x0042a9e5
//   XREF to: 0042a9e5 (UNCONDITIONAL_JUMP)
// 0042abdd: FLD float ptr [ESP + 0x2c]
//   Label: LAB_0042abdd
// 0042abe1: FMUL float ptr [EBX + 0x2f18]
// 0042abe7: MOV EAX,dword ptr [ESP + 0x48]
// 0042abeb: FADD float ptr [EAX + 0x14]
// 0042abee: FST float ptr [EAX + 0x14]
// 0042abf1: FCOMP float ptr [0x0065b830]
//   XREF to: 0065b830 (READ)
// 0042abf7: FNSTSW AX
// 0042abf9: SAHF
// 0042abfa: JBE 0x0042ab2b
//   XREF to: 0042ab2b (CONDITIONAL_JUMP)
// 0042ac00: MOV EAX,dword ptr [ESP + 0x48]
// 0042ac04: MOV EDX,dword ptr [0x0065b830]
//   XREF to: 0065b830 (READ)
// 0042ac0a: MOV dword ptr [EAX + 0x14],EDX
// 0042ac0d: MOV EAX,dword ptr [ESP + 0x50]
// 0042ac11: MOV EDI,dword ptr [EAX + 0x28558]
// 0042ac17: XOR ESI,ESI
// 0042ac19: TEST EDI,EDI
// 0042ac1b: JLE 0x0042ac68
//   XREF to: 0042ac68 (CONDITIONAL_JUMP)
// 0042ac1d: MOV EDI,EAX
// 0042ac1f: MOV EDX,dword ptr [ESP + 0x4c]
//   Label: LAB_0042ac1f
// 0042ac23: MOV EAX,dword ptr [EDI + 0x2857c]
// 0042ac29: MOV ECX,dword ptr [EDX + 0x4]
// 0042ac2c: CMP EAX,ECX
// 0042ac2e: JNZ 0x0042ac56
//   XREF to: 0042ac56 (CONDITIONAL_JUMP)
// 0042ac30: MOV EDX,dword ptr [EBX + 0x2f10]
// 0042ac36: XOR EAX,ECX
// 0042ac38: TEST EDX,EDX
// 0042ac3a: JLE 0x0042ac4a
//   XREF to: 0042ac4a (CONDITIONAL_JUMP)
// 0042ac3c: MOV EDX,EBX
// 0042ac3e: CMP ESI,dword ptr [EDX + 0x2f20]
//   Label: LAB_0042ac3e
// 0042ac44: JNZ 0x0042acc0
//   XREF to: 0042acc0 (CONDITIONAL_JUMP)
// 0042ac4a: CMP EAX,dword ptr [EBX + 0x2f10]
//   Label: LAB_0042ac4a
// 0042ac50: JZ 0x0042acd7
//   XREF to: 0042acd7 (CONDITIONAL_JUMP)
// 0042ac56: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_0042ac56
// 0042ac5a: INC ESI
// 0042ac5b: MOV EDX,dword ptr [EAX + 0x28558]
// 0042ac61: ADD EDI,0x24
// 0042ac64: CMP ESI,EDX
// 0042ac66: JL 0x0042ac1f
//   XREF to: 0042ac1f (CONDITIONAL_JUMP)
// 0042ac68: MOV ECX,dword ptr [EBX + 0x2f10]
//   Label: LAB_0042ac68
// 0042ac6e: XOR EAX,EAX
// 0042ac70: TEST ECX,ECX
// 0042ac72: JLE 0x0042ac90
//   XREF to: 0042ac90 (CONDITIONAL_JUMP)
// 0042ac74: MOV EDX,dword ptr [ESP + 0x4c]
// 0042ac78: IMUL EDI,dword ptr [EDX + 0x4],0x24
// 0042ac7c: ADD EDI,dword ptr [ESP + 0x50]
// 0042ac80: MOV EDX,EBX
// 0042ac82: MOV ECX,dword ptr [EDI + 0x2857c]
//   Label: LAB_0042ac82
// 0042ac88: CMP ECX,dword ptr [EDX + 0x2f20]
// 0042ac8e: JNZ 0x0042aceb
//   XREF to: 0042aceb (CONDITIONAL_JUMP)
// 0042ac90: CMP EAX,dword ptr [EBX + 0x2f10]
//   Label: LAB_0042ac90
// 0042ac96: JNZ 0x0042ab2b
//   XREF to: 0042ab2b (CONDITIONAL_JUMP)
// 0042ac9c: MOV EAX,dword ptr [ESP + 0x4c]
// 0042aca0: IMUL EAX,dword ptr [EAX + 0x4],0x24
// 0042aca4: MOV EDX,dword ptr [ESP + 0x50]
// 0042aca8: ADD EAX,EDX
// 0042acaa: MOV ECX,dword ptr [EAX + 0x2857c]
// 0042acb0: PUSH ECX
// 0042acb1: PUSH EDX
// 0042acb2: PUSH EBX
// 0042acb3: CALL core_charactr.cpp_CCharacter_FUN_0042a520
//   XREF to: 0042a520 (UNCONDITIONAL_CALL)
// 0042acb8: ADD ESP,0xc
// 0042acbb: JMP 0x0042ab2b
//   XREF to: 0042ab2b (UNCONDITIONAL_JUMP)
// 0042acc0: INC EAX
//   Label: LAB_0042acc0
// 0042acc1: MOV ECX,dword ptr [EBX + 0x2f10]
// 0042acc7: ADD EDX,0x18
// 0042acca: CMP EAX,ECX
// 0042accc: JL 0x0042ac3e
//   XREF to: 0042ac3e (CONDITIONAL_JUMP)
// 0042acd2: JMP 0x0042ac4a
//   XREF to: 0042ac4a (UNCONDITIONAL_JUMP)
// 0042acd7: PUSH ESI
//   Label: LAB_0042acd7
// 0042acd8: MOV ECX,dword ptr [ESP + 0x54]
// 0042acdc: PUSH ECX
// 0042acdd: PUSH EBX
// 0042acde: CALL core_charactr.cpp_CCharacter_FUN_0042a520
//   XREF to: 0042a520 (UNCONDITIONAL_CALL)
// 0042ace3: ADD ESP,0xc
// 0042ace6: JMP 0x0042ac56
//   XREF to: 0042ac56 (UNCONDITIONAL_JUMP)
// 0042aceb: INC EAX
//   Label: LAB_0042aceb
// 0042acec: MOV ECX,dword ptr [EBX + 0x2f10]
// 0042acf2: ADD EDX,0x18
// 0042acf5: CMP EAX,ECX
// 0042acf7: JL 0x0042ac82
//   XREF to: 0042ac82 (CONDITIONAL_JUMP)
// 0042acf9: JMP 0x0042ac90
//   XREF to: 0042ac90 (UNCONDITIONAL_JUMP)
