; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4c00(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_gun1_005f0478
;   TerminatedCString s_Bip01_gun12_005f0483
;
; Called Functions:
;   FUN_00540e80
;   FUN_00547890
;   FUN_005a4870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4c00
        ;   Label: FUN_005a4c00
    PUSH ESI                            ; 005a4c01
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a4c02
    PUSH ESI                            ; 005a4c06
    CALL FUN_005a4870                   ; 005a4c07
        ;   XREF to: 005a4870 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4870()
    ADD ESP,0x4                         ; 005a4c0c
    LEA EAX,[ESI + 0x2b4]               ; 005a4c0f
    PUSH EAX                            ; 005a4c15
    CALL FUN_00547890                   ; 005a4c16
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 005a4c1b
    PUSH 0x1                            ; 005a4c1e
    PUSH 0x5f0478                       ; 005a4c20 | = "Bip01 gun1"
    PUSH EAX                            ; 005a4c25
    MOV EBX,EAX                         ; 005a4c26
    CALL FUN_00540e80                   ; 005a4c28
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 005a4c2d
    PUSH 0x1                            ; 005a4c30
    PUSH 0x5f0483                       ; 005a4c32 | = "Bip01 gun12"
    PUSH EBX                            ; 005a4c37
    MOV dword ptr [ESI + 0x11858],EAX   ; 005a4c38
    CALL FUN_00540e80                   ; 005a4c3e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 005a4c43
    MOV dword ptr [ESI + 0x1185c],EAX   ; 005a4c46
    POP ESI                             ; 005a4c4c
    POP EBX                             ; 005a4c4d
    RET                                 ; 005a4c4e

