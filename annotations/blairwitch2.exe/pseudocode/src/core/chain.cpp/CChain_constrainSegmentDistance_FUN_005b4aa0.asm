; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_005b4aa0(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; SChainVertex *   Stack[0x8]:4   vertex_a
; SChainVertex *   Stack[0xc]:4   vertex_b
;
; XREF[1]:
;   core_chain.cpp_FUN_005b4d30 at 005b5086
;
; Referenced Globals:
;   undefined4 DAT_01caf5b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b4aa0
        ;   Label: core_chain.cpp_CChain_constrainSegmentDistance_FUN_005b4aa0
    PUSH ESI                            ; 005b4aa1
    PUSH EDI                            ; 005b4aa2
    SUB ESP,0x98                        ; 005b4aa3
    MOV EBX,dword ptr [ESP + 0xa8]      ; 005b4aa9
    MOV EDX,dword ptr [ESP + 0xac]      ; 005b4ab0
    MOV ECX,dword ptr [ESP + 0xb0]      ; 005b4ab7
    CMP dword ptr [EBX + 0x288],0x0     ; 005b4abe
    JZ 0x005b4af3                       ; 005b4ac5
        ;   XREF to: 005b4af3 (CONDITIONAL_JUMP)  ; LAB_005b4af3
    FLD float ptr [EDX + 0x4]           ; 005b4ac7
    FCOMP float ptr [EBX + 0x56c]       ; 005b4aca
    FNSTSW AX                           ; 005b4ad0
    SAHF                                ; 005b4ad2
    JNC 0x005b4af3                      ; 005b4ad3
        ;   XREF to: 005b4af3 (CONDITIONAL_JUMP)  ; LAB_005b4af3
    LEA EAX,[EDX + 0xc]                 ; 005b4ad5
    MOV dword ptr [EAX + 0x8],0x0       ; 005b4ad8
    MOV ESI,dword ptr [EAX + 0x8]       ; 005b4adf
    MOV dword ptr [EAX + 0x4],ESI       ; 005b4ae2
    MOV ESI,dword ptr [EAX + 0x4]       ; 005b4ae5
    MOV dword ptr [EAX],ESI             ; 005b4ae8
    MOV EAX,dword ptr [EBX + 0x56c]     ; 005b4aea
    MOV dword ptr [EDX + 0x4],EAX       ; 005b4af0
    FLD float ptr [EDX]                 ; 005b4af3
        ;   Label: LAB_005b4af3
    FLD float ptr [EDX + 0x4]           ; 005b4af5
    FLD float ptr [EDX + 0x8]           ; 005b4af8
    LEA EDI,[ESP + 0x30]                ; 005b4afb
    LEA ESI,[ESP + 0x24]                ; 005b4aff
    FXCH ST2                            ; 005b4b03
    FSUB float ptr [ECX]                ; 005b4b05
    FXCH                                ; 005b4b07
    FSUB float ptr [ECX + 0x4]          ; 005b4b09
    FXCH ST2                            ; 005b4b0c
    FSUB float ptr [ECX + 0x8]          ; 005b4b0e
    FXCH ST2                            ; 005b4b11
    FSTP float ptr [ESP + 0x28]         ; 005b4b13
    FXCH                                ; 005b4b17
    FSTP float ptr [ESP + 0x2c]         ; 005b4b19
    FSTP float ptr [ESP + 0x24]         ; 005b4b1d
    MOVSD ES:EDI,ESI                    ; 005b4b21
    MOVSD ES:EDI,ESI                    ; 005b4b22
    MOVSD ES:EDI,ESI                    ; 005b4b23
    LEA EAX,[ESP + 0x30]                ; 005b4b24
    MOV ESI,ESP                         ; 005b4b28
    CMP ESI,EAX                         ; 005b4b2a
    JZ 0x005b4b45                       ; 005b4b2c
        ;   XREF to: 005b4b45 (CONDITIONAL_JUMP)  ; LAB_005b4b45
    MOV EAX,dword ptr [ESP + 0x30]      ; 005b4b2e
    MOV dword ptr [ESP],EAX             ; 005b4b32
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b4b35
    MOV dword ptr [ESP + 0x4],EAX       ; 005b4b39
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b4b3d
    MOV dword ptr [ESP + 0x8],EAX       ; 005b4b41
    FLD float ptr [ESP + 0x4]           ; 005b4b45
        ;   Label: LAB_005b4b45
    FMUL ST0                            ; 005b4b49
    FLD float ptr [ESP]                 ; 005b4b4b
    FMUL ST0                            ; 005b4b4e
    FADDP                               ; 005b4b50
    FLD float ptr [ESP + 0x8]           ; 005b4b52
    FMUL ST0                            ; 005b4b56
    FADDP                               ; 005b4b58
    FSTP float ptr [ESP + 0x90]         ; 005b4b5a
    MOV EAX,dword ptr [ESP + 0x90]      ; 005b4b61
    MOV EDI,dword ptr [0x01caf5b4]      ; 005b4b68 | DAT_01caf5b4
    SAR EAX,0x1                         ; 005b4b6e
    ADD EAX,EDI                         ; 005b4b70
    MOV dword ptr [ESP + 0x94],EAX      ; 005b4b72
    MOV EAX,dword ptr [EBX + 0x160]     ; 005b4b79
    MOV dword ptr [ESP + 0x84],EAX      ; 005b4b7f
    FLD float ptr [ESP + 0x94]          ; 005b4b86
    FCOMP float ptr [ESP + 0x84]        ; 005b4b8d
    FNSTSW AX                           ; 005b4b94
    SAHF                                ; 005b4b96
    JA 0x005b4ba3                       ; 005b4b97
        ;   XREF to: 005b4ba3 (CONDITIONAL_JUMP)  ; LAB_005b4ba3
    ADD ESP,0x98                        ; 005b4b99
    POP EDI                             ; 005b4b9f
    POP ESI                             ; 005b4ba0
    POP EBX                             ; 005b4ba1
    RET                                 ; 005b4ba2
    FLD float ptr [ESP + 0x94]          ; 005b4ba3
        ;   Label: LAB_005b4ba3
    FLD ST0                             ; 005b4baa
    FSUB float ptr [ESP + 0x84]         ; 005b4bac
    FLD float ptr [ESP]                 ; 005b4bb3
    FXCH                                ; 005b4bb6
    FSTP float ptr [ESP + 0x8c]         ; 005b4bb8
    FMUL float ptr [ESP + 0x8c]         ; 005b4bbf
    FLD float ptr [ESP + 0x4]           ; 005b4bc6
    FMUL float ptr [ESP + 0x8c]         ; 005b4bca
    FLD float ptr [ESP + 0x8]           ; 005b4bd1
    FMUL float ptr [ESP + 0x8c]         ; 005b4bd5
    LEA EDI,[ESP + 0x6c]                ; 005b4bdc
    LEA ESI,[ESP + 0x3c]                ; 005b4be0
    FXCH ST2                            ; 005b4be4
    FSTP float ptr [ESP + 0x3c]         ; 005b4be6
    FSTP float ptr [ESP + 0x40]         ; 005b4bea
    FSTP float ptr [ESP + 0x44]         ; 005b4bee
    MOVSD ES:EDI,ESI                    ; 005b4bf2
    MOVSD ES:EDI,ESI                    ; 005b4bf3
    MOVSD ES:EDI,ESI                    ; 005b4bf4
    FLD1                                ; 005b4bf5
    FLD float ptr [ESP + 0x6c]          ; 005b4bf7
    FXCH                                ; 005b4bfb
    FDIVRP ST2,ST0                      ; 005b4bfd
    FMUL ST1                            ; 005b4bff
    FLD float ptr [ESP + 0x70]          ; 005b4c01
    FMUL ST2                            ; 005b4c05
    FLD float ptr [ESP + 0x74]          ; 005b4c07
    FMULP ST3                           ; 005b4c0b
    LEA EDI,[ESP + 0x54]                ; 005b4c0d
    LEA ESI,[ESP + 0x60]                ; 005b4c11
    FXCH                                ; 005b4c15
    FSTP float ptr [ESP + 0x60]         ; 005b4c17
    FSTP float ptr [ESP + 0x64]         ; 005b4c1b
    FSTP float ptr [ESP + 0x68]         ; 005b4c1f
    MOVSD ES:EDI,ESI                    ; 005b4c23
    MOVSD ES:EDI,ESI                    ; 005b4c24
    MOVSD ES:EDI,ESI                    ; 005b4c25
    LEA EAX,[EBX + 0x570]               ; 005b4c26
    FLD float ptr [ESP + 0x54]          ; 005b4c2c
    FLD float ptr [EDX]                 ; 005b4c30
    FLD float ptr [EDX + 0x4]           ; 005b4c32
    FLD float ptr [EDX + 0x8]           ; 005b4c35
    FXCH ST2                            ; 005b4c38
    FSUB float ptr [ESP + 0x54]         ; 005b4c3a
    FXCH                                ; 005b4c3e
    FSUB float ptr [ESP + 0x58]         ; 005b4c40
    FXCH ST2                            ; 005b4c44
    FSUB float ptr [ESP + 0x5c]         ; 005b4c46
    FXCH                                ; 005b4c4a
    FSTP float ptr [EDX]                ; 005b4c4c
    FXCH                                ; 005b4c4e
    FSTP float ptr [EDX + 0x4]          ; 005b4c50
    FSTP float ptr [EDX + 0x8]          ; 005b4c53
    FMUL float ptr [EAX]                ; 005b4c56
    FLD float ptr [ESP + 0x58]          ; 005b4c58
    FMUL float ptr [EAX]                ; 005b4c5c
    FLD float ptr [ESP + 0x5c]          ; 005b4c5e
    FMUL float ptr [EAX]                ; 005b4c62
    LEA EDI,[ESP + 0x78]                ; 005b4c64
    LEA ESI,[ESP + 0xc]                 ; 005b4c68
    FXCH ST2                            ; 005b4c6c
    FSTP float ptr [ESP + 0xc]          ; 005b4c6e
    FSTP float ptr [ESP + 0x10]         ; 005b4c72
    FSTP float ptr [ESP + 0x14]         ; 005b4c76
    MOVSD ES:EDI,ESI                    ; 005b4c7a
    MOVSD ES:EDI,ESI                    ; 005b4c7b
    MOVSD ES:EDI,ESI                    ; 005b4c7c
    FLD float ptr [ESP + 0x54]          ; 005b4c7d
    FLD float ptr [EDX + 0xc]           ; 005b4c81
    FLD float ptr [EDX + 0x10]          ; 005b4c84
    FLD float ptr [EDX + 0x14]          ; 005b4c87
    FXCH ST2                            ; 005b4c8a
    FSUB float ptr [ESP + 0x78]         ; 005b4c8c
    FXCH                                ; 005b4c90
    FSUB float ptr [ESP + 0x7c]         ; 005b4c92
    FXCH ST2                            ; 005b4c96
    FSUB float ptr [ESP + 0x80]         ; 005b4c98
    FXCH                                ; 005b4c9f
    FSTP float ptr [EDX + 0xc]          ; 005b4ca1
    FXCH                                ; 005b4ca4
    FSTP float ptr [EDX + 0x10]         ; 005b4ca6
    FSTP float ptr [EDX + 0x14]         ; 005b4ca9
    FLD float ptr [ECX]                 ; 005b4cac
    FLD float ptr [ECX + 0x4]           ; 005b4cae
    FLD float ptr [ECX + 0x8]           ; 005b4cb1
    FXCH ST2                            ; 005b4cb4
    FADD float ptr [ESP + 0x54]         ; 005b4cb6
    FXCH                                ; 005b4cba
    FADD float ptr [ESP + 0x58]         ; 005b4cbc
    FXCH ST2                            ; 005b4cc0
    FADD float ptr [ESP + 0x5c]         ; 005b4cc2
    FXCH                                ; 005b4cc6
    FSTP float ptr [ECX]                ; 005b4cc8
    FXCH                                ; 005b4cca
    FSTP float ptr [ECX + 0x4]          ; 005b4ccc
    FSTP float ptr [ECX + 0x8]          ; 005b4ccf
    FMUL float ptr [EAX]                ; 005b4cd2
    FLD float ptr [ESP + 0x58]          ; 005b4cd4
    FMUL float ptr [EAX]                ; 005b4cd8
    FLD float ptr [ESP + 0x5c]          ; 005b4cda
    FMUL float ptr [EAX]                ; 005b4cde
    LEA EDI,[ESP + 0x18]                ; 005b4ce0
    LEA ESI,[ESP + 0x48]                ; 005b4ce4
    FXCH ST2                            ; 005b4ce8
    FSTP float ptr [ESP + 0x48]         ; 005b4cea
    FSTP float ptr [ESP + 0x4c]         ; 005b4cee
    FSTP float ptr [ESP + 0x50]         ; 005b4cf2
    MOVSD ES:EDI,ESI                    ; 005b4cf6
    MOVSD ES:EDI,ESI                    ; 005b4cf7
    MOVSD ES:EDI,ESI                    ; 005b4cf8
    FLD float ptr [ECX + 0xc]           ; 005b4cf9
    FLD float ptr [ECX + 0x10]          ; 005b4cfc
    FLD float ptr [ECX + 0x14]          ; 005b4cff
    FXCH ST2                            ; 005b4d02
    FADD float ptr [ESP + 0x18]         ; 005b4d04
    FXCH                                ; 005b4d08
    FADD float ptr [ESP + 0x1c]         ; 005b4d0a
    FXCH ST2                            ; 005b4d0e
    FADD float ptr [ESP + 0x20]         ; 005b4d10
    FXCH                                ; 005b4d14
    FSTP float ptr [ECX + 0xc]          ; 005b4d16
    FXCH                                ; 005b4d19
    FSTP float ptr [ECX + 0x10]         ; 005b4d1b
    FSTP float ptr [ECX + 0x14]         ; 005b4d1e
    ADD ESP,0x98                        ; 005b4d21
    POP EDI                             ; 005b4d27
    POP ESI                             ; 005b4d28
    POP EBX                             ; 005b4d29
    RET                                 ; 005b4d2a

