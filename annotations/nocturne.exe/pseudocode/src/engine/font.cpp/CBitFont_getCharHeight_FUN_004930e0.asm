; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont *this_ptr,int char_code)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_code
;
; XREF[37]:
;   core_game.cpp_CGame_displayActStats_FUN_004a6680 at 004a6985
;   core_game.cpp_CGame_finishAct_FUN_004a6a10 at 004a6a4a
;   core_game.cpp_CGame_renderOverlay_FUN_0049ab50 at 0049abde
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a6fa7
;   core_game.cpp_CGame_showCustomizableKeys_FUN_0049b4e0 at 0049b50d
;   core_inv.cpp_CInventory_FUN_004c2470 at 004c2608
;   core_main.c_FUN_004c85f0 at 004c8c0e
;   core_main.c_FUN_004c90e0 at 004c9112
;   core_main.c_showPromoScreen_FUN_004c8eb0 at 004c8ec3
;   core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0 at 004cfd74
;   ... and 27 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004930e0
        ;   Label: engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
    TEST EAX,EAX                        ; 004930e4
    JL 0x004930ef                       ; 004930e6
        ;   XREF to: 004930ef (CONDITIONAL_JUMP)  ; LAB_004930ef
    CMP EAX,0x100                       ; 004930e8
    JL 0x004930f2                       ; 004930ed
        ;   XREF to: 004930f2 (CONDITIONAL_JUMP)  ; LAB_004930f2
    XOR EAX,EAX                         ; 004930ef
        ;   Label: LAB_004930ef
    RET                                 ; 004930f1
    MOV EDX,dword ptr [ESP + 0x4]       ; 004930f2
        ;   Label: LAB_004930f2
    SHL EAX,0x2                         ; 004930f6
    ADD EDX,EAX                         ; 004930f9
    MOV EAX,dword ptr [EDX + 0x2968]    ; 004930fb
    ADD EAX,dword ptr [EDX + 0x2d68]    ; 00493101
    RET                                 ; 00493107

