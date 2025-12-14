; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_box.cpp_CBoundingBox3D_normalize_FUN_00420d70(CBoundingBox3D * this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00420d70
        ;   Label: core_box.cpp_CBoundingBox3D_normalize_FUN_00420d70
    FLD float ptr [EDX]                 ; 00420d74
    FCOMP float ptr [EDX + 0xc]         ; 00420d76
    FNSTSW AX                           ; 00420d79
    SAHF                                ; 00420d7b
    JA 0x00420da5                       ; 00420d7c
        ;   XREF to: 00420da5 (CONDITIONAL_JUMP)  ; LAB_00420da5
    FLD float ptr [EDX + 0x4]           ; 00420d7e
        ;   Label: LAB_00420d7e
    FCOMP float ptr [EDX + 0x10]        ; 00420d81
    FNSTSW AX                           ; 00420d84
    SAHF                                ; 00420d86
    JBE 0x00420d99                      ; 00420d87
        ;   XREF to: 00420d99 (CONDITIONAL_JUMP)  ; LAB_00420d99
    PUSH EBX                            ; 00420d89
    LEA ECX,[EDX + 0x4]                 ; 00420d8a
    LEA EAX,[EDX + 0x10]                ; 00420d8d
    MOV EBX,dword ptr [ECX]             ; 00420d90
    FLD float ptr [EAX]                 ; 00420d92
    FSTP float ptr [ECX]                ; 00420d94
    MOV dword ptr [EAX],EBX             ; 00420d96
    POP EBX                             ; 00420d98
    FLD float ptr [EDX + 0x8]           ; 00420d99
        ;   Label: LAB_00420d99
    FCOMP float ptr [EDX + 0x14]        ; 00420d9c
    FNSTSW AX                           ; 00420d9f
    SAHF                                ; 00420da1
    JA 0x00420db2                       ; 00420da2
        ;   XREF to: 00420db2 (CONDITIONAL_JUMP)  ; LAB_00420db2
    RET                                 ; 00420da4
    LEA EAX,[EDX + 0xc]                 ; 00420da5
        ;   Label: LAB_00420da5
    MOV ECX,dword ptr [EDX]             ; 00420da8
    FLD float ptr [EAX]                 ; 00420daa
    FSTP float ptr [EDX]                ; 00420dac
    MOV dword ptr [EAX],ECX             ; 00420dae
    JMP 0x00420d7e                      ; 00420db0
        ;   XREF to: 00420d7e (UNCONDITIONAL_JUMP)  ; LAB_00420d7e
    LEA EAX,[EDX + 0x8]                 ; 00420db2
        ;   Label: LAB_00420db2
    FLD float ptr [EDX + 0x14]          ; 00420db5
    MOV ECX,dword ptr [EAX]             ; 00420db8
    FSTP float ptr [EAX]                ; 00420dba
    MOV dword ptr [EDX + 0x14],ECX      ; 00420dbc
    RET                                 ; 00420dbf

