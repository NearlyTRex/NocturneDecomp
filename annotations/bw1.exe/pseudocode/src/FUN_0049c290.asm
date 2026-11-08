; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049c290(int *param_1,int param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_00499510
;   FUN_0049c030
;   FUN_0049c100
;   FUN_0049c160
;   FUN_0049c230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c290
        ;   Label: FUN_0049c290
    PUSH ESI                            ; 0049c291
    PUSH EBP                            ; 0049c292
    MOV ESI,dword ptr [ESP + 0x10]      ; 0049c293
    MOV EBP,dword ptr [ESP + 0x14]      ; 0049c297
    MOV EDX,dword ptr [ESP + 0x18]      ; 0049c29b
    PUSH EDX                            ; 0049c29f
    PUSH EBP                            ; 0049c2a0
    PUSH ESI                            ; 0049c2a1
    CALL FUN_00499510                   ; 0049c2a2
        ;   XREF to: 00499510 (UNCONDITIONAL_CALL)  ; undefined FUN_00499510()
    MOV EBX,dword ptr [ESI]             ; 0049c2a7
    SUB EBX,0x2                         ; 0049c2a9
    ADD ESP,0xc                         ; 0049c2ac
    CMP EBX,EBP                         ; 0049c2af
    JLE 0x0049c2e7                      ; 0049c2b1
        ;   XREF to: 0049c2e7 (CONDITIONAL_JUMP)  ; LAB_0049c2e7
    PUSH EDI                            ; 0049c2b3
    LEA EDI,[EBX + -0x1]                ; 0049c2b4
        ;   Label: LAB_0049c2b4
    PUSH EDI                            ; 0049c2b7
    PUSH ESI                            ; 0049c2b8
    CALL FUN_0049c100                   ; 0049c2b9
        ;   XREF to: 0049c100 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c100()
    ADD ESP,0x8                         ; 0049c2be
    PUSH EAX                            ; 0049c2c1
    PUSH EBX                            ; 0049c2c2
    PUSH ESI                            ; 0049c2c3
    CALL FUN_0049c030                   ; 0049c2c4
        ;   XREF to: 0049c030 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c030()
    ADD ESP,0xc                         ; 0049c2c9
    PUSH EDI                            ; 0049c2cc
    PUSH ESI                            ; 0049c2cd
    CALL FUN_0049c230                   ; 0049c2ce
        ;   XREF to: 0049c230 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c230()
    ADD ESP,0x8                         ; 0049c2d3
    PUSH EAX                            ; 0049c2d6
    PUSH EBX                            ; 0049c2d7
    PUSH ESI                            ; 0049c2d8
    CALL FUN_0049c160                   ; 0049c2d9
        ;   XREF to: 0049c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c160()
    DEC EBX                             ; 0049c2de
    ADD ESP,0xc                         ; 0049c2df
    CMP EBX,EBP                         ; 0049c2e2
    JG 0x0049c2b4                       ; 0049c2e4
        ;   XREF to: 0049c2b4 (CONDITIONAL_JUMP)  ; LAB_0049c2b4
    POP EDI                             ; 0049c2e6
    PUSH 0x1                            ; 0049c2e7
        ;   Label: LAB_0049c2e7
    PUSH EBP                            ; 0049c2e9
    PUSH ESI                            ; 0049c2ea
    CALL FUN_0049c030                   ; 0049c2eb
        ;   XREF to: 0049c030 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c030()
    ADD ESP,0xc                         ; 0049c2f0
    PUSH -0x1                           ; 0049c2f3
    PUSH EBP                            ; 0049c2f5
    PUSH ESI                            ; 0049c2f6
    CALL FUN_0049c160                   ; 0049c2f7
        ;   XREF to: 0049c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c160()
    ADD ESP,0xc                         ; 0049c2fc
    POP EBP                             ; 0049c2ff
    POP ESI                             ; 0049c300
    POP EBX                             ; 0049c301
    RET                                 ; 0049c302

