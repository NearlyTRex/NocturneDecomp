; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408e70(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061c068
;
; Called Functions:
;   FUN_0055ae80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408e70
        ;   Label: FUN_00408e70
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408e71
    LEA EAX,[EDX + 0x20]                ; 00408e75
    PUSH EAX                            ; 00408e78
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408e79
    PUSH ECX                            ; 00408e7d
    PUSH EDX                            ; 00408e7e
    MOV EBX,dword ptr [0x0061c068]      ; 00408e7f | DAT_0061c068
    PUSH EBX                            ; 00408e85
    CALL FUN_0055ae80                   ; 00408e86
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae80()
    ADD ESP,0x10                        ; 00408e8b
    POP EBX                             ; 00408e8e
    RET                                 ; 00408e8f

