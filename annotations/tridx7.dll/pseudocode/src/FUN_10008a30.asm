; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ulong * FUN_10008a30(void)
;
;
; XREF[15]:
;   FUN_10008b80 at 10008c10
;   FUN_10008c30 at 10008cae
;   FUN_10008cd0 at 10008d09
;   FUN_10008d20 at 10008d87
;   FUN_10008e80 at 10008ee8
;   FUN_10008fb0 at 10009112
;   FUN_100093f0 at 10009464
;   FUN_1000b6a0 at 1000b705
;   FUN_1000b720 at 1000b7be
;   FUN_1000b950 at 1000ba7b
;   ... and 5 more
;
; Called Functions:
;   __getptd
;
; *****************************************************************************

section .text

    CALL __getptd                       ; 10008a30
        ;   XREF to: 100077b0 (UNCONDITIONAL_CALL)  ; _ptiddata __getptd()
        ;   Label: FUN_10008a30
    ADD EAX,0xc                         ; 10008a35
    RET                                 ; 10008a38

