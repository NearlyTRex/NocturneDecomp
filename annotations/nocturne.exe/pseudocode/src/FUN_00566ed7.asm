; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00566ed7(void)
;
;
; Referenced Globals:
;   TerminatedCString s_pure_virtual_function_ca_00598af4
;   undefined2 DAT_005c1f4c
;
; Called Functions:
;   FUN_0056af76
;
; *****************************************************************************

section .text

    CMP word ptr [0x005c1f4c],0x0       ; 00566ed7 | DAT_005c1f4c
        ;   Label: FUN_00566ed7
    JZ 0x00566ee2                       ; 00566edf
        ;   XREF to: 00566ee2 (CONDITIONAL_JUMP)  ; LAB_00566ee2
    RET                                 ; 00566ee1
    PUSH EBX                            ; 00566ee2
        ;   Label: LAB_00566ee2
    PUSH 0x1                            ; 00566ee3
    MOV EBX,0x1                         ; 00566ee5
    PUSH 0x598af4                       ; 00566eea | = "pure virtual function called!"
    MOV word ptr [0x005c1f4c],BX        ; 00566eef | DAT_005c1f4c
    CALL FUN_0056af76                   ; 00566ef6
        ;   XREF to: 0056af76 (UNCONDITIONAL_CALL)  ; undefined FUN_0056af76()
    ADD ESP,0x8                         ; 00566efb
    POP EBX                             ; 00566efe
    RET                                 ; 00566eff

