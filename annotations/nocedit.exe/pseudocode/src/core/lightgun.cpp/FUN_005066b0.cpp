// Name: core_lightgun.cpp_FUN_005066b0
// Address: 005066b0
// Address Range: [[005066b0, 005066ef] [005066f1, 00506a4d]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_005066b0()
// Globals:
//   double DOUBLE_0063151e = 18
//   double DOUBLE_00631526 = 0.100000000000000
//   double g_CLightConeObj = 0.015625
//   undefined4 DAT_00660a44
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonRenderer g_CDemonRendererInstance
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_fire.cpp_CFireEffect_FUN_004c7f20
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_weapon_lightgun.cpp_FUN_005066b0(undefined4 param_1) */

void core_lightgun_cpp_FUN_005066b0(void)

{
  float fVar1;
  int iVar2;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float unaff_ESI;
  float unaff_EDI;
  CDemonActor *in_stack_00000004;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_40;
  CVector3f CStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 == 0) {
    input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004)
    ;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,&CStack_3c,input_local_point);
    CStack_50.z = in_stack_00000004[2].orient.heading;
    CStack_50.x = 0.0;
    CStack_50.y = 0.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
              (in_stack_00000004,(CVector3f *)&fStack_14,&CStack_50);
    fStack_40 = -unaff_EBP;
    CStack_3c.x = -unaff_EDI;
    CStack_3c.y = -unaff_ESI;
    fStack_28 = CStack_3c.z + unaff_EBP;
    fStack_24 = fStack_30 + unaff_EDI;
    fStack_20 = fStack_2c + unaff_ESI;
    if (&fStack_20 != &fStack_40) {
      fStack_1c = fStack_40;
      fStack_18 = CStack_3c.x;
      fStack_14 = CStack_3c.y;
    }
    fVar1 = SQRT(fStack_14 * fStack_14 + fStack_1c * fStack_1c + fStack_18 * fStack_18);
    if (fVar1 <= 0.0) {
      fStack_18 = 0.0;
      fStack_1c = 0.0;
      fStack_14 = 0.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      fStack_1c = fStack_1c * fVar1;
      fStack_18 = fStack_18 * fVar1;
      fStack_14 = fStack_14 * fVar1;
    }
    fpatan((float10)DOUBLE_0063151e / (float10)_DAT_00660a44,(float10)1);
    core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
    if (in_stack_00000004[4].location.position.z != 0.0) {
      iVar2 = 1;
      in_stack_00000004[4].location.position.z = 0.0;
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
      } while (iVar2 < 10);
      CStack_50.y = fStack_1c - fStack_28;
      fStack_2c = fStack_20 - fStack_2c;
      CStack_50.z = fStack_18 - fStack_24;
      fVar1 = SQRT(CStack_50.z * CStack_50.z + fStack_2c * fStack_2c + CStack_50.y * CStack_50.y);
      if (0.0 < fVar1) {
        fVar1 = 1.0 / fVar1;
        CStack_50.x = fStack_2c * fVar1;
        CStack_50.y = CStack_50.y * fVar1;
        CStack_50.z = CStack_50.z * fVar1;
      }
      else {
        CStack_50.y = 0.0;
        CStack_50.x = 0.0;
        CStack_50.z = 0.0;
      }
      CStack_5c.z = (float)in_stack_00000004[4].location.area_id * (float)g_CLightConeObj;
      CStack_5c.x = CStack_50.x * CStack_5c.z;
      CStack_5c.y = CStack_50.y * CStack_5c.z;
      CStack_5c.z = CStack_50.z * CStack_5c.z;
      if (&CStack_50 != &CStack_5c) {
        CStack_50.x = CStack_5c.x;
        CStack_50.y = CStack_5c.y;
        CStack_50.z = CStack_5c.z;
      }
      iVar2 = 0;
      do {
        core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
      return;
    }
  }
  return;
}


// Assembly code:
// 005066b0: PUSH EBX
//   Label: core_lightgun.cpp_FUN_005066b0
// 005066b1: PUSH ESI
// 005066b2: PUSH EDI
// 005066b3: PUSH EBP
// 005066b4: MOV EBP,ESP
// 005066b6: SUB ESP,0x8c
// 005066bc: AND ESP,0xfffffff8
// 005066bf: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005066c2: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005066c8: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005066c9: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005066ce: ADD ESP,0x4
// 005066d1: TEST EAX,EAX
// 005066d3: JZ 0x005066f1
//   XREF to: 005066f1 (CONDITIONAL_JUMP)
// 005066d5: LEA EAX,[EAX]
// 005066db: LEA EDX,[EDX]
//   XREF to: 02c6d578 (DATA)
// 005066de: MOV EBX,EBX
// 005066e0: MOV ESP,EBP
//   Label: LAB_005066e0
// 005066e2: POP EBP
// 005066e3: POP EDI
// 005066e4: POP ESI
// 005066e5: POP EBX
// 005066e6: LEA EAX,[EAX]
// 005066ec: LEA EDX,[EDX]
//   XREF to: 02c6d578 (DATA)
// 005066f1: LEA EAX,[ESP + 0xc]
//   Label: LAB_005066f1
//   XREF to: Stack[-0x94] (DATA)
// 005066f5: PUSH EAX
// 005066f6: MOV EBX,dword ptr [ESI + 0x154]
// 005066fc: PUSH ESI
// 005066fd: CALL dword ptr [EBX + 0xf4]
// 00506703: ADD ESP,0x8
// 00506706: PUSH EAX
// 00506707: LEA EAX,[ESP + 0x58]
// 0050670b: PUSH EAX
// 0050670c: PUSH ESI
// 0050670d: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00506712: ADD ESP,0xc
// 00506715: MOV EAX,dword ptr [ESI + 0x2e8]
// 0050671b: MOV dword ptr [ESP + 0x44],EAX
// 0050671f: LEA EAX,[ESP + 0x3c]
// 00506723: PUSH EAX
// 00506724: LEA EAX,[ESP + 0x7c]
// 00506728: PUSH EAX
// 00506729: LEA EBX,[ESP + 0x74]
// 0050672d: XOR ECX,ECX
// 0050672f: PUSH ESI
// 00506730: MOV dword ptr [ESP + 0x48],ECX
// 00506734: MOV dword ptr [ESP + 0x4c],ECX
// 00506738: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0050673d: ADD ESP,0xc
// 00506740: LEA EAX,[ESP + 0x48]
// 00506744: FLD float ptr [ESP + 0x54]
// 00506748: FLD float ptr [ESP + 0x58]
// 0050674c: FLD float ptr [ESP + 0x5c]
// 00506750: FLD float ptr [ESP + 0x78]
// 00506754: FLD float ptr [ESP + 0x7c]
// 00506758: FLD float ptr [ESP + 0x80]
// 0050675f: FXCH ST2
// 00506761: FCHS
// 00506763: FXCH
// 00506765: FCHS
// 00506767: FXCH ST2
// 00506769: FCHS
// 0050676b: FXCH
// 0050676d: FSTP float ptr [ESP + 0x48]
// 00506771: FXCH
// 00506773: FSTP float ptr [ESP + 0x4c]
// 00506777: FSTP float ptr [ESP + 0x50]
// 0050677b: FXCH ST2
// 0050677d: FADD float ptr [ESP + 0x78]
// 00506781: FXCH
// 00506783: FADD float ptr [ESP + 0x7c]
// 00506787: FXCH ST2
// 00506789: FADD float ptr [ESP + 0x80]
// 00506790: FXCH
// 00506792: FSTP float ptr [ESP + 0x60]
// 00506796: FXCH
// 00506798: FSTP float ptr [ESP + 0x64]
// 0050679c: FSTP float ptr [ESP + 0x68]
// 005067a0: CMP EBX,EAX
// 005067a2: JZ 0x005067bc
//   XREF to: 005067bc (CONDITIONAL_JUMP)
// 005067a4: MOV EAX,dword ptr [ESP + 0x48]
// 005067a8: MOV dword ptr [ESP + 0x6c],EAX
// 005067ac: MOV EAX,dword ptr [ESP + 0x4c]
// 005067b0: MOV dword ptr [ESP + 0x70],EAX
// 005067b4: MOV EAX,dword ptr [ESP + 0x50]
// 005067b8: MOV dword ptr [ESP + 0x74],EAX
// 005067bc: FLD float ptr [ESP + 0x70]
//   Label: LAB_005067bc
// 005067c0: FMUL ST0
// 005067c2: FLD float ptr [ESP + 0x6c]
// 005067c6: FMUL ST0
// 005067c8: FADDP
// 005067ca: FLD float ptr [ESP + 0x74]
// 005067ce: FMUL ST0
// 005067d0: FADDP
// 005067d2: FSQRT
// 005067d4: FST float ptr [ESP]
// 005067d7: FLDZ
// 005067d9: FCOMPP
// 005067db: FNSTSW AX
// 005067dd: SAHF
// 005067de: JNC 0x005069ef
//   XREF to: 005069ef (CONDITIONAL_JUMP)
// 005067e4: FLD1
// 005067e6: FLD float ptr [ESP + 0x6c]
// 005067ea: FXCH
// 005067ec: FDIV float ptr [ESP]
// 005067ef: FXCH
// 005067f1: FMUL ST1
// 005067f3: FLD float ptr [ESP + 0x70]
// 005067f7: FMUL ST2
// 005067f9: FLD float ptr [ESP + 0x74]
// 005067fd: FMULP ST3
// 005067ff: FXCH
// 00506801: FSTP float ptr [ESP + 0x6c]
// 00506805: FSTP float ptr [ESP + 0x70]
// 00506809: FSTP float ptr [ESP + 0x74]
// 0050680d: FLD float ptr [0x00660a44]
//   Label: LAB_0050680d
//   XREF to: 00660a44 (READ)
// 00506813: FDIVR double ptr [0x0063151e]
//   XREF to: 0063151e (READ)
// 00506819: FLD1
// 0050681b: FPATAN
// 0050681d: FSTP float ptr [ESP + 0x4]
// 00506821: PUSH dword ptr [ESP + 0x4]
// 00506825: PUSH 0xb4
// 0050682a: PUSH 0xff
// 0050682f: PUSH 0xff
// 00506834: LEA EAX,[ESP + 0x70]
// 00506838: PUSH 0x3f800000
// 0050683d: PUSH EAX
// 0050683e: LEA EAX,[ESP + 0x6c]
// 00506842: PUSH EAX
// 00506843: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 00506849: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 0050684a: CALL core_fire.cpp_CFireEffect_FUN_004c7f20
//   XREF to: 004c7f20 (UNCONDITIONAL_CALL)
// 0050684f: MOV EBX,dword ptr [ESI + 0x588]
// 00506855: ADD ESP,0x20
// 00506858: TEST EBX,EBX
// 0050685a: JZ 0x005066e0
//   XREF to: 005066e0 (CONDITIONAL_JUMP)
// 00506860: MOV EBX,0x1
// 00506865: MOV dword ptr [ESI + 0x588],0x0
// 0050686f: FLD float ptr [ESP + 0x4]
//   Label: LAB_0050686f
// 00506873: FMUL double ptr [0x00631526]
//   XREF to: 00631526 (READ)
// 00506879: MOV dword ptr [ESP + 0x88],EBX
// 00506880: FILD dword ptr [ESP + 0x88]
// 00506887: FMULP
// 00506889: SUB ESP,0x4
// 0050688c: FSTP float ptr [ESP]
// 0050688f: PUSH 0xb4
// 00506894: PUSH 0xff
// 00506899: PUSH 0xff
// 0050689e: LEA EAX,[ESP + 0x70]
// 005068a2: PUSH 0x3f800000
// 005068a7: PUSH EAX
// 005068a8: LEA EAX,[ESP + 0x6c]
// 005068ac: PUSH EAX
// 005068ad: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 005068b3: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 005068b4: INC EBX
// 005068b5: CALL core_fire.cpp_CFireEffect_FUN_004c7f20
//   XREF to: 004c7f20 (UNCONDITIONAL_CALL)
// 005068ba: ADD ESP,0x20
// 005068bd: CMP EBX,0xa
// 005068c0: JL 0x0050686f
//   XREF to: 0050686f (CONDITIONAL_JUMP)
// 005068c2: FLD float ptr [ESP + 0x60]
// 005068c6: FLD float ptr [ESP + 0x64]
// 005068ca: FSUB float ptr [ESP + 0x58]
// 005068ce: FXCH
// 005068d0: FSUB float ptr [ESP + 0x54]
// 005068d4: FXCH
// 005068d6: FST float ptr [ESP + 0x34]
// 005068da: FMUL float ptr [ESP + 0x34]
// 005068de: FXCH
// 005068e0: FST float ptr [ESP + 0x30]
// 005068e4: FMUL float ptr [ESP + 0x30]
// 005068e8: FLD float ptr [ESP + 0x68]
// 005068ec: MOV EAX,dword ptr [ESP + 0x54]
// 005068f0: FSUB float ptr [ESP + 0x5c]
// 005068f4: MOV dword ptr [ESP + 0x18],EAX
// 005068f8: FSTP float ptr [ESP + 0x38]
// 005068fc: FADDP
// 005068fe: MOV EAX,dword ptr [ESP + 0x58]
// 00506902: FLD float ptr [ESP + 0x38]
// 00506906: FMUL ST0
// 00506908: MOV dword ptr [ESP + 0x1c],EAX
// 0050690c: MOV EAX,dword ptr [ESP + 0x5c]
// 00506910: FADDP
// 00506912: MOV dword ptr [ESP + 0x20],EAX
// 00506916: FSQRT
// 00506918: FST float ptr [ESP + 0x8]
// 0050691c: FLDZ
// 0050691e: FCOMPP
// 00506920: FNSTSW AX
// 00506922: SAHF
// 00506923: JC 0x00506a02
//   XREF to: 00506a02 (CONDITIONAL_JUMP)
// 00506929: XOR EAX,EAX
// 0050692b: MOV dword ptr [ESP + 0x34],EAX
// 0050692f: MOV dword ptr [ESP + 0x30],EAX
// 00506933: MOV dword ptr [ESP + 0x38],EAX
// 00506937: FLD float ptr [ESI + 0x58c]
//   Label: LAB_00506937
// 0050693d: FMUL double ptr [0x0063152e]
//   XREF to: 0063152e (READ)
// 00506943: FLD float ptr [ESP + 0x30]
// 00506947: FXCH
// 00506949: FSTP float ptr [ESP + 0x84]
// 00506950: FMUL float ptr [ESP + 0x84]
// 00506957: FLD float ptr [ESP + 0x34]
// 0050695b: FMUL float ptr [ESP + 0x84]
// 00506962: FLD float ptr [ESP + 0x38]
// 00506966: FMUL float ptr [ESP + 0x84]
// 0050696d: LEA EAX,[ESP + 0x24]
// 00506971: LEA EBX,[ESP + 0x30]
// 00506975: FXCH ST2
// 00506977: FSTP float ptr [ESP + 0x24]
// 0050697b: FSTP float ptr [ESP + 0x28]
// 0050697f: FSTP float ptr [ESP + 0x2c]
// 00506983: CMP EBX,EAX
// 00506985: JNZ 0x00506a31
//   XREF to: 00506a31 (CONDITIONAL_JUMP)
// 0050698b: XOR EBX,EBX
//   Label: LAB_0050698b
// 0050698d: XOR ESI,ESI
// 0050698f: PUSH 0x3333
//   Label: LAB_0050698f
// 00506994: PUSH ESI
// 00506995: PUSH 0x4000
// 0050699a: PUSH 0x8000
// 0050699f: PUSH ESI
// 005069a0: LEA EAX,[ESP + 0x2c]
// 005069a4: PUSH EAX
// 005069a5: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 005069ab: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 005069ac: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 005069b1: ADD ESP,0x1c
// 005069b4: INC EBX
// 005069b5: FLD float ptr [ESP + 0x18]
// 005069b9: FLD float ptr [ESP + 0x1c]
// 005069bd: FLD float ptr [ESP + 0x20]
// 005069c1: FXCH ST2
// 005069c3: FADD float ptr [ESP + 0x30]
// 005069c7: FXCH
// 005069c9: FADD float ptr [ESP + 0x34]
// 005069cd: FXCH ST2
// 005069cf: FADD float ptr [ESP + 0x38]
// 005069d3: FXCH
// 005069d5: FSTP float ptr [ESP + 0x18]
// 005069d9: FXCH
// 005069db: FSTP float ptr [ESP + 0x1c]
// 005069df: FSTP float ptr [ESP + 0x20]
// 005069e3: CMP EBX,0x40
// 005069e6: JL 0x0050698f
//   XREF to: 0050698f (CONDITIONAL_JUMP)
// 005069e8: MOV ESP,EBP
// 005069ea: POP EBP
// 005069eb: POP EDI
// 005069ec: POP ESI
// 005069ed: POP EBX
// 005069ee: RET
// 005069ef: XOR EDI,EDI
//   Label: LAB_005069ef
// 005069f1: MOV dword ptr [ESP + 0x70],EDI
// 005069f5: MOV dword ptr [ESP + 0x6c],EDI
// 005069f9: MOV dword ptr [ESP + 0x74],EDI
// 005069fd: JMP 0x0050680d
//   XREF to: 0050680d (UNCONDITIONAL_JUMP)
// 00506a02: FLD1
//   Label: LAB_00506a02
// 00506a04: FLD float ptr [ESP + 0x30]
// 00506a08: FXCH
// 00506a0a: FDIV float ptr [ESP + 0x8]
// 00506a0e: FXCH
// 00506a10: FMUL ST1
// 00506a12: FLD float ptr [ESP + 0x34]
// 00506a16: FMUL ST2
// 00506a18: FLD float ptr [ESP + 0x38]
// 00506a1c: FMULP ST3
// 00506a1e: FXCH
// 00506a20: FSTP float ptr [ESP + 0x30]
// 00506a24: FSTP float ptr [ESP + 0x34]
// 00506a28: FSTP float ptr [ESP + 0x38]
// 00506a2c: JMP 0x00506937
//   XREF to: 00506937 (UNCONDITIONAL_JUMP)
// 00506a31: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00506a31
// 00506a35: MOV dword ptr [ESP + 0x30],EAX
// 00506a39: MOV EAX,dword ptr [ESP + 0x28]
// 00506a3d: MOV dword ptr [ESP + 0x34],EAX
// 00506a41: MOV EAX,dword ptr [ESP + 0x2c]
// 00506a45: MOV dword ptr [ESP + 0x38],EAX
// 00506a49: JMP 0x0050698b
//   XREF to: 0050698b (UNCONDITIONAL_JUMP)
