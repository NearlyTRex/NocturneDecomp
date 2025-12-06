; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint sound_sndmain.cpp_startNonPositionalSfx_FUN_005a9550(char * filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; Called Functions:
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9550
        ;   Label: sound_sndmain.cpp_startNonPositionalSfx_FUN_005a9550
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005a9551 | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH 0x1                            ; 005a9556
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90 ; 005a9558 | void sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90(uint flag_mask)
        ;   XREF to: 005a8b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a955d
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a9560
    PUSH EDX                            ; 005a9564
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005a9565 | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a956a
    MOV EBX,EAX                         ; 005a956d
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005a956f | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    MOV EAX,EBX                         ; 005a9574
    POP EBX                             ; 005a9576
    RET                                 ; 005a9577

