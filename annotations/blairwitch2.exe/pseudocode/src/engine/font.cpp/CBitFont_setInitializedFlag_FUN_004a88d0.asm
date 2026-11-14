; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_setInitializedFlag_FUN_004a88d0(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfont.cpp_FUN_00447ea0 at 00447eed
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a88d0
        ;   Label: engine_font.cpp_CBitFont_setInitializedFlag_FUN_004a88d0
    MOV dword ptr [EAX + 0x1de4],0x1    ; 004a88d4
    RET                                 ; 004a88de

