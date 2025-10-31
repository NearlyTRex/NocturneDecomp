// Name: core_gore.cpp_FUN_004ed240
// Address: 004ed240
// Address Range: [[004ed240, 004ed3b6]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ed240()
// Cross-references:
//   core_gore.cpp_CGore_FUN_004ee070 (004ee070) at 004ee0d0 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062e3e2 = 0.5
//   double DOUBLE_0062e3ea = 4
//   float FLOAT_0062e3f2 = -3
//   float FLOAT_0062e3f6 = 0.08333334
//   undefined4 DAT_0067cb08
//   undefined4 DAT_0067cb0c
//   undefined4 DAT_0067cb18
//   undefined4 DAT_0067cb1c
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004ed240(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6) */

void core_gore_cpp_FUN_004ed240(void)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  BADSPACEBASE *in_ESP;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 *in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  CVector3f local_40;
  CVector3f local_34 [2];
  float fStack_14;
  
  iVar2 = 0;
  pfVar4 = (float *)(in_stack_00000004 + 2);
  do {
    fVar5 = (float10)fsin((float10)*(float *)(in_stack_0000000c + 4));
    fVar6 = (float10)fcos((float10)*(float *)(in_stack_0000000c + 4));
    fVar5 = fVar5 * (float10)DOUBLE_0062e3e2;
    fVar6 = fVar6 * (float10)DOUBLE_0062e3e2;
    local_40.x = (float)(fVar5 * (float10)*(float *)((int)&DAT_0067cb18 + iVar2) +
                         -fVar6 * (float10)*(float *)((int)&DAT_0067cb08 + iVar2) +
                        (float10)*in_stack_00000008);
    local_40.z = (float)(fVar6 * (float10)*(float *)((int)&DAT_0067cb18 + iVar2) +
                        fVar5 * (float10)*(float *)((int)&DAT_0067cb08 + iVar2)) +
                 in_stack_00000008[2];
    if (local_34 != &local_40) {
      local_34[0].x = local_40.x;
      local_34[0].y = in_stack_00000008[1];
      local_34[0].z = local_40.z;
    }
    local_40.y = in_stack_00000008[1] + 1.0;
    local_34[0].y = local_34[0].y + FLOAT_0062e3f2;
    fStack_14 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                          (&g_CDemonRaytraceInstance,&local_40,local_34,(CVector3f *)0x0,(int *)0x0)
    ;
    fVar1 = (local_40.z - fStack_14 * (float)DOUBLE_0062e3ea) + FLOAT_0062e3f6;
    if ((CVector3f *)pfVar4 != &local_40) {
      *pfVar4 = local_40.x;
      pfVar4[1] = fVar1;
      pfVar4[2] = local_34[0].x;
    }
    iVar2 = iVar2 + 4;
    pfVar4 = pfVar4 + 3;
  } while (iVar2 != 0x10);
  puVar3 = in_stack_00000004 + 3;
  do {
    if ((float)DOUBLE_0062e3e2 < ABS((float)in_stack_00000004[3] - (float)puVar3[3])) {
      puVar3[3] = in_stack_00000004[3];
    }
    puVar3 = puVar3 + 3;
  } while (puVar3 != in_stack_00000004 + 0xc);
  *in_stack_00000004 = 0;
  in_stack_00000004[0xe] = in_stack_00000014;
  in_stack_00000004[0xf] = in_stack_00000010;
  in_stack_00000004[1] = in_stack_00000018;
  return;
}


// Assembly code:
// 004ed240: PUSH EBX
//   Label: core_gore.cpp_FUN_004ed240
// 004ed241: PUSH ESI
// 004ed242: PUSH EDI
// 004ed243: PUSH EBP
// 004ed244: MOV EBP,ESP
// 004ed246: SUB ESP,0x2c
// 004ed249: AND ESP,0xfffffff8
// 004ed24c: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004ed24f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ed252: XOR EBX,EBX
// 004ed254: ADD ESI,0x8
// 004ed257: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_004ed257
//   XREF to: Stack[0xc] (READ)
// 004ed25a: FLD float ptr [EAX + 0x4]
// 004ed25d: FLD ST0
// 004ed25f: FSIN
// 004ed261: FXCH
// 004ed263: FCOS
// 004ed265: FXCH
// 004ed267: FLD double ptr [0x0062e3e2]
//   XREF to: 0062e3e2 (READ)
// 004ed26d: FXCH
// 004ed26f: FMUL ST1
// 004ed271: FXCH ST2
// 004ed273: FMULP
// 004ed275: FLD ST1
// 004ed277: FMUL float ptr [EBX + 0x67cb08]
//   XREF to: 0067cb08 (READ)
//   XREF to: 0067cb0c (READ)
// 004ed27d: FLD ST1
// 004ed27f: FCHS
// 004ed281: FMUL float ptr [EBX + 0x67cb08]
//   XREF to: 0067cb08 (READ)
//   XREF to: 0067cb0c (READ)
// 004ed287: FXCH ST2
// 004ed289: FMUL float ptr [EBX + 0x67cb18]
//   XREF to: 0067cb18 (READ)
//   XREF to: 0067cb1c (READ)
// 004ed28f: XOR EDX,EDX
// 004ed291: FXCH ST3
// 004ed293: FMUL float ptr [EBX + 0x67cb18]
//   XREF to: 0067cb18 (READ)
//   XREF to: 0067cb1c (READ)
// 004ed299: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 004ed29d: FXCH ST3
// 004ed29f: FADDP
// 004ed2a1: FXCH ST2
// 004ed2a3: FADDP
// 004ed2a5: FXCH
// 004ed2a7: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 004ed2ab: FST float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004ed2ae: FADD float ptr [EDI]
// 004ed2b0: FSTP float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004ed2b3: MOV EAX,dword ptr [EDI + 0x4]
// 004ed2b6: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x34] (DATA)
// 004ed2ba: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004ed2be: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 004ed2c2: FADD float ptr [EDI + 0x8]
// 004ed2c5: MOV EAX,ESP
// 004ed2c7: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 004ed2cb: CMP EDX,EAX
// 004ed2cd: JZ 0x004ed2e6
//   XREF to: 004ed2e6 (CONDITIONAL_JUMP)
// 004ed2cf: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004ed2d2: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004ed2d6: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 004ed2da: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004ed2de: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 004ed2e2: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004ed2e6: FLD1
//   Label: LAB_004ed2e6
// 004ed2e8: PUSH 0x0
// 004ed2ea: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x30] (READ)
// 004ed2ee: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x34] (DATA)
// 004ed2f2: PUSH 0x0
// 004ed2f4: FXCH
// 004ed2f6: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 004ed2fa: PUSH EAX
// 004ed2fb: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 004ed2ff: FXCH
// 004ed301: FADD float ptr [0x0062e3f2]
//   XREF to: 0062e3f2 (READ)
// 004ed307: PUSH EAX
// 004ed308: FXCH
// 004ed30a: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (WRITE)
// 004ed30e: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 004ed313: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (WRITE)
// 004ed317: CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
//   XREF to: 00495b70 (UNCONDITIONAL_CALL)
// 004ed31c: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004ed320: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 004ed324: FMUL double ptr [0x0062e3ea]
//   XREF to: 0062e3ea (READ)
// 004ed32a: ADD ESP,0x14
// 004ed32d: FSUBR float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 004ed331: FADD float ptr [0x0062e3f6]
//   XREF to: 0062e3f6 (READ)
// 004ed337: MOV EAX,ESP
// 004ed339: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 004ed33d: CMP ESI,EAX
// 004ed33f: JZ 0x004ed354
//   XREF to: 004ed354 (CONDITIONAL_JUMP)
// 004ed341: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004ed344: MOV dword ptr [ESI],EAX
// 004ed346: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 004ed34a: MOV dword ptr [ESI + 0x4],EAX
// 004ed34d: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 004ed351: MOV dword ptr [ESI + 0x8],EAX
// 004ed354: ADD EBX,0x4
//   Label: LAB_004ed354
// 004ed357: ADD ESI,0xc
// 004ed35a: CMP EBX,0x10
// 004ed35d: JNZ 0x004ed257
//   XREF to: 004ed257 (CONDITIONAL_JUMP)
// 004ed363: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ed366: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ed369: ADD EBX,0xc
// 004ed36c: ADD EDX,0x30
// 004ed36f: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004ed36f
//   XREF to: Stack[0x4] (READ)
// 004ed372: FLD float ptr [EAX + 0xc]
// 004ed375: FSUB float ptr [EBX + 0xc]
// 004ed378: FABS
// 004ed37a: FCOMP double ptr [0x0062e3e2]
//   XREF to: 0062e3e2 (READ)
// 004ed380: FNSTSW AX
// 004ed382: SAHF
// 004ed383: JBE 0x004ed38e
//   XREF to: 004ed38e (CONDITIONAL_JUMP)
// 004ed385: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ed388: MOV ECX,dword ptr [EAX + 0xc]
// 004ed38b: MOV dword ptr [EBX + 0xc],ECX
// 004ed38e: ADD EBX,0xc
//   Label: LAB_004ed38e
// 004ed391: CMP EBX,EDX
// 004ed393: JNZ 0x004ed36f
//   XREF to: 004ed36f (CONDITIONAL_JUMP)
// 004ed395: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ed398: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004ed39b: MOV dword ptr [EAX],0x0
// 004ed3a1: MOV dword ptr [EAX + 0x38],EDX
// 004ed3a4: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004ed3a7: MOV dword ptr [EAX + 0x3c],EDX
// 004ed3aa: MOV EDX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004ed3ad: MOV dword ptr [EAX + 0x4],EDX
// 004ed3b0: MOV ESP,EBP
// 004ed3b2: POP EBP
// 004ed3b3: POP EDI
// 004ed3b4: POP ESI
// 004ed3b5: POP EBX
// 004ed3b6: RET
