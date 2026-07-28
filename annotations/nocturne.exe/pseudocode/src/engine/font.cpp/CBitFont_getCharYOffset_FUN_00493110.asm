; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getCharYOffset_FUN_00493110(CBitFont *this_ptr,int char_code)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_code
;
; XREF[1]:
;   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_00493760 at 00493bfa
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00493110
        ;   Label: engine_font.cpp_CBitFont_getCharYOffset_FUN_00493110
    TEST EAX,EAX                        ; 00493114
    JL 0x0049311f                       ; 00493116
        ;   XREF to: 0049311f (CONDITIONAL_JUMP)  ; LAB_0049311f
    CMP EAX,0x100                       ; 00493118
    JL 0x00493122                       ; 0049311d
        ;   XREF to: 00493122 (CONDITIONAL_JUMP)  ; LAB_00493122
    XOR EAX,EAX                         ; 0049311f
        ;   Label: LAB_0049311f
    RET                                 ; 00493121
    MOV EDX,dword ptr [ESP + 0x4]       ; 00493122
        ;   Label: LAB_00493122
    SHL EAX,0x2                         ; 00493126
    ADD EAX,EDX                         ; 00493129
    MOV EAX,dword ptr [EAX + 0x2d68]    ; 0049312b
    RET                                 ; 00493131

