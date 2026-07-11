; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005281f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004d12e0 at 004d20c0
;
; Called Functions:
;   FUN_005280c0
;   FUN_005281a0
;   FUN_005281b0
;
; *****************************************************************************

section .text

    CALL FUN_005281b0                   ; 005281f0
        ;   XREF to: 005281b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005281b0()
        ;   Label: FUN_005281f0
    PUSH EAX                            ; 005281f5
    MOV EDX,dword ptr [ESP + 0x8]       ; 005281f6
    PUSH EDX                            ; 005281fa
    CALL FUN_005281a0                   ; 005281fb
        ;   XREF to: 005281a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005281a0()
    PUSH EAX                            ; 00528200
    CALL FUN_005280c0                   ; 00528201
        ;   XREF to: 005280c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005280c0()
    ADD ESP,0xc                         ; 00528206
    RET                                 ; 00528209

