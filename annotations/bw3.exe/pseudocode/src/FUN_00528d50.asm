; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00528d50(int param_1)
;
;
; XREF[2]:
;   FUN_00528d20 at 00528d26
;   FUN_00529410 at 00529422
;
; Called Functions:
;   FUN_00482010
;   FUN_00484f10
;   FUN_00528da0
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528d50
        ;   Label: FUN_00528d50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00528d51
    LEA EAX,[EBX + 0x34]                ; 00528d55
    PUSH EAX                            ; 00528d58
    CALL FUN_00482010                   ; 00528d59
        ;   XREF to: 00482010 (UNCONDITIONAL_CALL)  ; undefined FUN_00482010()
    ADD ESP,0x4                         ; 00528d5e
    PUSH EBX                            ; 00528d61
    CALL FUN_00528da0                   ; 00528d62
        ;   XREF to: 00528da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00528da0()
    MOV EDX,dword ptr [EBX + 0x24]      ; 00528d67
    ADD ESP,0x4                         ; 00528d6a
    TEST EDX,EDX                        ; 00528d6d
    JNZ 0x00528d87                      ; 00528d6f
        ;   XREF to: 00528d87 (CONDITIONAL_JUMP)  ; LAB_00528d87
    PUSH 0x1ed7020                      ; 00528d71
        ;   Label: LAB_00528d71
    MOV dword ptr [EBX + 0x20],0x0      ; 00528d76
    CALL FUN_00484f10                   ; 00528d7d
        ;   XREF to: 00484f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f10()
    ADD ESP,0x4                         ; 00528d82
    POP EBX                             ; 00528d85
    RET                                 ; 00528d86
    PUSH EDX                            ; 00528d87
        ;   Label: LAB_00528d87
    CALL FUN_005a3770                   ; 00528d88
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 00528d8d
    MOV dword ptr [EBX + 0x24],0x0      ; 00528d90
    JMP 0x00528d71                      ; 00528d97
        ;   XREF to: 00528d71 (UNCONDITIONAL_JUMP)  ; LAB_00528d71

