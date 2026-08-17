; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ColorConversionFunc * __cdecl cockpit_ckptutil_c_getColorConversionFunction_FUN_0042d130(void)
;
;
; XREF[11]:
;   cockpit_ckptutil.c_blitDualModeSprite_FUN_0042e060 at 0042e088
;   cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_0042e290 at 0042e2d8
;   cockpit_ckptutil.c_blitRectangleClipped_FUN_0042db50 at 0042db98
;   cockpit_ckptutil.c_blitSimpleSprite_FUN_0042df00 at 0042df38
;   cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_0042d900 at 0042d95f
;   cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_0042e520 at 0042e52b
;   cockpit_ckptutil.c_blitSpanBasedSprite_FUN_0042d6c0 at 0042d717
;   cockpit_ckptutil.c_blitUnifiedSprite_FUN_0042dcc0 at 0042dcfc
;   cockpit_ckptutil.c_blitVerticalColumn_FUN_0042e3d0 at 0042e408
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_004f4170 at 004f41bf
;   ... and 1 more
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005b7624]      ; 0042d130 | g_BitsPerPixel
        ;   Label: cockpit_ckptutil.c_getColorConversionFunction_FUN_0042d130
    CMP EDX,0x8                         ; 0042d136
    JZ 0x0042d150                       ; 0042d139
        ;   XREF to: 0042d150 (CONDITIONAL_JUMP)
    CMP EDX,0x10                        ; 0042d13b
    JZ 0x0042d170                       ; 0042d13e
        ;   XREF to: 0042d170 (CONDITIONAL_JUMP)
    MOV EAX,0x42ceca                    ; 0042d140
    RET                                 ; 0042d145

