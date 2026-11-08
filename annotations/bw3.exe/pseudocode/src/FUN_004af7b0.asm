; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004af7b0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0045a8d0 at 0045a8f6
;
; Called Functions:
;   FUN_004b0480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af7b0
        ;   Label: FUN_004af7b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004af7b1
    PUSH EBX                            ; 004af7b5
    CALL FUN_004b0480                   ; 004af7b6
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0480()
    ADD ESP,0x4                         ; 004af7bb
    MOV EAX,EBX                         ; 004af7be
    POP EBX                             ; 004af7c0
    RET                                 ; 004af7c1

