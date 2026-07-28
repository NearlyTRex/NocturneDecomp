; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBitFont * engine_font_cpp_FUN_0048fe30(CBitFont *param_1)
;
;
; XREF[1]:
;   core_dfont.cpp_FUN_0044cc00 at 0044cc26
;
; Called Functions:
;   engine_font.cpp_CBitFont_free_FUN_00490420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fe30
        ;   Label: engine_font.cpp_FUN_0048fe30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048fe31
    PUSH EBX                            ; 0048fe35
    CALL engine_font.cpp_CBitFont_free_FUN_00490420 ; 0048fe36
        ;   XREF to: 00490420 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_free_FUN_00490420(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0048fe3b
    MOV EAX,EBX                         ; 0048fe3e
    POP EBX                             ; 0048fe40
    RET                                 ; 0048fe41

