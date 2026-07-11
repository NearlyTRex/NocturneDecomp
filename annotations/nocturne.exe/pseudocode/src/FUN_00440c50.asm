; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00440c50(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_005088f0 at 00508bcc
;   FUN_00509a80 at 00509f20
;
; Referenced Globals:
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_0140efa8
;   undefined4 DAT_0140efac
;   undefined4 DAT_0140efb0
;   undefined4 DAT_0140efb4
;   undefined4 DAT_0140efb8
;   undefined4 DAT_01410274
;   undefined4 DAT_01410278
;   undefined4 DAT_0141027c
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01bd4260
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00630
;   ... and 2 more
;
; Called Functions:
;   FUN_00465341
;   FUN_00532c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440c50
        ;   Label: FUN_00440c50
    PUSH ESI                            ; 00440c51
    PUSH EDI                            ; 00440c52
    PUSH EBP                            ; 00440c53
    MOV EBP,dword ptr [ESP + 0x14]      ; 00440c54
    MOV EDX,dword ptr [0x0140efa8]      ; 00440c58 | DAT_0140efa8
    DEC EDX                             ; 00440c5e
    MOV dword ptr [0x0140efa8],EDX      ; 00440c5f | DAT_0140efa8
    JZ 0x00440c6c                       ; 00440c65
        ;   XREF to: 00440c6c (CONDITIONAL_JUMP)  ; LAB_00440c6c
    POP EBP                             ; 00440c67
        ;   Label: LAB_00440c67
    POP EDI                             ; 00440c68
    POP ESI                             ; 00440c69
    POP EBX                             ; 00440c6a
    RET                                 ; 00440c6b
    MOV ESI,0x140efb4                   ; 00440c6c
        ;   Label: LAB_00440c6c
    MOV EDI,0x1bd2fa0                   ; 00440c71
    MOV EAX,[0x0140efac]                ; 00440c76 | DAT_0140efac
    MOV ECX,dword ptr [0x005b7620]      ; 00440c7b | DAT_005b7620
    MOV [0x005b7624],EAX                ; 00440c81 | DAT_005b7624
    MOV EAX,[0x0140efb0]                ; 00440c86 | DAT_0140efb0
    SHL ECX,0x2                         ; 00440c8b
    MOV [0x01c02594],EAX                ; 00440c8e | DAT_01c02594
    PUSH EDI                            ; 00440c93 | DAT_01bd2fa0
    MOV EAX,ECX                         ; 00440c94
    SHR ECX,0x2                         ; 00440c96
    MOVSD.REP ES:EDI,ESI                ; 00440c99 | DAT_0140efb4 | DAT_01bd2fa0 | DAT_0140efb8
    MOV CL,AL                           ; 00440c9b
    AND CL,0x3                          ; 00440c9d
    MOVSB.REP ES:EDI,ESI                ; 00440ca0 | DAT_0140efb8 | DAT_01bd2fa4
    POP EDI                             ; 00440ca2
    MOV EAX,[0x01410274]                ; 00440ca3 | DAT_01410274
    MOV [0x01c00624],EAX                ; 00440ca8 | DAT_01c00624
    MOV EAX,[0x01410278]                ; 00440cad | DAT_01410278
    MOV [0x01c00630],EAX                ; 00440cb2 | DAT_01c00630
    MOV EAX,[0x0141027c]                ; 00440cb7 | DAT_0141027c
    MOV EBX,dword ptr [ESP + 0x18]      ; 00440cbc
    MOV [0x01c0063c],EAX                ; 00440cc0 | DAT_01c0063c
    TEST EBX,EBX                        ; 00440cc5
    JZ 0x00440c67                       ; 00440cc7
        ;   XREF to: 00440c67 (CONDITIONAL_JUMP)  ; LAB_00440c67
    MOV EDI,dword ptr [EBP + 0x140]     ; 00440cc9
    XOR ESI,ESI                         ; 00440ccf
    TEST EDI,EDI                        ; 00440cd1
    JLE 0x00440d20                      ; 00440cd3
        ;   XREF to: 00440d20 (CONDITIONAL_JUMP)  ; LAB_00440d20
    MOV EDX,dword ptr [EBP + 0x13c]     ; 00440cd5
        ;   Label: LAB_00440cd5
    IMUL EDX,ESI                        ; 00440cdb
    MOV EAX,dword ptr [EBP + 0x148]     ; 00440cde
    ADD EAX,ESI                         ; 00440ce4
    LEA ECX,[EAX*0x4 + 0x0]             ; 00440ce6
    MOV EAX,dword ptr [EBP + 0x13c]     ; 00440ced
    MOV EBX,dword ptr [EBP + 0x15c]     ; 00440cf3
    SHL EAX,0x2                         ; 00440cf9
    MOV ECX,dword ptr [ECX + 0x1bd4260] ; 00440cfc | DAT_01bd4260
    PUSH EAX                            ; 00440d02
    ADD ECX,EAX                         ; 00440d03
    SHL EDX,0x2                         ; 00440d05
    PUSH ECX                            ; 00440d08
    ADD EDX,EBX                         ; 00440d09
    PUSH EDX                            ; 00440d0b
    INC ESI                             ; 00440d0c
    CALL FUN_00465341                   ; 00440d0d
        ;   XREF to: 00465341 (UNCONDITIONAL_CALL)  ; undefined FUN_00465341()
    MOV EAX,dword ptr [EBP + 0x140]     ; 00440d12
    ADD ESP,0xc                         ; 00440d18
    CMP ESI,EAX                         ; 00440d1b
    JL 0x00440cd5                       ; 00440d1d
        ;   XREF to: 00440cd5 (CONDITIONAL_JUMP)  ; LAB_00440cd5
    NOP                                 ; 00440d1f
    CMP dword ptr [0x01c02594],0x0      ; 00440d20 | DAT_01c02594
        ;   Label: LAB_00440d20
    JZ 0x00440c67                       ; 00440d27
        ;   XREF to: 00440c67 (CONDITIONAL_JUMP)  ; LAB_00440c67
    PUSH 0x0                            ; 00440d2d
    CALL FUN_00532c70                   ; 00440d2f
        ;   XREF to: 00532c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00532c70()
    ADD ESP,0x4                         ; 00440d34
    POP EBP                             ; 00440d37
    POP EDI                             ; 00440d38
    POP ESI                             ; 00440d39
    POP EBX                             ; 00440d3a
    RET                                 ; 00440d3b

