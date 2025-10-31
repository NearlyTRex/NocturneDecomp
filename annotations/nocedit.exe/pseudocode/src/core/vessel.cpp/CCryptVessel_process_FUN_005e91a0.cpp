// Name: core_vessel.cpp_CCryptVessel_process_FUN_005e91a0
// Address: 005e91a0
// Address Range: [[005e91a0, 005e974d]]
// Convention: __cdecl
// Signature: void core_vessel.cpp_CCryptVessel_process_FUN_005e91a0(CCryptVessel * this_ptr)
// Globals:
//   undefined4 DAT_00657039
//   undefined4 DAT_00657041
//   undefined4 DAT_00657049
//   undefined4 DAT_00657051
//   undefined4 DAT_00657059
//   CEventList* g_CEventListInstance = 02d05310
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   undefined4 DAT_02d05310
//   CFireEffect g_CFireEffectInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_event.cpp_FUN_004aabe0
//   core_fire.cpp_CFireEffect_FUN_004c8c10
//   core_flame.cpp_FUN_004c9c00
//   core_vessel.cpp_FUN_005e9180

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vessel_cpp_CCryptVessel_process_FUN_005e91a0(CCryptVessel *this_ptr)

{
  COrientation *pCVar1;
  CLocation *pCVar2;
  CHero *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float in_stack_00000008;
  float in_stack_0000000c;
  float local_14;
  float fVar11;
  
  if (this_ptr->visual_type == 1) {
    *(float *)(this_ptr->field14_0x3c0 + 0x24) = (this_ptr->base_actor).location.position.x;
    *(float *)(this_ptr->field14_0x3c0 + 0x28) = (this_ptr->base_actor).location.position.y;
    *(float *)(this_ptr->field14_0x3c0 + 0x2c) = (this_ptr->base_actor).location.position.z;
    *(int *)(this_ptr->field14_0x3c0 + 0x30) = (this_ptr->base_actor).location.area_id;
    pCVar1 = &(this_ptr->base_actor).orient;
    *(float *)(this_ptr->field14_0x3c0 + 0x28) =
         *(float *)(this_ptr->field14_0x3c0 + 0x28) + _DAT_00657059;
    if ((COrientation *)(this_ptr->field14_0x3c0 + 0x34) != pCVar1) {
      *(float *)(this_ptr->field14_0x3c0 + 0x34) = pCVar1->pitch;
      *(float *)(this_ptr->field14_0x3c0 + 0x38) = (this_ptr->base_actor).orient.bank;
      *(float *)(this_ptr->field14_0x3c0 + 0x3c) = (this_ptr->base_actor).orient.heading;
    }
    core_flame_cpp_FUN_004c9c00();
  }
  else if (this_ptr->visual_type == 0) {
    *(float *)(this_ptr->field14_0x3c0 + 0x2a8) =
         in_stack_00000008 * (float)_DAT_00657051 + *(float *)(this_ptr->field14_0x3c0 + 0x2a8);
  }
  else {
    fVar4 = in_stack_00000008 * (float)_DAT_00657039 + *(float *)(this_ptr->field14_0x3c0 + 0x42c);
    *(float *)(this_ptr->field14_0x3c0 + 0x42c) = fVar4;
    if ((float)_DAT_00657041 <= fVar4) {
      *(float *)(this_ptr->field14_0x3c0 + 0x42c) =
           *(float *)(this_ptr->field14_0x3c0 + 0x42c) + _DAT_00657049;
    }
  }
  if (this_ptr->field3_0x2d4 == 0) {
    if (*(int *)this_ptr->field14_0x3c0 != 0) {
      this_ptr->field14_0x3c0[0] = '\0';
      this_ptr->field14_0x3c0[1] = '\0';
      this_ptr->field14_0x3c0[2] = '\0';
      this_ptr->field14_0x3c0[3] = '\0';
      return;
    }
    pCVar1 = &(this_ptr->base_actor).orient;
    iVar10 = this_ptr->state;
    pCVar2 = &(this_ptr->base_actor).location;
    if (iVar10 == 1) {
      fVar4 = this_ptr->timer + in_stack_0000000c;
      this_ptr->timer = fVar4;
      if (fVar4 <= 1.0) {
        return;
      }
      this_ptr->timer = 1.0;
      if (this_ptr->prey == 0) {
        iVar10 = core_vessel_cpp_FUN_005e9180();
        if (iVar10 != 0) {
          iVar10 = *(int *)this_ptr->start_loc;
          this_ptr->state = 2;
          (pCVar2->position).x = *(float *)(iVar10 + 0x20);
          (this_ptr->base_actor).location.position.y = *(float *)(iVar10 + 0x24);
          (this_ptr->base_actor).location.position.z = *(float *)(iVar10 + 0x28);
          (this_ptr->base_actor).location.area_id = *(int *)(iVar10 + 0x2c);
          iVar10 = *(int *)this_ptr->start_loc;
          if (pCVar1 != (COrientation *)(iVar10 + 0x30)) {
            pCVar1->pitch = *(float *)(iVar10 + 0x30);
            (this_ptr->base_actor).orient.bank = *(float *)(iVar10 + 0x34);
            (this_ptr->base_actor).orient.heading = *(float *)(iVar10 + 0x38);
          }
        }
      }
      else {
        iVar10 = core_vessel_cpp_FUN_005e9180();
        if (((iVar10 == 0) || (iVar10 = core_vessel_cpp_FUN_005e9180(), iVar10 == 0)) &&
           ((iVar10 = core_vessel_cpp_FUN_005e9180(), iVar10 != 0 ||
            (iVar10 = core_vessel_cpp_FUN_005e9180(), iVar10 != 0)))) {
          (this_ptr->base_actor).location.position.y = 9999.9;
          (this_ptr->base_actor).location.position.z = 9999.9;
          (this_ptr->base_actor).location.position.x = 9999.9;
        }
        else {
          iVar10 = *(int *)this_ptr->start_loc;
          this_ptr->state = 2;
          (this_ptr->base_actor).location.position.x = *(float *)(iVar10 + 0x20);
          (this_ptr->base_actor).location.position.y = *(float *)(iVar10 + 0x24);
          (this_ptr->base_actor).location.position.z = *(float *)(iVar10 + 0x28);
          (this_ptr->base_actor).location.area_id = *(int *)(iVar10 + 0x2c);
          iVar10 = *(int *)this_ptr->start_loc;
          pCVar1 = &(this_ptr->base_actor).orient;
          if (pCVar1 != (COrientation *)(iVar10 + 0x30)) {
            pCVar1->pitch = *(float *)(iVar10 + 0x30);
            (this_ptr->base_actor).orient.bank = *(float *)(iVar10 + 0x34);
            (this_ptr->base_actor).orient.heading = *(float *)(iVar10 + 0x38);
          }
        }
      }
    }
    else if (iVar10 == 2) {
      fVar4 = this_ptr->timer - in_stack_0000000c;
      this_ptr->timer = fVar4;
      if (0.0 <= fVar4) {
        return;
      }
      this_ptr->state = 0;
      this_ptr->timer = 0.0;
    }
    else if (iVar10 == 3) {
      if ((*(int *)(*(int *)this_ptr->start_loc + 0x184) == 0) &&
         (*(int *)(*(int *)this_ptr->end_loc + 0x184) == 0)) {
        fVar4 = this_ptr->timer - in_stack_0000000c;
        this_ptr->timer = fVar4;
        if (0.0 <= fVar4) {
          return;
        }
        core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
        iVar10 = *(int *)this_ptr->start_loc;
        this_ptr->timer = 1.0;
        (pCVar2->position).x = *(float *)(iVar10 + 0x20);
        (this_ptr->base_actor).location.position.y = *(float *)(iVar10 + 0x24);
        (this_ptr->base_actor).location.position.z = *(float *)(iVar10 + 0x28);
        (this_ptr->base_actor).location.area_id = *(int *)(iVar10 + 0x2c);
        iVar10 = *(int *)this_ptr->start_loc;
        if (pCVar1 == (COrientation *)(iVar10 + 0x30)) {
          this_ptr->state = 2;
        }
        else {
          pCVar1->pitch = *(float *)(iVar10 + 0x30);
          (this_ptr->base_actor).orient.bank = *(float *)(iVar10 + 0x34);
          (this_ptr->base_actor).orient.heading = *(float *)(iVar10 + 0x38);
          this_ptr->state = 2;
        }
      }
      else {
        this_ptr->timer = 0.0;
        this_ptr->state = 0;
      }
    }
    if ((*(int *)(*(int *)this_ptr->start_loc + 0x184) == 0) &&
       (*(int *)(*(int *)this_ptr->end_loc + 0x184) == 0)) {
      if (this_ptr->state == 0) {
        this_ptr->timer = 3.0;
        this_ptr->state = 3;
        return;
      }
    }
    else {
      pCVar3 = g_HeroActors[g_LocalHeroIndex];
      pCVar2 = &(this_ptr->base_actor).location;
      fVar4 = (pCVar3->base_character).base_actor.location.position.x - (pCVar2->position).x;
      fVar5 = (pCVar3->base_character).base_actor.location.position.y -
              (this_ptr->base_actor).location.position.y;
      fVar6 = (pCVar3->base_character).base_actor.location.position.z -
              (this_ptr->base_actor).location.position.z;
      local_14 = 999.9;
      fVar11 = 0.0;
      iVar10 = this_ptr->prey;
      if (iVar10 != 0) {
        fVar7 = (pCVar2->position).x - *(float *)(iVar10 + 0x20);
        fVar8 = (this_ptr->base_actor).location.position.y - *(float *)(iVar10 + 0x24);
        fVar9 = (this_ptr->base_actor).location.position.z - *(float *)(iVar10 + 0x28);
        local_14 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
      }
      iVar10 = this_ptr->neutral;
      if (iVar10 != 0) {
        fVar11 = *(float *)(iVar10 + 0x20) - (this_ptr->base_actor).location.position.x;
        fVar7 = *(float *)(iVar10 + 0x24) - (this_ptr->base_actor).location.position.y;
        fVar8 = *(float *)(iVar10 + 0x28) - (this_ptr->base_actor).location.position.z;
        fVar11 = SQRT(fVar8 * fVar8 + fVar11 * fVar11 + fVar7 * fVar7);
      }
      if ((((local_14 < this_ptr->eat_distance) &&
           (this_ptr->eat_distance < SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5))) &&
          (this_ptr->eat_distance < fVar11)) &&
         ((iVar10 = this_ptr->prey, *(int *)(iVar10 + 0x2d4) == 0 && (*(int *)(iVar10 + 0x3b8) == 0)
          ))) {
        *(undefined4 *)(iVar10 + 0x3b8) = 1;
        *(undefined4 *)(this_ptr->prey + 0x3bc) = 0;
        core_event_cpp_FUN_004aabe0();
      }
      if (((this_ptr->prey != 0) && (this_ptr->neutral != 0)) &&
         ((*(int *)(*(int *)this_ptr->end_loc + 0x184) != 0 &&
          ((*(int *)(*(int *)(this_ptr->prey + 0x3ac) + 0x184) != 0 &&
           (*(int *)(*(int *)(this_ptr->neutral + 0x3ac) + 0x184) != 0)))))) {
        core_event_cpp_FUN_004aabe0();
        *(undefined4 *)(this_ptr->prey + 0x7f0) = 1;
        *(undefined4 *)(this_ptr->neutral + 0x7f0) = 1;
        this_ptr->field14_0x3c0[0x430] = '\x01';
        this_ptr->field14_0x3c0[0x431] = '\0';
        this_ptr->field14_0x3c0[0x432] = '\0';
        this_ptr->field14_0x3c0[0x433] = '\0';
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 005e91a0: PUSH EBX
//   Label: core_vessel.cpp_CCryptVessel_process_FUN_005e91a0
// 005e91a1: PUSH ESI
// 005e91a2: PUSH EDI
// 005e91a3: PUSH EBP
// 005e91a4: SUB ESP,0x38
// 005e91a7: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 005e91ab: MOV EDX,dword ptr [EBX + 0x3b4]
// 005e91b1: CMP EDX,0x1
// 005e91b4: JZ 0x005e944a
//   XREF to: 005e944a (CONDITIONAL_JUMP)
// 005e91ba: TEST EDX,EDX
// 005e91bc: JNZ 0x005e94b0
//   XREF to: 005e94b0 (CONDITIONAL_JUMP)
// 005e91c2: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 005e91c6: FMUL double ptr [0x00657051]
//   XREF to: 00657051 (READ)
// 005e91cc: FADD float ptr [EBX + 0x668]
// 005e91d2: FSTP float ptr [EBX + 0x668]
// 005e91d8: MOV ESI,dword ptr [EBX + 0x2d4]
//   Label: LAB_005e91d8
// 005e91de: TEST ESI,ESI
// 005e91e0: JNZ 0x005e9442
//   XREF to: 005e9442 (CONDITIONAL_JUMP)
// 005e91e6: CMP dword ptr [EBX + 0x3c0],0x0
// 005e91ed: JNZ 0x005e94ec
//   XREF to: 005e94ec (CONDITIONAL_JUMP)
// 005e91f3: LEA EDI,[EBX + 0x30]
// 005e91f6: MOV EBP,dword ptr [EBX + 0x3b8]
// 005e91fc: LEA ESI,[EBX + 0x20]
// 005e91ff: CMP EBP,0x1
// 005e9202: JNZ 0x005e95b2
//   XREF to: 005e95b2 (CONDITIONAL_JUMP)
// 005e9208: FLD float ptr [EBX + 0x3bc]
// 005e920e: FADD float ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 005e9212: FST float ptr [EBX + 0x3bc]
// 005e9218: FLD1
// 005e921a: FCOMPP
// 005e921c: FNSTSW AX
// 005e921e: SAHF
// 005e921f: JNC 0x005e9442
//   XREF to: 005e9442 (CONDITIONAL_JUMP)
// 005e9225: MOV EDX,dword ptr [EBX + 0x2d8]
// 005e922b: MOV dword ptr [EBX + 0x3bc],0x3f800000
// 005e9235: TEST EDX,EDX
// 005e9237: JNZ 0x005e94fa
//   XREF to: 005e94fa (CONDITIONAL_JUMP)
// 005e923d: MOV EAX,dword ptr [EBX + 0x2dc]
// 005e9243: PUSH EAX
// 005e9244: CALL core_vessel.cpp_FUN_005e9180
//   XREF to: 005e9180 (UNCONDITIONAL_CALL)
// 005e9249: ADD ESP,0x4
// 005e924c: TEST EAX,EAX
// 005e924e: JZ 0x005e9294
//   XREF to: 005e9294 (CONDITIONAL_JUMP)
// 005e9250: MOV EAX,dword ptr [EBX + 0x3a8]
// 005e9256: MOV dword ptr [EBX + 0x3b8],0x2
// 005e9260: MOV EDX,dword ptr [EAX + 0x20]
// 005e9263: MOV dword ptr [ESI],EDX
// 005e9265: MOV EDX,dword ptr [EAX + 0x24]
// 005e9268: MOV dword ptr [ESI + 0x4],EDX
// 005e926b: MOV EDX,dword ptr [EAX + 0x28]
// 005e926e: MOV dword ptr [ESI + 0x8],EDX
// 005e9271: MOV EAX,dword ptr [EAX + 0x2c]
// 005e9274: MOV dword ptr [ESI + 0xc],EAX
// 005e9277: MOV EAX,dword ptr [EBX + 0x3a8]
// 005e927d: ADD EAX,0x30
// 005e9280: CMP EDI,EAX
// 005e9282: JZ 0x005e9294
//   XREF to: 005e9294 (CONDITIONAL_JUMP)
// 005e9284: MOV EDX,dword ptr [EAX]
// 005e9286: MOV dword ptr [EDI],EDX
// 005e9288: MOV EDX,dword ptr [EAX + 0x4]
// 005e928b: MOV dword ptr [EDI + 0x4],EDX
// 005e928e: MOV EDX,dword ptr [EAX + 0x8]
// 005e9291: MOV dword ptr [EDI + 0x8],EDX
// 005e9294: MOV EAX,dword ptr [EBX + 0x3a8]
//   Label: LAB_005e9294
// 005e929a: CMP dword ptr [EAX + 0x184],0x0
// 005e92a1: JZ 0x005e96ca
//   XREF to: 005e96ca (CONDITIONAL_JUMP)
// 005e92a7: MOV EAX,[0x02db87d0]
//   Label: LAB_005e92a7
//   XREF to: 02db87d0 (READ)
// 005e92ac: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005e92b3: LEA ESI,[EBX + 0x20]
// 005e92b6: FLD float ptr [EAX + 0x20]
// 005e92b9: FSUB float ptr [ESI]
// 005e92bb: FSTP float ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 005e92be: FLD float ptr [EAX + 0x24]
// 005e92c1: FSUB float ptr [ESI + 0x4]
// 005e92c4: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (WRITE)
// 005e92c8: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (READ)
// 005e92cc: FLD float ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 005e92cf: FMUL ST0
// 005e92d1: FLD float ptr [EAX + 0x28]
// 005e92d4: FSUB float ptr [ESI + 0x8]
// 005e92d7: FXCH
// 005e92d9: FADDP ST2,ST0
// 005e92db: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (WRITE)
// 005e92df: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 005e92e3: FADDP
// 005e92e5: FSQRT
// 005e92e7: MOV EDI,0x4479f99a
// 005e92ec: XOR EBP,EBP
// 005e92ee: MOV dword ptr [ESP + 0x30],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005e92f2: MOV dword ptr [ESP + 0x34],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 005e92f6: MOV EAX,dword ptr [EBX + 0x2d8]
// 005e92fc: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (WRITE)
// 005e9300: TEST EAX,EAX
// 005e9302: JZ 0x005e933b
//   XREF to: 005e933b (CONDITIONAL_JUMP)
// 005e9304: FLD float ptr [ESI]
// 005e9306: FSUB float ptr [EAX + 0x20]
// 005e9309: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (WRITE)
// 005e930d: FLD float ptr [ESI + 0x4]
// 005e9310: FSUB float ptr [EAX + 0x24]
// 005e9313: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (WRITE)
// 005e9317: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (READ)
// 005e931b: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 005e931f: FMUL ST0
// 005e9321: FLD float ptr [ESI + 0x8]
// 005e9324: FSUB float ptr [EAX + 0x28]
// 005e9327: FXCH
// 005e9329: FADDP ST2,ST0
// 005e932b: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x34] (WRITE)
// 005e932f: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x34] (READ)
// 005e9333: FADDP
// 005e9335: FSQRT
// 005e9337: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (WRITE)
// 005e933b: MOV EDX,dword ptr [EBX + 0x2dc]
//   Label: LAB_005e933b
// 005e9341: TEST EDX,EDX
// 005e9343: JZ 0x005e9381
//   XREF to: 005e9381 (CONDITIONAL_JUMP)
// 005e9345: MOV EAX,EDX
// 005e9347: LEA ESI,[EBX + 0x20]
// 005e934a: FLD float ptr [EAX + 0x20]
// 005e934d: FSUB float ptr [ESI]
// 005e934f: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (WRITE)
// 005e9353: FLD float ptr [EAX + 0x24]
// 005e9356: FSUB float ptr [ESI + 0x4]
// 005e9359: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 005e935d: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 005e9361: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 005e9365: FMUL ST0
// 005e9367: FLD float ptr [EAX + 0x28]
// 005e936a: FSUB float ptr [ESI + 0x8]
// 005e936d: FXCH
// 005e936f: FADDP ST2,ST0
// 005e9371: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (WRITE)
// 005e9375: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 005e9379: FADDP
// 005e937b: FSQRT
// 005e937d: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (WRITE)
// 005e9381: FLD float ptr [ESP + 0x30]
//   Label: LAB_005e9381
//   XREF to: Stack[-0x18] (READ)
// 005e9385: FCOMP float ptr [EBX + 0x3b0]
// 005e938b: FNSTSW AX
// 005e938d: SAHF
// 005e938e: JNC 0x005e93f8
//   XREF to: 005e93f8 (CONDITIONAL_JUMP)
// 005e9390: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 005e9394: FCOMP float ptr [EBX + 0x3b0]
// 005e939a: FNSTSW AX
// 005e939c: SAHF
// 005e939d: JBE 0x005e93f8
//   XREF to: 005e93f8 (CONDITIONAL_JUMP)
// 005e939f: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 005e93a3: FCOMP float ptr [EBX + 0x3b0]
// 005e93a9: FNSTSW AX
// 005e93ab: SAHF
// 005e93ac: JBE 0x005e93f8
//   XREF to: 005e93f8 (CONDITIONAL_JUMP)
// 005e93ae: MOV EAX,dword ptr [EBX + 0x2d8]
// 005e93b4: MOV ECX,dword ptr [EAX + 0x2d4]
// 005e93ba: TEST ECX,ECX
// 005e93bc: JNZ 0x005e93f8
//   XREF to: 005e93f8 (CONDITIONAL_JUMP)
// 005e93be: CMP dword ptr [EAX + 0x3b8],0x0
// 005e93c5: JNZ 0x005e93f8
//   XREF to: 005e93f8 (CONDITIONAL_JUMP)
// 005e93c7: MOV dword ptr [EAX + 0x3b8],0x1
// 005e93d1: MOV EAX,dword ptr [EBX + 0x2d8]
// 005e93d7: MOV dword ptr [EAX + 0x3bc],ECX
// 005e93dd: MOV EAX,dword ptr [EBX + 0x2d8]
// 005e93e3: ADD EAX,0x2e0
// 005e93e8: PUSH EAX
// 005e93e9: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005e93ef: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 005e93f0: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 005e93f5: ADD ESP,0x8
// 005e93f8: MOV EBP,dword ptr [EBX + 0x2d8]
//   Label: LAB_005e93f8
// 005e93fe: TEST EBP,EBP
// 005e9400: JZ 0x005e9442
//   XREF to: 005e9442 (CONDITIONAL_JUMP)
// 005e9402: CMP dword ptr [EBX + 0x2dc],0x0
// 005e9409: JZ 0x005e9442
//   XREF to: 005e9442 (CONDITIONAL_JUMP)
// 005e940b: MOV EAX,dword ptr [EBX + 0x3ac]
// 005e9411: CMP dword ptr [EAX + 0x184],0x0
// 005e9418: JZ 0x005e9442
//   XREF to: 005e9442 (CONDITIONAL_JUMP)
// 005e941a: MOV EAX,dword ptr [EBP + 0x3ac]
// 005e9420: CMP dword ptr [EAX + 0x184],0x0
// 005e9427: JZ 0x005e9442
//   XREF to: 005e9442 (CONDITIONAL_JUMP)
// 005e9429: MOV EAX,dword ptr [EBX + 0x2dc]
// 005e942f: MOV EAX,dword ptr [EAX + 0x3ac]
// 005e9435: CMP dword ptr [EAX + 0x184],0x0
// 005e943c: JNZ 0x005e9706
//   XREF to: 005e9706 (CONDITIONAL_JUMP)
// 005e9442: ADD ESP,0x38
//   Label: LAB_005e9442
// 005e9445: POP EBP
// 005e9446: POP EDI
// 005e9447: POP ESI
// 005e9448: POP EBX
// 005e9449: RET
// 005e944a: LEA ESI,[EBX + 0x3e4]
//   Label: LAB_005e944a
// 005e9450: LEA EAX,[EBX + 0x20]
// 005e9453: MOV EDX,dword ptr [EAX]
// 005e9455: MOV dword ptr [ESI],EDX
// 005e9457: MOV EDX,dword ptr [EAX + 0x4]
// 005e945a: MOV dword ptr [ESI + 0x4],EDX
// 005e945d: MOV EDX,dword ptr [EAX + 0x8]
// 005e9460: MOV dword ptr [ESI + 0x8],EDX
// 005e9463: MOV EAX,dword ptr [EAX + 0xc]
// 005e9466: MOV dword ptr [ESI + 0xc],EAX
// 005e9469: FLD float ptr [EBX + 0x3e8]
// 005e946f: LEA EAX,[EBX + 0x3f4]
// 005e9475: FADD float ptr [0x00657059]
//   XREF to: 00657059 (READ)
// 005e947b: LEA ESI,[EBX + 0x30]
// 005e947e: FSTP float ptr [EBX + 0x3e8]
// 005e9484: CMP EAX,ESI
// 005e9486: JZ 0x005e9498
//   XREF to: 005e9498 (CONDITIONAL_JUMP)
// 005e9488: MOV EDX,dword ptr [ESI]
// 005e948a: MOV dword ptr [EAX],EDX
// 005e948c: MOV EDX,dword ptr [ESI + 0x4]
// 005e948f: MOV dword ptr [EAX + 0x4],EDX
// 005e9492: MOV EDX,dword ptr [ESI + 0x8]
// 005e9495: MOV dword ptr [EAX + 0x8],EDX
// 005e9498: LEA EAX,[EBX + 0x3c4]
//   Label: LAB_005e9498
// 005e949e: PUSH dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 005e94a2: PUSH EAX
// 005e94a3: CALL core_flame.cpp_FUN_004c9c00
//   XREF to: 004c9c00 (UNCONDITIONAL_CALL)
// 005e94a8: ADD ESP,0x8
// 005e94ab: JMP 0x005e91d8
//   XREF to: 005e91d8 (UNCONDITIONAL_JUMP)
// 005e94b0: FLD float ptr [ESP + 0x50]
//   Label: LAB_005e94b0
//   XREF to: Stack[0x8] (READ)
// 005e94b4: FMUL double ptr [0x00657039]
//   XREF to: 00657039 (READ)
// 005e94ba: FADD float ptr [EBX + 0x7ec]
// 005e94c0: FST float ptr [EBX + 0x7ec]
// 005e94c6: FCOMP double ptr [0x00657041]
//   XREF to: 00657041 (READ)
// 005e94cc: FNSTSW AX
// 005e94ce: SAHF
// 005e94cf: JC 0x005e91d8
//   XREF to: 005e91d8 (CONDITIONAL_JUMP)
// 005e94d5: FLD float ptr [EBX + 0x7ec]
// 005e94db: FADD float ptr [0x00657049]
//   XREF to: 00657049 (READ)
// 005e94e1: FSTP float ptr [EBX + 0x7ec]
// 005e94e7: JMP 0x005e91d8
//   XREF to: 005e91d8 (UNCONDITIONAL_JUMP)
// 005e94ec: MOV dword ptr [EBX + 0x3c0],ESI
//   Label: LAB_005e94ec
// 005e94f2: ADD ESP,0x38
// 005e94f5: POP EBP
// 005e94f6: POP EDI
// 005e94f7: POP ESI
// 005e94f8: POP EBX
// 005e94f9: RET
// 005e94fa: PUSH EDX
//   Label: LAB_005e94fa
// 005e94fb: CALL core_vessel.cpp_FUN_005e9180
//   XREF to: 005e9180 (UNCONDITIONAL_CALL)
// 005e9500: ADD ESP,0x4
// 005e9503: TEST EAX,EAX
// 005e9505: JZ 0x005e956d
//   XREF to: 005e956d (CONDITIONAL_JUMP)
// 005e9507: MOV ESI,dword ptr [EBX + 0x2dc]
// 005e950d: PUSH ESI
// 005e950e: CALL core_vessel.cpp_FUN_005e9180
//   XREF to: 005e9180 (UNCONDITIONAL_CALL)
// 005e9513: ADD ESP,0x4
// 005e9516: TEST EAX,EAX
// 005e9518: JZ 0x005e956d
//   XREF to: 005e956d (CONDITIONAL_JUMP)
// 005e951a: MOV EAX,dword ptr [EBX + 0x3a8]
//   Label: LAB_005e951a
// 005e9520: MOV dword ptr [EBX + 0x3b8],0x2
// 005e952a: LEA ESI,[EBX + 0x20]
// 005e952d: MOV EDX,dword ptr [EAX + 0x20]
// 005e9530: MOV dword ptr [ESI],EDX
// 005e9532: MOV EDX,dword ptr [EAX + 0x24]
// 005e9535: MOV dword ptr [ESI + 0x4],EDX
// 005e9538: MOV EDX,dword ptr [EAX + 0x28]
// 005e953b: MOV dword ptr [ESI + 0x8],EDX
// 005e953e: MOV EAX,dword ptr [EAX + 0x2c]
// 005e9541: MOV dword ptr [ESI + 0xc],EAX
// 005e9544: MOV EAX,dword ptr [EBX + 0x3a8]
// 005e954a: LEA ESI,[EBX + 0x30]
// 005e954d: ADD EAX,0x30
// 005e9550: CMP ESI,EAX
// 005e9552: JZ 0x005e9294
//   XREF to: 005e9294 (CONDITIONAL_JUMP)
// 005e9558: MOV EDX,dword ptr [EAX]
// 005e955a: MOV dword ptr [ESI],EDX
// 005e955c: MOV EDX,dword ptr [EAX + 0x4]
// 005e955f: MOV dword ptr [ESI + 0x4],EDX
// 005e9562: MOV EDX,dword ptr [EAX + 0x8]
// 005e9565: MOV dword ptr [ESI + 0x8],EDX
// 005e9568: JMP 0x005e9294
//   XREF to: 005e9294 (UNCONDITIONAL_JUMP)
// 005e956d: MOV EDI,dword ptr [EBX + 0x2d8]
//   Label: LAB_005e956d
// 005e9573: PUSH EDI
// 005e9574: CALL core_vessel.cpp_FUN_005e9180
//   XREF to: 005e9180 (UNCONDITIONAL_CALL)
// 005e9579: ADD ESP,0x4
// 005e957c: TEST EAX,EAX
// 005e957e: JZ 0x005e959a
//   XREF to: 005e959a (CONDITIONAL_JUMP)
// 005e9580: MOV dword ptr [EBX + 0x24],0x461c3f9a
//   Label: LAB_005e9580
// 005e9587: MOV dword ptr [EBX + 0x28],0x461c3f9a
// 005e958e: MOV dword ptr [EBX + 0x20],0x461c3f9a
// 005e9595: JMP 0x005e9294
//   XREF to: 005e9294 (UNCONDITIONAL_JUMP)
// 005e959a: MOV EBP,dword ptr [EBX + 0x2dc]
//   Label: LAB_005e959a
// 005e95a0: PUSH EBP
// 005e95a1: CALL core_vessel.cpp_FUN_005e9180
//   XREF to: 005e9180 (UNCONDITIONAL_CALL)
// 005e95a6: ADD ESP,0x4
// 005e95a9: TEST EAX,EAX
// 005e95ab: JNZ 0x005e9580
//   XREF to: 005e9580 (CONDITIONAL_JUMP)
// 005e95ad: JMP 0x005e951a
//   XREF to: 005e951a (UNCONDITIONAL_JUMP)
// 005e95b2: CMP EBP,0x2
//   Label: LAB_005e95b2
// 005e95b5: JNZ 0x005e95ed
//   XREF to: 005e95ed (CONDITIONAL_JUMP)
// 005e95b7: FLD float ptr [EBX + 0x3bc]
// 005e95bd: FSUB float ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 005e95c1: FST float ptr [EBX + 0x3bc]
// 005e95c7: FLDZ
// 005e95c9: FCOMPP
// 005e95cb: FNSTSW AX
// 005e95cd: SAHF
// 005e95ce: JBE 0x005e9442
//   XREF to: 005e9442 (CONDITIONAL_JUMP)
// 005e95d4: MOV dword ptr [EBX + 0x3b8],0x0
// 005e95de: MOV dword ptr [EBX + 0x3bc],0x0
// 005e95e8: JMP 0x005e9294
//   XREF to: 005e9294 (UNCONDITIONAL_JUMP)
// 005e95ed: CMP EBP,0x3
//   Label: LAB_005e95ed
// 005e95f0: JNZ 0x005e9294
//   XREF to: 005e9294 (CONDITIONAL_JUMP)
// 005e95f6: MOV EAX,dword ptr [EBX + 0x3a8]
// 005e95fc: CMP dword ptr [EAX + 0x184],0x0
// 005e9603: JNZ 0x005e9614
//   XREF to: 005e9614 (CONDITIONAL_JUMP)
// 005e9605: MOV EAX,dword ptr [EBX + 0x3ac]
// 005e960b: CMP dword ptr [EAX + 0x184],0x0
// 005e9612: JZ 0x005e962d
//   XREF to: 005e962d (CONDITIONAL_JUMP)
// 005e9614: MOV dword ptr [EBX + 0x3bc],0x0
//   Label: LAB_005e9614
// 005e961e: MOV dword ptr [EBX + 0x3b8],0x0
// 005e9628: JMP 0x005e9294
//   XREF to: 005e9294 (UNCONDITIONAL_JUMP)
// 005e962d: FLD float ptr [EBX + 0x3bc]
//   Label: LAB_005e962d
// 005e9633: FSUB float ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 005e9637: FST float ptr [EBX + 0x3bc]
// 005e963d: FLDZ
// 005e963f: FCOMPP
// 005e9641: FNSTSW AX
// 005e9643: SAHF
// 005e9644: JBE 0x005e9442
//   XREF to: 005e9442 (CONDITIONAL_JUMP)
// 005e964a: PUSH 0x40800000
// 005e964f: PUSH 0x44bb8000
// 005e9654: PUSH 0x41000000
// 005e9659: PUSH ESI
// 005e965a: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 005e965f: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 005e9660: CALL core_fire.cpp_CFireEffect_FUN_004c8c10
//   XREF to: 004c8c10 (UNCONDITIONAL_CALL)
// 005e9665: MOV EAX,dword ptr [EBX + 0x3a8]
// 005e966b: MOV dword ptr [EBX + 0x3bc],0x3f800000
// 005e9675: MOV EDX,dword ptr [EAX + 0x20]
// 005e9678: MOV dword ptr [ESI],EDX
// 005e967a: MOV EDX,dword ptr [EAX + 0x24]
// 005e967d: MOV dword ptr [ESI + 0x4],EDX
// 005e9680: MOV EDX,dword ptr [EAX + 0x28]
// 005e9683: MOV dword ptr [ESI + 0x8],EDX
// 005e9686: MOV EAX,dword ptr [EAX + 0x2c]
// 005e9689: MOV dword ptr [ESI + 0xc],EAX
// 005e968c: MOV EAX,dword ptr [EBX + 0x3a8]
// 005e9692: ADD EAX,0x30
// 005e9695: ADD ESP,0x14
// 005e9698: CMP EDI,EAX
// 005e969a: JNZ 0x005e96ab
//   XREF to: 005e96ab (CONDITIONAL_JUMP)
// 005e969c: MOV dword ptr [EBX + 0x3b8],0x2
// 005e96a6: JMP 0x005e9294
//   XREF to: 005e9294 (UNCONDITIONAL_JUMP)
// 005e96ab: MOV EDX,dword ptr [EAX]
//   Label: LAB_005e96ab
// 005e96ad: MOV dword ptr [EDI],EDX
// 005e96af: MOV EDX,dword ptr [EAX + 0x4]
// 005e96b2: MOV dword ptr [EDI + 0x4],EDX
// 005e96b5: MOV EDX,dword ptr [EAX + 0x8]
// 005e96b8: MOV dword ptr [EDI + 0x8],EDX
// 005e96bb: MOV dword ptr [EBX + 0x3b8],0x2
// 005e96c5: JMP 0x005e9294
//   XREF to: 005e9294 (UNCONDITIONAL_JUMP)
// 005e96ca: MOV EAX,dword ptr [EBX + 0x3ac]
//   Label: LAB_005e96ca
// 005e96d0: CMP dword ptr [EAX + 0x184],0x0
// 005e96d7: JNZ 0x005e92a7
//   XREF to: 005e92a7 (CONDITIONAL_JUMP)
// 005e96dd: CMP dword ptr [EBX + 0x3b8],0x0
// 005e96e4: JNZ 0x005e9442
//   XREF to: 005e9442 (CONDITIONAL_JUMP)
// 005e96ea: MOV dword ptr [EBX + 0x3bc],0x40400000
// 005e96f4: MOV dword ptr [EBX + 0x3b8],0x3
// 005e96fe: ADD ESP,0x38
// 005e9701: POP EBP
// 005e9702: POP EDI
// 005e9703: POP ESI
// 005e9704: POP EBX
// 005e9705: RET
// 005e9706: LEA EAX,[EBX + 0x344]
//   Label: LAB_005e9706
// 005e970c: PUSH EAX
// 005e970d: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005e9713: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 005e9714: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 005e9719: MOV EAX,dword ptr [EBX + 0x2d8]
// 005e971f: MOV dword ptr [EAX + 0x7f0],0x1
// 005e9729: MOV EAX,dword ptr [EBX + 0x2dc]
// 005e972f: MOV dword ptr [EAX + 0x7f0],0x1
// 005e9739: ADD ESP,0x8
// 005e973c: MOV dword ptr [EBX + 0x7f0],0x1
// 005e9746: ADD ESP,0x38
// 005e9749: POP EBP
// 005e974a: POP EDI
// 005e974b: POP ESI
// 005e974c: POP EBX
// 005e974d: RET
