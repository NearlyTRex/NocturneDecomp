; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004147b0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5cbc2c                       ; 004147b0
        ;   Label: FUN_004147b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004147b5
    PUSH EDX                            ; 004147b9
    CALL FUN_0040c840                   ; 004147ba
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004147bf
    TEST EAX,EAX                        ; 004147c2
    JZ 0x004147cb                       ; 004147c4
        ;   XREF to: 004147cb (CONDITIONAL_JUMP)  ; LAB_004147cb
    MOV EAX,0x2                         ; 004147c6
    RET                                 ; 004147cb
        ;   Label: LAB_004147cb

