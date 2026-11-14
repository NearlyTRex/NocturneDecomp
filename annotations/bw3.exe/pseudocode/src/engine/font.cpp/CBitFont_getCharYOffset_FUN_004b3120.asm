; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getCharYOffset_FUN_004b3120(CBitFont *this_ptr,int char_code)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_code
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00486120 at 0048618d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004b3120
        ;   Label: engine_font.cpp_CBitFont_getCharYOffset_FUN_004b3120
    TEST EAX,EAX                        ; 004b3124
    JL 0x004b312f                       ; 004b3126
        ;   XREF to: 004b312f (CONDITIONAL_JUMP)  ; LAB_004b312f
    CMP EAX,0x100                       ; 004b3128
    JL 0x004b3132                       ; 004b312d
        ;   XREF to: 004b3132 (CONDITIONAL_JUMP)  ; LAB_004b3132
    XOR EAX,EAX                         ; 004b312f
        ;   Label: LAB_004b312f
    RET                                 ; 004b3131
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b3132
        ;   Label: LAB_004b3132
    SHL EAX,0x2                         ; 004b3136
    ADD EAX,EDX                         ; 004b3139
    MOV EAX,dword ptr [EAX + 0x3de8]    ; 004b313b
    RET                                 ; 004b3141

