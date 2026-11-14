; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_setFontReady_FUN_004c45d0(CBitFont *this_ptr,int value)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   value
;
; XREF[1]:
;   core_dfont.cpp_FUN_0045e000 at 0045e0aa
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c45d0
        ;   Label: engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c45d4
    MOV dword ptr [EDX + 0x4204],EAX    ; 004c45d8
    RET                                 ; 004c45de

