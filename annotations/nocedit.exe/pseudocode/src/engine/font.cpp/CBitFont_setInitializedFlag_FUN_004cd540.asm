; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_setInitializedFlag_FUN_004cd540(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfont.cpp_initFonts_FUN_004709a0 at 00470c21
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cd540
        ;   Label: engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540
    MOV dword ptr [EAX + 0x1d64],0x1    ; 004cd544
    RET                                 ; 004cd54e

