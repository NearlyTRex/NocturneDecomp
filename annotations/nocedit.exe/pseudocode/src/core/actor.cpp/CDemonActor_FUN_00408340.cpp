// Name: core_actor.cpp_CDemonActor_FUN_00408340
// Address: 00408340
// Address Range: [[00408340, 004087a1]]
// Convention: __cdecl
// Signature: float core_actor.cpp_CDemonActor_FUN_00408340(SCollisionInfo * collision_info, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
// Cross-references:
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 0040969a [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150 (00409150) at 004091ca [UNCONDITIONAL_CALL]

#include "nocturne.h"

float __cdecl
core_actor_cpp_CDemonActor_FUN_00408340
          (SCollisionInfo *collision_info,CVector3f *ray_origin,CVector3f *ray_direction,
          CVector3f *out_normal)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  BADSPACEBASE *in_ESP;
  CVector3f local_60 [7];
  
  fVar1 = collision_info->cylinder_top_y * collision_info->cylinder_top_y;
  if (fVar1 <= ray_origin->x * ray_origin->x + ray_origin->z * ray_origin->z) {
    fVar2 = SQRT(ray_direction->x * ray_direction->x + ray_direction->z * ray_direction->z);
    if (0.0 < fVar2) {
      fVar10 = 1.0 / fVar2;
      fVar3 = ray_direction->x;
      fVar7 = fVar3 * fVar10;
      fVar4 = ray_direction->z;
      fVar8 = fVar4 * fVar10;
      fVar5 = ray_origin->z;
      fVar6 = ray_origin->x;
      fVar9 = -(fVar6 * fVar7 + fVar5 * fVar8);
      if (0.0 < fVar9) {
        fVar11 = fVar7 * fVar9 + fVar6;
        fVar7 = fVar8 * fVar9 + fVar5;
        fVar7 = fVar7 * fVar7 + fVar11 * fVar11;
        if ((fVar1 <= fVar7) || (fVar9 = fVar9 - SQRT(fVar1 - fVar7), fVar2 < fVar9)) {
          return 2.0;
        }
        fVar9 = fVar9 * fVar10;
        fVar2 = ray_direction->y * fVar9 + ray_origin->y;
        if ((collision_info->field5_0x14 <= fVar2) && (fVar2 <= collision_info->cylinder_bottom_y))
        {
          out_normal->y = 0.0;
          fVar6 = fVar3 * fVar9 + fVar6;
          out_normal->x = fVar6;
          fVar5 = fVar4 * fVar9 + fVar5;
          out_normal->z = fVar5;
          fVar1 = SQRT(fVar5 * out_normal->z + fVar6 * out_normal->x + out_normal->y * out_normal->y
                      );
          if (fVar1 <= 0.0) {
            out_normal->z = 0.0;
            out_normal->y = out_normal->z;
            out_normal->x = out_normal->y;
          }
          else {
            fVar1 = 1.0 / fVar1;
            out_normal->x = out_normal->x * fVar1;
            out_normal->y = out_normal->y * fVar1;
            out_normal->z = out_normal->z * fVar1;
          }
          return fVar9;
        }
      }
    }
  }
  else if ((collision_info->field5_0x14 <= ray_origin->y) &&
          (ray_origin->y <= collision_info->cylinder_bottom_y)) {
    fVar1 = ray_direction->y;
    fVar2 = ray_direction->z;
    if (out_normal != local_60) {
      out_normal->x = -ray_direction->x;
      out_normal->y = -fVar1;
      out_normal->z = -fVar2;
    }
    fVar1 = SQRT(out_normal->z * out_normal->z +
                 out_normal->x * out_normal->x + out_normal->y * out_normal->y);
    if (fVar1 <= 0.0) {
      out_normal->z = 0.0;
      out_normal->y = out_normal->z;
      out_normal->x = out_normal->y;
    }
    else {
      fVar1 = 1.0 / fVar1;
      out_normal->x = out_normal->x * fVar1;
      out_normal->y = out_normal->y * fVar1;
      out_normal->z = out_normal->z * fVar1;
    }
    return 0.0;
  }
  if (collision_info->field5_0x14 <= ray_origin->y) {
    if ((((collision_info->cylinder_bottom_y < ray_origin->y) &&
         (fVar2 = ray_direction->y, fVar2 < 0.0)) &&
        (fVar3 = collision_info->cylinder_bottom_y - ray_origin->y, fVar2 < fVar3)) &&
       (fVar3 = fVar3 / fVar2, fVar2 = ray_origin->x + ray_direction->x * fVar3,
       fVar4 = ray_direction->z * fVar3 + ray_origin->z, fVar4 * fVar4 + fVar2 * fVar2 <= fVar1)) {
      out_normal->y = 1.0;
      out_normal->z = 0.0;
      out_normal->x = 0.0;
      return fVar3;
    }
  }
  else {
    fVar2 = ray_direction->y;
    if ((0.0 < fVar2) && (fVar3 = collision_info->field5_0x14 - ray_origin->y, fVar3 < fVar2)) {
      fVar3 = fVar3 / fVar2;
      fVar2 = ray_origin->x + ray_direction->x * fVar3;
      fVar4 = ray_direction->z * fVar3 + ray_origin->z;
      if (fVar1 < fVar4 * fVar4 + fVar2 * fVar2) {
        return 2.0;
      }
      out_normal->y = -1.0;
      out_normal->z = 0.0;
      out_normal->x = 0.0;
      return fVar3;
    }
  }
  return 2.0;
}


// Assembly code:
// 00408340: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_FUN_00408340
// 00408341: PUSH ESI
// 00408342: PUSH EBP
// 00408343: MOV EBP,ESP
// 00408345: SUB ESP,0xfc
// 0040834b: AND ESP,0xfffffff8
// 0040834e: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00408351: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00408354: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00408357: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0040835a: FLD float ptr [ECX + 0x8]
// 0040835d: FMUL ST0
// 0040835f: FLD float ptr [ECX]
// 00408361: FMUL ST0
// 00408363: FLD float ptr [ESI + 0x1c]
// 00408366: FMUL ST0
// 00408368: FXCH
// 0040836a: FADDP ST2,ST0
// 0040836c: FSTP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x78] (WRITE)
// 00408373: FCOMP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x78] (READ)
// 0040837a: FNSTSW AX
// 0040837c: SAHF
// 0040837d: JNC 0x0040845f
//   XREF to: 0040845f (CONDITIONAL_JUMP)
// 00408383: FLD float ptr [ECX + 0x4]
// 00408386: FCOMP float ptr [ESI + 0x14]
// 00408389: FNSTSW AX
// 0040838b: SAHF
// 0040838c: JC 0x00408636
//   XREF to: 00408636 (CONDITIONAL_JUMP)
// 00408392: FLD float ptr [ECX + 0x4]
// 00408395: FCOMP float ptr [ESI + 0x18]
// 00408398: FNSTSW AX
// 0040839a: SAHF
// 0040839b: JA 0x00408636
//   XREF to: 00408636 (CONDITIONAL_JUMP)
// 004083a1: FLD float ptr [EBX]
// 004083a3: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x60] (DATA)
// 004083aa: FCHS
// 004083ac: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x60] (WRITE)
// 004083b3: FLD float ptr [EBX + 0x4]
// 004083b6: FCHS
// 004083b8: FSTP float ptr [ESP + 0xac]
//   XREF to: Stack[-0x5c] (WRITE)
// 004083bf: FLD float ptr [EBX + 0x8]
// 004083c2: FCHS
// 004083c4: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x58] (WRITE)
// 004083cb: CMP EDX,EAX
// 004083cd: JZ 0x004083ec
//   XREF to: 004083ec (CONDITIONAL_JUMP)
// 004083cf: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x60] (DATA)
// 004083d6: MOV dword ptr [EDX],EAX
// 004083d8: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x5c] (READ)
// 004083df: MOV dword ptr [EDX + 0x4],EAX
// 004083e2: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x58] (READ)
// 004083e9: MOV dword ptr [EDX + 0x8],EAX
// 004083ec: FLD float ptr [EDX + 0x4]
//   Label: LAB_004083ec
// 004083ef: FMUL ST0
// 004083f1: FLD float ptr [EDX]
// 004083f3: FMUL ST0
// 004083f5: FADDP
// 004083f7: FLD float ptr [EDX + 0x8]
// 004083fa: FMUL ST0
// 004083fc: FADDP
// 004083fe: FSQRT
// 00408400: FST float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x68] (WRITE)
// 00408407: FLDZ
// 00408409: FCOMPP
// 0040840b: FNSTSW AX
// 0040840d: SAHF
// 0040840e: JNC 0x0040844b
//   XREF to: 0040844b (CONDITIONAL_JUMP)
// 00408410: FLD1
// 00408412: FLD float ptr [EDX]
// 00408414: FXCH
// 00408416: FDIV float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x68] (READ)
// 0040841d: FXCH
// 0040841f: FMUL ST1
// 00408421: FLD float ptr [EDX + 0x4]
// 00408424: FMUL ST2
// 00408426: FLD float ptr [EDX + 0x8]
// 00408429: FMULP ST3
// 0040842b: FXCH
// 0040842d: FSTP float ptr [EDX]
// 0040842f: FSTP float ptr [EDX + 0x4]
// 00408432: FSTP float ptr [EDX + 0x8]
// 00408435: XOR EAX,EAX
//   Label: LAB_00408435
// 00408437: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0040843e: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x14] (READ)
// 00408445: MOV ESP,EBP
// 00408447: POP EBP
// 00408448: POP ESI
// 00408449: POP EBX
// 0040844a: RET
// 0040844b: MOV dword ptr [EDX + 0x8],0x0
//   Label: LAB_0040844b
// 00408452: MOV EAX,dword ptr [EDX + 0x8]
// 00408455: MOV dword ptr [EDX + 0x4],EAX
// 00408458: MOV EAX,dword ptr [EDX + 0x4]
// 0040845b: MOV dword ptr [EDX],EAX
// 0040845d: JMP 0x00408435
//   XREF to: 00408435 (UNCONDITIONAL_JUMP)
// 0040845f: FLD float ptr [EBX + 0x8]
//   Label: LAB_0040845f
// 00408462: FMUL ST0
// 00408464: FLD float ptr [EBX]
// 00408466: FMUL ST0
// 00408468: FADDP
// 0040846a: FSQRT
// 0040846c: FLDZ
// 0040846e: FXCH
// 00408470: FSTP double ptr [ESP]
//   XREF to: Stack[-0x108] (DATA)
// 00408473: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x108] (DATA)
// 00408476: FNSTSW AX
// 00408478: SAHF
// 00408479: JNC 0x00408636
//   XREF to: 00408636 (CONDITIONAL_JUMP)
// 0040847f: FLD1
// 00408481: FDIV double ptr [ESP]
//   XREF to: Stack[-0x108] (DATA)
// 00408484: FLD float ptr [EBX]
// 00408486: FST double ptr [ESP + 0x60]
//   XREF to: Stack[-0xa8] (WRITE)
// 0040848a: FXCH
// 0040848c: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0xe8] (WRITE)
// 00408490: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0xe8] (READ)
// 00408494: FLD float ptr [EBX + 0x8]
// 00408497: FST double ptr [ESP + 0x78]
//   XREF to: Stack[-0x90] (WRITE)
// 0040849b: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0xe8] (READ)
// 0040849f: FLD float ptr [ECX + 0x8]
// 004084a2: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0x100] (WRITE)
// 004084a6: FXCH
// 004084a8: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0xc0] (WRITE)
// 004084ac: FMUL double ptr [ESP + 0x48]
//   XREF to: Stack[-0xc0] (READ)
// 004084b0: FXCH
// 004084b2: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0xb0] (WRITE)
// 004084b6: FLD float ptr [ECX]
// 004084b8: FST double ptr [ESP + 0x10]
//   XREF to: Stack[-0xf8] (WRITE)
// 004084bc: FMUL double ptr [ESP + 0x58]
//   XREF to: Stack[-0xb0] (READ)
// 004084c0: FADDP
// 004084c2: FLDZ
// 004084c4: FXCH
// 004084c6: FCHS
// 004084c8: FSTP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x80] (WRITE)
// 004084cf: FCOMP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x80] (READ)
// 004084d6: FNSTSW AX
// 004084d8: SAHF
// 004084d9: JNC 0x00408636
//   XREF to: 00408636 (CONDITIONAL_JUMP)
// 004084df: FLD double ptr [ESP + 0x88]
//   XREF to: Stack[-0x80] (READ)
// 004084e6: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0xb0] (READ)
// 004084ea: FMUL ST1
// 004084ec: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0xc0] (READ)
// 004084f0: FMULP ST2
// 004084f2: FADD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xf8] (READ)
// 004084f6: FMUL ST0
// 004084f8: FXCH
// 004084fa: FADD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x100] (READ)
// 004084fe: FMUL ST0
// 00408500: FADDP
// 00408502: FST double ptr [ESP + 0x68]
//   XREF to: Stack[-0xa0] (WRITE)
// 00408506: FCOMP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x78] (READ)
// 0040850d: FNSTSW AX
// 0040850f: SAHF
// 00408510: JNC 0x0040860a
//   XREF to: 0040860a (CONDITIONAL_JUMP)
// 00408516: FLD double ptr [ESP + 0x90]
//   XREF to: Stack[-0x78] (READ)
// 0040851d: FSUB double ptr [ESP + 0x68]
//   XREF to: Stack[-0xa0] (READ)
// 00408521: FSQRT
// 00408523: FSUBR double ptr [ESP + 0x88]
//   XREF to: Stack[-0x80] (READ)
// 0040852a: FST double ptr [ESP + 0x70]
//   XREF to: Stack[-0x98] (WRITE)
// 0040852e: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x108] (DATA)
// 00408531: FNSTSW AX
// 00408533: SAHF
// 00408534: JA 0x0040860a
//   XREF to: 0040860a (CONDITIONAL_JUMP)
// 0040853a: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x98] (READ)
// 0040853e: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0xe8] (READ)
// 00408542: FLD float ptr [EBX + 0x4]
// 00408545: FXCH
// 00408547: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0xc8] (WRITE)
// 0040854b: FMUL double ptr [ESP + 0x40]
//   XREF to: Stack[-0xc8] (READ)
// 0040854f: FADD float ptr [ECX + 0x4]
// 00408552: FLD float ptr [ESI + 0x14]
// 00408555: FXCH
// 00408557: FSTP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x88] (WRITE)
// 0040855e: FCOMP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x88] (READ)
// 00408565: FNSTSW AX
// 00408567: SAHF
// 00408568: JA 0x00408636
//   XREF to: 00408636 (CONDITIONAL_JUMP)
// 0040856e: FLD float ptr [ESI + 0x18]
// 00408571: FCOMP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x88] (READ)
// 00408578: FNSTSW AX
// 0040857a: SAHF
// 0040857b: JC 0x00408636
//   XREF to: 00408636 (CONDITIONAL_JUMP)
// 00408581: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0xc8] (READ)
// 00408585: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0xa8] (READ)
// 00408589: FMUL ST1
// 0040858b: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x90] (READ)
// 0040858f: MOV dword ptr [EDX + 0x4],0x0
// 00408596: FMULP ST2
// 00408598: FLD float ptr [EDX + 0x4]
// 0040859b: FMUL ST0
// 0040859d: FXCH
// 0040859f: FADD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xf8] (READ)
// 004085a3: FST float ptr [EDX]
// 004085a5: FMUL float ptr [EDX]
// 004085a7: FXCH ST2
// 004085a9: FADD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x100] (READ)
// 004085ad: FXCH ST2
// 004085af: FADDP
// 004085b1: FXCH
// 004085b3: FST float ptr [EDX + 0x8]
// 004085b6: FMUL float ptr [EDX + 0x8]
// 004085b9: FADDP
// 004085bb: FSQRT
// 004085bd: FST float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x64] (WRITE)
// 004085c4: FLDZ
// 004085c6: FCOMPP
// 004085c8: FNSTSW AX
// 004085ca: SAHF
// 004085cb: JNC 0x00408622
//   XREF to: 00408622 (CONDITIONAL_JUMP)
// 004085cd: FLD1
// 004085cf: FLD float ptr [EDX]
// 004085d1: FXCH
// 004085d3: FDIV float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x64] (READ)
// 004085da: FXCH
// 004085dc: FMUL ST1
// 004085de: FLD float ptr [EDX + 0x4]
// 004085e1: FMUL ST2
// 004085e3: FLD float ptr [EDX + 0x8]
// 004085e6: FMULP ST3
// 004085e8: FXCH
// 004085ea: FSTP float ptr [EDX]
// 004085ec: FSTP float ptr [EDX + 0x4]
// 004085ef: FSTP float ptr [EDX + 0x8]
// 004085f2: FLD double ptr [ESP + 0x40]
//   Label: LAB_004085f2
//   XREF to: Stack[-0xc8] (READ)
// 004085f6: FSTP float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x14] (WRITE)
// 004085fd: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x14] (READ)
// 00408604: MOV ESP,EBP
// 00408606: POP EBP
// 00408607: POP ESI
// 00408608: POP EBX
// 00408609: RET
// 0040860a: MOV dword ptr [ESP + 0xf4],0x40000000
//   Label: LAB_0040860a
//   XREF to: Stack[-0x14] (WRITE)
// 00408615: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x14] (READ)
// 0040861c: MOV ESP,EBP
// 0040861e: POP EBP
// 0040861f: POP ESI
// 00408620: POP EBX
// 00408621: RET
// 00408622: MOV dword ptr [EDX + 0x8],0x0
//   Label: LAB_00408622
// 00408629: MOV EAX,dword ptr [EDX + 0x8]
// 0040862c: MOV dword ptr [EDX + 0x4],EAX
// 0040862f: MOV EAX,dword ptr [EDX + 0x4]
// 00408632: MOV dword ptr [EDX],EAX
// 00408634: JMP 0x004085f2
//   XREF to: 004085f2 (UNCONDITIONAL_JUMP)
// 00408636: FLD float ptr [ECX + 0x4]
//   Label: LAB_00408636
// 00408639: FCOMP float ptr [ESI + 0x14]
// 0040863c: FNSTSW AX
// 0040863e: SAHF
// 0040863f: JNC 0x004086ec
//   XREF to: 004086ec (CONDITIONAL_JUMP)
// 00408645: FLDZ
// 00408647: FLD float ptr [EBX + 0x4]
// 0040864a: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0xd8] (WRITE)
// 0040864e: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0xd8] (READ)
// 00408652: FNSTSW AX
// 00408654: SAHF
// 00408655: JNC 0x0040875b
//   XREF to: 0040875b (CONDITIONAL_JUMP)
// 0040865b: FLD float ptr [ESI + 0x14]
// 0040865e: FSUB float ptr [ECX + 0x4]
// 00408661: FST double ptr [ESP + 0x38]
//   XREF to: Stack[-0xd0] (WRITE)
// 00408665: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0xd8] (READ)
// 00408669: FNSTSW AX
// 0040866b: SAHF
// 0040866c: JNC 0x0040875b
//   XREF to: 0040875b (CONDITIONAL_JUMP)
// 00408672: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0xd0] (READ)
// 00408676: FDIV double ptr [ESP + 0x30]
//   XREF to: Stack[-0xd8] (READ)
// 0040867a: FLD float ptr [EBX]
// 0040867c: FXCH
// 0040867e: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0xf0] (WRITE)
// 00408682: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0xf0] (READ)
// 00408686: FLD float ptr [EBX + 0x8]
// 00408689: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0xf0] (READ)
// 0040868d: FLD float ptr [ECX]
// 0040868f: FADDP ST2,ST0
// 00408691: FLD ST1
// 00408693: FMULP ST2
// 00408695: FADD float ptr [ECX + 0x8]
// 00408698: FMUL ST0
// 0040869a: FADDP
// 0040869c: FCOMP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x78] (READ)
// 004086a3: FNSTSW AX
// 004086a5: SAHF
// 004086a6: JBE 0x004086c0
//   XREF to: 004086c0 (CONDITIONAL_JUMP)
// 004086a8: MOV dword ptr [ESP + 0xf4],0x40000000
//   XREF to: Stack[-0x14] (WRITE)
// 004086b3: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x14] (READ)
// 004086ba: MOV ESP,EBP
// 004086bc: POP EBP
// 004086bd: POP ESI
// 004086be: POP EBX
// 004086bf: RET
// 004086c0: MOV dword ptr [EDX + 0x4],0xbf800000
//   Label: LAB_004086c0
// 004086c7: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xf0] (READ)
// 004086cb: MOV dword ptr [EDX + 0x8],0x0
// 004086d2: FSTP float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x14] (WRITE)
// 004086d9: MOV dword ptr [EDX],0x0
// 004086df: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x14] (READ)
// 004086e6: MOV ESP,EBP
// 004086e8: POP EBP
// 004086e9: POP ESI
// 004086ea: POP EBX
// 004086eb: RET
// 004086ec: FLD float ptr [ECX + 0x4]
//   Label: LAB_004086ec
// 004086ef: FCOMP float ptr [ESI + 0x18]
// 004086f2: FNSTSW AX
// 004086f4: SAHF
// 004086f5: JBE 0x0040875b
//   XREF to: 0040875b (CONDITIONAL_JUMP)
// 004086f7: FLDZ
// 004086f9: FLD float ptr [EBX + 0x4]
// 004086fc: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0xe0] (WRITE)
// 00408700: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0xe0] (READ)
// 00408704: FNSTSW AX
// 00408706: SAHF
// 00408707: JBE 0x0040875b
//   XREF to: 0040875b (CONDITIONAL_JUMP)
// 00408709: FLD float ptr [ESI + 0x18]
// 0040870c: FSUB float ptr [ECX + 0x4]
// 0040870f: FST double ptr [ESP + 0x50]
//   XREF to: Stack[-0xb8] (WRITE)
// 00408713: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0xe0] (READ)
// 00408717: FNSTSW AX
// 00408719: SAHF
// 0040871a: JBE 0x0040875b
//   XREF to: 0040875b (CONDITIONAL_JUMP)
// 0040871c: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0xb8] (READ)
// 00408720: FDIV double ptr [ESP + 0x28]
//   XREF to: Stack[-0xe0] (READ)
// 00408724: FLD float ptr [EBX]
// 00408726: FXCH
// 00408728: FSTP double ptr [ESP + 0x98]
//   XREF to: Stack[-0x70] (WRITE)
// 0040872f: FMUL double ptr [ESP + 0x98]
//   XREF to: Stack[-0x70] (READ)
// 00408736: FLD float ptr [EBX + 0x8]
// 00408739: FMUL double ptr [ESP + 0x98]
//   XREF to: Stack[-0x70] (READ)
// 00408740: FLD float ptr [ECX]
// 00408742: FADDP ST2,ST0
// 00408744: FLD ST1
// 00408746: FMULP ST2
// 00408748: FADD float ptr [ECX + 0x8]
// 0040874b: FMUL ST0
// 0040874d: FADDP
// 0040874f: FCOMP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x78] (READ)
// 00408756: FNSTSW AX
// 00408758: SAHF
// 00408759: JBE 0x00408773
//   XREF to: 00408773 (CONDITIONAL_JUMP)
// 0040875b: MOV dword ptr [ESP + 0xf4],0x40000000
//   Label: LAB_0040875b
//   XREF to: Stack[-0x14] (WRITE)
// 00408766: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x14] (READ)
// 0040876d: MOV ESP,EBP
// 0040876f: POP EBP
// 00408770: POP ESI
// 00408771: POP EBX
// 00408772: RET
// 00408773: MOV dword ptr [EDX + 0x4],0x3f800000
//   Label: LAB_00408773
// 0040877a: FLD double ptr [ESP + 0x98]
//   XREF to: Stack[-0x70] (READ)
// 00408781: MOV dword ptr [EDX + 0x8],0x0
// 00408788: FSTP float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x14] (WRITE)
// 0040878f: MOV dword ptr [EDX],0x0
// 00408795: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x14] (READ)
// 0040879c: MOV ESP,EBP
// 0040879e: POP EBP
// 0040879f: POP ESI
// 004087a0: POP EBX
// 004087a1: RET
