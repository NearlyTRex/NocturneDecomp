; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_drawCreditsLine_FUN_004b3b10(char *text_string)
;
; Parameters:
; char *           Stack[0x4]:4   text_string
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01511cc0
;   undefined4 DAT_01cb80e8
;   undefined4 DAT_01cb80ec
;   undefined4 DAT_01cb80f0
;
; Called Functions:
;   engine_font.cpp_FUN_004a8df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3b10
        ;   Label: core_game.cpp_drawCreditsLine_FUN_004b3b10
    PUSH ESI                            ; 004b3b11
    PUSH EDI                            ; 004b3b12
    PUSH -0x1                           ; 004b3b13
    PUSH 0x7                            ; 004b3b15
    MOV EDX,dword ptr [0x01cb80ec]      ; 004b3b17 | DAT_01cb80ec
    PUSH EDX                            ; 004b3b1d
    MOV ECX,dword ptr [0x01cb80e8]      ; 004b3b1e | DAT_01cb80e8
    PUSH ECX                            ; 004b3b24
    MOV EBX,dword ptr [ESP + 0x20]      ; 004b3b25
    PUSH EBX                            ; 004b3b29
    MOV ESI,dword ptr [0x01511cc0]      ; 004b3b2a | DAT_01511cc0
    PUSH ESI                            ; 004b3b30
    CALL engine_font.cpp_FUN_004a8df0   ; 004b3b31
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b3b36 | DAT_01cb80f0
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b3b3b | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b3b41 | DAT_006141bc
    ADD EDI,EAX                         ; 004b3b47
    SHL EAX,0x2                         ; 004b3b49
    ADD ESP,0x18                        ; 004b3b4c
    SUB EDX,EAX                         ; 004b3b4f
    MOV dword ptr [0x01cb80ec],EDI      ; 004b3b51 | DAT_01cb80ec
    CMP EDX,EDI                         ; 004b3b57
    JL 0x004b3b5f                       ; 004b3b59
        ;   XREF to: 004b3b5f (CONDITIONAL_JUMP)  ; LAB_004b3b5f
    POP EDI                             ; 004b3b5b
    POP ESI                             ; 004b3b5c
    POP EBX                             ; 004b3b5d
    RET                                 ; 004b3b5e
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b3b5f | DAT_01cb80f0
        ;   Label: LAB_004b3b5f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b3b65
    SUB EAX,EDX                         ; 004b3b6c
    ADD EAX,EAX                         ; 004b3b6e
    MOV [0x01cb80ec],EAX                ; 004b3b70 | DAT_01cb80ec
    MOV EAX,[0x006141b8]                ; 004b3b75 | DAT_006141b8
    MOV EDX,EAX                         ; 004b3b7a
    MOV ECX,0x3                         ; 004b3b7c
    SAR EDX,0x1f                        ; 004b3b81
    IDIV ECX                            ; 004b3b84
    ADD dword ptr [0x01cb80e8],EAX      ; 004b3b86 | DAT_01cb80e8
    POP EDI                             ; 004b3b8c
    POP ESI                             ; 004b3b8d
    POP EBX                             ; 004b3b8e
    RET                                 ; 004b3b8f

