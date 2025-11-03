// Name: core_fire.cpp_CGlassParticle_init_FUN_004c1c00
// Address: 004c1c00
// Address Range: [[004c1c00, 004c1ce2]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGlassParticle_init_FUN_004c1c00(CGlassParticle * this_ptr, STriangleVertices * triangle_vertices, CVector3f * uv_u_per_vertex, CVector3f * uv_v_per_vertex, SMRGLTextureBasic * texture, int lifetime)
// Cross-references:
//   core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00 (004c7d00) at 004c7d52 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00629ce3 = 3
//   float FLOAT_00629ce7 = 0.3333333
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

void __cdecl
core_fire_cpp_CGlassParticle_init_FUN_004c1c00
          (CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3f *uv_u_per_vertex,
          CVector3f *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  SMRGLTextureBasic *pSVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  int *in_stack_0000001c;
  int in_stack_00000020;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_58;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40 [2];
  float fStack_20;
  float fStack_18;
  float local_10;
  
  bVar7 = 0;
  local_74 = triangle_vertices->vertices[0].x + triangle_vertices->vertices[1].x;
  local_70 = triangle_vertices->vertices[0].y + triangle_vertices->vertices[1].y;
  local_6c = triangle_vertices->vertices[0].z + triangle_vertices->vertices[1].z;
  local_44 = local_74 + triangle_vertices->vertices[2].x;
  local_80 = local_44 / FLOAT_00629ce3;
  local_40[0].x = local_70 + triangle_vertices->vertices[2].y;
  local_40[0].y = local_6c + triangle_vertices->vertices[2].z;
  local_7c = local_40[0].x * FLOAT_00629ce7;
  local_78 = local_40[0].y * FLOAT_00629ce7;
  if (&local_58.z != &local_80) {
    local_58.z = local_80;
    local_4c = local_7c;
    local_48 = local_78;
  }
  (this_ptr->uv_u_per_vertex).x = uv_u_per_vertex->x;
  (this_ptr->uv_u_per_vertex).y = uv_u_per_vertex->y;
  (this_ptr->uv_u_per_vertex).z = uv_u_per_vertex->z;
  (this_ptr->uv_v_per_vertex).x = uv_v_per_vertex->x;
  (this_ptr->uv_v_per_vertex).y = uv_v_per_vertex->y;
  (this_ptr->uv_v_per_vertex).z = uv_v_per_vertex->z;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,3.1415927);
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = fVar3;
  fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
  (this_ptr->euler_angles).y = fVar4;
  local_58.y = triangle_vertices->vertices[0].x - local_48;
  local_58.z = triangle_vertices->vertices[0].y - local_44;
  local_4c = triangle_vertices->vertices[0].z - local_40[0].x;
  if (&this_ptr->triangle_delta != (STriangleVertices *)&local_58.y) {
    (this_ptr->triangle_delta).vertices[0].x = local_58.y;
    (this_ptr->triangle_delta).vertices[0].y = local_58.z;
    (this_ptr->triangle_delta).vertices[0].z = local_4c;
  }
  fVar4 = triangle_vertices->vertices[1].y;
  pCVar1 = (this_ptr->triangle_delta).vertices + 1;
  fVar2 = triangle_vertices->vertices[1].z;
  if (pCVar1 != (CVector3f *)&stack0xffffff64) {
    pCVar1->x = triangle_vertices->vertices[1].x - local_48;
    (this_ptr->triangle_delta).vertices[1].y = fVar4 - local_44;
    (this_ptr->triangle_delta).vertices[1].z = fVar2 - local_40[0].x;
  }
  local_90 = triangle_vertices->vertices[2].x - local_48;
  local_8c = triangle_vertices->vertices[2].y - local_44;
  local_88 = triangle_vertices->vertices[2].z - local_40[0].x;
  pCVar1 = (this_ptr->triangle_delta).vertices + 2;
  if (pCVar1 != (CVector3f *)&local_90) {
    pCVar1->x = local_90;
    (this_ptr->triangle_delta).vertices[2].y = local_8c;
    (this_ptr->triangle_delta).vertices[2].z = local_88;
  }
  pSVar6 = &this_ptr->texture;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    (pSVar6->base).type = *in_stack_0000001c;
    in_stack_0000001c = in_stack_0000001c + (uint)bVar7 * -2 + 1;
    pSVar6 = (SMRGLTextureBasic *)((int)pSVar6 + (uint)bVar7 * -8 + 4);
  }
  this_ptr->lifetime = in_stack_00000020;
  local_84 = (this_ptr->triangle_delta).vertices[2].x - (this_ptr->triangle_delta).vertices[0].x;
  local_80 = (this_ptr->triangle_delta).vertices[2].y - (this_ptr->triangle_delta).vertices[0].y;
  local_7c = (this_ptr->triangle_delta).vertices[2].z - (this_ptr->triangle_delta).vertices[0].z;
  fStack_20 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80) *
              (float)DOUBLE_00629ceb;
  local_10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
  fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
  fVar8 = (float10)fcos((float10)fVar4);
  fVar9 = (float10)fcos((float10)fVar3);
  fVar10 = (float10)fsin((float10)fVar4);
  fVar11 = (float10)fsin((float10)fVar3);
  local_58.y = (float)(fVar11 * (float10)fStack_18);
  local_58.x = (float)((float10)fStack_18 * fVar8 * fVar9);
  local_58.z = (float)((float10)fStack_18 * fVar10 * fVar9);
  core_particle_cpp_CParticle_setup_FUN_00545680(&this_ptr->base,local_40,&local_58);
  return;
}


// Assembly code:
// 004c1c00: PUSH EBX
//   Label: core_fire.cpp_CGlassParticle_init_FUN_004c1c00
// 004c1c01: PUSH ESI
// 004c1c02: PUSH EDI
// 004c1c03: SUB ESP,0x98
// 004c1c09: MOV EBX,dword ptr [ESP + 0xa8]
// 004c1c10: MOV ESI,dword ptr [ESP + 0xac]
// 004c1c17: MOV ECX,dword ptr [ESP + 0xb0]
// 004c1c1e: MOV EDI,dword ptr [ESP + 0xb4]
// 004c1c25: LEA EDX,[ESI + 0xc]
// 004c1c28: FLD float ptr [ESI]
// 004c1c2a: FADD float ptr [EDX]
// 004c1c2c: FSTP float ptr [ESP + 0x30]
// 004c1c30: FLD float ptr [ESI + 0x4]
// 004c1c33: FADD float ptr [EDX + 0x4]
// 004c1c36: LEA EAX,[ESI + 0x18]
// 004c1c39: FSTP float ptr [ESP + 0x34]
// 004c1c3d: FLD float ptr [ESI + 0x8]
// 004c1c40: FADD float ptr [EDX + 0x8]
// 004c1c43: FLD float ptr [ESP + 0x30]
// 004c1c47: FXCH
// 004c1c49: FSTP float ptr [ESP + 0x38]
// 004c1c4d: FADD float ptr [EAX]
// 004c1c4f: FST float ptr [ESP + 0x60]
// 004c1c53: FDIV float ptr [0x00629ce3]
//   XREF to: 00629ce3 (READ)
// 004c1c59: FLD float ptr [ESP + 0x34]
// 004c1c5d: FADD float ptr [EAX + 0x4]
// 004c1c60: FLD float ptr [ESP + 0x38]
// 004c1c64: FXCH
// 004c1c66: FST float ptr [ESP + 0x64]
// 004c1c6a: FXCH
// 004c1c6c: FADD float ptr [EAX + 0x8]
// 004c1c6f: FXCH
// 004c1c71: FLD float ptr [0x00629ce7]
//   XREF to: 00629ce7 (READ)
// 004c1c77: FXCH
// 004c1c79: FMUL ST1
// 004c1c7b: FXCH ST2
// 004c1c7d: FST float ptr [ESP + 0x68]
// 004c1c81: FMULP
// 004c1c83: LEA EDX,[ESP + 0x54]
// 004c1c87: LEA EAX,[ESP + 0x24]
// 004c1c8b: FXCH
// 004c1c8d: FSTP float ptr [ESP + 0x28]
// 004c1c91: FSTP float ptr [ESP + 0x2c]
// 004c1c95: FSTP float ptr [ESP + 0x24]
// 004c1c99: CMP EDX,EAX
// 004c1c9b: JZ 0x004c1cb5
//   XREF to: 004c1cb5 (CONDITIONAL_JUMP)
// 004c1c9d: MOV EAX,dword ptr [ESP + 0x24]
// 004c1ca1: MOV dword ptr [ESP + 0x54],EAX
// 004c1ca5: MOV EAX,dword ptr [ESP + 0x28]
// 004c1ca9: MOV dword ptr [ESP + 0x58],EAX
// 004c1cad: MOV EAX,dword ptr [ESP + 0x2c]
// 004c1cb1: MOV dword ptr [ESP + 0x5c],EAX
// 004c1cb5: MOV EAX,dword ptr [ECX]
//   Label: LAB_004c1cb5
// 004c1cb7: MOV dword ptr [EBX + 0x60],EAX
// 004c1cba: MOV EAX,dword ptr [ECX + 0x4]
// 004c1cbd: MOV dword ptr [EBX + 0x64],EAX
// 004c1cc0: MOV EAX,dword ptr [ECX + 0x8]
// 004c1cc3: MOV dword ptr [EBX + 0x68],EAX
// 004c1cc6: MOV EAX,dword ptr [EDI]
// 004c1cc8: MOV dword ptr [EBX + 0x6c],EAX
// 004c1ccb: MOV EAX,dword ptr [EDI + 0x4]
// 004c1cce: MOV dword ptr [EBX + 0x70],EAX
// 004c1cd1: PUSH 0x40490fdb
// 004c1cd6: MOV EAX,dword ptr [EDI + 0x8]
// 004c1cd9: PUSH 0x0
// 004c1cdb: MOV dword ptr [EBX + 0x74],EAX
// 004c1cde: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
