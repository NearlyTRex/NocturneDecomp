; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00561f60(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_00562240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00561f60
        ;   Label: FUN_00561f60
    PUSH EDX                            ; 00561f64
    CALL FUN_00408a80                   ; 00561f65
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 00561f6a
    MOV ECX,dword ptr [ESP + 0x4]       ; 00561f6d
    PUSH ECX                            ; 00561f71
    CALL FUN_00562240                   ; 00561f72
        ;   XREF to: 00562240 (UNCONDITIONAL_CALL)  ; undefined FUN_00562240()
    ADD ESP,0x4                         ; 00561f77
    LEA EAX,[EAX]                       ; 00561f7a
    RET                                 ; 00561f80

