; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenter_FUN_00490ce0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   text
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d88e
;   engine_font.cpp_CBitFont_FUN_00490d70 at 00490dc2
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0 at 0047008a
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490ce0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0
    PUSH ESI                            ; 00490ce1
    MOV EAX,dword ptr [ESP + 0x20]      ; 00490ce2
    PUSH EAX                            ; 00490ce6
    MOV EDX,dword ptr [ESP + 0x20]      ; 00490ce7
    PUSH EDX                            ; 00490ceb
    MOV ECX,dword ptr [ESP + 0x20]      ; 00490cec
    PUSH ECX                            ; 00490cf0
    MOV EBX,dword ptr [ESP + 0x20]      ; 00490cf1
    PUSH EBX                            ; 00490cf5
    PUSH EAX                            ; 00490cf6
    MOV ESI,dword ptr [ESP + 0x20]      ; 00490cf7
    PUSH ESI                            ; 00490cfb
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 00490cfc
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 00490d01
    SAR EDX,0x1f                        ; 00490d03
    SUB EAX,EDX                         ; 00490d06
    SAR EAX,0x1                         ; 00490d08
    ADD ESP,0x8                         ; 00490d0a
    MOV EDX,dword ptr [ESP + 0x20]      ; 00490d0d
    SUB EDX,EAX                         ; 00490d11
    PUSH EDX                            ; 00490d13
    PUSH ESI                            ; 00490d14
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0 ; 00490d15
        ;   XREF to: 00490af0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 00490d1a
    POP ESI                             ; 00490d1d
    POP EBX                             ; 00490d1e
    RET                                 ; 00490d1f

