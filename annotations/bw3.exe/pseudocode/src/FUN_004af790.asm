; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004af790(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00459f50 at 0045a014
;
; Called Functions:
;   FUN_004af7d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af790
        ;   Label: FUN_004af790
    MOV EBX,dword ptr [ESP + 0x8]       ; 004af791
    PUSH EBX                            ; 004af795
    CALL FUN_004af7d0                   ; 004af796
        ;   XREF to: 004af7d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004af7d0()
    ADD ESP,0x4                         ; 004af79b
    MOV EAX,EBX                         ; 004af79e
    POP EBX                             ; 004af7a0
    RET                                 ; 004af7a1

