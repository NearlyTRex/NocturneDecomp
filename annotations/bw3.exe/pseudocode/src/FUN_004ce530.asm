; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ce530(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004cc8d0 at 004cc8d5
;
; Called Functions:
;   FUN_004ce560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce530
        ;   Label: FUN_004ce530
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ce531
    PUSH EBX                            ; 004ce535
    CALL FUN_004ce560                   ; 004ce536
        ;   XREF to: 004ce560 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce560()
    ADD ESP,0x4                         ; 004ce53b
    MOV EAX,EBX                         ; 004ce53e
    POP EBX                             ; 004ce540
    RET                                 ; 004ce541

