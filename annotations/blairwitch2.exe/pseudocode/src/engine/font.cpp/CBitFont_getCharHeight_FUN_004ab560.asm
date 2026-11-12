; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont *this_ptr,int char_code)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_code
;
; XREF[36]:
;   core_fldnotes.cpp_SPageResourceText_ctor_FUN_004a1f80 at 004a1fe9
;   core_fldnotes.cpp_SPageResourceText_draw_FUN_004a2060 at 004a209b
;   core_fldnotes.cpp_STextView_newLine_FUN_004a2bf0 at 004a2c0d
;   core_game.cpp_CGame_finishAct_FUN_004bdfb0 at 004bdfea
;   core_game.cpp_CGame_renderOverlay_FUN_004b32c0 at 004b334e
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be564
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004b3c50 at 004b3c7d
;   core_game.cpp_FUN_004b5190 at 004b5571
;   core_game.cpp_FUN_004bdc1e at 004bdf25
;   core_inv.cpp_FUN_004dd9b0 at 004ddb41
;   ... and 26 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004ab560
        ;   Label: engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
    TEST EAX,EAX                        ; 004ab564
    JL 0x004ab56f                       ; 004ab566
        ;   XREF to: 004ab56f (CONDITIONAL_JUMP)  ; LAB_004ab56f
    CMP EAX,0x100                       ; 004ab568
    JL 0x004ab572                       ; 004ab56d
        ;   XREF to: 004ab572 (CONDITIONAL_JUMP)  ; LAB_004ab572
    XOR EAX,EAX                         ; 004ab56f
        ;   Label: LAB_004ab56f
    RET                                 ; 004ab571
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ab572
        ;   Label: LAB_004ab572
    SHL EAX,0x2                         ; 004ab576
    ADD EDX,EAX                         ; 004ab579
    MOV EAX,dword ptr [EDX + 0x39e8]    ; 004ab57b
    ADD EAX,dword ptr [EDX + 0x3de8]    ; 004ab581
    RET                                 ; 004ab587

