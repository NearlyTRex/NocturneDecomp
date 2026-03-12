; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextFV_FUN_004cdc70(CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format_string
; va_list_t        Stack[0x1c]:4   args
; Local Variables:
; char[4096]       Stack[-0x1010]:4096  local_1010
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawTextF_FUN_004cdc20 at 004cdc4f
;
; Called Functions:
;   crt_stdio.c__vsprintf_FUN_005fdba8
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_004cdbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdc70
        ;   Label: engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc70
    PUSH ESI                            ; 004cdc71
    PUSH EDI                            ; 004cdc72
    PUSH EBP                            ; 004cdc73
    SUB ESP,0x1000                      ; 004cdc74
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004cdc7a
    PUSH EDX                            ; 004cdc81
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004cdc82
    PUSH ECX                            ; 004cdc89
    LEA EAX,[ESP + 0x8]                 ; 004cdc8a
    PUSH EAX                            ; 004cdc8e
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 004cdc8f
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004cdc94
    MOV EAX,ESP                         ; 004cdc97
    PUSH EAX                            ; 004cdc99
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004cdc9a
    PUSH EBX                            ; 004cdca1
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004cdca2
    PUSH ESI                            ; 004cdca9
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004cdcaa
    PUSH EDI                            ; 004cdcb1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004cdcb2
    PUSH EBP                            ; 004cdcb9
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004cdcba
    PUSH EAX                            ; 004cdcc1
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_004cdbf0 ; 004cdcc2
        ;   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_004cdbf0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004cdcc7
    ADD ESP,0x1000                      ; 004cdcca
    POP EBP                             ; 004cdcd0
    POP EDI                             ; 004cdcd1
    POP ESI                             ; 004cdcd2
    POP EBX                             ; 004cdcd3
    RET                                 ; 004cdcd4

