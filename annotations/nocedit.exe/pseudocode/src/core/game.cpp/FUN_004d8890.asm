; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_FUN_004d8890(void)
;
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CBitFont* g_ThemeFont
;   int INT_02d831c4
;   int INT_02d831c8
;   int INT_02d831cc
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8890
        ;   Label: core_game.cpp_FUN_004d8890
    PUSH ESI                            ; 004d8891
    PUSH EDI                            ; 004d8892
    PUSH -0x1                           ; 004d8893
    PUSH 0x7                            ; 004d8895
    MOV EDX,dword ptr [0x02d831c8]      ; 004d8897 | INT_02d831c8
    PUSH EDX                            ; 004d889d
    MOV ECX,dword ptr [0x02d831c4]      ; 004d889e | INT_02d831c4
    PUSH ECX                            ; 004d88a4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004d88a5
    PUSH EBX                            ; 004d88a9
    MOV ESI,dword ptr [0x020a5720]      ; 004d88aa | g_ThemeFont
    PUSH ESI                            ; 004d88b0
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d88b1
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    MOV EAX,[0x02d831cc]                ; 004d88b6 | INT_02d831cc
    MOV EDI,dword ptr [0x02d831c8]      ; 004d88bb | INT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d88c1 | g_WindowHeight
    ADD EDI,EAX                         ; 004d88c7
    SHL EAX,0x2                         ; 004d88c9
    ADD ESP,0x18                        ; 004d88cc
    SUB EDX,EAX                         ; 004d88cf
    MOV dword ptr [0x02d831c8],EDI      ; 004d88d1 | INT_02d831c8
    CMP EDX,EDI                         ; 004d88d7
    JL 0x004d88df                       ; 004d88d9
        ;   XREF to: 004d88df (CONDITIONAL_JUMP)  ; LAB_004d88df
    POP EDI                             ; 004d88db
    POP ESI                             ; 004d88dc
    POP EBX                             ; 004d88dd
    RET                                 ; 004d88de
    MOV EDX,dword ptr [0x02d831cc]      ; 004d88df | INT_02d831cc
        ;   Label: LAB_004d88df
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d88e5
    SUB EAX,EDX                         ; 004d88ec
    ADD EAX,EAX                         ; 004d88ee
    MOV [0x02d831c8],EAX                ; 004d88f0 | INT_02d831c8
    MOV EAX,[0x00679394]                ; 004d88f5 | g_WindowWidth
    MOV EDX,EAX                         ; 004d88fa
    MOV ECX,0x3                         ; 004d88fc
    SAR EDX,0x1f                        ; 004d8901
    IDIV ECX                            ; 004d8904
    ADD dword ptr [0x02d831c4],EAX      ; 004d8906 | INT_02d831c4
    POP EDI                             ; 004d890c
    POP ESI                             ; 004d890d
    POP EBX                             ; 004d890e
    RET                                 ; 004d890f

