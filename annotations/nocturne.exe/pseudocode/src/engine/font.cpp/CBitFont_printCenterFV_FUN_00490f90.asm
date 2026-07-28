; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_printCenterFV_FUN_00490f90(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format_string,va_list_t args)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   color_mode
; int              Stack[0x10]:4   color_value
; char *           Stack[0x14]:4   format_string
; va_list_t        Stack[0x18]:4   args
;
; XREF[1]:
;   engine_font.cpp_CBitFont_printCenterF_FUN_00490f50 at 00490f7c
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490f90
        ;   Label: engine_font.cpp_CBitFont_printCenterFV_FUN_00490f90
    PUSH ESI                            ; 00490f91
    PUSH EDI                            ; 00490f92
    PUSH EBP                            ; 00490f93
    SUB ESP,0x1000                      ; 00490f94
    MOV EDX,dword ptr [ESP + 0x1028]    ; 00490f9a
    PUSH EDX                            ; 00490fa1
    MOV ECX,dword ptr [ESP + 0x1028]    ; 00490fa2
    PUSH ECX                            ; 00490fa9
    LEA EAX,[ESP + 0x8]                 ; 00490faa
    PUSH EAX                            ; 00490fae
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 00490faf
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00490fb4
    MOV EAX,ESP                         ; 00490fb7
    PUSH EAX                            ; 00490fb9
    MOV EBX,dword ptr [ESP + 0x1024]    ; 00490fba
    PUSH EBX                            ; 00490fc1
    MOV ESI,dword ptr [ESP + 0x1024]    ; 00490fc2
    PUSH ESI                            ; 00490fc9
    MOV EDI,dword ptr [ESP + 0x1024]    ; 00490fca
    PUSH EDI                            ; 00490fd1
    MOV EBP,dword ptr [ESP + 0x1024]    ; 00490fd2
    PUSH EBP                            ; 00490fd9
    CALL engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0 ; 00490fda
        ;   XREF to: 00490ef0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0(CBitFont * this_ptr, int y, int color_mode, int color_value, ...)
    ADD ESP,0x14                        ; 00490fdf
    ADD ESP,0x1000                      ; 00490fe2
    POP EBP                             ; 00490fe8
    POP EDI                             ; 00490fe9
    POP ESI                             ; 00490fea
    POP EBX                             ; 00490feb
    RET                                 ; 00490fec

