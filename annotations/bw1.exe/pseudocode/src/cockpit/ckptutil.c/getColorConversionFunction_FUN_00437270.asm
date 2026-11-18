; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ColorConversionFunc * __cdecl cockpit_ckptutil_c_getColorConversionFunction_FUN_00437270(void)
;
;
; XREF[10]:
;   cockpit_ckptutil.c_blitDualModeSprite_FUN_004380a0 at 004380c8
;   cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_004382d0 at 00438318
;   cockpit_ckptutil.c_blitRectangleClipped_FUN_00437b90 at 00437bd8
;   cockpit_ckptutil.c_blitSimpleSprite_FUN_00437f40 at 00437f78
;   cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00437940 at 0043799f
;   cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00438560 at 0043856b
;   cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00437700 at 00437757
;   cockpit_ckptutil.c_blitUnifiedSprite_FUN_00437d00 at 00437d3c
;   cockpit_ckptutil.c_blitVerticalColumn_FUN_00438410 at 00438448
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_00537760 at 005377a6
;
; Referenced Globals:
;   int g_INT_0061b4a0 = 0x8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0061b4a0]      ; 00437270 | g_INT_0061b4a0
        ;   Label: cockpit_ckptutil.c_getColorConversionFunction_FUN_00437270
    CMP EDX,0x8                         ; 00437276
    JZ 0x00437290                       ; 00437279
        ;   XREF to: 00437290 (CONDITIONAL_JUMP)
    CMP EDX,0x10                        ; 0043727b
    JZ 0x004372b0                       ; 0043727e
        ;   XREF to: 004372b0 (CONDITIONAL_JUMP)

