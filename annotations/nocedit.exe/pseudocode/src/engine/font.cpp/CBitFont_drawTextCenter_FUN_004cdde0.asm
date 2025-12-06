; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0(CBitFont * this_ptr, int center_x, int y_pos, int color_mode, int color_value, char * text_string)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   text_string
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 0048924e
;   engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70 at 004cdec2
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 at 0049e82a
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdde0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
    PUSH ESI                            ; 004cdde1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004cdde2
    PUSH EAX                            ; 004cdde6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004cdde7
    PUSH EDX                            ; 004cddeb
    MOV ECX,dword ptr [ESP + 0x20]      ; 004cddec
    PUSH ECX                            ; 004cddf0
    MOV EBX,dword ptr [ESP + 0x20]      ; 004cddf1
    PUSH EBX                            ; 004cddf5
    PUSH EAX                            ; 004cddf6
    MOV ESI,dword ptr [ESP + 0x20]      ; 004cddf7
    PUSH ESI                            ; 004cddfb
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004cddfc | int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 004cde01
    SAR EDX,0x1f                        ; 004cde03
    SUB EAX,EDX                         ; 004cde06
    SAR EAX,0x1                         ; 004cde08
    ADD ESP,0x8                         ; 004cde0a
    MOV EDX,dword ptr [ESP + 0x20]      ; 004cde0d
    SUB EDX,EAX                         ; 004cde11
    PUSH EDX                            ; 004cde13
    PUSH ESI                            ; 004cde14
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0 ; 004cde15 | int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004cde1a
    POP ESI                             ; 004cde1d
    POP EBX                             ; 004cde1e
    RET                                 ; 004cde1f

