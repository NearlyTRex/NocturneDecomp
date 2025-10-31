// Name: engine_model.c_byteswapMRGLData_FUN_00527e40
// Address: 00527e40
// Address Range: [[00527e40, 00527eb2]]
// Convention: __cdecl
// Signature: void engine_model.c_byteswapMRGLData_FUN_00527e40(SMRGLHeaderExtended * mrgl_data, int data_size)
// Globals:
//   void* switchdataD_00527d34 = 00527e6d
//   TerminatedCString s_engine_model_c_00639a84
//   TerminatedCString s_Need_a_new_byteswap_00639a96
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_model.c_getMRGLSize_FUN_00528700

#include "nocturne.h"

void __cdecl
engine_model_c_byteswapMRGLData_FUN_00527e40(SMRGLHeaderExtended *mrgl_data,int data_size)

{
  uint uVar1;
  int iVar2;
  
  if (data_size < 1) {
    return;
  }
  do {
    uVar1 = engine_model_c_getMRGLSize_FUN_00528700(mrgl_data);
    switch((mrgl_data->base).type) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1e:
    case 0x1f:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3d:
    case 0x3e:
    case 0x41:
    case 0x42:
      iVar2 = 0;
      if (uVar1 >> 2 != 0) {
        do {
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uVar1 >> 2));
      }
    case 0xd:
    case 0x1d:
    case 0x20:
    case 0x26:
    case 0x40:
      data_size = data_size - uVar1;
      mrgl_data = (SMRGLHeaderExtended *)((int)&(mrgl_data->base).type + uVar1);
      if (data_size < 1) {
        return;
      }
      break;
    default:
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0xce;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Need a new byteswap!");
      data_size = data_size - uVar1;
      mrgl_data = (SMRGLHeaderExtended *)((int)&(mrgl_data->base).type + uVar1);
      if (data_size < 1) {
        return;
      }
    }
  } while( true );
}


// Assembly code:
// 00527e40: PUSH EBX
//   Label: engine_model.c_byteswapMRGLData_FUN_00527e40
// 00527e41: PUSH ESI
// 00527e42: PUSH EDI
// 00527e43: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00527e47: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00527e4b: TEST EDI,EDI
// 00527e4d: JLE 0x00527e80
//   XREF to: 00527e80 (CONDITIONAL_JUMP)
// 00527e4f: PUSH EBX
//   Label: LAB_00527e4f
// 00527e50: CALL engine_model.c_getMRGLSize_FUN_00528700
//   XREF to: 00528700 (UNCONDITIONAL_CALL)
// 00527e55: ADD ESP,0x4
// 00527e58: MOV ESI,EAX
// 00527e5a: MOV EDX,EAX
// 00527e5c: MOV EAX,dword ptr [EBX]
// 00527e5e: SHR EDX,0x2
// 00527e61: CMP EAX,0x42
// 00527e64: JA 0x00527e84
//   XREF to: 00527e84 (CONDITIONAL_JUMP)
// 00527e66: JMP dword ptr [EAX*0x4 + 0x527d34]
//   Label: switchD
//   XREF to: 00527e6d (COMPUTED_JUMP)
//   XREF to: 00527e78 (COMPUTED_JUMP)
//   XREF to: 00527e84 (COMPUTED_JUMP)
//   XREF to: 00527d34 (DATA)
// 00527e6d: XOR EAX,EAX
//   Label: caseD_42
// 00527e6f: TEST EDX,EDX
// 00527e71: JLE 0x00527e78
//   XREF to: 00527e78 (CONDITIONAL_JUMP)
// 00527e73: INC EAX
//   Label: LAB_00527e73
// 00527e74: CMP EAX,EDX
// 00527e76: JL 0x00527e73
//   XREF to: 00527e73 (CONDITIONAL_JUMP)
// 00527e78: SUB EDI,ESI
//   Label: caseD_40
// 00527e7a: ADD EBX,ESI
// 00527e7c: TEST EDI,EDI
// 00527e7e: JG 0x00527e4f
//   XREF to: 00527e4f (CONDITIONAL_JUMP)
// 00527e80: POP EDI
//   Label: LAB_00527e80
// 00527e81: POP ESI
// 00527e82: POP EBX
// 00527e83: RET
// 00527e84: MOV EDX,0x639a84
//   Label: caseD_3f
//   XREF to: 00639a84 (DATA)
// 00527e89: MOV ECX,0xce
// 00527e8e: PUSH 0x639a96
//   XREF to: 00639a96 (DATA)
// 00527e93: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00527e99: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00527e9f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00527ea4: ADD ESP,0x4
// 00527ea7: SUB EDI,ESI
// 00527ea9: ADD EBX,ESI
// 00527eab: TEST EDI,EDI
// 00527ead: JG 0x00527e4f
//   XREF to: 00527e4f (CONDITIONAL_JUMP)
// 00527eaf: POP EDI
// 00527eb0: POP ESI
// 00527eb1: POP EBX
// 00527eb2: RET
