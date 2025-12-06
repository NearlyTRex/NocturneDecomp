; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_cloth.cpp_FUN_0043e3d0()
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043e3d0
        ;   Label: core_cloth.cpp_FUN_0043e3d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043e3d4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0043e3d8
    FLD float ptr [ECX]                 ; 0043e3dc
    FMUL float ptr [EDX]                ; 0043e3de
    FSTP float ptr [EAX]                ; 0043e3e0
    FLD float ptr [ECX + 0x4]           ; 0043e3e2
    FMUL float ptr [EDX]                ; 0043e3e5
    FSTP float ptr [EAX + 0x4]          ; 0043e3e7
    FLD float ptr [ECX + 0x8]           ; 0043e3ea
    FMUL float ptr [EDX]                ; 0043e3ed
    FSTP float ptr [EAX + 0x8]          ; 0043e3ef
    RET                                 ; 0043e3f2

