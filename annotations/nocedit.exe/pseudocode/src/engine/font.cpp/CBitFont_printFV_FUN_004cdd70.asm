; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_printFV_FUN_004cdd70(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format,va_list_t args)
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
; char[4096]       Stack[-0x1010]:4096  local_1010
;
; XREF[1]:
;   engine_font.cpp_CBitFont_printF_FUN_004cdd20 at 004cdd4f
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdd70
        ;   Label: engine_font.cpp_CBitFont_printFV_FUN_004cdd70
    PUSH ESI                            ; 004cdd71
    PUSH EDI                            ; 004cdd72
    PUSH EBP                            ; 004cdd73
    SUB ESP,0x1000                      ; 004cdd74
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004cdd7a
    PUSH EDX                            ; 004cdd81
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004cdd82
    PUSH ECX                            ; 004cdd89
    LEA EAX,[ESP + 0x8]                 ; 004cdd8a
    PUSH EAX                            ; 004cdd8e
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 004cdd8f
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004cdd94
    MOV EAX,ESP                         ; 004cdd97
    PUSH EAX                            ; 004cdd99
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004cdd9a
    PUSH EBX                            ; 004cdda1
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004cdda2
    PUSH ESI                            ; 004cdda9
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004cddaa
    PUSH EDI                            ; 004cddb1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004cddb2
    PUSH EBP                            ; 004cddb9
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004cddba
    PUSH EAX                            ; 004cddc1
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0 ; 004cddc2
        ;   XREF to: 004cdce0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004cddc7
    ADD ESP,0x1000                      ; 004cddca
    POP EBP                             ; 004cddd0
    POP EDI                             ; 004cddd1
    POP ESI                             ; 004cddd2
    POP EBX                             ; 004cddd3
    RET                                 ; 004cddd4

