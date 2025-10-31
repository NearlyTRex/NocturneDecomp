// Name: core_turret.cpp_CTurret_FUN_005e2240
// Address: 005e2240
// Address Range: [[005e2240, 005e2315]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_FUN_005e2240(CTurret * this_ptr)
// Globals:
//   undefined4 DAT_006565f8
//   undefined4 DAT_00664b58
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_weapon.cpp_CWeapon_FUN_005edff0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_turret_cpp_CTurret_FUN_005e2240(CTurret *this_ptr)

{
  float fVar1;
  CKeyFramedModel *this_ptr_00;
  CVector3i *pCVar2;
  int iVar3;
  float fVar4;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(this_ptr->field1_0x578 + 0xc));
  core_weapon_cpp_CWeapon_FUN_005edff0(&this_ptr->base_weapon);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                          ((CKeyFramedModelInstance *)&(this_ptr->base_weapon).model_instance);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
                     (this_ptr_00,this_ptr_00->frame_count + -1);
  fVar4 = -1e+30;
  for (iVar3 = 0; iVar3 < this_ptr_00->vertex_count; iVar3 = iVar3 + 1) {
    fVar1 = (float)pCVar2->z + (float)pCVar2->y * (float)_DAT_006565f8;
    if (fVar4 < fVar1) {
      *(float *)(this_ptr->field12_0x85c + 4) = (float)pCVar2->x * _DAT_00664b58;
      *(float *)(this_ptr->field12_0x85c + 8) = (float)pCVar2->y * _DAT_00664b58;
      *(float *)(this_ptr->field12_0x85c + 0xc) = (float)pCVar2->z * _DAT_00664b58;
      fVar4 = fVar1;
    }
    pCVar2 = pCVar2 + 1;
  }
  this_ptr->field12_0x85c[0x58] = '\0';
  this_ptr->field12_0x85c[0x59] = '\0';
  this_ptr->field12_0x85c[0x5a] = '\0';
  this_ptr->field12_0x85c[0x5b] = '\0';
  this_ptr->field12_0x85c[0x5c] = '\0';
  this_ptr->field12_0x85c[0x5d] = '\0';
  this_ptr->field12_0x85c[0x5e] = '\0';
  this_ptr->field12_0x85c[0x5f] = '\0';
  this_ptr->field12_0x85c[0x54] = '\0';
  this_ptr->field12_0x85c[0x55] = '\0';
  this_ptr->field12_0x85c[0x56] = '\0';
  this_ptr->field12_0x85c[0x57] = '\0';
  return;
}


// Assembly code:
// 005e2240: PUSH EBX
//   Label: core_turret.cpp_CTurret_FUN_005e2240
// 005e2241: PUSH ESI
// 005e2242: PUSH EDI
// 005e2243: PUSH EBP
// 005e2244: SUB ESP,0x8
// 005e2247: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005e224b: LEA EAX,[EBP + 0x584]
// 005e2251: PUSH EAX
// 005e2252: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 005e2257: ADD ESP,0x4
// 005e225a: PUSH EBP
// 005e225b: CALL core_weapon.cpp_CWeapon_FUN_005edff0
//   XREF to: 005edff0 (UNCONDITIONAL_CALL)
// 005e2260: ADD ESP,0x4
// 005e2263: LEA EAX,[EBP + 0x158]
// 005e2269: PUSH EAX
// 005e226a: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005e226f: MOV EDX,dword ptr [EAX + 0x100]
// 005e2275: ADD ESP,0x4
// 005e2278: DEC EDX
// 005e2279: PUSH EDX
// 005e227a: LEA ESI,[EBP + 0x860]
// 005e2280: PUSH EAX
// 005e2281: MOV EDI,EAX
// 005e2283: MOV EBX,ESI
// 005e2285: CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
//   XREF to: 00477890 (UNCONDITIONAL_CALL)
// 005e228a: MOV EDX,0xf149f2ca
// 005e228f: ADD ESP,0x8
// 005e2292: XOR ECX,ECX
// 005e2294: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 005e2297: MOV EDX,EAX
// 005e2299: MOV EAX,dword ptr [EDI + 0x104]
//   Label: LAB_005e2299
// 005e229f: CMP ECX,EAX
// 005e22a1: JGE 0x005e22f0
//   XREF to: 005e22f0 (CONDITIONAL_JUMP)
// 005e22a3: FILD dword ptr [EDX + 0x4]
// 005e22a6: FMUL double ptr [0x006565f8]
//   XREF to: 006565f8 (READ)
// 005e22ac: FILD dword ptr [EDX + 0x8]
// 005e22af: FADDP
// 005e22b1: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 005e22b5: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005e22b8: FNSTSW AX
// 005e22ba: SAHF
// 005e22bb: JA 0x005e22c3
//   XREF to: 005e22c3 (CONDITIONAL_JUMP)
// 005e22bd: INC ECX
//   Label: LAB_005e22bd
// 005e22be: ADD EDX,0xc
// 005e22c1: JMP 0x005e2299
//   XREF to: 005e2299 (UNCONDITIONAL_JUMP)
// 005e22c3: MOV EAX,EDX
//   Label: LAB_005e22c3
// 005e22c5: FILD dword ptr [EAX]
// 005e22c7: FMUL float ptr [0x00664b58]
//   XREF to: 00664b58 (READ)
// 005e22cd: FSTP float ptr [EBX]
// 005e22cf: FILD dword ptr [EAX + 0x4]
// 005e22d2: FMUL float ptr [0x00664b58]
//   XREF to: 00664b58 (READ)
// 005e22d8: FSTP float ptr [EBX + 0x4]
// 005e22db: FILD dword ptr [EAX + 0x8]
// 005e22de: FMUL float ptr [0x00664b58]
//   XREF to: 00664b58 (READ)
// 005e22e4: FSTP float ptr [EBX + 0x8]
// 005e22e7: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 005e22eb: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 005e22ee: JMP 0x005e22bd
//   XREF to: 005e22bd (UNCONDITIONAL_JUMP)
// 005e22f0: MOV dword ptr [EBP + 0x8b4],0x0
//   Label: LAB_005e22f0
// 005e22fa: MOV dword ptr [EBP + 0x8b8],0x0
// 005e2304: MOV dword ptr [EBP + 0x8b0],0x0
// 005e230e: ADD ESP,0x8
// 005e2311: POP EBP
// 005e2312: POP EDI
// 005e2313: POP ESI
// 005e2314: POP EBX
// 005e2315: RET
