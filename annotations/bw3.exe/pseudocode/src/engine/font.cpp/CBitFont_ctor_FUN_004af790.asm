; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBitFont * __cdecl engine_font_cpp_CBitFont_ctor_FUN_004af790(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfont.cpp_FUN_00459f50 at 0045a014
;
; Called Functions:
;   engine_font.cpp_CBitFont_reset_FUN_004af7d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af790
        ;   Label: engine_font.cpp_CBitFont_ctor_FUN_004af790
    MOV EBX,dword ptr [ESP + 0x8]       ; 004af791
    PUSH EBX                            ; 004af795
    CALL engine_font.cpp_CBitFont_reset_FUN_004af7d0 ; 004af796
        ;   XREF to: 004af7d0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_reset_FUN_004af7d0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 004af79b
    MOV EAX,EBX                         ; 004af79e
    POP EBX                             ; 004af7a0
    RET                                 ; 004af7a1

