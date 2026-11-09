; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_FUN_004b0500(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfont.cpp_FUN_00459f50 at 00459f9d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b0500
        ;   Label: engine_font.cpp_FUN_004b0500
    MOV dword ptr [EAX + 0x1de4],0x1    ; 004b0504
    RET                                 ; 004b050e

