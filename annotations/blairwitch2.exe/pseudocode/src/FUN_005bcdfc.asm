; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005bcdfc(void)
;
;
; XREF[12]:
;   FUN_005b8490 at 005b8490
;   FUN_005b9690 at 005b976f
;   FUN_005ba358 at 005ba358
;   FUN_005bd078 at 005bd097
;   FUN_005be180 at 005be180
;   FUN_005be1b8 at 005be1b8
;   FUN_005c32a8 at 005c32ad
;   FUN_005c32f4 at 005c32f4
;   FUN_005c4070 at 005c4071
;   FUN_005c4df0 at 005c4e23
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_0268017c
;
; *****************************************************************************

section .text

    MOV EAX,[0x0268017c]                ; 005bcdfc | DAT_0268017c
        ;   Label: FUN_005bcdfc
    LEA EAX,[EAX]                       ; 005bce01

