; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004c21e0(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6 ,undefined4 param_7)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004c2190 at 004c21bf
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005bfb18
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004c2150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c21e0
        ;   Label: engine_font.cpp_FUN_004c21e0
    PUSH ESI                            ; 004c21e1
    PUSH EDI                            ; 004c21e2
    PUSH EBP                            ; 004c21e3
    SUB ESP,0x1000                      ; 004c21e4
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004c21ea
    PUSH EDX                            ; 004c21f1
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004c21f2
    PUSH ECX                            ; 004c21f9
    LEA EAX,[ESP + 0x8]                 ; 004c21fa
    PUSH EAX                            ; 004c21fe
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 004c21ff
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 004c2204
    MOV EAX,ESP                         ; 004c2207
    PUSH EAX                            ; 004c2209
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004c220a
    PUSH EBX                            ; 004c2211
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004c2212
    PUSH ESI                            ; 004c2219
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004c221a
    PUSH EDI                            ; 004c2221
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004c2222
    PUSH EBP                            ; 004c2229
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004c222a
    PUSH EAX                            ; 004c2231
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004c2150 ; 004c2232
        ;   XREF to: 004c2150 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextRight_FUN_004c2150(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004c2237
    ADD ESP,0x1000                      ; 004c223a
    POP EBP                             ; 004c2240
    POP EDI                             ; 004c2241
    POP ESI                             ; 004c2242
    POP EBX                             ; 004c2243
    RET                                 ; 004c2244

