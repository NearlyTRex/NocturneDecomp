; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004edad0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004b13a0 at 004b13fc
;
; Referenced Globals:
;   undefined4 DAT_01d76c38
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edad0
        ;   Label: FUN_004edad0
    MOV [0x01d76c38],EAX                ; 004edad4 | DAT_01d76c38
    RET                                 ; 004edad9

