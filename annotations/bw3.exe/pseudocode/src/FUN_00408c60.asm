; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408c60(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006045f8
;
; Called Functions:
;   FUN_005609d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c60
        ;   Label: FUN_00408c60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408c61
    LEA EAX,[EDX + 0x20]                ; 00408c65
    PUSH EAX                            ; 00408c68
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408c69
    PUSH ECX                            ; 00408c6d
    PUSH EDX                            ; 00408c6e
    MOV EBX,dword ptr [0x006045f8]      ; 00408c6f | DAT_006045f8
    PUSH EBX                            ; 00408c75
    CALL FUN_005609d0                   ; 00408c76
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609d0()
    ADD ESP,0x10                        ; 00408c7b
    POP EBX                             ; 00408c7e
    RET                                 ; 00408c7f

