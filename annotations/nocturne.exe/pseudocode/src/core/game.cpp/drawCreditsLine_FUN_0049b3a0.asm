; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_drawCreditsLine_FUN_0049b3a0(char *text_string)
;
; Parameters:
; char *           Stack[0x4]:4   text_string
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_014b9900
;   undefined4 DAT_01c78adc
;   undefined4 DAT_01c78ae0
;   undefined4 DAT_01c78ae4
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b3a0
        ;   Label: core_game.cpp_drawCreditsLine_FUN_0049b3a0
    PUSH ESI                            ; 0049b3a1
    PUSH EDI                            ; 0049b3a2
    PUSH -0x1                           ; 0049b3a3
    PUSH 0x7                            ; 0049b3a5
    MOV EDX,dword ptr [0x01c78ae0]      ; 0049b3a7 | DAT_01c78ae0
    PUSH EDX                            ; 0049b3ad
    MOV ECX,dword ptr [0x01c78adc]      ; 0049b3ae | DAT_01c78adc
    PUSH ECX                            ; 0049b3b4
    MOV EBX,dword ptr [ESP + 0x20]      ; 0049b3b5
    PUSH EBX                            ; 0049b3b9
    MOV ESI,dword ptr [0x014b9900]      ; 0049b3ba | DAT_014b9900
    PUSH ESI                            ; 0049b3c0
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049b3c1
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x01c78ae4]                ; 0049b3c6 | DAT_01c78ae4
    MOV EDI,dword ptr [0x01c78ae0]      ; 0049b3cb | DAT_01c78ae0
    MOV EDX,dword ptr [0x005b7620]      ; 0049b3d1 | DAT_005b7620
    ADD EDI,EAX                         ; 0049b3d7
    SHL EAX,0x2                         ; 0049b3d9
    ADD ESP,0x18                        ; 0049b3dc
    SUB EDX,EAX                         ; 0049b3df
    MOV dword ptr [0x01c78ae0],EDI      ; 0049b3e1 | DAT_01c78ae0
    CMP EDX,EDI                         ; 0049b3e7
    JL 0x0049b3ef                       ; 0049b3e9
        ;   XREF to: 0049b3ef (CONDITIONAL_JUMP)  ; LAB_0049b3ef
    POP EDI                             ; 0049b3eb
    POP ESI                             ; 0049b3ec
    POP EBX                             ; 0049b3ed
    RET                                 ; 0049b3ee
    MOV EDX,dword ptr [0x01c78ae4]      ; 0049b3ef | DAT_01c78ae4
        ;   Label: LAB_0049b3ef
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049b3f5
    SUB EAX,EDX                         ; 0049b3fc
    ADD EAX,EAX                         ; 0049b3fe
    MOV [0x01c78ae0],EAX                ; 0049b400 | DAT_01c78ae0
    MOV EAX,[0x005b761c]                ; 0049b405 | DAT_005b761c
    MOV EDX,EAX                         ; 0049b40a
    MOV ECX,0x3                         ; 0049b40c
    SAR EDX,0x1f                        ; 0049b411
    IDIV ECX                            ; 0049b414
    ADD dword ptr [0x01c78adc],EAX      ; 0049b416 | DAT_01c78adc
    POP EDI                             ; 0049b41c
    POP ESI                             ; 0049b41d
    POP EBX                             ; 0049b41e
    RET                                 ; 0049b41f

