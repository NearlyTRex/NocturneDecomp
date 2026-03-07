; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdlib_c_rand_FUN_005feb5c(void)
;
;
; XREF[41]:
;   core_actor.cpp_getRandomFloat_FUN_0040cbc0 at 0040cbee
;   core_actor.cpp_getRandomFloat_FUN_0040cc10 at 0040cc5b
;   core_actor.cpp_getRandomInt_FUN_0040cc70 at 0040cca5
;   core_actor.cpp_randomChance_FUN_0040cd10 at 0040cd4d
;   core_baron.cpp_CBaron_performLightningAttack_FUN_004136b0 at 004138a9
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00415dd0 at 00415df0
;   core_batman.cpp_CBatman_FUN_00417660 at 00417680
;   core_boxactor.cpp_CLightActor_process_FUN_00422a50 at 00422b2a
;   core_bride.cpp_CBride_FUN_00424600 at 00424623
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_0042af60 at 0042afca
;   ... and 31 more
;
; Called Functions:
;   crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50
;
; *****************************************************************************

section .text

    CALL crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50 ; 005feb5c
        ;   XREF to: 005feb50 (UNCONDITIONAL_CALL)  ; uint * crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50()
        ;   Label: crt_stdlib.c_rand_FUN_005feb5c
    TEST EAX,EAX                        ; 005feb61
    JNZ 0x005feb66                      ; 005feb63
        ;   XREF to: 005feb66 (CONDITIONAL_JUMP)  ; LAB_005feb66
    RET                                 ; 005feb65
    IMUL EDX,dword ptr [EAX],0x41c64e6d ; 005feb66
        ;   Label: LAB_005feb66
    ADD EDX,0x3039                      ; 005feb6c
    MOV dword ptr [EAX],EDX             ; 005feb72
    MOV EAX,EDX                         ; 005feb74
    SHR EAX,0x10                        ; 005feb76
    AND EAX,0x7fff                      ; 005feb79
    RET                                 ; 005feb7e

