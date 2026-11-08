; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00584c20(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004904d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584c20
        ;   Label: FUN_00584c20
    PUSH ESI                            ; 00584c21
    PUSH EDI                            ; 00584c22
    PUSH EBP                            ; 00584c23
    MOV EDI,dword ptr [ESP + 0x14]      ; 00584c24
    MOV EBP,dword ptr [ESP + 0x18]      ; 00584c28
    LEA ESI,[EDI + 0x170]               ; 00584c2c
    XOR EBX,EBX                         ; 00584c32
    MOV EAX,dword ptr [EDI + 0x16c]     ; 00584c34
        ;   Label: LAB_00584c34
    ADD EAX,EAX                         ; 00584c3a
    CMP EBX,EAX                         ; 00584c3c
    JL 0x00584c45                       ; 00584c3e
        ;   XREF to: 00584c45 (CONDITIONAL_JUMP)  ; LAB_00584c45
    POP EBP                             ; 00584c40
    POP EDI                             ; 00584c41
    POP ESI                             ; 00584c42
    POP EBX                             ; 00584c43
    RET                                 ; 00584c44
    PUSH EBP                            ; 00584c45
        ;   Label: LAB_00584c45
    PUSH ESI                            ; 00584c46
    INC EBX                             ; 00584c47
    CALL FUN_004904d0                   ; 00584c48
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004904d0()
    ADD ESP,0x8                         ; 00584c4d
    ADD ESI,0x38                        ; 00584c50
    JMP 0x00584c34                      ; 00584c53
        ;   XREF to: 00584c34 (UNCONDITIONAL_JUMP)  ; LAB_00584c34

