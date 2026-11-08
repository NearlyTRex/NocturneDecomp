; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df5b0(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004b93e0 at 004b9422
;
; Referenced Globals:
;   undefined4 DAT_01c6cef0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004df5b0
        ;   Label: FUN_004df5b0
    MOV byte ptr [EAX + 0x1c6cef0],0x1  ; 004df5b4 | DAT_01c6cef0
    RET                                 ; 004df5bb

