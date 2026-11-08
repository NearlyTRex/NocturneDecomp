; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00442f90(undefined4 param_1)
;
;
; XREF[5]:
;   FUN_00444210 at 00444222
;   FUN_00444270 at 00444282
;   FUN_00453610 at 00453bc2
;   FUN_004d6420 at 004d67f8
;   FUN_004d6990 at 004d6d4b
;
; Called Functions:
;   FUN_00442fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442f90
        ;   Label: FUN_00442f90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00442f91
    PUSH EBX                            ; 00442f95
    CALL FUN_00442fb0                   ; 00442f96
        ;   XREF to: 00442fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00442fb0()
    ADD ESP,0x4                         ; 00442f9b
    MOV EAX,EBX                         ; 00442f9e
    POP EBX                             ; 00442fa0
    RET                                 ; 00442fa1

