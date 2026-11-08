; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a7b70(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00447ea0 at 00447f64
;
; Called Functions:
;   FUN_004a7bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7b70
        ;   Label: FUN_004a7b70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a7b71
    PUSH EBX                            ; 004a7b75
    CALL FUN_004a7bb0                   ; 004a7b76
        ;   XREF to: 004a7bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7bb0()
    ADD ESP,0x4                         ; 004a7b7b
    MOV EAX,EBX                         ; 004a7b7e
    POP EBX                             ; 004a7b80
    RET                                 ; 004a7b81

