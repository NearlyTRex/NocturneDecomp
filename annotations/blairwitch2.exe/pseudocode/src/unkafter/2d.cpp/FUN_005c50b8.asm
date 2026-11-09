; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_2d_cpp_FUN_005c50b8(undefined4 param_1)
;
;
; XREF[2]:
;   engine_2d.c_enableTextWrap_FUN_005c4fac at 005c4fae
;   unkafter_morph.cpp_FUN_005c4eb0 at 005c4ed2
;
; Referenced Globals:
;   undefined1* switchdataD_005c5088 = 005c50eb
;
; Called Functions:
;   crt_unknown.c_FUN_005bad88
;   unkafter_2d.cpp_FUN_005c4fb8
;   unkafter_morph.cpp_FUN_005c4df0
;   unkafter_morph.cpp_FUN_005c4e44
;   unkafter_morph.cpp_FUN_005c4f10
;   unkafter_morph.cpp_FUN_005c4f74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c50b8
        ;   Label: unkafter_2d.cpp_FUN_005c50b8
    PUSH ESI                            ; 005c50b9
    MOV ESI,dword ptr [ESP + 0xc]       ; 005c50ba
    PUSH ESI                            ; 005c50be
    CALL unkafter_morph.cpp_FUN_005c4e44 ; 005c50bf
        ;   XREF to: 005c4e44 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4e44()
    ADD ESP,0x4                         ; 005c50c4
    LEA EDX,[ESI + -0x1]                ; 005c50c7
    MOV EBX,EAX                         ; 005c50ca
    CMP EDX,0xb                         ; 005c50cc
    JA 0x005c5128                       ; 005c50cf
        ;   XREF to: 005c5128 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr CS:[EDX*0x4 + 0x5c5088] ; 005c50d1 | caseD_1 | caseD_2 | caseD_c
        ;   Label: switchD
    PUSH 0x8c                           ; 005c50d9
        ;   Label: caseD_2
    CALL unkafter_2d.cpp_FUN_005c4fb8   ; 005c50de
        ;   XREF to: 005c4fb8 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c4fb8()
    ADD ESP,0x4                         ; 005c50e3
    XOR EAX,EAX                         ; 005c50e6
    POP ESI                             ; 005c50e8
    POP EBX                             ; 005c50e9
    RET                                 ; 005c50ea
    CMP EAX,0x2                         ; 005c50eb
        ;   Label: caseD_1
    JNZ 0x005c50f5                      ; 005c50ee
        ;   XREF to: 005c50f5 (CONDITIONAL_JUMP)  ; caseD_c
    CALL crt_unknown.c_FUN_005bad88     ; 005c50f0
        ;   XREF to: 005bad88 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bad88()
    CMP EBX,0x1                         ; 005c50f5
        ;   Label: caseD_3
    JZ 0x005c5115                       ; 005c50f8
        ;   XREF to: 005c5115 (CONDITIONAL_JUMP)  ; LAB_005c5115
    CMP EBX,0x2                         ; 005c50fa
    JZ 0x005c5115                       ; 005c50fd
        ;   XREF to: 005c5115 (CONDITIONAL_JUMP)  ; LAB_005c5115
    CMP EBX,0x3                         ; 005c50ff
    JZ 0x005c5115                       ; 005c5102
        ;   XREF to: 005c5115 (CONDITIONAL_JUMP)  ; LAB_005c5115
    PUSH 0x2                            ; 005c5104
    PUSH ESI                            ; 005c5106
    CALL unkafter_morph.cpp_FUN_005c4df0 ; 005c5107
        ;   XREF to: 005c4df0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4df0()
    ADD ESP,0x8                         ; 005c510c
    PUSH ESI                            ; 005c510f
    CALL EBX                            ; 005c5110
    ADD ESP,0x4                         ; 005c5112
    CALL unkafter_morph.cpp_FUN_005c4f10 ; 005c5115
        ;   XREF to: 005c4f10 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4f10()
        ;   Label: LAB_005c5115
    TEST EAX,EAX                        ; 005c511a
    JNZ 0x005c5130                      ; 005c511c
        ;   XREF to: 005c5130 (CONDITIONAL_JUMP)  ; LAB_005c5130
    CALL unkafter_morph.cpp_FUN_005c4f74 ; 005c511e
        ;   XREF to: 005c4f74 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4f74()
    XOR EAX,EAX                         ; 005c5123
    POP ESI                             ; 005c5125
    POP EBX                             ; 005c5126
    RET                                 ; 005c5127
    MOV EAX,0xffffffff                  ; 005c5128
        ;   Label: default
    POP ESI                             ; 005c512d
    POP EBX                             ; 005c512e
    RET                                 ; 005c512f
    XOR EAX,EAX                         ; 005c5130
        ;   Label: LAB_005c5130
    POP ESI                             ; 005c5132
    POP EBX                             ; 005c5133
    RET                                 ; 005c5134

