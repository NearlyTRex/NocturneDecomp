; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00480dc0(int param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_00480d90 at 00480daf
;
; Called Functions:
;   FUN_00480e70
;   FUN_00480fa0
;   FUN_00481240
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00480dc0
        ;   Label: FUN_00480dc0
    PUSH EDI                            ; 00480dc1
    MOV EDI,dword ptr [ESP + 0xc]       ; 00480dc2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00480dc6
    PUSH EDI                            ; 00480dca
    MOV EAX,dword ptr [EDI + 0xc]       ; 00480dcb
    CALL dword ptr [EAX + 0x14]         ; 00480dce
    MOV EAX,dword ptr [ESI]             ; 00480dd1
    ADD ESP,0x4                         ; 00480dd3
    CMP EAX,0x1                         ; 00480dd6
    JGE 0x00480de0                      ; 00480dd9
        ;   XREF to: 00480de0 (CONDITIONAL_JUMP)  ; LAB_00480de0
    MOV EAX,EDI                         ; 00480ddb
    POP EDI                             ; 00480ddd
    POP ESI                             ; 00480dde
    RET                                 ; 00480ddf
    PUSH EBX                            ; 00480de0
        ;   Label: LAB_00480de0
    PUSH EAX                            ; 00480de1
    PUSH EDI                            ; 00480de2
    XOR EBX,EBX                         ; 00480de3
    CALL FUN_00480fa0                   ; 00480de5
        ;   XREF to: 00480fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00480fa0()
    ADD ESP,0x8                         ; 00480dea
        ;   Label: LAB_00480dea
    MOV EAX,dword ptr [ESI]             ; 00480ded
    CMP EBX,EAX                         ; 00480def
    JGE 0x00480e07                      ; 00480df1
        ;   XREF to: 00480e07 (CONDITIONAL_JUMP)  ; LAB_00480e07
    PUSH EBX                            ; 00480df3
    PUSH ESI                            ; 00480df4
    CALL FUN_00481240                   ; 00480df5
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; undefined FUN_00481240()
    ADD ESP,0x8                         ; 00480dfa
    PUSH EAX                            ; 00480dfd
    PUSH EDI                            ; 00480dfe
    INC EBX                             ; 00480dff
    CALL FUN_00480e70                   ; 00480e00
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    JMP 0x00480dea                      ; 00480e05
        ;   XREF to: 00480dea (UNCONDITIONAL_JUMP)  ; LAB_00480dea
    MOV EAX,EDI                         ; 00480e07
        ;   Label: LAB_00480e07
    POP EBX                             ; 00480e09
    POP EDI                             ; 00480e0a
    POP ESI                             ; 00480e0b
    RET                                 ; 00480e0c

