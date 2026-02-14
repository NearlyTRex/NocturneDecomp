; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_font_cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format_string,va_list_t args)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   color_mode
; int              Stack[0x10]:4   color_value
; char *           Stack[0x14]:4   format_string
; va_list_t        Stack[0x18]:4   args
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
;
; XREF[1]:
;   engine_font.cpp_CBitFont_printfCenterInClip_FUN_004ce050 at 004ce07c
;
; Called Functions:
;   crt_stdio.c__vsprintf_FUN_005fdba8
;   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce090
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090
    PUSH ESI                            ; 004ce091
    PUSH EDI                            ; 004ce092
    PUSH EBP                            ; 004ce093
    SUB ESP,0x1000                      ; 004ce094
    MOV EDX,dword ptr [ESP + 0x1028]    ; 004ce09a
    PUSH EDX                            ; 004ce0a1
    MOV ECX,dword ptr [ESP + 0x1028]    ; 004ce0a2
    PUSH ECX                            ; 004ce0a9
    LEA EAX,[ESP + 0x8]                 ; 004ce0aa
    PUSH EAX                            ; 004ce0ae
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 004ce0af
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004ce0b4
    MOV EAX,ESP                         ; 004ce0b7
    PUSH EAX                            ; 004ce0b9
    MOV EBX,dword ptr [ESP + 0x1024]    ; 004ce0ba
    PUSH EBX                            ; 004ce0c1
    MOV ESI,dword ptr [ESP + 0x1024]    ; 004ce0c2
    PUSH ESI                            ; 004ce0c9
    MOV EDI,dword ptr [ESP + 0x1024]    ; 004ce0ca
    PUSH EDI                            ; 004ce0d1
    MOV EBP,dword ptr [ESP + 0x1024]    ; 004ce0d2
    PUSH EBP                            ; 004ce0d9
    CALL engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0 ; 004ce0da
        ;   XREF to: 004cdff0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0(CBitFont * this_ptr, int y, int color_mode, int color_value, ...)
    ADD ESP,0x14                        ; 004ce0df
    ADD ESP,0x1000                      ; 004ce0e2
    POP EBP                             ; 004ce0e8
    POP EDI                             ; 004ce0e9
    POP ESI                             ; 004ce0ea
    POP EBX                             ; 004ce0eb
    RET                                 ; 004ce0ec

