; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont *this_ptr,int char_code)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_code
;
; XREF[37]:
;   core_fldnotes.cpp_FUN_004ba850 at 004ba8b9
;   core_fldnotes.cpp_FUN_004ba930 at 004ba96b
;   core_fldnotes.cpp_FUN_004bb630 at 004bb64d
;   core_game.cpp_CGame_displayActStats_FUN_004d8700 at 004d8a05
;   core_game.cpp_CGame_finishAct_FUN_004d8a90 at 004d8db6
;   core_game.cpp_CGame_renderOverlay_FUN_004cc2b0 at 004cc33e
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d8f67
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004ccc40 at 004ccc6d
;   core_inv.cpp_FUN_004fae10 at 004fafb9
;   core_main.c_FUN_005032a0 at 00503856
;   ... and 27 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004c4510
        ;   Label: engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
    TEST EAX,EAX                        ; 004c4514
    JL 0x004c451f                       ; 004c4516
        ;   XREF to: 004c451f (CONDITIONAL_JUMP)  ; LAB_004c451f
    CMP EAX,0x100                       ; 004c4518
    JL 0x004c4522                       ; 004c451d
        ;   XREF to: 004c4522 (CONDITIONAL_JUMP)  ; LAB_004c4522
    XOR EAX,EAX                         ; 004c451f
        ;   Label: LAB_004c451f
    RET                                 ; 004c4521
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c4522
        ;   Label: LAB_004c4522
    SHL EAX,0x2                         ; 004c4526
    ADD EDX,EAX                         ; 004c4529
    MOV EAX,dword ptr [EDX + 0x39e8]    ; 004c452b
    ADD EAX,dword ptr [EDX + 0x3de8]    ; 004c4531
    RET                                 ; 004c4537

