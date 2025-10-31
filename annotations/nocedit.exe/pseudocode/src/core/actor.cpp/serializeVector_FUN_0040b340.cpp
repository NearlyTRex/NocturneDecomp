// Name: core_actor.cpp_serializeVector_FUN_0040b340
// Address: 0040b340
// Address Range: [[0040b340, 0040b3d0]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
// Cross-references:
//   core_barrier.cpp_CBarrier_serialize_FUN_00414340 (00414340) at 0041435a [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_serialize_FUN_00417580 (00417580) at 00417630 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_load_FUN_0041d270 (0041d270) at 0041d407 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_load_FUN_00422060 (00422060) at 004220c0 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_load_FUN_00422c80 (00422c80) at 00422cbc [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00442020 (00442020) at 0044204e [UNCONDITIONAL_CALL]
//   core_curtain.cpp_CCurtain_load_FUN_0044b3e0 (0044b3e0) at 0044b3fd [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_serialize_FUN_00480aa0 (00480aa0) at 00480b83 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0 (00485dd0) at 0048600a [UNCONDITIONAL_CALL]
//   core_drip.cpp_CDrip_load_FUN_0048e170 (0048e170) at 0048e1ca [UNCONDITIONAL_CALL]
//   core_emitter.cpp_CEmitter_load_FUN_004a8b30 (004a8b30) at 004a8b5f [UNCONDITIONAL_CALL]
//   core_flame.cpp_CFlame_load_FUN_004cac60 (004cac60) at 004cac7a [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cbe60 (004cbe60) at 004cbeeb [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_serialize_FUN_004ea090 (004ea090) at 004ea0aa [UNCONDITIONAL_CALL]
//   core_ladder.cpp_CLadder_load_FUN_005029c0 (005029c0) at 005029ee [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_load_FUN_0050adf0 (0050adf0) at 0050aec6 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_load_FUN_0054dbc0 (0054dbc0) at 0054de8b [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_005891b0 (005891b0) at 00589208 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_serialize_FUN_005dab30 (005dab30) at 005dab47 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_serialize_FUN_005dec80 (005dec80) at 005decae [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_serialize_FUN_005e0690 (005e0690) at 005e06bf [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_serialize_FUN_005e40c0 (005e40c0) at 005e40e7 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_serialize_FUN_005e8720 (005e8720) at 005e87c2 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_serialize_FUN_005eb510 (005eb510) at 005eb52a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_f_f_f_00613eab
//   TerminatedCString s_s_g_g_g_00613eb4
//   string s_3D_vector_0066e0e0
//   char* g_PropertyNamePrefix = 00000000
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   core_actor.cpp_serializeDescription_FUN_0040b290
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeVector_FUN_0040b340(CVector3f *vector_ptr,char *property_name)

{
  int iVar1;
  char *in_stack_0000000c;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("3D vector",property_name);
    }
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%g,%g,%g",&g_PropertyNamePrefix,(double)vector_ptr->x,
               (double)vector_ptr->y,(double)vector_ptr->z);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290("3D vector",in_stack_0000000c);
  return;
}


// Assembly code:
// 0040b340: PUSH EBX
//   Label: core_actor.cpp_serializeVector_FUN_0040b340
// 0040b341: PUSH EDI
// 0040b342: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040b346: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040b34d: JNZ 0x0040b39c
//   XREF to: 0040b39c (CONDITIONAL_JUMP)
// 0040b34f: LEA EDX,[EAX + 0x8]
// 0040b352: PUSH EDX
// 0040b353: LEA EDX,[EAX + 0x4]
// 0040b356: PUSH EDX
// 0040b357: PUSH EAX
// 0040b358: PUSH 0x613eab
//   XREF to: 00613eab (DATA)
// 0040b35d: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b363: PUSH EBX
// 0040b364: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040b369: ADD ESP,0x14
// 0040b36c: CMP EAX,0x3
// 0040b36f: JNZ 0x0040b386
//   XREF to: 0040b386 (CONDITIONAL_JUMP)
// 0040b371: MOV EDI,dword ptr [ESP + 0x10]
//   Label: LAB_0040b371
//   XREF to: Stack[0x8] (READ)
// 0040b375: PUSH EDI
// 0040b376: PUSH 0x66e0e0
//   XREF to: 0066e0e0 (DATA)
// 0040b37b: CALL core_actor.cpp_serializeDescription_FUN_0040b290
//   XREF to: 0040b290 (UNCONDITIONAL_CALL)
// 0040b380: ADD ESP,0x8
// 0040b383: POP EDI
// 0040b384: POP EBX
// 0040b385: RET
// 0040b386: PUSH ESI
//   Label: LAB_0040b386
// 0040b387: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040b38b: PUSH ESI
// 0040b38c: PUSH 0x66e0e0
//   XREF to: 0066e0e0 (DATA)
// 0040b391: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040b396: ADD ESP,0x8
// 0040b399: POP ESI
// 0040b39a: JMP 0x0040b371
//   XREF to: 0040b371 (UNCONDITIONAL_JUMP)
// 0040b39c: SUB ESP,0x8
//   Label: LAB_0040b39c
// 0040b39f: FLD float ptr [EAX + 0x8]
// 0040b3a2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0040b3a5: SUB ESP,0x8
// 0040b3a8: FLD float ptr [EAX + 0x4]
// 0040b3ab: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0040b3ae: SUB ESP,0x8
// 0040b3b1: FLD float ptr [EAX]
// 0040b3b3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0040b3b6: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040b3bb: PUSH 0x613eb4
//   XREF to: 00613eb4 (DATA)
// 0040b3c0: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b3c6: PUSH ECX
// 0040b3c7: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040b3cc: ADD ESP,0x24
// 0040b3cf: JMP 0x0040b371
//   XREF to: 0040b371 (UNCONDITIONAL_JUMP)
