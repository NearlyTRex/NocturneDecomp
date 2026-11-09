; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderSolidColorDepth16xUnrolled_FUN_0046ec58(void)
;
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670 at 004696d2
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0 at 00469782
;
; Referenced Globals:
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2b64c
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01c35e70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046ec58
        ;   Label: core_dstrendr.cpp_renderSolidColorDepth16xUnrolled_FUN_0046ec58
    PUSH EDI                            ; 0046ec59
    PUSH EBP                            ; 0046ec5a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046ec5b
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046ec5e
    CMP EAX,ECX                         ; 0046ec61
    JBE 0x0046ec68                      ; 0046ec63
        ;   XREF to: 0046ec68 (CONDITIONAL_JUMP)  ; LAB_0046ec68
    XCHG EAX,ECX                        ; 0046ec65
    XCHG EDI,ESI                        ; 0046ec66
    SHR EAX,0x10                        ; 0046ec68
        ;   Label: LAB_0046ec68
    SHR ECX,0x10                        ; 0046ec6b
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0046ec6e | DAT_01c2b64c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0046ec75 | DAT_01c2a38c
    SUB ECX,EAX                         ; 0046ec7c
    JLE 0x0046ee33                      ; 0046ec7e
        ;   XREF to: 0046ee33 (CONDITIONAL_JUMP)  ; LAB_0046ee33
    SHL EAX,0x2                         ; 0046ec84
    ADD EBX,EAX                         ; 0046ec87
    ADD EBP,EAX                         ; 0046ec89
    INC ECX                             ; 0046ec8b
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046ec8c
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046ec8f
    IMUL dword ptr [ECX*0x4 + 0x1c35e70] ; 0046ec92 | DAT_01c35e70
    MOV EDI,EBX                         ; 0046ec99
    MOV EBX,EBP                         ; 0046ec9b
    DEC ECX                             ; 0046ec9d
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046ec9e
    MOV EAX,[0x01c35e60]                ; 0046eca1 | DAT_01c35e60
    SUB ECX,0x4                         ; 0046eca6
        ;   Label: LAB_0046eca6
    JL 0x0046edf7                       ; 0046eca9
        ;   XREF to: 0046edf7 (CONDITIONAL_JUMP)  ; LAB_0046edf7
    MOV EBP,ESI                         ; 0046ecaf
    SHR EBP,0x8                         ; 0046ecb1
    CMP EBP,dword ptr [EBX]             ; 0046ecb4
    JL 0x0046ecbc                       ; 0046ecb6
        ;   XREF to: 0046ecbc (CONDITIONAL_JUMP)  ; LAB_0046ecbc
    MOV dword ptr [EBX],EBP             ; 0046ecb8
    MOV dword ptr [EDI],EAX             ; 0046ecba
    ADD ESI,EDX                         ; 0046ecbc
        ;   Label: LAB_0046ecbc
    MOV EBP,ESI                         ; 0046ecbe
    SHR EBP,0x8                         ; 0046ecc0
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046ecc3
    JL 0x0046ecce                       ; 0046ecc6
        ;   XREF to: 0046ecce (CONDITIONAL_JUMP)  ; LAB_0046ecce
    MOV dword ptr [EBX + 0x4],EBP       ; 0046ecc8
    MOV dword ptr [EDI + 0x4],EAX       ; 0046eccb
    ADD ESI,EDX                         ; 0046ecce
        ;   Label: LAB_0046ecce
    MOV EBP,ESI                         ; 0046ecd0
    SHR EBP,0x8                         ; 0046ecd2
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046ecd5
    JL 0x0046ece0                       ; 0046ecd8
        ;   XREF to: 0046ece0 (CONDITIONAL_JUMP)  ; LAB_0046ece0
    MOV dword ptr [EBX + 0x8],EBP       ; 0046ecda
    MOV dword ptr [EDI + 0x8],EAX       ; 0046ecdd
    ADD ESI,EDX                         ; 0046ece0
        ;   Label: LAB_0046ece0
    MOV EBP,ESI                         ; 0046ece2
    SHR EBP,0x8                         ; 0046ece4
    CMP EBP,dword ptr [EBX + 0xc]       ; 0046ece7
    JL 0x0046ecf2                       ; 0046ecea
        ;   XREF to: 0046ecf2 (CONDITIONAL_JUMP)  ; LAB_0046ecf2
    MOV dword ptr [EBX + 0xc],EBP       ; 0046ecec
    MOV dword ptr [EDI + 0xc],EAX       ; 0046ecef
    ADD ESI,EDX                         ; 0046ecf2
        ;   Label: LAB_0046ecf2
    ADD EBX,0x10                        ; 0046ecf4
    ADD EDI,0x10                        ; 0046ecf7
    SUB ECX,0x4                         ; 0046ecfa
    JL 0x0046edf7                       ; 0046ecfd
        ;   XREF to: 0046edf7 (CONDITIONAL_JUMP)  ; LAB_0046edf7
    MOV EBP,ESI                         ; 0046ed03
    SHR EBP,0x8                         ; 0046ed05
    CMP EBP,dword ptr [EBX]             ; 0046ed08
    JL 0x0046ed10                       ; 0046ed0a
        ;   XREF to: 0046ed10 (CONDITIONAL_JUMP)  ; LAB_0046ed10
    MOV dword ptr [EBX],EBP             ; 0046ed0c
    MOV dword ptr [EDI],EAX             ; 0046ed0e
    ADD ESI,EDX                         ; 0046ed10
        ;   Label: LAB_0046ed10
    MOV EBP,ESI                         ; 0046ed12
    SHR EBP,0x8                         ; 0046ed14
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046ed17
    JL 0x0046ed22                       ; 0046ed1a
        ;   XREF to: 0046ed22 (CONDITIONAL_JUMP)  ; LAB_0046ed22
    MOV dword ptr [EBX + 0x4],EBP       ; 0046ed1c
    MOV dword ptr [EDI + 0x4],EAX       ; 0046ed1f
    ADD ESI,EDX                         ; 0046ed22
        ;   Label: LAB_0046ed22
    MOV EBP,ESI                         ; 0046ed24
    SHR EBP,0x8                         ; 0046ed26
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046ed29
    JL 0x0046ed34                       ; 0046ed2c
        ;   XREF to: 0046ed34 (CONDITIONAL_JUMP)  ; LAB_0046ed34
    MOV dword ptr [EBX + 0x8],EBP       ; 0046ed2e
    MOV dword ptr [EDI + 0x8],EAX       ; 0046ed31
    ADD ESI,EDX                         ; 0046ed34
        ;   Label: LAB_0046ed34
    MOV EBP,ESI                         ; 0046ed36
    SHR EBP,0x8                         ; 0046ed38
    CMP EBP,dword ptr [EBX + 0xc]       ; 0046ed3b
    JL 0x0046ed46                       ; 0046ed3e
        ;   XREF to: 0046ed46 (CONDITIONAL_JUMP)  ; LAB_0046ed46
    MOV dword ptr [EBX + 0xc],EBP       ; 0046ed40
    MOV dword ptr [EDI + 0xc],EAX       ; 0046ed43
    ADD ESI,EDX                         ; 0046ed46
        ;   Label: LAB_0046ed46
    ADD EBX,0x10                        ; 0046ed48
    ADD EDI,0x10                        ; 0046ed4b
    SUB ECX,0x4                         ; 0046ed4e
    JL 0x0046edf7                       ; 0046ed51
        ;   XREF to: 0046edf7 (CONDITIONAL_JUMP)  ; LAB_0046edf7
    MOV EBP,ESI                         ; 0046ed57
    SHR EBP,0x8                         ; 0046ed59
    CMP EBP,dword ptr [EBX]             ; 0046ed5c
    JL 0x0046ed64                       ; 0046ed5e
        ;   XREF to: 0046ed64 (CONDITIONAL_JUMP)  ; LAB_0046ed64
    MOV dword ptr [EBX],EBP             ; 0046ed60
    MOV dword ptr [EDI],EAX             ; 0046ed62
    ADD ESI,EDX                         ; 0046ed64
        ;   Label: LAB_0046ed64
    MOV EBP,ESI                         ; 0046ed66
    SHR EBP,0x8                         ; 0046ed68
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046ed6b
    JL 0x0046ed76                       ; 0046ed6e
        ;   XREF to: 0046ed76 (CONDITIONAL_JUMP)  ; LAB_0046ed76
    MOV dword ptr [EBX + 0x4],EBP       ; 0046ed70
    MOV dword ptr [EDI + 0x4],EAX       ; 0046ed73
    ADD ESI,EDX                         ; 0046ed76
        ;   Label: LAB_0046ed76
    MOV EBP,ESI                         ; 0046ed78
    SHR EBP,0x8                         ; 0046ed7a
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046ed7d
    JL 0x0046ed88                       ; 0046ed80
        ;   XREF to: 0046ed88 (CONDITIONAL_JUMP)  ; LAB_0046ed88
    MOV dword ptr [EBX + 0x8],EBP       ; 0046ed82
    MOV dword ptr [EDI + 0x8],EAX       ; 0046ed85
    ADD ESI,EDX                         ; 0046ed88
        ;   Label: LAB_0046ed88
    MOV EBP,ESI                         ; 0046ed8a
    SHR EBP,0x8                         ; 0046ed8c
    CMP EBP,dword ptr [EBX + 0xc]       ; 0046ed8f
    JL 0x0046ed9a                       ; 0046ed92
        ;   XREF to: 0046ed9a (CONDITIONAL_JUMP)  ; LAB_0046ed9a
    MOV dword ptr [EBX + 0xc],EBP       ; 0046ed94
    MOV dword ptr [EDI + 0xc],EAX       ; 0046ed97
    ADD ESI,EDX                         ; 0046ed9a
        ;   Label: LAB_0046ed9a
    ADD EBX,0x10                        ; 0046ed9c
    ADD EDI,0x10                        ; 0046ed9f
    SUB ECX,0x4                         ; 0046eda2
    JL 0x0046edf7                       ; 0046eda5
        ;   XREF to: 0046edf7 (CONDITIONAL_JUMP)  ; LAB_0046edf7
    MOV EBP,ESI                         ; 0046eda7
    SHR EBP,0x8                         ; 0046eda9
    CMP EBP,dword ptr [EBX]             ; 0046edac
    JL 0x0046edb4                       ; 0046edae
        ;   XREF to: 0046edb4 (CONDITIONAL_JUMP)  ; LAB_0046edb4
    MOV dword ptr [EBX],EBP             ; 0046edb0
    MOV dword ptr [EDI],EAX             ; 0046edb2
    ADD ESI,EDX                         ; 0046edb4
        ;   Label: LAB_0046edb4
    MOV EBP,ESI                         ; 0046edb6
    SHR EBP,0x8                         ; 0046edb8
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046edbb
    JL 0x0046edc6                       ; 0046edbe
        ;   XREF to: 0046edc6 (CONDITIONAL_JUMP)  ; LAB_0046edc6
    MOV dword ptr [EBX + 0x4],EBP       ; 0046edc0
    MOV dword ptr [EDI + 0x4],EAX       ; 0046edc3
    ADD ESI,EDX                         ; 0046edc6
        ;   Label: LAB_0046edc6
    MOV EBP,ESI                         ; 0046edc8
    SHR EBP,0x8                         ; 0046edca
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046edcd
    JL 0x0046edd8                       ; 0046edd0
        ;   XREF to: 0046edd8 (CONDITIONAL_JUMP)  ; LAB_0046edd8
    MOV dword ptr [EBX + 0x8],EBP       ; 0046edd2
    MOV dword ptr [EDI + 0x8],EAX       ; 0046edd5
    ADD ESI,EDX                         ; 0046edd8
        ;   Label: LAB_0046edd8
    MOV EBP,ESI                         ; 0046edda
    SHR EBP,0x8                         ; 0046eddc
    CMP EBP,dword ptr [EBX + 0xc]       ; 0046eddf
    JL 0x0046edea                       ; 0046ede2
        ;   XREF to: 0046edea (CONDITIONAL_JUMP)  ; LAB_0046edea
    MOV dword ptr [EBX + 0xc],EBP       ; 0046ede4
    MOV dword ptr [EDI + 0xc],EAX       ; 0046ede7
    ADD ESI,EDX                         ; 0046edea
        ;   Label: LAB_0046edea
    ADD EBX,0x10                        ; 0046edec
    ADD EDI,0x10                        ; 0046edef
    JMP 0x0046eca6                      ; 0046edf2
        ;   XREF to: 0046eca6 (UNCONDITIONAL_JUMP)  ; LAB_0046eca6
    ADD ECX,0x4                         ; 0046edf7
        ;   Label: LAB_0046edf7
    JLE 0x0046ee33                      ; 0046edfa
        ;   XREF to: 0046ee33 (CONDITIONAL_JUMP)  ; LAB_0046ee33
    MOV EBP,ESI                         ; 0046edfc
    SHR EBP,0x8                         ; 0046edfe
    CMP EBP,dword ptr [EBX]             ; 0046ee01
    JL 0x0046ee09                       ; 0046ee03
        ;   XREF to: 0046ee09 (CONDITIONAL_JUMP)  ; LAB_0046ee09
    MOV dword ptr [EBX],EBP             ; 0046ee05
    MOV dword ptr [EDI],EAX             ; 0046ee07
    ADD ESI,EDX                         ; 0046ee09
        ;   Label: LAB_0046ee09
    DEC ECX                             ; 0046ee0b
    JLE 0x0046ee33                      ; 0046ee0c
        ;   XREF to: 0046ee33 (CONDITIONAL_JUMP)  ; LAB_0046ee33
    MOV EBP,ESI                         ; 0046ee0e
    SHR EBP,0x8                         ; 0046ee10
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046ee13
    JL 0x0046ee1e                       ; 0046ee16
        ;   XREF to: 0046ee1e (CONDITIONAL_JUMP)  ; LAB_0046ee1e
    MOV dword ptr [EBX + 0x4],EBP       ; 0046ee18
    MOV dword ptr [EDI + 0x4],EAX       ; 0046ee1b
    ADD ESI,EDX                         ; 0046ee1e
        ;   Label: LAB_0046ee1e
    DEC ECX                             ; 0046ee20
    JLE 0x0046ee33                      ; 0046ee21
        ;   XREF to: 0046ee33 (CONDITIONAL_JUMP)  ; LAB_0046ee33
    MOV EBP,ESI                         ; 0046ee23
    SHR EBP,0x8                         ; 0046ee25
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046ee28
    JL 0x0046ee33                       ; 0046ee2b
        ;   XREF to: 0046ee33 (CONDITIONAL_JUMP)  ; LAB_0046ee33
    MOV dword ptr [EBX + 0x8],EBP       ; 0046ee2d
    MOV dword ptr [EDI + 0x8],EAX       ; 0046ee30
    POP EBP                             ; 0046ee33
        ;   Label: LAB_0046ee33
    POP EDI                             ; 0046ee34
    POP ESI                             ; 0046ee35
    RET                                 ; 0046ee36

