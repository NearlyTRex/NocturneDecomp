; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_texture_cpp_FUN_005970b0(int param_1,int param_2,char *param_3)
;
;
; XREF[3]:
;   engine_texture.cpp_FUN_00597a20 at 00597a53
;   engine_texture.cpp_FUN_00597ac0 at 00597aef
;   engine_texture.cpp_FUN_00597b7c at 00597baf
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005970b0
        ;   Label: engine_texture.cpp_FUN_005970b0
    PUSH ESI                            ; 005970b1
    PUSH EDI                            ; 005970b2
    PUSH EBP                            ; 005970b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005970b4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005970b8
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005970bc
    TEST ESI,ESI                        ; 005970c0
    JL 0x005970cc                       ; 005970c2
        ;   XREF to: 005970cc (CONDITIONAL_JUMP)  ; LAB_005970cc
    CMP ESI,0x400                       ; 005970c4
    JL 0x00597101                       ; 005970ca
        ;   XREF to: 00597101 (CONDITIONAL_JUMP)  ; LAB_00597101
    MOV EDX,dword ptr [EDI + 0x18004]   ; 005970cc
        ;   Label: LAB_005970cc
    XOR EBX,EBX                         ; 005970d2
    TEST EDX,EDX                        ; 005970d4
    JLE 0x005970f7                      ; 005970d6
        ;   XREF to: 005970f7 (CONDITIONAL_JUMP)  ; LAB_005970f7
    LEA ESI,[EDI + 0x8]                 ; 005970d8
    PUSH EBP                            ; 005970db
        ;   Label: LAB_005970db
    PUSH ESI                            ; 005970dc
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005970dd
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005970e2
    TEST EAX,EAX                        ; 005970e5
    JZ 0x0059712a                       ; 005970e7
        ;   XREF to: 0059712a (CONDITIONAL_JUMP)  ; LAB_0059712a
    INC EBX                             ; 005970e9
    MOV ECX,dword ptr [EDI + 0x18004]   ; 005970ea
    ADD ESI,0x60                        ; 005970f0
    CMP EBX,ECX                         ; 005970f3
    JL 0x005970db                       ; 005970f5
        ;   XREF to: 005970db (CONDITIONAL_JUMP)  ; LAB_005970db
    MOV EAX,0xffffffff                  ; 005970f7
        ;   Label: LAB_005970f7
    POP EBP                             ; 005970fc
    POP EDI                             ; 005970fd
    POP ESI                             ; 005970fe
    POP EBX                             ; 005970ff
    RET                                 ; 00597100
    LEA EAX,[ESI*0x4 + 0x0]             ; 00597101
        ;   Label: LAB_00597101
    SUB EAX,ESI                         ; 00597108
    LEA EBX,[EDI + 0x4]                 ; 0059710a
    SHL EAX,0x5                         ; 0059710d
    ADD EAX,EBX                         ; 00597110
    PUSH EBP                            ; 00597112
    ADD EAX,0x4                         ; 00597113
    PUSH EAX                            ; 00597116
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00597117
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059711c
    TEST EAX,EAX                        ; 0059711f
    JNZ 0x005970cc                      ; 00597121
        ;   XREF to: 005970cc (CONDITIONAL_JUMP)  ; LAB_005970cc
    MOV EAX,ESI                         ; 00597123
    POP EBP                             ; 00597125
    POP EDI                             ; 00597126
    POP ESI                             ; 00597127
    POP EBX                             ; 00597128
    RET                                 ; 00597129
    MOV EAX,EBX                         ; 0059712a
        ;   Label: LAB_0059712a
    POP EBP                             ; 0059712c
    POP EDI                             ; 0059712d
    POP ESI                             ; 0059712e
    POP EBX                             ; 0059712f
    RET                                 ; 00597130

