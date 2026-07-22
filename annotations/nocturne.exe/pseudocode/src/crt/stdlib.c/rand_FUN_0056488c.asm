; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_stdlib_c_rand_FUN_0056488c(void)
;
;
; XREF[37]:
;   FUN_0041f3d0 at 0041f4aa
;   FUN_004c90e0 at 004c9128
;   FUN_004f0360 at 004f0448
;   FUN_0052d030 at 0052d0d1
;   FUN_0052d790 at 0052dc93
;   FUN_0052dff0 at 0052e823
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 at 0040ddeb
;   core_actor.cpp_getRandomInt_FUN_0040de00 at 0040de35
;   core_actor.cpp_randomChance_FUN_0040dea0 at 0040dedd
;   core_baron.cpp_FUN_00410cc0 at 00410e63
;   ... and 27 more
;
; Called Functions:
;   FUN_00564880
;
; *****************************************************************************

section .text

    CALL FUN_00564880                   ; 0056488c
        ;   XREF to: 00564880 (UNCONDITIONAL_CALL)  ; undefined FUN_00564880()
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

