; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00584eb0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00421ca0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00584eb0
        ;   Label: FUN_00584eb0
    PUSH EDX                            ; 00584eb4
    CALL FUN_00421ca0                   ; 00584eb5
        ;   XREF to: 00421ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00421ca0()
    MOV dword ptr [EAX + 0x154],0x605f54 ; 00584eba
    ADD ESP,0x4                         ; 00584ec4
    MOV dword ptr [EAX + 0x678],0x0     ; 00584ec7
    RET                                 ; 00584ed1

