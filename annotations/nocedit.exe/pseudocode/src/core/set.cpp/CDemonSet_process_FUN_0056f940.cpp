// Name: core_set.cpp_CDemonSet_process_FUN_0056f940
// Address: 0056f940
// Address Range: [[0056f940, 0056fab3]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_process_FUN_0056f940(CDemonSet * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e3329 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b59b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_son_00645fdb
//   TerminatedCString s_soff_00645fe0
//   TerminatedCString s_moon_00645fe6
//   CEventList* g_CEventListPtr = 02d05310
//   undefined4 DAT_02d05310
//   CDemonLight*[96] g_MasterLightList
//   int g_ActiveLightCount
//   CDemonLight*[96] g_ActiveLightList
//   undefined4 DAT_03276f38
// Function calls:
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_setutil.cpp_C3DSLight_process_FUN_00586cb0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strnicmp_FUN_005ff070

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_process_FUN_0056f940(CDemonSet *this_ptr)

{
  CDemonLight *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  C3DSLight *this_ptr_00;
  int in_stack_0000001c;
  int local_18;
  
  iVar3 = 0;
  if (0 < this_ptr->light_count) {
    this_ptr_00 = this_ptr->lights;
    do {
      pCVar1 = g_MasterLightList[0];
      if (this_ptr_00->light_type == 0) {
        if (g_MasterLightList[0] == (CDemonLight *)0x0) {
          return;
        }
        local_18 = 0;
        if (0 < g_ActiveLightCount) {
          iVar2 = 0;
          do {
            if (g_MasterLightList[0] == *(CDemonLight **)((int)g_ActiveLightList + iVar2)) {
              local_18 = 1;
              break;
            }
            iVar2 = iVar2 + 4;
          } while (SBORROW4(iVar2,g_ActiveLightCount * 4) != iVar2 + g_ActiveLightCount * -4 < 0);
        }
        core_setutil_cpp_C3DSLight_process_FUN_00586cb0(this_ptr_00,g_MasterLightList[0],local_18);
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffeec,"%son",this_ptr_00->name);
        iVar2 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                          (g_CEventListPtr,&stack0xfffffef0);
        if (iVar2 != 0) {
          pCVar1->light_enabled_flag = 1;
        }
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffef4,"%soff");
        iVar2 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                          (g_CEventListPtr,&stack0xfffffef8);
        if (iVar2 != 0) {
          pCVar1->light_enabled_flag = 0;
        }
        iVar2 = crt_string_c_strnicmp_FUN_005ff070(this_ptr_00->name,"moon",4);
        if (iVar2 == 0) {
          if (*(int *)(in_stack_0000001c + 0x15ae48) == 0) {
            pCVar1->light_enabled_flag = 0;
            this_ptr = (CDemonSet *)this_ptr->cameras;
            goto LAB_0056f972;
          }
          pCVar1->light_enabled_flag = 1;
        }
        this_ptr = (CDemonSet *)this_ptr->cameras;
      }
LAB_0056f972:
      iVar3 = iVar3 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar3 < this_ptr->light_count);
  }
  return;
}


// Assembly code:
// 0056f940: PUSH EBX
//   Label: core_set.cpp_CDemonSet_process_FUN_0056f940
// 0056f941: PUSH ESI
// 0056f942: PUSH EDI
// 0056f943: PUSH EBP
// 0056f944: SUB ESP,0x108
// 0056f94a: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x4] (READ)
// 0056f951: MOV EDX,dword ptr [EAX + 0x19a2c]
// 0056f957: XOR EBP,EBP
// 0056f959: TEST EDX,EDX
// 0056f95b: JLE 0x0056f98a
//   XREF to: 0056f98a (CONDITIONAL_JUMP)
// 0056f95d: MOV dword ptr [ESP + 0x104],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0056f964: LEA EDI,[EAX + 0x19a30]
// 0056f96a: MOV EAX,dword ptr [EDI]
//   Label: LAB_0056f96a
// 0056f96c: MOV ESI,EDI
// 0056f96e: TEST EAX,EAX
// 0056f970: JZ 0x0056f995
//   XREF to: 0056f995 (CONDITIONAL_JUMP)
// 0056f972: MOV EAX,dword ptr [ESP + 0x11c]
//   Label: LAB_0056f972
//   XREF to: Stack[0x4] (READ)
// 0056f979: INC EBP
// 0056f97a: MOV ECX,dword ptr [EAX + 0x19a2c]
// 0056f980: ADD EDI,0x1898
// 0056f986: CMP EBP,ECX
// 0056f988: JL 0x0056f96a
//   XREF to: 0056f96a (CONDITIONAL_JUMP)
// 0056f98a: ADD ESP,0x108
//   Label: LAB_0056f98a
// 0056f990: POP EBP
// 0056f991: POP EDI
// 0056f992: POP ESI
// 0056f993: POP EBX
// 0056f994: RET
// 0056f995: MOV EBX,dword ptr [ESP + 0x104]
//   Label: LAB_0056f995
//   XREF to: Stack[-0x14] (READ)
// 0056f99c: MOV EBX,dword ptr [EBX + 0x3276db0]
//   XREF to: 03276db0 (DATA)
// 0056f9a2: TEST EBX,EBX
// 0056f9a4: JZ 0x0056f98a
//   XREF to: 0056f98a (CONDITIONAL_JUMP)
// 0056f9a6: MOV ECX,dword ptr [0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056f9ac: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0056f9b3: TEST ECX,ECX
// 0056f9b5: JLE 0x0056f9d5
//   XREF to: 0056f9d5 (CONDITIONAL_JUMP)
// 0056f9b7: LEA EDX,[ECX*0x4 + 0x0]
// 0056f9be: CMP EBX,dword ptr [EAX + 0x3276f34]
//   Label: LAB_0056f9be
//   XREF to: 03276f34 (DATA)
//   XREF to: 03276f38 (DATA)
// 0056f9c4: JNZ 0x0056fa91
//   XREF to: 0056fa91 (CONDITIONAL_JUMP)
// 0056f9ca: MOV dword ptr [ESP + 0x100],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 0056f9d5: MOV EDX,dword ptr [ESP + 0x100]
//   Label: LAB_0056f9d5
//   XREF to: Stack[-0x18] (READ)
// 0056f9dc: PUSH EDX
// 0056f9dd: PUSH EBX
// 0056f9de: PUSH ESI
// 0056f9df: CALL core_setutil.cpp_C3DSLight_process_FUN_00586cb0
//   XREF to: 00586cb0 (UNCONDITIONAL_CALL)
// 0056f9e4: ADD ESP,0xc
// 0056f9e7: LEA EAX,[ESI + 0x4]
// 0056f9ea: PUSH EAX
// 0056f9eb: PUSH 0x645fdb
//   XREF to: 00645fdb (DATA)
// 0056f9f0: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 0056f9f4: PUSH EAX
// 0056f9f5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0056f9fa: ADD ESP,0xc
// 0056f9fd: MOV EAX,ESP
// 0056f9ff: PUSH EAX
// 0056fa00: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0056fa06: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 0056fa07: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0056fa0c: ADD ESP,0x8
// 0056fa0f: TEST EAX,EAX
// 0056fa11: JZ 0x0056fa1d
//   XREF to: 0056fa1d (CONDITIONAL_JUMP)
// 0056fa13: MOV dword ptr [EBX + 0x1cb4],0x1
// 0056fa1d: LEA EAX,[ESI + 0x4]
//   Label: LAB_0056fa1d
// 0056fa20: PUSH EAX
// 0056fa21: PUSH 0x645fe0
//   XREF to: 00645fe0 (DATA)
// 0056fa26: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 0056fa2a: PUSH EAX
// 0056fa2b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0056fa30: ADD ESP,0xc
// 0056fa33: MOV EAX,ESP
// 0056fa35: PUSH EAX
// 0056fa36: MOV EAX,[0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0056fa3b: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 0056fa3c: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0056fa41: ADD ESP,0x8
// 0056fa44: TEST EAX,EAX
// 0056fa46: JZ 0x0056fa52
//   XREF to: 0056fa52 (CONDITIONAL_JUMP)
// 0056fa48: MOV dword ptr [EBX + 0x1cb4],0x0
// 0056fa52: PUSH 0x4
//   Label: LAB_0056fa52
// 0056fa54: PUSH 0x645fe6
//   XREF to: 00645fe6 (DATA)
// 0056fa59: ADD ESI,0x4
// 0056fa5c: PUSH ESI
// 0056fa5d: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056fa62: ADD ESP,0xc
// 0056fa65: TEST EAX,EAX
// 0056fa67: JNZ 0x0056fa84
//   XREF to: 0056fa84 (CONDITIONAL_JUMP)
// 0056fa69: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x4] (READ)
// 0056fa70: MOV EDX,dword ptr [EAX + 0x15ae48]
// 0056fa76: TEST EDX,EDX
// 0056fa78: JZ 0x0056faa1
//   XREF to: 0056faa1 (CONDITIONAL_JUMP)
// 0056fa7a: MOV dword ptr [EBX + 0x1cb4],0x1
// 0056fa84: ADD dword ptr [ESP + 0x104],0x4
//   Label: LAB_0056fa84
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0056fa8c: JMP 0x0056f972
//   XREF to: 0056f972 (UNCONDITIONAL_JUMP)
// 0056fa91: ADD EAX,0x4
//   Label: LAB_0056fa91
// 0056fa94: CMP EAX,EDX
// 0056fa96: JL 0x0056f9be
//   XREF to: 0056f9be (CONDITIONAL_JUMP)
// 0056fa9c: JMP 0x0056f9d5
//   XREF to: 0056f9d5 (UNCONDITIONAL_JUMP)
// 0056faa1: MOV dword ptr [EBX + 0x1cb4],EDX
//   Label: LAB_0056faa1
// 0056faa7: ADD dword ptr [ESP + 0x104],0x4
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0056faaf: JMP 0x0056f972
//   XREF to: 0056f972 (UNCONDITIONAL_JUMP)
