; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenter_FUN_004b0ea0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)
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
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 at 00469c6e
;   engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004b0f30 at 004b0f82
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0 at 0047d05b
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_004b0cb0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0ea0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenter_FUN_004b0ea0
    PUSH ESI                            ; 004b0ea1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b0ea2
    PUSH EAX                            ; 004b0ea6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b0ea7
    PUSH EDX                            ; 004b0eab
    MOV ECX,dword ptr [ESP + 0x20]      ; 004b0eac
    PUSH ECX                            ; 004b0eb0
    MOV EBX,dword ptr [ESP + 0x20]      ; 004b0eb1
    PUSH EBX                            ; 004b0eb5
    PUSH EAX                            ; 004b0eb6
    MOV ESI,dword ptr [ESP + 0x20]      ; 004b0eb7
    PUSH ESI                            ; 004b0ebb
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 004b0ebc
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 004b0ec1
    SAR EDX,0x1f                        ; 004b0ec3
    SUB EAX,EDX                         ; 004b0ec6
    SAR EAX,0x1                         ; 004b0ec8
    ADD ESP,0x8                         ; 004b0eca
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b0ecd
    SUB EDX,EAX                         ; 004b0ed1
    PUSH EDX                            ; 004b0ed3
    PUSH ESI                            ; 004b0ed4
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_004b0cb0 ; 004b0ed5
        ;   XREF to: 004b0cb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_004b0cb0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004b0eda
    POP ESI                             ; 004b0edd
    POP EBX                             ; 004b0ede
    RET                                 ; 004b0edf

