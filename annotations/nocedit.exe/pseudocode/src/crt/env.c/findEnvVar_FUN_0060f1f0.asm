; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_env_c_findEnvVar_FUN_0060f1f0(char *name,int delete_flag)
;
; Parameters:
; char *           Stack[0x4]:4   name
; int              Stack[0x8]:4   delete_flag
;
; XREF[1]:
;   crt_env.c_updateEnvironTable_FUN_0060f04c at 0060f0e8
;
; Referenced Globals:
;   char** g_EnvironStringArea
;   char** g_EnvironmentBlock
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_memory.c_free_FUN_00601cd0
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060f1f0
        ;   Label: crt_env.c_findEnvVar_FUN_0060f1f0
    PUSH ESI                            ; 0060f1f1
    PUSH EDI                            ; 0060f1f2
    PUSH EBP                            ; 0060f1f3
    MOV EBP,dword ptr [0x03f9b864]      ; 0060f1f4 | g_EnvironmentBlock
    JMP 0x0060f2d9                      ; 0060f1fa
        ;   XREF to: 0060f2d9 (UNCONDITIONAL_JUMP)  ; LAB_0060f2d9
    MOV ESI,dword ptr [ESP + 0x14]      ; 0060f1ff
        ;   Label: LAB_0060f1ff
    CMP byte ptr [ESI],0x0              ; 0060f203
    JZ 0x0060f2d6                       ; 0060f206
        ;   XREF to: 0060f2d6 (CONDITIONAL_JUMP)  ; LAB_0060f2d6
    XOR EAX,EAX                         ; 0060f20c
        ;   Label: LAB_0060f20c
    MOV AL,byte ptr [EBX]               ; 0060f20e
    PUSH EAX                            ; 0060f210
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0060f211
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    MOV EDI,EAX                         ; 0060f216
    XOR EAX,EAX                         ; 0060f218
    ADD ESP,0x4                         ; 0060f21a
    MOV AL,byte ptr [ESI]               ; 0060f21d
    PUSH EAX                            ; 0060f21f
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0060f220
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0060f225
    CMP EDI,EAX                         ; 0060f228
    JNZ 0x0060f2d6                      ; 0060f22a
        ;   XREF to: 0060f2d6 (CONDITIONAL_JUMP)  ; LAB_0060f2d6
    CMP byte ptr [EBX],0x3d             ; 0060f230
    JNZ 0x0060f2c9                      ; 0060f233
        ;   XREF to: 0060f2c9 (CONDITIONAL_JUMP)  ; LAB_0060f2c9
    MOV EDX,dword ptr [0x03f9b864]      ; 0060f239 | g_EnvironmentBlock
    MOV ESI,EBP                         ; 0060f23f
    SUB ESI,EDX                         ; 0060f241
    MOV EBX,dword ptr [ESP + 0x18]      ; 0060f243
    SAR ESI,0x2                         ; 0060f247
    TEST EBX,EBX                        ; 0060f24a
    JZ 0x0060f2c1                       ; 0060f24c
        ;   XREF to: 0060f2c1 (CONDITIONAL_JUMP)  ; LAB_0060f2c1
    MOV EDI,dword ptr [EBP]             ; 0060f252
    MOV EBX,EBP                         ; 0060f255
    TEST EDI,EDI                        ; 0060f257
    JZ 0x0060f26a                       ; 0060f259
        ;   XREF to: 0060f26a (CONDITIONAL_JUMP)  ; LAB_0060f26a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0060f25b
        ;   Label: LAB_0060f25b
    MOV dword ptr [EBX],EAX             ; 0060f25e
    MOV ECX,dword ptr [EBX + 0x4]       ; 0060f260
    ADD EBX,0x4                         ; 0060f263
    TEST ECX,ECX                        ; 0060f266
    JNZ 0x0060f25b                      ; 0060f268
        ;   XREF to: 0060f25b (CONDITIONAL_JUMP)  ; LAB_0060f25b
    MOV EBP,dword ptr [0x03f9b860]      ; 0060f26a | g_EnvironStringArea
        ;   Label: LAB_0060f26a
    TEST EBP,EBP                        ; 0060f270
    JZ 0x0060f2ba                       ; 0060f272
        ;   XREF to: 0060f2ba (CONDITIONAL_JUMP)  ; LAB_0060f2ba
    MOV EAX,EBP                         ; 0060f274
    CMP byte ptr [ESI + EAX*0x1],0x0    ; 0060f276
    JZ 0x0060f285                       ; 0060f27a
        ;   XREF to: 0060f285 (CONDITIONAL_JUMP)  ; LAB_0060f285
    PUSH EDI                            ; 0060f27c
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f27d
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060f282
    MOV EAX,[0x03f9b864]                ; 0060f285 | g_EnvironmentBlock
        ;   Label: LAB_0060f285
    MOV EDI,EBX                         ; 0060f28a
    SUB EDI,EAX                         ; 0060f28c
    SAR EDI,0x2                         ; 0060f28e
    PUSH EDI                            ; 0060f291
    MOV EDX,dword ptr [0x03f9b860]      ; 0060f292 | g_EnvironStringArea
    PUSH EDX                            ; 0060f298
    PUSH EBX                            ; 0060f299
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0060f29a
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0060f29f
    MOV dword ptr [0x03f9b860],EBX      ; 0060f2a2 | g_EnvironStringArea
    CMP ESI,EDI                         ; 0060f2a8
    JGE 0x0060f2ba                      ; 0060f2aa
        ;   XREF to: 0060f2ba (CONDITIONAL_JUMP)  ; LAB_0060f2ba
    LEA EAX,[ESI + EBX*0x1]             ; 0060f2ac
    INC EAX                             ; 0060f2af
        ;   Label: LAB_0060f2af
    MOV BL,byte ptr [EAX]               ; 0060f2b0
    INC ESI                             ; 0060f2b2
    MOV byte ptr [EAX + -0x1],BL        ; 0060f2b3
    CMP ESI,EDI                         ; 0060f2b6
    JL 0x0060f2af                       ; 0060f2b8
        ;   XREF to: 0060f2af (CONDITIONAL_JUMP)  ; LAB_0060f2af
    XOR EAX,EAX                         ; 0060f2ba
        ;   Label: LAB_0060f2ba
    POP EBP                             ; 0060f2bc
    POP EDI                             ; 0060f2bd
    POP ESI                             ; 0060f2be
    POP EBX                             ; 0060f2bf
    RET                                 ; 0060f2c0
    LEA EAX,[ESI + 0x1]                 ; 0060f2c1
        ;   Label: LAB_0060f2c1
    POP EBP                             ; 0060f2c4
    POP EDI                             ; 0060f2c5
    POP ESI                             ; 0060f2c6
    POP EBX                             ; 0060f2c7
    RET                                 ; 0060f2c8
    INC EBX                             ; 0060f2c9
        ;   Label: LAB_0060f2c9
    MOV DH,byte ptr [ESI + 0x1]         ; 0060f2ca
    INC ESI                             ; 0060f2cd
    TEST DH,DH                          ; 0060f2ce
    JNZ 0x0060f20c                      ; 0060f2d0
        ;   XREF to: 0060f20c (CONDITIONAL_JUMP)  ; LAB_0060f20c
    ADD EBP,0x4                         ; 0060f2d6
        ;   Label: LAB_0060f2d6
    MOV EBX,dword ptr [EBP]             ; 0060f2d9
        ;   Label: LAB_0060f2d9
    TEST EBX,EBX                        ; 0060f2dc
    JNZ 0x0060f1ff                      ; 0060f2de
        ;   XREF to: 0060f1ff (CONDITIONAL_JUMP)  ; LAB_0060f1ff
    MOV EAX,[0x03f9b864]                ; 0060f2e4 | g_EnvironmentBlock
    SUB EAX,EBP                         ; 0060f2e9
    SAR EAX,0x2                         ; 0060f2eb
    POP EBP                             ; 0060f2ee
    POP EDI                             ; 0060f2ef
    POP ESI                             ; 0060f2f0
    POP EBX                             ; 0060f2f1
    RET                                 ; 0060f2f2

