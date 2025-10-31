// Name: core_setutil.cpp_C3DSLight_import3DS_FUN_005874d0
// Address: 005874d0
// Address Range: [[005874d0, 0058754d]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_import3DS_FUN_005874d0(C3DSLight * this_ptr, FILE * file_handle)
// Function calls:
//   crt_stdio.c_fgets_FUN_005fefd0

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSLight_import3DS_FUN_005874d0(C3DSLight *this_ptr,FILE *file_handle)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  char *unaff_EBP;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  float10 fVar8;
  float10 x;
  float unaff_retaddr;
  float fStack0000000c;
  float fStack00000010;
  float in_stack_00000014;
  char acStack_68 [84];
  char *local_14;
  
  bVar7 = 0;
  local_14 = this_ptr->name;
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe78,0xff,file_handle);
  uVar3 = 0xffffffff;
  pcVar6 = &stack0xfffffe7c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar3 - 1)) {
    (&stack0xfffffe7a)[~uVar3] = 0;
  }
  iVar4 = -1;
  pcVar6 = &stack0xfffffe7c;
  do {
    pcVar5 = &stack0xfffffe7c;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar6;
    pcVar5 = &stack0xfffffe7c;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  do {
    cVar1 = *pcVar5;
    *unaff_EBP = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    unaff_EBP[1] = cVar1;
    unaff_EBP = unaff_EBP + 2;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d,%d\n",&this_ptr->color);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fgets_FUN_005fefd0(acStack_68,0x50,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  fVar2 = unaff_EBX - (this_ptr->pos).x;
  fStack0000000c = unaff_retaddr - (this_ptr->pos).y;
  fStack00000010 = (float)this_ptr - (this_ptr->pos).z;
  (this_ptr->orient).z = in_stack_00000014;
  fVar8 = crt_math_c_atan2_FUN_006013b1((float10)fVar2,(float10)fStack00000010);
  (this_ptr->orient).y = (float)fVar8;
  fVar8 = crt_math_c_atan2_FUN_006013b1((float10)fVar2,x);
  (this_ptr->orient).x = (float)-fVar8;
  return;
}


// Assembly code:
// 005874d0: PUSH EBX
//   Label: core_setutil.cpp_C3DSLight_import3DS_FUN_005874d0
// 005874d1: PUSH ESI
// 005874d2: PUSH EDI
// 005874d3: PUSH EBP
// 005874d4: MOV EBP,ESP
// 005874d6: SUB ESP,0x178
// 005874dc: AND ESP,0xfffffff8
// 005874df: MOV EBX,dword ptr [EBP + 0x14]
// 005874e2: MOV EDX,dword ptr [EBP + 0x18]
// 005874e5: PUSH EDX
// 005874e6: MOV ESI,0xff
// 005874eb: LEA EAX,[EBX + 0x4]
// 005874ee: PUSH ESI
// 005874ef: MOV dword ptr [ESP + 0x17c],EAX
// 005874f6: LEA EAX,[ESP + 0x8]
// 005874fa: PUSH EAX
// 005874fb: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00587500: ADD ESP,0xc
// 00587503: MOV EDI,ESP
// 00587505: SUB ECX,ECX
// 00587507: DEC ECX
// 00587508: XOR EAX,EAX
// 0058750a: SCASB.REPNE ES:EDI
// 0058750c: NOT ECX
// 0058750e: DEC ECX
// 0058750f: TEST ECX,ECX
// 00587511: JLE 0x00587519
//   XREF to: 00587519 (CONDITIONAL_JUMP)
// 00587513: XOR AH,AH
// 00587515: MOV byte ptr [ESP + ECX*0x1 + -0x1],AH
// 00587519: MOV EDI,ESP
//   Label: LAB_00587519
// 0058751b: SUB ECX,ECX
// 0058751d: DEC ECX
// 0058751e: XOR EAX,EAX
// 00587520: SCASB.REPNE ES:EDI
// 00587522: NOT ECX
// 00587524: DEC ECX
// 00587525: XOR DL,DL
// 00587527: MOV EDI,dword ptr [ESP + 0x174]
// 0058752e: MOV byte ptr [ESP + ESI*0x1],DL
// 00587531: MOV ESI,ESP
// 00587533: PUSH EDI
// 00587534: MOV AL,byte ptr [ESI]
//   Label: LAB_00587534
// 00587536: MOV byte ptr [EDI],AL
// 00587538: CMP AL,0x0
// 0058753a: JZ 0x0058754c
//   XREF to: 0058754c (CONDITIONAL_JUMP)
// 0058753c: MOV AL,byte ptr [ESI + 0x1]
// 0058753f: ADD ESI,0x2
// 00587542: MOV byte ptr [EDI + 0x1],AL
// 00587545: ADD EDI,0x2
// 00587548: CMP AL,0x0
// 0058754a: JNZ 0x00587534
//   XREF to: 00587534 (CONDITIONAL_JUMP)
// 0058754c: POP EDI
//   Label: LAB_0058754c
// 0058754d: PUSH EBX
