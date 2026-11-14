; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderZBufferFill16xUnrolled_FUN_0046fb72(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0046b370 at 0046b451
;
; Referenced Globals:
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c60dac
;   undefined4 DAT_01c6a974
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_01c6b5d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046fb72
        ;   Label: core_dstrendr.cpp_renderZBufferFill16xUnrolled_FUN_0046fb72
    PUSH EDI                            ; 0046fb73
    PUSH EBP                            ; 0046fb74
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046fb75
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046fb78
    CMP EAX,ECX                         ; 0046fb7b
    JBE 0x0046fb82                      ; 0046fb7d
        ;   XREF to: 0046fb82 (CONDITIONAL_JUMP)  ; LAB_0046fb82
    XCHG EAX,ECX                        ; 0046fb7f
    XCHG EDI,ESI                        ; 0046fb80
    SHR EAX,0x10                        ; 0046fb82
        ;   Label: LAB_0046fb82
    SHR ECX,0x10                        ; 0046fb85
    MOV EBP,dword ptr [EBX*0x4 + 0x1c60dac] ; 0046fb88 | DAT_01c60dac
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 0046fb8f | DAT_01c5faec
    SUB ECX,EAX                         ; 0046fb96
    JLE 0x0046fcc4                      ; 0046fb98
        ;   XREF to: 0046fcc4 (CONDITIONAL_JUMP)  ; LAB_0046fcc4
    SHL EAX,0x2                         ; 0046fb9e
    ADD EBX,EAX                         ; 0046fba1
    ADD EBP,EAX                         ; 0046fba3
    INC ECX                             ; 0046fba5
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046fba6
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046fba9
    IMUL dword ptr [ECX*0x4 + 0x1c6b5d0] ; 0046fbac | DAT_01c6b5d0
    MOV EDI,EBX                         ; 0046fbb3
    MOV EBX,EBP                         ; 0046fbb5
    DEC ECX                             ; 0046fbb7
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046fbb8
    XOR EAX,EAX                         ; 0046fbbb
    MOV AL,[0x01c6b5c0]                 ; 0046fbbd | DAT_01c6b5c0
    MOV EAX,dword ptr [EAX*0x4 + 0x1c6a974] ; 0046fbc2 | DAT_01c6a974
    SUB ECX,0x4                         ; 0046fbc9
        ;   Label: LAB_0046fbc9
    JL 0x0046fc9e                       ; 0046fbcc
        ;   XREF to: 0046fc9e (CONDITIONAL_JUMP)  ; LAB_0046fc9e
    MOV EBP,ESI                         ; 0046fbd2
    SHR EBP,0x8                         ; 0046fbd4
    MOV dword ptr [EBX],EBP             ; 0046fbd7
    ADD ESI,EDX                         ; 0046fbd9
    MOV EBP,ESI                         ; 0046fbdb
    SHR EBP,0x8                         ; 0046fbdd
    MOV dword ptr [EBX + 0x4],EBP       ; 0046fbe0
    ADD ESI,EDX                         ; 0046fbe3
    MOV EBP,ESI                         ; 0046fbe5
    SHR EBP,0x8                         ; 0046fbe7
    MOV dword ptr [EBX + 0x8],EBP       ; 0046fbea
    ADD ESI,EDX                         ; 0046fbed
    MOV EBP,ESI                         ; 0046fbef
    SHR EBP,0x8                         ; 0046fbf1
    MOV dword ptr [EBX + 0xc],EBP       ; 0046fbf4
    ADD ESI,EDX                         ; 0046fbf7
    ADD EBX,0x10                        ; 0046fbf9
    ADD EDI,0x10                        ; 0046fbfc
    SUB ECX,0x4                         ; 0046fbff
    JL 0x0046fc9e                       ; 0046fc02
        ;   XREF to: 0046fc9e (CONDITIONAL_JUMP)  ; LAB_0046fc9e
    MOV EBP,ESI                         ; 0046fc08
    SHR EBP,0x8                         ; 0046fc0a
    MOV dword ptr [EBX],EBP             ; 0046fc0d
    ADD ESI,EDX                         ; 0046fc0f
    MOV EBP,ESI                         ; 0046fc11
    SHR EBP,0x8                         ; 0046fc13
    MOV dword ptr [EBX + 0x4],EBP       ; 0046fc16
    ADD ESI,EDX                         ; 0046fc19
    MOV EBP,ESI                         ; 0046fc1b
    SHR EBP,0x8                         ; 0046fc1d
    MOV dword ptr [EBX + 0x8],EBP       ; 0046fc20
    ADD ESI,EDX                         ; 0046fc23
    MOV EBP,ESI                         ; 0046fc25
    SHR EBP,0x8                         ; 0046fc27
    MOV dword ptr [EBX + 0xc],EBP       ; 0046fc2a
    ADD ESI,EDX                         ; 0046fc2d
    ADD EBX,0x10                        ; 0046fc2f
    ADD EDI,0x10                        ; 0046fc32
    SUB ECX,0x4                         ; 0046fc35
    JL 0x0046fc9e                       ; 0046fc38
        ;   XREF to: 0046fc9e (CONDITIONAL_JUMP)  ; LAB_0046fc9e
    MOV EBP,ESI                         ; 0046fc3a
    SHR EBP,0x8                         ; 0046fc3c
    MOV dword ptr [EBX],EBP             ; 0046fc3f
    ADD ESI,EDX                         ; 0046fc41
    MOV EBP,ESI                         ; 0046fc43
    SHR EBP,0x8                         ; 0046fc45
    MOV dword ptr [EBX + 0x4],EBP       ; 0046fc48
    ADD ESI,EDX                         ; 0046fc4b
    MOV EBP,ESI                         ; 0046fc4d
    SHR EBP,0x8                         ; 0046fc4f
    MOV dword ptr [EBX + 0x8],EBP       ; 0046fc52
    ADD ESI,EDX                         ; 0046fc55
    MOV EBP,ESI                         ; 0046fc57
    SHR EBP,0x8                         ; 0046fc59
    MOV dword ptr [EBX + 0xc],EBP       ; 0046fc5c
    ADD ESI,EDX                         ; 0046fc5f
    ADD EBX,0x10                        ; 0046fc61
    ADD EDI,0x10                        ; 0046fc64
    SUB ECX,0x4                         ; 0046fc67
    JL 0x0046fc9e                       ; 0046fc6a
        ;   XREF to: 0046fc9e (CONDITIONAL_JUMP)  ; LAB_0046fc9e
    MOV EBP,ESI                         ; 0046fc6c
    SHR EBP,0x8                         ; 0046fc6e
    MOV dword ptr [EBX],EBP             ; 0046fc71
    ADD ESI,EDX                         ; 0046fc73
    MOV EBP,ESI                         ; 0046fc75
    SHR EBP,0x8                         ; 0046fc77
    MOV dword ptr [EBX + 0x4],EBP       ; 0046fc7a
    ADD ESI,EDX                         ; 0046fc7d
    MOV EBP,ESI                         ; 0046fc7f
    SHR EBP,0x8                         ; 0046fc81
    MOV dword ptr [EBX + 0x8],EBP       ; 0046fc84
    ADD ESI,EDX                         ; 0046fc87
    MOV EBP,ESI                         ; 0046fc89
    SHR EBP,0x8                         ; 0046fc8b
    MOV dword ptr [EBX + 0xc],EBP       ; 0046fc8e
    ADD ESI,EDX                         ; 0046fc91
    ADD EBX,0x10                        ; 0046fc93
    ADD EDI,0x10                        ; 0046fc96
    JMP 0x0046fbc9                      ; 0046fc99
        ;   XREF to: 0046fbc9 (UNCONDITIONAL_JUMP)  ; LAB_0046fbc9
    ADD ECX,0x4                         ; 0046fc9e
        ;   Label: LAB_0046fc9e
    JLE 0x0046fcc4                      ; 0046fca1
        ;   XREF to: 0046fcc4 (CONDITIONAL_JUMP)  ; LAB_0046fcc4
    MOV EBP,ESI                         ; 0046fca3
    SHR EBP,0x8                         ; 0046fca5
    MOV dword ptr [EBX],EBP             ; 0046fca8
    ADD ESI,EDX                         ; 0046fcaa
    DEC ECX                             ; 0046fcac
    JLE 0x0046fcc4                      ; 0046fcad
        ;   XREF to: 0046fcc4 (CONDITIONAL_JUMP)  ; LAB_0046fcc4
    MOV EBP,ESI                         ; 0046fcaf
    SHR EBP,0x8                         ; 0046fcb1
    MOV dword ptr [EBX + 0x4],EBP       ; 0046fcb4
    ADD ESI,EDX                         ; 0046fcb7
    DEC ECX                             ; 0046fcb9
    JLE 0x0046fcc4                      ; 0046fcba
        ;   XREF to: 0046fcc4 (CONDITIONAL_JUMP)  ; LAB_0046fcc4
    MOV EBP,ESI                         ; 0046fcbc
    SHR EBP,0x8                         ; 0046fcbe
    MOV dword ptr [EBX + 0x8],EBP       ; 0046fcc1
    POP EBP                             ; 0046fcc4
        ;   Label: LAB_0046fcc4
    POP EDI                             ; 0046fcc5
    POP ESI                             ; 0046fcc6
    RET                                 ; 0046fcc7

