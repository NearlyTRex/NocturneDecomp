; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_FUN_004ab620(CBitFont *this_ptr,int value)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   value
;
; XREF[1]:
;   core_dfont.cpp_FUN_00447ea0 at 00447f4a
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ab620
        ;   Label: engine_font.cpp_FUN_004ab620
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ab624
    MOV dword ptr [EDX + 0x4204],EAX    ; 004ab628
    RET                                 ; 004ab62e

