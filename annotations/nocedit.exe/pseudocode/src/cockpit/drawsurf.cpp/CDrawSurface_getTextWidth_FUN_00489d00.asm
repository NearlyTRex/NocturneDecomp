; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_00489d00(CDrawSurface *this_ptr,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; Referenced Globals:
;   CBitFont* g_CurrentFont
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_004018a0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00489d00
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_00489d00
    MOV EDX,dword ptr [0x02c6d558]      ; 00489d04 | g_CurrentFont
    TEST EDX,EDX                        ; 00489d0a
    JZ 0x00489d19                       ; 00489d0c
        ;   XREF to: 00489d19 (CONDITIONAL_JUMP)  ; LAB_00489d19
    PUSH EAX                            ; 00489d0e
    PUSH EDX                            ; 00489d0f
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00489d10
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 00489d15
    RET                                 ; 00489d18
    PUSH EAX                            ; 00489d19
        ;   Label: LAB_00489d19
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 00489d1a
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
    ADD ESP,0x4                         ; 00489d1f
    DEC EAX                             ; 00489d22
    RET                                 ; 00489d23

