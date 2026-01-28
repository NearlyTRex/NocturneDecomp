; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_main_c_drawCenteredText_FUN_00508250(char *text,int y_pos,int color)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   y_pos
; int              Stack[0xc]:4   color
;
; Referenced Globals:
;   CBitFont* g_MediumFont
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508250
        ;   Label: core_main.c_drawCenteredText_FUN_00508250
    PUSH ESI                            ; 00508251
    PUSH EDI                            ; 00508252
    PUSH EBP                            ; 00508253
    MOV EDX,dword ptr [ESP + 0x14]      ; 00508254
    PUSH EDX                            ; 00508258
    MOV ECX,dword ptr [0x020a5718]      ; 00508259 | g_MediumFont
    PUSH ECX                            ; 0050825f
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00508260
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 00508265
    SAR EDX,0x1f                        ; 00508267
    SUB EAX,EDX                         ; 0050826a
    SAR EAX,0x1                         ; 0050826c
    ADD ESP,0x8                         ; 0050826e
    PUSH 0x0                            ; 00508271
    MOV EBX,dword ptr [ESP + 0x24]      ; 00508273
    PUSH EBX                            ; 00508277
    MOV ESI,dword ptr [ESP + 0x24]      ; 00508278
    MOV EDX,0x140                       ; 0050827c
    PUSH ESI                            ; 00508281
    SUB EDX,EAX                         ; 00508282
    PUSH EDX                            ; 00508284
    MOV EDI,dword ptr [ESP + 0x24]      ; 00508285
    PUSH EDI                            ; 00508289
    MOV EBP,dword ptr [0x020a5718]      ; 0050828a | g_MediumFont
    PUSH EBP                            ; 00508290
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 00508291
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 00508296
    POP EBP                             ; 00508299
    POP EDI                             ; 0050829a
    POP ESI                             ; 0050829b
    POP EBX                             ; 0050829c
    RET                                 ; 0050829d

