; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00564486(undefined4 param_1)
;
;
; XREF[34]:
;   FUN_00409ea0 at 00409ee0
;   FUN_00435210 at 00435222
;   FUN_00438f30 at 00438f60
;   FUN_0043b7c0 at 0043b7df
;   FUN_0044adf0 at 0044ae05
;   FUN_00452f10 at 00452f1f
;   FUN_00453ff0 at 004540e6
;   FUN_004673a0 at 004673b7
;   FUN_004675e0 at 004675f4
;   FUN_00473b80 at 00473bb6
;   ... and 24 more
;
; Called Functions:
;   FUN_00564494
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00564486
        ;   Label: FUN_00564486
    PUSH EDX                            ; 0056448a
    CALL FUN_00564494                   ; 0056448b
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00564490
    RET                                 ; 00564493

