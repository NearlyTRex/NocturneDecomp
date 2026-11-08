; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fb1f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00547a50 at 00547a70
;
; Called Functions:
;   FUN_004fb210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb1f0
        ;   Label: FUN_004fb1f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fb1f1
    PUSH EBX                            ; 004fb1f5
    CALL FUN_004fb210                   ; 004fb1f6
        ;   XREF to: 004fb210 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb210()
    ADD ESP,0x4                         ; 004fb1fb
    MOV EAX,EBX                         ; 004fb1fe
    POP EBX                             ; 004fb200
    RET                                 ; 004fb201

