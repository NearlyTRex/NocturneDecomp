; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_drawCreditsLine_FUN_004ccafe(char *text_string)
;
; Parameters:
; char *           Stack[0x4]:4   text_string
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0152d244
;   undefined4 DAT_01cd0c4c
;   undefined4 DAT_01cd0c50
;   undefined4 DAT_01cd0c54
;
; Called Functions:
;   engine_font.cpp_FUN_004c1dd0
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 004ccafe
        ;   Label: core_game.cpp_drawCreditsLine_FUN_004ccafe
    PUSH EBX                            ; 004ccb00
    PUSH ESI                            ; 004ccb01
    PUSH EDI                            ; 004ccb02
    PUSH -0x1                           ; 004ccb03
    PUSH 0x7                            ; 004ccb05
    MOV EDX,dword ptr [0x01cd0c50]      ; 004ccb07 | DAT_01cd0c50
    PUSH EDX                            ; 004ccb0d
    MOV ECX,dword ptr [0x01cd0c4c]      ; 004ccb0e | DAT_01cd0c4c
    PUSH ECX                            ; 004ccb14
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ccb15
    PUSH EBX                            ; 004ccb19
    MOV ESI,dword ptr [0x0152d244]      ; 004ccb1a | DAT_0152d244
    PUSH ESI                            ; 004ccb20
    CALL engine_font.cpp_FUN_004c1dd0   ; 004ccb21
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ccb26 | DAT_01cd0c54
    MOV EDI,dword ptr [0x01cd0c50]      ; 004ccb2b | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004ccb31 | DAT_0061b49c
    ADD EDI,EAX                         ; 004ccb37
    SHL EAX,0x2                         ; 004ccb39
    ADD ESP,0x18                        ; 004ccb3c
    SUB EDX,EAX                         ; 004ccb3f
    MOV dword ptr [0x01cd0c50],EDI      ; 004ccb41 | DAT_01cd0c50
    CMP EDX,EDI                         ; 004ccb47
    JL 0x004ccb4f                       ; 004ccb49
        ;   XREF to: 004ccb4f (CONDITIONAL_JUMP)  ; LAB_004ccb4f
    POP EDI                             ; 004ccb4b
    POP ESI                             ; 004ccb4c
    POP EBX                             ; 004ccb4d
    RET                                 ; 004ccb4e
    MOV EDX,dword ptr [0x01cd0c54]      ; 004ccb4f | DAT_01cd0c54
        ;   Label: LAB_004ccb4f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ccb55
    SUB EAX,EDX                         ; 004ccb5c
    ADD EAX,EAX                         ; 004ccb5e
    MOV [0x01cd0c50],EAX                ; 004ccb60 | DAT_01cd0c50
    MOV EAX,[0x0061b498]                ; 004ccb65 | DAT_0061b498
    MOV EDX,EAX                         ; 004ccb6a
    MOV ECX,0x3                         ; 004ccb6c
    SAR EDX,0x1f                        ; 004ccb71
    IDIV ECX                            ; 004ccb74
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ccb76 | DAT_01cd0c4c
    POP EDI                             ; 004ccb7c
    POP ESI                             ; 004ccb7d
    POP EBX                             ; 004ccb7e
    RET                                 ; 004ccb7f

