; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00521bc0(int param_1)
;
;
; XREF[1]:
;   FUN_00509bd0 at 00509bf6
;
; Called Functions:
;   FUN_004667e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00521bc0
        ;   Label: FUN_00521bc0
    ADD EAX,0x8                         ; 00521bc4
    PUSH EAX                            ; 00521bc7
    CALL FUN_004667e0                   ; 00521bc8
        ;   XREF to: 004667e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004667e0()
    ADD ESP,0x4                         ; 00521bcd
    ADD EAX,0x398                       ; 00521bd0
    PUSH EAX                            ; 00521bd5
    CALL FUN_004667e0                   ; 00521bd6
        ;   XREF to: 004667e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004667e0()
    ADD ESP,0x4                         ; 00521bdb
    ADD EAX,0x398                       ; 00521bde
    PUSH EAX                            ; 00521be3
    CALL FUN_004667e0                   ; 00521be4
        ;   XREF to: 004667e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004667e0()
    SUB EAX,0x738                       ; 00521be9
    ADD ESP,0x4                         ; 00521bee
    MOV dword ptr [EAX],0x0             ; 00521bf1
    RET                                 ; 00521bf7

