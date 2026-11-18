; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ColorConversionFunc * __cdecl cockpit_ckptutil_c_getColorConversionFunction_FUN_00434e80(void)
;
;
; XREF[10]:
;   cockpit_ckptutil.c_blitDualModeSprite_FUN_00435cb0 at 00435cd8
;   cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_00435ee0 at 00435f28
;   cockpit_ckptutil.c_blitRectangleClipped_FUN_004357a0 at 004357e8
;   cockpit_ckptutil.c_blitSimpleSprite_FUN_00435b50 at 00435b88
;   cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00435550 at 004355af
;   cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00436170 at 0043617b
;   cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00435310 at 00435367
;   cockpit_ckptutil.c_blitUnifiedSprite_FUN_00435910 at 0043594c
;   cockpit_ckptutil.c_blitVerticalColumn_FUN_00436020 at 00436058
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0050f440 at 0050f486
;
; Referenced Globals:
;   int g_INT_005fba20 = 0x8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005fba20]      ; 00434e80 | g_INT_005fba20
        ;   Label: cockpit_ckptutil.c_getColorConversionFunction_FUN_00434e80
    CMP EDX,0x8                         ; 00434e86
    JZ 0x00434ea0                       ; 00434e89
        ;   XREF to: 00434ea0 (CONDITIONAL_JUMP)
    CMP EDX,0x10                        ; 00434e8b
    JZ 0x00434ec0                       ; 00434e8e
        ;   XREF to: 00434ec0 (CONDITIONAL_JUMP)

