; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a7f3c(void)
;
;
; XREF[12]:
;   FUN_005a35c0 at 005a35c0
;   FUN_005a48e0 at 005a49bf
;   FUN_005a5628 at 005a5628
;   FUN_005a81b8 at 005a81d7
;   FUN_005a92c0 at 005a92c0
;   FUN_005a92f8 at 005a92f8
;   FUN_005ae418 at 005ae41d
;   FUN_005ae464 at 005ae464
;   FUN_005aefe0 at 005aefe1
;   FUN_005afe80 at 005afeb3
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_02d252bc
;
; *****************************************************************************

section .text

    MOV EAX,[0x02d252bc]                ; 005a7f3c | DAT_02d252bc
        ;   Label: FUN_005a7f3c
    LEA EAX,[EAX]                       ; 005a7f41

