; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; code * cockpit_ckptutil_c_FUN_00437270(void)
;
;
; XREF[8]:
;   cockpit_ckptutil.c_FUN_0043793e at 0043799f
;   cockpit_ckptutil.c_FUN_00437b8c at 00437bd8
;   cockpit_ckptutil.c_FUN_00437cfc at 00437d3c
;   cockpit_ckptutil.c_blitDualModeSprite_FUN_004380a0 at 004380c8
;   cockpit_ckptutil.c_blitSimpleSprite_FUN_00437f40 at 00437f78
;   cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00438560 at 0043856b
;   cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00437700 at 00437757
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_00537760 at 005377a6
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c51d00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0061b4a0]      ; 00437270 | DAT_0061b4a0
        ;   Label: cockpit_ckptutil.c_FUN_00437270
    CMP EDX,0x8                         ; 00437276
    JZ 0x00437290                       ; 00437279
        ;   XREF to: 00437290 (CONDITIONAL_JUMP)  ; LAB_00437290
    CMP EDX,0x10                        ; 0043727b
    JZ 0x004372b0                       ; 0043727e
        ;   XREF to: 004372b0 (CONDITIONAL_JUMP)  ; LAB_004372b0
    MOV EAX,0x43700a                    ; 00437280
    RET                                 ; 00437285
    CMP dword ptr [0x01c51d00],0x0      ; 00437290 | DAT_01c51d00
        ;   Label: LAB_00437290
    JZ 0x0043729f                       ; 00437297
        ;   XREF to: 0043729f (CONDITIONAL_JUMP)  ; LAB_0043729f
    MOV EAX,0x437132                    ; 00437299
    RET                                 ; 0043729e
    MOV EAX,0x437038                    ; 0043729f
        ;   Label: LAB_0043729f
    RET                                 ; 004372a4
    MOV EAX,0x437240                    ; 004372b0
        ;   Label: LAB_004372b0
    RET                                 ; 004372b5

