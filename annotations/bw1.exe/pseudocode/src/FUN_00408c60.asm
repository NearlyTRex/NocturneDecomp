; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408c60(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_006236b8
;
; Called Functions:
;   FUN_0057d940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c60
        ;   Label: FUN_00408c60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408c61
    LEA EAX,[EDX + 0x20]                ; 00408c65
    PUSH dword ptr [ESP + 0x10]         ; 00408c68
    PUSH EAX                            ; 00408c6c
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408c6d
    PUSH ECX                            ; 00408c71
    PUSH EDX                            ; 00408c72
    MOV EBX,dword ptr [0x006236b8]      ; 00408c73 | DAT_006236b8
    PUSH EBX                            ; 00408c79
    CALL FUN_0057d940                   ; 00408c7a
        ;   XREF to: 0057d940 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d940()
    ADD ESP,0x14                        ; 00408c7f
    POP EBX                             ; 00408c82
    RET                                 ; 00408c83

