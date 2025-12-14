; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_resetCurrentSfxOptions_FUN_005a8c10(void)
;
;
; Referenced Globals:
;   int g_SfxLastSlot
;   CSfxOptions[8] g_SfxOptions
;
; Called Functions:
;   sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a8c10 | g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_resetCurrentSfxOptions_FUN_005a8c10
    SHL EAX,0x4                         ; 005a8c15
    MOV EDX,EAX                         ; 005a8c18
    SHL EAX,0x3                         ; 005a8c1a
    SUB EAX,EDX                         ; 005a8c1d
    ADD EAX,0x3f624a8                   ; 005a8c1f | g_SfxOptions
    PUSH EAX                            ; 005a8c24
    CALL sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830 ; 005a8c25
        ;   XREF to: 005a8830 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 005a8c2a
    RET                                 ; 005a8c2d

