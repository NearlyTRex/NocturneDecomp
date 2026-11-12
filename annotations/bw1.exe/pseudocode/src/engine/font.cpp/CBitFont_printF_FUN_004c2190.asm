; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_printF_FUN_004c2190(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   color_mode
; int              Stack[0x14]:4   color_value
; char *           Stack[0x18]:4   format
;
; Called Functions:
;   engine_font.cpp_CBitFont_printFV_FUN_004c21e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2190
        ;   Label: engine_font.cpp_CBitFont_printF_FUN_004c2190
    PUSH ESI                            ; 004c2191
    PUSH EDI                            ; 004c2192
    PUSH EBP                            ; 004c2193
    SUB ESP,0x4                         ; 004c2194
    LEA EAX,[ESP + 0x30]                ; 004c2197
    MOV dword ptr [ESP],EAX             ; 004c219b
    MOV EAX,ESP                         ; 004c219e
    PUSH EAX                            ; 004c21a0
    MOV EDX,dword ptr [ESP + 0x30]      ; 004c21a1
    PUSH EDX                            ; 004c21a5
    MOV ECX,dword ptr [ESP + 0x30]      ; 004c21a6
    PUSH ECX                            ; 004c21aa
    MOV EBX,dword ptr [ESP + 0x30]      ; 004c21ab
    PUSH EBX                            ; 004c21af
    MOV ESI,dword ptr [ESP + 0x30]      ; 004c21b0
    PUSH ESI                            ; 004c21b4
    MOV EDI,dword ptr [ESP + 0x30]      ; 004c21b5
    PUSH EDI                            ; 004c21b9
    MOV EBP,dword ptr [ESP + 0x30]      ; 004c21ba
    PUSH EBP                            ; 004c21be
    CALL engine_font.cpp_CBitFont_printFV_FUN_004c21e0 ; 004c21bf
        ;   XREF to: 004c21e0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_printFV_FUN_004c21e0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x1c                        ; 004c21c4
    XOR EDX,EDX                         ; 004c21c7
    MOV dword ptr [ESP],EDX             ; 004c21c9
    ADD ESP,0x4                         ; 004c21cc
    POP EBP                             ; 004c21cf
    POP EDI                             ; 004c21d0
    POP ESI                             ; 004c21d1
    POP EBX                             ; 004c21d2
    RET                                 ; 004c21d3

