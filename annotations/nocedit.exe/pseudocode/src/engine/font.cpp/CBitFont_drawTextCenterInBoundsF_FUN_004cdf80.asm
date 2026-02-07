; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80 (CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value, char *format_string,va_list_t args)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left_x
; int              Stack[0xc]:4   right_x
; int              Stack[0x10]:4   y_pos
; int              Stack[0x14]:4   color_mode
; int              Stack[0x18]:4   color_value
; char *           Stack[0x1c]:4   format_string
; va_list_t        Stack[0x20]:4   args
; Local Variables:
; undefined1       Stack[-0x1010]:1  local_1010
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30 at 004cdf64
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdf80
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80
    PUSH ESI                            ; 004cdf81
    PUSH EDI                            ; 004cdf82
    PUSH EBP                            ; 004cdf83
    SUB ESP,0x1000                      ; 004cdf84
    MOV EDX,dword ptr [ESP + 0x1030]    ; 004cdf8a
    PUSH EDX                            ; 004cdf91
    MOV ECX,dword ptr [ESP + 0x1030]    ; 004cdf92
    PUSH ECX                            ; 004cdf99
    LEA EAX,[ESP + 0x8]                 ; 004cdf9a
    PUSH EAX                            ; 004cdf9e
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 004cdf9f
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004cdfa4
    MOV EAX,ESP                         ; 004cdfa7
    PUSH EAX                            ; 004cdfa9
    MOV EBX,dword ptr [ESP + 0x102c]    ; 004cdfaa
    PUSH EBX                            ; 004cdfb1
    MOV ESI,dword ptr [ESP + 0x102c]    ; 004cdfb2
    PUSH ESI                            ; 004cdfb9
    MOV EDI,dword ptr [ESP + 0x102c]    ; 004cdfba
    PUSH EDI                            ; 004cdfc1
    MOV EBP,dword ptr [ESP + 0x102c]    ; 004cdfc2
    PUSH EBP                            ; 004cdfc9
    MOV EAX,dword ptr [ESP + 0x102c]    ; 004cdfca
    PUSH EAX                            ; 004cdfd1
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004cdfd2
    PUSH EDX                            ; 004cdfd9
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 ; 004cdfda
        ;   XREF to: 004cdee0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004cdfdf
    ADD ESP,0x1000                      ; 004cdfe2
    POP EBP                             ; 004cdfe8
    POP EDI                             ; 004cdfe9
    POP ESI                             ; 004cdfea
    POP EBX                             ; 004cdfeb
    RET                                 ; 004cdfec

