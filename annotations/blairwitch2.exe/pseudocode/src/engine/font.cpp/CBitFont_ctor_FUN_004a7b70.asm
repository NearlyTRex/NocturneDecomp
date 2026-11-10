; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBitFont * __cdecl engine_font_cpp_CBitFont_ctor_FUN_004a7b70(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfont.cpp_FUN_00447ea0 at 00447f64
;
; Called Functions:
;   engine_font.cpp_CBitFont_reset_FUN_004a7bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7b70
        ;   Label: engine_font.cpp_CBitFont_ctor_FUN_004a7b70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a7b71
    PUSH EBX                            ; 004a7b75
    CALL engine_font.cpp_CBitFont_reset_FUN_004a7bb0 ; 004a7b76
        ;   XREF to: 004a7bb0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_reset_FUN_004a7bb0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 004a7b7b
    MOV EAX,EBX                         ; 004a7b7e
    POP EBX                             ; 004a7b80
    RET                                 ; 004a7b81

