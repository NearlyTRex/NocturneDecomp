; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_FUN_004cbf30(undefined4 *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbf30
        ;   Label: core_manpuz.cpp_FUN_004cbf30
    PUSH ESI                            ; 004cbf31
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cbf32
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cbf36
    MOV ECX,dword ptr [EDX]             ; 004cbf3a
    MOV dword ptr [EAX],ECX             ; 004cbf3c
    LEA EBX,[EDX + 0xc]                 ; 004cbf3e
    FLD float ptr [EDX + 0x4]           ; 004cbf41
    LEA ECX,[EAX + 0xc]                 ; 004cbf44
    FSTP float ptr [EAX + 0x4]          ; 004cbf47
    MOV ESI,dword ptr [EDX + 0x8]       ; 004cbf4a
    MOV dword ptr [EAX + 0x8],ESI       ; 004cbf4d
    CMP ECX,EBX                         ; 004cbf50
    JNZ 0x004cbfc9                      ; 004cbf52
        ;   XREF to: 004cbfc9 (CONDITIONAL_JUMP)  ; LAB_004cbfc9
    LEA EBX,[EDX + 0x18]                ; 004cbf54
        ;   Label: LAB_004cbf54
    LEA ECX,[EAX + 0x18]                ; 004cbf57
    CMP ECX,EBX                         ; 004cbf5a
    JZ 0x004cbf6e                       ; 004cbf5c
        ;   XREF to: 004cbf6e (CONDITIONAL_JUMP)  ; LAB_004cbf6e
    MOV ESI,dword ptr [EBX]             ; 004cbf5e
    MOV dword ptr [ECX],ESI             ; 004cbf60
    MOV ESI,dword ptr [EBX + 0x4]       ; 004cbf62
    MOV dword ptr [ECX + 0x4],ESI       ; 004cbf65
    MOV ESI,dword ptr [EBX + 0x8]       ; 004cbf68
    MOV dword ptr [ECX + 0x8],ESI       ; 004cbf6b
    MOV ECX,dword ptr [EDX + 0x24]      ; 004cbf6e
        ;   Label: LAB_004cbf6e
    MOV dword ptr [EAX + 0x24],ECX      ; 004cbf71
    MOV ECX,dword ptr [EDX + 0x28]      ; 004cbf74
    MOV dword ptr [EAX + 0x28],ECX      ; 004cbf77
    MOV ECX,dword ptr [EDX + 0x2c]      ; 004cbf7a
    MOV dword ptr [EAX + 0x2c],ECX      ; 004cbf7d
    MOV ECX,dword ptr [EDX + 0x30]      ; 004cbf80
    MOV dword ptr [EAX + 0x30],ECX      ; 004cbf83
    MOV ECX,dword ptr [EDX + 0x34]      ; 004cbf86
    MOV dword ptr [EAX + 0x34],ECX      ; 004cbf89
    MOV ECX,dword ptr [EDX + 0x38]      ; 004cbf8c
    MOV dword ptr [EAX + 0x38],ECX      ; 004cbf8f
    MOV ECX,dword ptr [EDX + 0x3c]      ; 004cbf92
    MOV dword ptr [EAX + 0x3c],ECX      ; 004cbf95
    MOV ECX,dword ptr [EDX + 0x40]      ; 004cbf98
    MOV dword ptr [EAX + 0x40],ECX      ; 004cbf9b
    MOV ECX,dword ptr [EDX + 0x44]      ; 004cbf9e
    MOV dword ptr [EAX + 0x44],ECX      ; 004cbfa1
    MOV ECX,dword ptr [EDX + 0x48]      ; 004cbfa4
    MOV dword ptr [EAX + 0x48],ECX      ; 004cbfa7
    MOV ECX,dword ptr [EDX + 0x4c]      ; 004cbfaa
    MOV dword ptr [EAX + 0x4c],ECX      ; 004cbfad
    MOV ECX,dword ptr [EDX + 0x50]      ; 004cbfb0
    MOV dword ptr [EAX + 0x50],ECX      ; 004cbfb3
    MOV ECX,dword ptr [EDX + 0x54]      ; 004cbfb6
    ADD EDX,0x58                        ; 004cbfb9
    MOV dword ptr [EAX + 0x54],ECX      ; 004cbfbc
    LEA ECX,[EAX + 0x58]                ; 004cbfbf
    CMP ECX,EDX                         ; 004cbfc2
    JNZ 0x004cbfde                      ; 004cbfc4
        ;   XREF to: 004cbfde (CONDITIONAL_JUMP)  ; LAB_004cbfde
    POP ESI                             ; 004cbfc6
    POP EBX                             ; 004cbfc7
    RET                                 ; 004cbfc8
    MOV ESI,dword ptr [EBX]             ; 004cbfc9
        ;   Label: LAB_004cbfc9
    MOV dword ptr [ECX],ESI             ; 004cbfcb
    MOV ESI,dword ptr [EBX + 0x4]       ; 004cbfcd
    MOV dword ptr [ECX + 0x4],ESI       ; 004cbfd0
    MOV ESI,dword ptr [EBX + 0x8]       ; 004cbfd3
    MOV dword ptr [ECX + 0x8],ESI       ; 004cbfd6
    JMP 0x004cbf54                      ; 004cbfd9
        ;   XREF to: 004cbf54 (UNCONDITIONAL_JUMP)  ; LAB_004cbf54
    MOV EBX,dword ptr [EDX]             ; 004cbfde
        ;   Label: LAB_004cbfde
    MOV dword ptr [ECX],EBX             ; 004cbfe0
    MOV EBX,dword ptr [EDX + 0x4]       ; 004cbfe2
    MOV dword ptr [ECX + 0x4],EBX       ; 004cbfe5
    MOV EBX,dword ptr [EDX + 0x8]       ; 004cbfe8
    MOV dword ptr [ECX + 0x8],EBX       ; 004cbfeb
    POP ESI                             ; 004cbfee
    POP EBX                             ; 004cbfef
    RET                                 ; 004cbff0

