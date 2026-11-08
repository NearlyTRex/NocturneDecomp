; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408e90(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_0061c068
;
; Called Functions:
;   FUN_0055aef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408e90
        ;   Label: FUN_00408e90
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408e91
    LEA EAX,[EDX + 0x20]                ; 00408e95
    PUSH dword ptr [ESP + 0x10]         ; 00408e98
    PUSH EAX                            ; 00408e9c
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408e9d
    PUSH ECX                            ; 00408ea1
    PUSH EDX                            ; 00408ea2
    MOV EBX,dword ptr [0x0061c068]      ; 00408ea3 | DAT_0061c068
    PUSH EBX                            ; 00408ea9
    CALL FUN_0055aef0                   ; 00408eaa
        ;   XREF to: 0055aef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aef0()
    ADD ESP,0x14                        ; 00408eaf
    POP EBX                             ; 00408eb2
    RET                                 ; 00408eb3

