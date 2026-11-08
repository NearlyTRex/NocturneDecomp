; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fa8c0(undefined4 param_1)
;
;
; XREF[9]:
;   FUN_0050a530 at 0050a573
;   FUN_005274e0 at 00527523
;   FUN_00599030 at 00599045
;   FUN_005990d0 at 005990e5
;   FUN_00599e40 at 00599e59
;   FUN_0059a970 at 0059a989
;   FUN_0059b540 at 0059b559
;   FUN_0059df60 at 0059df75
;   FUN_005a0910 at 005a0925
;
; Called Functions:
;   FUN_004fa8e0
;   FUN_004fb180
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fa8c0
        ;   Label: FUN_004fa8c0
    PUSH EDX                            ; 004fa8c4
    CALL FUN_004fa8e0                   ; 004fa8c5
        ;   XREF to: 004fa8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa8e0()
    ADD ESP,0x4                         ; 004fa8ca
    PUSH 0x0                            ; 004fa8cd
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fa8cf
    PUSH ECX                            ; 004fa8d3
    CALL FUN_004fb180                   ; 004fa8d4
        ;   XREF to: 004fb180 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb180()
    ADD ESP,0x8                         ; 004fa8d9
    RET                                 ; 004fa8dc

