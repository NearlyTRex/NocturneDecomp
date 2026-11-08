; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00459cc0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00459ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459cc0
        ;   Label: FUN_00459cc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00459cc1
    PUSH EBX                            ; 00459cc5
    CALL FUN_00459ce0                   ; 00459cc6
        ;   XREF to: 00459ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00459ce0()
    ADD ESP,0x4                         ; 00459ccb
    MOV EAX,EBX                         ; 00459cce
    POP EBX                             ; 00459cd0
    RET                                 ; 00459cd1

