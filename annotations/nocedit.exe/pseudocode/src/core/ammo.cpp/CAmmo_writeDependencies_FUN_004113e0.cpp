// Name: core_ammo.cpp_CAmmo_writeDependencies_FUN_004113e0
// Address: 004113e0
// Address Range: [[004113e0, 004114de]]
// Convention: __cdecl
// Signature: void core_ammo.cpp_CAmmo_writeDependencies_FUN_004113e0(CAmmo * this_ptr, FILE * file_handle)
// Globals:
//   TerminatedCString s_gatbullet_kfm_00614afc
//   TerminatedCString s_holybullet_kfm_00614b0a
//   TerminatedCString s_woodbullet_kfm_00614b19
//   TerminatedCString s_silverbullet_kfm_00614b28
//   TerminatedCString s_goldbullet_kfm_00614b39
//   TerminatedCString s_lithiumbullet_kfm_00614b48
//   TerminatedCString s_mercurybullet_kfm_00614b5a
//   TerminatedCString s_shell_kfm_00614b6c
//   TerminatedCString s_stake_kfm_00614b76
//   TerminatedCString s_dynamitebundle_kfm_00614b80
//   TerminatedCString s_tommybullet_kfm_00614b93
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_writeDependencies_FUN_004113e0(CAmmo *this_ptr,FILE *file_handle)

{
  int iVar1;
  char *str1;
  
  str1 = (this_ptr->model).model_name;
  iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"gatbullet.kfm");
  if (iVar1 != 0) {
    iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"holybullet.kfm");
    if (iVar1 != 0) {
      iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"woodbullet.kfm");
      if (iVar1 != 0) {
        iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"silverbullet.kfm");
        if (iVar1 != 0) {
          iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"goldbullet.kfm");
          if (iVar1 != 0) {
            iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"lithiumbullet.kfm");
            if (iVar1 != 0) {
              iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"mercurybullet.kfm");
              if (iVar1 != 0) {
                iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"shell.kfm");
                if (iVar1 != 0) {
                  iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"stake.kfm");
                  if (iVar1 != 0) {
                    iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"dynamitebundle.kfm");
                    if (iVar1 != 0) {
                      iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,"tommybullet.kfm");
                      if (iVar1 != 0) {
                        core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
                                  (&this_ptr->model,(FILE *)0x411497);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


// Assembly code:
// 004113e0: PUSH EBX
//   Label: core_ammo.cpp_CAmmo_writeDependencies_FUN_004113e0
// 004113e1: PUSH ESI
// 004113e2: PUSH EBP
// 004113e3: MOV EBP,ESP
// 004113e5: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004113e8: LEA ESI,[EBX + 0x158]
// 004113ee: PUSH 0x614afc
//   XREF to: 00614afc (DATA)
// 004113f3: ADD EBX,0x1d0
// 004113f9: PUSH EBX
// 004113fa: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004113ff: ADD ESP,0x8
// 00411402: TEST EAX,EAX
// 00411404: JNZ 0x0041140a
//   XREF to: 0041140a (CONDITIONAL_JUMP)
// 00411406: POP EBP
//   Label: LAB_00411406
// 00411407: POP ESI
// 00411408: POP EBX
// 00411409: RET
// 0041140a: PUSH 0x614b0a
//   Label: LAB_0041140a
//   XREF to: 00614b0a (DATA)
// 0041140f: PUSH EBX
// 00411410: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00411415: ADD ESP,0x8
// 00411418: TEST EAX,EAX
// 0041141a: JZ 0x00411406
//   XREF to: 00411406 (CONDITIONAL_JUMP)
// 0041141c: PUSH 0x614b19
//   XREF to: 00614b19 (DATA)
// 00411421: PUSH EBX
// 00411422: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00411427: ADD ESP,0x8
// 0041142a: TEST EAX,EAX
// 0041142c: JZ 0x00411406
//   XREF to: 00411406 (CONDITIONAL_JUMP)
// 0041142e: PUSH 0x614b28
//   XREF to: 00614b28 (DATA)
// 00411433: PUSH EBX
// 00411434: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00411439: ADD ESP,0x8
// 0041143c: TEST EAX,EAX
// 0041143e: JZ 0x00411406
//   XREF to: 00411406 (CONDITIONAL_JUMP)
// 00411440: PUSH 0x614b39
//   XREF to: 00614b39 (DATA)
// 00411445: PUSH EBX
// 00411446: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0041144b: ADD ESP,0x8
// 0041144e: TEST EAX,EAX
// 00411450: JZ 0x00411406
//   XREF to: 00411406 (CONDITIONAL_JUMP)
// 00411452: PUSH 0x614b48
//   XREF to: 00614b48 (DATA)
// 00411457: PUSH EBX
// 00411458: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0041145d: ADD ESP,0x8
// 00411460: TEST EAX,EAX
// 00411462: JZ 0x00411406
//   XREF to: 00411406 (CONDITIONAL_JUMP)
// 00411464: PUSH 0x614b5a
//   XREF to: 00614b5a (DATA)
// 00411469: PUSH EBX
// 0041146a: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0041146f: ADD ESP,0x8
// 00411472: TEST EAX,EAX
// 00411474: JZ 0x00411406
//   XREF to: 00411406 (CONDITIONAL_JUMP)
// 00411476: PUSH 0x614b6c
//   XREF to: 00614b6c (DATA)
// 0041147b: PUSH EBX
// 0041147c: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00411481: ADD ESP,0x8
// 00411484: TEST EAX,EAX
// 00411486: JZ 0x00411406
//   XREF to: 00411406 (CONDITIONAL_JUMP)
// 0041148c: PUSH 0x614b76
//   XREF to: 00614b76 (DATA)
// 00411491: PUSH EBX
// 00411492: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00411497: ADD ESP,0x8
// 0041149a: TEST EAX,EAX
// 0041149c: JZ 0x00411406
//   XREF to: 00411406 (CONDITIONAL_JUMP)
// 004114a2: PUSH 0x614b80
//   XREF to: 00614b80 (DATA)
// 004114a7: PUSH EBX
// 004114a8: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004114ad: ADD ESP,0x8
// 004114b0: TEST EAX,EAX
// 004114b2: JZ 0x00411406
//   XREF to: 00411406 (CONDITIONAL_JUMP)
// 004114b8: PUSH 0x614b93
//   XREF to: 00614b93 (DATA)
// 004114bd: PUSH EBX
// 004114be: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004114c3: ADD ESP,0x8
// 004114c6: TEST EAX,EAX
// 004114c8: JZ 0x00411406
//   XREF to: 00411406 (CONDITIONAL_JUMP)
// 004114ce: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004114d1: PUSH EDX
// 004114d2: PUSH ESI
// 004114d3: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 004114d8: ADD ESP,0x8
// 004114db: POP EBP
// 004114dc: POP ESI
// 004114dd: POP EBX
// 004114de: RET
