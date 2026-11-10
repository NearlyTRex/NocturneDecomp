; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004b30c0(CBitFont *this_ptr,int char_code)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_code
;
; XREF[4]:
;   cockpit_drawsurf.cpp_FUN_0046a6bc at 0046a6d3
;   core_game.cpp_CGame_renderOverlay_FUN_004b47d0 at 004b49eb
;   core_game.cpp_FUN_004b51e0 at 004b5223
;   shape_edittool.cpp_FUN_00486120 at 004863d4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004b30c0
        ;   Label: engine_font.cpp_CBitFont_getCharWidth_FUN_004b30c0
    TEST EAX,EAX                        ; 004b30c4
    JL 0x004b30cf                       ; 004b30c6
        ;   XREF to: 004b30cf (CONDITIONAL_JUMP)  ; LAB_004b30cf
    CMP EAX,0x100                       ; 004b30c8
    JL 0x004b30d2                       ; 004b30cd
        ;   XREF to: 004b30d2 (CONDITIONAL_JUMP)  ; LAB_004b30d2
    XOR EAX,EAX                         ; 004b30cf
        ;   Label: LAB_004b30cf
    RET                                 ; 004b30d1
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b30d2
        ;   Label: LAB_004b30d2
    SHL EAX,0x2                         ; 004b30d6
    ADD EAX,EDX                         ; 004b30d9
    MOV EAX,dword ptr [EAX + 0x35e8]    ; 004b30db
    RET                                 ; 004b30e1

