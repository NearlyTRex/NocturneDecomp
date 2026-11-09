; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndwav_cpp_FUN_00557b60(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0264b0f4
;   undefined4 DAT_0264b0f8
;   undefined4 DAT_0264b100
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x0264b0f4]      ; 00557b60 | DAT_0264b0f4
        ;   Label: sound_sndwav.cpp_FUN_00557b60
    MOV EDX,ECX                         ; 00557b66
    MOV EAX,ECX                         ; 00557b68
    SAR EDX,0x1f                        ; 00557b6a
    SHL EDX,0x3                         ; 00557b6d
    SBB EAX,EDX                         ; 00557b70
    SAR EAX,0x3                         ; 00557b72
    IMUL EAX,dword ptr [0x0264b100]     ; 00557b75 | DAT_0264b100
    IMUL EAX,dword ptr [0x0264b0f8]     ; 00557b7c | DAT_0264b0f8
    RET                                 ; 00557b83

