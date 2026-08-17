; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenterF_FUN_00490d20(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format_string,... )
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format_string
;
; Called Functions:
;   engine_font.cpp_CBitFont_FUN_00490d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490d20
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterF_FUN_00490d20
    PUSH ESI                            ; 00490d21
    PUSH EDI                            ; 00490d22
    PUSH EBP                            ; 00490d23
    SUB ESP,0x4                         ; 00490d24
    LEA EAX,[ESP + 0x30]                ; 00490d27
    MOV dword ptr [ESP],EAX             ; 00490d2b
    MOV EAX,ESP                         ; 00490d2e
    PUSH EAX                            ; 00490d30
    MOV EDX,dword ptr [ESP + 0x30]      ; 00490d31
    PUSH EDX                            ; 00490d35
    MOV ECX,dword ptr [ESP + 0x30]      ; 00490d36
    PUSH ECX                            ; 00490d3a
    MOV EBX,dword ptr [ESP + 0x30]      ; 00490d3b
    PUSH EBX                            ; 00490d3f
    MOV ESI,dword ptr [ESP + 0x30]      ; 00490d40
    PUSH ESI                            ; 00490d44
    MOV EDI,dword ptr [ESP + 0x30]      ; 00490d45
    PUSH EDI                            ; 00490d49
    MOV EBP,dword ptr [ESP + 0x30]      ; 00490d4a
    PUSH EBP                            ; 00490d4e
    CALL engine_font.cpp_CBitFont_FUN_00490d70 ; 00490d4f
        ;   XREF to: 00490d70 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_FUN_00490d70(CBitFont * this_ptr, int center_x, int y_pos, int color_mode, ...)
    ADD ESP,0x1c                        ; 00490d54
    XOR EDX,EDX                         ; 00490d57
    MOV dword ptr [ESP],EDX             ; 00490d59
    ADD ESP,0x4                         ; 00490d5c
    POP EBP                             ; 00490d5f
    POP EDI                             ; 00490d60
    POP ESI                             ; 00490d61
    POP EBX                             ; 00490d62
    RET                                 ; 00490d63

