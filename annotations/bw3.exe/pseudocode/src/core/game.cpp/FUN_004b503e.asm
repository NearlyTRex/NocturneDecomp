; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b503e(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01549aa8
;   undefined4 DAT_01d22c54
;   undefined4 DAT_01d22c58
;   undefined4 DAT_01d22c5c
;
; Called Functions:
;   engine_font.cpp_FUN_004b0a20
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 004b503e
        ;   Label: core_game.cpp_FUN_004b503e
    PUSH EBX                            ; 004b5040
    PUSH ESI                            ; 004b5041
    PUSH EDI                            ; 004b5042
    PUSH EBP                            ; 004b5043
    PUSH -0x1                           ; 004b5044
    MOV EAX,[0x01d22c58]                ; 004b5046 | DAT_01d22c58
    PUSH 0x0                            ; 004b504b
    ADD EAX,0x2                         ; 004b504d
    PUSH EAX                            ; 004b5050
    MOV EAX,[0x01d22c54]                ; 004b5051 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b5056
    PUSH EAX                            ; 004b5059
    MOV EDX,dword ptr [ESP + 0x24]      ; 004b505a
    PUSH EDX                            ; 004b505e
    MOV ECX,dword ptr [0x01549aa8]      ; 004b505f | DAT_01549aa8
    PUSH ECX                            ; 004b5065
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5066
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b506b
    PUSH -0x1                           ; 004b506e
    PUSH 0x7                            ; 004b5070
    MOV EBX,dword ptr [0x01d22c58]      ; 004b5072 | DAT_01d22c58
    PUSH EBX                            ; 004b5078
    MOV ESI,dword ptr [0x01d22c54]      ; 004b5079 | DAT_01d22c54
    PUSH ESI                            ; 004b507f
    MOV EDI,dword ptr [ESP + 0x24]      ; 004b5080
    PUSH EDI                            ; 004b5084
    MOV EBP,dword ptr [0x01549aa8]      ; 004b5085 | DAT_01549aa8
    PUSH EBP                            ; 004b508b
    CALL engine_font.cpp_FUN_004b0a20   ; 004b508c
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b5091 | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b5096 | DAT_01d22c58
    SHL EAX,0x2                         ; 004b509c
    MOV EDX,dword ptr [0x005fba1c]      ; 004b509f | DAT_005fba1c
    MOV ECX,dword ptr [0x01d22c58]      ; 004b50a5 | DAT_01d22c58
    SUB EDX,EAX                         ; 004b50ab
    ADD ESP,0x18                        ; 004b50ad
    CMP EDX,ECX                         ; 004b50b0
    JL 0x004b50b9                       ; 004b50b2
        ;   XREF to: 004b50b9 (CONDITIONAL_JUMP)  ; LAB_004b50b9
    POP EBP                             ; 004b50b4
    POP EDI                             ; 004b50b5
    POP ESI                             ; 004b50b6
    POP EBX                             ; 004b50b7
    RET                                 ; 004b50b8
    MOV EDX,dword ptr [0x01d22c5c]      ; 004b50b9 | DAT_01d22c5c
        ;   Label: LAB_004b50b9
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b50bf
    SUB EAX,EDX                         ; 004b50c6
    ADD EAX,EAX                         ; 004b50c8
    MOV [0x01d22c58],EAX                ; 004b50ca | DAT_01d22c58
    MOV EAX,[0x005fba18]                ; 004b50cf | DAT_005fba18
    MOV EDX,EAX                         ; 004b50d4
    MOV ECX,0x3                         ; 004b50d6
    SAR EDX,0x1f                        ; 004b50db
    IDIV ECX                            ; 004b50de
    ADD dword ptr [0x01d22c54],EAX      ; 004b50e0 | DAT_01d22c54
    POP EBP                             ; 004b50e6
    POP EDI                             ; 004b50e7
    POP ESI                             ; 004b50e8
    POP EBX                             ; 004b50e9
    RET                                 ; 004b50ea

