; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getCharXAdvance_FUN_004d0200(CBitFont *this_ptr,int char_code)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_code
;
; XREF[2]:
;   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850 at 004d0cea
;   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 at 004a664d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004d0200
        ;   Label: engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200
    TEST EAX,EAX                        ; 004d0204
    JL 0x004d020f                       ; 004d0206
        ;   XREF to: 004d020f (CONDITIONAL_JUMP)  ; LAB_004d020f
    CMP EAX,0x100                       ; 004d0208
    JL 0x004d0212                       ; 004d020d
        ;   XREF to: 004d0212 (CONDITIONAL_JUMP)  ; LAB_004d0212
    XOR EAX,EAX                         ; 004d020f
        ;   Label: LAB_004d020f
    RET                                 ; 004d0211
    MOV EDX,dword ptr [ESP + 0x4]       ; 004d0212
        ;   Label: LAB_004d0212
    SHL EAX,0x2                         ; 004d0216
    ADD EAX,EDX                         ; 004d0219
    MOV EAX,dword ptr [EAX + 0x2d68]    ; 004d021b
    RET                                 ; 004d0221

