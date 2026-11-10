; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005503c0(uint param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 005503c0 | DAT_0264161c
        ;   Label: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005503c0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005503c6
    SUB EAX,EDX                         ; 005503cd
    MOV EDX,dword ptr [ESP + 0x4]       ; 005503cf
    SHL EAX,0x5                         ; 005503d3
    NOT EDX                             ; 005503d6
    AND dword ptr [EAX + 0x264166c],EDX ; 005503d8
    RET                                 ; 005503de

