; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; code * cockpit_ckptutil_c_FUN_0042c410(void)
;
;
; XREF[8]:
;   cockpit_ckptutil.c_FUN_0042cc2e at 0042cc8f
;   cockpit_ckptutil.c_FUN_0042ce7c at 0042cec8
;   cockpit_ckptutil.c_FUN_0042cfec at 0042d02c
;   cockpit_ckptutil.c_blitDualModeSprite_FUN_0042d390 at 0042d3b8
;   cockpit_ckptutil.c_blitSimpleSprite_FUN_0042d230 at 0042d268
;   cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_0042d850 at 0042d85b
;   cockpit_ckptutil.c_blitSpanBasedSprite_FUN_0042c9f0 at 0042ca47
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_00516410 at 00516456
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c38b40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x006141c0]      ; 0042c410 | DAT_006141c0
        ;   Label: cockpit_ckptutil.c_FUN_0042c410
    CMP EDX,0x8                         ; 0042c416
    JZ 0x0042c430                       ; 0042c419
        ;   XREF to: 0042c430 (CONDITIONAL_JUMP)  ; LAB_0042c430
    CMP EDX,0x10                        ; 0042c41b
    JZ 0x0042c450                       ; 0042c41e
        ;   XREF to: 0042c450 (CONDITIONAL_JUMP)  ; LAB_0042c450
    MOV EAX,0x42c1aa                    ; 0042c420
    RET                                 ; 0042c425
    CMP dword ptr [0x01c38b40],0x0      ; 0042c430 | DAT_01c38b40
        ;   Label: LAB_0042c430
    JZ 0x0042c43f                       ; 0042c437
        ;   XREF to: 0042c43f (CONDITIONAL_JUMP)  ; LAB_0042c43f
    MOV EAX,0x42c2d2                    ; 0042c439
    RET                                 ; 0042c43e
    MOV EAX,0x42c1d8                    ; 0042c43f
        ;   Label: LAB_0042c43f
    RET                                 ; 0042c444
    MOV EAX,0x42c3e0                    ; 0042c450
        ;   Label: LAB_0042c450
    RET                                 ; 0042c455

