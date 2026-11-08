; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a32c0(int param_1)
;
;
; XREF[1]:
;   FUN_004a3570 at 004a35c2
;
; Called Functions:
;   FUN_00480d40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a32c0
        ;   Label: FUN_004a32c0
    PUSH 0x0                            ; 004a32c4
    ADD EAX,0x148                       ; 004a32c6
    PUSH EAX                            ; 004a32cb
    CALL FUN_00480d40                   ; 004a32cc
        ;   XREF to: 00480d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d40()
    ADD ESP,0x8                         ; 004a32d1
    SUB EAX,0x148                       ; 004a32d4
    RET                                 ; 004a32d9

