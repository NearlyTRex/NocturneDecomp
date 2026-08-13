; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_FUN_00490c70(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format,va_list_t args)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format
; va_list_t        Stack[0x1c]:4   args
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
;
; XREF[1]:
;   engine_font.cpp_CBitFont_printF_FUN_00490c20 at 00490c4f
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_font.cpp_CBitFont_drawTextRight_FUN_00490be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490c70
        ;   Label: engine_font.cpp_CBitFont_FUN_00490c70
    PUSH ESI                            ; 00490c71
    PUSH EDI                            ; 00490c72
    PUSH EBP                            ; 00490c73
    SUB ESP,0x1000                      ; 00490c74
    MOV EDX,dword ptr [ESP + 0x102c]    ; 00490c7a
    PUSH EDX                            ; 00490c81
    MOV ECX,dword ptr [ESP + 0x102c]    ; 00490c82
    PUSH ECX                            ; 00490c89
    LEA EAX,[ESP + 0x8]                 ; 00490c8a
    PUSH EAX                            ; 00490c8e
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 00490c8f
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00490c94
    MOV EAX,ESP                         ; 00490c97
    PUSH EAX                            ; 00490c99
    MOV EBX,dword ptr [ESP + 0x1028]    ; 00490c9a
    PUSH EBX                            ; 00490ca1
    MOV ESI,dword ptr [ESP + 0x1028]    ; 00490ca2
    PUSH ESI                            ; 00490ca9
    MOV EDI,dword ptr [ESP + 0x1028]    ; 00490caa
    PUSH EDI                            ; 00490cb1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 00490cb2
    PUSH EBP                            ; 00490cb9
    MOV EAX,dword ptr [ESP + 0x1028]    ; 00490cba
    PUSH EAX                            ; 00490cc1
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_00490be0 ; 00490cc2
        ;   XREF to: 00490be0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextRight_FUN_00490be0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 00490cc7
    ADD ESP,0x1000                      ; 00490cca
    POP EBP                             ; 00490cd0
    POP EDI                             ; 00490cd1
    POP ESI                             ; 00490cd2
    POP EBX                             ; 00490cd3
    RET                                 ; 00490cd4

