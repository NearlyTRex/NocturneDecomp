; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextWrapper_FUN_00490af0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   text
;
; XREF[6]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d82b
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0 at 00490e1f
;   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0 at 00490f34
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0 at 00490d15
;   engine_font.cpp_CBitFont_drawTextFV_FUN_00490b70 at 00490bc2
;   engine_font.cpp_CBitFont_drawTextRight_FUN_00490be0 at 00490c0f
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490af0
        ;   Label: engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0
    PUSH ESI                            ; 00490af1
    PUSH EDI                            ; 00490af2
    PUSH EBP                            ; 00490af3
    MOV EDX,dword ptr [ESP + 0x24]      ; 00490af4
    PUSH EDX                            ; 00490af8
    MOV ECX,dword ptr [ESP + 0x24]      ; 00490af9
    PUSH ECX                            ; 00490afd
    MOV EBX,dword ptr [ESP + 0x24]      ; 00490afe
    PUSH EBX                            ; 00490b02
    MOV ESI,dword ptr [ESP + 0x24]      ; 00490b03
    PUSH ESI                            ; 00490b07
    MOV EDI,dword ptr [ESP + 0x38]      ; 00490b08
    PUSH EDI                            ; 00490b0c
    MOV EBP,dword ptr [ESP + 0x28]      ; 00490b0d
    PUSH EBP                            ; 00490b11
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00490b12
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00490b17
    POP EBP                             ; 00490b1a
    POP EDI                             ; 00490b1b
    POP ESI                             ; 00490b1c
    POP EBX                             ; 00490b1d
    RET                                 ; 00490b1e

