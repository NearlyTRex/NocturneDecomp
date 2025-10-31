// Name: core_set.cpp_CDemonSet_FUN_0056fbd0
// Address: 0056fbd0
// Address Range: [[0056fbd0, 0056ffdc]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056fbd0(CDemonSet * this_ptr)
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a349 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056be80 (0056be80) at 0056c0aa [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c459 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cb27 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b3a4 [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_005713c0 (005713c0) at 005713c9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_buildDispList_d_items_3__00645feb
//   float FLOAT_0064600f = 0.5
//   double DOUBLE_00646013 = 0.0555555555555556
//   double DOUBLE_0064601b = 0.0000152587890625
//   double DOUBLE_00646023 = 1000
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CConsole g_ConsolePtr
//   CDemonRenderer g_CDemonRendererInstance
//   CGame g_CGameInstance
//   undefined4 DAT_02d81ca8
//   undefined4 g_CGameInstance.block_auto_save
//   undefined4 g_CGameInstance.delta_time_float
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   undefined4 DAT_02f33744
//   int g_ActiveLightCount
//   int g_DynamicLightCount
//   undefined4 DAT_03342b4c
//   undefined4 DAT_03342b50
//   undefined4 DAT_03342b54
//   undefined4 DAT_03342b58
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320
//   crt_stdlib.c_qsort_FUN_005fdf38
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056fbd0(CDemonSet *this_ptr)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  CDemonActorClassMetadata *pCVar3;
  CHero *this_ptr_00;
  CVector3f *pCVar4;
  int *piVar5;
  CCharacter *pCVar6;
  float fVar7;
  int iVar8;
  SIZE_T SVar9;
  CBoundingBox3D *pCVar10;
  int iVar11;
  uint uVar12;
  BADSPACEBASE *in_ESP;
  CDemonSet *pCVar13;
  CDemonSet *in_stack_00000010;
  uint in_stack_00000014;
  CVector3i *in_stack_ffffff7c;
  undefined8 uStack_7c;
  float afStack_68 [7];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_1c;
  float fStack_18;
  float local_14;
  
  if (g_CGamePtr->profile_mode != 0) {
    local_28 = (float)wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  DAT_03342b4c = 0;
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr,in_stack_ffffff7c);
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr,afStack_68);
  fStack_1c = 1.68156e-44;
  if ((g_DynamicLightCount != 0) || (g_CGamePtr->block_auto_save != 0)) {
    fStack_1c = 1.82169e-44;
  }
  if (g_ActiveLightCount != 0) {
    fStack_1c = (float)((uint)fStack_1c | 0x22);
  }
  fStack_18 = 0.0;
  pCVar13 = in_stack_00000010;
  if (0 < *(int *)(in_stack_00000010->field19_0x14f0a0 + 0x9c4c)) {
    do {
      this_ptr_00 = *(CHero **)(pCVar13->field19_0x14f0a0 + 0x9c50);
      if ((this_ptr_00 != g_HeroActors[g_LocalHeroIndex]) &&
         ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0 ||
          (*(int *)((this_ptr_00->base_character).base_actor.metadata.field3_0x1c + 4) == 0)))) {
        if (in_stack_00000014 == 0xffffffff) {
          (this_ptr_00->base_character).base_actor.metadata.runtime_flags = -1;
        }
        pCVar3 = &(this_ptr_00->base_character).base_actor.metadata;
        iVar8 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00571320(in_stack_00000010);
        pCVar1 = &(this_ptr_00->base_character).base_actor.location;
        pCVar4 = &(this_ptr_00->base_character).base_actor.metadata.runtime_vector2;
        pCVar2 = &(this_ptr_00->base_character).base_actor.orient;
        if (iVar8 == 0) {
          if (((((pCVar1->position).x == (pCVar3->runtime_vector1).x) &&
               ((this_ptr_00->base_character).base_actor.location.position.y ==
                (this_ptr_00->base_character).base_actor.metadata.runtime_vector1.y)) &&
              ((this_ptr_00->base_character).base_actor.location.position.z ==
               (this_ptr_00->base_character).base_actor.metadata.runtime_vector1.z)) &&
             (((pCVar2->pitch == pCVar4->x &&
               ((this_ptr_00->base_character).base_actor.orient.bank ==
                (this_ptr_00->base_character).base_actor.metadata.runtime_vector2.y)) &&
              ((this_ptr_00->base_character).base_actor.orient.heading ==
               (this_ptr_00->base_character).base_actor.metadata.runtime_vector2.z)))) {
            if (((this_ptr_00->base_character).base_actor.metadata.runtime_flags & (uint)fStack_1c)
                == 0) goto LAB_0056fc73;
          }
          else {
            piVar5 = &(this_ptr_00->base_character).base_actor.metadata.runtime_flags;
            *piVar5 = *piVar5 | in_stack_00000014;
          }
          uVar12 = (this_ptr_00->base_character).base_actor.metadata.runtime_flags & (uint)fStack_1c
          ;
joined_r0x0056fede:
          if (uVar12 == 0) goto LAB_0056fc73;
        }
        else {
          if ((((pCVar1->position).x == (pCVar3->runtime_vector1).x) &&
              ((this_ptr_00->base_character).base_actor.location.position.y ==
               (this_ptr_00->base_character).base_actor.metadata.runtime_vector1.y)) &&
             (((this_ptr_00->base_character).base_actor.location.position.z ==
               (this_ptr_00->base_character).base_actor.metadata.runtime_vector1.z &&
              (((pCVar2->pitch == pCVar4->x &&
                ((this_ptr_00->base_character).base_actor.orient.bank ==
                 (this_ptr_00->base_character).base_actor.metadata.runtime_vector2.y)) &&
               ((this_ptr_00->base_character).base_actor.orient.heading ==
                (this_ptr_00->base_character).base_actor.metadata.runtime_vector2.z)))))) {
            uVar12 = *(uint *)(this_ptr_00->base_character).base_actor.metadata.field3_0x1c;
            goto joined_r0x0056fede;
          }
          pCVar6 = &this_ptr_00->base_character;
          (pCVar6->base_actor).metadata.field3_0x1c[0] = '\x01';
          (pCVar6->base_actor).metadata.field3_0x1c[1] = '\0';
          (pCVar6->base_actor).metadata.field3_0x1c[2] = '\0';
          (pCVar6->base_actor).metadata.field3_0x1c[3] = '\0';
        }
        pCVar10 = (*((this_ptr_00->base_character).base_actor.metadata.vtable)->getBoundingBox)
                            ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)&uStack_7c);
        local_2c = (pCVar10->min).x + (pCVar10->max).x;
        local_28 = (pCVar10->min).y + (pCVar10->max).y;
        fStack_38 = local_2c * FLOAT_0064600f;
        fStack_34 = local_28 * FLOAT_0064600f;
        local_24 = (pCVar10->min).z + (pCVar10->max).z;
        fStack_30 = local_24 * FLOAT_0064600f;
        uStack_7c._4_4_ = 7.989013e-39;
        core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)this_ptr_00);
        DAT_03342b4c = DAT_03342b4c + 1;
        *(CHero **)(DAT_03342b4c * 8 + 0x3342b48) = this_ptr_00;
        (&DAT_03342b4c)[DAT_03342b4c * 2] =
             (SIZE_T)((fStack_44 - local_14) * (fStack_44 - local_14) +
                     (fStack_48 - fStack_18) * (fStack_48 - fStack_18) +
                     (fStack_4c - fStack_1c) * (fStack_4c - fStack_1c));
      }
LAB_0056fc73:
      fStack_18 = (float)((int)fStack_18 + 1);
      pCVar13 = (CDemonSet *)pCVar13->cameras;
    } while ((int)fStack_18 < *(int *)(in_stack_00000010->field19_0x14f0a0 + 0x9c4c));
  }
  crt_stdlib_c_qsort_FUN_005fdf38(&DAT_03342b50,DAT_03342b4c,8,core_set_cpp_FUN_0056fba0);
  fVar7 = fStack_1c;
  SVar9 = DAT_03342b4c;
  if (g_HeroActors[g_LocalHeroIndex] == (CHero *)0x0) {
    iVar8 = 0;
    if (0 < (int)DAT_03342b4c) {
      iVar11 = 0;
      uVar12 = in_stack_00000014;
      do {
        iVar8 = iVar8 + 1;
        *(undefined4 *)(uVar12 + 0x15f6e8) = *(undefined4 *)((int)&DAT_03342b50 + iVar11);
        iVar11 = iVar11 + 8;
        SVar9 = DAT_03342b4c;
        uVar12 = uVar12 + 4;
      } while (iVar8 < (int)DAT_03342b4c);
    }
  }
  else {
    iVar8 = 0;
    *(CHero **)(in_stack_00000014 + 0x15f6e8) = g_HeroActors[g_LocalHeroIndex];
    if (0 < (int)SVar9) {
      iVar11 = 0;
      uVar12 = in_stack_00000014;
      do {
        iVar8 = iVar8 + 1;
        *(undefined4 *)(uVar12 + 0x15f6ec) = *(undefined4 *)((int)&DAT_03342b50 + iVar11);
        iVar11 = iVar11 + 8;
        uVar12 = uVar12 + 4;
      } while (iVar8 < (int)DAT_03342b4c);
    }
    SVar9 = DAT_03342b4c + 1;
  }
  *(SIZE_T *)(in_stack_00000014 + 0x15f6e4) = SVar9;
  if (g_CGamePtr->profile_mode == 0) {
    return;
  }
  uStack_7c._0_4_ = 7.989523e-39;
  iVar8 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  uStack_7c = ((double)(iVar8 - (int)fVar7) * DOUBLE_00646013 * DOUBLE_0064601b * DOUBLE_00646023) /
              (double)g_CGamePtr->delta_time_float;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"buildDispList %d items : %3.2f ms\n",DAT_03342b4c);
  return;
}


// Assembly code:
// 0056fbd0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056fbd0
// 0056fbd1: PUSH ESI
// 0056fbd2: PUSH EDI
// 0056fbd3: PUSH EBP
// 0056fbd4: SUB ESP,0x78
// 0056fbd7: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0056fbdc: CMP dword ptr [EAX + 0x20c],0x0
//   XREF to: 02d81ca8 (READ)
// 0056fbe3: JNZ 0x0056fd2d
//   XREF to: 0056fd2d (CONDITIONAL_JUMP)
// 0056fbe9: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_0056fbe9
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056fbef: XOR ECX,ECX
// 0056fbf1: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0056fbf2: LEA ESI,[ESP + 0x28]
//   XREF to: Stack[-0x64] (DATA)
// 0056fbf6: MOV dword ptr [0x03342b4c],ECX
//   XREF to: 03342b4c (WRITE)
// 0056fbfc: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
//   XREF to: 0048c760 (UNCONDITIONAL_CALL)
// 0056fc01: ADD ESP,0x4
// 0056fc04: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x70] (DATA)
// 0056fc08: PUSH EAX
// 0056fc09: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0056fc0f: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0056fc10: MOV EDI,0xc
// 0056fc15: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   XREF to: 0048c780 (UNCONDITIONAL_CALL)
// 0056fc1a: ADD ESP,0x8
// 0056fc1d: MOV EBP,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056fc23: MOV dword ptr [ESP + 0x60],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0056fc27: TEST EBP,EBP
// 0056fc29: JZ 0x0056fd3b
//   XREF to: 0056fd3b (CONDITIONAL_JUMP)
// 0056fc2f: OR byte ptr [ESP + 0x60],0x1
//   Label: LAB_0056fc2f
//   XREF to: Stack[-0x28] (READ_WRITE)
// 0056fc34: CMP dword ptr [0x03276f30],0x0
//   Label: LAB_0056fc34
//   XREF to: 03276f30 (READ)
// 0056fc3b: JZ 0x0056fc42
//   XREF to: 0056fc42 (CONDITIONAL_JUMP)
// 0056fc3d: OR byte ptr [ESP + 0x60],0x22
//   XREF to: Stack[-0x28] (READ_WRITE)
// 0056fc42: MOV EAX,dword ptr [ESP + 0x8c]
//   Label: LAB_0056fc42
//   XREF to: Stack[0x4] (READ)
// 0056fc49: XOR EBX,EBX
// 0056fc4b: MOV ESI,dword ptr [EAX + 0x158cec]
// 0056fc51: MOV dword ptr [ESP + 0x64],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0056fc55: TEST ESI,ESI
// 0056fc57: JLE 0x0056fc90
//   XREF to: 0056fc90 (CONDITIONAL_JUMP)
// 0056fc59: MOV EBP,EAX
// 0056fc5b: MOV EAX,[0x02db87d0]
//   Label: LAB_0056fc5b
//   XREF to: 02db87d0 (READ)
// 0056fc60: MOV EBX,dword ptr [EBP + 0x158cf0]
// 0056fc66: CMP EBX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0056fc6d: JNZ 0x0056fd52
//   XREF to: 0056fd52 (CONDITIONAL_JUMP)
// 0056fc73: MOV EDI,dword ptr [ESP + 0x64]
//   Label: LAB_0056fc73
//   XREF to: Stack[-0x24] (READ)
// 0056fc77: MOV EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x4] (READ)
// 0056fc7e: ADD EBP,0x4
// 0056fc81: INC EDI
// 0056fc82: MOV ECX,dword ptr [EDX + 0x158cec]
// 0056fc88: MOV dword ptr [ESP + 0x64],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0056fc8c: CMP EDI,ECX
// 0056fc8e: JL 0x0056fc5b
//   XREF to: 0056fc5b (CONDITIONAL_JUMP)
// 0056fc90: PUSH 0x56fba0
//   Label: LAB_0056fc90
//   XREF to: 0056fba0 (DATA)
// 0056fc95: PUSH 0x8
// 0056fc97: MOV EBX,dword ptr [0x03342b4c]
//   XREF to: 03342b4c (READ)
// 0056fc9d: PUSH EBX
// 0056fc9e: PUSH 0x3342b50
//   XREF to: 03342b50 (DATA)
// 0056fca3: CALL crt_stdlib.c_qsort_FUN_005fdf38
//   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
// 0056fca8: MOV EBX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0056fcae: SHL EBX,0x2
// 0056fcb1: MOV ESI,dword ptr [EBX + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0056fcb7: ADD ESP,0x10
// 0056fcba: TEST ESI,ESI
// 0056fcbc: JZ 0x0056ff30
//   XREF to: 0056ff30 (CONDITIONAL_JUMP)
// 0056fcc2: MOV EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x4] (READ)
// 0056fcc9: MOV EAX,ESI
// 0056fccb: MOV EBP,dword ptr [0x03342b4c]
//   XREF to: 03342b4c (READ)
// 0056fcd1: XOR EAX,ESI
// 0056fcd3: MOV dword ptr [EDX + 0x15f6e8],ESI
// 0056fcd9: TEST EBP,EBP
// 0056fcdb: JLE 0x0056fd00
//   XREF to: 0056fd00 (CONDITIONAL_JUMP)
// 0056fcdd: XOR ECX,ECX
// 0056fcdf: ADD EDX,0x4
//   Label: LAB_0056fcdf
// 0056fce2: MOV EBX,dword ptr [ECX + 0x3342b50]
//   XREF to: 03342b50 (READ)
//   XREF to: 03342b58 (READ)
// 0056fce8: INC EAX
// 0056fce9: MOV dword ptr [EDX + 0x15f6e8],EBX
// 0056fcef: MOV EBX,dword ptr [0x03342b4c]
//   XREF to: 03342b4c (READ)
// 0056fcf5: ADD ECX,0x8
// 0056fcf8: CMP EAX,EBX
// 0056fcfa: JL 0x0056fcdf
//   XREF to: 0056fcdf (CONDITIONAL_JUMP)
// 0056fcfc: LEA EAX,[EAX]
// 0056fd00: MOV EAX,[0x03342b4c]
//   Label: LAB_0056fd00
//   XREF to: 03342b4c (READ)
// 0056fd05: MOV EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x4] (READ)
// 0056fd0c: INC EAX
// 0056fd0d: MOV dword ptr [EDX + 0x15f6e4],EAX
//   Label: LAB_0056fd0d
// 0056fd13: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 0056fd18: CMP dword ptr [EAX + 0x20c],0x0
//   XREF to: 02d81ca8 (READ)
// 0056fd1f: JNZ 0x0056ff81
//   XREF to: 0056ff81 (CONDITIONAL_JUMP)
// 0056fd25: ADD ESP,0x78
// 0056fd28: POP EBP
// 0056fd29: POP EDI
// 0056fd2a: POP ESI
// 0056fd2b: POP EBX
// 0056fd2c: RET
// 0056fd2d: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_0056fd2d
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0056fd32: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0056fd36: JMP 0x0056fbe9
//   XREF to: 0056fbe9 (UNCONDITIONAL_JUMP)
// 0056fd3b: MOV EAX,[0x0067b654]
//   Label: LAB_0056fd3b
//   XREF to: 0067b654 (READ)
// 0056fd40: CMP dword ptr [EAX + 0x240],0x0
//   XREF to: 02d81cdc (READ)
// 0056fd47: JNZ 0x0056fc2f
//   XREF to: 0056fc2f (CONDITIONAL_JUMP)
// 0056fd4d: JMP 0x0056fc34
//   XREF to: 0056fc34 (UNCONDITIONAL_JUMP)
// 0056fd52: MOV EAX,[0x0067d550]
//   Label: LAB_0056fd52
//   XREF to: 0067d550 (READ)
// 0056fd57: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 0056fd5b: JZ 0x0056fd6a
//   XREF to: 0056fd6a (CONDITIONAL_JUMP)
// 0056fd5d: CMP dword ptr [EBX + 0x148],0x0
// 0056fd64: JNZ 0x0056fc73
//   XREF to: 0056fc73 (CONDITIONAL_JUMP)
// 0056fd6a: MOV EDI,dword ptr [ESP + 0x90]
//   Label: LAB_0056fd6a
//   XREF to: Stack[0x8] (READ)
// 0056fd71: CMP EDI,-0x1
// 0056fd74: JNZ 0x0056fd7c
//   XREF to: 0056fd7c (CONDITIONAL_JUMP)
// 0056fd76: MOV dword ptr [EBX + 0x140],EDI
// 0056fd7c: MOV EAX,dword ptr [ESP + 0x8c]
//   Label: LAB_0056fd7c
//   XREF to: Stack[0x4] (READ)
// 0056fd83: PUSH EAX
// 0056fd84: LEA EDI,[EBX + 0x128]
// 0056fd8a: CALL core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320
//   XREF to: 00571320 (UNCONDITIONAL_CALL)
// 0056fd8f: LEA ESI,[EBX + 0x20]
// 0056fd92: LEA ECX,[EBX + 0x134]
// 0056fd98: ADD ESP,0x4
// 0056fd9b: LEA EDX,[EBX + 0x30]
// 0056fd9e: TEST EAX,EAX
// 0056fda0: JZ 0x0056febe
//   XREF to: 0056febe (CONDITIONAL_JUMP)
// 0056fda6: FLD float ptr [ESI]
// 0056fda8: FCOMP float ptr [EDI]
// 0056fdaa: FNSTSW AX
// 0056fdac: SAHF
// 0056fdad: JZ 0x0056fe63
//   XREF to: 0056fe63 (CONDITIONAL_JUMP)
// 0056fdb3: MOV dword ptr [EBX + 0x144],0x1
//   Label: LAB_0056fdb3
// 0056fdbd: MOV EAX,ESP
//   Label: LAB_0056fdbd
// 0056fdbf: PUSH EAX
// 0056fdc0: MOV EDX,dword ptr [EBX + 0x154]
// 0056fdc6: PUSH EBX
// 0056fdc7: CALL dword ptr [EDX + 0x14]
// 0056fdca: LEA EDX,[EAX + 0xc]
// 0056fdcd: FLD float ptr [EAX]
// 0056fdcf: FADD float ptr [EDX]
// 0056fdd1: ADD ESP,0x8
// 0056fdd4: FST float ptr [ESP + 0x3c]
// 0056fdd8: FLD float ptr [EAX + 0x4]
// 0056fddb: FADD float ptr [EDX + 0x4]
// 0056fdde: FXCH
// 0056fde0: FLD float ptr [0x0064600f]
//   XREF to: 0064600f (READ)
// 0056fde6: FXCH
// 0056fde8: FMUL ST1
// 0056fdea: FXCH ST2
// 0056fdec: FST float ptr [ESP + 0x40]
// 0056fdf0: FMUL ST1
// 0056fdf2: FLD float ptr [EAX + 0x8]
// 0056fdf5: FADD float ptr [EDX + 0x8]
// 0056fdf8: LEA EAX,[ESP + 0x30]
// 0056fdfc: FST float ptr [ESP + 0x44]
// 0056fe00: FMULP ST2
// 0056fe02: PUSH EAX
// 0056fe03: LEA EAX,[ESP + 0x4c]
// 0056fe07: FXCH ST2
// 0056fe09: FSTP float ptr [ESP + 0x34]
// 0056fe0d: PUSH EAX
// 0056fe0e: FXCH
// 0056fe10: FSTP float ptr [ESP + 0x3c]
// 0056fe14: PUSH EBX
// 0056fe15: FSTP float ptr [ESP + 0x44]
// 0056fe19: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0056fe1e: ADD ESP,0xc
// 0056fe21: FLD float ptr [ESP + 0x18]
// 0056fe25: FSUB float ptr [ESP + 0x48]
// 0056fe29: FMUL ST0
// 0056fe2b: FLD float ptr [ESP + 0x1c]
// 0056fe2f: FSUB float ptr [ESP + 0x4c]
// 0056fe33: FMUL ST0
// 0056fe35: MOV EAX,[0x03342b4c]
//   XREF to: 03342b4c (READ)
// 0056fe3a: FLD float ptr [ESP + 0x20]
// 0056fe3e: INC EAX
// 0056fe3f: FXCH
// 0056fe41: FADDP ST2,ST0
// 0056fe43: FSUB float ptr [ESP + 0x50]
// 0056fe47: FMUL ST0
// 0056fe49: MOV dword ptr [EAX*0x8 + 0x3342b48],EBX
//   XREF to: 03342b50 (WRITE)
// 0056fe50: FADDP
// 0056fe52: MOV [0x03342b4c],EAX
//   XREF to: 03342b4c (WRITE)
// 0056fe57: FSTP float ptr [EAX*0x8 + 0x3342b4c]
//   XREF to: 03342b54 (WRITE)
// 0056fe5e: JMP 0x0056fc73
//   XREF to: 0056fc73 (UNCONDITIONAL_JUMP)
// 0056fe63: FLD float ptr [ESI + 0x4]
//   Label: LAB_0056fe63
// 0056fe66: FCOMP float ptr [EDI + 0x4]
// 0056fe69: FNSTSW AX
// 0056fe6b: SAHF
// 0056fe6c: JNZ 0x0056fdb3
//   XREF to: 0056fdb3 (CONDITIONAL_JUMP)
// 0056fe72: FLD float ptr [ESI + 0x8]
// 0056fe75: FCOMP float ptr [EDI + 0x8]
// 0056fe78: FNSTSW AX
// 0056fe7a: SAHF
// 0056fe7b: JNZ 0x0056fdb3
//   XREF to: 0056fdb3 (CONDITIONAL_JUMP)
// 0056fe81: FLD float ptr [EDX]
// 0056fe83: FCOMP float ptr [ECX]
// 0056fe85: FNSTSW AX
// 0056fe87: SAHF
// 0056fe88: JNZ 0x0056fdb3
//   XREF to: 0056fdb3 (CONDITIONAL_JUMP)
// 0056fe8e: FLD float ptr [EDX + 0x4]
// 0056fe91: FCOMP float ptr [ECX + 0x4]
// 0056fe94: FNSTSW AX
// 0056fe96: SAHF
// 0056fe97: JNZ 0x0056fdb3
//   XREF to: 0056fdb3 (CONDITIONAL_JUMP)
// 0056fe9d: FLD float ptr [EDX + 0x8]
// 0056fea0: FCOMP float ptr [ECX + 0x8]
// 0056fea3: FNSTSW AX
// 0056fea5: SAHF
// 0056fea6: JNZ 0x0056fdb3
//   XREF to: 0056fdb3 (CONDITIONAL_JUMP)
// 0056feac: CMP dword ptr [EBX + 0x144],0x0
// 0056feb3: JZ 0x0056fc73
//   XREF to: 0056fc73 (CONDITIONAL_JUMP)
// 0056feb9: JMP 0x0056fdbd
//   XREF to: 0056fdbd (UNCONDITIONAL_JUMP)
// 0056febe: FLD float ptr [ESI]
//   Label: LAB_0056febe
// 0056fec0: FCOMP float ptr [EDI]
// 0056fec2: FNSTSW AX
// 0056fec4: SAHF
// 0056fec5: JZ 0x0056fee9
//   XREF to: 0056fee9 (CONDITIONAL_JUMP)
// 0056fec7: MOV EAX,dword ptr [ESP + 0x90]
//   Label: LAB_0056fec7
//   XREF to: Stack[0x8] (READ)
// 0056fece: OR dword ptr [EBX + 0x140],EAX
// 0056fed4: MOV ESI,dword ptr [ESP + 0x60]
//   Label: LAB_0056fed4
//   XREF to: Stack[-0x28] (READ)
// 0056fed8: TEST dword ptr [EBX + 0x140],ESI
// 0056fede: JZ 0x0056fc73
//   XREF to: 0056fc73 (CONDITIONAL_JUMP)
// 0056fee4: JMP 0x0056fdbd
//   XREF to: 0056fdbd (UNCONDITIONAL_JUMP)
// 0056fee9: FLD float ptr [ESI + 0x4]
//   Label: LAB_0056fee9
// 0056feec: FCOMP float ptr [EDI + 0x4]
// 0056feef: FNSTSW AX
// 0056fef1: SAHF
// 0056fef2: JNZ 0x0056fec7
//   XREF to: 0056fec7 (CONDITIONAL_JUMP)
// 0056fef4: FLD float ptr [ESI + 0x8]
// 0056fef7: FCOMP float ptr [EDI + 0x8]
// 0056fefa: FNSTSW AX
// 0056fefc: SAHF
// 0056fefd: JNZ 0x0056fec7
//   XREF to: 0056fec7 (CONDITIONAL_JUMP)
// 0056feff: FLD float ptr [EDX]
// 0056ff01: FCOMP float ptr [ECX]
// 0056ff03: FNSTSW AX
// 0056ff05: SAHF
// 0056ff06: JNZ 0x0056fec7
//   XREF to: 0056fec7 (CONDITIONAL_JUMP)
// 0056ff08: FLD float ptr [EDX + 0x4]
// 0056ff0b: FCOMP float ptr [ECX + 0x4]
// 0056ff0e: FNSTSW AX
// 0056ff10: SAHF
// 0056ff11: JNZ 0x0056fec7
//   XREF to: 0056fec7 (CONDITIONAL_JUMP)
// 0056ff13: FLD float ptr [EDX + 0x8]
// 0056ff16: FCOMP float ptr [ECX + 0x8]
// 0056ff19: FNSTSW AX
// 0056ff1b: SAHF
// 0056ff1c: JNZ 0x0056fec7
//   XREF to: 0056fec7 (CONDITIONAL_JUMP)
// 0056ff1e: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 0056ff22: TEST dword ptr [EBX + 0x140],ECX
// 0056ff28: JZ 0x0056fc73
//   XREF to: 0056fc73 (CONDITIONAL_JUMP)
// 0056ff2e: JMP 0x0056fed4
//   XREF to: 0056fed4 (UNCONDITIONAL_JUMP)
// 0056ff30: MOV EDI,dword ptr [0x03342b4c]
//   Label: LAB_0056ff30
//   XREF to: 03342b4c (READ)
// 0056ff36: XOR EBX,EBX
// 0056ff38: TEST EDI,EDI
// 0056ff3a: JLE 0x0056ff70
//   XREF to: 0056ff70 (CONDITIONAL_JUMP)
// 0056ff3c: MOV EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x4] (READ)
// 0056ff43: XOR EAX,EAX
// 0056ff45: ADD EDX,0x4
//   Label: LAB_0056ff45
// 0056ff48: MOV ECX,dword ptr [EAX + 0x3342b50]
//   XREF to: 03342b50 (READ)
//   XREF to: 03342b58 (READ)
// 0056ff4e: INC EBX
// 0056ff4f: MOV dword ptr [EDX + 0x15f6e4],ECX
// 0056ff55: MOV ECX,dword ptr [0x03342b4c]
//   XREF to: 03342b4c (READ)
// 0056ff5b: ADD EAX,0x8
// 0056ff5e: CMP EBX,ECX
// 0056ff60: JL 0x0056ff45
//   XREF to: 0056ff45 (CONDITIONAL_JUMP)
// 0056ff62: LEA EAX,[EAX]
// 0056ff68: LEA EDX,[EDX]
// 0056ff6e: MOV EAX,EAX
// 0056ff70: MOV EDX,dword ptr [ESP + 0x8c]
//   Label: LAB_0056ff70
//   XREF to: Stack[0x4] (READ)
// 0056ff77: MOV EAX,[0x03342b4c]
//   XREF to: 03342b4c (READ)
// 0056ff7c: JMP 0x0056fd0d
//   XREF to: 0056fd0d (UNCONDITIONAL_JUMP)
// 0056ff81: MOV EDI,dword ptr [ESP + 0x5c]
//   Label: LAB_0056ff81
//   XREF to: Stack[-0x2c] (READ)
// 0056ff85: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0056ff8a: SUB EAX,EDI
// 0056ff8c: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056ff90: FILD dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 0056ff94: FMUL double ptr [0x00646013]
//   XREF to: 00646013 (READ)
// 0056ff9a: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0056ff9f: FMUL double ptr [0x0064601b]
//   XREF to: 0064601b (READ)
// 0056ffa5: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0056ffab: FXCH
// 0056ffad: FMUL double ptr [0x00646023]
//   XREF to: 00646023 (READ)
// 0056ffb3: FDIVRP
// 0056ffb5: SUB ESP,0x8
// 0056ffb8: MOV EBP,dword ptr [0x03342b4c]
//   XREF to: 03342b4c (READ)
// 0056ffbe: FSTP double ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 0056ffc1: PUSH EBP
// 0056ffc2: PUSH 0x645feb
//   XREF to: 00645feb (DATA)
// 0056ffc7: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0056ffcc: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 0056ffcd: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0056ffd2: ADD ESP,0x14
// 0056ffd5: ADD ESP,0x78
// 0056ffd8: POP EBP
// 0056ffd9: POP EDI
// 0056ffda: POP ESI
// 0056ffdb: POP EBX
// 0056ffdc: RET
