; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c50cc(void)
;
;
; XREF[12]:
;   FUN_005c0840 at 005c0840
;   FUN_005c1a70 at 005c1b4f
;   FUN_005c2738 at 005c2738
;   FUN_005c5348 at 005c5367
;   FUN_005c6450 at 005c6450
;   FUN_005c6488 at 005c6488
;   FUN_005cb5a8 at 005cb5ad
;   FUN_005cb5f4 at 005cb5f4
;   FUN_005cc370 at 005cc371
;   FUN_005cd0f0 at 005cd123
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_02c9f06c
;
; *****************************************************************************

section .text

    MOV EAX,[0x02c9f06c]                ; 005c50cc | DAT_02c9f06c
        ;   Label: FUN_005c50cc
    LEA EAX,[EAX]                       ; 005c50d1

