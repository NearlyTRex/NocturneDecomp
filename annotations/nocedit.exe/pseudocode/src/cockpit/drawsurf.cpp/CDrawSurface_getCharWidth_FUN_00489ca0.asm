; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int cockpit_drawsurf.cpp_CDrawSurface_getCharWidth_FUN_00489ca0(CDrawSurface * this_ptr, int char_code)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   char_code
; Local Variables:
; undefined1       Stack[-0x4]:1  local_4
; undefined1       Stack[-0x3]:1  local_3
;
; Referenced Globals:
;   CBitFont* g_CurrentFont
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_004018a0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00489ca0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_getCharWidth_FUN_00489ca0
    MOV EAX,dword ptr [ESP + 0xc]       ; 00489ca3
    MOV EDX,dword ptr [0x02c6d558]      ; 00489ca7 | CBitFont * g_CurrentFont
    TEST EDX,EDX                        ; 00489cad
    JZ 0x00489cbf                       ; 00489caf | LAB_00489cbf
        ;   XREF to: 00489cbf (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00489cb1
    PUSH EDX                            ; 00489cb2
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0 ; 00489cb3 | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont * font, int char_code)
        ;   XREF to: 004d01a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00489cb8
    ADD ESP,0x4                         ; 00489cbb
    RET                                 ; 00489cbe
    MOV byte ptr [ESP],AL               ; 00489cbf
        ;   Label: LAB_00489cbf
    XOR AH,AH                           ; 00489cc2
    MOV byte ptr [ESP + 0x1],AH         ; 00489cc4
    MOV EAX,ESP                         ; 00489cc8
    PUSH EAX                            ; 00489cca
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 00489ccb | int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00489cd0
    DEC EAX                             ; 00489cd3
    ADD ESP,0x4                         ; 00489cd4
    RET                                 ; 00489cd7

