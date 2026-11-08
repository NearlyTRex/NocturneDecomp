; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408c40(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006236b8
;
; Called Functions:
;   FUN_0057d8d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c40
        ;   Label: FUN_00408c40
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408c41
    LEA EAX,[EDX + 0x20]                ; 00408c45
    PUSH EAX                            ; 00408c48
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408c49
    PUSH ECX                            ; 00408c4d
    PUSH EDX                            ; 00408c4e
    MOV EBX,dword ptr [0x006236b8]      ; 00408c4f | DAT_006236b8
    PUSH EBX                            ; 00408c55
    CALL FUN_0057d8d0                   ; 00408c56
        ;   XREF to: 0057d8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d8d0()
    ADD ESP,0x10                        ; 00408c5b
    POP EBX                             ; 00408c5e
    RET                                 ; 00408c5f

