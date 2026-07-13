; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00571dc7(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00571df8
;   FUN_00571ee0
;
; *****************************************************************************

section .text

    PUSH 0x204                          ; 00571dc7
        ;   Label: FUN_00571dc7
    CALL FUN_00571ee0                   ; 00571dcc
        ;   XREF to: 00571ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00571ee0()
    ADD ESP,0x4                         ; 00571dd1
    TEST EAX,EAX                        ; 00571dd4
    JNZ 0x00571dde                      ; 00571dd6
        ;   XREF to: 00571dde (CONDITIONAL_JUMP)  ; LAB_00571dde
    MOV EAX,0xffffffff                  ; 00571dd8
    RET                                 ; 00571ddd
    PUSH 0x1                            ; 00571dde
        ;   Label: LAB_00571dde
    LEA EDX,[EAX + 0x204]               ; 00571de0
    PUSH EDX                            ; 00571de6
    PUSH EAX                            ; 00571de7
    MOV EDX,dword ptr [ESP + 0x10]      ; 00571de8
    PUSH EDX                            ; 00571dec
    CALL FUN_00571df8                   ; 00571ded
        ;   XREF to: 00571df8 (UNCONDITIONAL_CALL)  ; undefined FUN_00571df8()
    ADD ESP,0x10                        ; 00571df2
    XOR EAX,EAX                         ; 00571df5
    RET                                 ; 00571df7

