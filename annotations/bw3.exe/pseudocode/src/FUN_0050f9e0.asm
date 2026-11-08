; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050f9e0(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0050f990 at 0050f9b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f9e0
        ;   Label: FUN_0050f9e0
    PUSH ESI                            ; 0050f9e1
    PUSH EDI                            ; 0050f9e2
    PUSH EBP                            ; 0050f9e3
    SUB ESP,0x8                         ; 0050f9e4
    MOV EBP,dword ptr [ESP + 0x20]      ; 0050f9e7
    CMP dword ptr [ESP + 0x24],0x0      ; 0050f9eb
    JZ 0x0050fa77                       ; 0050f9f0
        ;   XREF to: 0050fa77 (CONDITIONAL_JUMP)  ; LAB_0050fa77
    XOR ECX,ECX                         ; 0050f9f6
        ;   Label: LAB_0050f9f6
    MOV dword ptr [ESP + 0x4],ECX       ; 0050f9f8
    MOV dword ptr [ESP],ECX             ; 0050f9fc
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050f9ff
        ;   Label: LAB_0050f9ff
    MOV ESI,dword ptr [ESP + 0x4]       ; 0050fa03
    MOV ECX,dword ptr [ECX + 0x20]      ; 0050fa07
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0050fa0a
    ADD ECX,ESI                         ; 0050fa0e
    MOV EBX,dword ptr [EBX + 0x14]      ; 0050fa10
    MOV EDX,dword ptr [ECX]             ; 0050fa13
    MOV EDI,dword ptr [ECX + 0x4]       ; 0050fa15
    ADD EDX,EBX                         ; 0050fa18
    ADD EBX,EDI                         ; 0050fa1a
    CMP EDX,EBX                         ; 0050fa1c
    JNC 0x0050fa4c                      ; 0050fa1e
        ;   XREF to: 0050fa4c (CONDITIONAL_JUMP)  ; LAB_0050fa4c
    LEA EDI,[EDX + 0x4]                 ; 0050fa20
        ;   Label: LAB_0050fa20
    XOR ECX,ECX                         ; 0050fa23
    XOR ESI,ESI                         ; 0050fa25
    MOV CX,word ptr [EDX + 0x2]         ; 0050fa27
    MOV SI,word ptr [EDX]               ; 0050fa2b
    LEA EDX,[ECX + 0x3]                 ; 0050fa2e
    AND DL,0xfc                         ; 0050fa31
    ADD ESI,EBP                         ; 0050fa34
    ADD EDX,EDI                         ; 0050fa36
    PUSH EDI                            ; 0050fa38
    MOV EAX,ECX                         ; 0050fa39
    SHR ECX,0x2                         ; 0050fa3b
    MOVSD.REP ES:EDI,ESI                ; 0050fa3e
    MOV CL,AL                           ; 0050fa40
    AND CL,0x3                          ; 0050fa42
    MOVSB.REP ES:EDI,ESI                ; 0050fa45
    POP EDI                             ; 0050fa47
    CMP EDX,EBX                         ; 0050fa48
    JC 0x0050fa20                       ; 0050fa4a
        ;   XREF to: 0050fa20 (CONDITIONAL_JUMP)  ; LAB_0050fa20
    MOV EDX,dword ptr [ESP]             ; 0050fa4c
        ;   Label: LAB_0050fa4c
    MOV ECX,dword ptr [ESP + 0x24]      ; 0050fa4f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050fa53
    INC EDX                             ; 0050fa57
    ADD EBP,ECX                         ; 0050fa58
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050fa5a
    ADD EAX,0x4                         ; 0050fa5e
    MOV dword ptr [ESP],EDX             ; 0050fa61
    MOV EBX,dword ptr [ECX + 0x1c]      ; 0050fa64
    MOV dword ptr [ESP + 0x4],EAX       ; 0050fa67
    CMP EDX,EBX                         ; 0050fa6b
    JL 0x0050f9ff                       ; 0050fa6d
        ;   XREF to: 0050f9ff (CONDITIONAL_JUMP)  ; LAB_0050f9ff
    ADD ESP,0x8                         ; 0050fa6f
    POP EBP                             ; 0050fa72
    POP EDI                             ; 0050fa73
    POP ESI                             ; 0050fa74
    POP EBX                             ; 0050fa75
    RET                                 ; 0050fa76
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050fa77
        ;   Label: LAB_0050fa77
    MOV EDX,dword ptr [EDX + 0x18]      ; 0050fa7b
    MOV dword ptr [ESP + 0x24],EDX      ; 0050fa7e
    JMP 0x0050f9f6                      ; 0050fa82
        ;   XREF to: 0050f9f6 (UNCONDITIONAL_JUMP)  ; LAB_0050f9f6

