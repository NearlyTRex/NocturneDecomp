// Name: core_frankgen.cpp_LoadModel_FUN_004d2190
// Address: 004d2190
// Address Range: [[004d2190, 004d232c]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_LoadModel_FUN_004d2190()
// Cross-references:
//   core_frankgen.cpp_FUN_004d17b0 (004d17b0) at 004d1857 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d1f70 (004d1f70) at 004d1f9c [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d25f0 (004d25f0) at 004d26f3 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_PlaySounds_FUN_004d1a40 (004d1a40) at 004d1a94 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004d2168 = 004d21b1
//   TerminatedCString s_core_frankgen_cpp_0062ab35
//   TerminatedCString s_WTF_0062ab4a
//   undefined4 DAT_0065e658
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430
//   core_frankgen.cpp_FUN_004d23a0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_frankgen.cpp_LoadModel(undefined4 param_1) */

void core_frankgen_cpp_LoadModel_FUN_004d2190(void)

{
  int iVar1;
  undefined4 extraout_EAX;
  CKeyFramedModel *this_ptr;
  CVector3i *pCVar2;
  CVector3f *pCVar3;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar4;
  byte bVar5;
  CDemonActor *in_stack_00000004;
  undefined4 auStackY_1004 [1010];
  int in_stack_ffffffd4;
  CVector3f local_24;
  undefined4 local_18 [2];
  
  bVar5 = 0;
  switch(*(undefined4 *)in_stack_00000004[1].actor_name) {
  case 0:
    goto LAB_004d21b9;
  case 1:
    core_frankgen_cpp_FUN_004d23a0();
    break;
  case 2:
    core_frankgen_cpp_FUN_004d23a0();
    break;
  case 3:
    core_frankgen_cpp_FUN_004d23a0();
    break;
  case 4:
    core_frankgen_cpp_FUN_004d23a0();
    break;
  case 5:
    core_frankgen_cpp_FUN_004d23a0();
    break;
  case 6:
  case 7:
    goto LAB_004d21b9;
  case 8:
LAB_004d21b9:
    core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430();
    break;
  default:
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 0x1bb;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  iVar1 = *(int *)(in_stack_00000004[3].create_event + 8);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(this_ptr,in_stack_ffffffd4)
  ;
  puVar4 = (undefined4 *)((int)(pCVar2 + iVar1) + (uint)bVar5 * -8 + 4);
  local_24.z = (float)pCVar2[iVar1].x;
  local_18[(uint)bVar5 * -2] = *puVar4;
  local_18[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = puVar4[(uint)bVar5 * -2 + 1];
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,&local_24,(CVector3f *)&stack0xfffffff4);
  if ((CVector3f *)(in_stack_00000004[3].create_event + 0x10) != pCVar3) {
    ((CVector3f *)(in_stack_00000004[3].create_event + 0x10))->x = pCVar3->x;
    *(float *)(in_stack_00000004[3].create_event + 0x14) = pCVar3->y;
    *(float *)(in_stack_00000004[3].create_event + 0x18) = pCVar3->z;
    return;
  }
  return;
}


// Assembly code:
// 004d2190: PUSH EBX
//   Label: core_frankgen.cpp_LoadModel_FUN_004d2190
// 004d2191: PUSH ESI
// 004d2192: PUSH EDI
// 004d2193: PUSH EBP
// 004d2194: SUB ESP,0x28
// 004d2197: MOV EBP,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 004d219b: MOV EAX,dword ptr [EBP + 0x158]
// 004d21a1: CMP EAX,0x8
// 004d21a4: JA 0x004d22ec
//   XREF to: 004d22ec (CONDITIONAL_JUMP)
// 004d21aa: JMP dword ptr [EAX*0x4 + 0x4d2168]
//   Label: switchD
//   XREF to: 004d21b1 (COMPUTED_JUMP)
//   XREF to: 004d2265 (COMPUTED_JUMP)
//   XREF to: 004d227a (COMPUTED_JUMP)
//   XREF to: 004d228f (COMPUTED_JUMP)
//   XREF to: 004d22a4 (COMPUTED_JUMP)
//   XREF to: 004d22b9 (COMPUTED_JUMP)
//   XREF to: 004d22ce (COMPUTED_JUMP)
//   XREF to: 004d22dd (COMPUTED_JUMP)
//   XREF to: 004d2168 (DATA)
// 004d21b1: PUSH dword ptr [0x0065e670]
//   Label: caseD_0
//   XREF to: 0065e670 (READ)
// 004d21b7: PUSH 0x0
// 004d21b9: PUSH EBP
//   Label: LAB_004d21b9
// 004d21ba: CALL core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430
//   XREF to: 004d2430 (UNCONDITIONAL_CALL)
// 004d21bf: ADD ESP,0xc
//   Label: LAB_004d21bf
// 004d21c2: PUSH EBP
//   Label: LAB_004d21c2
// 004d21c3: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 004d21c8: FLD float ptr [EBP + 0x180]
// 004d21ce: ADD ESP,0x4
// 004d21d1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004d21d6: FISTP dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (WRITE)
// 004d21da: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 004d21de: MOV EDX,dword ptr [EBP + 0x488]
// 004d21e4: PUSH EBX
// 004d21e5: LEA EAX,[EBP + 0x184]
// 004d21eb: LEA ESI,[EDX*0x4 + 0x0]
// 004d21f2: PUSH EAX
// 004d21f3: SUB ESI,EDX
// 004d21f5: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004d21fa: ADD ESP,0x4
// 004d21fd: LEA EDI,[ESP + 0x10]
//   XREF to: Stack[-0x2c] (DATA)
// 004d2201: PUSH EAX
// 004d2202: SHL ESI,0x2
// 004d2205: LEA EBX,[ESP + 0x20]
//   XREF to: Stack[-0x20] (DATA)
// 004d2209: CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
//   XREF to: 00477890 (UNCONDITIONAL_CALL)
// 004d220e: ADD ESI,EAX
// 004d2210: ADD ESP,0x8
// 004d2213: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x2c] (DATA)
// 004d2217: MOVSD ES:EDI,ESI
// 004d2218: MOVSD ES:EDI,ESI
// 004d2219: MOVSD ES:EDI,ESI
// 004d221a: FILD dword ptr [EAX]
//   XREF to: Stack[-0x2c] (DATA)
// 004d221c: FMUL float ptr [0x0065e658]
//   XREF to: 0065e658 (READ)
// 004d2222: FSTP float ptr [EBX]
//   XREF to: Stack[-0x20] (DATA)
// 004d2224: FILD dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 004d2227: FMUL float ptr [0x0065e658]
//   XREF to: 0065e658 (READ)
// 004d222d: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x1c] (WRITE)
// 004d2230: FILD dword ptr [EAX + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 004d2233: FMUL float ptr [0x0065e658]
//   XREF to: 0065e658 (READ)
// 004d2239: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 004d223c: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x20] (DATA)
// 004d2240: PUSH EAX
// 004d2241: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x38] (DATA)
// 004d2245: PUSH EAX
// 004d2246: PUSH EBP
// 004d2247: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d224c: ADD EBP,0x490
// 004d2252: ADD ESP,0xc
// 004d2255: CMP EBP,EAX
// 004d2257: JNZ 0x004d2314
//   XREF to: 004d2314 (CONDITIONAL_JUMP)
// 004d225d: ADD ESP,0x28
// 004d2260: POP EBP
//   Label: LAB_004d2260
// 004d2261: POP EDI
// 004d2262: POP ESI
// 004d2263: POP EBX
// 004d2264: RET
// 004d2265: PUSH 0x4427c000
//   Label: caseD_1
// 004d226a: PUSH 0x43030000
// 004d226f: PUSH EBP
// 004d2270: CALL core_frankgen.cpp_FUN_004d23a0
//   XREF to: 004d23a0 (UNCONDITIONAL_CALL)
// 004d2275: JMP 0x004d21bf
//   XREF to: 004d21bf (UNCONDITIONAL_JUMP)
// 004d227a: PUSH 0x445dc000
//   Label: caseD_2
// 004d227f: PUSH 0x4403c000
// 004d2284: PUSH EBP
// 004d2285: CALL core_frankgen.cpp_FUN_004d23a0
//   XREF to: 004d23a0 (UNCONDITIONAL_CALL)
// 004d228a: JMP 0x004d21bf
//   XREF to: 004d21bf (UNCONDITIONAL_JUMP)
// 004d228f: PUSH 0x44d9a000
//   Label: caseD_3
// 004d2294: PUSH 0x44882000
// 004d2299: PUSH EBP
// 004d229a: CALL core_frankgen.cpp_FUN_004d23a0
//   XREF to: 004d23a0 (UNCONDITIONAL_CALL)
// 004d229f: JMP 0x004d21bf
//   XREF to: 004d21bf (UNCONDITIONAL_JUMP)
// 004d22a4: PUSH 0x43c80000
//   Label: caseD_4
// 004d22a9: PUSH 0x43af0000
// 004d22ae: PUSH EBP
// 004d22af: CALL core_frankgen.cpp_FUN_004d23a0
//   XREF to: 004d23a0 (UNCONDITIONAL_CALL)
// 004d22b4: JMP 0x004d21bf
//   XREF to: 004d21bf (UNCONDITIONAL_JUMP)
// 004d22b9: PUSH 0x44828000
//   Label: caseD_5
// 004d22be: PUSH 0x44580000
// 004d22c3: PUSH EBP
// 004d22c4: CALL core_frankgen.cpp_FUN_004d23a0
//   XREF to: 004d23a0 (UNCONDITIONAL_CALL)
// 004d22c9: JMP 0x004d21bf
//   XREF to: 004d21bf (UNCONDITIONAL_JUMP)
// 004d22ce: PUSH 0x44f14000
//   Label: caseD_7
// 004d22d3: PUSH 0x44d4a000
// 004d22d8: JMP 0x004d21b9
//   XREF to: 004d21b9 (UNCONDITIONAL_JUMP)
// 004d22dd: PUSH 0x450fc000
//   Label: caseD_8
// 004d22e2: PUSH 0x44f3a000
// 004d22e7: JMP 0x004d21b9
//   XREF to: 004d21b9 (UNCONDITIONAL_JUMP)
// 004d22ec: MOV EDX,0x62ab35
//   Label: default
//   XREF to: 0062ab35 (PARAM)
// 004d22f1: MOV ECX,0x1bb
// 004d22f6: PUSH 0x62ab4a
//   XREF to: 0062ab4a (DATA)
// 004d22fb: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004d2301: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004d2307: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004d230c: ADD ESP,0x4
// 004d230f: JMP 0x004d21c2
//   XREF to: 004d21c2 (UNCONDITIONAL_JUMP)
// 004d2314: MOV EDX,dword ptr [EAX]
//   Label: LAB_004d2314
// 004d2316: MOV dword ptr [EBP],EDX
// 004d2319: MOV EDX,dword ptr [EAX + 0x4]
// 004d231c: MOV dword ptr [EBP + 0x4],EDX
// 004d231f: MOV EDX,dword ptr [EAX + 0x8]
// 004d2322: MOV dword ptr [EBP + 0x8],EDX
// 004d2325: ADD ESP,0x28
// 004d2328: POP EBP
// 004d2329: POP EDI
// 004d232a: POP ESI
// 004d232b: POP EBX
// 004d232c: RET
