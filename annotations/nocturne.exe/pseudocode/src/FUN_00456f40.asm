; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00456f40(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004672a0 at 004672fb
;
; Called Functions:
;   FUN_00457060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456f40
        ;   Label: FUN_00456f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00456f41
    PUSH EBX                            ; 00456f45
    CALL FUN_00457060                   ; 00456f46
        ;   XREF to: 00457060 (UNCONDITIONAL_CALL)  ; undefined FUN_00457060()
    ADD ESP,0x4                         ; 00456f4b
    MOV EAX,EBX                         ; 00456f4e
    POP EBX                             ; 00456f50
    RET                                 ; 00456f51

