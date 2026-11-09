; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndwav_cpp_FUN_0055d6c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02cf54f0
;   undefined4 DAT_02cf54f4
;   undefined4 DAT_02cf54fc
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x02cf54f0]      ; 0055d6c0 | DAT_02cf54f0
        ;   Label: sound_sndwav.cpp_FUN_0055d6c0
    MOV EDX,ECX                         ; 0055d6c6
    MOV EAX,ECX                         ; 0055d6c8
    SAR EDX,0x1f                        ; 0055d6ca
    SHL EDX,0x3                         ; 0055d6cd
    SBB EAX,EDX                         ; 0055d6d0
    SAR EAX,0x3                         ; 0055d6d2
    IMUL EAX,dword ptr [0x02cf54fc]     ; 0055d6d5 | DAT_02cf54fc
    IMUL EAX,dword ptr [0x02cf54f4]     ; 0055d6dc | DAT_02cf54f4
    RET                                 ; 0055d6e3

