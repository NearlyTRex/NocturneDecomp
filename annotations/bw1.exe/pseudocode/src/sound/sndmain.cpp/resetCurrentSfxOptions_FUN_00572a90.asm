; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_resetCurrentSfxOptions_FUN_00572a90(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005726e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 00572a90 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_resetCurrentSfxOptions_FUN_00572a90
    LEA EAX,[EDX*0x4 + 0x0]             ; 00572a96
    SUB EAX,EDX                         ; 00572a9d
    SHL EAX,0x5                         ; 00572a9f
    ADD EAX,0x2c78cf0                   ; 00572aa2
    PUSH EAX                            ; 00572aa7
    CALL sound_sndmain.cpp_FUN_005726e0 ; 00572aa8
        ;   XREF to: 005726e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005726e0(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 00572aad
    RET                                 ; 00572ab0

