; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b00f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; XREF[5]:
;   FUN_00417eb0 at 00417edd
;   FUN_004277f0 at 004278c9
;   FUN_004278e0 at 00427973
;   FUN_00427990 at 00427a10
;   FUN_004b0200 at 004b0230
;
; Referenced Globals:
;   undefined4 DAT_01c78ce8
;
; Called Functions:
;   FUN_004ae070
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004b00f0
        ;   Label: FUN_004b00f0
    MOV EDX,dword ptr [ESP + 0x14]      ; 004b00f1
    CMP EDX,0x2                         ; 004b00f5
    JZ 0x004b013c                       ; 004b00f8
        ;   XREF to: 004b013c (CONDITIONAL_JUMP)  ; LAB_004b013c
    PUSH EDI                            ; 004b00fa
    MOV EAX,[0x01c78ce8]                ; 004b00fb | DAT_01c78ce8
    MOV ECX,dword ptr [0x01c78ce8]      ; 004b0100 | DAT_01c78ce8
    SHL EAX,0x6                         ; 004b0106
    INC ECX                             ; 004b0109
    ADD EAX,0x1c78cec                   ; 004b010a
    MOV dword ptr [0x01c78ce8],ECX      ; 004b010f | DAT_01c78ce8
    CMP ECX,0x100                       ; 004b0115
    JL 0x004b0127                       ; 004b011b
        ;   XREF to: 004b0127 (CONDITIONAL_JUMP)  ; LAB_004b0127
    PUSH ESI                            ; 004b011d
    XOR ESI,ESI                         ; 004b011e
    MOV dword ptr [0x01c78ce8],ESI      ; 004b0120 | DAT_01c78ce8
    POP ESI                             ; 004b0126
    PUSH EDX                            ; 004b0127
        ;   Label: LAB_004b0127
    MOV EDI,dword ptr [ESP + 0x18]      ; 004b0128
    PUSH EDI                            ; 004b012c
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b012d
    PUSH EBP                            ; 004b0131
    PUSH EAX                            ; 004b0132
    CALL FUN_004ae070                   ; 004b0133
        ;   XREF to: 004ae070 (UNCONDITIONAL_CALL)  ; undefined FUN_004ae070()
    ADD ESP,0x10                        ; 004b0138
    POP EDI                             ; 004b013b
    POP EBP                             ; 004b013c
        ;   Label: LAB_004b013c
    RET                                 ; 004b013d

