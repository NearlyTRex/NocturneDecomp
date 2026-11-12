; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextRight_FUN_004c2150(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   text
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480 at 00480599
;   engine_font.cpp_FUN_004c21e0 at 004c2232
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_004c2060
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2150
        ;   Label: engine_font.cpp_CBitFont_drawTextRight_FUN_004c2150
    PUSH ESI                            ; 004c2151
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c2152
    PUSH EAX                            ; 004c2156
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c2157
    PUSH EDX                            ; 004c215b
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c215c
    PUSH ECX                            ; 004c2160
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c2161
    PUSH EBX                            ; 004c2165
    PUSH EAX                            ; 004c2166
    MOV ESI,dword ptr [ESP + 0x20]      ; 004c2167
    PUSH ESI                            ; 004c216b
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004c216c
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004c2171
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c2174
    SUB EDX,EAX                         ; 004c2178
    LEA EAX,[EDX + 0x1]                 ; 004c217a
    PUSH EAX                            ; 004c217d
    PUSH ESI                            ; 004c217e
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_004c2060 ; 004c217f
        ;   XREF to: 004c2060 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_004c2060(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004c2184
    POP ESI                             ; 004c2187
    POP EBX                             ; 004c2188
    RET                                 ; 004c2189

