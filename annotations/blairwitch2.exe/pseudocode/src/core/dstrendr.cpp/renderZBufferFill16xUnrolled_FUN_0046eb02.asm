; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_dstrendr_cpp_renderZBufferFill16xUnrolled_FUN_0046eb02(void)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_004697a0 at 00469881
;
; Referenced Globals:
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2b64c
;   undefined4 DAT_01c35214
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01c35e70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046eb02
        ;   Label: core_dstrendr.cpp_renderZBufferFill16xUnrolled_FUN_0046eb02
    PUSH EDI                            ; 0046eb03
    PUSH EBP                            ; 0046eb04
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046eb05
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046eb08
    CMP EAX,ECX                         ; 0046eb0b
    JBE 0x0046eb12                      ; 0046eb0d
        ;   XREF to: 0046eb12 (CONDITIONAL_JUMP)  ; LAB_0046eb12
    XCHG EAX,ECX                        ; 0046eb0f
    XCHG EDI,ESI                        ; 0046eb10
    SHR EAX,0x10                        ; 0046eb12
        ;   Label: LAB_0046eb12
    SHR ECX,0x10                        ; 0046eb15
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0046eb18 | DAT_01c2b64c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0046eb1f | DAT_01c2a38c
    SUB ECX,EAX                         ; 0046eb26
    JLE 0x0046ec54                      ; 0046eb28
        ;   XREF to: 0046ec54 (CONDITIONAL_JUMP)  ; LAB_0046ec54
    SHL EAX,0x2                         ; 0046eb2e
    ADD EBX,EAX                         ; 0046eb31
    ADD EBP,EAX                         ; 0046eb33
    INC ECX                             ; 0046eb35
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046eb36
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046eb39
    IMUL dword ptr [ECX*0x4 + 0x1c35e70] ; 0046eb3c | DAT_01c35e70
    MOV EDI,EBX                         ; 0046eb43
    MOV EBX,EBP                         ; 0046eb45
    DEC ECX                             ; 0046eb47
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046eb48
    XOR EAX,EAX                         ; 0046eb4b
    MOV AL,[0x01c35e60]                 ; 0046eb4d | DAT_01c35e60
    MOV EAX,dword ptr [EAX*0x4 + 0x1c35214] ; 0046eb52 | DAT_01c35214
    SUB ECX,0x4                         ; 0046eb59
        ;   Label: LAB_0046eb59
    JL 0x0046ec2e                       ; 0046eb5c
        ;   XREF to: 0046ec2e (CONDITIONAL_JUMP)  ; LAB_0046ec2e
    MOV EBP,ESI                         ; 0046eb62
    SHR EBP,0x8                         ; 0046eb64
    MOV dword ptr [EBX],EBP             ; 0046eb67
    ADD ESI,EDX                         ; 0046eb69
    MOV EBP,ESI                         ; 0046eb6b
    SHR EBP,0x8                         ; 0046eb6d
    MOV dword ptr [EBX + 0x4],EBP       ; 0046eb70
    ADD ESI,EDX                         ; 0046eb73
    MOV EBP,ESI                         ; 0046eb75
    SHR EBP,0x8                         ; 0046eb77
    MOV dword ptr [EBX + 0x8],EBP       ; 0046eb7a
    ADD ESI,EDX                         ; 0046eb7d
    MOV EBP,ESI                         ; 0046eb7f
    SHR EBP,0x8                         ; 0046eb81
    MOV dword ptr [EBX + 0xc],EBP       ; 0046eb84
    ADD ESI,EDX                         ; 0046eb87
    ADD EBX,0x10                        ; 0046eb89
    ADD EDI,0x10                        ; 0046eb8c
    SUB ECX,0x4                         ; 0046eb8f
    JL 0x0046ec2e                       ; 0046eb92
        ;   XREF to: 0046ec2e (CONDITIONAL_JUMP)  ; LAB_0046ec2e
    MOV EBP,ESI                         ; 0046eb98
    SHR EBP,0x8                         ; 0046eb9a
    MOV dword ptr [EBX],EBP             ; 0046eb9d
    ADD ESI,EDX                         ; 0046eb9f
    MOV EBP,ESI                         ; 0046eba1
    SHR EBP,0x8                         ; 0046eba3
    MOV dword ptr [EBX + 0x4],EBP       ; 0046eba6
    ADD ESI,EDX                         ; 0046eba9
    MOV EBP,ESI                         ; 0046ebab
    SHR EBP,0x8                         ; 0046ebad
    MOV dword ptr [EBX + 0x8],EBP       ; 0046ebb0
    ADD ESI,EDX                         ; 0046ebb3
    MOV EBP,ESI                         ; 0046ebb5
    SHR EBP,0x8                         ; 0046ebb7
    MOV dword ptr [EBX + 0xc],EBP       ; 0046ebba
    ADD ESI,EDX                         ; 0046ebbd
    ADD EBX,0x10                        ; 0046ebbf
    ADD EDI,0x10                        ; 0046ebc2
    SUB ECX,0x4                         ; 0046ebc5
    JL 0x0046ec2e                       ; 0046ebc8
        ;   XREF to: 0046ec2e (CONDITIONAL_JUMP)  ; LAB_0046ec2e
    MOV EBP,ESI                         ; 0046ebca
    SHR EBP,0x8                         ; 0046ebcc
    MOV dword ptr [EBX],EBP             ; 0046ebcf
    ADD ESI,EDX                         ; 0046ebd1
    MOV EBP,ESI                         ; 0046ebd3
    SHR EBP,0x8                         ; 0046ebd5
    MOV dword ptr [EBX + 0x4],EBP       ; 0046ebd8
    ADD ESI,EDX                         ; 0046ebdb
    MOV EBP,ESI                         ; 0046ebdd
    SHR EBP,0x8                         ; 0046ebdf
    MOV dword ptr [EBX + 0x8],EBP       ; 0046ebe2
    ADD ESI,EDX                         ; 0046ebe5
    MOV EBP,ESI                         ; 0046ebe7
    SHR EBP,0x8                         ; 0046ebe9
    MOV dword ptr [EBX + 0xc],EBP       ; 0046ebec
    ADD ESI,EDX                         ; 0046ebef
    ADD EBX,0x10                        ; 0046ebf1
    ADD EDI,0x10                        ; 0046ebf4
    SUB ECX,0x4                         ; 0046ebf7
    JL 0x0046ec2e                       ; 0046ebfa
        ;   XREF to: 0046ec2e (CONDITIONAL_JUMP)  ; LAB_0046ec2e
    MOV EBP,ESI                         ; 0046ebfc
    SHR EBP,0x8                         ; 0046ebfe
    MOV dword ptr [EBX],EBP             ; 0046ec01
    ADD ESI,EDX                         ; 0046ec03
    MOV EBP,ESI                         ; 0046ec05
    SHR EBP,0x8                         ; 0046ec07
    MOV dword ptr [EBX + 0x4],EBP       ; 0046ec0a
    ADD ESI,EDX                         ; 0046ec0d
    MOV EBP,ESI                         ; 0046ec0f
    SHR EBP,0x8                         ; 0046ec11
    MOV dword ptr [EBX + 0x8],EBP       ; 0046ec14
    ADD ESI,EDX                         ; 0046ec17
    MOV EBP,ESI                         ; 0046ec19
    SHR EBP,0x8                         ; 0046ec1b
    MOV dword ptr [EBX + 0xc],EBP       ; 0046ec1e
    ADD ESI,EDX                         ; 0046ec21
    ADD EBX,0x10                        ; 0046ec23
    ADD EDI,0x10                        ; 0046ec26
    JMP 0x0046eb59                      ; 0046ec29
        ;   XREF to: 0046eb59 (UNCONDITIONAL_JUMP)  ; LAB_0046eb59
    ADD ECX,0x4                         ; 0046ec2e
        ;   Label: LAB_0046ec2e
    JLE 0x0046ec54                      ; 0046ec31
        ;   XREF to: 0046ec54 (CONDITIONAL_JUMP)  ; LAB_0046ec54
    MOV EBP,ESI                         ; 0046ec33
    SHR EBP,0x8                         ; 0046ec35
    MOV dword ptr [EBX],EBP             ; 0046ec38
    ADD ESI,EDX                         ; 0046ec3a
    DEC ECX                             ; 0046ec3c
    JLE 0x0046ec54                      ; 0046ec3d
        ;   XREF to: 0046ec54 (CONDITIONAL_JUMP)  ; LAB_0046ec54
    MOV EBP,ESI                         ; 0046ec3f
    SHR EBP,0x8                         ; 0046ec41
    MOV dword ptr [EBX + 0x4],EBP       ; 0046ec44
    ADD ESI,EDX                         ; 0046ec47
    DEC ECX                             ; 0046ec49
    JLE 0x0046ec54                      ; 0046ec4a
        ;   XREF to: 0046ec54 (CONDITIONAL_JUMP)  ; LAB_0046ec54
    MOV EBP,ESI                         ; 0046ec4c
    SHR EBP,0x8                         ; 0046ec4e
    MOV dword ptr [EBX + 0x8],EBP       ; 0046ec51
    POP EBP                             ; 0046ec54
        ;   Label: LAB_0046ec54
    POP EDI                             ; 0046ec55
    POP ESI                             ; 0046ec56
    RET                                 ; 0046ec57

