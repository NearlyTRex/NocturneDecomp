; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408c80(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006045f8
;
; Called Functions:
;   FUN_00560a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c80
        ;   Label: FUN_00408c80
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408c81
    LEA EAX,[EDX + 0x20]                ; 00408c85
    PUSH EAX                            ; 00408c88
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408c89
    PUSH ECX                            ; 00408c8d
    PUSH EDX                            ; 00408c8e
    MOV EBX,dword ptr [0x006045f8]      ; 00408c8f | DAT_006045f8
    PUSH EBX                            ; 00408c95
    CALL FUN_00560a00                   ; 00408c96
        ;   XREF to: 00560a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00560a00()
    ADD ESP,0x10                        ; 00408c9b
    POP EBX                             ; 00408c9e
    RET                                 ; 00408c9f

