; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_drawKeyBindingEntry_FUN_004b50f0(void)
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
;   core_menu.cpp_getKeyDisplayName_FUN_004eaa60
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_font.cpp_FUN_004b0a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b50f0
        ;   Label: core_game.cpp_drawKeyBindingEntry_FUN_004b50f0
    PUSH ESI                            ; 004b50f1
    PUSH EDI                            ; 004b50f2
    PUSH EBP                            ; 004b50f3
    SUB ESP,0x100                       ; 004b50f4
    MOV EDX,dword ptr [ESP + 0x118]     ; 004b50fa
    PUSH EDX                            ; 004b5101
    MOV ECX,dword ptr [ESP + 0x118]     ; 004b5102
    PUSH ECX                            ; 004b5109
    CALL core_menu.cpp_getKeyDisplayName_FUN_004eaa60 ; 004b510a
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b510f
    PUSH EAX                            ; 004b5112
    PUSH 0x5c2240                       ; 004b5113
    LEA EAX,[ESP + 0xc]                 ; 004b5118
    PUSH EAX                            ; 004b511c
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b511d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b5122
    PUSH -0x1                           ; 004b5125
    MOV EAX,[0x01d22c58]                ; 004b5127 | DAT_01d22c58
    PUSH 0x0                            ; 004b512c
    ADD EAX,0x2                         ; 004b512e
    PUSH EAX                            ; 004b5131
    MOV EAX,[0x01d22c54]                ; 004b5132 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b5137
    PUSH EAX                            ; 004b513a
    LEA EAX,[ESP + 0x10]                ; 004b513b
    PUSH EAX                            ; 004b513f
    MOV EBX,dword ptr [0x01549aa8]      ; 004b5140 | DAT_01549aa8
    PUSH EBX                            ; 004b5146
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5147
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b514c
    PUSH -0x1                           ; 004b514f
    PUSH 0x7                            ; 004b5151
    MOV ESI,dword ptr [0x01d22c58]      ; 004b5153 | DAT_01d22c58
    PUSH ESI                            ; 004b5159
    MOV EDI,dword ptr [0x01d22c54]      ; 004b515a | DAT_01d22c54
    PUSH EDI                            ; 004b5160
    LEA EAX,[ESP + 0x10]                ; 004b5161
    PUSH EAX                            ; 004b5165
    MOV EBP,dword ptr [0x01549aa8]      ; 004b5166 | DAT_01549aa8
    PUSH EBP                            ; 004b516c
    CALL engine_font.cpp_FUN_004b0a20   ; 004b516d
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b5172 | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b5177 | DAT_01d22c58
    SHL EAX,0x2                         ; 004b517d
    MOV EDX,dword ptr [0x005fba1c]      ; 004b5180 | DAT_005fba1c
    MOV ECX,dword ptr [0x01d22c58]      ; 004b5186 | DAT_01d22c58
    SUB EDX,EAX                         ; 004b518c
    ADD ESP,0x18                        ; 004b518e
    CMP EDX,ECX                         ; 004b5191
    JL 0x004b51a0                       ; 004b5193
        ;   XREF to: 004b51a0 (CONDITIONAL_JUMP)  ; LAB_004b51a0
    ADD ESP,0x100                       ; 004b5195
    POP EBP                             ; 004b519b
    POP EDI                             ; 004b519c
    POP ESI                             ; 004b519d
    POP EBX                             ; 004b519e
    RET                                 ; 004b519f
    MOV EDX,dword ptr [0x01d22c5c]      ; 004b51a0 | DAT_01d22c5c
        ;   Label: LAB_004b51a0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b51a6
    SUB EAX,EDX                         ; 004b51ad
    ADD EAX,EAX                         ; 004b51af
    MOV [0x01d22c58],EAX                ; 004b51b1 | DAT_01d22c58
    MOV EAX,[0x005fba18]                ; 004b51b6 | DAT_005fba18
    MOV EDX,EAX                         ; 004b51bb
    MOV ECX,0x3                         ; 004b51bd
    SAR EDX,0x1f                        ; 004b51c2
    IDIV ECX                            ; 004b51c5
    ADD dword ptr [0x01d22c54],EAX      ; 004b51c7 | DAT_01d22c54
    ADD ESP,0x100                       ; 004b51cd
    POP EBP                             ; 004b51d3
    POP EDI                             ; 004b51d4
    POP ESI                             ; 004b51d5
    POP EBX                             ; 004b51d6
    RET                                 ; 004b51d7

