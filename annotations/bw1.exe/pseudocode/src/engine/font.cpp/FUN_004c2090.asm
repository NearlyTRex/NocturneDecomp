; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004c2090(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   engine_font.cpp_FUN_004c20e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2090
        ;   Label: engine_font.cpp_FUN_004c2090
    PUSH ESI                            ; 004c2091
    PUSH EDI                            ; 004c2092
    PUSH EBP                            ; 004c2093
    SUB ESP,0x4                         ; 004c2094
    LEA EAX,[ESP + 0x30]                ; 004c2097
    MOV dword ptr [ESP],EAX             ; 004c209b
    MOV EAX,ESP                         ; 004c209e
    PUSH EAX                            ; 004c20a0
    MOV EDX,dword ptr [ESP + 0x30]      ; 004c20a1
    PUSH EDX                            ; 004c20a5
    MOV ECX,dword ptr [ESP + 0x30]      ; 004c20a6
    PUSH ECX                            ; 004c20aa
    MOV EBX,dword ptr [ESP + 0x30]      ; 004c20ab
    PUSH EBX                            ; 004c20af
    MOV ESI,dword ptr [ESP + 0x30]      ; 004c20b0
    PUSH ESI                            ; 004c20b4
    MOV EDI,dword ptr [ESP + 0x30]      ; 004c20b5
    PUSH EDI                            ; 004c20b9
    MOV EBP,dword ptr [ESP + 0x30]      ; 004c20ba
    PUSH EBP                            ; 004c20be
    CALL engine_font.cpp_FUN_004c20e0   ; 004c20bf
        ;   XREF to: 004c20e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c20e0(CBitFont * this_ptr, int x_pos, int y_pos, int color_mode, ...)
    ADD ESP,0x1c                        ; 004c20c4
    XOR EDX,EDX                         ; 004c20c7
    MOV dword ptr [ESP],EDX             ; 004c20c9
    ADD ESP,0x4                         ; 004c20cc
    POP EBP                             ; 004c20cf
    POP EDI                             ; 004c20d0
    POP ESI                             ; 004c20d1
    POP EBX                             ; 004c20d2
    RET                                 ; 004c20d3

