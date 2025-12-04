// Name: shape_superopt.cpp_CObj_FUN_005d4160
// Address: 005d4160
// Address Range: [[005d4160, 005d44cc]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_FUN_005d4160(CObj * this_ptr)
// Cross-references:
//   shape_superopt.cpp_COptimize_FUN_005d7290 (005d7290) at 005d72a0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Welding_vertices_d_remov_00654468
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_FUN_005d4160(CObj *this_ptr)

{
  CPoly *pCVar1;
  double dVar2;
  int iVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  double *pdVar7;
  double *pdVar8;
  byte bVar9;
  int in_stack_00000010;
  int iStack_100;
  uint uStack_fc;
  char acStack_f8 [92];
  double dStack_9c;
  double dStack_94;
  double dStack_8c;
  double dStack_84;
  double dStack_7c;
  double dStack_74;
  double dStack_6c;
  double dStack_64;
  double dStack_5c;
  double dStack_54;
  double dStack_4c;
  double dStack_44;
  int iStack_24;
  void *pvStack_20;
  int iStack_1c;
  int iStack_18;
  double *pdStack_14;
  uint uVar10;
  
  bVar9 = 0;
  (*this_ptr->vtable->clearStateFlags)(this_ptr,0x8000);
  iStack_18 = 0;
  pvStack_20 = (void *)0x0;
  if (1000 < (uint)this_ptr->vertex_count) {
    pvStack_20 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  uVar10 = 0;
  if (this_ptr->vertex_count != 0) {
    iStack_1c = 0;
    do {
      if ((pvStack_20 != (void *)0x0) && ((char)uVar10 == '\0')) {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_f8,"Welding vertices (%d removed so far)",iStack_18);
      }
      pdVar4 = (double *)((int)&(this_ptr->vertex_data->position).x + iStack_1c);
      pdStack_14 = pdVar4;
      if ((*(byte *)((int)pdVar4 + 0x35) & 0x80) == 0) {
        dVar2 = (double)CONCAT44(uStack_fc,iStack_100);
        dStack_54 = *pdVar4 - dVar2;
        dStack_4c = pdVar4[1] - dVar2;
        dStack_44 = pdVar4[2] - dVar2;
        pdVar7 = &dStack_54;
        pdVar8 = &dStack_9c;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pdVar8 = *(undefined4 *)pdVar7;
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar9 * -8 + 4);
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar9 * -8 + 4);
        }
        dStack_84 = *pdVar4 + dVar2;
        dStack_7c = pdVar4[1] + dVar2;
        dStack_74 = pdVar4[2] + dVar2;
        pdVar7 = &dStack_84;
        pdVar8 = &dStack_6c;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pdVar8 = *(undefined4 *)pdVar7;
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar9 * -8 + 4);
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar9 * -8 + 4);
        }
        *(byte *)((int)pdVar4 + 0x35) = *(byte *)((int)pdVar4 + 0x35) | 0x80;
        uVar5 = uVar10 + 1;
        if (uVar5 < (uint)this_ptr->vertex_count) {
          iStack_24 = uVar5 * 0x38;
          do {
            pdVar4 = (double *)((int)&(this_ptr->vertex_data->position).x + iStack_24);
            if ((*(byte *)((int)pdVar4 + 0x35) & 0x80) == 0) {
              if (((uStack_fc & 0x7fffffff) == 0) && (iStack_100 == 0)) {
                if (((*pdStack_14 == *pdVar4) && (pdStack_14[1] == pdVar4[1])) &&
                   (pdStack_14[2] == pdVar4[2])) {
LAB_005d43a8:
                  uVar6 = 0;
                  if (this_ptr->poly_count != 0) {
                    iVar3 = 0;
                    do {
                      pCVar1 = this_ptr->poly_array;
                      if (uVar5 == *(uint *)((int)pCVar1->uv_coords + iVar3 + -0xc)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar3 + -0xc) = uVar10;
                      }
                      if (uVar5 == *(uint *)((int)pCVar1->uv_coords + iVar3 + -8)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar3 + -8) = uVar10;
                      }
                      if (uVar5 == *(uint *)((int)pCVar1->uv_coords + iVar3 + -4)) {
                        *(uint *)((int)pCVar1->uv_coords + iVar3 + -4) = uVar10;
                      }
                      uVar6 = uVar6 + 1;
                      iVar3 = iVar3 + 0x68;
                    } while (uVar6 < (uint)this_ptr->poly_count);
                  }
                  iStack_18 = iStack_18 + 1;
                  *(byte *)((int)pdVar4 + 0x35) = *(byte *)((int)pdVar4 + 0x35) | 0x80;
                }
              }
              else if (((dStack_9c <= *pdVar4) &&
                       ((((*pdVar4 <= dStack_6c && (dStack_94 <= pdVar4[1])) &&
                         (pdVar4[1] <= dStack_64)) &&
                        ((dStack_8c <= pdVar4[2] && (pdVar4[2] <= dStack_5c)))))) &&
                      (SQRT((pdVar4[2] - pdStack_14[2]) * (pdVar4[2] - pdStack_14[2]) +
                            (pdVar4[1] - pdStack_14[1]) * (pdVar4[1] - pdStack_14[1]) +
                            (*pdVar4 - *pdStack_14) * (*pdVar4 - *pdStack_14)) <=
                       (double)CONCAT44(uStack_fc,iStack_100))) goto LAB_005d43a8;
            }
            iStack_24 = iStack_24 + 0x38;
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)this_ptr->vertex_count);
        }
      }
      uVar10 = uVar10 + 1;
      iStack_1c = iStack_1c + 0x38;
    } while (uVar10 < (uint)this_ptr->vertex_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(pvStack_20);
  if (in_stack_00000010 != 0) {
    iVar3 = (*(code *)this_ptr->vtable->field51_0xcc)();
    return iVar3;
  }
  return 1;
}


// Assembly code:
// 005d4160: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d4160
// 005d4161: PUSH ESI
// 005d4162: PUSH EDI
// 005d4163: PUSH EBP
// 005d4164: MOV EBP,ESP
// 005d4166: SUB ESP,0xf4
// 005d416c: AND ESP,0xfffffff8
// 005d416f: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d4172: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x108] (DATA)
// 005d4175: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d4178: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 005d417c: PUSH 0x8000
// 005d4181: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d4184: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d4187: PUSH EDX
// 005d4188: MOV EAX,dword ptr [EAX + 0x18]
// 005d418b: CALL dword ptr [EAX + 0x84]
// 005d4191: ADD ESP,0x8
// 005d4194: XOR ECX,ECX
// 005d4196: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d4199: MOV dword ptr [ESP + 0xe8],ECX
// 005d41a0: MOV ESI,dword ptr [EAX]
// 005d41a2: MOV dword ptr [ESP + 0xe0],ECX
// 005d41a9: CMP ESI,0x3e8
// 005d41af: JA 0x005d4255
//   XREF to: 005d4255 (CONDITIONAL_JUMP)
// 005d41b5: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005d41b5
//   XREF to: Stack[0x4] (READ)
// 005d41b8: XOR EDI,EDI
// 005d41ba: MOV EDX,dword ptr [EAX]
// 005d41bc: MOV dword ptr [ESP + 0xf0],EDI
// 005d41c3: TEST EDX,EDX
// 005d41c5: JBE 0x005d422f
//   XREF to: 005d422f (CONDITIONAL_JUMP)
// 005d41c7: MOV dword ptr [ESP + 0xe4],EDI
// 005d41ce: CMP dword ptr [ESP + 0xe0],0x0
//   Label: LAB_005d41ce
// 005d41d6: JZ 0x005d41e6
//   XREF to: 005d41e6 (CONDITIONAL_JUMP)
// 005d41d8: TEST byte ptr [ESP + 0xf0],0xff
// 005d41e0: JZ 0x005d426b
//   XREF to: 005d426b (CONDITIONAL_JUMP)
// 005d41e6: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005d41e6
//   XREF to: Stack[0x4] (READ)
// 005d41e9: MOV EDX,dword ptr [ESP + 0xe4]
// 005d41f0: MOV EAX,dword ptr [EAX + 0x4]
// 005d41f3: ADD EDX,EAX
// 005d41f5: MOV dword ptr [ESP + 0xec],EDX
// 005d41fc: TEST byte ptr [EDX + 0x35],0x80
// 005d4200: JZ 0x005d428a
//   XREF to: 005d428a (CONDITIONAL_JUMP)
// 005d4206: MOV ECX,dword ptr [ESP + 0xe4]
//   Label: LAB_005d4206
// 005d420d: MOV EBX,dword ptr [ESP + 0xf0]
// 005d4214: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d4217: ADD ECX,0x38
// 005d421a: INC EBX
// 005d421b: MOV ESI,dword ptr [EDX]
// 005d421d: MOV dword ptr [ESP + 0xe4],ECX
// 005d4224: MOV dword ptr [ESP + 0xf0],EBX
// 005d422b: CMP EBX,ESI
// 005d422d: JC 0x005d41ce
//   XREF to: 005d41ce (CONDITIONAL_JUMP)
// 005d422f: MOV EDI,dword ptr [ESP + 0xe0]
//   Label: LAB_005d422f
// 005d4236: PUSH EDI
// 005d4237: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005d423c: ADD ESP,0x4
// 005d423f: CMP dword ptr [EBP + 0x20],0x0
//   XREF to: Stack[0x10] (READ)
// 005d4243: JNZ 0x005d44b3
//   XREF to: 005d44b3 (CONDITIONAL_JUMP)
// 005d4249: MOV EAX,0x1
// 005d424e: MOV ESP,EBP
// 005d4250: POP EBP
// 005d4251: POP EDI
// 005d4252: POP ESI
// 005d4253: POP EBX
// 005d4254: RET
// 005d4255: PUSH 0x4
//   Label: LAB_005d4255
// 005d4257: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)
// 005d425c: ADD ESP,0x4
// 005d425f: MOV dword ptr [ESP + 0xe0],EAX
// 005d4266: JMP 0x005d41b5
//   XREF to: 005d41b5 (UNCONDITIONAL_JUMP)
// 005d426b: MOV ESI,dword ptr [ESP + 0xe8]
//   Label: LAB_005d426b
// 005d4272: PUSH ESI
// 005d4273: PUSH 0x654468
//   XREF to: 00654468 (DATA)
// 005d4278: LEA EAX,[ESP + 0x10]
// 005d427c: PUSH EAX
// 005d427d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005d4282: ADD ESP,0xc
// 005d4285: JMP 0x005d41e6
//   XREF to: 005d41e6 (UNCONDITIONAL_JUMP)
// 005d428a: MOV EAX,dword ptr [ESP + 0xec]
//   Label: LAB_005d428a
// 005d4291: MOV ECX,0x6
// 005d4296: LEA EDI,[ESP + 0x64]
// 005d429a: LEA ESI,[ESP + 0xac]
// 005d42a1: FLD double ptr [EAX]
// 005d42a3: FLD double ptr [EAX + 0x8]
// 005d42a6: FLD double ptr [EAX + 0x10]
// 005d42a9: FXCH ST2
// 005d42ab: FLD double ptr [ESP]
// 005d42ae: FXCH
// 005d42b0: FSUB ST0,ST1
// 005d42b2: FXCH ST2
// 005d42b4: FSUB ST0,ST1
// 005d42b6: FXCH ST3
// 005d42b8: FSUB ST0,ST1
// 005d42ba: FXCH ST2
// 005d42bc: FSTP double ptr [ESP + 0xac]
// 005d42c3: FXCH ST2
// 005d42c5: FSTP double ptr [ESP + 0xb4]
// 005d42cc: FSTP double ptr [ESP + 0xbc]
// 005d42d3: MOVSD.REP ES:EDI,ESI
// 005d42d5: FLD double ptr [EAX]
// 005d42d7: FLD double ptr [EAX + 0x8]
// 005d42da: FLD double ptr [EAX + 0x10]
// 005d42dd: MOV ECX,0x6
// 005d42e2: LEA EDI,[ESP + 0x94]
// 005d42e9: LEA ESI,[ESP + 0x7c]
// 005d42ed: FXCH ST2
// 005d42ef: FADD ST0,ST3
// 005d42f1: FXCH
// 005d42f3: FADD ST0,ST3
// 005d42f5: FXCH ST2
// 005d42f7: FADDP ST3,ST0
// 005d42f9: FSTP double ptr [ESP + 0x7c]
// 005d42fd: FSTP double ptr [ESP + 0x84]
// 005d4304: FSTP double ptr [ESP + 0x8c]
// 005d430b: MOVSD.REP ES:EDI,ESI
// 005d430d: OR byte ptr [EAX + 0x35],0x80
// 005d4311: MOV EDX,dword ptr [ESP + 0xf0]
// 005d4318: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d431b: INC EDX
// 005d431c: CMP EDX,dword ptr [EAX]
// 005d431e: JNC 0x005d4206
//   XREF to: 005d4206 (CONDITIONAL_JUMP)
// 005d4324: IMUL EAX,EDX,0x38
// 005d4327: MOV dword ptr [ESP + 0xdc],EAX
// 005d432e: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_005d432e
//   XREF to: Stack[0x4] (READ)
// 005d4331: MOV EBX,dword ptr [ESP + 0xdc]
// 005d4338: MOV ESI,dword ptr [ESI + 0x4]
// 005d433b: ADD ESI,EBX
// 005d433d: TEST byte ptr [ESI + 0x35],0x80
// 005d4341: JZ 0x005d4359
//   XREF to: 005d4359 (CONDITIONAL_JUMP)
// 005d4343: ADD dword ptr [ESP + 0xdc],0x38
//   Label: LAB_005d4343
// 005d434b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d434e: INC EDX
// 005d434f: CMP EDX,dword ptr [EAX]
// 005d4351: JNC 0x005d4206
//   XREF to: 005d4206 (CONDITIONAL_JUMP)
// 005d4357: JMP 0x005d432e
//   XREF to: 005d432e (UNCONDITIONAL_JUMP)
// 005d4359: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_005d4359
// 005d435d: MOV EAX,dword ptr [ESP]
// 005d4360: TEST EDI,0x7fffffff
// 005d4366: JNZ 0x005d4416
//   XREF to: 005d4416 (CONDITIONAL_JUMP)
// 005d436c: TEST EAX,EAX
// 005d436e: JNZ 0x005d4416
//   XREF to: 005d4416 (CONDITIONAL_JUMP)
// 005d4374: MOV EAX,dword ptr [ESP + 0xec]
// 005d437b: FLD double ptr [EAX]
// 005d437d: FCOMP double ptr [ESI]
// 005d437f: FNSTSW AX
// 005d4381: SAHF
// 005d4382: JNZ 0x005d4343
//   XREF to: 005d4343 (CONDITIONAL_JUMP)
// 005d4384: MOV EAX,dword ptr [ESP + 0xec]
// 005d438b: FLD double ptr [EAX + 0x8]
// 005d438e: FCOMP double ptr [ESI + 0x8]
// 005d4391: FNSTSW AX
// 005d4393: SAHF
// 005d4394: JNZ 0x005d4343
//   XREF to: 005d4343 (CONDITIONAL_JUMP)
// 005d4396: MOV EAX,dword ptr [ESP + 0xec]
// 005d439d: FLD double ptr [EAX + 0x10]
// 005d43a0: FCOMP double ptr [ESI + 0x10]
// 005d43a3: FNSTSW AX
// 005d43a5: SAHF
// 005d43a6: JNZ 0x005d4343
//   XREF to: 005d4343 (CONDITIONAL_JUMP)
// 005d43a8: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005d43a8
//   XREF to: Stack[0x4] (READ)
// 005d43ab: MOV ECX,dword ptr [EAX + 0x8]
// 005d43ae: XOR EBX,EBX
// 005d43b0: TEST ECX,ECX
// 005d43b2: JBE 0x005d43f9
//   XREF to: 005d43f9 (CONDITIONAL_JUMP)
// 005d43b4: XOR ECX,ECX
// 005d43b6: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005d43b6
//   XREF to: Stack[0x4] (READ)
// 005d43b9: MOV EAX,dword ptr [EAX + 0xc]
// 005d43bc: ADD EAX,ECX
// 005d43be: CMP EDX,dword ptr [EAX + 0x4]
// 005d43c1: JNZ 0x005d43cd
//   XREF to: 005d43cd (CONDITIONAL_JUMP)
// 005d43c3: MOV EDI,dword ptr [ESP + 0xf0]
// 005d43ca: MOV dword ptr [EAX + 0x4],EDI
// 005d43cd: CMP EDX,dword ptr [EAX + 0x8]
//   Label: LAB_005d43cd
// 005d43d0: JNZ 0x005d43dc
//   XREF to: 005d43dc (CONDITIONAL_JUMP)
// 005d43d2: MOV EDI,dword ptr [ESP + 0xf0]
// 005d43d9: MOV dword ptr [EAX + 0x8],EDI
// 005d43dc: CMP EDX,dword ptr [EAX + 0xc]
//   Label: LAB_005d43dc
// 005d43df: JNZ 0x005d43eb
//   XREF to: 005d43eb (CONDITIONAL_JUMP)
// 005d43e1: MOV EDI,dword ptr [ESP + 0xf0]
// 005d43e8: MOV dword ptr [EAX + 0xc],EDI
// 005d43eb: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005d43eb
//   XREF to: Stack[0x4] (READ)
// 005d43ee: INC EBX
// 005d43ef: MOV EDI,dword ptr [EAX + 0x8]
// 005d43f2: ADD ECX,0x68
// 005d43f5: CMP EBX,EDI
// 005d43f7: JC 0x005d43b6
//   XREF to: 005d43b6 (CONDITIONAL_JUMP)
// 005d43f9: MOV EAX,dword ptr [ESP + 0xe8]
//   Label: LAB_005d43f9
// 005d4400: MOV BH,byte ptr [ESI + 0x35]
// 005d4403: INC EAX
// 005d4404: OR BH,0x80
// 005d4407: MOV dword ptr [ESP + 0xe8],EAX
// 005d440e: MOV byte ptr [ESI + 0x35],BH
// 005d4411: JMP 0x005d4343
//   XREF to: 005d4343 (UNCONDITIONAL_JUMP)
// 005d4416: FLD double ptr [ESI]
//   Label: LAB_005d4416
// 005d4418: FCOMP double ptr [ESP + 0x64]
// 005d441c: FNSTSW AX
// 005d441e: SAHF
// 005d441f: JC 0x005d4343
//   XREF to: 005d4343 (CONDITIONAL_JUMP)
// 005d4425: FLD double ptr [ESI]
// 005d4427: FCOMP double ptr [ESP + 0x94]
// 005d442e: FNSTSW AX
// 005d4430: SAHF
// 005d4431: JA 0x005d4343
//   XREF to: 005d4343 (CONDITIONAL_JUMP)
// 005d4437: FLD double ptr [ESI + 0x8]
// 005d443a: FCOMP double ptr [ESP + 0x6c]
// 005d443e: FNSTSW AX
// 005d4440: SAHF
// 005d4441: JC 0x005d4343
//   XREF to: 005d4343 (CONDITIONAL_JUMP)
// 005d4447: FLD double ptr [ESI + 0x8]
// 005d444a: FCOMP double ptr [ESP + 0x9c]
// 005d4451: FNSTSW AX
// 005d4453: SAHF
// 005d4454: JA 0x005d4343
//   XREF to: 005d4343 (CONDITIONAL_JUMP)
// 005d445a: FLD double ptr [ESI + 0x10]
// 005d445d: FCOMP double ptr [ESP + 0x74]
// 005d4461: FNSTSW AX
// 005d4463: SAHF
// 005d4464: JC 0x005d4343
//   XREF to: 005d4343 (CONDITIONAL_JUMP)
// 005d446a: FLD double ptr [ESI + 0x10]
// 005d446d: FCOMP double ptr [ESP + 0xa4]
// 005d4474: FNSTSW AX
// 005d4476: SAHF
// 005d4477: JA 0x005d4343
//   XREF to: 005d4343 (CONDITIONAL_JUMP)
// 005d447d: MOV EAX,dword ptr [ESP + 0xec]
// 005d4484: FLD double ptr [ESI]
// 005d4486: FSUB double ptr [EAX]
// 005d4488: FMUL ST0
// 005d448a: FLD double ptr [ESI + 0x8]
// 005d448d: FSUB double ptr [EAX + 0x8]
// 005d4490: FMUL ST0
// 005d4492: FLD double ptr [ESI + 0x10]
// 005d4495: FXCH
// 005d4497: FADDP ST2,ST0
// 005d4499: FSUB double ptr [EAX + 0x10]
// 005d449c: FMUL ST0
// 005d449e: FADDP
// 005d44a0: FSQRT
// 005d44a2: FCOMP double ptr [ESP]
// 005d44a5: FNSTSW AX
// 005d44a7: SAHF
// 005d44a8: JA 0x005d4343
//   XREF to: 005d4343 (CONDITIONAL_JUMP)
// 005d44ae: JMP 0x005d43a8
//   XREF to: 005d43a8 (UNCONDITIONAL_JUMP)
// 005d44b3: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_005d44b3
//   XREF to: Stack[0x4] (READ)
// 005d44b6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d44b9: PUSH EDX
// 005d44ba: MOV EAX,dword ptr [EAX + 0x18]
// 005d44bd: CALL dword ptr [EAX + 0xcc]
// 005d44c3: ADD ESP,0x4
// 005d44c6: MOV ESP,EBP
// 005d44c8: POP EBP
// 005d44c9: POP EDI
// 005d44ca: POP ESI
// 005d44cb: POP EBX
// 005d44cc: RET
