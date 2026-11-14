; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdlib_c_rand_FUN_005a35cc(void)
;
;
; XREF[34]:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 at 0040ce8b
;   core_actor.cpp_getRandomInt_FUN_0040cea0 at 0040ced5
;   core_actor.cpp_randomChance_FUN_0040cf40 at 0040cf7d
;   core_boxactor.cpp_CLightActor_process_FUN_00420420 at 004204fe
;   core_carved.cpp_FUN_00428810 at 00428830
;   core_charactr.cpp_FUN_0042d500 at 0042d644
;   core_charactr.cpp_FUN_0042f310 at 0042f37a
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_00445730 at 00445750
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_0044d800 at 0044d82a
;   core_dcamera.cpp_generateFogGrid_FUN_00448750 at 004487a8
;   ... and 24 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a35c0
;
; *****************************************************************************

section .text

    CALL crt_unknown.c_FUN_005a35c0     ; 005a35cc
        ;   XREF to: 005a35c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a35c0()
        ;   Label: crt_stdlib.c_rand_FUN_005a35cc
    TEST EAX,EAX                        ; 005a35d1
    JNZ 0x005a35d6                      ; 005a35d3
        ;   XREF to: 005a35d6 (CONDITIONAL_JUMP)  ; LAB_005a35d6
    RET                                 ; 005a35d5
    IMUL EDX,dword ptr [EAX],0x41c64e6d ; 005a35d6
        ;   Label: LAB_005a35d6
    ADD EDX,0x3039                      ; 005a35dc
    MOV dword ptr [EAX],EDX             ; 005a35e2
    MOV EAX,EDX                         ; 005a35e4
    SHR EAX,0x10                        ; 005a35e6
    AND EAX,0x7fff                      ; 005a35e9
    RET                                 ; 005a35ee

