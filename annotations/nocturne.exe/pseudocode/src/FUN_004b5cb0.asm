; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b5cb0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004ff2c0 at 00502f9c
;
; Called Functions:
;   FUN_004c3280
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004b5cb0
        ;   Label: FUN_004b5cb0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b5cb4
    PUSH EDX                            ; 004b5cb8
    ADD EAX,0x1f5a0                     ; 004b5cb9
    PUSH EAX                            ; 004b5cbe
    CALL FUN_004c3280                   ; 004b5cbf
        ;   XREF to: 004c3280 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3280()
    ADD ESP,0x8                         ; 004b5cc4
    RET                                 ; 004b5cc7

