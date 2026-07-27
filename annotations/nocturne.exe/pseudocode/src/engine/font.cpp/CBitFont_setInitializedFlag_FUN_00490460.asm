; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_setInitializedFlag_FUN_00490460(int param_1)
;
;
; XREF[1]:
;   core_dfont.cpp_FUN_0044c560 at 0044c5ad
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00490460
        ;   Label: engine_font.cpp_CBitFont_setInitializedFlag_FUN_00490460
    MOV dword ptr [EAX + 0x1d64],0x1    ; 00490464
    RET                                 ; 0049046e

