// Name: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0
// Address: 004e63d0
// Address Range: [[004e63d0, 004e6413]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0()
// Cross-references:
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e771d [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_ghoul.cpp_CGhoul_findDarkWayPoint(CGhoul* param_1, undefined4
   param_2) */

void core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0(void)

{
  float fVar1;
  CDemonActor *this_ptr;
  int iVar2;
  CPathMap *this_ptr_00;
  CDemonActor *pCVar3;
  BADSPACEBASE *in_ESP;
  CVector3f *unaff_ESI;
  int iVar4;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int direction_hint;
  float local_14;
  
  if ((in_stack_00000004[0x8e].orient_matrix.m[2].x == 0.0) &&
     (in_stack_00000008 = in_stack_00000004[0x8e].orient_matrix.m[1].z - in_stack_00000008,
     in_stack_00000004[0x8e].orient_matrix.m[1].z = in_stack_00000008, in_stack_00000008 <= 0.0)) {
    fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,2.0);
    local_14 = 0.0;
    direction_hint = 0;
    in_stack_00000004[0x8e].orient_matrix.m[1].z =
         fVar1 + in_stack_00000004[0x8e].orient_matrix.m[1].z;
    for (; (int)local_14 < (int)g_CDemonSetPtr->actor_list_ptr;
        local_14 = (float)((int)local_14 + 1)) {
      this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + direction_hint),
                            g_CWayPointClassInfo.name_hash);
      if ((this_ptr != (CDemonActor *)0x0) &&
         (iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                            (PTR_s_darkPoint_0062df3e_0067b930,this_ptr->actor_name,0), iVar2 != 0))
      {
        iVar2 = 0;
        local_14 = 1.4013e-45;
        for (iVar4 = 0; iVar4 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c);
            iVar4 = iVar4 + 1) {
          pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar2 + 8000),
                              g_CGhoulClassInfo.name_hash);
          if (((pCVar3 != (CDemonActor *)0x0) && (pCVar3 != in_stack_00000004)) &&
             (this_ptr == (CDemonActor *)pCVar3[0x8e].orient_matrix.m[1].y)) goto LAB_004e646f;
          iVar2 = iVar2 + 4;
        }
        if (local_14 != 0.0) {
          this_ptr_00 = (*this_ptr->vtable->getPathMap)(this_ptr);
          if (this_ptr_00 == (CPathMap *)0x0) {
            this_ptr_00 = (CPathMap *)core_path_cpp_FUN_00548500();
          }
          if (this_ptr_00 == (CPathMap *)0x0) {
            g_CurrentFilename = "..\\core\\ghoul.cpp";
            g_CurrentLineNumber = 300;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CGhoul::findDarkWayPoint - Can't get temp path map");
          }
          local_14 = 0.0;
          direction_hint = in_stack_00000004->field7_0x6c;
          iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                            (this_ptr_00,unaff_ESI,(CVector3f *)&local_14,direction_hint);
          if (0 < iVar2) {
            in_stack_00000004[0x8e].orient_matrix.m[1].y = (float)this_ptr;
          }
        }
      }
LAB_004e646f:
      direction_hint = direction_hint + 4;
    }
  }
  return;
}


// Assembly code:
// 004e63d0: PUSH EBX
//   Label: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0
// 004e63d1: PUSH ESI
// 004e63d2: PUSH EDI
// 004e63d3: PUSH EBP
// 004e63d4: SUB ESP,0x20
// 004e63d7: MOV EBP,dword ptr [ESP + 0x34]
// 004e63db: CMP dword ptr [EBP + 0xbf24],0x0
// 004e63e2: JNZ 0x004e63fd
//   XREF to: 004e63fd (CONDITIONAL_JUMP)
// 004e63e4: FLD float ptr [EBP + 0xbf20]
// 004e63ea: FSUB float ptr [ESP + 0x38]
// 004e63ee: FST float ptr [EBP + 0xbf20]
// 004e63f4: FLDZ
// 004e63f6: FCOMPP
// 004e63f8: FNSTSW AX
// 004e63fa: SAHF
// 004e63fb: JNC 0x004e6405
//   XREF to: 004e6405 (CONDITIONAL_JUMP)
// 004e63fd: ADD ESP,0x20
//   Label: LAB_004e63fd
// 004e6400: POP EBP
// 004e6401: POP EDI
// 004e6402: POP ESI
// 004e6403: POP EBX
// 004e6404: RET
// 004e6405: PUSH 0x40000000
//   Label: LAB_004e6405
// 004e640a: PUSH 0x3f800000
// 004e640f: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
