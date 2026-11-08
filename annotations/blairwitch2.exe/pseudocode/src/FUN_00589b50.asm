; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00589b50(int param_1)
;
;
; XREF[4]:
;   FUN_00410940 at 00410945
;   FUN_0057e550 at 0057e56b
;   FUN_0059ccc0 at 0059ccc5
;   FUN_005a6b90 at 005a6b95
;
; Called Functions:
;   FUN_00408a80
;   FUN_0044fd00
;   FUN_0058a2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589b50
        ;   Label: FUN_00589b50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00589b51
    PUSH EBX                            ; 00589b55
    CALL FUN_00408a80                   ; 00589b56
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 00589b5b
    LEA EAX,[EBX + 0x2b4]               ; 00589b5e
    PUSH EAX                            ; 00589b64
    CALL FUN_0044fd00                   ; 00589b65
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 00589b6a
    PUSH EBX                            ; 00589b6d
    CALL FUN_0058a2f0                   ; 00589b6e
        ;   XREF to: 0058a2f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058a2f0()
    ADD ESP,0x4                         ; 00589b73
    MOV dword ptr [EBX + 0x6d0],0x0     ; 00589b76
    POP EBX                             ; 00589b80
    RET                                 ; 00589b81

