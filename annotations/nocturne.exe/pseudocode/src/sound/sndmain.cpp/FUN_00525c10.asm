; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_FUN_00525c10(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525c10
        ;   Label: sound_sndmain.cpp_FUN_00525c10
    MOV ECX,dword ptr [ESP + 0x8]       ; 00525c11
    MOV EBX,dword ptr [ECX + 0x108]     ; 00525c15
    MOV EDX,dword ptr [ECX + 0x104]     ; 00525c1b
    IMUL EDX,EBX                        ; 00525c21
    MOV EAX,EDX                         ; 00525c24
    SAR EDX,0x1f                        ; 00525c26
    SHL EDX,0x3                         ; 00525c29
    SBB EAX,EDX                         ; 00525c2c
    SAR EAX,0x3                         ; 00525c2e
    IMUL EAX,dword ptr [ECX + 0x110]    ; 00525c31
    POP EBX                             ; 00525c38
    RET                                 ; 00525c39

