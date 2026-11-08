; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005cd0cc(void)
;
;
; XREF[1]:
;   FUN_005cb9c0 at 005cb9f9
;
; Referenced Globals:
;   undefined4 DAT_00626ae0
;
; Called Functions:
;   FUN_005cd04c
;
; *****************************************************************************

section .text

    CALL FUN_005cd04c                   ; 005cd0cc
        ;   XREF to: 005cd04c (UNCONDITIONAL_CALL)  ; undefined FUN_005cd04c()
        ;   Label: FUN_005cd0cc
    MOV EAX,[0x00626ae0]                ; 005cd0d1 | DAT_00626ae0
    RET                                 ; 005cd0d6

