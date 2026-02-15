; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont *this_ptr,int char_code)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_code
;
; XREF[37]:
;   core_game.cpp_CGame_displayActStats_FUN_004e3800 at 004e3b05
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3f83
;   core_game.cpp_CGame_renderOverlay_FUN_004d8040 at 004d81e3
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e4131
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0 at 004d89fd
;   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 at 00500828
;   core_main.c_finalizeGameSystems_FUN_00508570 at 005085b4
;   core_main.c_initializeGameSystems_FUN_00507a60 at 0050809e
;   core_main.c_showPromoScreen_FUN_00508340 at 00508353
;   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 at 00510974
;   ... and 27 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004d01d0
        ;   Label: engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
    TEST EAX,EAX                        ; 004d01d4
    JL 0x004d01df                       ; 004d01d6
        ;   XREF to: 004d01df (CONDITIONAL_JUMP)  ; LAB_004d01df
    CMP EAX,0x100                       ; 004d01d8
    JL 0x004d01e2                       ; 004d01dd
        ;   XREF to: 004d01e2 (CONDITIONAL_JUMP)  ; LAB_004d01e2
    XOR EAX,EAX                         ; 004d01df
        ;   Label: LAB_004d01df
    RET                                 ; 004d01e1
    MOV EDX,dword ptr [ESP + 0x4]       ; 004d01e2
        ;   Label: LAB_004d01e2
    SHL EAX,0x2                         ; 004d01e6
    ADD EDX,EAX                         ; 004d01e9
    MOV EAX,dword ptr [EDX + 0x2968]    ; 004d01eb
    ADD EAX,dword ptr [EDX + 0x2d68]    ; 004d01f1
    RET                                 ; 004d01f7

