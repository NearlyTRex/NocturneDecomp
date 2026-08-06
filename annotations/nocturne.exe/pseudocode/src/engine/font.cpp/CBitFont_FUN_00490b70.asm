; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_FUN_00490b70(CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format_string
; va_list_t        Stack[0x1c]:4   args
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawTextF_FUN_00490b20 at 00490b4f
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490b70
        ;   Label: engine_font.cpp_CBitFont_FUN_00490b70
    PUSH ESI                            ; 00490b71
    PUSH EDI                            ; 00490b72
    PUSH EBP                            ; 00490b73
    SUB ESP,0x1000                      ; 00490b74
    MOV EDX,dword ptr [ESP + 0x102c]    ; 00490b7a
    PUSH EDX                            ; 00490b81
    MOV ECX,dword ptr [ESP + 0x102c]    ; 00490b82
    PUSH ECX                            ; 00490b89
    LEA EAX,[ESP + 0x8]                 ; 00490b8a
    PUSH EAX                            ; 00490b8e
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 00490b8f
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00490b94
    MOV EAX,ESP                         ; 00490b97
    PUSH EAX                            ; 00490b99
    MOV EBX,dword ptr [ESP + 0x1028]    ; 00490b9a
    PUSH EBX                            ; 00490ba1
    MOV ESI,dword ptr [ESP + 0x1028]    ; 00490ba2
    PUSH ESI                            ; 00490ba9
    MOV EDI,dword ptr [ESP + 0x1028]    ; 00490baa
    PUSH EDI                            ; 00490bb1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 00490bb2
    PUSH EBP                            ; 00490bb9
    MOV EAX,dword ptr [ESP + 0x1028]    ; 00490bba
    PUSH EAX                            ; 00490bc1
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0 ; 00490bc2
        ;   XREF to: 00490af0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 00490bc7
    ADD ESP,0x1000                      ; 00490bca
    POP EBP                             ; 00490bd0
    POP EDI                             ; 00490bd1
    POP ESI                             ; 00490bd2
    POP EBX                             ; 00490bd3
    RET                                 ; 00490bd4

