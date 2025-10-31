// Name: shape_quantize.cpp_FUN_00556180
// Address: 00556180
// Address Range: [[00556180, 005563c2]]
// Convention: unknown
// Signature: undefined shape_quantize.cpp_FUN_00556180()
// Cross-references:
//   shape_quantize.cpp_FreeAndAllocate_ThenQuantize_FUN_005563d0 (005563d0) at 00556451 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_quantize_cpp_00640d9b
//   TerminatedCString s_Phase_3_00640db1
//   TerminatedCString s_shape_quantize_cpp_00640db9
//   TerminatedCString s_shape_quantize_cpp_00640dcf
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_string.c_strncpy_FUN_00600f40
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_quantize.cpp_AllocateMemForSomething_FUN_00556a00
//   shape_quantize.cpp_FreeSomething1_FUN_00556c20
//   shape_quantize.cpp_FUN_00555500
//   shape_quantize.cpp_FUN_005556f0

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* Signature: undefined1 shape_quantize.cpp_FUN_00556180(undefined4 param_1, undefined4 param_2) */

undefined4 shape_quantize_cpp_FUN_00556180(void)

{
  short sVar1;
  ushort uVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  BADSPACEBASE *in_ESP;
  void **ppvVar9;
  void **ppvVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  byte bVar15;
  int *in_stack_00000004;
  int *in_stack_00000008;
  void *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  
  bVar15 = 0;
  iVar5 = shape_quantize_cpp_FUN_00555500();
  if (iVar5 == 0) {
    return 0;
  }
  local_20 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x28,"..\\shape\\quantize.cpp",900);
  if (local_20 != (void *)0x0) {
    local_20 = (void *)shape_quantize_cpp_AllocateMemForSomething_FUN_00556a00();
  }
  ppvVar9 = &local_20;
  local_14 = 0;
  local_18 = 0;
  local_1c = (undefined4 *)**(undefined4 **)((int)local_20 + 0x20);
  do {
    iVar5 = *in_stack_00000008;
    uVar8 = (uint)*(ushort *)(iVar5 + 0x16);
    if ((int)uVar8 <= local_14) {
      ppvVar9[-1] = (void *)0x14;
      ppvVar9[-2] = (void *)iVar5;
      pvVar4 = local_20;
      ppvVar9[-3] = local_20;
      ppvVar9[-4] = (void *)0x556362;
      crt_string_c_strncpy_FUN_00600f40((char *)ppvVar9[-3],(char *)ppvVar9[-2],(SIZE_T)ppvVar9[-1])
      ;
      piVar14 = *(int **)((int)pvVar4 + 0x24);
      ppvVar9[-1] = piVar14;
      piVar12 = in_stack_00000004 + 0x120c;
      for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar14 = *piVar12;
        piVar12 = piVar12 + (uint)bVar15 * -2 + 1;
        piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(char *)piVar14 = (char)*piVar12;
        piVar12 = (int *)((int)piVar12 + (uint)bVar15 * -2 + 1);
        piVar14 = (int *)((int)piVar14 + (uint)bVar15 * -2 + 1);
      }
      g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
      iVar5 = *in_stack_00000008;
      g_CurrentDebugLine = 0x3a1;
      if (iVar5 != 0) {
        ppvVar9[-1] = (void *)0x0;
        ppvVar9[-2] = (void *)iVar5;
        ppvVar9[-3] = (void *)0x5563a3;
        uVar6 = shape_quantize_cpp_FreeSomething1_FUN_00556c20();
        ppvVar9[-1] = (void *)uVar6;
        ppvVar9[-2] = (void *)0x5563ac;
        shape_memdbg_cpp_debugFree_FUN_0050f210(ppvVar9[-1]);
      }
      *in_stack_00000008 = (int)local_20;
      return 1;
    }
    if (*in_stack_00000004 != 0) {
      ppvVar9[-1] = (void *)local_14;
      ppvVar9[-2] = (void *)uVar8;
      ppvVar9[-3] = "Phase 3";
      pcVar3 = (code *)*in_stack_00000004;
      ppvVar10 = ppvVar9 + -4;
      ppvVar9[-4] = (void *)0x55622b;
      iVar5 = (*pcVar3)();
      pvVar4 = local_20;
      ppvVar9 = ppvVar10 + 3;
      if (iVar5 != 0) {
        g_CurrentDebugLine = 0x38d;
        g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
        if (local_20 != (void *)0x0) {
          ppvVar10[2] = (void *)0x0;
          ppvVar10[1] = pvVar4;
          *ppvVar10 = (void *)0x55625b;
          uVar6 = shape_quantize_cpp_FreeSomething1_FUN_00556c20();
          ppvVar10[2] = (void *)uVar6;
          ppvVar10[1] = (void *)0x556264;
          shape_memdbg_cpp_debugFree_FUN_0050f210(ppvVar10[2]);
        }
        return 0;
      }
    }
    uVar8 = (uint)*(ushort *)(*in_stack_00000008 + 0x14) * 3;
    puVar11 = *(undefined4 **)(*(int *)(*in_stack_00000008 + 0x20) + local_18);
    puVar13 = (undefined4 *)in_stack_00000004[3];
    *(undefined4 **)((int)ppvVar9 + -4) = puVar13;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + (uint)bVar15 * -2 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + (uint)bVar15 * -2 + 1);
    }
    if (local_14 % 2 == 0) {
      *(int *)((int)ppvVar9 + -4) = *(int *)((int)in_stack_00000004 + 0x4b3e) >> 0x10;
      sVar1 = *(short *)(*in_stack_00000008 + 0x14);
      *(undefined4 *)((int)ppvVar9 + -8) = 0xffffffff;
      *(int *)((int)ppvVar9 + -0xc) = (int)(short)(sVar1 + -1);
      *(int *)((int)ppvVar9 + -0x10) = in_stack_00000004[2];
      *(int *)((int)ppvVar9 + -0x14) = in_stack_00000004[3];
      *(int **)((int)ppvVar9 + -0x18) = in_stack_00000004;
      *(undefined4 *)((int)ppvVar9 + -0x1c) = 0x556301;
      shape_quantize_cpp_FUN_005556f0();
    }
    else {
      *(int *)((int)ppvVar9 + -4) = *(int *)((int)in_stack_00000004 + 0x4b3e) >> 0x10;
      *(int *)((int)ppvVar9 + -8) = (int)*(short *)(*in_stack_00000008 + 0x14);
      *(undefined4 *)((int)ppvVar9 + -0xc) = 0;
      *(int *)((int)ppvVar9 + -0x10) = in_stack_00000004[2];
      *(int *)((int)ppvVar9 + -0x14) = in_stack_00000004[3];
      *(int **)((int)ppvVar9 + -0x18) = in_stack_00000004;
      *(undefined4 *)((int)ppvVar9 + -0x1c) = 0x5562d6;
      shape_quantize_cpp_FUN_005556f0();
    }
    uVar2 = *(ushort *)(*in_stack_00000008 + 0x14);
    puVar11 = (undefined4 *)in_stack_00000004[2];
    *(undefined4 **)((int)ppvVar9 + -4) = local_1c;
    for (uVar8 = (uint)(uVar2 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
      *local_1c = *puVar11;
      puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
      local_1c = local_1c + (uint)bVar15 * -2 + 1;
    }
    for (uVar8 = (byte)uVar2 & 0xffffff03; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)local_1c = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + (uint)bVar15 * -2 + 1);
      local_1c = (undefined4 *)((int)local_1c + (uint)bVar15 * -2 + 1);
    }
    local_1c = (undefined4 *)
               (*(int *)((int)ppvVar9 + -4) + (uint)*(ushort *)(*in_stack_00000008 + 0x14));
    local_14 = local_14 + 1;
    local_18 = local_18 + 4;
  } while( true );
}


// Assembly code:
// 00556180: PUSH EBX
//   Label: shape_quantize.cpp_FUN_00556180
// 00556181: PUSH ESI
// 00556182: PUSH EDI
// 00556183: PUSH EBP
// 00556184: MOV EBP,ESP
// 00556186: SUB ESP,0x10
// 00556189: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0055618c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055618f: MOV EAX,dword ptr [EAX]
// 00556191: MOV AX,word ptr [EAX + 0x14]
// 00556195: AND EAX,0xffff
// 0055619a: PUSH EAX
// 0055619b: PUSH EBX
// 0055619c: CALL shape_quantize.cpp_FUN_00555500
//   XREF to: 00555500 (UNCONDITIONAL_CALL)
// 005561a1: ADD ESP,0x8
// 005561a4: TEST EAX,EAX
// 005561a6: JNZ 0x005561af
//   XREF to: 005561af (CONDITIONAL_JUMP)
// 005561a8: MOV ESP,EBP
// 005561aa: POP EBP
// 005561ab: POP EDI
// 005561ac: POP ESI
// 005561ad: POP EBX
// 005561ae: RET
// 005561af: PUSH 0x384
//   Label: LAB_005561af
// 005561b4: PUSH 0x640d9b
//   XREF to: 00640d9b (DATA)
// 005561b9: PUSH 0x28
// 005561bb: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005561c0: ADD ESP,0xc
// 005561c3: TEST EAX,EAX
// 005561c5: JZ 0x005561ed
//   XREF to: 005561ed (CONDITIONAL_JUMP)
// 005561c7: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005561ca: MOV EDX,dword ptr [EDX]
// 005561cc: PUSH 0x8
// 005561ce: MOV CX,word ptr [EDX + 0x16]
// 005561d2: AND ECX,0xffff
// 005561d8: MOV DX,word ptr [EDX + 0x14]
// 005561dc: PUSH ECX
// 005561dd: AND EDX,0xffff
// 005561e3: PUSH EDX
// 005561e4: PUSH EAX
// 005561e5: CALL shape_quantize.cpp_AllocateMemForSomething_FUN_00556a00
//   XREF to: 00556a00 (UNCONDITIONAL_CALL)
// 005561ea: ADD ESP,0x10
// 005561ed: MOV dword ptr [EBP + -0x10],EAX
//   Label: LAB_005561ed
//   XREF to: Stack[-0x20] (WRITE)
// 005561f0: XOR EDX,EDX
// 005561f2: MOV EAX,dword ptr [EAX + 0x20]
// 005561f5: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005561f8: MOV EAX,dword ptr [EAX]
// 005561fa: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005561fd: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00556200: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_00556200
//   XREF to: Stack[0x8] (READ)
// 00556203: MOV EDX,dword ptr [EDX]
// 00556205: MOV AX,word ptr [EDX + 0x16]
// 00556209: MOV ESI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0055620c: AND EAX,0xffff
// 00556211: CMP EAX,ESI
// 00556213: JLE 0x00556350
//   XREF to: 00556350 (CONDITIONAL_JUMP)
// 00556219: CMP dword ptr [EBX],0x0
// 0055621c: JZ 0x00556270
//   XREF to: 00556270 (CONDITIONAL_JUMP)
// 00556222: PUSH ESI
// 00556223: PUSH EAX
// 00556224: PUSH 0x640db1
//   XREF to: 00640db1 (DATA)
// 00556229: CALL dword ptr [EBX]
// 0055622b: ADD ESP,0xc
// 0055622e: TEST EAX,EAX
// 00556230: JZ 0x00556270
//   XREF to: 00556270 (CONDITIONAL_JUMP)
// 00556236: MOV EBX,0x38d
// 0055623b: MOV ECX,0x640db9
//   XREF to: 00640db9 (PARAM)
// 00556240: MOV ESI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00556243: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 00556249: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0055624f: TEST ESI,ESI
// 00556251: JZ 0x00556267
//   XREF to: 00556267 (CONDITIONAL_JUMP)
// 00556253: PUSH 0x0
// 00556255: PUSH ESI
// 00556256: CALL shape_quantize.cpp_FreeSomething1_FUN_00556c20
//   XREF to: 00556c20 (UNCONDITIONAL_CALL)
// 0055625b: ADD ESP,0x8
// 0055625e: PUSH EAX
// 0055625f: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00556264: ADD ESP,0x4
// 00556267: XOR EAX,EAX
//   Label: LAB_00556267
// 00556269: MOV ESP,EBP
// 0055626b: POP EBP
// 0055626c: POP EDI
// 0055626d: POP ESI
// 0055626e: POP EBX
// 0055626f: RET
// 00556270: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_00556270
//   XREF to: Stack[0x8] (READ)
// 00556273: MOV EDX,dword ptr [EDX]
// 00556275: XOR ECX,ECX
// 00556277: MOV AX,word ptr [EDX + 0x14]
// 0055627b: MOV EDI,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0055627e: MOV CX,AX
// 00556281: MOV EAX,dword ptr [EDX + 0x20]
// 00556284: ADD EAX,EDI
// 00556286: LEA ECX,[ECX + ECX*0x2]
// 00556289: MOV ESI,dword ptr [EAX]
// 0055628b: MOV EDI,dword ptr [EBX + 0xc]
// 0055628e: PUSH EDI
// 0055628f: MOV EAX,ECX
// 00556291: SHR ECX,0x2
// 00556294: MOVSD.REP ES:EDI,ESI
// 00556296: MOV CL,AL
// 00556298: AND CL,0x3
// 0055629b: MOVSB.REP ES:EDI,ESI
// 0055629d: POP EDI
// 0055629e: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005562a1: MOV EDX,EAX
// 005562a3: MOV ECX,0x2
// 005562a8: SAR EDX,0x1f
// 005562ab: IDIV ECX
// 005562ad: TEST EDX,EDX
// 005562af: JZ 0x005562db
//   XREF to: 005562db (CONDITIONAL_JUMP)
// 005562b1: MOV EAX,dword ptr [EBX + 0x4b3e]
// 005562b7: SAR EAX,0x10
// 005562ba: PUSH EAX
// 005562bb: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005562be: MOV EAX,dword ptr [EAX]
// 005562c0: MOV AX,word ptr [EAX + 0x14]
// 005562c4: CWDE
// 005562c5: PUSH EAX
// 005562c6: PUSH 0x0
// 005562c8: MOV ECX,dword ptr [EBX + 0x8]
// 005562cb: PUSH ECX
// 005562cc: MOV ESI,dword ptr [EBX + 0xc]
// 005562cf: PUSH ESI
// 005562d0: PUSH EBX
// 005562d1: CALL shape_quantize.cpp_FUN_005556f0
//   XREF to: 005556f0 (UNCONDITIONAL_CALL)
// 005562d6: ADD ESP,0x18
// 005562d9: JMP 0x00556304
//   XREF to: 00556304 (UNCONDITIONAL_JUMP)
// 005562db: MOV EAX,dword ptr [EBX + 0x4b3e]
//   Label: LAB_005562db
// 005562e1: SAR EAX,0x10
// 005562e4: PUSH EAX
// 005562e5: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005562e8: MOV EAX,dword ptr [EAX]
// 005562ea: MOV AX,word ptr [EAX + 0x14]
// 005562ee: DEC EAX
// 005562ef: PUSH -0x1
// 005562f1: CWDE
// 005562f2: PUSH EAX
// 005562f3: MOV EAX,dword ptr [EBX + 0x8]
// 005562f6: PUSH EAX
// 005562f7: MOV EDX,dword ptr [EBX + 0xc]
// 005562fa: PUSH EDX
// 005562fb: PUSH EBX
// 005562fc: CALL shape_quantize.cpp_FUN_005556f0
//   XREF to: 005556f0 (UNCONDITIONAL_CALL)
// 00556301: ADD ESP,0x18
// 00556304: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_00556304
//   XREF to: Stack[0x8] (READ)
// 00556307: MOV EAX,dword ptr [EAX]
// 00556309: MOV EDI,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0055630c: XOR ECX,ECX
// 0055630e: MOV AX,word ptr [EAX + 0x14]
// 00556312: MOV ESI,dword ptr [EBX + 0x8]
// 00556315: MOV CX,AX
// 00556318: PUSH EDI
// 00556319: MOV EAX,ECX
// 0055631b: SHR ECX,0x2
// 0055631e: MOVSD.REP ES:EDI,ESI
// 00556320: MOV CL,AL
// 00556322: AND CL,0x3
// 00556325: MOVSB.REP ES:EDI,ESI
// 00556327: POP EDI
// 00556328: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055632b: MOV EAX,dword ptr [EAX]
// 0055632d: MOV AX,word ptr [EAX + 0x14]
// 00556331: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00556334: AND EAX,0xffff
// 00556339: INC EDX
// 0055633a: ADD EDI,EAX
// 0055633c: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0055633f: MOV dword ptr [EBP + -0xc],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00556342: ADD EAX,0x4
// 00556345: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00556348: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0055634b: JMP 0x00556200
//   XREF to: 00556200 (UNCONDITIONAL_JUMP)
// 00556350: PUSH 0x14
//   Label: LAB_00556350
// 00556352: PUSH EDX
// 00556353: MOV EDI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00556356: PUSH EDI
// 00556357: LEA ESI,[EBX + 0x4830]
// 0055635d: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 00556362: ADD ESP,0xc
// 00556365: MOV ECX,0x300
// 0055636a: MOV EDI,dword ptr [EDI + 0x24]
// 0055636d: PUSH EDI
// 0055636e: MOV EAX,ECX
// 00556370: SHR ECX,0x2
// 00556373: MOVSD.REP ES:EDI,ESI
// 00556375: MOV CL,AL
// 00556377: AND CL,0x3
// 0055637a: MOVSB.REP ES:EDI,ESI
// 0055637c: POP EDI
// 0055637d: MOV dword ptr [0x0067d20c],0x640dcf
//   XREF to: 0067d20c (WRITE)
//   XREF to: 00640dcf (DATA)
// 00556387: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055638a: MOV EDX,0x3a1
// 0055638f: MOV EAX,dword ptr [EAX]
// 00556391: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 00556397: TEST EAX,EAX
// 00556399: JZ 0x005563af
//   XREF to: 005563af (CONDITIONAL_JUMP)
// 0055639b: PUSH 0x0
// 0055639d: PUSH EAX
// 0055639e: CALL shape_quantize.cpp_FreeSomething1_FUN_00556c20
//   XREF to: 00556c20 (UNCONDITIONAL_CALL)
// 005563a3: ADD ESP,0x8
// 005563a6: PUSH EAX
// 005563a7: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005563ac: ADD ESP,0x4
// 005563af: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_005563af
//   XREF to: Stack[0x8] (READ)
// 005563b2: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 005563b5: MOV dword ptr [EAX],EDX
// 005563b7: MOV EAX,0x1
// 005563bc: MOV ESP,EBP
// 005563be: POP EBP
// 005563bf: POP EDI
// 005563c0: POP ESI
// 005563c1: POP EBX
// 005563c2: RET
