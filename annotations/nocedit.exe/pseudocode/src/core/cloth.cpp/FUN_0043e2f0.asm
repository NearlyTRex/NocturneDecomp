; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_cloth_cpp_FUN_0043e2f0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043e2f0
        ;   Label: core_cloth.cpp_FUN_0043e2f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043e2f4
    FLD float ptr [EDX]                 ; 0043e2f8
    FADD float ptr [EAX]                ; 0043e2fa
    FSTP float ptr [EAX]                ; 0043e2fc
    FLD float ptr [EDX + 0x4]           ; 0043e2fe
    FADD float ptr [EAX + 0x4]          ; 0043e301
    FSTP float ptr [EAX + 0x4]          ; 0043e304
    FLD float ptr [EDX + 0x8]           ; 0043e307
    FADD float ptr [EAX + 0x8]          ; 0043e30a
    FSTP float ptr [EAX + 0x8]          ; 0043e30d
    RET                                 ; 0043e310

