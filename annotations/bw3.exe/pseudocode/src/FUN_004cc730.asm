; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004cc730(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5c4611                       ; 004cc730
        ;   Label: FUN_004cc730
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cc735
    PUSH EDX                            ; 004cc739
    CALL FUN_0040c790                   ; 004cc73a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004cc73f
    TEST EAX,EAX                        ; 004cc742
    JZ 0x004cc750                       ; 004cc744
        ;   XREF to: 004cc750 (CONDITIONAL_JUMP)  ; LAB_004cc750
    MOV EAX,0x2                         ; 004cc746
    LEA EAX,[EAX]                       ; 004cc74b
    MOV ECX,ECX                         ; 004cc74e
    RET                                 ; 004cc750
        ;   Label: LAB_004cc750

