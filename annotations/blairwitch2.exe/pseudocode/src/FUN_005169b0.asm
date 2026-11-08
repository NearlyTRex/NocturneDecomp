; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005169b0(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00516960 at 00516988
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005169b0
        ;   Label: FUN_005169b0
    PUSH ESI                            ; 005169b1
    PUSH EDI                            ; 005169b2
    PUSH EBP                            ; 005169b3
    SUB ESP,0x8                         ; 005169b4
    MOV EBP,dword ptr [ESP + 0x20]      ; 005169b7
    CMP dword ptr [ESP + 0x24],0x0      ; 005169bb
    JZ 0x00516a47                       ; 005169c0
        ;   XREF to: 00516a47 (CONDITIONAL_JUMP)  ; LAB_00516a47
    XOR ECX,ECX                         ; 005169c6
        ;   Label: LAB_005169c6
    MOV dword ptr [ESP + 0x4],ECX       ; 005169c8
    MOV dword ptr [ESP],ECX             ; 005169cc
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005169cf
        ;   Label: LAB_005169cf
    MOV ESI,dword ptr [ESP + 0x4]       ; 005169d3
    MOV ECX,dword ptr [ECX + 0x20]      ; 005169d7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005169da
    ADD ECX,ESI                         ; 005169de
    MOV EBX,dword ptr [EBX + 0x14]      ; 005169e0
    MOV EDX,dword ptr [ECX]             ; 005169e3
    MOV EDI,dword ptr [ECX + 0x4]       ; 005169e5
    ADD EDX,EBX                         ; 005169e8
    ADD EBX,EDI                         ; 005169ea
    CMP EDX,EBX                         ; 005169ec
    JNC 0x00516a1c                      ; 005169ee
        ;   XREF to: 00516a1c (CONDITIONAL_JUMP)  ; LAB_00516a1c
    LEA EDI,[EDX + 0x4]                 ; 005169f0
        ;   Label: LAB_005169f0
    XOR ECX,ECX                         ; 005169f3
    XOR ESI,ESI                         ; 005169f5
    MOV CX,word ptr [EDX + 0x2]         ; 005169f7
    MOV SI,word ptr [EDX]               ; 005169fb
    LEA EDX,[ECX + 0x3]                 ; 005169fe
    AND DL,0xfc                         ; 00516a01
    ADD ESI,EBP                         ; 00516a04
    ADD EDX,EDI                         ; 00516a06
    PUSH EDI                            ; 00516a08
    MOV EAX,ECX                         ; 00516a09
    SHR ECX,0x2                         ; 00516a0b
    MOVSD.REP ES:EDI,ESI                ; 00516a0e
    MOV CL,AL                           ; 00516a10
    AND CL,0x3                          ; 00516a12
    MOVSB.REP ES:EDI,ESI                ; 00516a15
    POP EDI                             ; 00516a17
    CMP EDX,EBX                         ; 00516a18
    JC 0x005169f0                       ; 00516a1a
        ;   XREF to: 005169f0 (CONDITIONAL_JUMP)  ; LAB_005169f0
    MOV EDX,dword ptr [ESP]             ; 00516a1c
        ;   Label: LAB_00516a1c
    MOV ECX,dword ptr [ESP + 0x24]      ; 00516a1f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00516a23
    INC EDX                             ; 00516a27
    ADD EBP,ECX                         ; 00516a28
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00516a2a
    ADD EAX,0x4                         ; 00516a2e
    MOV dword ptr [ESP],EDX             ; 00516a31
    MOV EBX,dword ptr [ECX + 0x1c]      ; 00516a34
    MOV dword ptr [ESP + 0x4],EAX       ; 00516a37
    CMP EDX,EBX                         ; 00516a3b
    JL 0x005169cf                       ; 00516a3d
        ;   XREF to: 005169cf (CONDITIONAL_JUMP)  ; LAB_005169cf
    ADD ESP,0x8                         ; 00516a3f
    POP EBP                             ; 00516a42
    POP EDI                             ; 00516a43
    POP ESI                             ; 00516a44
    POP EBX                             ; 00516a45
    RET                                 ; 00516a46
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00516a47
        ;   Label: LAB_00516a47
    MOV EDX,dword ptr [EDX + 0x18]      ; 00516a4b
    MOV dword ptr [ESP + 0x24],EDX      ; 00516a4e
    JMP 0x005169c6                      ; 00516a52
        ;   XREF to: 005169c6 (UNCONDITIONAL_JUMP)  ; LAB_005169c6

