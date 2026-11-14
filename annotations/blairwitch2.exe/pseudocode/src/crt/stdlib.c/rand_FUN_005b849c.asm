; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdlib_c_rand_FUN_005b849c(void)
;
;
; XREF[37]:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 at 0040cfab
;   core_actor.cpp_getRandomInt_FUN_0040cfc0 at 0040cff5
;   core_actor.cpp_randomChance_FUN_0040d060 at 0040d09d
;   core_baron.cpp_CBaron_performLightningAttack_FUN_00410170 at 00410342
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412500 at 00412520
;   core_batman.cpp_CBatman_processDismemberment_FUN_00413f40 at 00413f60
;   core_boxactor.cpp_CLightActor_process_FUN_0041d020 at 0041d0fa
;   core_bride.cpp_CBride_processDismemberment_FUN_0041e8a0 at 0041e8c3
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_00426730 at 0042679a
;   core_charactr.cpp_FUN_004247f0 at 00424934
;   ... and 27 more
;
; Called Functions:
;   crt_unknown.c_FUN_005b8490
;
; *****************************************************************************

section .text

    CALL crt_unknown.c_FUN_005b8490     ; 005b849c
        ;   XREF to: 005b8490 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8490()
        ;   Label: crt_stdlib.c_rand_FUN_005b849c
    TEST EAX,EAX                        ; 005b84a1
    JNZ 0x005b84a6                      ; 005b84a3
        ;   XREF to: 005b84a6 (CONDITIONAL_JUMP)  ; LAB_005b84a6
    RET                                 ; 005b84a5
    IMUL EDX,dword ptr [EAX],0x41c64e6d ; 005b84a6
        ;   Label: LAB_005b84a6
    ADD EDX,0x3039                      ; 005b84ac
    MOV dword ptr [EAX],EDX             ; 005b84b2
    MOV EAX,EDX                         ; 005b84b4
    SHR EAX,0x10                        ; 005b84b6
    AND EAX,0x7fff                      ; 005b84b9
    RET                                 ; 005b84be

