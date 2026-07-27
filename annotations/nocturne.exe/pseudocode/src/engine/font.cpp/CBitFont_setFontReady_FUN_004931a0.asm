; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_dfont.cpp_FUN_0044c560 at 0044c60a
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004931a0
        ;   Label: engine_font.cpp_CBitFont_setFontReady_FUN_004931a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004931a4
    MOV dword ptr [EDX + 0x3184],EAX    ; 004931a8
    RET                                 ; 004931ae

