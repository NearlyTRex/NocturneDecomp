; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_chain_cpp_FUN_004359e0(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; SChainVertex *   Stack[0x8]:4   vertex_a
; SChainVertex *   Stack[0xc]:4   vertex_b
;
; XREF[1]:
;   core_chain.cpp_FUN_00435c70 at 00435fc6
;
; Referenced Globals:
;   undefined4 DAT_01cc804c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004359e0
        ;   Label: core_chain.cpp_FUN_004359e0
    PUSH ESI                            ; 004359e1
    PUSH EDI                            ; 004359e2
    SUB ESP,0x98                        ; 004359e3
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004359e9
    MOV EDX,dword ptr [ESP + 0xac]      ; 004359f0
    MOV ECX,dword ptr [ESP + 0xb0]      ; 004359f7
    CMP dword ptr [EBX + 0x288],0x0     ; 004359fe
    JZ 0x00435a33                       ; 00435a05
        ;   XREF to: 00435a33 (CONDITIONAL_JUMP)  ; LAB_00435a33
    FLD float ptr [EDX + 0x4]           ; 00435a07
    FCOMP float ptr [EBX + 0x56c]       ; 00435a0a
    FNSTSW AX                           ; 00435a10
    SAHF                                ; 00435a12
    JNC 0x00435a33                      ; 00435a13
        ;   XREF to: 00435a33 (CONDITIONAL_JUMP)  ; LAB_00435a33
    LEA EAX,[EDX + 0xc]                 ; 00435a15
    MOV dword ptr [EAX + 0x8],0x0       ; 00435a18
    MOV ESI,dword ptr [EAX + 0x8]       ; 00435a1f
    MOV dword ptr [EAX + 0x4],ESI       ; 00435a22
    MOV ESI,dword ptr [EAX + 0x4]       ; 00435a25
    MOV dword ptr [EAX],ESI             ; 00435a28
    MOV EAX,dword ptr [EBX + 0x56c]     ; 00435a2a
    MOV dword ptr [EDX + 0x4],EAX       ; 00435a30
    FLD float ptr [EDX]                 ; 00435a33
        ;   Label: LAB_00435a33
    FLD float ptr [EDX + 0x4]           ; 00435a35
    FLD float ptr [EDX + 0x8]           ; 00435a38
    LEA EDI,[ESP + 0x30]                ; 00435a3b
    LEA ESI,[ESP + 0x24]                ; 00435a3f
    FXCH ST2                            ; 00435a43
    FSUB float ptr [ECX]                ; 00435a45
    FXCH                                ; 00435a47
    FSUB float ptr [ECX + 0x4]          ; 00435a49
    FXCH ST2                            ; 00435a4c
    FSUB float ptr [ECX + 0x8]          ; 00435a4e
    FXCH ST2                            ; 00435a51
    FSTP float ptr [ESP + 0x28]         ; 00435a53
    FXCH                                ; 00435a57
    FSTP float ptr [ESP + 0x2c]         ; 00435a59
    FSTP float ptr [ESP + 0x24]         ; 00435a5d
    MOVSD ES:EDI,ESI                    ; 00435a61
    MOVSD ES:EDI,ESI                    ; 00435a62
    MOVSD ES:EDI,ESI                    ; 00435a63
    LEA EAX,[ESP + 0x30]                ; 00435a64
    MOV ESI,ESP                         ; 00435a68
    CMP ESI,EAX                         ; 00435a6a
    JZ 0x00435a85                       ; 00435a6c
        ;   XREF to: 00435a85 (CONDITIONAL_JUMP)  ; LAB_00435a85
    MOV EAX,dword ptr [ESP + 0x30]      ; 00435a6e
    MOV dword ptr [ESP],EAX             ; 00435a72
    MOV EAX,dword ptr [ESP + 0x34]      ; 00435a75
    MOV dword ptr [ESP + 0x4],EAX       ; 00435a79
    MOV EAX,dword ptr [ESP + 0x38]      ; 00435a7d
    MOV dword ptr [ESP + 0x8],EAX       ; 00435a81
    FLD float ptr [ESP + 0x4]           ; 00435a85
        ;   Label: LAB_00435a85
    FMUL ST0                            ; 00435a89
    FLD float ptr [ESP]                 ; 00435a8b
    FMUL ST0                            ; 00435a8e
    FADDP                               ; 00435a90
    FLD float ptr [ESP + 0x8]           ; 00435a92
    FMUL ST0                            ; 00435a96
    FADDP                               ; 00435a98
    FSTP float ptr [ESP + 0x90]         ; 00435a9a
    MOV EAX,dword ptr [ESP + 0x90]      ; 00435aa1
    MOV EDI,dword ptr [0x01cc804c]      ; 00435aa8 | DAT_01cc804c
    SAR EAX,0x1                         ; 00435aae
    ADD EAX,EDI                         ; 00435ab0
    MOV dword ptr [ESP + 0x94],EAX      ; 00435ab2
    MOV EAX,dword ptr [EBX + 0x160]     ; 00435ab9
    MOV dword ptr [ESP + 0x84],EAX      ; 00435abf
    FLD float ptr [ESP + 0x94]          ; 00435ac6
    FCOMP float ptr [ESP + 0x84]        ; 00435acd
    FNSTSW AX                           ; 00435ad4
    SAHF                                ; 00435ad6
    JA 0x00435ae3                       ; 00435ad7
        ;   XREF to: 00435ae3 (CONDITIONAL_JUMP)  ; LAB_00435ae3
    ADD ESP,0x98                        ; 00435ad9
    POP EDI                             ; 00435adf
    POP ESI                             ; 00435ae0
    POP EBX                             ; 00435ae1
    RET                                 ; 00435ae2
    FLD float ptr [ESP + 0x94]          ; 00435ae3
        ;   Label: LAB_00435ae3
    FLD ST0                             ; 00435aea
    FSUB float ptr [ESP + 0x84]         ; 00435aec
    FLD float ptr [ESP]                 ; 00435af3
    FXCH                                ; 00435af6
    FSTP float ptr [ESP + 0x8c]         ; 00435af8
    FMUL float ptr [ESP + 0x8c]         ; 00435aff
    FLD float ptr [ESP + 0x4]           ; 00435b06
    FMUL float ptr [ESP + 0x8c]         ; 00435b0a
    FLD float ptr [ESP + 0x8]           ; 00435b11
    FMUL float ptr [ESP + 0x8c]         ; 00435b15
    LEA EDI,[ESP + 0x6c]                ; 00435b1c
    LEA ESI,[ESP + 0x3c]                ; 00435b20
    FXCH ST2                            ; 00435b24
    FSTP float ptr [ESP + 0x3c]         ; 00435b26
    FSTP float ptr [ESP + 0x40]         ; 00435b2a
    FSTP float ptr [ESP + 0x44]         ; 00435b2e
    MOVSD ES:EDI,ESI                    ; 00435b32
    MOVSD ES:EDI,ESI                    ; 00435b33
    MOVSD ES:EDI,ESI                    ; 00435b34
    FLD1                                ; 00435b35
    FLD float ptr [ESP + 0x6c]          ; 00435b37
    FXCH                                ; 00435b3b
    FDIVRP ST2,ST0                      ; 00435b3d
    FMUL ST1                            ; 00435b3f
    FLD float ptr [ESP + 0x70]          ; 00435b41
    FMUL ST2                            ; 00435b45
    FLD float ptr [ESP + 0x74]          ; 00435b47
    FMULP ST3                           ; 00435b4b
    LEA EDI,[ESP + 0x54]                ; 00435b4d
    LEA ESI,[ESP + 0x60]                ; 00435b51
    FXCH                                ; 00435b55
    FSTP float ptr [ESP + 0x60]         ; 00435b57
    FSTP float ptr [ESP + 0x64]         ; 00435b5b
    FSTP float ptr [ESP + 0x68]         ; 00435b5f
    MOVSD ES:EDI,ESI                    ; 00435b63
    MOVSD ES:EDI,ESI                    ; 00435b64
    MOVSD ES:EDI,ESI                    ; 00435b65
    LEA EAX,[EBX + 0x570]               ; 00435b66
    FLD float ptr [ESP + 0x54]          ; 00435b6c
    FLD float ptr [EDX]                 ; 00435b70
    FLD float ptr [EDX + 0x4]           ; 00435b72
    FLD float ptr [EDX + 0x8]           ; 00435b75
    FXCH ST2                            ; 00435b78
    FSUB float ptr [ESP + 0x54]         ; 00435b7a
    FXCH                                ; 00435b7e
    FSUB float ptr [ESP + 0x58]         ; 00435b80
    FXCH ST2                            ; 00435b84
    FSUB float ptr [ESP + 0x5c]         ; 00435b86
    FXCH                                ; 00435b8a
    FSTP float ptr [EDX]                ; 00435b8c
    FXCH                                ; 00435b8e
    FSTP float ptr [EDX + 0x4]          ; 00435b90
    FSTP float ptr [EDX + 0x8]          ; 00435b93
    FMUL float ptr [EAX]                ; 00435b96
    FLD float ptr [ESP + 0x58]          ; 00435b98
    FMUL float ptr [EAX]                ; 00435b9c
    FLD float ptr [ESP + 0x5c]          ; 00435b9e
    FMUL float ptr [EAX]                ; 00435ba2
    LEA EDI,[ESP + 0x78]                ; 00435ba4
    LEA ESI,[ESP + 0xc]                 ; 00435ba8
    FXCH ST2                            ; 00435bac
    FSTP float ptr [ESP + 0xc]          ; 00435bae
    FSTP float ptr [ESP + 0x10]         ; 00435bb2
    FSTP float ptr [ESP + 0x14]         ; 00435bb6
    MOVSD ES:EDI,ESI                    ; 00435bba
    MOVSD ES:EDI,ESI                    ; 00435bbb
    MOVSD ES:EDI,ESI                    ; 00435bbc
    FLD float ptr [ESP + 0x54]          ; 00435bbd
    FLD float ptr [EDX + 0xc]           ; 00435bc1
    FLD float ptr [EDX + 0x10]          ; 00435bc4
    FLD float ptr [EDX + 0x14]          ; 00435bc7
    FXCH ST2                            ; 00435bca
    FSUB float ptr [ESP + 0x78]         ; 00435bcc
    FXCH                                ; 00435bd0
    FSUB float ptr [ESP + 0x7c]         ; 00435bd2
    FXCH ST2                            ; 00435bd6
    FSUB float ptr [ESP + 0x80]         ; 00435bd8
    FXCH                                ; 00435bdf
    FSTP float ptr [EDX + 0xc]          ; 00435be1
    FXCH                                ; 00435be4
    FSTP float ptr [EDX + 0x10]         ; 00435be6
    FSTP float ptr [EDX + 0x14]         ; 00435be9
    FLD float ptr [ECX]                 ; 00435bec
    FLD float ptr [ECX + 0x4]           ; 00435bee
    FLD float ptr [ECX + 0x8]           ; 00435bf1
    FXCH ST2                            ; 00435bf4
    FADD float ptr [ESP + 0x54]         ; 00435bf6
    FXCH                                ; 00435bfa
    FADD float ptr [ESP + 0x58]         ; 00435bfc
    FXCH ST2                            ; 00435c00
    FADD float ptr [ESP + 0x5c]         ; 00435c02
    FXCH                                ; 00435c06
    FSTP float ptr [ECX]                ; 00435c08
    FXCH                                ; 00435c0a
    FSTP float ptr [ECX + 0x4]          ; 00435c0c
    FSTP float ptr [ECX + 0x8]          ; 00435c0f
    FMUL float ptr [EAX]                ; 00435c12
    FLD float ptr [ESP + 0x58]          ; 00435c14
    FMUL float ptr [EAX]                ; 00435c18
    FLD float ptr [ESP + 0x5c]          ; 00435c1a
    FMUL float ptr [EAX]                ; 00435c1e
    LEA EDI,[ESP + 0x18]                ; 00435c20
    LEA ESI,[ESP + 0x48]                ; 00435c24
    FXCH ST2                            ; 00435c28
    FSTP float ptr [ESP + 0x48]         ; 00435c2a
    FSTP float ptr [ESP + 0x4c]         ; 00435c2e
    FSTP float ptr [ESP + 0x50]         ; 00435c32
    MOVSD ES:EDI,ESI                    ; 00435c36
    MOVSD ES:EDI,ESI                    ; 00435c37
    MOVSD ES:EDI,ESI                    ; 00435c38
    FLD float ptr [ECX + 0xc]           ; 00435c39
    FLD float ptr [ECX + 0x10]          ; 00435c3c
    FLD float ptr [ECX + 0x14]          ; 00435c3f
    FXCH ST2                            ; 00435c42
    FADD float ptr [ESP + 0x18]         ; 00435c44
    FXCH                                ; 00435c48
    FADD float ptr [ESP + 0x1c]         ; 00435c4a
    FXCH ST2                            ; 00435c4e
    FADD float ptr [ESP + 0x20]         ; 00435c50
    FXCH                                ; 00435c54
    FSTP float ptr [ECX + 0xc]          ; 00435c56
    FXCH                                ; 00435c59
    FSTP float ptr [ECX + 0x10]         ; 00435c5b
    FSTP float ptr [ECX + 0x14]         ; 00435c5e
    ADD ESP,0x98                        ; 00435c61
    POP EDI                             ; 00435c67
    POP ESI                             ; 00435c68
    POP EBX                             ; 00435c69
    RET                                 ; 00435c6a

