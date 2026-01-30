; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float * __cdecl core_bugs_cpp_FUN_00427a20(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00427a20
        ;   Label: core_bugs.cpp_FUN_00427a20
    MOV ECX,dword ptr [ESP + 0x8]       ; 00427a24
    MOV EDX,dword ptr [ESP + 0xc]       ; 00427a28
    FLD float ptr [EAX + 0x4]           ; 00427a2c
    FMUL float ptr [EDX + 0x8]          ; 00427a2f
    FLD float ptr [EAX + 0x8]           ; 00427a32
    FMUL float ptr [EDX + 0x4]          ; 00427a35
    FSUBP                               ; 00427a38
    FSTP float ptr [ECX]                ; 00427a3a
    FLD float ptr [EAX + 0x8]           ; 00427a3c
    FMUL float ptr [EDX]                ; 00427a3f
    FLD float ptr [EAX]                 ; 00427a41
    FMUL float ptr [EDX + 0x8]          ; 00427a43
    FSUBP                               ; 00427a46
    FSTP float ptr [ECX + 0x4]          ; 00427a48
    FLD float ptr [EAX]                 ; 00427a4b
    FMUL float ptr [EDX + 0x4]          ; 00427a4d
    FLD float ptr [EAX + 0x4]           ; 00427a50
    FMUL float ptr [EDX]                ; 00427a53
    FSUBP                               ; 00427a55
    MOV EAX,ECX                         ; 00427a57
    FSTP float ptr [ECX + 0x8]          ; 00427a59
    RET                                 ; 00427a5c

