; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460c26(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7648
;
; Called Functions:
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00460c26
        ;   Label: FUN_00460c26
    FCOM double ptr [EDI]               ; 00460c27
    CALL FUN_00563a30                   ; 00460c2a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [0x005b7648]        ; 00460c2f | DAT_005b7648
    RET                                 ; 00460c35

