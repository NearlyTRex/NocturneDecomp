; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414780(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414780
        ;   Label: FUN_00414780
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414781
    PUSH EBX                            ; 00414785
    CALL FUN_00408a80                   ; 00414786
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 0041478b
    LEA EAX,[EBX + 0x2b4]               ; 0041478e
    PUSH EAX                            ; 00414794
    CALL FUN_0044fd00                   ; 00414795
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 0041479a
    MOV dword ptr [EBX + 0x430],0x0     ; 0041479d
    POP EBX                             ; 004147a7
    RET                                 ; 004147a8

