; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f9a50(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004f9a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9a50
        ;   Label: FUN_004f9a50
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f9a51
    PUSH EBX                            ; 004f9a55
    CALL FUN_004f9a70                   ; 004f9a56
        ;   XREF to: 004f9a70 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9a70()
    ADD ESP,0x4                         ; 004f9a5b
    MOV EAX,EBX                         ; 004f9a5e
    POP EBX                             ; 004f9a60
    RET                                 ; 004f9a61

