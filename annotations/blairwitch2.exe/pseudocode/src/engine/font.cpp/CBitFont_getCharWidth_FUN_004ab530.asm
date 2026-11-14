; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004ab530(CBitFont *this_ptr,int char_code)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_code
;
; XREF[4]:
;   cockpit_drawsurf.cpp_FUN_00468af0 at 00468b03
;   core_game.cpp_CGame_renderOverlay_FUN_004b32c0 at 004b335b
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004b3c50 at 004b3c93
;   shape_edittool.cpp_FUN_00484f20 at 004851d4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004ab530
        ;   Label: engine_font.cpp_CBitFont_getCharWidth_FUN_004ab530
    TEST EAX,EAX                        ; 004ab534
    JL 0x004ab53f                       ; 004ab536
        ;   XREF to: 004ab53f (CONDITIONAL_JUMP)  ; LAB_004ab53f
    CMP EAX,0x100                       ; 004ab538
    JL 0x004ab542                       ; 004ab53d
        ;   XREF to: 004ab542 (CONDITIONAL_JUMP)  ; LAB_004ab542
    XOR EAX,EAX                         ; 004ab53f
        ;   Label: LAB_004ab53f
    RET                                 ; 004ab541
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ab542
        ;   Label: LAB_004ab542
    SHL EAX,0x2                         ; 004ab546
    ADD EAX,EDX                         ; 004ab549
    MOV EAX,dword ptr [EAX + 0x35e8]    ; 004ab54b
    RET                                 ; 004ab551

