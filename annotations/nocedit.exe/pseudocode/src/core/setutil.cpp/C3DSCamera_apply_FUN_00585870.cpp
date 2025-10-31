// Name: core_setutil.cpp_C3DSCamera_apply_FUN_00585870
// Address: 00585870
// Address Range: [[00585870, 0058596e]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_apply_FUN_00585870(C3DSCamera * this_ptr, CDemonCamera * camera)
// Cross-references:
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a75f [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b2de [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setutil_cpp_006492b3
//   TerminatedCString s_C3DSCamera_apply_shouldn_006492c7
//   TerminatedCString s_Ambient_set_low_by_scrip_0064930a
//   TerminatedCString s_Ambient_set_ridiculously_00649325
//   double g_MaxRecommendedAmbient = 0.25
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_032613c8
// Function calls:
//   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSCamera_apply_FUN_00585870(C3DSCamera *this_ptr,CDemonCamera *camera)

{
  CVector3i *pCVar1;
  char cVar2;
  int iVar3;
  CMatrix3x3f *pCVar4;
  C3DSCamera *pCVar5;
  CMatrix3x3i *pCVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  if (this_ptr->is_panning != 0) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0xf7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSCamera::apply - shouldn't ever do this on panning camera '%s'!",this_ptr);
  }
  pCVar1 = &(camera->base).position;
  if ((CVector3f *)pCVar1 != &this_ptr->position) {
    pCVar1->x = (int)(this_ptr->position).x;
    (camera->base).position.y = (int)(this_ptr->position).y;
    (camera->base).position.z = (int)(this_ptr->position).z;
  }
  pCVar4 = &this_ptr->rotation_matrix;
  pCVar6 = &(camera->base).rotation_matrix;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->m[0][0] = (int)pCVar4->m[0].x;
    pCVar4 = (CMatrix3x3f *)((int)pCVar4 + (uint)bVar8 * -8 + 4);
    pCVar6 = (CMatrix3x3i *)((int)pCVar6 + (uint)bVar8 * -8 + 4);
  }
  pcVar7 = camera->camera_name;
  (camera->base).projection_scale = this_ptr->projection_scale;
  pCVar5 = this_ptr;
  do {
    cVar2 = pCVar5->name[0];
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pCVar5->name[1];
    pCVar5 = (C3DSCamera *)(pCVar5->name + 2);
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(camera,this_ptr->ambient_value);
  if (this_ptr->ambient_value < g_CDemonSetPtr->min_ambient_value) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"Ambient set low by script\n");
  }
  if (this_ptr->ambient_value <= (float)g_MaxRecommendedAmbient) {
    return;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Ambient set ridiculously high\n")
  ;
  return;
}


// Assembly code:
// 00585870: PUSH EBX
//   Label: core_setutil.cpp_C3DSCamera_apply_FUN_00585870
// 00585871: PUSH ESI
// 00585872: PUSH EDI
// 00585873: PUSH EBP
// 00585874: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00585878: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058587c: CMP dword ptr [EBX + 0x140],0x0
// 00585883: JNZ 0x0058592d
//   XREF to: 0058592d (CONDITIONAL_JUMP)
// 00585889: LEA EAX,[EBP + 0x4]
//   Label: LAB_00585889
// 0058588c: LEA EDX,[EBX + 0x100]
// 00585892: CMP EAX,EDX
// 00585894: JZ 0x005858a6
//   XREF to: 005858a6 (CONDITIONAL_JUMP)
// 00585896: MOV ECX,dword ptr [EDX]
// 00585898: MOV dword ptr [EAX],ECX
// 0058589a: MOV ECX,dword ptr [EDX + 0x4]
// 0058589d: MOV dword ptr [EAX + 0x4],ECX
// 005858a0: MOV ECX,dword ptr [EDX + 0x8]
// 005858a3: MOV dword ptr [EAX + 0x8],ECX
// 005858a6: MOV ECX,0xa
//   Label: LAB_005858a6
// 005858ab: LEA ESI,[EBX + 0x118]
// 005858b1: LEA EDI,[EBP + 0x10]
// 005858b4: MOVSD.REP ES:EDI,ESI
// 005858b6: FLD float ptr [EBX + 0x144]
// 005858bc: LEA EDI,[EBP + 0x40]
// 005858bf: MOV ESI,EBX
// 005858c1: FSTP float ptr [EBP + 0x38]
// 005858c4: PUSH EDI
// 005858c5: MOV AL,byte ptr [ESI]
//   Label: LAB_005858c5
// 005858c7: MOV byte ptr [EDI],AL
// 005858c9: CMP AL,0x0
// 005858cb: JZ 0x005858dd
//   XREF to: 005858dd (CONDITIONAL_JUMP)
// 005858cd: MOV AL,byte ptr [ESI + 0x1]
// 005858d0: ADD ESI,0x2
// 005858d3: MOV byte ptr [EDI + 0x1],AL
// 005858d6: ADD EDI,0x2
// 005858d9: CMP AL,0x0
// 005858db: JNZ 0x005858c5
//   XREF to: 005858c5 (CONDITIONAL_JUMP)
// 005858dd: POP EDI
//   Label: LAB_005858dd
// 005858de: PUSH dword ptr [EBX + 0x148]
// 005858e4: PUSH EBP
// 005858e5: CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
//   XREF to: 004528e0 (UNCONDITIONAL_CALL)
// 005858ea: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005858ef: FLD float ptr [EBX + 0x148]
// 005858f5: ADD ESP,0x8
// 005858f8: FCOMP float ptr [EAX + 0x14d150]
//   XREF to: 032613c8 (READ)
// 005858fe: FNSTSW AX
// 00585900: SAHF
// 00585901: JNC 0x00585917
//   XREF to: 00585917 (CONDITIONAL_JUMP)
// 00585903: PUSH 0x64930a
//   XREF to: 0064930a (DATA)
// 00585908: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0058590e: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 0058590f: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00585914: ADD ESP,0x8
// 00585917: FLD float ptr [EBX + 0x148]
//   Label: LAB_00585917
// 0058591d: FCOMP double ptr [0x0064934b]
//   XREF to: 0064934b (READ)
// 00585923: FNSTSW AX
// 00585925: SAHF
// 00585926: JA 0x00585956
//   XREF to: 00585956 (CONDITIONAL_JUMP)
// 00585928: POP EBP
// 00585929: POP EDI
// 0058592a: POP ESI
// 0058592b: POP EBX
// 0058592c: RET
// 0058592d: PUSH EBX
//   Label: LAB_0058592d
// 0058592e: MOV ECX,0x6492b3
//   XREF to: 006492b3 (PARAM)
// 00585933: MOV ESI,0xf7
// 00585938: PUSH 0x6492c7
//   XREF to: 006492c7 (DATA)
// 0058593d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00585943: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00585949: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058594e: ADD ESP,0x8
// 00585951: JMP 0x00585889
//   XREF to: 00585889 (UNCONDITIONAL_JUMP)
// 00585956: PUSH 0x649325
//   Label: LAB_00585956
//   XREF to: 00649325 (DATA)
// 0058595b: MOV EBP,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 00585961: PUSH EBP
//   XREF to: 0083b1a4 (DATA)
// 00585962: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00585967: ADD ESP,0x8
// 0058596a: POP EBP
// 0058596b: POP EDI
// 0058596c: POP ESI
// 0058596d: POP EBX
// 0058596e: RET
