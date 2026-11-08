; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd2a0(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004d0960 at 004d0b17
;
; Referenced Globals:
;   undefined4 DAT_01c50950
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004fd2a0
        ;   Label: FUN_004fd2a0
    XOR DL,DL                           ; 004fd2a4
    MOV byte ptr [EAX + 0x1c50950],DL   ; 004fd2a6 | DAT_01c50950
    RET                                 ; 004fd2ac

