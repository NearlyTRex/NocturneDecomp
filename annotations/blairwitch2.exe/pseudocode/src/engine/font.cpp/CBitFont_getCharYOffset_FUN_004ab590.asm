; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getCharYOffset_FUN_004ab590(CBitFont *this_ptr,int char_code)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_code
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00484f20 at 00484f8d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004ab590
        ;   Label: engine_font.cpp_CBitFont_getCharYOffset_FUN_004ab590
    TEST EAX,EAX                        ; 004ab594
    JL 0x004ab59f                       ; 004ab596
        ;   XREF to: 004ab59f (CONDITIONAL_JUMP)  ; LAB_004ab59f
    CMP EAX,0x100                       ; 004ab598
    JL 0x004ab5a2                       ; 004ab59d
        ;   XREF to: 004ab5a2 (CONDITIONAL_JUMP)  ; LAB_004ab5a2
    XOR EAX,EAX                         ; 004ab59f
        ;   Label: LAB_004ab59f
    RET                                 ; 004ab5a1
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ab5a2
        ;   Label: LAB_004ab5a2
    SHL EAX,0x2                         ; 004ab5a6
    ADD EAX,EDX                         ; 004ab5a9
    MOV EAX,dword ptr [EAX + 0x3de8]    ; 004ab5ab
    RET                                 ; 004ab5b1

