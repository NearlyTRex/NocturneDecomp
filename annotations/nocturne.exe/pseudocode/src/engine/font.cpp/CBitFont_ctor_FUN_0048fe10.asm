; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBitFont * __cdecl engine_font_cpp_CBitFont_ctor_FUN_0048fe10(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfont.cpp_FUN_0044c560 at 0044c624
;
; Called Functions:
;   engine_font.cpp_CBitFont_reset_FUN_0048fe50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fe10
        ;   Label: engine_font.cpp_CBitFont_ctor_FUN_0048fe10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048fe11
    PUSH EBX                            ; 0048fe15
    CALL engine_font.cpp_CBitFont_reset_FUN_0048fe50 ; 0048fe16
        ;   XREF to: 0048fe50 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_reset_FUN_0048fe50(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0048fe1b
    MOV EAX,EBX                         ; 0048fe1e
    POP EBX                             ; 0048fe20
    RET                                 ; 0048fe21

