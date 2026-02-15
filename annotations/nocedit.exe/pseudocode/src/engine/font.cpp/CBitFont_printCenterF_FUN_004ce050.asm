; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_printCenterF_FUN_004ce050(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format,...)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   color_mode
; int              Stack[0x10]:4   color_value
; char *           Stack[0x14]:4   format
; Local Variables:
; va_list_t        Stack[-0x14]:4  local_14
;
; Called Functions:
;   engine_font.cpp_CBitFont_printCenterFV_FUN_004ce090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce050
        ;   Label: engine_font.cpp_CBitFont_printCenterF_FUN_004ce050
    PUSH ESI                            ; 004ce051
    PUSH EDI                            ; 004ce052
    PUSH EBP                            ; 004ce053
    SUB ESP,0x4                         ; 004ce054
    LEA EAX,[ESP + 0x2c]                ; 004ce057
    MOV dword ptr [ESP],EAX             ; 004ce05b
    MOV EAX,ESP                         ; 004ce05e
    PUSH EAX                            ; 004ce060
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004ce061
    PUSH EDX                            ; 004ce065
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004ce066
    PUSH ECX                            ; 004ce06a
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004ce06b
    PUSH EBX                            ; 004ce06f
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004ce070
    PUSH ESI                            ; 004ce074
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004ce075
    PUSH EDI                            ; 004ce079
    XOR EBP,EBP                         ; 004ce07a
    CALL engine_font.cpp_CBitFont_printCenterFV_FUN_004ce090 ; 004ce07c
        ;   XREF to: 004ce090 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_printCenterFV_FUN_004ce090(CBitFont * this_ptr, int y, int color_mode, int color_value, ...)
    ADD ESP,0x18                        ; 004ce081
    MOV dword ptr [ESP],EBP             ; 004ce084
    ADD ESP,0x4                         ; 004ce087
    POP EBP                             ; 004ce08a
    POP EDI                             ; 004ce08b
    POP ESI                             ; 004ce08c
    POP EBX                             ; 004ce08d
    RET                                 ; 004ce08e

