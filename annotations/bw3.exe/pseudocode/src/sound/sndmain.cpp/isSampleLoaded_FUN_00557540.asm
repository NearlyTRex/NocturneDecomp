; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool sound_sndmain_cpp_isSampleLoaded_FUN_00557540(char *param_1)
;
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00551d20
;   sound_sndmain.cpp_FUN_00556fd0
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557540
        ;   Label: sound_sndmain.cpp_isSampleLoaded_FUN_00557540
    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 00557541
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
    MOV EDX,dword ptr [ESP + 0x8]       ; 00557546
    PUSH EDX                            ; 0055754a
    XOR EBX,EBX                         ; 0055754b
    CALL sound_sndmain.cpp_FUN_00551d20 ; 0055754d
        ;   XREF to: 00551d20 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_FUN_00551d20(char * filename)
    ADD ESP,0x4                         ; 00557552
    TEST EAX,EAX                        ; 00557555
    JZ 0x0055755e                       ; 00557557
        ;   XREF to: 0055755e (CONDITIONAL_JUMP)  ; LAB_0055755e
    MOV EBX,0x1                         ; 00557559
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 0055755e
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
        ;   Label: LAB_0055755e
    MOV EAX,EBX                         ; 00557563
    POP EBX                             ; 00557565
    RET                                 ; 00557566

