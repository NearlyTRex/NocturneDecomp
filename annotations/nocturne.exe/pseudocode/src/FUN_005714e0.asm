; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005714e0(void)
;
;
; XREF[1]:
;   FUN_0056fb98 at 0056fbdb
;
; Referenced Globals:
;   undefined4 DAT_005c20d0
;
; Called Functions:
;   FUN_0057146c
;
; *****************************************************************************

section .text

    CALL FUN_0057146c                   ; 005714e0
        ;   XREF to: 0057146c (UNCONDITIONAL_CALL)  ; undefined FUN_0057146c()
        ;   Label: FUN_005714e0
    MOV EAX,[0x005c20d0]                ; 005714e5 | DAT_005c20d0
    RET                                 ; 005714ea

