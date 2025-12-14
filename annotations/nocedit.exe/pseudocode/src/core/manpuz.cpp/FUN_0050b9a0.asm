; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_FUN_0050b9a0()
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b9a0
        ;   Label: core_manpuz.cpp_FUN_0050b9a0
    PUSH ESI                            ; 0050b9a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050b9a2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050b9a6
    MOV ECX,dword ptr [EDX]             ; 0050b9aa
    MOV dword ptr [EAX],ECX             ; 0050b9ac
    LEA EBX,[EDX + 0xc]                 ; 0050b9ae
    FLD float ptr [EDX + 0x4]           ; 0050b9b1
    LEA ECX,[EAX + 0xc]                 ; 0050b9b4
    FSTP float ptr [EAX + 0x4]          ; 0050b9b7
    MOV ESI,dword ptr [EDX + 0x8]       ; 0050b9ba
    MOV dword ptr [EAX + 0x8],ESI       ; 0050b9bd
    CMP ECX,EBX                         ; 0050b9c0
    JNZ 0x0050ba39                      ; 0050b9c2
        ;   XREF to: 0050ba39 (CONDITIONAL_JUMP)  ; LAB_0050ba39
    LEA EBX,[EDX + 0x18]                ; 0050b9c4
        ;   Label: LAB_0050b9c4
    LEA ECX,[EAX + 0x18]                ; 0050b9c7
    CMP ECX,EBX                         ; 0050b9ca
    JZ 0x0050b9de                       ; 0050b9cc
        ;   XREF to: 0050b9de (CONDITIONAL_JUMP)  ; LAB_0050b9de
    MOV ESI,dword ptr [EBX]             ; 0050b9ce
    MOV dword ptr [ECX],ESI             ; 0050b9d0
    MOV ESI,dword ptr [EBX + 0x4]       ; 0050b9d2
    MOV dword ptr [ECX + 0x4],ESI       ; 0050b9d5
    MOV ESI,dword ptr [EBX + 0x8]       ; 0050b9d8
    MOV dword ptr [ECX + 0x8],ESI       ; 0050b9db
    MOV ECX,dword ptr [EDX + 0x24]      ; 0050b9de
        ;   Label: LAB_0050b9de
    MOV dword ptr [EAX + 0x24],ECX      ; 0050b9e1
    MOV ECX,dword ptr [EDX + 0x28]      ; 0050b9e4
    MOV dword ptr [EAX + 0x28],ECX      ; 0050b9e7
    MOV ECX,dword ptr [EDX + 0x2c]      ; 0050b9ea
    MOV dword ptr [EAX + 0x2c],ECX      ; 0050b9ed
    MOV ECX,dword ptr [EDX + 0x30]      ; 0050b9f0
    MOV dword ptr [EAX + 0x30],ECX      ; 0050b9f3
    MOV ECX,dword ptr [EDX + 0x34]      ; 0050b9f6
    MOV dword ptr [EAX + 0x34],ECX      ; 0050b9f9
    MOV ECX,dword ptr [EDX + 0x38]      ; 0050b9fc
    MOV dword ptr [EAX + 0x38],ECX      ; 0050b9ff
    MOV ECX,dword ptr [EDX + 0x3c]      ; 0050ba02
    MOV dword ptr [EAX + 0x3c],ECX      ; 0050ba05
    MOV ECX,dword ptr [EDX + 0x40]      ; 0050ba08
    MOV dword ptr [EAX + 0x40],ECX      ; 0050ba0b
    MOV ECX,dword ptr [EDX + 0x44]      ; 0050ba0e
    MOV dword ptr [EAX + 0x44],ECX      ; 0050ba11
    MOV ECX,dword ptr [EDX + 0x48]      ; 0050ba14
    MOV dword ptr [EAX + 0x48],ECX      ; 0050ba17
    MOV ECX,dword ptr [EDX + 0x4c]      ; 0050ba1a
    MOV dword ptr [EAX + 0x4c],ECX      ; 0050ba1d
    MOV ECX,dword ptr [EDX + 0x50]      ; 0050ba20
    MOV dword ptr [EAX + 0x50],ECX      ; 0050ba23
    MOV ECX,dword ptr [EDX + 0x54]      ; 0050ba26
    ADD EDX,0x58                        ; 0050ba29
    MOV dword ptr [EAX + 0x54],ECX      ; 0050ba2c
    LEA ECX,[EAX + 0x58]                ; 0050ba2f
    CMP ECX,EDX                         ; 0050ba32
    JNZ 0x0050ba4e                      ; 0050ba34
        ;   XREF to: 0050ba4e (CONDITIONAL_JUMP)  ; LAB_0050ba4e
    POP ESI                             ; 0050ba36
    POP EBX                             ; 0050ba37
    RET                                 ; 0050ba38
    MOV ESI,dword ptr [EBX]             ; 0050ba39
        ;   Label: LAB_0050ba39
    MOV dword ptr [ECX],ESI             ; 0050ba3b
    MOV ESI,dword ptr [EBX + 0x4]       ; 0050ba3d
    MOV dword ptr [ECX + 0x4],ESI       ; 0050ba40
    MOV ESI,dword ptr [EBX + 0x8]       ; 0050ba43
    MOV dword ptr [ECX + 0x8],ESI       ; 0050ba46
    JMP 0x0050b9c4                      ; 0050ba49
        ;   XREF to: 0050b9c4 (UNCONDITIONAL_JUMP)  ; LAB_0050b9c4
    MOV EBX,dword ptr [EDX]             ; 0050ba4e
        ;   Label: LAB_0050ba4e
    MOV dword ptr [ECX],EBX             ; 0050ba50
    MOV EBX,dword ptr [EDX + 0x4]       ; 0050ba52
    MOV dword ptr [ECX + 0x4],EBX       ; 0050ba55
    MOV EBX,dword ptr [EDX + 0x8]       ; 0050ba58
    MOV dword ptr [ECX + 0x8],EBX       ; 0050ba5b
    POP ESI                             ; 0050ba5e
    POP EBX                             ; 0050ba5f
    RET                                 ; 0050ba60

