; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df5c0(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004b93e0 at 004b9597
;
; Referenced Globals:
;   undefined4 DAT_01c6cef0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004df5c0
        ;   Label: FUN_004df5c0
    XOR DL,DL                           ; 004df5c4
    MOV byte ptr [EAX + 0x1c6cef0],DL   ; 004df5c6 | DAT_01c6cef0
    RET                                 ; 004df5cc

