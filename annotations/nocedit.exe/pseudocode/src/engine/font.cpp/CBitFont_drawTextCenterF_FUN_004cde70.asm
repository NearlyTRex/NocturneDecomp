; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_font_cpp_CBitFont_drawTextCenterF_FUN_004cde70 (CBitFont *this_ptr,int center_x,int y_pos,int color_mode,int color_value, char *format_string,va_list_t *args)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format_string
; va_list_t *      Stack[0x1c]:4   args
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004cde20 at 004cde4f
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cde70
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70
    PUSH ESI                            ; 004cde71
    PUSH EDI                            ; 004cde72
    PUSH EBP                            ; 004cde73
    SUB ESP,0x1000                      ; 004cde74
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004cde7a
    PUSH EDX                            ; 004cde81
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004cde82
    PUSH ECX                            ; 004cde89
    LEA EAX,[ESP + 0x8]                 ; 004cde8a
    PUSH EAX                            ; 004cde8e
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 004cde8f
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
    ADD ESP,0xc                         ; 004cde94
    MOV EAX,ESP                         ; 004cde97
    PUSH EAX                            ; 004cde99
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004cde9a
    PUSH EBX                            ; 004cdea1
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004cdea2
    PUSH ESI                            ; 004cdea9
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004cdeaa
    PUSH EDI                            ; 004cdeb1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004cdeb2
    PUSH EBP                            ; 004cdeb9
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004cdeba
    PUSH EAX                            ; 004cdec1
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0 ; 004cdec2
        ;   XREF to: 004cdde0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0(CBitFont * this_ptr, int center_x, int y_pos, int color_mode, ...)
    ADD ESP,0x18                        ; 004cdec7
    ADD ESP,0x1000                      ; 004cdeca
    POP EBP                             ; 004cded0
    POP EDI                             ; 004cded1
    POP ESI                             ; 004cded2
    POP EBX                             ; 004cded3
    RET                                 ; 004cded4

