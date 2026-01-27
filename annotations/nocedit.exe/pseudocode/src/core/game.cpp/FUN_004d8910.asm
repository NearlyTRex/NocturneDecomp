; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_game.cpp_FUN_004d8910()
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; Referenced Globals:
;   TerminatedCString s_s_s_0062b28d
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CBitFont* g_ThemeFont
;   int INT_02d831c4
;   int INT_02d831c8
;   int INT_02d831cc
;
; Called Functions:
;   core_menu.cpp_getKeyDisplayName_FUN_005134e0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8910
        ;   Label: core_game.cpp_FUN_004d8910
    PUSH ESI                            ; 004d8911
    PUSH EDI                            ; 004d8912
    PUSH EBP                            ; 004d8913
    SUB ESP,0x100                       ; 004d8914
    MOV EDX,dword ptr [ESP + 0x118]     ; 004d891a
    PUSH EDX                            ; 004d8921
    MOV ECX,dword ptr [ESP + 0x118]     ; 004d8922
    PUSH ECX                            ; 004d8929
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d892a
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004d892f
    PUSH EAX                            ; 004d8932
    PUSH 0x62b28d                       ; 004d8933 | = "%s = %s"
    LEA EAX,[ESP + 0xc]                 ; 004d8938
    PUSH EAX                            ; 004d893c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d893d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d8942
    PUSH -0x1                           ; 004d8945
    PUSH 0x7                            ; 004d8947
    MOV EBX,dword ptr [0x02d831c8]      ; 004d8949 | INT_02d831c8
    PUSH EBX                            ; 004d894f
    MOV ESI,dword ptr [0x02d831c4]      ; 004d8950 | INT_02d831c4
    PUSH ESI                            ; 004d8956
    LEA EAX,[ESP + 0x10]                ; 004d8957
    PUSH EAX                            ; 004d895b
    MOV EDI,dword ptr [0x020a5720]      ; 004d895c | g_ThemeFont
    PUSH EDI                            ; 004d8962
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d8963
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    MOV EAX,[0x02d831cc]                ; 004d8968 | INT_02d831cc
    MOV EBP,dword ptr [0x02d831c8]      ; 004d896d | INT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d8973 | g_WindowHeight
    ADD EBP,EAX                         ; 004d8979
    SHL EAX,0x2                         ; 004d897b
    ADD ESP,0x18                        ; 004d897e
    SUB EDX,EAX                         ; 004d8981
    MOV dword ptr [0x02d831c8],EBP      ; 004d8983 | INT_02d831c8
    CMP EDX,EBP                         ; 004d8989
    JL 0x004d8998                       ; 004d898b
        ;   XREF to: 004d8998 (CONDITIONAL_JUMP)  ; LAB_004d8998
    ADD ESP,0x100                       ; 004d898d
    POP EBP                             ; 004d8993
    POP EDI                             ; 004d8994
    POP ESI                             ; 004d8995
    POP EBX                             ; 004d8996
    RET                                 ; 004d8997
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8998 | INT_02d831cc
        ;   Label: LAB_004d8998
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d899e
    SUB EAX,EDX                         ; 004d89a5
    ADD EAX,EAX                         ; 004d89a7
    MOV [0x02d831c8],EAX                ; 004d89a9 | INT_02d831c8
    MOV EAX,[0x00679394]                ; 004d89ae | g_WindowWidth
    MOV EDX,EAX                         ; 004d89b3
    MOV ECX,0x3                         ; 004d89b5
    SAR EDX,0x1f                        ; 004d89ba
    IDIV ECX                            ; 004d89bd
    ADD dword ptr [0x02d831c4],EAX      ; 004d89bf | INT_02d831c4
    ADD ESP,0x100                       ; 004d89c5
    POP EBP                             ; 004d89cb
    POP EDI                             ; 004d89cc
    POP ESI                             ; 004d89cd
    POP EBX                             ; 004d89ce
    RET                                 ; 004d89cf

