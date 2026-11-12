; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_castToClassHash_FUN_0040c8f0(int param_1,undefined4 param_2)
;
;
; XREF[148]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408c30 at 00408ca2
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a050 at 0040a3dc
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410ac0 at 00410aff
;   core_baron.cpp_CBaron_attachToOwner_FUN_0040fef0 at 0040ff21
;   core_baron.cpp_CBaron_updateMountedPosition_FUN_00410080 at 00410125
;   core_basicene.cpp_CBasicEnemy_isGrabbable_FUN_0059fa70 at 0059fa8b
;   core_basicene.cpp_FUN_0059ee00 at 0059eed1
;   core_basicnpc.cpp_CBasicNPC_isGrabbable_FUN_005a4950 at 005a4967
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 00413960
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_004203a0 at 00420436
;   ... and 138 more
;
; Called Functions:
;   core_actor.cpp_isOfClassHash_FUN_0040c8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c8f0
        ;   Label: core_actor.cpp_castToClassHash_FUN_0040c8f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040c8f1
    TEST EBX,EBX                        ; 0040c8f5
    JNZ 0x0040c8fd                      ; 0040c8f7
        ;   XREF to: 0040c8fd (CONDITIONAL_JUMP)  ; LAB_0040c8fd
    XOR EAX,EAX                         ; 0040c8f9
    POP EBX                             ; 0040c8fb
        ;   Label: LAB_0040c8fb
    RET                                 ; 0040c8fc
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040c8fd
        ;   Label: LAB_0040c8fd
    PUSH EDX                            ; 0040c901
    PUSH EBX                            ; 0040c902
    CALL core_actor.cpp_isOfClassHash_FUN_0040c8c0 ; 0040c903
        ;   XREF to: 0040c8c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClassHash_FUN_0040c8c0()
    ADD ESP,0x8                         ; 0040c908
    TEST EAX,EAX                        ; 0040c90b
    JZ 0x0040c8fb                       ; 0040c90d
        ;   XREF to: 0040c8fb (CONDITIONAL_JUMP)  ; LAB_0040c8fb
    MOV EAX,EBX                         ; 0040c90f
    POP EBX                             ; 0040c911
    RET                                 ; 0040c912

