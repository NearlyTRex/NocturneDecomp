; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextF_FUN_004b0ce0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format_string)
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
;   engine_font.cpp_CBitFont_drawTextFV_FUN_004b0d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0ce0
        ;   Label: engine_font.cpp_CBitFont_drawTextF_FUN_004b0ce0
    PUSH ESI                            ; 004b0ce1
    PUSH EDI                            ; 004b0ce2
    PUSH EBP                            ; 004b0ce3
    SUB ESP,0x4                         ; 004b0ce4
    LEA EAX,[ESP + 0x30]                ; 004b0ce7
    MOV dword ptr [ESP],EAX             ; 004b0ceb
    MOV EAX,ESP                         ; 004b0cee
    PUSH EAX                            ; 004b0cf0
    MOV EDX,dword ptr [ESP + 0x30]      ; 004b0cf1
    PUSH EDX                            ; 004b0cf5
    MOV ECX,dword ptr [ESP + 0x30]      ; 004b0cf6
    PUSH ECX                            ; 004b0cfa
    MOV EBX,dword ptr [ESP + 0x30]      ; 004b0cfb
    PUSH EBX                            ; 004b0cff
    MOV ESI,dword ptr [ESP + 0x30]      ; 004b0d00
    PUSH ESI                            ; 004b0d04
    MOV EDI,dword ptr [ESP + 0x30]      ; 004b0d05
    PUSH EDI                            ; 004b0d09
    MOV EBP,dword ptr [ESP + 0x30]      ; 004b0d0a
    PUSH EBP                            ; 004b0d0e
    CALL engine_font.cpp_CBitFont_drawTextFV_FUN_004b0d30 ; 004b0d0f
        ;   XREF to: 004b0d30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextFV_FUN_004b0d30(CBitFont * this_ptr, int x_pos, int y_pos, int color_mode, ...)
    ADD ESP,0x1c                        ; 004b0d14
    XOR EDX,EDX                         ; 004b0d17
    MOV dword ptr [ESP],EDX             ; 004b0d19
    ADD ESP,0x4                         ; 004b0d1c
    POP EBP                             ; 004b0d1f
    POP EDI                             ; 004b0d20
    POP ESI                             ; 004b0d21
    POP EBX                             ; 004b0d22
    RET                                 ; 004b0d23

