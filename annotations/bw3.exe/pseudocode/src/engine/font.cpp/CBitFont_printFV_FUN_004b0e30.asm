; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_printFV_FUN_004b0e30(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format,va_list_t args)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format
; va_list_t        Stack[0x1c]:4   args
;
; XREF[1]:
;   engine_font.cpp_CBitFont_printF_FUN_004b0de0 at 004b0e0f
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005a2898
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004b0da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0e30
        ;   Label: engine_font.cpp_CBitFont_printFV_FUN_004b0e30
    PUSH ESI                            ; 004b0e31
    PUSH EDI                            ; 004b0e32
    PUSH EBP                            ; 004b0e33
    SUB ESP,0x1000                      ; 004b0e34
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004b0e3a
    PUSH EDX                            ; 004b0e41
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004b0e42
    PUSH ECX                            ; 004b0e49
    LEA EAX,[ESP + 0x8]                 ; 004b0e4a
    PUSH EAX                            ; 004b0e4e
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 004b0e4f
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005a2898(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004b0e54
    MOV EAX,ESP                         ; 004b0e57
    PUSH EAX                            ; 004b0e59
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004b0e5a
    PUSH EBX                            ; 004b0e61
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004b0e62
    PUSH ESI                            ; 004b0e69
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004b0e6a
    PUSH EDI                            ; 004b0e71
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004b0e72
    PUSH EBP                            ; 004b0e79
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004b0e7a
    PUSH EAX                            ; 004b0e81
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004b0da0 ; 004b0e82
        ;   XREF to: 004b0da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextRight_FUN_004b0da0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004b0e87
    ADD ESP,0x1000                      ; 004b0e8a
    POP EBP                             ; 004b0e90
    POP EDI                             ; 004b0e91
    POP ESI                             ; 004b0e92
    POP EBX                             ; 004b0e93
    RET                                 ; 004b0e94

