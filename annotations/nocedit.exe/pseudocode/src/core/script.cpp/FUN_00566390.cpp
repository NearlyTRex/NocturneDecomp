// Name: core_script.cpp_FUN_00566390
// Address: 00566390
// Address Range: [[00566390, 005664c4]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566390()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 0056596c [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564bc0 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565f70 (00565f70) at 0056606f [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd48
//   undefined4 DAT_031101bf
//   undefined1 DAT_031101c0
//   undefined1 DAT_031101c1
// Function calls:
//   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   core_script.cpp_CScript_insertAndEditorPutLine_FUN_00566330
//   core_script.cpp_FUN_00566230
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00566390(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_script_cpp_FUN_00566390(void)

{
  char cVar1;
  int iVar2;
  undefined1 *dest;
  SIZE_T n;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *src;
  byte bVar7;
  char *in_stack_00000008;
  int in_stack_00000010;
  int local_14;
  int iVar8;
  
  bVar7 = 0;
  iVar2 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
  cVar1 = *in_stack_00000008;
  iVar8 = DAT_0310fd48;
  do {
    if (cVar1 == '\0') {
      if (in_stack_00000010 != 0) {
        DAT_0310fd44 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
        DAT_0310fd48 = iVar8;
        return;
      }
      return;
    }
    core_script_cpp_FUN_00566230();
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_031101c0;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    for (iVar4 = ~uVar3 - 1; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (&DAT_031101c0)[iVar4] = 0x20;
    }
    dest = &DAT_031101c1 + iVar2;
    src = &DAT_031101c0 + iVar2;
    for (; (cVar1 = *in_stack_00000008, cVar1 != '\0' && (cVar1 != '\n'));
        in_stack_00000008 = in_stack_00000008 + 1) {
      iVar5 = iVar2;
      if (cVar1 != '\r') {
        n = iVar4 - iVar2;
        iVar4 = iVar4 + 1;
        iVar5 = iVar2 + 1;
        crt_string_c_memmove_FUN_005fe5e0(dest,src,n);
        src = src + 1;
        (&DAT_031101c0)[iVar2] = *in_stack_00000008;
      }
      iVar2 = iVar5;
    }
    (&DAT_031101c0)[iVar4] = 0;
    core_script_cpp_CScript_editorPutLine_FUN_005662a0();
    if (*in_stack_00000008 == '\n') {
      in_stack_00000008 = in_stack_00000008 + 1;
      core_script_cpp_CScript_insertAndEditorPutLine_FUN_00566330();
      iVar8 = local_14 + 1;
      iVar2 = 0;
    }
    cVar1 = *in_stack_00000008;
  } while( true );
}


// Assembly code:
// 00566390: PUSH EBX
//   Label: core_script.cpp_FUN_00566390
// 00566391: PUSH ESI
// 00566392: PUSH EDI
// 00566393: PUSH EBP
// 00566394: SUB ESP,0x8
// 00566397: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0056639b: MOV EDX,dword ptr [0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 005663a1: PUSH EDX
// 005663a2: MOV ECX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005663a8: PUSH ECX
// 005663a9: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005663ad: PUSH EBX
// 005663ae: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 005663b3: ADD ESP,0xc
// 005663b6: MOV EBP,EAX
// 005663b8: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005663bd: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005663c1: CMP byte ptr [ESI],0x0
// 005663c4: JZ 0x00566490
//   XREF to: 00566490 (CONDITIONAL_JUMP)
// 005663ca: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_005663ca
//   XREF to: Stack[-0x14] (READ)
// 005663ce: PUSH EAX
// 005663cf: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005663d3: PUSH EDX
// 005663d4: CALL core_script.cpp_FUN_00566230
//   XREF to: 00566230 (UNCONDITIONAL_CALL)
// 005663d9: ADD ESP,0x8
// 005663dc: MOV EDI,0x31101c0
//   XREF to: 031101c0 (DATA)
// 005663e1: SUB ECX,ECX
// 005663e3: DEC ECX
// 005663e4: XOR EAX,EAX
// 005663e6: SCASB.REPNE ES:EDI
//   XREF to: 031101c0 (READ)
//   XREF to: 031101c1 (READ)
// 005663e8: NOT ECX
// 005663ea: DEC ECX
// 005663eb: MOV EBX,ECX
// 005663ed: CMP ECX,EBP
// 005663ef: JGE 0x005663fe
//   XREF to: 005663fe (CONDITIONAL_JUMP)
// 005663f1: MOV DH,0x20
// 005663f3: INC EBX
//   Label: LAB_005663f3
// 005663f4: MOV byte ptr [EBX + 0x31101bf],DH
//   XREF to: 031101c0 (WRITE)
//   XREF to: 031101c1 (WRITE)
// 005663fa: CMP EBX,EBP
// 005663fc: JL 0x005663f3
//   XREF to: 005663f3 (CONDITIONAL_JUMP)
// 005663fe: LEA EAX,[EBP + 0x1]
//   Label: LAB_005663fe
// 00566401: ADD EAX,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00566406: MOV EDI,EBP
// 00566408: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0056640b: ADD EDI,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00566411: MOV CL,byte ptr [ESI]
//   Label: LAB_00566411
// 00566413: TEST CL,CL
// 00566415: JZ 0x0056644b
//   XREF to: 0056644b (CONDITIONAL_JUMP)
// 00566417: CMP CL,0xa
// 0056641a: JZ 0x0056644b
//   XREF to: 0056644b (CONDITIONAL_JUMP)
// 0056641c: CMP CL,0xd
// 0056641f: JNZ 0x00566424
//   XREF to: 00566424 (CONDITIONAL_JUMP)
// 00566421: INC ESI
//   Label: LAB_00566421
// 00566422: JMP 0x00566411
//   XREF to: 00566411 (UNCONDITIONAL_JUMP)
// 00566424: MOV EAX,EBX
//   Label: LAB_00566424
// 00566426: SUB EAX,EBP
// 00566428: PUSH EAX
// 00566429: PUSH EDI
// 0056642a: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0056642e: PUSH EDX
// 0056642f: INC EBX
// 00566430: INC EBP
// 00566431: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00566436: ADD ESP,0xc
// 00566439: INC EDI
// 0056643a: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0056643d: MOV AL,byte ptr [ESI]
// 0056643f: INC ECX
// 00566440: MOV byte ptr [EBP + 0x31101bf],AL
//   XREF to: 031101bf (DATA)
//   XREF to: 031101c0 (DATA)
// 00566446: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x18] (DATA)
// 00566449: JMP 0x00566421
//   XREF to: 00566421 (UNCONDITIONAL_JUMP)
// 0056644b: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_0056644b
//   XREF to: Stack[-0x14] (READ)
// 0056644f: XOR AL,AL
// 00566451: PUSH ECX
// 00566452: MOV byte ptr [EBX + 0x31101c0],AL
//   XREF to: 031101c1 (WRITE)
// 00566458: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0056645c: PUSH EBX
// 0056645d: CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   XREF to: 005662a0 (UNCONDITIONAL_CALL)
// 00566462: MOV AH,byte ptr [ESI]
// 00566464: ADD ESP,0x8
// 00566467: CMP AH,0xa
// 0056646a: JNZ 0x00566487
//   XREF to: 00566487 (CONDITIONAL_JUMP)
// 0056646c: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00566470: PUSH EDI
// 00566471: PUSH EBP
// 00566472: PUSH EBX
// 00566473: INC ESI
// 00566474: MOV EBP,EBX
// 00566476: CALL core_script.cpp_CScript_insertAndEditorPutLine_FUN_00566330
//   XREF to: 00566330 (UNCONDITIONAL_CALL)
// 0056647b: ADD ESP,0xc
// 0056647e: LEA EAX,[EDI + 0x1]
// 00566481: XOR EBP,EBX
// 00566483: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00566487: CMP byte ptr [ESI],0x0
//   Label: LAB_00566487
// 0056648a: JNZ 0x005663ca
//   XREF to: 005663ca (CONDITIONAL_JUMP)
// 00566490: CMP dword ptr [ESP + 0x24],0x0
//   Label: LAB_00566490
//   XREF to: Stack[0xc] (READ)
// 00566495: JNZ 0x0056649f
//   XREF to: 0056649f (CONDITIONAL_JUMP)
// 00566497: ADD ESP,0x8
// 0056649a: POP EBP
// 0056649b: POP EDI
// 0056649c: POP ESI
// 0056649d: POP EBX
// 0056649e: RET
// 0056649f: PUSH EBP
//   Label: LAB_0056649f
// 005664a0: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 005664a4: PUSH EDI
// 005664a5: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005664a9: PUSH EBP
// 005664aa: CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   XREF to: 00566b30 (UNCONDITIONAL_CALL)
// 005664af: ADD ESP,0xc
// 005664b2: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 005664b7: MOV dword ptr [0x0310fd48],EDI
//   XREF to: 0310fd48 (WRITE)
// 005664bd: ADD ESP,0x8
// 005664c0: POP EBP
// 005664c1: POP EDI
// 005664c2: POP ESI
// 005664c3: POP EBX
// 005664c4: RET
