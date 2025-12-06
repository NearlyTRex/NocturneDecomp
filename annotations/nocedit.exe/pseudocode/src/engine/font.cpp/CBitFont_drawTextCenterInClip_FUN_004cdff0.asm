; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0(CBitFont * this_ptr, int y_pos, int color_mode, int color_value, char * text_string)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   y_pos
; int              Stack[0xc]:4   color_mode
; int              Stack[0x10]:4   color_value
; char *           Stack[0x14]:4   text_string
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090 at 004ce0da
;
; Referenced Globals:
;   int g_ClipLeft
;   int g_ClipRight
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdff0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0
    PUSH ESI                            ; 004cdff1
    PUSH EDI                            ; 004cdff2
    PUSH EBP                            ; 004cdff3
    MOV EDX,dword ptr [ESP + 0x24]      ; 004cdff4
    PUSH EDX                            ; 004cdff8
    MOV ECX,dword ptr [ESP + 0x24]      ; 004cdff9
    PUSH ECX                            ; 004cdffd
    MOV EBX,dword ptr [ESP + 0x24]      ; 004cdffe
    PUSH EBX                            ; 004ce002
    MOV ESI,dword ptr [ESP + 0x24]      ; 004ce003
    PUSH ESI                            ; 004ce007
    MOV EBP,dword ptr [ESP + 0x24]      ; 004ce008
    PUSH EDX                            ; 004ce00c
    MOV EDI,dword ptr [0x02d02560]      ; 004ce00d | int g_ClipRight
    MOV EBX,dword ptr [0x02d02558]      ; 004ce013 | int g_ClipLeft
    PUSH EBP                            ; 004ce019
    ADD EBX,EDI                         ; 004ce01a
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004ce01c | int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
    LEA EDX,[EBX + 0x1]                 ; 004ce021
    SUB EDX,EAX                         ; 004ce024
    MOV EAX,EDX                         ; 004ce026
    SAR EDX,0x1f                        ; 004ce028
    SUB EAX,EDX                         ; 004ce02b
    SAR EAX,0x1                         ; 004ce02d
    ADD ESP,0x8                         ; 004ce02f
    PUSH EAX                            ; 004ce032
    PUSH EBP                            ; 004ce033
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0 ; 004ce034 | int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004ce039
    POP EBP                             ; 004ce03c
    POP EDI                             ; 004ce03d
    POP ESI                             ; 004ce03e
    POP EBX                             ; 004ce03f
    RET                                 ; 004ce040

