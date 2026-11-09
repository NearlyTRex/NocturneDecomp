; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005cec10(undefined2 *param_1,char *param_2,int param_3)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005ce510 at 005ce6a8
;
; Called Functions:
;   crt_unknown.c_FUN_005c90c0
;   unkafter_zombie.cpp_FUN_005cb6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cec10
        ;   Label: unkafter_2d.cpp_FUN_005cec10
    PUSH ESI                            ; 005cec11
    PUSH EDI                            ; 005cec12
    PUSH EBP                            ; 005cec13
    MOV EDI,dword ptr [ESP + 0x14]      ; 005cec14
    MOV EBX,dword ptr [ESP + 0x18]      ; 005cec18
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005cec1c
    XOR ESI,ESI                         ; 005cec20
    TEST EDI,EDI                        ; 005cec22
    JZ 0x005cec5e                       ; 005cec24
        ;   XREF to: 005cec5e (CONDITIONAL_JUMP)  ; LAB_005cec5e
    TEST EBP,EBP                        ; 005cec26
        ;   Label: LAB_005cec26
    JBE 0x005cec83                      ; 005cec28
        ;   XREF to: 005cec83 (CONDITIONAL_JUMP)  ; LAB_005cec83
    CMP byte ptr [EBX],0x0              ; 005cec2a
    JZ 0x005cec45                       ; 005cec2d
        ;   XREF to: 005cec45 (CONDITIONAL_JUMP)  ; LAB_005cec45
    PUSH 0x2                            ; 005cec2f
    PUSH EBX                            ; 005cec31
    PUSH EDI                            ; 005cec32
    CALL unkafter_zombie.cpp_FUN_005cb6f0 ; 005cec33
        ;   XREF to: 005cb6f0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cb6f0()
    ADD ESP,0xc                         ; 005cec38
    CMP EAX,-0x1                        ; 005cec3b
    JNZ 0x005cec4c                      ; 005cec3e
        ;   XREF to: 005cec4c (CONDITIONAL_JUMP)  ; LAB_005cec4c
    POP EBP                             ; 005cec40
    POP EDI                             ; 005cec41
    POP ESI                             ; 005cec42
    POP EBX                             ; 005cec43
    RET                                 ; 005cec44
    MOV word ptr [EDI],0x0              ; 005cec45
        ;   Label: LAB_005cec45
    JMP 0x005cec83                      ; 005cec4a
        ;   XREF to: 005cec83 (UNCONDITIONAL_JUMP)  ; LAB_005cec83
    PUSH EBX                            ; 005cec4c
        ;   Label: LAB_005cec4c
    DEC EBP                             ; 005cec4d
    CALL crt_unknown.c_FUN_005c90c0     ; 005cec4e
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c90c0()
    ADD EDI,0x2                         ; 005cec53
    INC ESI                             ; 005cec56
    ADD ESP,0x4                         ; 005cec57
    MOV EBX,EAX                         ; 005cec5a
    JMP 0x005cec26                      ; 005cec5c
        ;   XREF to: 005cec26 (UNCONDITIONAL_JUMP)  ; LAB_005cec26
    CMP byte ptr [EBX],0x0              ; 005cec5e
        ;   Label: LAB_005cec5e
    JZ 0x005cec83                       ; 005cec61
        ;   XREF to: 005cec83 (CONDITIONAL_JUMP)  ; LAB_005cec83
    PUSH 0x2                            ; 005cec63
    PUSH EBX                            ; 005cec65
    PUSH 0x0                            ; 005cec66
    CALL unkafter_zombie.cpp_FUN_005cb6f0 ; 005cec68
        ;   XREF to: 005cb6f0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cb6f0()
    ADD ESP,0xc                         ; 005cec6d
    CMP EAX,-0x1                        ; 005cec70
    JZ 0x005cec85                       ; 005cec73
        ;   XREF to: 005cec85 (CONDITIONAL_JUMP)  ; LAB_005cec85
    PUSH EBX                            ; 005cec75
    CALL crt_unknown.c_FUN_005c90c0     ; 005cec76
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c90c0()
    INC ESI                             ; 005cec7b
    ADD ESP,0x4                         ; 005cec7c
    MOV EBX,EAX                         ; 005cec7f
    JMP 0x005cec5e                      ; 005cec81
        ;   XREF to: 005cec5e (UNCONDITIONAL_JUMP)  ; LAB_005cec5e
    MOV EAX,ESI                         ; 005cec83
        ;   Label: LAB_005cec83
    POP EBP                             ; 005cec85
        ;   Label: LAB_005cec85
    POP EDI                             ; 005cec86
    POP ESI                             ; 005cec87
    POP EBX                             ; 005cec88
    RET                                 ; 005cec89

