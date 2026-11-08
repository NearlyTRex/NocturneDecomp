; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 FUN_004dfe60(undefined4 param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dfe60
        ;   Label: FUN_004dfe60
    MOV EDX,dword ptr [ESP + 0xc]       ; 004dfe61
    XOR EAX,EAX                         ; 004dfe65
    XOR BL,BL                           ; 004dfe67
    MOV AL,byte ptr [EDX + 0x1c37790]   ; 004dfe69
    MOV byte ptr [EDX + 0x1c37790],BL   ; 004dfe6f
    POP EBX                             ; 004dfe75
    RET                                 ; 004dfe76

