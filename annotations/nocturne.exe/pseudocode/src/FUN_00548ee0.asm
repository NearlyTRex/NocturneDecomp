; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00548ee0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004e98f0 at 004e98fc
;
; Called Functions:
;   FUN_00549110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548ee0
        ;   Label: FUN_00548ee0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00548ee1
    PUSH EBX                            ; 00548ee5
    CALL FUN_00549110                   ; 00548ee6
        ;   XREF to: 00549110 (UNCONDITIONAL_CALL)  ; undefined FUN_00549110()
    ADD ESP,0x4                         ; 00548eeb
    MOV EAX,EBX                         ; 00548eee
    POP EBX                             ; 00548ef0
    RET                                 ; 00548ef1

