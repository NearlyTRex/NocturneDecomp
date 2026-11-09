; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_FUN_004c2060(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)
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
;   cockpit_drawsurf.cpp_FUN_00480480 at 0048054b
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350 at 004c238f
;   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004c2460 at 004c24a4
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004c2250 at 004c2285
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004c2150 at 004c217f
;   engine_font.cpp_FUN_004c20e0 at 004c2132
;
; Called Functions:
;   engine_font.cpp_FUN_004c1dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2060
        ;   Label: engine_font.cpp_FUN_004c2060
    PUSH ESI                            ; 004c2061
    PUSH EDI                            ; 004c2062
    PUSH EBP                            ; 004c2063
    MOV EDX,dword ptr [ESP + 0x24]      ; 004c2064
    PUSH EDX                            ; 004c2068
    MOV ECX,dword ptr [ESP + 0x24]      ; 004c2069
    PUSH ECX                            ; 004c206d
    MOV EBX,dword ptr [ESP + 0x24]      ; 004c206e
    PUSH EBX                            ; 004c2072
    MOV ESI,dword ptr [ESP + 0x24]      ; 004c2073
    PUSH ESI                            ; 004c2077
    MOV EDI,dword ptr [ESP + 0x38]      ; 004c2078
    PUSH EDI                            ; 004c207c
    MOV EBP,dword ptr [ESP + 0x28]      ; 004c207d
    PUSH EBP                            ; 004c2081
    CALL engine_font.cpp_FUN_004c1dd0   ; 004c2082
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004c2087
    POP EBP                             ; 004c208a
    POP EDI                             ; 004c208b
    POP ESI                             ; 004c208c
    POP EBX                             ; 004c208d
    RET                                 ; 004c208e

