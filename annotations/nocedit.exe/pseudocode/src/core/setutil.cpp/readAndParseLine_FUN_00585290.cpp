// Name: core_setutil.cpp_readAndParseLine_FUN_00585290
// Address: 00585290
// Address Range: [[00585290, 0058530b]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_readAndParseLine_FUN_00585290(FILE * file_handle, char * output_buffer, int max_length)
// Function calls:
//   crt_stdio.c_fgets_FUN_005fefd0

#include "nocturne.h"

void __cdecl
core_setutil_cpp_readAndParseLine_FUN_00585290(FILE *file_handle,char *output_buffer,int max_length)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  int in_stack_00000010;
  char local_108 [2];
  char acStack_106 [254];
  
  bVar6 = 0;
  crt_stdio_c_fgets_FUN_005fefd0(local_108,0xff,file_handle);
  pcVar4 = acStack_106 + 2;
  uVar2 = 0xffffffff;
  pcVar5 = acStack_106 + 2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar2 - 1)) {
    acStack_106[~uVar2] = '\0';
  }
  iVar3 = -1;
  pcVar5 = acStack_106 + 2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  acStack_106[in_stack_00000010 + 2] = '\0';
  do {
    cVar1 = *pcVar4;
    *(char *)max_length = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)(max_length + 1) = cVar1;
    max_length = max_length + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 00585290: PUSH ESI
//   Label: core_setutil.cpp_readAndParseLine_FUN_00585290
// 00585291: PUSH EDI
// 00585292: SUB ESP,0x100
// 00585298: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x4] (READ)
// 0058529f: PUSH EDX
// 005852a0: PUSH 0xff
// 005852a5: LEA ECX,[ESP + 0x8]
//   XREF to: Stack[-0x108] (DATA)
// 005852a9: PUSH ECX
// 005852aa: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005852af: ADD ESP,0xc
// 005852b2: MOV EDI,ESP
// 005852b4: SUB ECX,ECX
// 005852b6: DEC ECX
// 005852b7: XOR EAX,EAX
// 005852b9: SCASB.REPNE ES:EDI
// 005852bb: NOT ECX
// 005852bd: DEC ECX
// 005852be: TEST ECX,ECX
// 005852c0: JLE 0x005852c8
//   XREF to: 005852c8 (CONDITIONAL_JUMP)
// 005852c2: XOR AH,AH
// 005852c4: MOV byte ptr [ESP + ECX*0x1 + -0x1],AH
//   XREF to: Stack[-0x108] (DATA)
// 005852c8: MOV EDI,ESP
//   Label: LAB_005852c8
// 005852ca: MOV ESI,ESP
// 005852cc: SUB ECX,ECX
// 005852ce: DEC ECX
// 005852cf: XOR EAX,EAX
// 005852d1: SCASB.REPNE ES:EDI
// 005852d3: NOT ECX
// 005852d5: DEC ECX
// 005852d6: MOV ECX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0xc] (READ)
// 005852dd: XOR DL,DL
// 005852df: MOV EDI,dword ptr [ESP + 0x110]
//   XREF to: Stack[0x8] (READ)
// 005852e6: MOV byte ptr [ESP + ECX*0x1],DL
// 005852e9: PUSH EDI
// 005852ea: MOV AL,byte ptr [ESI]
//   Label: LAB_005852ea
//   XREF to: Stack[-0x108] (DATA)
// 005852ec: MOV byte ptr [EDI],AL
// 005852ee: CMP AL,0x0
// 005852f0: JZ 0x00585302
//   XREF to: 00585302 (CONDITIONAL_JUMP)
// 005852f2: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x107] (READ)
// 005852f5: ADD ESI,0x2
// 005852f8: MOV byte ptr [EDI + 0x1],AL
// 005852fb: ADD EDI,0x2
// 005852fe: CMP AL,0x0
// 00585300: JNZ 0x005852ea
//   XREF to: 005852ea (CONDITIONAL_JUMP)
// 00585302: POP EDI
//   Label: LAB_00585302
// 00585303: ADD ESP,0x100
// 00585309: POP EDI
// 0058530a: POP ESI
// 0058530b: RET
