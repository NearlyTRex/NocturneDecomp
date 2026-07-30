; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdlib_c_rand_FUN_0056488c(void)
;
;
; XREF[39]:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 at 0040ddeb
;   core_actor.cpp_getRandomInt_FUN_0040de00 at 0040de35
;   core_actor.cpp_randomChance_FUN_0040dea0 at 0040dedd
;   core_baron.cpp_FUN_00410cc0 at 00410e63
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412de0 at 00412e00
;   core_batman.cpp_CBatman_processDismemberment_FUN_004145f0 at 00414610
;   core_boxactor.cpp_CLightActor_process_FUN_0041f3d0 at 0041f4aa
;   core_bride.cpp_CBride_processDismemberment_FUN_00420a10 at 00420a33
;   core_charactr.cpp_FUN_004270e0 at 0042714a
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_0043c360 at 0043c380
;   ... and 29 more
;
; Called Functions:
;   crt_unknown.c_GetRandomSeedPointer_FUN_00564880
;
; *****************************************************************************

section .text

    CALL crt_unknown.c_GetRandomSeedPointer_FUN_00564880 ; 0056488c
        ;   XREF to: 00564880 (UNCONDITIONAL_CALL)  ; uint * crt_unknown.c_GetRandomSeedPointer_FUN_00564880()
        ;   Label: crt_stdlib.c_rand_FUN_0056488c
    TEST EAX,EAX                        ; 00564891
    JNZ 0x00564896                      ; 00564893
        ;   XREF to: 00564896 (CONDITIONAL_JUMP)  ; LAB_00564896
    RET                                 ; 00564895
    IMUL EDX,dword ptr [EAX],0x41c64e6d ; 00564896
        ;   Label: LAB_00564896
    ADD EDX,0x3039                      ; 0056489c
    MOV dword ptr [EAX],EDX             ; 005648a2
    MOV EAX,EDX                         ; 005648a4
    SHR EAX,0x10                        ; 005648a6
    AND EAX,0x7fff                      ; 005648a9
    RET                                 ; 005648ae

