; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_font_cpp_CBitFont_drawTextFV_FUN_004cdc20 (CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string ,...)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format_string
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850 at 004d0bb9
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdc20
        ;   Label: engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20
    PUSH ESI                            ; 004cdc21
    PUSH EDI                            ; 004cdc22
    PUSH EBP                            ; 004cdc23
    SUB ESP,0x4                         ; 004cdc24
    LEA EAX,[ESP + 0x30]                ; 004cdc27
    MOV dword ptr [ESP],EAX             ; 004cdc2b
    MOV EAX,ESP                         ; 004cdc2e
    PUSH EAX                            ; 004cdc30
    MOV EDX,dword ptr [ESP + 0x30]      ; 004cdc31
    PUSH EDX                            ; 004cdc35
    MOV ECX,dword ptr [ESP + 0x30]      ; 004cdc36
    PUSH ECX                            ; 004cdc3a
    MOV EBX,dword ptr [ESP + 0x30]      ; 004cdc3b
    PUSH EBX                            ; 004cdc3f
    MOV ESI,dword ptr [ESP + 0x30]      ; 004cdc40
    PUSH ESI                            ; 004cdc44
    MOV EDI,dword ptr [ESP + 0x30]      ; 004cdc45
    PUSH EDI                            ; 004cdc49
    MOV EBP,dword ptr [ESP + 0x30]      ; 004cdc4a
    PUSH EBP                            ; 004cdc4e
    CALL engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70 ; 004cdc4f
        ;   XREF to: 004cdc70 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70(CBitFont * this_ptr, int x_pos, int y_pos, int color_mode, ...)
    ADD ESP,0x1c                        ; 004cdc54
    XOR EDX,EDX                         ; 004cdc57
    MOV dword ptr [ESP],EDX             ; 004cdc59
    ADD ESP,0x4                         ; 004cdc5c
    POP EBP                             ; 004cdc5f
    POP EDI                             ; 004cdc60
    POP ESI                             ; 004cdc61
    POP EBX                             ; 004cdc62
    RET                                 ; 004cdc63

