; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(CBitFont *this_ptr,int value)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   value
;
; XREF[1]:
;   core_dfont.cpp_initFonts_FUN_004709a0 at 00470c63
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d0290
        ;   Label: engine_font.cpp_CBitFont_setFontReady_FUN_004d0290
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d0294
    MOV dword ptr [EDX + 0x3184],EAX    ; 004d0298
    RET                                 ; 004d029e

