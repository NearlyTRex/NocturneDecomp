; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBitFont * __cdecl engine_font_cpp_CBitFont_dtor_FUN_004cceb0(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfont.cpp_freeFonts_FUN_004710a0 at 004711a1
;
; Called Functions:
;   engine_font.cpp_CBitFont_free_FUN_004cd4e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cceb0
        ;   Label: engine_font.cpp_CBitFont_dtor_FUN_004cceb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cceb1
    PUSH EBX                            ; 004cceb5
    CALL engine_font.cpp_CBitFont_free_FUN_004cd4e0 ; 004cceb6
        ;   XREF to: 004cd4e0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_free_FUN_004cd4e0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 004ccebb
    MOV EAX,EBX                         ; 004ccebe
    POP EBX                             ; 004ccec0
    RET                                 ; 004ccec1

