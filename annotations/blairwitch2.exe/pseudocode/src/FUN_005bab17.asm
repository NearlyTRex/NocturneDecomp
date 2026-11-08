; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bab17(void)
;
;
; Referenced Globals:
;   TerminatedCString s_pure_virtual_function_ca_005f1964
;   undefined2 DAT_0061f648
;
; Called Functions:
;   FUN_005bb007
;
; *****************************************************************************

section .text

    CMP word ptr [0x0061f648],0x0       ; 005bab17 | DAT_0061f648
        ;   Label: FUN_005bab17
    JZ 0x005bab22                       ; 005bab1f
        ;   XREF to: 005bab22 (CONDITIONAL_JUMP)  ; LAB_005bab22
    RET                                 ; 005bab21
    PUSH EBX                            ; 005bab22
        ;   Label: LAB_005bab22
    PUSH 0x1                            ; 005bab23
    MOV EBX,0x1                         ; 005bab25
    PUSH 0x5f1964                       ; 005bab2a | = "pure virtual function called!"
    MOV word ptr [0x0061f648],BX        ; 005bab2f | DAT_0061f648
    CALL FUN_005bb007                   ; 005bab36
        ;   XREF to: 005bb007 (UNCONDITIONAL_CALL)  ; undefined FUN_005bb007()
    ADD ESP,0x8                         ; 005bab3b
    POP EBX                             ; 005bab3e
    RET                                 ; 005bab3f

