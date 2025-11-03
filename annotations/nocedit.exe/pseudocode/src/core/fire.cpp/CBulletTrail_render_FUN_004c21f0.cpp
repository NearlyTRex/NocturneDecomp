// Name: core_fire.cpp_CBulletTrail_render_FUN_004c21f0
// Address: 004c21f0
// Address Range: [[004c21f0, 004c2400]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c7393 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00629cf3 = 0.2000000
//   double DOUBLE_00629cfb = 0.0100000000000000
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int iVar4;
  float10 fVar5;
  double dVar6;
  float in_stack_ffffff90;
  CVector3i local_6c;
  float local_60;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_3c [12];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int iStack_1c;
  int local_18;
  
  local_60 = *(float *)(this_ptr->field0_0x0 + 0xc) - *(float *)this_ptr->field0_0x0;
  local_5c.x = *(float *)(this_ptr->field0_0x0 + 0x10) - *(float *)(this_ptr->field0_0x0 + 4);
  local_5c.y = *(float *)(this_ptr->field0_0x0 + 0x14) - *(float *)(this_ptr->field0_0x0 + 8);
  iVar4 = *(int *)(this_ptr->field0_0x0 + 0x18);
  local_6c.x = (int)(*(float *)(iVar4 + 0x5684) - *(float *)(iVar4 + 0x5678));
  local_6c.y = (int)(*(float *)(iVar4 + 0x5688) - *(float *)(iVar4 + 0x567c));
  local_6c.z = (int)(*(float *)(iVar4 + 0x568c) - *(float *)(iVar4 + 0x5680));
  fVar3 = SQRT(local_5c.y * local_5c.y + local_60 * local_60 + local_5c.x * local_5c.x) -
          (float)local_6c.z;
  if (0.0 < fVar3) {
    fVar2 = *(float *)(this_ptr->field0_0x0 + 0x1c);
    local_20 = 2.8026e-45;
    if (0.0 < fVar2) {
      fVar5 = (float10)fVar3 / (float10)*(float *)(this_ptr->field0_0x0 + 0x1c);
      dVar6 = crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44(2,CONCAT22((short)((uint)iVar4 >> 0x10),
                                                     (ushort)(0.0 < fVar2) << 8 |
                                                     (ushort)NAN(fVar2) << 10 |
                                                     (ushort)(fVar2 == 0.0) << 0xe)));
      iStack_1c = (int)((ulonglong)dVar6 >> 0x20);
      iVar4 = (int)ROUND(fVar5);
      if ((iStack_1c <= iVar4) && (iStack_1c = iVar4, 100 < iVar4)) {
        iStack_1c = 100;
      }
    }
    local_20 = (float)iStack_1c;
    local_48 = 1.0 / local_20;
    local_50 = local_5c.x * local_48;
    local_4c = local_5c.y * local_48;
    local_48 = local_5c.z * local_48;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
              ((CVector3f *)&stack0xffffff8c,&local_5c);
    iVar4 = 0;
    if (0 < local_18) {
      iVar1 = local_18 + -1;
      do {
        while (local_20 = (float)iVar4,
              (float)DOUBLE_00629cfb < ((float)iVar4 * FLOAT_00629cf3) / (float)iVar1) {
          local_28 = local_4c * local_20;
          local_24 = local_48 * local_20;
          local_20 = local_44 * local_20;
          local_3c._8_4_ = *(float *)this_ptr->field0_0x0 + local_28;
          local_30 = *(float *)(this_ptr->field0_0x0 + 4) + local_24;
          local_2c = *(float *)(this_ptr->field0_0x0 + 8) + local_20;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                    (g_CDemonRendererPtr,(CVector3f *)(local_3c + 8));
          local_3c._0_4_ = 0;
          local_3c._4_4_ = 0;
          local_3c._8_4_ = 0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr,&local_6c,(CVector3i *)local_3c);
          fVar5 = (float10)in_stack_ffffff90;
          crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
          core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                    (*(CKeyFramedModel **)(this_ptr->field0_0x0 + 0x18),
                     (CKeyFramedModelInstance *)0x0,0,(int)ROUND(fVar5));
          local_6c.x = (int)g_CDemonRendererPtr;
          in_stack_ffffff90 = 6.992413e-39;
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          iVar4 = iVar4 + 1;
          if (unaff_EBX <= iVar4) {
            return;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_18);
    }
  }
  return;
}


// Assembly code:
// 004c21f0: PUSH EBX
//   Label: core_fire.cpp_CBulletTrail_render_FUN_004c21f0
// 004c21f1: PUSH ESI
// 004c21f2: PUSH EDI
// 004c21f3: PUSH EBP
// 004c21f4: MOV EBP,ESP
// 004c21f6: SUB ESP,0x70
// 004c21f9: AND ESP,0xfffffff8
// 004c21fc: MOV EBX,dword ptr [EBP + 0x14]
// 004c21ff: LEA EAX,[EBX + 0xc]
// 004c2202: FLD float ptr [EAX]
// 004c2204: FSUB float ptr [EBX]
// 004c2206: FSTP float ptr [ESP + 0x20]
// 004c220a: FLD float ptr [EAX + 0x4]
// 004c220d: FSUB float ptr [EBX + 0x4]
// 004c2210: FST float ptr [ESP + 0x24]
// 004c2214: FMUL float ptr [ESP + 0x24]
// 004c2218: FLD float ptr [ESP + 0x20]
// 004c221c: FMUL ST0
// 004c221e: FLD float ptr [EAX + 0x8]
// 004c2221: FSUB float ptr [EBX + 0x8]
// 004c2224: FXCH
// 004c2226: FADDP ST2,ST0
// 004c2228: FST float ptr [ESP + 0x28]
// 004c222c: FMUL float ptr [ESP + 0x28]
// 004c2230: FADDP
// 004c2232: FSQRT
// 004c2234: MOV EAX,dword ptr [EBX + 0x18]
// 004c2237: LEA ESI,[EAX + 0x5678]
// 004c223d: FLD float ptr [EAX + 0x5684]
// 004c2243: FSUB float ptr [ESI]
// 004c2245: FSTP float ptr [ESP + 0x14]
// 004c2249: FLD float ptr [EAX + 0x5688]
// 004c224f: FSUB float ptr [ESI + 0x4]
// 004c2252: FSTP float ptr [ESP + 0x18]
// 004c2256: FLD float ptr [EAX + 0x568c]
// 004c225c: FSUB float ptr [ESI + 0x8]
// 004c225f: FSTP float ptr [ESP + 0x1c]
// 004c2263: FSUB float ptr [ESP + 0x1c]
// 004c2267: FST float ptr [ESP + 0x4]
// 004c226b: FLDZ
// 004c226d: FCOMPP
// 004c226f: FNSTSW AX
// 004c2271: SAHF
// 004c2272: JNC 0x004c2339
//   XREF to: 004c2339 (CONDITIONAL_JUMP)
// 004c2278: FLD float ptr [EBX + 0x1c]
// 004c227b: MOV EDX,0x2
// 004c2280: FLDZ
// 004c2282: MOV dword ptr [ESP + 0x60],EDX
// 004c2286: FCOMPP
// 004c2288: FNSTSW AX
// 004c228a: SAHF
// 004c228b: JNC 0x004c22ad
//   XREF to: 004c22ad (CONDITIONAL_JUMP)
// 004c228d: FLD float ptr [ESP + 0x4]
// 004c2291: FDIV float ptr [EBX + 0x1c]
// 004c2294: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c2299: FISTP dword ptr [ESP + 0x60]
// 004c229d: MOV ECX,dword ptr [ESP + 0x60]
// 004c22a1: CMP ECX,EDX
// 004c22a3: JGE 0x004c2340
//   XREF to: 004c2340 (CONDITIONAL_JUMP)
// 004c22a9: MOV dword ptr [ESP + 0x60],EDX
// 004c22ad: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_004c22ad
// 004c22b1: FLD1
// 004c22b3: MOV dword ptr [ESP + 0x6c],EAX
// 004c22b7: FLD float ptr [ESP + 0x20]
// 004c22bb: FILD dword ptr [ESP + 0x6c]
// 004c22bf: FSTP float ptr [ESP + 0x5c]
// 004c22c3: FXCH
// 004c22c5: FDIV float ptr [ESP + 0x5c]
// 004c22c9: FXCH
// 004c22cb: FMUL ST1
// 004c22cd: FLD float ptr [ESP + 0x24]
// 004c22d1: FMUL ST2
// 004c22d3: LEA EAX,[ESP + 0x20]
// 004c22d7: FLD float ptr [ESP + 0x28]
// 004c22db: PUSH EAX
// 004c22dc: LEA EAX,[ESP + 0xc]
// 004c22e0: FMULP ST3
// 004c22e2: PUSH EAX
// 004c22e3: FXCH
// 004c22e5: FSTP float ptr [ESP + 0x34]
// 004c22e9: FSTP float ptr [ESP + 0x38]
// 004c22ed: FSTP float ptr [ESP + 0x3c]
// 004c22f1: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004c22f6: ADD ESP,0x8
// 004c22f9: MOV EDX,dword ptr [ESP + 0x60]
// 004c22fd: XOR ESI,ESI
// 004c22ff: TEST EDX,EDX
// 004c2301: JLE 0x004c2339
//   XREF to: 004c2339 (CONDITIONAL_JUMP)
// 004c2303: LEA EDI,[EDX + -0x1]
// 004c2306: MOV dword ptr [ESP + 0x6c],ESI
//   Label: LAB_004c2306
// 004c230a: FILD dword ptr [ESP + 0x6c]
// 004c230e: FST float ptr [ESP + 0x68]
// 004c2312: FMUL float ptr [0x00629cf3]
//   XREF to: 00629cf3 (READ)
// 004c2318: MOV dword ptr [ESP + 0x6c],EDI
// 004c231c: FILD dword ptr [ESP + 0x6c]
// 004c2320: FDIVP
// 004c2322: FST float ptr [ESP]
// 004c2325: FCOMP double ptr [0x00629cfb]
//   XREF to: 00629cfb (READ)
// 004c232b: FNSTSW AX
// 004c232d: SAHF
// 004c232e: JA 0x004c2356
//   XREF to: 004c2356 (CONDITIONAL_JUMP)
// 004c2330: MOV ECX,dword ptr [ESP + 0x60]
// 004c2334: INC ESI
// 004c2335: CMP ESI,ECX
// 004c2337: JL 0x004c2306
//   XREF to: 004c2306 (CONDITIONAL_JUMP)
// 004c2339: MOV ESP,EBP
//   Label: LAB_004c2339
// 004c233b: POP EBP
// 004c233c: POP EDI
// 004c233d: POP ESI
// 004c233e: POP EBX
// 004c233f: RET
// 004c2340: CMP ECX,0x64
//   Label: LAB_004c2340
// 004c2343: JLE 0x004c22ad
//   XREF to: 004c22ad (CONDITIONAL_JUMP)
// 004c2349: MOV dword ptr [ESP + 0x60],0x64
// 004c2351: JMP 0x004c22ad
//   XREF to: 004c22ad (UNCONDITIONAL_JUMP)
// 004c2356: FLD float ptr [ESP + 0x68]
//   Label: LAB_004c2356
// 004c235a: FLD float ptr [ESP + 0x2c]
// 004c235e: FMUL ST1
// 004c2360: FLD float ptr [ESP + 0x30]
// 004c2364: FMUL ST2
// 004c2366: FLD float ptr [ESP + 0x34]
// 004c236a: FMULP ST3
// 004c236c: LEA EAX,[ESP + 0x44]
// 004c2370: FXCH
// 004c2372: FSTP float ptr [ESP + 0x50]
// 004c2376: FSTP float ptr [ESP + 0x54]
// 004c237a: FSTP float ptr [ESP + 0x58]
// 004c237e: FLD float ptr [EBX]
// 004c2380: FADD float ptr [ESP + 0x50]
// 004c2384: PUSH EAX
// 004c2385: FSTP float ptr [ESP + 0x48]
// 004c2389: FLD float ptr [EBX + 0x4]
// 004c238c: FADD float ptr [ESP + 0x58]
// 004c2390: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2395: FSTP float ptr [ESP + 0x4c]
// 004c2399: FLD float ptr [EBX + 0x8]
// 004c239c: FADD float ptr [ESP + 0x5c]
// 004c23a0: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c23a1: FSTP float ptr [ESP + 0x54]
// 004c23a5: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c23aa: ADD ESP,0x8
// 004c23ad: XOR EDX,EDX
// 004c23af: LEA EAX,[ESP + 0x38]
// 004c23b3: MOV dword ptr [ESP + 0x38],EDX
// 004c23b7: PUSH EAX
// 004c23b8: LEA EAX,[ESP + 0xc]
// 004c23bc: MOV dword ptr [ESP + 0x40],EDX
// 004c23c0: PUSH EAX
// 004c23c1: MOV dword ptr [ESP + 0x48],EDX
// 004c23c5: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c23cb: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c23cc: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004c23d1: ADD ESP,0xc
// 004c23d4: FLD float ptr [ESP]
// 004c23d7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c23dc: FISTP dword ptr [ESP + 0x6c]
// 004c23e0: MOV ECX,dword ptr [ESP + 0x6c]
// 004c23e4: PUSH ECX
// 004c23e5: PUSH 0x0
// 004c23e7: PUSH 0x0
// 004c23e9: MOV EAX,dword ptr [EBX + 0x18]
// 004c23ec: PUSH EAX
// 004c23ed: CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   XREF to: 00477850 (UNCONDITIONAL_CALL)
// 004c23f2: ADD ESP,0x10
// 004c23f5: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c23fb: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c23fc: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
