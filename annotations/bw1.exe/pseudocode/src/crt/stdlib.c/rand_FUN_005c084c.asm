; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdlib_c_rand_FUN_005c084c(void)
;
;
; XREF[40]:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 at 0040cc4b
;   core_actor.cpp_getRandomInt_FUN_0040cc60 at 0040cc95
;   core_actor.cpp_randomChance_FUN_0040cd00 at 0040cd3d
;   core_baron.cpp_CBaron_performLightningAttack_FUN_0040fcf0 at 0040fec2
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412170 at 00412190
;   core_batman.cpp_CBatman_processDismemberment_FUN_00413c40 at 00413c60
;   core_boxactor.cpp_CLightActor_process_FUN_00422f90 at 0042306a
;   core_bride.cpp_CBride_processDismemberment_FUN_004248e0 at 00424903
;   core_carved.cpp_FUN_0042b580 at 0042b5a0
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_00430060 at 004300ca
;   ... and 30 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c0840
;
; *****************************************************************************

section .text

    CALL crt_unknown.c_FUN_005c0840     ; 005c084c
        ;   XREF to: 005c0840 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0840()
        ;   Label: crt_stdlib.c_rand_FUN_005c084c
    TEST EAX,EAX                        ; 005c0851
    JNZ 0x005c0856                      ; 005c0853
        ;   XREF to: 005c0856 (CONDITIONAL_JUMP)  ; LAB_005c0856
    RET                                 ; 005c0855
    IMUL EDX,dword ptr [EAX],0x41c64e6d ; 005c0856
        ;   Label: LAB_005c0856
    ADD EDX,0x3039                      ; 005c085c
    MOV dword ptr [EAX],EDX             ; 005c0862
    MOV EAX,EDX                         ; 005c0864
    SHR EAX,0x10                        ; 005c0866
    AND EAX,0x7fff                      ; 005c0869
    RET                                 ; 005c086e

