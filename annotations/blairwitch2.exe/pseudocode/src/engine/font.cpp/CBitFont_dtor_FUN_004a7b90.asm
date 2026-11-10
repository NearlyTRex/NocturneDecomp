; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBitFont * __cdecl engine_font_cpp_CBitFont_dtor_FUN_004a7b90(CBitFont *this_ptr,uint flags)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dfont.cpp_FUN_00448640 at 00448666
;
; Called Functions:
;   engine_font.cpp_FUN_004a8850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7b90
        ;   Label: engine_font.cpp_CBitFont_dtor_FUN_004a7b90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a7b91
    PUSH EBX                            ; 004a7b95
    CALL engine_font.cpp_FUN_004a8850   ; 004a7b96
        ;   XREF to: 004a8850 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8850()
    ADD ESP,0x4                         ; 004a7b9b
    MOV EAX,EBX                         ; 004a7b9e
    POP EBX                             ; 004a7ba0
    RET                                 ; 004a7ba1

