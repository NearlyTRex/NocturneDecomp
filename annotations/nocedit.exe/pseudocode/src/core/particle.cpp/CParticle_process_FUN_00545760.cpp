// Name: core_particle.cpp_CParticle_process_FUN_00545760
// Address: 00545760
// Address Range: [[00545760, 00545a7f]]
// Convention: __cdecl
// Signature: void core_particle.cpp_CParticle_process_FUN_00545760(CParticle * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireball_process_FUN_004c0b30 (004c0b30) at 004c0b51 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_process_FUN_004c20f0 (004c20f0) at 004c2121 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRock_process_FUN_004c17f0 (004c17f0) at 004c17f9 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CShell_process_FUN_004c6300 (004c6300) at 004c631a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSpark_process_FUN_004c0240 (004c0240) at 004c0298 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0063e728 = 0.8000000
//   float FLOAT_0063e72c = 2
//   float FLOAT_0063e730 = -0.7000000
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.delta_time_float
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
//   core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970
//   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880

#include "nocturne.h"

void __cdecl core_particle_cpp_CParticle_process_FUN_00545760(CParticle *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  byte bVar5;
  float afStackY_1058 [999];
  CDemonRaytrace *this_ptr_00;
  CVector3i *in_stack_ffffff50;
  CVector3i *voxel_coords;
  CVector3i CStack_70;
  CParticle CStack_5c;
  undefined1 auStack_24 [8];
  float local_1c;
  
  bVar5 = 0;
  if (0.0 < this_ptr->lifetime_remaining) {
    if ((CParticle *)&this_ptr->previous_position != this_ptr) {
      (this_ptr->previous_position).x = (this_ptr->position).x;
      (this_ptr->previous_position).y = (this_ptr->position).y;
      (this_ptr->previous_position).z = (this_ptr->position).z;
    }
    this_ptr->collision_result = this_ptr->collision_flag;
    auStack_24._4_4_ = g_CGamePtr->delta_time_float;
    (this_ptr->velocity).y =
         this_ptr->gravity_acceleration * (float)auStack_24._4_4_ + (this_ptr->velocity).y;
    fVar4 = (this_ptr->velocity).y;
    fVar2 = (this_ptr->velocity).z;
    (this_ptr->position).x =
         (this_ptr->position).x + (this_ptr->velocity).x * (float)auStack_24._4_4_;
    (this_ptr->position).y = (this_ptr->position).y + fVar4 * (float)auStack_24._4_4_;
    (this_ptr->position).z = (this_ptr->position).z + fVar2 * (float)auStack_24._4_4_;
    local_1c = (float)auStack_24._4_4_;
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
              (&g_CDemonRaytraceInstance,&this_ptr->position,in_stack_ffffff50);
    voxel_coords = &CStack_70;
    this_ptr_00 = &g_CDemonRaytraceInstance;
    CStack_70.x = (int)CStack_5c.previous_position.y;
    *(undefined4 *)((int)&CStack_70 + (uint)bVar5 * -8 + 4) =
         *(undefined4 *)(auStack_24 + (uint)bVar5 * -8 + -0xc);
    *(undefined4 *)((int)&CStack_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(undefined4 *)(auStack_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -8);
    iVar3 = core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970(this_ptr_00,voxel_coords);
    this_ptr->collision_flag = iVar3;
    if ((iVar3 != 0) || (this_ptr->collision_result != 0)) {
      pCVar1 = &this_ptr->previous_position;
      fVar4 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                        (&g_CDemonRaytraceInstance,pCVar1,&this_ptr->position,
                         (CVector3f *)auStack_24,(int *)0x0);
      if ((0.0 <= fVar4) && (fVar4 < 1.0)) {
        CStack_5c.lifetime_remaining = (this_ptr->position).x - pCVar1->x;
        CStack_5c.gravity_acceleration = (this_ptr->position).y - (this_ptr->previous_position).y;
        CStack_5c.collision_flag = (int)((this_ptr->position).z - (this_ptr->previous_position).z);
        CStack_70.x = (int)(CStack_5c.gravity_acceleration * fVar4);
        CStack_70.y = (int)((float)CStack_5c.collision_flag * fVar4);
        CStack_5c.position.x = pCVar1->x + CStack_5c.lifetime_remaining * fVar4 * FLOAT_0063e728;
        CStack_5c.position.y = (this_ptr->previous_position).y + (float)CStack_70.x * FLOAT_0063e728
        ;
        CStack_5c.position.z = (this_ptr->previous_position).z + (float)CStack_70.y * FLOAT_0063e728
        ;
        if (this_ptr != &CStack_5c) {
          (this_ptr->position).x = CStack_5c.position.x;
          (this_ptr->position).y = CStack_5c.position.y;
          (this_ptr->position).z = CStack_5c.position.z;
        }
        iVar3 = (*this_ptr->vtable->onCollision)(this_ptr,(CVector3f *)(auStack_24 + 4));
        if (iVar3 == 0) {
          pCVar1 = &this_ptr->velocity;
          fVar2 = (unaff_EBX * (this_ptr->velocity).z +
                  unaff_EDI * pCVar1->x + fVar4 * (this_ptr->velocity).y) * FLOAT_0063e72c;
          if (pCVar1 != (CVector3f *)&CStack_5c.collision_flag) {
            pCVar1->x = unaff_EDI * fVar2 - pCVar1->x;
            (this_ptr->velocity).y = fVar4 * fVar2 - (this_ptr->velocity).y;
            (this_ptr->velocity).z = unaff_EBX * fVar2 - (this_ptr->velocity).z;
          }
          pCVar1 = &this_ptr->velocity;
          fVar4 = (this_ptr->velocity).y * FLOAT_0063e730;
          fVar2 = FLOAT_0063e730 * (this_ptr->velocity).z;
          if (pCVar1 != (CVector3f *)auStack_24) {
            pCVar1->x = pCVar1->x * FLOAT_0063e730;
            (this_ptr->velocity).y = fVar4;
            (this_ptr->velocity).z = fVar2;
          }
        }
        else {
          this_ptr->lifetime_remaining = 0.0;
        }
      }
    }
    fVar4 = this_ptr->lifetime_remaining - (float)this_ptr;
    this_ptr->lifetime_remaining = fVar4;
    if (fVar4 < 0.0) {
      this_ptr->lifetime_remaining = 0.0;
      return;
    }
  }
  return;
}


// Assembly code:
// 00545760: PUSH EBX
//   Label: core_particle.cpp_CParticle_process_FUN_00545760
// 00545761: PUSH ESI
// 00545762: PUSH EDI
// 00545763: PUSH EBP
// 00545764: MOV EBP,ESP
// 00545766: SUB ESP,0xa0
// 0054576c: AND ESP,0xfffffff8
// 0054576f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00545772: FLD float ptr [EBX + 0x18]
// 00545775: FLDZ
// 00545777: FCOMPP
// 00545779: FNSTSW AX
// 0054577b: SAHF
// 0054577c: JNC 0x0054596e
//   XREF to: 0054596e (CONDITIONAL_JUMP)
// 00545782: LEA EAX,[EBX + 0x24]
// 00545785: CMP EAX,EBX
// 00545787: JZ 0x00545799
//   XREF to: 00545799 (CONDITIONAL_JUMP)
// 00545789: MOV EDX,dword ptr [EBX]
// 0054578b: MOV dword ptr [EAX],EDX
// 0054578d: MOV EDX,dword ptr [EBX + 0x4]
// 00545790: MOV dword ptr [EAX + 0x4],EDX
// 00545793: MOV EDX,dword ptr [EBX + 0x8]
// 00545796: MOV dword ptr [EAX + 0x8],EDX
// 00545799: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_00545799
// 0054579c: MOV dword ptr [EBX + 0x30],EAX
// 0054579f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005457a4: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005457aa: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005457b1: FLD float ptr [EBX + 0x1c]
// 005457b4: FMUL float ptr [ESP + 0x90]
//   XREF to: Stack[-0x20] (READ)
// 005457bb: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005457c2: FADD float ptr [EBX + 0x10]
// 005457c5: LEA EAX,[EBX + 0xc]
// 005457c8: FSTP float ptr [EBX + 0x10]
// 005457cb: FLD float ptr [EAX]
// 005457cd: FMUL float ptr [ESP + 0x90]
//   XREF to: Stack[-0x20] (READ)
// 005457d4: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x98] (WRITE)
// 005457d8: FLD float ptr [EAX + 0x4]
// 005457db: FMUL float ptr [ESP + 0x90]
//   XREF to: Stack[-0x20] (READ)
// 005457e2: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x94] (WRITE)
// 005457e6: FLD float ptr [EAX + 0x8]
// 005457e9: FMUL float ptr [ESP + 0x90]
//   XREF to: Stack[-0x20] (READ)
// 005457f0: LEA ESI,[ESP + 0x78]
//   XREF to: Stack[-0x38] (DATA)
// 005457f4: PUSH EBX
// 005457f5: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x90] (WRITE)
// 005457f9: FLD float ptr [EBX]
// 005457fb: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x98] (READ)
// 005457ff: FLD float ptr [EBX + 0x4]
// 00545802: FXCH
// 00545804: FSTP float ptr [EBX]
// 00545806: FADD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x94] (READ)
// 0054580a: FLD float ptr [EBX + 0x8]
// 0054580d: FXCH
// 0054580f: FSTP float ptr [EBX + 0x4]
// 00545812: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x90] (READ)
// 00545816: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 0054581b: FSTP float ptr [EBX + 0x8]
// 0054581e: CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
//   XREF to: 00499880 (UNCONDITIONAL_CALL)
// 00545823: ADD ESP,0x8
// 00545826: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x74] (DATA)
// 0054582a: PUSH EAX
// 0054582b: LEA EDI,[ESP + 0x40]
//   XREF to: Stack[-0x74] (DATA)
// 0054582f: LEA ESI,[ESP + 0x7c]
//   XREF to: Stack[-0x38] (DATA)
// 00545833: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00545838: MOVSD ES:EDI,ESI
// 00545839: MOVSD ES:EDI,ESI
// 0054583a: MOVSD ES:EDI,ESI
// 0054583b: CALL core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970
//   XREF to: 00499970 (UNCONDITIONAL_CALL)
// 00545840: ADD ESP,0x8
// 00545843: MOV dword ptr [EBX + 0x20],EAX
// 00545846: TEST EAX,EAX
// 00545848: JZ 0x00545975
//   XREF to: 00545975 (CONDITIONAL_JUMP)
// 0054584e: PUSH 0x0
//   Label: LAB_0054584e
// 00545850: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0x2c] (DATA)
// 00545857: PUSH EAX
// 00545858: PUSH EBX
// 00545859: LEA ESI,[EBX + 0x24]
// 0054585c: PUSH ESI
// 0054585d: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00545862: CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
//   XREF to: 00495b70 (UNCONDITIONAL_CALL)
// 00545867: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054586e: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x14] (READ)
// 00545875: ADD ESP,0x14
// 00545878: FLDZ
// 0054587a: FXCH
// 0054587c: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0xa8] (WRITE)
// 00545880: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 00545883: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 00545886: FNSTSW AX
// 00545888: SAHF
// 00545889: JA 0x00545954
//   XREF to: 00545954 (CONDITIONAL_JUMP)
// 0054588f: FLD1
// 00545891: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 00545894: FNSTSW AX
// 00545896: SAHF
// 00545897: JBE 0x00545954
//   XREF to: 00545954 (CONDITIONAL_JUMP)
// 0054589d: FLD float ptr [EBX]
// 0054589f: FSUB float ptr [ESI]
// 005458a1: FST float ptr [ESP + 0x60]
//   XREF to: Stack[-0x50] (WRITE)
// 005458a5: FLD float ptr [EBX + 0x4]
// 005458a8: FSUB float ptr [ESI + 0x4]
// 005458ab: FXCH
// 005458ad: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0xa8] (READ)
// 005458b1: FXCH
// 005458b3: FMUL ST1
// 005458b5: FXCH ST2
// 005458b7: FST float ptr [ESP + 0x64]
//   XREF to: Stack[-0x4c] (WRITE)
// 005458bb: FLD float ptr [EBX + 0x8]
// 005458be: FSUB float ptr [ESI + 0x8]
// 005458c1: FXCH
// 005458c3: FMUL ST2
// 005458c5: FXCH
// 005458c7: FST float ptr [ESP + 0x68]
//   XREF to: Stack[-0x48] (WRITE)
// 005458cb: FMULP ST2
// 005458cd: FXCH ST2
// 005458cf: FST float ptr [ESP + 0x30]
//   XREF to: Stack[-0x80] (WRITE)
// 005458d3: FLD float ptr [0x0063e728]
//   XREF to: 0063e728 (READ)
// 005458d9: FXCH
// 005458db: FMUL ST1
// 005458dd: FXCH ST3
// 005458df: FST float ptr [ESP + 0x34]
//   XREF to: Stack[-0x7c] (WRITE)
// 005458e3: FMUL ST1
// 005458e5: FXCH ST2
// 005458e7: FST float ptr [ESP + 0x38]
//   XREF to: Stack[-0x78] (WRITE)
// 005458eb: FMULP
// 005458ed: FXCH ST2
// 005458ef: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x8c] (WRITE)
// 005458f3: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x88] (WRITE)
// 005458f7: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x84] (WRITE)
// 005458fb: FLD float ptr [ESI]
// 005458fd: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x8c] (READ)
// 00545901: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x68] (WRITE)
// 00545905: FLD float ptr [ESI + 0x4]
// 00545908: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x88] (READ)
// 0054590c: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x64] (WRITE)
// 00545910: FLD float ptr [ESI + 0x8]
// 00545913: FADD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x84] (READ)
// 00545917: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x68] (DATA)
// 0054591b: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x60] (WRITE)
// 0054591f: CMP EBX,EAX
// 00545921: JZ 0x00545937
//   XREF to: 00545937 (CONDITIONAL_JUMP)
// 00545923: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x68] (DATA)
// 00545927: MOV dword ptr [EBX],EAX
// 00545929: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x64] (READ)
// 0054592d: MOV dword ptr [EBX + 0x4],EAX
// 00545930: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x60] (READ)
// 00545934: MOV dword ptr [EBX + 0x8],EAX
// 00545937: LEA EAX,[ESP + 0x84]
//   Label: LAB_00545937
//   XREF to: Stack[-0x2c] (DATA)
// 0054593e: PUSH EAX
// 0054593f: MOV EDX,dword ptr [EBX + 0x34]
// 00545942: PUSH EBX
// 00545943: CALL dword ptr [EDX + 0xc]
// 00545946: ADD ESP,0x8
// 00545949: TEST EAX,EAX
// 0054594b: JZ 0x00545981
//   XREF to: 00545981 (CONDITIONAL_JUMP)
// 0054594d: MOV dword ptr [EBX + 0x18],0x0
// 00545954: FLD float ptr [EBX + 0x18]
//   Label: LAB_00545954
// 00545957: FSUB float ptr [ESP + 0x94]
//   XREF to: Stack[-0x1c] (READ)
// 0054595e: FST float ptr [EBX + 0x18]
// 00545961: FLDZ
// 00545963: FCOMPP
// 00545965: FNSTSW AX
// 00545967: SAHF
// 00545968: JA 0x00545a72
//   XREF to: 00545a72 (CONDITIONAL_JUMP)
// 0054596e: MOV ESP,EBP
//   Label: LAB_0054596e
// 00545970: POP EBP
// 00545971: POP EDI
// 00545972: POP ESI
// 00545973: POP EBX
// 00545974: RET
// 00545975: CMP dword ptr [EBX + 0x30],0x0
//   Label: LAB_00545975
// 00545979: JNZ 0x0054584e
//   XREF to: 0054584e (CONDITIONAL_JUMP)
// 0054597f: JMP 0x00545954
//   XREF to: 00545954 (UNCONDITIONAL_JUMP)
// 00545981: LEA EDX,[EBX + 0xc]
//   Label: LAB_00545981
// 00545984: FLD float ptr [ESP + 0x88]
// 0054598b: FMUL float ptr [EDX + 0x4]
// 0054598e: FLD float ptr [ESP + 0x84]
// 00545995: FMUL float ptr [EDX]
// 00545997: FADDP
// 00545999: FLD float ptr [ESP + 0x8c]
// 005459a0: FMUL float ptr [EDX + 0x8]
// 005459a3: FADDP
// 005459a5: FMUL float ptr [0x0063e72c]
//   XREF to: 0063e72c (READ)
// 005459ab: FLD float ptr [ESP + 0x84]
// 005459b2: FXCH
// 005459b4: FSTP float ptr [ESP + 0x98]
// 005459bb: FMUL float ptr [ESP + 0x98]
// 005459c2: FLD float ptr [ESP + 0x88]
// 005459c9: FMUL float ptr [ESP + 0x98]
// 005459d0: FLD float ptr [ESP + 0x8c]
// 005459d7: FMUL float ptr [ESP + 0x98]
// 005459de: FXCH ST2
// 005459e0: FSTP float ptr [ESP + 0xc]
// 005459e4: FSTP float ptr [ESP + 0x10]
// 005459e8: FSTP float ptr [ESP + 0x14]
// 005459ec: FLD float ptr [ESP + 0xc]
// 005459f0: FSUB float ptr [EDX]
// 005459f2: FLD float ptr [ESP + 0x10]
// 005459f6: FXCH
// 005459f8: FSTP float ptr [ESP + 0x54]
// 005459fc: FSUB float ptr [EDX + 0x4]
// 005459ff: FLD float ptr [ESP + 0x14]
// 00545a03: FXCH
// 00545a05: FSTP float ptr [ESP + 0x58]
// 00545a09: FSUB float ptr [EDX + 0x8]
// 00545a0c: LEA EAX,[ESP + 0x54]
// 00545a10: FSTP float ptr [ESP + 0x5c]
// 00545a14: CMP EDX,EAX
// 00545a16: JZ 0x00545a2c
//   XREF to: 00545a2c (CONDITIONAL_JUMP)
// 00545a18: MOV EAX,dword ptr [ESP + 0x54]
// 00545a1c: MOV dword ptr [EDX],EAX
// 00545a1e: MOV EAX,dword ptr [ESP + 0x58]
// 00545a22: MOV dword ptr [EDX + 0x4],EAX
// 00545a25: MOV EAX,dword ptr [ESP + 0x5c]
// 00545a29: MOV dword ptr [EDX + 0x8],EAX
// 00545a2c: LEA EDX,[EBX + 0xc]
//   Label: LAB_00545a2c
// 00545a2f: FLD float ptr [0x0063e730]
//   XREF to: 0063e730 (READ)
// 00545a35: FLD float ptr [EDX]
// 00545a37: FMUL ST1
// 00545a39: FSTP float ptr [ESP + 0x6c]
// 00545a3d: FLD float ptr [EDX + 0x4]
// 00545a40: FMUL ST1
// 00545a42: FSTP float ptr [ESP + 0x70]
// 00545a46: FMUL float ptr [EDX + 0x8]
// 00545a49: LEA EAX,[ESP + 0x6c]
// 00545a4d: FSTP float ptr [ESP + 0x74]
// 00545a51: CMP EDX,EAX
// 00545a53: JZ 0x00545954
//   XREF to: 00545954 (CONDITIONAL_JUMP)
// 00545a59: MOV EAX,dword ptr [ESP + 0x6c]
// 00545a5d: MOV dword ptr [EDX],EAX
// 00545a5f: MOV EAX,dword ptr [ESP + 0x70]
// 00545a63: MOV dword ptr [EDX + 0x4],EAX
// 00545a66: MOV EAX,dword ptr [ESP + 0x74]
// 00545a6a: MOV dword ptr [EDX + 0x8],EAX
// 00545a6d: JMP 0x00545954
//   XREF to: 00545954 (UNCONDITIONAL_JUMP)
// 00545a72: MOV dword ptr [EBX + 0x18],0x0
//   Label: LAB_00545a72
// 00545a79: MOV ESP,EBP
// 00545a7b: POP EBP
// 00545a7c: POP EDI
// 00545a7d: POP ESI
// 00545a7e: POP EBX
// 00545a7f: RET
