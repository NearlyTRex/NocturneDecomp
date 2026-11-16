; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ColorConversionFunc * __cdecl cockpit_ckptutil_c_getColorConversionFunction_FUN_0042c410(void)
;
;
; XREF[10]:
;   cockpit_ckptutil.c_FUN_0042d5c0 at 0042d608
;   cockpit_ckptutil.c_FUN_0042d700 at 0042d738
;   cockpit_ckptutil.c_blitDualModeSprite_FUN_0042d390 at 0042d3b8
;   cockpit_ckptutil.c_blitRectangleClipped_FUN_0042ce80 at 0042cec8
;   cockpit_ckptutil.c_blitSimpleSprite_FUN_0042d230 at 0042d268
;   cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_0042cc30 at 0042cc8f
;   cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_0042d850 at 0042d85b
;   cockpit_ckptutil.c_blitSpanBasedSprite_FUN_0042c9f0 at 0042ca47
;   cockpit_ckptutil.c_blitUnifiedSprite_FUN_0042cff0 at 0042d02c
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_00516410 at 00516456
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x006141c0]      ; 0042c410 | DAT_006141c0
        ;   Label: cockpit_ckptutil.c_getColorConversionFunction_FUN_0042c410
    CMP EDX,0x8                         ; 0042c416
    JZ 0x0042c430                       ; 0042c419
        ;   XREF to: 0042c430 (CONDITIONAL_JUMP)
    CMP EDX,0x10                        ; 0042c41b
    JZ 0x0042c450                       ; 0042c41e
        ;   XREF to: 0042c450 (CONDITIONAL_JUMP)

