; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b1c10(int param_1)
;
;
; Called Functions:
;   FUN_0041da00
;   FUN_00468860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1c10
        ;   Label: FUN_004b1c10
    ADD EAX,0x4                         ; 004b1c14
    PUSH EAX                            ; 004b1c17
    CALL FUN_00468860                   ; 004b1c18
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 004b1c1d
    ADD EAX,0x17c                       ; 004b1c20
    PUSH EAX                            ; 004b1c25
    CALL FUN_0041da00                   ; 004b1c26
        ;   XREF to: 0041da00 (UNCONDITIONAL_CALL)  ; undefined FUN_0041da00()
    ADD ESP,0x4                         ; 004b1c2b
    MOV dword ptr [EAX + 0x25c],0x0     ; 004b1c2e
    SUB EAX,0x180                       ; 004b1c38
    RET                                 ; 004b1c3d

