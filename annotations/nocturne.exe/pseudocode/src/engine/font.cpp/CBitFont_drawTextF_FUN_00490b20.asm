; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextF_FUN_00490b20(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format_string)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format_string
;
; XREF[1]:
;   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_00493760 at 00493ac9
;
; Called Functions:
;   engine_font.cpp_CBitFont_FUN_00490b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490b20
        ;   Label: engine_font.cpp_CBitFont_drawTextF_FUN_00490b20
    PUSH ESI                            ; 00490b21
    PUSH EDI                            ; 00490b22
    PUSH EBP                            ; 00490b23
    SUB ESP,0x4                         ; 00490b24
    LEA EAX,[ESP + 0x30]                ; 00490b27
    MOV dword ptr [ESP],EAX             ; 00490b2b
    MOV EAX,ESP                         ; 00490b2e
    PUSH EAX                            ; 00490b30
    MOV EDX,dword ptr [ESP + 0x30]      ; 00490b31
    PUSH EDX                            ; 00490b35
    MOV ECX,dword ptr [ESP + 0x30]      ; 00490b36
    PUSH ECX                            ; 00490b3a
    MOV EBX,dword ptr [ESP + 0x30]      ; 00490b3b
    PUSH EBX                            ; 00490b3f
    MOV ESI,dword ptr [ESP + 0x30]      ; 00490b40
    PUSH ESI                            ; 00490b44
    MOV EDI,dword ptr [ESP + 0x30]      ; 00490b45
    PUSH EDI                            ; 00490b49
    MOV EBP,dword ptr [ESP + 0x30]      ; 00490b4a
    PUSH EBP                            ; 00490b4e
    CALL engine_font.cpp_CBitFont_FUN_00490b70 ; 00490b4f
        ;   XREF to: 00490b70 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_FUN_00490b70(CBitFont * this_ptr, int x_pos, int y_pos, int color_mode, ...)
    ADD ESP,0x1c                        ; 00490b54
    XOR EDX,EDX                         ; 00490b57
    MOV dword ptr [ESP],EDX             ; 00490b59
    ADD ESP,0x4                         ; 00490b5c
    POP EBP                             ; 00490b5f
    POP EDI                             ; 00490b60
    POP ESI                             ; 00490b61
    POP EBX                             ; 00490b62
    RET                                 ; 00490b63

