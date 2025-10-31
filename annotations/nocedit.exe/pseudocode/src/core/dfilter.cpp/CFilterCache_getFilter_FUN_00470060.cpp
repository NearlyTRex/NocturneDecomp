// Name: core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
// Address: 00470060
// Address Range: [[00470060, 0047019f]]
// Convention: __cdecl
// Signature: CDemonFilter * core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060(CFilterCache * this_ptr, char * filter_name, char * filter_filename, int enable_init)
// Cross-references:
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 0050658c [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_addFilter_FUN_00586fa0 (00586fa0) at 00587033 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_create_FUN_00586a90 (00586a90) at 00586b73 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dfilter_cpp_0061e4b2
//   TerminatedCString s_CFilterCache_getFilter_T_0061e4c6
//   TerminatedCString s_core_dfilter_cpp_0061e4f1
//   TerminatedCString s_core_dfilter_cpp_0061e505
//   TerminatedCString s_CFilterCache_getFilter_O_0061e519
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0
//   core_dfilter.cpp_CDemonFilter_init_FUN_004705a0
//   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_strcmp_FUN_005fef20
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

CDemonFilter * __cdecl
core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
          (CFilterCache *this_ptr,char *filter_name,char *filter_filename,int enable_init)

{
  char cVar1;
  int iVar2;
  CDemonFilter *this_ptr_00;
  int iVar3;
  char (*pacVar4) [40];
  char *in_stack_00000014;
  int in_stack_0000001c;
  
  iVar3 = 0;
  if (0 < this_ptr->filter_count) {
    pacVar4 = this_ptr->filter_names;
    do {
      iVar2 = crt_string_c_strcmp_FUN_005fef20(*pacVar4,filter_name);
      if (iVar2 == 0) {
        return this_ptr->filters[iVar3];
      }
      iVar3 = iVar3 + 1;
      pacVar4 = pacVar4 + 1;
    } while (iVar3 < this_ptr->filter_count);
  }
  if (0x3f < this_ptr->filter_count) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0x55;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CFilterCache::getFilter - Too many filters");
  }
  pacVar4 = this_ptr->filter_names + iVar3;
  this_ptr->filter_count = this_ptr->filter_count + 1;
  do {
    cVar1 = *filter_filename;
    (*pacVar4)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filter_filename[1];
    filter_filename = filter_filename + 2;
    (*pacVar4)[1] = cVar1;
    pacVar4 = (char (*) [40])(*pacVar4 + 2);
  } while (cVar1 != '\0');
  this_ptr_00 = (CDemonFilter *)
                shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x4c,"..\\core\\dfilter.cpp",0x58);
  if (this_ptr_00 != (CDemonFilter *)0x0) {
    this_ptr_00 = core_dfilter_cpp_CDemonFilter_ctor_FUN_004701f0(this_ptr_00);
  }
  this_ptr->filters[iVar3] = this_ptr_00;
  if (this_ptr_00 == (CDemonFilter *)0x0) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0x59;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CFilterCache::getFilter - Out of memory");
  }
  core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(this_ptr->filters[iVar3],in_stack_00000014);
  if (in_stack_0000001c != 0) {
    core_dfilter_cpp_CDemonFilter_init_FUN_004705a0(this_ptr->filters[iVar3],1.333,1);
  }
  return this_ptr->filters[iVar3];
}


// Assembly code:
// 00470060: PUSH EBX
//   Label: core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
// 00470061: PUSH ESI
// 00470062: PUSH EBP
// 00470063: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00470067: MOV EDX,dword ptr [EBP]
// 0047006a: XOR EBX,EBX
// 0047006c: TEST EDX,EDX
// 0047006e: JLE 0x00470094
//   XREF to: 00470094 (CONDITIONAL_JUMP)
// 00470070: LEA ESI,[EBP + 0x4]
// 00470073: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00470073
//   XREF to: Stack[0x8] (READ)
// 00470077: PUSH EAX
// 00470078: PUSH ESI
// 00470079: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0047007e: ADD ESP,0x8
// 00470081: TEST EAX,EAX
// 00470083: JZ 0x0047016e
//   XREF to: 0047016e (CONDITIONAL_JUMP)
// 00470089: INC EBX
// 0047008a: MOV ECX,dword ptr [EBP]
// 0047008d: ADD ESI,0x28
// 00470090: CMP EBX,ECX
// 00470092: JL 0x00470073
//   XREF to: 00470073 (CONDITIONAL_JUMP)
// 00470094: PUSH EDI
//   Label: LAB_00470094
// 00470095: CMP dword ptr [EBP],0x40
// 00470099: JGE 0x00470179
//   XREF to: 00470179 (CONDITIONAL_JUMP)
// 0047009f: MOV ESI,dword ptr [ESP + 0x18]
//   Label: LAB_0047009f
//   XREF to: Stack[0x8] (READ)
// 004700a3: LEA EAX,[EBX*0x4 + 0x0]
// 004700aa: LEA EDI,[EBP + 0x4]
// 004700ad: ADD EAX,EBX
// 004700af: MOV EDX,dword ptr [EBP]
// 004700b2: SHL EAX,0x3
// 004700b5: INC EDX
// 004700b6: ADD EDI,EAX
// 004700b8: MOV dword ptr [EBP],EDX
// 004700bb: PUSH EDI
// 004700bc: MOV AL,byte ptr [ESI]
//   Label: LAB_004700bc
// 004700be: MOV byte ptr [EDI],AL
// 004700c0: CMP AL,0x0
// 004700c2: JZ 0x004700d4
//   XREF to: 004700d4 (CONDITIONAL_JUMP)
// 004700c4: MOV AL,byte ptr [ESI + 0x1]
// 004700c7: ADD ESI,0x2
// 004700ca: MOV byte ptr [EDI + 0x1],AL
// 004700cd: ADD EDI,0x2
// 004700d0: CMP AL,0x0
// 004700d2: JNZ 0x004700bc
//   XREF to: 004700bc (CONDITIONAL_JUMP)
// 004700d4: POP EDI
//   Label: LAB_004700d4
// 004700d5: PUSH 0x58
// 004700d7: PUSH 0x61e4f1
//   XREF to: 0061e4f1 (DATA)
// 004700dc: PUSH 0x4c
// 004700de: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004700e3: ADD ESP,0xc
// 004700e6: TEST EAX,EAX
// 004700e8: JZ 0x004700f3
//   XREF to: 004700f3 (CONDITIONAL_JUMP)
// 004700ea: PUSH EAX
// 004700eb: CALL core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0
//   XREF to: 004701f0 (UNCONDITIONAL_CALL)
// 004700f0: ADD ESP,0x4
// 004700f3: MOV ESI,EAX
//   Label: LAB_004700f3
// 004700f5: MOV dword ptr [EBP + EBX*0x4 + 0xa04],ESI
// 004700fc: TEST ESI,ESI
// 004700fe: JNZ 0x00470123
//   XREF to: 00470123 (CONDITIONAL_JUMP)
// 00470100: MOV ESI,0x61e505
//   XREF to: 0061e505 (DATA)
// 00470105: MOV EDI,0x59
// 0047010a: PUSH 0x61e519
//   XREF to: 0061e519 (DATA)
// 0047010f: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00470115: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0047011b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00470120: ADD ESP,0x4
// 00470123: LEA ESI,[EBX*0x4 + 0x0]
//   Label: LAB_00470123
// 0047012a: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047012e: ADD ESI,EBP
// 00470130: PUSH EAX
// 00470131: MOV EDX,dword ptr [ESI + 0xa04]
// 00470137: PUSH EDX
// 00470138: CALL core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
//   XREF to: 004702f0 (UNCONDITIONAL_CALL)
// 0047013d: ADD ESP,0x8
// 00470140: CMP dword ptr [ESP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 00470145: JZ 0x0047015d
//   XREF to: 0047015d (CONDITIONAL_JUMP)
// 00470147: PUSH 0x1
// 00470149: MOV EDI,dword ptr [ESI + 0xa04]
// 0047014f: PUSH 0x3faa9fbe
// 00470154: PUSH EDI
// 00470155: CALL core_dfilter.cpp_CDemonFilter_init_FUN_004705a0
//   XREF to: 004705a0 (UNCONDITIONAL_CALL)
// 0047015a: ADD ESP,0xc
// 0047015d: SHL EBX,0x2
//   Label: LAB_0047015d
// 00470160: LEA EAX,[EBX + EBP*0x1]
// 00470163: MOV EAX,dword ptr [EAX + 0xa04]
// 00470169: POP EDI
// 0047016a: POP EBP
// 0047016b: POP ESI
// 0047016c: POP EBX
// 0047016d: RET
// 0047016e: MOV EAX,dword ptr [EBP + EBX*0x4 + 0xa04]
//   Label: LAB_0047016e
// 00470175: POP EBP
// 00470176: POP ESI
// 00470177: POP EBX
// 00470178: RET
// 00470179: MOV EDI,0x61e4b2
//   Label: LAB_00470179
//   XREF to: 0061e4b2 (DATA)
// 0047017e: MOV EAX,0x55
// 00470183: PUSH 0x61e4c6
//   XREF to: 0061e4c6 (DATA)
// 00470188: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0047018e: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00470193: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00470198: ADD ESP,0x4
// 0047019b: JMP 0x0047009f
//   XREF to: 0047009f (UNCONDITIONAL_JUMP)
