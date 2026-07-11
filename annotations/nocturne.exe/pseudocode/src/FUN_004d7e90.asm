; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d7e90(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004c90e0 at 004c933c
;
; Called Functions:
;   FUN_004d7ea0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d7e90
        ;   Label: FUN_004d7e90
    PUSH EDX                            ; 004d7e94
    CALL FUN_004d7ea0                   ; 004d7e95
        ;   XREF to: 004d7ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d7ea0()
    ADD ESP,0x4                         ; 004d7e9a
    RET                                 ; 004d7e9d

