; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049e680(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_00462ff0 at 00463a08
;   FUN_00486cb0 at 004872fa
;   FUN_004a0db0 at 004a0e1a
;
; Referenced Globals:
;   undefined4 DAT_01c9cd94
;   undefined4 DAT_01c9cd98
;
; Called Functions:
;   FUN_0049a1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e680
        ;   Label: FUN_0049e680
    PUSH ESI                            ; 0049e681
    PUSH EDI                            ; 0049e682
    PUSH EBP                            ; 0049e683
    MOV ESI,dword ptr [0x01c9cd94]      ; 0049e684 | DAT_01c9cd94
    MOV EBP,dword ptr [ESP + 0x18]      ; 0049e68a
    MOV EBX,dword ptr [ESP + 0x20]      ; 0049e68e
    MOV EDI,dword ptr [ESP + 0x24]      ; 0049e692
    TEST EBX,EBX                        ; 0049e696
    JLE 0x0049e6ce                      ; 0049e698
        ;   XREF to: 0049e6ce (CONDITIONAL_JUMP)  ; LAB_0049e6ce
    IMUL EAX,ESI,0x24                   ; 0049e69a
        ;   Label: LAB_0049e69a
    PUSH EDI                            ; 0049e69d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0049e69e
    PUSH EDX                            ; 0049e6a2
    PUSH EBP                            ; 0049e6a3
    ADD EAX,0x1c9cd98                   ; 0049e6a4
    PUSH EAX                            ; 0049e6a9 | DAT_01c9cd98
    MOV dword ptr [0x01c9cd94],ESI      ; 0049e6aa | DAT_01c9cd94
    CALL FUN_0049a1b0                   ; 0049e6b0
        ;   XREF to: 0049a1b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a1b0()
    MOV ESI,dword ptr [0x01c9cd94]      ; 0049e6b5 | DAT_01c9cd94
    INC ESI                             ; 0049e6bb
    ADD ESP,0x10                        ; 0049e6bc
    CMP ESI,0x1f4                       ; 0049e6bf
    JL 0x0049e6c9                       ; 0049e6c5
        ;   XREF to: 0049e6c9 (CONDITIONAL_JUMP)  ; LAB_0049e6c9
    XOR ESI,ESI                         ; 0049e6c7
    DEC EBX                             ; 0049e6c9
        ;   Label: LAB_0049e6c9
    TEST EBX,EBX                        ; 0049e6ca
    JG 0x0049e69a                       ; 0049e6cc
        ;   XREF to: 0049e69a (CONDITIONAL_JUMP)  ; LAB_0049e69a
    MOV dword ptr [0x01c9cd94],ESI      ; 0049e6ce | DAT_01c9cd94
        ;   Label: LAB_0049e6ce
    POP EBP                             ; 0049e6d4
    POP EDI                             ; 0049e6d5
    POP ESI                             ; 0049e6d6
    POP EBX                             ; 0049e6d7
    RET                                 ; 0049e6d8

