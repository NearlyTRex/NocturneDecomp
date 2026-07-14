; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void ** FUN_1000bdf0(void)
;
;
; XREF[1]:
;   FUN_100098f0 at 100098f1
;
; Called Functions:
;   __getptd
;
; *****************************************************************************

section .text

    CALL __getptd                       ; 1000bdf0
        ;   XREF to: 100077b0 (UNCONDITIONAL_CALL)  ; _ptiddata __getptd()
        ;   Label: FUN_1000bdf0
    ADD EAX,0x54                        ; 1000bdf5
    RET                                 ; 1000bdf8

