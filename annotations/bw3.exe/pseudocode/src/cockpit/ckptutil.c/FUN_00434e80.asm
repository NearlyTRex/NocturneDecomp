; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; code * cockpit_ckptutil_c_FUN_00434e80(void)
;
;
; XREF[8]:
;   cockpit_ckptutil.c_blitDualModeSprite_FUN_00435cb0 at 00435cd8
;   cockpit_ckptutil.c_blitRectangleClipped_FUN_0043579c at 004357e8
;   cockpit_ckptutil.c_blitSimpleSprite_FUN_00435b50 at 00435b88
;   cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_0043554e at 004355af
;   cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00436170 at 0043617b
;   cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00435310 at 00435367
;   cockpit_ckptutil.c_blitUnifiedSprite_FUN_0043590c at 0043594c
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0050f440 at 0050f486
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6e2a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005fba20]      ; 00434e80 | DAT_005fba20
        ;   Label: cockpit_ckptutil.c_FUN_00434e80
    CMP EDX,0x8                         ; 00434e86
    JZ 0x00434ea0                       ; 00434e89
        ;   XREF to: 00434ea0 (CONDITIONAL_JUMP)  ; LAB_00434ea0
    CMP EDX,0x10                        ; 00434e8b
    JZ 0x00434ec0                       ; 00434e8e
        ;   XREF to: 00434ec0 (CONDITIONAL_JUMP)  ; LAB_00434ec0
    MOV EAX,0x434c1a                    ; 00434e90
    RET                                 ; 00434e95
    CMP dword ptr [0x01c6e2a0],0x0      ; 00434ea0 | DAT_01c6e2a0
        ;   Label: LAB_00434ea0
    JZ 0x00434eaf                       ; 00434ea7
        ;   XREF to: 00434eaf (CONDITIONAL_JUMP)  ; LAB_00434eaf
    MOV EAX,0x434d42                    ; 00434ea9
    RET                                 ; 00434eae
    MOV EAX,0x434c48                    ; 00434eaf
        ;   Label: LAB_00434eaf
    RET                                 ; 00434eb4
    MOV EAX,0x434e50                    ; 00434ec0
        ;   Label: LAB_00434ec0
    RET                                 ; 00434ec5

