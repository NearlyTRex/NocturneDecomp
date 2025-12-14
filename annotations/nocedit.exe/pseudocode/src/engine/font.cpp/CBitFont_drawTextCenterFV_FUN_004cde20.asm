; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004cde20(CBitFont * this_ptr, int x_pos, int y_pos, int color_mode, int color_value, char * format_string, ...)
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
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cde20
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004cde20
    PUSH ESI                            ; 004cde21
    PUSH EDI                            ; 004cde22
    PUSH EBP                            ; 004cde23
    SUB ESP,0x4                         ; 004cde24
    LEA EAX,[ESP + 0x30]                ; 004cde27
    MOV dword ptr [ESP],EAX             ; 004cde2b
    MOV EAX,ESP                         ; 004cde2e
    PUSH EAX                            ; 004cde30
    MOV EDX,dword ptr [ESP + 0x30]      ; 004cde31
    PUSH EDX                            ; 004cde35
    MOV ECX,dword ptr [ESP + 0x30]      ; 004cde36
    PUSH ECX                            ; 004cde3a
    MOV EBX,dword ptr [ESP + 0x30]      ; 004cde3b
    PUSH EBX                            ; 004cde3f
    MOV ESI,dword ptr [ESP + 0x30]      ; 004cde40
    PUSH ESI                            ; 004cde44
    MOV EDI,dword ptr [ESP + 0x30]      ; 004cde45
    PUSH EDI                            ; 004cde49
    MOV EBP,dword ptr [ESP + 0x30]      ; 004cde4a
    PUSH EBP                            ; 004cde4e
    CALL engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70 ; 004cde4f
        ;   XREF to: 004cde70 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70(CBitFont * this_ptr, int center_x, int y_pos, int color_mode, ...)
    ADD ESP,0x1c                        ; 004cde54
    XOR EDX,EDX                         ; 004cde57
    MOV dword ptr [ESP],EDX             ; 004cde59
    ADD ESP,0x4                         ; 004cde5c
    POP EBP                             ; 004cde5f
    POP EDI                             ; 004cde60
    POP ESI                             ; 004cde61
    POP EBX                             ; 004cde62
    RET                                 ; 004cde63

