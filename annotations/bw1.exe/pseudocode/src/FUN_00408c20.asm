; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408c20(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006236b8
;
; Called Functions:
;   FUN_0057d8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c20
        ;   Label: FUN_00408c20
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408c21
    LEA EAX,[EDX + 0x20]                ; 00408c25
    PUSH EAX                            ; 00408c28
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408c29
    PUSH ECX                            ; 00408c2d
    PUSH EDX                            ; 00408c2e
    MOV EBX,dword ptr [0x006236b8]      ; 00408c2f | DAT_006236b8
    PUSH EBX                            ; 00408c35
    CALL FUN_0057d8a0                   ; 00408c36
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d8a0()
    ADD ESP,0x10                        ; 00408c3b
    POP EBX                             ; 00408c3e
    RET                                 ; 00408c3f

