; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_resetCurrentSfxOptions_FUN_00555fa0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; Called Functions:
;   sound_sndmain.cpp_CSfxOptions_reset_FUN_00555bf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555fa0 | DAT_02ceb91c
        ;   Label: sound_sndmain.cpp_resetCurrentSfxOptions_FUN_00555fa0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555fa6
    SUB EAX,EDX                         ; 00555fad
    SHL EAX,0x5                         ; 00555faf
    ADD EAX,0x2ceb920                   ; 00555fb2
    PUSH EAX                            ; 00555fb7
    CALL sound_sndmain.cpp_CSfxOptions_reset_FUN_00555bf0 ; 00555fb8
        ;   XREF to: 00555bf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxOptions_reset_FUN_00555bf0(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 00555fbd
    RET                                 ; 00555fc0

