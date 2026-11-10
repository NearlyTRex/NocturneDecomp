; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont *this_ptr,int char_code)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_code
;
; XREF[36]:
;   core_fldnotes.cpp_FUN_004a8490 at 004a84f9
;   core_fldnotes.cpp_FUN_004a8570 at 004a85ab
;   core_fldnotes.cpp_FUN_004a9270 at 004a928d
;   core_game.cpp_CGame_displayActStats_FUN_004bfb50 at 004bfe55
;   core_game.cpp_CGame_finishAct_FUN_004bfee0 at 004c0206
;   core_game.cpp_CGame_renderOverlay_FUN_004b47d0 at 004b49de
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c036e
;   core_game.cpp_FUN_004b51e0 at 004b520d
;   core_inv.cpp_CInventory_renderAllItems_FUN_004dda90 at 004ddc58
;   core_main.c_FUN_004e44e0 at 004e4a96
;   ... and 26 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004b30f0
        ;   Label: engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
    TEST EAX,EAX                        ; 004b30f4
    JL 0x004b30ff                       ; 004b30f6
        ;   XREF to: 004b30ff (CONDITIONAL_JUMP)  ; LAB_004b30ff
    CMP EAX,0x100                       ; 004b30f8
    JL 0x004b3102                       ; 004b30fd
        ;   XREF to: 004b3102 (CONDITIONAL_JUMP)  ; LAB_004b3102
    XOR EAX,EAX                         ; 004b30ff
        ;   Label: LAB_004b30ff
    RET                                 ; 004b3101
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b3102
        ;   Label: LAB_004b3102
    SHL EAX,0x2                         ; 004b3106
    ADD EDX,EAX                         ; 004b3109
    MOV EAX,dword ptr [EDX + 0x39e8]    ; 004b310b
    ADD EAX,dword ptr [EDX + 0x3de8]    ; 004b3111
    RET                                 ; 004b3117

