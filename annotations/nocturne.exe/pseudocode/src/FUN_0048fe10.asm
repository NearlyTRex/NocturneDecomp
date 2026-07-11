; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0048fe10(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0044c560 at 0044c624
;
; Called Functions:
;   FUN_0048fe50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fe10
        ;   Label: FUN_0048fe10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048fe11
    PUSH EBX                            ; 0048fe15
    CALL FUN_0048fe50                   ; 0048fe16
        ;   XREF to: 0048fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0048fe50()
    ADD ESP,0x4                         ; 0048fe1b
    MOV EAX,EBX                         ; 0048fe1e
    POP EBX                             ; 0048fe20
    RET                                 ; 0048fe21

