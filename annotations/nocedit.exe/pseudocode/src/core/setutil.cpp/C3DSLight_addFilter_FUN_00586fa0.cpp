// Name: core_setutil.cpp_C3DSLight_addFilter_FUN_00586fa0
// Address: 00586fa0
// Address Range: [[00586fa0, 00587083]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_addFilter_FUN_00586fa0(C3DSLight * this_ptr, char * filter_name, float duration, int filter_mode)
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055bdf4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setutil_cpp_00649794
//   TerminatedCString s_C3DSLight_addFilter_too__006497a8
//   CFilterCache* g_CFilterCachePtr = 020a4c08
//   CFilterCache g_CFilterCacheInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0
          (C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode)

{
  char cVar1;
  CDemonFilter *pCVar2;
  int unaff_EDI;
  char (*pacVar3) [40];
  int in_stack_00000014;
  
  if (0x1f < this_ptr->filter_count) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x3b6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSLight::addFilter - too many filters (max is %d)",0x20);
  }
  pacVar3 = this_ptr->filter_names + this_ptr->filter_count;
  do {
    cVar1 = *(char *)duration;
    (*pacVar3)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = *(char *)((int)duration + 1);
    duration = (float)((int)duration + 2);
    (*pacVar3)[1] = cVar1;
    pacVar3 = (char (*) [40])(*pacVar3 + 2);
  } while (cVar1 != '\0');
  this_ptr->filter_durations[this_ptr->filter_count] = (float)filter_mode;
  this_ptr->filter_indices[this_ptr->filter_count] = in_stack_00000014;
  pCVar2 = core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
                     (g_CFilterCachePtr,this_ptr->filter_names[this_ptr->filter_count],
                      (char *)this_ptr->blend_filter,unaff_EDI);
  this_ptr->filters[this_ptr->filter_count] = pCVar2;
  this_ptr->filter_count = this_ptr->filter_count + 1;
  return;
}


// Assembly code:
// 00586fa0: PUSH EBX
//   Label: core_setutil.cpp_C3DSLight_addFilter_FUN_00586fa0
// 00586fa1: PUSH ESI
// 00586fa2: PUSH EDI
// 00586fa3: PUSH EBP
// 00586fa4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00586fa8: CMP dword ptr [EBX + 0x11ec],0x20
// 00586faf: JGE 0x0058705a
//   XREF to: 0058705a (CONDITIONAL_JUMP)
// 00586fb5: MOV EDX,dword ptr [EBX + 0x11ec]
//   Label: LAB_00586fb5
// 00586fbb: LEA EAX,[EDX*0x4 + 0x0]
// 00586fc2: ADD EAX,EDX
// 00586fc4: LEA ECX,[EBX + 0x11f4]
// 00586fca: SHL EAX,0x3
// 00586fcd: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00586fd1: LEA EDI,[ECX + EAX*0x1]
// 00586fd4: PUSH EDI
// 00586fd5: MOV AL,byte ptr [ESI]
//   Label: LAB_00586fd5
// 00586fd7: MOV byte ptr [EDI],AL
// 00586fd9: CMP AL,0x0
// 00586fdb: JZ 0x00586fed
//   XREF to: 00586fed (CONDITIONAL_JUMP)
// 00586fdd: MOV AL,byte ptr [ESI + 0x1]
// 00586fe0: ADD ESI,0x2
// 00586fe3: MOV byte ptr [EDI + 0x1],AL
// 00586fe6: ADD EDI,0x2
// 00586fe9: CMP AL,0x0
// 00586feb: JNZ 0x00586fd5
//   XREF to: 00586fd5 (CONDITIONAL_JUMP)
// 00586fed: POP EDI
//   Label: LAB_00586fed
// 00586fee: MOV EAX,dword ptr [EBX + 0x11ec]
// 00586ff4: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00586ff8: MOV dword ptr [EBX + EAX*0x4 + 0x16f4],EDX
// 00586fff: MOV EAX,dword ptr [EBX + 0x11ec]
// 00587005: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00587009: MOV dword ptr [EBX + EAX*0x4 + 0x1774],EDX
// 00587010: MOV EDX,dword ptr [EBX + 0x11ec]
// 00587016: LEA EAX,[EDX*0x4 + 0x0]
// 0058701d: ADD EAX,EDX
// 0058701f: MOV EDI,dword ptr [EBX + 0x11f0]
// 00587025: SHL EAX,0x3
// 00587028: PUSH EDI
// 00587029: ADD ECX,EAX
// 0058702b: PUSH ECX
// 0058702c: MOV EBP,dword ptr [0x0066efcc]
//   XREF to: 0066efcc (READ)
// 00587032: PUSH EBP
//   XREF to: 020a4c08 (DATA)
// 00587033: CALL core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
//   XREF to: 00470060 (UNCONDITIONAL_CALL)
// 00587038: MOV EDX,dword ptr [EBX + 0x11ec]
// 0058703e: MOV dword ptr [EBX + EDX*0x4 + 0x1810],EAX
// 00587045: MOV EAX,dword ptr [EBX + 0x11ec]
// 0058704b: INC EAX
// 0058704c: ADD ESP,0xc
// 0058704f: MOV dword ptr [EBX + 0x11ec],EAX
// 00587055: POP EBP
// 00587056: POP EDI
// 00587057: POP ESI
// 00587058: POP EBX
// 00587059: RET
// 0058705a: PUSH 0x20
//   Label: LAB_0058705a
// 0058705c: MOV ECX,0x649794
//   XREF to: 00649794 (PARAM)
// 00587061: MOV ESI,0x3b6
// 00587066: PUSH 0x6497a8
//   XREF to: 006497a8 (DATA)
// 0058706b: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00587071: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00587077: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058707c: ADD ESP,0x8
// 0058707f: JMP 0x00586fb5
//   XREF to: 00586fb5 (UNCONDITIONAL_JUMP)
