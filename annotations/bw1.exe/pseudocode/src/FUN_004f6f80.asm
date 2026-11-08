; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f6f80(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004ea980 at 004ea9aa
;
; Called Functions:
;   FUN_004f6fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6f80
        ;   Label: FUN_004f6f80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f6f81
    PUSH EBX                            ; 004f6f85
    CALL FUN_004f6fa0                   ; 004f6f86
        ;   XREF to: 004f6fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6fa0()
    ADD ESP,0x4                         ; 004f6f8b
    MOV EAX,EBX                         ; 004f6f8e
    POP EBX                             ; 004f6f90
    RET                                 ; 004f6f91

