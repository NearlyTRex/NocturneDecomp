; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760(void)
;
;
; XREF[11]:
;   cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0 at 004326c8
;   cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_004328d0 at 00432918
;   cockpit_ckptutil.c_blitRectangleClipped_FUN_00432190 at 004321d8
;   cockpit_ckptutil.c_blitSimpleSprite_FUN_00432540 at 00432578
;   cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40 at 00431f9f
;   cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60 at 00432b6b
;   cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00431d00 at 00431d57
;   cockpit_ckptutil.c_blitUnifiedSprite_FUN_00432300 at 0043233c
;   cockpit_ckptutil.c_blitVerticalColumn_FUN_00432a10 at 00432a48
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30 at 0054ab76
;   ... and 1 more
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0067939c]      ; 00431760 | int g_BitsPerPixel
        ;   Label: cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
    CMP EDX,0x8                         ; 00431766
    JZ 0x00431780                       ; 00431769
        ;   XREF to: 00431780 (CONDITIONAL_JUMP)
    CMP EDX,0x10                        ; 0043176b
    JZ 0x004317a0                       ; 0043176e
        ;   XREF to: 004317a0 (CONDITIONAL_JUMP)

