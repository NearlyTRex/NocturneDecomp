// Name: core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070
// Address: 00490070
// Address Range: [[00490070, 004900a3]]
// Convention: __cdecl
// Signature: SMRGLTextureBasic * core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070(SMRGLTextureBasic * texture)
// Cross-references:
//   core_dskybox.cpp_staticInit_FUN_00490040 (00490040) at 00490045 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_NITESKY_RAW_00622532
//   undefined4 s_ITESKY.RAW_00622533
//   undefined4 s_TESKY.RAW_00622534
//   undefined4 s_ESKY.RAW_00622535

#include "nocturne.h"

SMRGLTextureBasic * __cdecl
core_dskybox_cpp_initializeSkyboxTexture_FUN_00490070(SMRGLTextureBasic *texture)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = "NITESKY.RAW";
  pcVar3 = texture->texture_name + 4;
  texture->texture_name[0] = '\0';
  texture->texture_name[1] = '\0';
  texture->texture_name[2] = '\0';
  texture->texture_name[3] = '\0';
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return texture;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return texture;
}


// Assembly code:
// 00490070: PUSH ESI
//   Label: core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070
// 00490071: PUSH EDI
// 00490072: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00490076: MOV ESI,0x622532
//   XREF to: 00622532 (DATA)
// 0049007b: LEA EDI,[EDX + 0xc]
// 0049007e: MOV dword ptr [EDX + 0x8],0x0
// 00490085: PUSH EDI
// 00490086: MOV AL,byte ptr [ESI]
//   Label: LAB_00490086
//   XREF to: 00622532 (READ)
//   XREF to: 00622534 (READ)
// 00490088: MOV byte ptr [EDI],AL
// 0049008a: CMP AL,0x0
// 0049008c: JZ 0x0049009e
//   XREF to: 0049009e (CONDITIONAL_JUMP)
// 0049008e: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00622533 (READ)
//   XREF to: 00622535 (READ)
// 00490091: ADD ESI,0x2
// 00490094: MOV byte ptr [EDI + 0x1],AL
// 00490097: ADD EDI,0x2
// 0049009a: CMP AL,0x0
// 0049009c: JNZ 0x00490086
//   XREF to: 00490086 (CONDITIONAL_JUMP)
// 0049009e: POP EDI
//   Label: LAB_0049009e
// 0049009f: MOV EAX,EDX
// 004900a1: POP EDI
// 004900a2: POP ESI
// 004900a3: RET
