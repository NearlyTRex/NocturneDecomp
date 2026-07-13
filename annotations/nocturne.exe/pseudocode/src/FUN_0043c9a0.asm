; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043c9a0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   FUN_0040a000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c9a0
        ;   Label: FUN_0043c9a0
    SUB ESP,0x20                        ; 0043c9a1
    MOV EBX,dword ptr [ESP + 0x28]      ; 0043c9a4
    CMP dword ptr [EBX + 0x2cc],0x0     ; 0043c9a8
    JNZ 0x0043cb41                      ; 0043c9af
        ;   XREF to: 0043cb41 (CONDITIONAL_JUMP)  ; LAB_0043cb41
    LEA EDX,[EBX + 0x20]                ; 0043c9b5
    LEA EAX,[EBX + 0xe0]                ; 0043c9b8
    FLD float ptr [EAX]                 ; 0043c9be
    FADD float ptr [EDX]                ; 0043c9c0
    FSTP float ptr [EDX]                ; 0043c9c2
    FLD float ptr [EAX + 0x4]           ; 0043c9c4
    FADD float ptr [EDX + 0x4]          ; 0043c9c7
    FSTP float ptr [EDX + 0x4]          ; 0043c9ca
    FLD float ptr [EAX + 0x8]           ; 0043c9cd
    FADD float ptr [EDX + 0x8]          ; 0043c9d0
    FSTP float ptr [EDX + 0x8]          ; 0043c9d3
    MOV dword ptr [EAX + 0x8],0x0       ; 0043c9d6
    LEA EDX,[EBX + 0x30]                ; 0043c9dd
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043c9e0
    MOV dword ptr [EAX + 0x4],ECX       ; 0043c9e3
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043c9e6
    MOV dword ptr [EAX],ECX             ; 0043c9e9
    LEA EAX,[EBX + 0xec]                ; 0043c9eb
    FLD float ptr [EAX]                 ; 0043c9f1
    FADD float ptr [EDX]                ; 0043c9f3
    FSTP float ptr [EDX]                ; 0043c9f5
    FLD float ptr [EAX + 0x4]           ; 0043c9f7
    FADD float ptr [EDX + 0x4]          ; 0043c9fa
    FSTP float ptr [EDX + 0x4]          ; 0043c9fd
    FLD float ptr [EAX + 0x8]           ; 0043ca00
    FADD float ptr [EDX + 0x8]          ; 0043ca03
    FSTP float ptr [EDX + 0x8]          ; 0043ca06
    MOV dword ptr [EAX + 0x8],0x0       ; 0043ca09
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043ca10
    MOV dword ptr [EAX + 0x4],EDX       ; 0043ca13
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043ca16
    MOV dword ptr [EAX],EDX             ; 0043ca19
    FLD float ptr [EBX + 0x2d8]         ; 0043ca1b
    FCOMP float ptr [EBX + 0x20]        ; 0043ca21
    FNSTSW AX                           ; 0043ca24
    SAHF                                ; 0043ca26
    JNZ 0x0043ca3b                      ; 0043ca27
        ;   XREF to: 0043ca3b (CONDITIONAL_JUMP)  ; LAB_0043ca3b
    FLD float ptr [EBX + 0x2dc]         ; 0043ca29
    FCOMP float ptr [EBX + 0x24]        ; 0043ca2f
    FNSTSW AX                           ; 0043ca32
    SAHF                                ; 0043ca34
    JZ 0x0043cb50                       ; 0043ca35
        ;   XREF to: 0043cb50 (CONDITIONAL_JUMP)  ; LAB_0043cb50
    PUSH 0x0                            ; 0043ca3b
        ;   Label: LAB_0043ca3b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0043ca3d
    PUSH dword ptr [EBX + 0x2d0]        ; 0043ca43
    PUSH EBX                            ; 0043ca49
    CALL dword ptr [EAX + 0x38]         ; 0043ca4a
    MOV dword ptr [ESP + 0x28],EAX      ; 0043ca4d
    LEA EDX,[EBX + 0x2d8]               ; 0043ca51
    FLD float ptr [ESP + 0x28]          ; 0043ca57
    ADD ESP,0xc                         ; 0043ca5b
    LEA EAX,[EBX + 0x20]                ; 0043ca5e
    FSTP float ptr [ESP + 0x18]         ; 0043ca61
    CMP EDX,EAX                         ; 0043ca65
    JZ 0x0043ca79                       ; 0043ca67
        ;   XREF to: 0043ca79 (CONDITIONAL_JUMP)  ; LAB_0043ca79
    MOV ECX,dword ptr [EAX]             ; 0043ca69
    MOV dword ptr [EDX],ECX             ; 0043ca6b
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043ca6d
    MOV dword ptr [EDX + 0x4],ECX       ; 0043ca70
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043ca73
    MOV dword ptr [EDX + 0x8],ECX       ; 0043ca76
    LEA EDX,[EBX + 0x2e4]               ; 0043ca79
        ;   Label: LAB_0043ca79
    LEA EAX,[EBX + 0x30]                ; 0043ca7f
    CMP EDX,EAX                         ; 0043ca82
    JZ 0x0043ca96                       ; 0043ca84
        ;   XREF to: 0043ca96 (CONDITIONAL_JUMP)  ; LAB_0043ca96
    MOV ECX,dword ptr [EAX]             ; 0043ca86
    MOV dword ptr [EDX],ECX             ; 0043ca88
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043ca8a
    MOV dword ptr [EDX + 0x4],ECX       ; 0043ca8d
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043ca90
    MOV dword ptr [EDX + 0x8],ECX       ; 0043ca93
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043ca96
        ;   Label: LAB_0043ca96
    MOV dword ptr [EBX + 0x2f0],EAX     ; 0043ca9a
    PUSH EDI                            ; 0043caa0
        ;   Label: LAB_0043caa0
    PUSH ESI                            ; 0043caa1
    CMP dword ptr [EBX + 0x2d4],0x0     ; 0043caa2
    JNZ 0x0043cabb                      ; 0043caa9
        ;   XREF to: 0043cabb (CONDITIONAL_JUMP)  ; LAB_0043cabb
    MOV ESI,dword ptr [EBX + 0xdc]      ; 0043caab
    TEST ESI,ESI                        ; 0043cab1
    JZ 0x0043cabb                       ; 0043cab3
        ;   XREF to: 0043cabb (CONDITIONAL_JUMP)  ; LAB_0043cabb
    MOV dword ptr [EBX + 0x2d4],ESI     ; 0043cab5
    MOV EDI,dword ptr [EBX + 0x2d4]     ; 0043cabb
        ;   Label: LAB_0043cabb
    TEST EDI,EDI                        ; 0043cac1
    JZ 0x0043cba7                       ; 0043cac3
        ;   XREF to: 0043cba7 (CONDITIONAL_JUMP)  ; LAB_0043cba7
    MOV EAX,EDI                         ; 0043cac9
    MOV dword ptr [EBX + 0xdc],EDI      ; 0043cacb
    LEA EDX,[EBX + 0x20]                ; 0043cad1
    MOV ECX,dword ptr [EAX + 0x20]      ; 0043cad4
    MOV dword ptr [EDX],ECX             ; 0043cad7
    MOV ECX,dword ptr [EAX + 0x24]      ; 0043cad9
    MOV dword ptr [EDX + 0x4],ECX       ; 0043cadc
    MOV ECX,dword ptr [EAX + 0x28]      ; 0043cadf
    MOV dword ptr [EDX + 0x8],ECX       ; 0043cae2
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0043cae5
    MOV dword ptr [EDX + 0xc],EAX       ; 0043cae8
    MOV EAX,dword ptr [EBX + 0xdc]      ; 0043caeb
    LEA EDX,[EBX + 0x30]                ; 0043caf1
    ADD EAX,0x30                        ; 0043caf4
    CMP EDX,EAX                         ; 0043caf7
    JZ 0x0043cb0b                       ; 0043caf9
        ;   XREF to: 0043cb0b (CONDITIONAL_JUMP)  ; LAB_0043cb0b
    MOV ECX,dword ptr [EAX]             ; 0043cafb
    MOV dword ptr [EDX],ECX             ; 0043cafd
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043caff
    MOV dword ptr [EDX + 0x4],ECX       ; 0043cb02
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043cb05
    MOV dword ptr [EDX + 0x8],ECX       ; 0043cb08
    LEA EDX,[ESP + 0x8]                 ; 0043cb0b
        ;   Label: LAB_0043cb0b
    MOV EAX,dword ptr [EBX + 0xdc]      ; 0043cb0f
    PUSH EDX                            ; 0043cb15
    MOV ECX,dword ptr [EAX + 0x14c]     ; 0043cb16
    PUSH EAX                            ; 0043cb1c
    CALL dword ptr [ECX + 0x14]         ; 0043cb1d
    ADD ESP,0x8                         ; 0043cb20
    FLD float ptr [ESP + 0x18]          ; 0043cb23
    FSUB float ptr [ESP + 0xc]          ; 0043cb27
    FADD float ptr [EBX + 0x24]         ; 0043cb2b
    FSTP float ptr [EBX + 0x24]         ; 0043cb2e
    PUSH EBX                            ; 0043cb31
    CALL FUN_0040a000                   ; 0043cb32
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a000()
    ADD ESP,0x4                         ; 0043cb37
    POP ESI                             ; 0043cb3a
    POP EDI                             ; 0043cb3b
    ADD ESP,0x20                        ; 0043cb3c
    POP EBX                             ; 0043cb3f
    RET                                 ; 0043cb40
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0043cb41
        ;   Label: LAB_0043cb41
    ADD ESP,0x20                        ; 0043cb4b
    POP EBX                             ; 0043cb4e
    RET                                 ; 0043cb4f
    FLD float ptr [EBX + 0x2e0]         ; 0043cb50
        ;   Label: LAB_0043cb50
    FCOMP float ptr [EBX + 0x28]        ; 0043cb56
    FNSTSW AX                           ; 0043cb59
    SAHF                                ; 0043cb5b
    JNZ 0x0043ca3b                      ; 0043cb5c
        ;   XREF to: 0043ca3b (CONDITIONAL_JUMP)  ; LAB_0043ca3b
    FLD float ptr [EBX + 0x2e4]         ; 0043cb62
    FCOMP float ptr [EBX + 0x30]        ; 0043cb68
    FNSTSW AX                           ; 0043cb6b
    SAHF                                ; 0043cb6d
    JNZ 0x0043ca3b                      ; 0043cb6e
        ;   XREF to: 0043ca3b (CONDITIONAL_JUMP)  ; LAB_0043ca3b
    FLD float ptr [EBX + 0x2e8]         ; 0043cb74
    FCOMP float ptr [EBX + 0x34]        ; 0043cb7a
    FNSTSW AX                           ; 0043cb7d
    SAHF                                ; 0043cb7f
    JNZ 0x0043ca3b                      ; 0043cb80
        ;   XREF to: 0043ca3b (CONDITIONAL_JUMP)  ; LAB_0043ca3b
    FLD float ptr [EBX + 0x2ec]         ; 0043cb86
    FCOMP float ptr [EBX + 0x38]        ; 0043cb8c
    FNSTSW AX                           ; 0043cb8f
    SAHF                                ; 0043cb91
    JNZ 0x0043ca3b                      ; 0043cb92
        ;   XREF to: 0043ca3b (CONDITIONAL_JUMP)  ; LAB_0043ca3b
    MOV EAX,dword ptr [EBX + 0x2f0]     ; 0043cb98
    MOV dword ptr [ESP + 0x18],EAX      ; 0043cb9e
    JMP 0x0043caa0                      ; 0043cba2
        ;   XREF to: 0043caa0 (UNCONDITIONAL_JUMP)  ; LAB_0043caa0
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043cba7
        ;   Label: LAB_0043cba7
    MOV dword ptr [EBX + 0x24],EAX      ; 0043cbab
    PUSH EBX                            ; 0043cbae
    CALL FUN_0040a000                   ; 0043cbaf
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a000()
    ADD ESP,0x4                         ; 0043cbb4
    POP ESI                             ; 0043cbb7
    POP EDI                             ; 0043cbb8
    ADD ESP,0x20                        ; 0043cbb9
    POP EBX                             ; 0043cbbc
    RET                                 ; 0043cbbd

