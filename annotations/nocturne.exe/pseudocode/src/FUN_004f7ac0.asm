; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f7ac0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004f8b40 at 004f8b76
;
; Called Functions:
;   FUN_004f80e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7ac0
        ;   Label: FUN_004f7ac0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f7ac1
    PUSH EBX                            ; 004f7ac5
    CALL FUN_004f80e0                   ; 004f7ac6
        ;   XREF to: 004f80e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f80e0()
    ADD ESP,0x4                         ; 004f7acb
    MOV EAX,EBX                         ; 004f7ace
    POP EBX                             ; 004f7ad0
    RET                                 ; 004f7ad1

