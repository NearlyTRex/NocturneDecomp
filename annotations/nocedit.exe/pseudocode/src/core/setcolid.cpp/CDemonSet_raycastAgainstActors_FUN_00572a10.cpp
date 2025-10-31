// Name: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
// Address: 00572a10
// Address Range: [[00572a10, 00572e16]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10(CDemonSet * this_ptr, float min_t, CVector3f * ray_origin, CVector3f * ray_target, float max_t)
// Cross-references:
//   core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340 (00572340) at 0057240e [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 (00572530) at 005725e4 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_refinedRaycast_FUN_005726c0 (005726c0) at 00572726 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460 (00572460) at 005724a7 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0

#include "nocturne.h"

float __cdecl
core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
          (CDemonSet *this_ptr,float min_t,CVector3f *ray_origin,CVector3f *ray_target,float max_t)

{
  CDemonActor *pCVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  void **ppvStack_e0;
  undefined1 *puStack_dc;
  SCollisionInfo local_c8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined1 local_88 [8];
  float local_80;
  undefined1 local_7c [8];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f local_4c;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3f CStack_30;
  float local_24;
  float local_20;
  CDemonSet *local_18;
  undefined4 *puStack_14;
  
  this_ptr->field11_0x14d148 = -1;
  this_ptr->field12_0x14d14c = -1;
  this_ptr->collision_actor = (CDemonActor *)0x0;
  if (-1 < this_ptr->ignore_list_count) {
    if (max_t <= 0.0) {
      return 0.0;
    }
    if (min_t < 0.0) {
      min_t = 0.0;
    }
    local_24 = max_t;
    if (1.0 < max_t) {
      local_24 = 1.0;
    }
    local_70 = ray_target->x - ray_origin->x;
    local_6c = ray_target->y - ray_origin->y;
    local_64 = local_70 * local_24;
    local_68 = ray_target->z - ray_origin->z;
    local_60 = local_6c * local_24;
    local_5c = local_68 * local_24;
    if ((CVector3f *)local_88 != ray_origin) {
      local_88._0_4_ = ray_origin->x;
      local_88._4_4_ = ray_origin->y;
      local_80 = ray_origin->z;
    }
    if ((CVector3f *)local_7c != ray_origin) {
      local_7c._0_4_ = ray_origin->x;
      local_7c._4_4_ = ray_origin->y;
      local_74 = ray_origin->z;
    }
    local_4c.x = ray_origin->x + local_64;
    local_4c.y = ray_origin->y + local_60;
    local_4c.z = ray_origin->z + local_5c;
    puStack_dc = (undefined1 *)0x572b4d;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)local_88,&local_4c);
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_c8);
    local_c8.field1_0x4 = (float)this_ptr->ray_type;
    local_c8.field2_0x8 = this_ptr->field52_0x15f684;
    local_c8.field3_0xc = this_ptr->field53_0x15f688;
    local_c8.field4_0x10 = this_ptr->field54_0x15f68c;
    local_c8.field5_0x14 = this_ptr->field55_0x15f690;
    puStack_14 = (undefined4 *)0x0;
    if (0 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08)) {
      local_18 = this_ptr;
      do {
        pCVar1 = *(CDemonActor **)(local_18->field19_0x14f0a0 + 0x7d0c);
        pvVar3 = (void *)core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,pCVar1);
        if (pvVar3 == (void *)0x0) {
          local_c8.field2_0x8 = (float)pvVar3;
          local_c8.field3_0xc = (float)pvVar3;
          iVar4 = (*((pCVar1->metadata).vtable)->hasCollision)
                            (pCVar1,(SCollisionInfo *)&ppvStack_e0);
          if (iVar4 != 0) {
            puStack_dc = &stack0xffffff34;
            ppvStack_e0 = &local_c8.result_ptr;
            local_c8.ray_type = (int)core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470(pCVar1);
            if ((((float)local_c8.ray_type <= 1.0) &&
                (fVar2 = (float)local_c8.ray_type * local_20, local_c8.ray_type = (int)fVar2,
                fVar2 < max_t)) && (min_t < fVar2)) {
              if (&uStack_a0 != puStack_14) {
                *puStack_14 = uStack_a0;
                puStack_14[1] = uStack_9c;
                puStack_14[2] = uStack_98;
              }
              this_ptr->collision_actor = pCVar1;
              this_ptr->field11_0x14d148 = iStack_94;
              this_ptr->field12_0x14d14c = local_88._0_4_;
              fStack_3c = ray_target->x - ray_origin->x;
              fStack_38 = ray_target->y - ray_origin->y;
              fStack_54 = fStack_3c * fVar2;
              fStack_34 = ray_target->z - ray_origin->z;
              fStack_50 = fStack_38 * fVar2;
              local_4c.x = fStack_34 * fVar2;
              if (&local_60 != &fStack_54) {
                local_60 = fStack_54;
                local_5c = fStack_50;
                fStack_58 = local_4c.x;
              }
              if ((CVector3f *)(local_88 + 4) != ray_origin) {
                local_88._4_4_ = ray_origin->x;
                local_80 = ray_origin->y;
                local_7c._0_4_ = ray_origin->z;
              }
              if ((CVector3f *)(local_7c + 4) != ray_origin) {
                local_7c._4_4_ = ray_origin->x;
                local_74 = ray_origin->y;
                local_70 = ray_origin->z;
              }
              CStack_30.x = ray_origin->x + local_60;
              CStack_30.y = ray_origin->y + local_5c;
              CStack_30.z = ray_origin->z + fStack_58;
              local_20 = fVar2;
              core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                        ((CBoundingBox3D *)(local_88 + 4),&CStack_30);
              max_t = fVar2;
            }
          }
        }
        local_18 = (CDemonSet *)local_18->cameras;
        puStack_14 = (undefined4 *)((int)puStack_14 + 1);
      } while ((int)puStack_14 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08));
    }
    pCVar1 = this_ptr->collision_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      iVar4 = (*((pCVar1->metadata).vtable)->getGroundType)(pCVar1);
      this_ptr->ground_type = iVar4;
    }
  }
  return max_t;
}


// Assembly code:
// 00572a10: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
// 00572a11: PUSH ESI
// 00572a12: PUSH EDI
// 00572a13: PUSH EBP
// 00572a14: MOV EBP,ESP
// 00572a16: SUB ESP,0xc0
// 00572a1c: AND ESP,0xfffffff8
// 00572a1f: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00572a22: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00572a25: MOV dword ptr [EDI + 0x14d148],0xffffffff
// 00572a2f: MOV dword ptr [EDI + 0x14d14c],0xffffffff
// 00572a39: MOV EDX,dword ptr [EDI + 0x15f694]
// 00572a3f: MOV dword ptr [EDI + 0x14d144],0x0
// 00572a49: TEST EDX,EDX
// 00572a4b: JL 0x00572c1c
//   XREF to: 00572c1c (CONDITIONAL_JUMP)
// 00572a51: FLD float ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00572a54: FLDZ
// 00572a56: FCOMPP
// 00572a58: FNSTSW AX
// 00572a5a: SAHF
// 00572a5b: JNC 0x00572c34
//   XREF to: 00572c34 (CONDITIONAL_JUMP)
// 00572a61: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00572a64: FLDZ
// 00572a66: FCOMPP
// 00572a68: FNSTSW AX
// 00572a6a: SAHF
// 00572a6b: JA 0x00572c4b
//   XREF to: 00572c4b (CONDITIONAL_JUMP)
// 00572a71: FLD float ptr [EBP + 0x24]
//   Label: LAB_00572a71
//   XREF to: Stack[0x14] (READ)
// 00572a74: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00572a77: FLD1
// 00572a79: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00572a80: FCOMPP
// 00572a82: FNSTSW AX
// 00572a84: SAHF
// 00572a85: JNC 0x00572a92
//   XREF to: 00572a92 (CONDITIONAL_JUMP)
// 00572a87: MOV dword ptr [ESP + 0xac],0x3f800000
//   XREF to: Stack[-0x24] (WRITE)
// 00572a92: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_00572a92
//   XREF to: Stack[0x10] (READ)
// 00572a95: FLD float ptr [EAX]
// 00572a97: FSUB float ptr [EBX]
// 00572a99: FST float ptr [ESP + 0x60]
//   XREF to: Stack[-0x70] (WRITE)
// 00572a9d: FLD float ptr [EAX + 0x4]
// 00572aa0: FSUB float ptr [EBX + 0x4]
// 00572aa3: FXCH
// 00572aa5: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x24] (READ)
// 00572aac: FXCH
// 00572aae: FMUL ST1
// 00572ab0: FXCH ST2
// 00572ab2: FST float ptr [ESP + 0x64]
//   XREF to: Stack[-0x6c] (WRITE)
// 00572ab6: FLD float ptr [EAX + 0x8]
// 00572ab9: FSUB float ptr [EBX + 0x8]
// 00572abc: FXCH
// 00572abe: FMUL ST2
// 00572ac0: FXCH
// 00572ac2: FST float ptr [ESP + 0x68]
//   XREF to: Stack[-0x68] (WRITE)
// 00572ac6: FMULP ST2
// 00572ac8: MOV EDX,EBX
// 00572aca: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x88] (DATA)
// 00572ace: FXCH ST2
// 00572ad0: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x64] (WRITE)
// 00572ad4: FXCH
// 00572ad6: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x60] (WRITE)
// 00572ada: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x5c] (WRITE)
// 00572ade: CMP EAX,EBX
// 00572ae0: JZ 0x00572af6
//   XREF to: 00572af6 (CONDITIONAL_JUMP)
// 00572ae2: MOV EAX,dword ptr [EBX]
// 00572ae4: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 00572ae8: MOV EAX,dword ptr [EBX + 0x4]
// 00572aeb: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 00572aef: MOV EAX,dword ptr [EBX + 0x8]
// 00572af2: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00572af6: LEA EAX,[ESP + 0x54]
//   Label: LAB_00572af6
//   XREF to: Stack[-0x7c] (DATA)
// 00572afa: CMP EAX,EDX
// 00572afc: JZ 0x00572b12
//   XREF to: 00572b12 (CONDITIONAL_JUMP)
// 00572afe: MOV EAX,dword ptr [EDX]
// 00572b00: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 00572b04: MOV EAX,dword ptr [EDX + 0x4]
// 00572b07: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00572b0b: MOV EAX,dword ptr [EDX + 0x8]
// 00572b0e: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00572b12: FLD float ptr [EBX]
//   Label: LAB_00572b12
// 00572b14: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x4c] (DATA)
// 00572b1b: FADD float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x64] (READ)
// 00572b1f: PUSH EAX
// 00572b20: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x4c] (WRITE)
// 00572b27: FLD float ptr [EBX + 0x4]
// 00572b2a: FADD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x60] (READ)
// 00572b2e: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x88] (DATA)
// 00572b32: FSTP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x48] (WRITE)
// 00572b39: FLD float ptr [EBX + 0x8]
// 00572b3c: FADD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x5c] (READ)
// 00572b40: PUSH EAX
// 00572b41: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x44] (WRITE)
// 00572b48: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 00572b4d: ADD ESP,0x8
// 00572b50: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xcc] (DATA)
// 00572b54: PUSH EAX
// 00572b55: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 00572b5a: ADD ESP,0x4
// 00572b5d: MOV EAX,dword ptr [EDI + 0x15f680]
// 00572b63: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 00572b67: MOV EAX,dword ptr [EDI + 0x15f684]
// 00572b6d: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 00572b71: MOV EAX,dword ptr [EDI + 0x15f688]
// 00572b77: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 00572b7b: MOV EAX,dword ptr [EDI + 0x15f68c]
// 00572b81: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 00572b85: MOV EAX,dword ptr [EDI + 0x15f690]
// 00572b8b: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 00572b8f: XOR EAX,EAX
// 00572b91: MOV EDX,dword ptr [EDI + 0x156da8]
// 00572b97: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00572b9e: TEST EDX,EDX
// 00572ba0: JLE 0x00572bff
//   XREF to: 00572bff (CONDITIONAL_JUMP)
// 00572ba2: LEA EAX,[EDI + 0x14d128]
// 00572ba8: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00572baf: MOV dword ptr [ESP + 0xb0],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 00572bb6: MOV ESI,dword ptr [ESP + 0xb0]
//   Label: LAB_00572bb6
//   XREF to: Stack[-0x20] (READ)
// 00572bbd: MOV ESI,dword ptr [ESI + 0x156dac]
// 00572bc3: PUSH ESI
// 00572bc4: PUSH EDI
// 00572bc5: CALL core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
//   XREF to: 00572e20 (UNCONDITIONAL_CALL)
// 00572bca: ADD ESP,0x8
// 00572bcd: TEST EAX,EAX
// 00572bcf: JZ 0x00572c55
//   XREF to: 00572c55 (CONDITIONAL_JUMP)
// 00572bd5: MOV ESI,dword ptr [ESP + 0xb0]
//   Label: LAB_00572bd5
//   XREF to: Stack[-0x20] (READ)
// 00572bdc: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x1c] (READ)
// 00572be3: MOV EDX,dword ptr [EDI + 0x156da8]
// 00572be9: ADD ESI,0x4
// 00572bec: INC EAX
// 00572bed: MOV dword ptr [ESP + 0xb0],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00572bf4: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00572bfb: CMP EAX,EDX
// 00572bfd: JL 0x00572bb6
//   XREF to: 00572bb6 (CONDITIONAL_JUMP)
// 00572bff: MOV ECX,dword ptr [EDI + 0x14d144]
//   Label: LAB_00572bff
// 00572c05: TEST ECX,ECX
// 00572c07: JZ 0x00572c1c
//   XREF to: 00572c1c (CONDITIONAL_JUMP)
// 00572c09: PUSH ECX
// 00572c0a: MOV EDX,dword ptr [ECX + 0x154]
// 00572c10: CALL dword ptr [EDX + 0x3c]
// 00572c13: ADD ESP,0x4
// 00572c16: MOV dword ptr [EDI + 0x14d134],EAX
// 00572c1c: MOV EAX,dword ptr [EBP + 0x24]
//   Label: LAB_00572c1c
//   XREF to: Stack[0x14] (READ)
// 00572c1f: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00572c26: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x28] (READ)
// 00572c2d: MOV ESP,EBP
// 00572c2f: POP EBP
// 00572c30: POP EDI
// 00572c31: POP ESI
// 00572c32: POP EBX
// 00572c33: RET
// 00572c34: XOR ECX,ECX
//   Label: LAB_00572c34
// 00572c36: MOV dword ptr [ESP + 0xa8],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00572c3d: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x28] (READ)
// 00572c44: MOV ESP,EBP
// 00572c46: POP EBP
// 00572c47: POP EDI
// 00572c48: POP ESI
// 00572c49: POP EBX
// 00572c4a: RET
// 00572c4b: XOR ECX,ECX
//   Label: LAB_00572c4b
// 00572c4d: MOV dword ptr [EBP + 0x18],ECX
//   XREF to: Stack[0x8] (WRITE)
// 00572c50: JMP 0x00572a71
//   XREF to: 00572a71 (UNCONDITIONAL_JUMP)
// 00572c55: MOV dword ptr [ESP + 0x24],EAX
//   Label: LAB_00572c55
//   XREF to: Stack[-0xac] (WRITE)
// 00572c59: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 00572c5d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xcc] (DATA)
// 00572c61: PUSH EAX
// 00572c62: MOV EDX,dword ptr [ESI + 0x154]
// 00572c68: PUSH ESI
// 00572c69: CALL dword ptr [EDX + 0x34]
// 00572c6c: ADD ESP,0x8
// 00572c6f: TEST EAX,EAX
// 00572c71: JZ 0x00572bd5
//   XREF to: 00572bd5 (CONDITIONAL_JUMP)
// 00572c77: LEA EDX,[ESP + 0x48]
// 00572c7b: PUSH EDX
// 00572c7c: PUSH EAX
// 00572c7d: LEA EAX,[ESP + 0xc]
// 00572c81: PUSH EAX
// 00572c82: LEA EAX,[ESP + 0x38]
// 00572c86: PUSH EAX
// 00572c87: LEA EAX,[ESP + 0x7c]
// 00572c8b: PUSH EAX
// 00572c8c: PUSH EBX
// 00572c8d: PUSH ESI
// 00572c8e: CALL core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
//   XREF to: 00409470 (UNCONDITIONAL_CALL)
// 00572c93: MOV dword ptr [ESP + 0xd8],EAX
// 00572c9a: FLD float ptr [ESP + 0xd8]
// 00572ca1: ADD ESP,0x1c
// 00572ca4: FST float ptr [ESP]
// 00572ca7: FLD1
// 00572ca9: FCOMPP
// 00572cab: FNSTSW AX
// 00572cad: SAHF
// 00572cae: JC 0x00572bd5
//   XREF to: 00572bd5 (CONDITIONAL_JUMP)
// 00572cb4: FLD float ptr [ESP]
// 00572cb7: FMUL float ptr [ESP + 0xac]
// 00572cbe: FST float ptr [ESP]
// 00572cc1: FCOMP float ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00572cc4: FNSTSW AX
// 00572cc6: SAHF
// 00572cc7: JNC 0x00572bd5
//   XREF to: 00572bd5 (CONDITIONAL_JUMP)
// 00572ccd: FLD float ptr [ESP]
// 00572cd0: FCOMP float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00572cd3: FNSTSW AX
// 00572cd5: SAHF
// 00572cd6: JBE 0x00572bd5
//   XREF to: 00572bd5 (CONDITIONAL_JUMP)
// 00572cdc: MOV EAX,dword ptr [ESP]
// 00572cdf: MOV ECX,dword ptr [ESP + 0xb8]
// 00572ce6: MOV dword ptr [EBP + 0x24],EAX
//   XREF to: Stack[0x14] (WRITE)
// 00572ce9: LEA EAX,[ESP + 0x2c]
// 00572ced: CMP EAX,ECX
// 00572cef: JZ 0x00572d05
//   XREF to: 00572d05 (CONDITIONAL_JUMP)
// 00572cf1: MOV EAX,dword ptr [ESP + 0x2c]
// 00572cf5: MOV dword ptr [ECX],EAX
// 00572cf7: MOV EAX,dword ptr [ESP + 0x30]
// 00572cfb: MOV dword ptr [ECX + 0x4],EAX
// 00572cfe: MOV EAX,dword ptr [ESP + 0x34]
// 00572d02: MOV dword ptr [ECX + 0x8],EAX
// 00572d05: MOV dword ptr [EDI + 0x14d144],ESI
//   Label: LAB_00572d05
// 00572d0b: MOV EAX,dword ptr [ESP + 0x38]
// 00572d0f: MOV dword ptr [EDI + 0x14d148],EAX
// 00572d15: MOV EAX,dword ptr [ESP + 0x44]
// 00572d19: MOV dword ptr [EDI + 0x14d14c],EAX
// 00572d1f: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00572d22: MOV dword ptr [ESP + 0xac],EAX
// 00572d29: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00572d2c: FLD float ptr [EAX]
// 00572d2e: FSUB float ptr [EBX]
// 00572d30: FST float ptr [ESP + 0x90]
// 00572d37: FLD float ptr [EAX + 0x4]
// 00572d3a: FSUB float ptr [EBX + 0x4]
// 00572d3d: FXCH
// 00572d3f: FMUL float ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00572d42: FXCH
// 00572d44: FST float ptr [ESP + 0x94]
// 00572d4b: FLD float ptr [EAX + 0x8]
// 00572d4e: FSUB float ptr [EBX + 0x8]
// 00572d51: FXCH
// 00572d53: FMUL float ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00572d56: FXCH
// 00572d58: FST float ptr [ESP + 0x98]
// 00572d5f: FMUL float ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00572d62: LEA ESI,[ESP + 0x6c]
// 00572d66: LEA EAX,[ESP + 0x78]
// 00572d6a: FXCH ST2
// 00572d6c: FSTP float ptr [ESP + 0x78]
// 00572d70: FSTP float ptr [ESP + 0x7c]
// 00572d74: FSTP float ptr [ESP + 0x80]
// 00572d7b: CMP ESI,EAX
// 00572d7d: JZ 0x00572d9a
//   XREF to: 00572d9a (CONDITIONAL_JUMP)
// 00572d7f: MOV EAX,dword ptr [ESP + 0x78]
// 00572d83: MOV dword ptr [ESP + 0x6c],EAX
// 00572d87: MOV EAX,dword ptr [ESP + 0x7c]
// 00572d8b: MOV dword ptr [ESP + 0x70],EAX
// 00572d8f: MOV EAX,dword ptr [ESP + 0x80]
// 00572d96: MOV dword ptr [ESP + 0x74],EAX
// 00572d9a: LEA EAX,[ESP + 0x48]
//   Label: LAB_00572d9a
// 00572d9e: MOV ESI,EBX
// 00572da0: CMP EAX,EBX
// 00572da2: JZ 0x00572db8
//   XREF to: 00572db8 (CONDITIONAL_JUMP)
// 00572da4: MOV EAX,dword ptr [EBX]
// 00572da6: MOV dword ptr [ESP + 0x48],EAX
// 00572daa: MOV EAX,dword ptr [EBX + 0x4]
// 00572dad: MOV dword ptr [ESP + 0x4c],EAX
// 00572db1: MOV EAX,dword ptr [EBX + 0x8]
// 00572db4: MOV dword ptr [ESP + 0x50],EAX
// 00572db8: LEA EAX,[ESP + 0x54]
//   Label: LAB_00572db8
// 00572dbc: CMP EAX,ESI
// 00572dbe: JZ 0x00572dd4
//   XREF to: 00572dd4 (CONDITIONAL_JUMP)
// 00572dc0: MOV EAX,dword ptr [ESI]
// 00572dc2: MOV dword ptr [ESP + 0x54],EAX
// 00572dc6: MOV EAX,dword ptr [ESI + 0x4]
// 00572dc9: MOV dword ptr [ESP + 0x58],EAX
// 00572dcd: MOV EAX,dword ptr [ESI + 0x8]
// 00572dd0: MOV dword ptr [ESP + 0x5c],EAX
// 00572dd4: FLD float ptr [EBX]
//   Label: LAB_00572dd4
// 00572dd6: LEA EAX,[ESP + 0x9c]
// 00572ddd: FADD float ptr [ESP + 0x6c]
// 00572de1: PUSH EAX
// 00572de2: FSTP float ptr [ESP + 0xa0]
// 00572de9: FLD float ptr [EBX + 0x4]
// 00572dec: FADD float ptr [ESP + 0x74]
// 00572df0: LEA EAX,[ESP + 0x4c]
// 00572df4: FSTP float ptr [ESP + 0xa4]
// 00572dfb: FLD float ptr [EBX + 0x8]
// 00572dfe: FADD float ptr [ESP + 0x78]
// 00572e02: PUSH EAX
// 00572e03: FSTP float ptr [ESP + 0xac]
// 00572e0a: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 00572e0f: ADD ESP,0x8
// 00572e12: JMP 0x00572bd5
//   XREF to: 00572bd5 (UNCONDITIONAL_JUMP)
