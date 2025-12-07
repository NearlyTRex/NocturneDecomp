; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont * font, int char_code)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font
; int              Stack[0x8]:4   char_code
;
; XREF[7]:
;   cockpit_drawsurf.cpp_CDrawSurface_getCharWidth_FUN_00489ca0 at 00489cb3
;   core_game.cpp_CGame_renderOverlay_FUN_004d8040 at 004d80db
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0 at 004d8a13
;   core_script.cpp_CScript_unk50_FUN_00566660 at 00566679
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 at 004cff0d
;   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850 at 004d0d08
;   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 at 004a67fb
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004d01a0
        ;   Label: engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
    TEST EAX,EAX                        ; 004d01a4
    JL 0x004d01af                       ; 004d01a6 | LAB_004d01af
        ;   XREF to: 004d01af (CONDITIONAL_JUMP)
    CMP EAX,0x100                       ; 004d01a8
    JL 0x004d01b2                       ; 004d01ad | LAB_004d01b2
        ;   XREF to: 004d01b2 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004d01af
        ;   Label: LAB_004d01af
    RET                                 ; 004d01b1
    MOV EDX,dword ptr [ESP + 0x4]       ; 004d01b2
        ;   Label: LAB_004d01b2
    SHL EAX,0x2                         ; 004d01b6
    ADD EAX,EDX                         ; 004d01b9
    MOV EAX,dword ptr [EAX + 0x2568]    ; 004d01bb
    RET                                 ; 004d01c1

