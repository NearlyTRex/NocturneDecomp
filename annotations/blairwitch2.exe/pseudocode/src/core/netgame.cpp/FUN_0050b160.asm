; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * core_netgame_cpp_FUN_0050b160(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d54640
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b160
        ;   Label: core_netgame.cpp_FUN_0050b160
    PUSH EBP                            ; 0050b161
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050b162
    MOV ECX,dword ptr [0x01d54640]      ; 0050b166 | DAT_01d54640
    XOR EDX,EDX                         ; 0050b16c
    TEST ECX,ECX                        ; 0050b16e
    JLE 0x0050b1a1                      ; 0050b170
        ;   XREF to: 0050b1a1 (CONDITIONAL_JUMP)  ; LAB_0050b1a1
    PUSH ESI                            ; 0050b172
    MOV ESI,ECX                         ; 0050b173
    SHL ECX,0x3                         ; 0050b175
    SUB ECX,ESI                         ; 0050b178
    SHL ECX,0x2                         ; 0050b17a
    ADD ECX,ESI                         ; 0050b17d
    XOR EAX,EAX                         ; 0050b17f
    SHL ECX,0x2                         ; 0050b181
    POP ESI                             ; 0050b184
    CMP EBX,dword ptr [EAX + 0x1d54644] ; 0050b185
        ;   Label: LAB_0050b185
    JNZ 0x0050b199                      ; 0050b18b
        ;   XREF to: 0050b199 (CONDITIONAL_JUMP)  ; LAB_0050b199
    TEST EDX,EDX                        ; 0050b18d
    JL 0x0050b1a1                       ; 0050b18f
        ;   XREF to: 0050b1a1 (CONDITIONAL_JUMP)  ; LAB_0050b1a1
    ADD EAX,0x1d54644                   ; 0050b191
    POP EBP                             ; 0050b196
    POP EBX                             ; 0050b197
    RET                                 ; 0050b198
    ADD EAX,0x74                        ; 0050b199
        ;   Label: LAB_0050b199
    INC EDX                             ; 0050b19c
    CMP EAX,ECX                         ; 0050b19d
    JL 0x0050b185                       ; 0050b19f
        ;   XREF to: 0050b185 (CONDITIONAL_JUMP)  ; LAB_0050b185
    CMP dword ptr [0x01d54640],0x200    ; 0050b1a1 | DAT_01d54640
        ;   Label: LAB_0050b1a1
    JL 0x0050b1cf                       ; 0050b1ab
        ;   XREF to: 0050b1cf (CONDITIONAL_JUMP)  ; LAB_0050b1cf
    MOV EBP,0x5e03cf                    ; 0050b1ad
    MOV EAX,0x12b                       ; 0050b1b2
    PUSH 0x5e03e3                       ; 0050b1b7
    MOV dword ptr [0x01d046a0],EBP      ; 0050b1bc | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0050b1c2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050b1c7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050b1cc
    MOV EDX,dword ptr [0x01d54640]      ; 0050b1cf | DAT_01d54640
        ;   Label: LAB_0050b1cf
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050b1d5
    SUB EAX,EDX                         ; 0050b1dc
    SHL EAX,0x2                         ; 0050b1de
    MOV EBX,0x1d54644                   ; 0050b1e1
    ADD EAX,EDX                         ; 0050b1e6
    PUSH 0x74                           ; 0050b1e8
    SHL EAX,0x2                         ; 0050b1ea
    PUSH 0x0                            ; 0050b1ed
    ADD EBX,EAX                         ; 0050b1ef
    INC EDX                             ; 0050b1f1
    PUSH EBX                            ; 0050b1f2
    MOV dword ptr [0x01d54640],EDX      ; 0050b1f3 | DAT_01d54640
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0050b1f9
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0050b1fe
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050b201
    MOV dword ptr [EBX],EAX             ; 0050b205
    MOV EAX,EBX                         ; 0050b207
    POP EBP                             ; 0050b209
    POP EBX                             ; 0050b20a
    RET                                 ; 0050b20b

