; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenterF_FUN_004c2290(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format_string)
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
;   engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004c22e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2290
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterF_FUN_004c2290
    PUSH ESI                            ; 004c2291
    PUSH EDI                            ; 004c2292
    PUSH EBP                            ; 004c2293
    SUB ESP,0x4                         ; 004c2294
    LEA EAX,[ESP + 0x30]                ; 004c2297
    MOV dword ptr [ESP],EAX             ; 004c229b
    MOV EAX,ESP                         ; 004c229e
    PUSH EAX                            ; 004c22a0
    MOV EDX,dword ptr [ESP + 0x30]      ; 004c22a1
    PUSH EDX                            ; 004c22a5
    MOV ECX,dword ptr [ESP + 0x30]      ; 004c22a6
    PUSH ECX                            ; 004c22aa
    MOV EBX,dword ptr [ESP + 0x30]      ; 004c22ab
    PUSH EBX                            ; 004c22af
    MOV ESI,dword ptr [ESP + 0x30]      ; 004c22b0
    PUSH ESI                            ; 004c22b4
    MOV EDI,dword ptr [ESP + 0x30]      ; 004c22b5
    PUSH EDI                            ; 004c22b9
    MOV EBP,dword ptr [ESP + 0x30]      ; 004c22ba
    PUSH EBP                            ; 004c22be
    CALL engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004c22e0 ; 004c22bf
        ;   XREF to: 004c22e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004c22e0(CBitFont * this_ptr, int center_x, int y_pos, int color_mode, ...)
    ADD ESP,0x1c                        ; 004c22c4
    XOR EDX,EDX                         ; 004c22c7
    MOV dword ptr [ESP],EDX             ; 004c22c9
    ADD ESP,0x4                         ; 004c22cc
    POP EBP                             ; 004c22cf
    POP EDI                             ; 004c22d0
    POP ESI                             ; 004c22d1
    POP EBX                             ; 004c22d2
    RET                                 ; 004c22d3

