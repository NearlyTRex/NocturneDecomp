; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408e50(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061c068
;
; Called Functions:
;   FUN_0055ae50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408e50
        ;   Label: FUN_00408e50
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408e51
    LEA EAX,[EDX + 0x20]                ; 00408e55
    PUSH EAX                            ; 00408e58
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408e59
    PUSH ECX                            ; 00408e5d
    PUSH EDX                            ; 00408e5e
    MOV EBX,dword ptr [0x0061c068]      ; 00408e5f | DAT_0061c068
    PUSH EBX                            ; 00408e65
    CALL FUN_0055ae50                   ; 00408e66
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    ADD ESP,0x10                        ; 00408e6b
    POP EBX                             ; 00408e6e
    RET                                 ; 00408e6f

