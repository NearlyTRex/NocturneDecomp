// Name: core_hero.cpp_FUN_004f35b0
// Address: 004f35b0
// Address Range: [[004f35b0, 004f3751]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f35b0()
// Cross-references:
//   core_hero.cpp_CallInventorySelectHealth_FUN_004f3760 (004f3760) at 004f37bd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CTrap_0062ec8e
//   double DOUBLE_0062ec96 = 6
//   double DOUBLE_0062ec9e = 0.5
//   double DOUBLE_0062eca6 = 3
//   double DOUBLE_0062ecae = 60
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CActorDestinationClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_dest.cpp_FUN_0046fd50
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f35b0(undefined4 param_1) */

undefined4 core_hero_cpp_FUN_004f35b0(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  float *pfVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
  CVector3f *local_48;
  CVector3f local_3c;
  double local_30;
  double local_28;
  char *local_20;
  CLocation *local_1c;
  int local_18;
  CDemonActor *local_14;
  
  local_20 = in_stack_00000004[0x176].create_event + 0x30;
  in_stack_00000004[0x179].field21_0x11c = 0;
  iVar5 = 0;
  local_18 = 0;
  do {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= local_18) {
      iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (*(CDemonActor **)(local_20 + 0x334),"CTrap");
      if (iVar5 != 0) {
        in_stack_00000004[0x179].field21_0x11c = *(int *)(local_20 + 0x334);
      }
      return 0;
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5),
                        g_CActorDestinationClassInfo.name_hash);
    local_14 = pCVar1;
    if (pCVar1 != (CDemonActor *)0x0) {
      local_48 = *(CVector3f **)(local_20 + 0x334);
      iVar2 = core_dest_cpp_FUN_0046fd50();
      if (iVar2 != 0) {
        local_1c = &pCVar1->location;
        local_48 = &local_3c;
        core_actor_cpp_CDemonActor_FUN_00408f10(in_stack_00000004);
        local_30 = (double)local_3c.y;
        if ((((1.0 <= local_30) && (local_30 <= DOUBLE_0062ec96)) &&
            (local_28 = (double)local_3c.z, (float)DOUBLE_0062ec9e <= local_3c.z)) &&
           ((local_28 <= DOUBLE_0062eca6 && (ABS(local_3c.x) <= (float)DOUBLE_0062eca6)))) {
          local_48 = (CVector3f *)0x4f36da;
          pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             ((CVector3f *)&local_48,&local_3c);
          if ((ABS(pCVar3->y) <= (float)DOUBLE_0062ecae) &&
             (iVar2 = *(int *)pCVar1[1].actor_name, in_stack_00000004[0x179].field21_0x11c = iVar2,
             iVar2 != 0)) {
            if ((CLocation *)&in_stack_00000004[0x179].field22_0x120 != local_1c) {
              in_stack_00000004[0x179].field22_0x120 = (int)(local_1c->position).x;
              in_stack_00000004[0x179].field23_0x124 = (int)(local_1c->position).y;
              in_stack_00000004[0x179].metadata.runtime_vector1.x = (local_1c->position).z;
            }
            pfVar4 = &in_stack_00000004[0x179].metadata.runtime_vector1.y;
            if ((COrientation *)pfVar4 != &local_14->orient) {
              *pfVar4 = (local_14->orient).pitch;
              in_stack_00000004[0x179].metadata.runtime_vector1.z = (local_14->orient).bank;
              in_stack_00000004[0x179].metadata.runtime_vector2.x = (local_14->orient).heading;
            }
            return 1;
          }
        }
      }
    }
    local_18 = local_18 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}


// Assembly code:
// 004f35b0: PUSH EBX
//   Label: core_hero.cpp_FUN_004f35b0
// 004f35b1: PUSH ESI
// 004f35b2: PUSH EDI
// 004f35b3: PUSH EBP
// 004f35b4: MOV EBP,ESP
// 004f35b6: SUB ESP,0x38
// 004f35b9: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f35bc: LEA EAX,[ESI + 0x1f738]
// 004f35c2: MOV dword ptr [ESI + 0x1fbb4],0x0
// 004f35cc: XOR EDX,EDX
// 004f35ce: XOR EDI,EDI
// 004f35d0: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004f35d3: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004f35d6: MOV EAX,[0x006810c8]
//   Label: LAB_004f35d6
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004f35db: MOV EBX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004f35de: CMP EBX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004f35e4: JL 0x004f3625
//   XREF to: 004f3625 (CONDITIONAL_JUMP)
// 004f35e6: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004f35e9: PUSH 0x62ec8e
//   XREF to: 0062ec8e (DATA)
// 004f35ee: MOV EAX,dword ptr [EAX + 0x334]
// 004f35f4: PUSH EAX
// 004f35f5: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004f35fa: ADD ESP,0x8
// 004f35fd: TEST EAX,EAX
// 004f35ff: JZ 0x004f3610
//   XREF to: 004f3610 (CONDITIONAL_JUMP)
// 004f3601: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004f3604: MOV EAX,dword ptr [EAX + 0x334]
// 004f360a: MOV dword ptr [ESI + 0x1fbb4],EAX
// 004f3610: XOR EAX,EAX
//   Label: LAB_004f3610
// 004f3612: MOV ESP,EBP
// 004f3614: POP EBP
// 004f3615: POP EDI
// 004f3616: POP ESI
// 004f3617: POP EBX
// 004f3618: RET
// 004f3619: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_004f3619
//   XREF to: Stack[-0x18] (READ)
// 004f361c: INC EAX
// 004f361d: ADD EDI,0x4
// 004f3620: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f3623: JMP 0x004f35d6
//   XREF to: 004f35d6 (UNCONDITIONAL_JUMP)
// 004f3625: MOV EBX,dword ptr [0x020a4874]
//   Label: LAB_004f3625
//   XREF to: 020a4874 (READ)
// 004f362b: PUSH EBX
// 004f362c: MOV EDX,dword ptr [EDI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 004f3633: PUSH EDX
// 004f3634: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f3639: MOV EBX,EAX
// 004f363b: ADD ESP,0x8
// 004f363e: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f3641: TEST EAX,EAX
// 004f3643: JZ 0x004f3619
//   XREF to: 004f3619 (CONDITIONAL_JUMP)
// 004f3645: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004f3648: MOV EAX,dword ptr [EAX + 0x334]
// 004f364e: PUSH EAX
// 004f364f: PUSH EBX
// 004f3650: CALL core_dest.cpp_FUN_0046fd50
//   XREF to: 0046fd50 (UNCONDITIONAL_CALL)
// 004f3655: ADD ESP,0x8
// 004f3658: TEST EAX,EAX
// 004f365a: JZ 0x004f3619
//   XREF to: 004f3619 (CONDITIONAL_JUMP)
// 004f365c: MOV EAX,EBX
// 004f365e: ADD EAX,0x20
// 004f3661: PUSH EAX
// 004f3662: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f3665: LEA EAX,[EBP + -0x2c]
//   XREF to: Stack[-0x3c] (DATA)
// 004f3668: PUSH EAX
// 004f3669: PUSH ESI
// 004f366a: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004f366f: FLD float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 004f3672: FLD1
// 004f3674: ADD ESP,0xc
// 004f3677: FXCH
// 004f3679: FSTP double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 004f367c: FCOMP double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004f367f: FNSTSW AX
// 004f3681: SAHF
// 004f3682: JA 0x004f3619
//   XREF to: 004f3619 (CONDITIONAL_JUMP)
// 004f3684: FLD double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004f3687: FCOMP double ptr [0x0062ec96]
//   XREF to: 0062ec96 (READ)
// 004f368d: FNSTSW AX
// 004f368f: SAHF
// 004f3690: JA 0x004f3619
//   XREF to: 004f3619 (CONDITIONAL_JUMP)
// 004f3692: FLD float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 004f3695: FST double ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 004f3698: FCOMP double ptr [0x0062ec9e]
//   XREF to: 0062ec9e (READ)
// 004f369e: FNSTSW AX
// 004f36a0: SAHF
// 004f36a1: JC 0x004f3619
//   XREF to: 004f3619 (CONDITIONAL_JUMP)
// 004f36a7: FLD double ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 004f36aa: FCOMP double ptr [0x0062eca6]
//   XREF to: 0062eca6 (READ)
// 004f36b0: FNSTSW AX
// 004f36b2: SAHF
// 004f36b3: JA 0x004f3619
//   XREF to: 004f3619 (CONDITIONAL_JUMP)
// 004f36b9: FLD float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 004f36bc: FABS
// 004f36be: FCOMP double ptr [0x0062eca6]
//   XREF to: 0062eca6 (READ)
// 004f36c4: FNSTSW AX
// 004f36c6: SAHF
// 004f36c7: JA 0x004f3619
//   XREF to: 004f3619 (CONDITIONAL_JUMP)
// 004f36cd: LEA EAX,[EBP + -0x2c]
//   XREF to: Stack[-0x3c] (DATA)
// 004f36d0: PUSH EAX
// 004f36d1: LEA EAX,[EBP + -0x38]
//   XREF to: Stack[-0x48] (DATA)
// 004f36d4: PUSH EAX
// 004f36d5: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f36da: FLD float ptr [EAX + 0x4]
// 004f36dd: FABS
// 004f36df: ADD ESP,0x8
// 004f36e2: FCOMP double ptr [0x0062ecae]
//   XREF to: 0062ecae (READ)
// 004f36e8: FNSTSW AX
// 004f36ea: SAHF
// 004f36eb: JA 0x004f3619
//   XREF to: 004f3619 (CONDITIONAL_JUMP)
// 004f36f1: MOV EAX,dword ptr [EBX + 0x158]
// 004f36f7: MOV dword ptr [ESI + 0x1fbb4],EAX
// 004f36fd: TEST EAX,EAX
// 004f36ff: JZ 0x004f3619
//   XREF to: 004f3619 (CONDITIONAL_JUMP)
// 004f3705: MOV EDI,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004f3708: LEA EAX,[ESI + 0x1fbb8]
// 004f370e: CMP EAX,EDI
// 004f3710: JNZ 0x004f373e
//   XREF to: 004f373e (CONDITIONAL_JUMP)
// 004f3712: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_004f3712
//   XREF to: Stack[-0x14] (READ)
// 004f3715: ADD ESI,0x1fbc4
// 004f371b: ADD EAX,0x30
// 004f371e: CMP ESI,EAX
// 004f3720: JZ 0x004f3732
//   XREF to: 004f3732 (CONDITIONAL_JUMP)
// 004f3722: MOV EDX,dword ptr [EAX]
// 004f3724: MOV dword ptr [ESI],EDX
// 004f3726: MOV EDX,dword ptr [EAX + 0x4]
// 004f3729: MOV dword ptr [ESI + 0x4],EDX
// 004f372c: MOV EDX,dword ptr [EAX + 0x8]
// 004f372f: MOV dword ptr [ESI + 0x8],EDX
// 004f3732: MOV EAX,0x1
//   Label: LAB_004f3732
// 004f3737: MOV ESP,EBP
// 004f3739: POP EBP
// 004f373a: POP EDI
// 004f373b: POP ESI
// 004f373c: POP EBX
// 004f373d: RET
// 004f373e: MOV EBX,EDI
//   Label: LAB_004f373e
// 004f3740: MOV EDX,dword ptr [EBX]
// 004f3742: MOV dword ptr [EAX],EDX
// 004f3744: MOV EDX,dword ptr [EBX + 0x4]
// 004f3747: MOV dword ptr [EAX + 0x4],EDX
// 004f374a: MOV EDX,dword ptr [EBX + 0x8]
// 004f374d: MOV dword ptr [EAX + 0x8],EDX
// 004f3750: JMP 0x004f3712
//   XREF to: 004f3712 (UNCONDITIONAL_JUMP)
