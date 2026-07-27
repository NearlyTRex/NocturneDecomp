; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00526310(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; Called Functions:
;   sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 00526310 | DAT_02dc1b74
        ;   Label: sound_sndmain.cpp_FUN_00526310
    LEA EAX,[EDX*0x4 + 0x0]             ; 00526316
    SUB EAX,EDX                         ; 0052631d
    SHL EAX,0x2                         ; 0052631f
    MOV EDX,EAX                         ; 00526322
    SHL EAX,0x3                         ; 00526324
    ADD EAX,EDX                         ; 00526327
    ADD EAX,0x2dc1b78                   ; 00526329
    PUSH EAX                            ; 0052632e
    CALL sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0 ; 0052632f
        ;   XREF to: 00525eb0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0()
    ADD ESP,0x4                         ; 00526334
    RET                                 ; 00526337

