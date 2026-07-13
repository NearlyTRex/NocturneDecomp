; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00534820(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00409fc0
;   FUN_00534ad0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00534820
        ;   Label: FUN_00534820
    PUSH EDX                            ; 00534824
    CALL FUN_00409fc0                   ; 00534825
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fc0()
    ADD ESP,0x4                         ; 0053482a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0053482d
    PUSH ECX                            ; 00534831
    CALL FUN_00534ad0                   ; 00534832
        ;   XREF to: 00534ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00534ad0()
    ADD ESP,0x4                         ; 00534837
    LEA EAX,[EAX]                       ; 0053483a

