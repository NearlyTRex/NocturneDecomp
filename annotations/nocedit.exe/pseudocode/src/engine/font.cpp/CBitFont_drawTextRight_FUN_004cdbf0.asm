; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, int color_mode, int color_value)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text_string
; int              Stack[0xc]:4   x_pos
; int              Stack[0x10]:4   y_pos
; int              Stack[0x14]:4   color_mode
; int              Stack[0x18]:4   color_value
;
; XREF[7]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 004891eb
;   core_script.cpp_FUN_005645d0 at 00564791
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 at 004cdf1f
;   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0 at 004ce034
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0 at 004cde15
;   engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70 at 004cdcc2
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0 at 004cdd0f
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdbf0
        ;   Label: engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
    PUSH ESI                            ; 004cdbf1
    PUSH EDI                            ; 004cdbf2
    PUSH EBP                            ; 004cdbf3
    MOV EDX,dword ptr [ESP + 0x24]      ; 004cdbf4
    PUSH EDX                            ; 004cdbf8
    MOV ECX,dword ptr [ESP + 0x24]      ; 004cdbf9
    PUSH ECX                            ; 004cdbfd
    MOV EBX,dword ptr [ESP + 0x24]      ; 004cdbfe
    PUSH EBX                            ; 004cdc02
    MOV ESI,dword ptr [ESP + 0x24]      ; 004cdc03
    PUSH ESI                            ; 004cdc07
    MOV EDI,dword ptr [ESP + 0x38]      ; 004cdc08
    PUSH EDI                            ; 004cdc0c
    MOV EBP,dword ptr [ESP + 0x28]      ; 004cdc0d
    PUSH EBP                            ; 004cdc11
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004cdc12
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 004cdc17
    POP EBP                             ; 004cdc1a
    POP EDI                             ; 004cdc1b
    POP ESI                             ; 004cdc1c
    POP EBX                             ; 004cdc1d
    RET                                 ; 004cdc1e

