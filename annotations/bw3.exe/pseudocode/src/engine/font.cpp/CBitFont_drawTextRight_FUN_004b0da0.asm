; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextRight_FUN_004b0da0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   text
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 at 00469c59
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_004b0cb0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0da0
        ;   Label: engine_font.cpp_CBitFont_drawTextRight_FUN_004b0da0
    PUSH ESI                            ; 004b0da1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b0da2
    PUSH EAX                            ; 004b0da6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b0da7
    PUSH EDX                            ; 004b0dab
    MOV ECX,dword ptr [ESP + 0x20]      ; 004b0dac
    PUSH ECX                            ; 004b0db0
    MOV EBX,dword ptr [ESP + 0x20]      ; 004b0db1
    PUSH EBX                            ; 004b0db5
    PUSH EAX                            ; 004b0db6
    MOV ESI,dword ptr [ESP + 0x20]      ; 004b0db7
    PUSH ESI                            ; 004b0dbb
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 004b0dbc
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004b0dc1
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b0dc4
    SUB EDX,EAX                         ; 004b0dc8
    LEA EAX,[EDX + 0x1]                 ; 004b0dca
    PUSH EAX                            ; 004b0dcd
    PUSH ESI                            ; 004b0dce
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_004b0cb0 ; 004b0dcf
        ;   XREF to: 004b0cb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_004b0cb0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004b0dd4
    POP ESI                             ; 004b0dd7
    POP EBX                             ; 004b0dd8
    RET                                 ; 004b0dd9

