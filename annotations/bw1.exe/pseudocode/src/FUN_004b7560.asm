; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7560(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7560
        ;   Label: FUN_004b7560
    PUSH EDX                            ; 004b7564
    CALL FUN_00532130                   ; 004b7565
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; undefined FUN_00532130()
    ADD ESP,0x4                         ; 004b756a
    MOV dword ptr [EAX + 0x3c],0x600004 ; 004b756d
    RET                                 ; 004b7574

