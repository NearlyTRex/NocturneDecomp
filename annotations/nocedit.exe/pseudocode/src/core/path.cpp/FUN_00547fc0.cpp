// Name: core_path.cpp_FUN_00547fc0
// Address: 00547fc0
// Address Range: [[00547fc0, 0054838a]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_00547fc0()
// Cross-references:
//   core_path.cpp_FUN_005485f0 (005485f0) at 0054866a [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_00548680 (00548680) at 0054873b [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWaypoint_FUN_005ebf70 (005ebf70) at 005ec138 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0063ea38 = 256
//   double DOUBLE_0063ea40 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic DAT_00680bb0
//   undefined4 DAT_00800000
//   CDemonRenderer g_CDemonRendererInstance
//   SMRGLHeaderPrimitive DAT_030d4fd0
//   undefined4 DAT_030d4fd0.base.count
//   undefined4 DAT_030d4fd0.surface_normal.A
//   undefined4 DAT_030d4fd0.surface_normal.B
//   undefined4 DAT_030d4fd0.surface_normal.C
//   undefined4 DAT_030d4fd0.surface_normal.D
//   undefined4 DAT_030d4fe8
//   undefined4 DAT_030d4fec
//   undefined4 DAT_030d4ff0
//   undefined4 DAT_030d4ff4
//   undefined4 DAT_030d4ff8
//   undefined4 DAT_030d4ffc
//   undefined4 DAT_030d5000
//   undefined4 DAT_030d5004
//   undefined4 DAT_030d5008
//   undefined4 DAT_030d500c
//   undefined4 DAT_030d5010
//   undefined4 g_CDemonRaytraceInstance.bbox_min.x
//   undefined4 g_CDemonRaytraceInstance.bbox_min.y
//   undefined4 g_CDemonRaytraceInstance.bbox_min.z
//   undefined4 g_CDemonRaytraceInstance.adjusted_size.x
//   undefined4 g_CDemonRaytraceInstance.adjusted_size.y
//   undefined4 g_CDemonRaytraceInstance.adjusted_size.z
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
//   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_00547fc0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  int in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  float in_stack_00000018;
  int aiStackY_1030 [1007];
  undefined1 *local_60;
  CVector3i *input;
  CVector3i *input_00;
  CVector3i *input_01;
  CDemonRenderer *pCVar7;
  CDemonRenderer *pCVar8;
  CDemonRenderer *this_ptr;
  int local_38 [2];
  float fStack_30;
  float local_2c;
  float local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar2 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 != 0) {
    return;
  }
  local_60 = (undefined1 *)
             ((float)*(int *)(in_stack_00000004 + 0x24) * g_CDemonRaytraceInstance.adjusted_size.x +
             g_CDemonRaytraceInstance.bbox_min.x);
  input = (CVector3i *)
          ((float)*(int *)(in_stack_00000004 + 0x2c) * g_CDemonRaytraceInstance.adjusted_size.z +
          g_CDemonRaytraceInstance.bbox_min.z);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&local_60);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_00680bb0);
  DAT_030d4fd0.base.count = 4;
  DAT_030d4fd0.surface_normal.A = 0;
  DAT_030d4fd0.surface_normal.B = 0;
  DAT_030d4fd0.surface_normal.C = 0;
  DAT_030d4fd0.surface_normal.D = 0;
  _DAT_030d4fe8 = 0;
  _DAT_030d4ff4 = 1;
  _DAT_030d5000 = 2;
  _DAT_030d4fec = 0x800000;
  _DAT_030d4ff0 = 0x800000;
  _DAT_030d4ff8 = 0x800000;
  _DAT_030d4ffc = 0x800000;
  _DAT_030d5004 = 0x800000;
  _DAT_030d5008 = 0x800000;
  _DAT_030d5010 = 0x800000;
  _DAT_030d5014 = 0x800000;
  _DAT_030d500c = 3;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0);
  local_18 = in_stack_0000000c << 8;
  local_14 = in_stack_00000010 << 8;
  input_01 = (CVector3i *)0x0;
  local_1c = 0;
  do {
    iVar1 = local_1c + in_stack_00000004;
    pCVar7 = (CDemonRenderer *)0x0;
    do {
      this_ptr = pCVar7;
      if ((-1000 < *(int *)(iVar1 + 0x9c70)) && (*(int *)(iVar1 + 0x9c70) < 1000)) {
        fVar3 = (float10)DOUBLE_0063ea40;
        fVar4 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar3;
        local_38[(uint)bVar2 * -2] = *(int *)(&stack0xffffffbc + (uint)bVar2 * -8);
        local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             *(int *)(&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
        fVar5 = (float10)local_38[0] *
                (float10)(g_CDemonRaytraceInstance.adjusted_size.y * FLOAT_0063ea38);
        fStack_30 = g_CDemonRaytraceInstance.adjusted_size.x * FLOAT_0063ea38;
        local_2c = g_CDemonRaytraceInstance.adjusted_size.y * FLOAT_0063ea38;
        local_28 = g_CDemonRaytraceInstance.adjusted_size.z * FLOAT_0063ea38;
        dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(g_CDemonRendererPtr,local_38[1]));
        local_60 = &stack0xffffffa4;
        fVar4 = fVar4 + fVar5;
        dVar6 = crt_math_c_round_FUN_005fe6b0
                          ((double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),&stack0xffffffa4));
        fVar4 = fVar4 + fVar3;
        local_60 = (undefined1 *)0x548222;
        dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
        input_00 = (CVector3i *)(int)ROUND(fVar4);
        local_60 = (undefined1 *)0x54822e;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)*(undefined4 *)((ulonglong)dVar6 >> 0x20),input);
        dVar6 = crt_math_c_round_FUN_005fe6b0
                          ((double)CONCAT44(g_CDemonRendererPtr,&stack0xffffffb0));
        input = (CVector3i *)0x548261;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)(*(int *)((ulonglong)dVar6 >> 0x20) + 0x30),input_00);
        pCVar8 = pCVar7;
        dVar6 = crt_math_c_round_FUN_005fe6b0
                          ((double)CONCAT44(g_CDemonRendererPtr,&stack0xffffffb8));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)(*(int *)((ulonglong)dVar6 >> 0x20) + 0x60),input_01);
        dVar6 = crt_math_c_round_FUN_005fe6b0
                          ((double)CONCAT44(&stack0xffffffc0,g_CDemonRendererPtr));
        input_01 = (CVector3i *)0x5482c8;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)(*SUB84(dVar6,0) + 0x90),
                   (CVector3i *)((ulonglong)dVar6 >> 0x20));
        this_ptr = g_CDemonRendererPtr;
        g_CDemonRendererPtr->vertex_buffer_ptr->light = in_stack_00000018;
        this_ptr->vertex_buffer_ptr->color = in_stack_00000010;
        this_ptr->vertex_buffer_ptr->fog = (float)pCVar7;
        this_ptr->vertex_buffer_ptr->w_recip = (float)pCVar8;
        this_ptr->vertex_buffer_ptr[1].light = in_stack_00000018;
        this_ptr->vertex_buffer_ptr[1].color = in_stack_00000010;
        this_ptr->vertex_buffer_ptr[1].fog = (float)pCVar7;
        this_ptr->vertex_buffer_ptr[1].w_recip = (float)pCVar8;
        this_ptr->vertex_buffer_ptr[2].light = in_stack_00000018;
        this_ptr->vertex_buffer_ptr[2].color = in_stack_00000010;
        this_ptr->vertex_buffer_ptr[2].fog = (float)pCVar7;
        this_ptr->vertex_buffer_ptr[2].w_recip = (float)pCVar8;
        this_ptr->vertex_buffer_ptr[3].light = in_stack_00000018;
        this_ptr->vertex_buffer_ptr[3].color = in_stack_00000010;
        this_ptr->vertex_buffer_ptr[3].fog = (float)pCVar7;
        this_ptr->vertex_buffer_ptr[3].w_recip = (float)pCVar8;
        engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                  (this_ptr,&DAT_030d4fd0);
      }
      pCVar7 = (CDemonRenderer *)((int)&this_ptr->vertex_buffer_ptr + 1);
      iVar1 = iVar1 + 400;
    } while ((int)pCVar7 < 100);
    input_01 = (CVector3i *)((int)&input_01->x + 1);
    local_1c = local_1c + 4;
  } while ((int)input_01 < 100);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1);
  return;
}


// Assembly code:
// 00547fc0: PUSH EBX
//   Label: core_path.cpp_FUN_00547fc0
// 00547fc1: PUSH ESI
// 00547fc2: PUSH EDI
// 00547fc3: PUSH EBP
// 00547fc4: MOV EBP,ESP
// 00547fc6: SUB ESP,0x60
// 00547fc9: AND ESP,0xfffffff8
// 00547fcc: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00547fd2: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00547fd3: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00547fd8: ADD ESP,0x4
// 00547fdb: TEST EAX,EAX
// 00547fdd: JZ 0x00547fe6
//   XREF to: 00547fe6 (CONDITIONAL_JUMP)
// 00547fdf: MOV ESP,EBP
// 00547fe1: POP EBP
// 00547fe2: POP EDI
// 00547fe3: POP ESI
// 00547fe4: POP EBX
// 00547fe5: RET
// 00547fe6: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00547fe6
//   XREF to: Stack[0x4] (READ)
// 00547fe9: FILD dword ptr [EAX + 0x24]
// 00547fec: FMUL float ptr [0x03277d48]
//   XREF to: 03277d48 (READ)
// 00547ff2: XOR ECX,ECX
// 00547ff4: FADD float ptr [0x03277d24]
//   XREF to: 03277d24 (READ)
// 00547ffa: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 00547ffe: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x64] (WRITE)
// 00548002: FILD dword ptr [EAX + 0x2c]
// 00548005: FMUL float ptr [0x03277d50]
//   XREF to: 03277d50 (READ)
// 0054800b: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x64] (DATA)
// 0054800f: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00548015: PUSH EAX
// 00548016: FADD float ptr [0x03277d2c]
//   XREF to: 03277d2c (READ)
// 0054801c: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0054801d: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x5c] (WRITE)
// 00548021: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00548026: ADD ESP,0x8
// 00548029: PUSH 0x680bb0
//   XREF to: 00680bb0 (DATA)
// 0054802e: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00548034: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00548035: MOV EDI,0x4
// 0054803a: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0054803f: MOV EDX,0x1
// 00548044: MOV ESI,0x2
// 00548049: ADD ESP,0x8
// 0054804c: MOV dword ptr [0x030d4fd4],EDI
//   XREF to: 030d4fd4 (WRITE)
// 00548052: XOR EAX,EAX
// 00548054: MOV EDI,0x800000
//   XREF to: 00800000 (DATA)
// 00548059: MOV [0x030d4fd8],EAX
//   XREF to: 030d4fd8 (WRITE)
// 0054805e: MOV [0x030d4fdc],EAX
//   XREF to: 030d4fdc (WRITE)
// 00548063: MOV [0x030d4fe0],EAX
//   XREF to: 030d4fe0 (WRITE)
// 00548068: MOV [0x030d4fe4],EAX
//   XREF to: 030d4fe4 (WRITE)
// 0054806d: MOV [0x030d4fe8],EAX
//   XREF to: 030d4fe8 (WRITE)
// 00548072: MOV dword ptr [0x030d4ff4],EDX
//   XREF to: 030d4ff4 (WRITE)
// 00548078: MOV dword ptr [0x030d5000],ESI
//   XREF to: 030d5000 (WRITE)
// 0054807e: PUSH EAX
// 0054807f: MOV EDX,0x3
// 00548084: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0054808a: MOV dword ptr [0x030d4fec],EDI
//   XREF to: 030d4fec (WRITE)
// 00548090: MOV dword ptr [0x030d4ff0],EDI
//   XREF to: 030d4ff0 (WRITE)
// 00548096: MOV dword ptr [0x030d4ff8],EDI
//   XREF to: 030d4ff8 (WRITE)
// 0054809c: MOV dword ptr [0x030d4ffc],EDI
//   XREF to: 030d4ffc (WRITE)
// 005480a2: MOV dword ptr [0x030d5004],EDI
//   XREF to: 030d5004 (WRITE)
// 005480a8: MOV dword ptr [0x030d5008],EDI
//   XREF to: 030d5008 (WRITE)
// 005480ae: MOV dword ptr [0x030d5010],EDI
//   XREF to: 030d5010 (WRITE)
// 005480b4: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005480b5: MOV dword ptr [0x030d5014],EDI
//   XREF to: 030d5014 (WRITE)
// 005480bb: MOV dword ptr [0x030d500c],EDX
//   XREF to: 030d500c (WRITE)
// 005480c1: CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
// 005480c6: ADD ESP,0x8
// 005480c9: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005480cc: SHL EAX,0x8
// 005480cf: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005480d3: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005480d6: SHL EAX,0x8
// 005480d9: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005480dd: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005480e0: SHL EAX,0x8
// 005480e3: XOR EDI,EDI
// 005480e5: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005480e9: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005480ec: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x58] (WRITE)
// 005480f0: SHL EAX,0x8
// 005480f3: MOV dword ptr [ESP + 0x44],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 005480f7: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005480fb: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_005480fb
//   XREF to: Stack[-0x2c] (READ)
// 005480ff: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00548102: XOR EDX,EDX
// 00548104: ADD EAX,ECX
// 00548106: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0054810a: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0054810e: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_0054810e
//   XREF to: Stack[-0x18] (READ)
// 00548112: MOV EBX,dword ptr [EAX + 0x9c70]
// 00548118: CMP EBX,0xfffffc19
// 0054811e: JGE 0x0054816d
//   XREF to: 0054816d (CONDITIONAL_JUMP)
// 00548120: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_00548120
//   XREF to: Stack[-0x50] (READ)
// 00548124: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 00548128: INC EAX
// 00548129: ADD EDI,0x190
// 0054812f: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00548133: MOV dword ptr [ESP + 0x58],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00548137: CMP EAX,0x64
// 0054813a: JL 0x0054810e
//   XREF to: 0054810e (CONDITIONAL_JUMP)
// 0054813c: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x58] (READ)
// 00548140: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x2c] (READ)
// 00548144: INC EBX
// 00548145: ADD ECX,0x4
// 00548148: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x58] (WRITE)
// 0054814c: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00548150: CMP EBX,0x64
// 00548153: JL 0x005480fb
//   XREF to: 005480fb (CONDITIONAL_JUMP)
// 00548155: PUSH 0x1
// 00548157: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0054815d: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0054815e: CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
// 00548163: ADD ESP,0x8
// 00548166: MOV ESP,EBP
// 00548168: POP EBP
// 00548169: POP EDI
// 0054816a: POP ESI
// 0054816b: POP EBX
// 0054816c: RET
// 0054816d: CMP EBX,0x3e7
//   Label: LAB_0054816d
// 00548173: JG 0x00548120
//   XREF to: 00548120 (CONDITIONAL_JUMP)
// 00548175: FLD float ptr [0x0063ea38]
//   XREF to: 0063ea38 (READ)
// 0054817b: FLD float ptr [0x03277d48]
//   XREF to: 03277d48 (READ)
// 00548181: FMUL ST1
// 00548183: FLD float ptr [0x03277d4c]
//   XREF to: 03277d4c (READ)
// 00548189: FMUL ST2
// 0054818b: FLD float ptr [0x03277d50]
//   XREF to: 03277d50 (READ)
// 00548191: FMULP ST3
// 00548193: FLD float ptr [0x03277d28]
//   XREF to: 03277d28 (READ)
// 00548199: LEA EDI,[ESP + 0x24]
//   XREF to: Stack[-0x4c] (DATA)
// 0054819d: MOV EAX,dword ptr [EAX + 0x30]
// 005481a0: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x58] (DATA)
// 005481a4: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005481a8: FLD double ptr [0x0063ea40]
//   XREF to: 0063ea40 (READ)
// 005481ae: FXCH
// 005481b0: FMUL ST1
// 005481b2: MOVSD ES:EDI,ESI
// 005481b3: MOVSD ES:EDI,ESI
// 005481b4: MOVSD ES:EDI,ESI
// 005481b5: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x4c] (READ)
// 005481b9: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005481bd: FXCH ST3
// 005481bf: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x40] (WRITE)
// 005481c3: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005481c7: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x48] (READ)
// 005481cb: FMUL float ptr [ESP + 0x30]
//   XREF to: Stack[-0x40] (READ)
// 005481cf: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005481d3: FXCH ST2
// 005481d5: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x3c] (WRITE)
// 005481d9: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005481dd: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x44] (READ)
// 005481e1: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x3c] (READ)
// 005481e5: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005481e9: FXCH ST4
// 005481eb: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x38] (WRITE)
// 005481ef: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005481f3: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x38] (READ)
// 005481f7: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005481fd: FXCH ST2
// 005481ff: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00548204: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 00548207: MOV EAX,ESP
// 00548209: FXCH ST2
// 0054820b: FADDP ST3,ST0
// 0054820d: PUSH EAX
// 0054820e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00548213: FXCH ST2
// 00548215: FADDP
// 00548217: FXCH
// 00548219: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x68] (WRITE)
// 0054821d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00548222: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x6c] (WRITE)
// 00548226: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00548228: PUSH EAX
// 00548229: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0054822e: ADD ESP,0x8
// 00548231: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 00548234: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00548238: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0054823e: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 00548242: MOV EAX,ESP
// 00548244: FLD ST0
// 00548246: FADD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x40] (READ)
// 0054824a: PUSH EAX
// 0054824b: FSTP ST1
// 0054824d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00548252: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x70] (WRITE)
// 00548256: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00548258: ADD EAX,0x30
// 0054825b: PUSH EAX
// 0054825c: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00548261: ADD ESP,0x8
// 00548264: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 00548268: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054826c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00548272: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 00548276: MOV EAX,ESP
// 00548278: FLD ST0
// 0054827a: FADD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x38] (READ)
// 0054827e: PUSH EAX
// 0054827f: FSTP ST1
// 00548281: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00548286: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x68] (WRITE)
// 0054828a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0054828c: ADD EAX,0x60
// 0054828f: PUSH EAX
// 00548290: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00548295: ADD ESP,0x8
// 00548298: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 0054829b: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054829f: MOV EDX,ESP
// 005482a1: FILD dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005482a5: FLD ST0
// 005482a7: FSUB float ptr [ESP + 0x30]
//   XREF to: Stack[-0x40] (READ)
// 005482ab: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005482b0: FSTP ST1
// 005482b2: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005482b7: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 005482ba: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005482bc: PUSH EDX
// 005482bd: ADD EAX,0x90
// 005482c2: PUSH EAX
// 005482c3: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005482c8: ADD ESP,0x8
// 005482cb: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005482d0: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005482d2: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x20] (READ)
// 005482d6: MOV dword ptr [EDX + 0x20],ECX
// 005482d9: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005482db: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x28] (READ)
// 005482df: MOV dword ptr [EDX + 0x24],ECX
// 005482e2: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005482e4: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x24] (READ)
// 005482e8: MOV dword ptr [EDX + 0x28],ECX
// 005482eb: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005482ed: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 005482f1: MOV dword ptr [EDX + 0x2c],ECX
// 005482f4: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005482f6: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x20] (READ)
// 005482fa: MOV dword ptr [EDX + 0x50],ECX
// 005482fd: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005482ff: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x28] (READ)
// 00548303: MOV dword ptr [EDX + 0x54],ECX
// 00548306: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00548308: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x24] (READ)
// 0054830c: MOV dword ptr [EDX + 0x58],ECX
// 0054830f: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00548311: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 00548315: MOV dword ptr [EDX + 0x5c],ECX
// 00548318: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0054831a: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x20] (READ)
// 0054831e: MOV dword ptr [EDX + 0x80],ECX
// 00548324: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00548326: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x28] (READ)
// 0054832a: MOV dword ptr [EDX + 0x84],ECX
// 00548330: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00548332: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x24] (READ)
// 00548336: MOV dword ptr [EDX + 0x88],ECX
// 0054833c: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0054833e: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 00548342: MOV dword ptr [EDX + 0x8c],ECX
// 00548348: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0054834a: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x20] (READ)
// 0054834e: MOV dword ptr [EDX + 0xb0],ECX
// 00548354: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00548356: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x28] (READ)
// 0054835a: MOV dword ptr [EDX + 0xb4],ECX
// 00548360: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00548362: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x24] (READ)
// 00548366: MOV dword ptr [EDX + 0xb8],ECX
// 0054836c: PUSH 0x30d4fd0
//   XREF to: 030d4fd0 (DATA)
// 00548371: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00548373: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x1c] (READ)
// 00548377: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00548378: MOV dword ptr [EDX + 0xbc],ECX
// 0054837e: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
//   XREF to: 0048bba0 (UNCONDITIONAL_CALL)
// 00548383: ADD ESP,0x8
// 00548386: JMP 0x00548120
//   XREF to: 00548120 (UNCONDITIONAL_JUMP)
