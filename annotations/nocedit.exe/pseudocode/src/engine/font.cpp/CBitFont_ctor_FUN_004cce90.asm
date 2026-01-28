; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBitFont * __cdecl engine_font_cpp_CBitFont_ctor_FUN_004cce90(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dfont.cpp_initFonts_FUN_004709a0 at 00470be5
;
; Called Functions:
;   engine_font.cpp_CBitFont_reset_FUN_004cced0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cce90
        ;   Label: engine_font.cpp_CBitFont_ctor_FUN_004cce90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cce91
    PUSH EBX                            ; 004cce95
    CALL engine_font.cpp_CBitFont_reset_FUN_004cced0 ; 004cce96
        ;   XREF to: 004cced0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_reset_FUN_004cced0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 004cce9b
    MOV EAX,EBX                         ; 004cce9e
    POP EBX                             ; 004ccea0
    RET                                 ; 004ccea1

