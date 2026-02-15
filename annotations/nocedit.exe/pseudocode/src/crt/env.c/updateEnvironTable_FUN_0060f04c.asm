; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_env_c_updateEnvironTable_FUN_0060f04c(char *envstr)
;
; Parameters:
; char *           Stack[0x4]:4   envstr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_env.c_putenv_internal_FUN_0060ee80 at 0060efb6
;   crt_unknown.c_FUN_0060fb40 at 0060fce1
;
; Referenced Globals:
;   char** g_EnvironStringArea
;   char** g_EnvironmentBlock
;
; Called Functions:
;   crt_env.c_findEnvVar_FUN_0060f1f0
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_memory.c_memset_FUN_005fde40
;   crt_memory.c_realloc_FUN_00601df0
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060f04c
        ;   Label: crt_env.c_updateEnvironTable_FUN_0060f04c
    PUSH ESI                            ; 0060f04d
    PUSH EDI                            ; 0060f04e
    PUSH EBP                            ; 0060f04f
    SUB ESP,0x8                         ; 0060f050
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0060f053
    TEST EDX,EDX                        ; 0060f057
    JNZ 0x0060f065                      ; 0060f059
        ;   XREF to: 0060f065 (CONDITIONAL_JUMP)  ; LAB_0060f065
    MOV EAX,0xffffffff                  ; 0060f05b
    JMP 0x0060f1e7                      ; 0060f060
        ;   XREF to: 0060f1e7 (UNCONDITIONAL_JUMP)  ; LAB_0060f1e7
    CMP byte ptr [EDX],0x0              ; 0060f065
        ;   Label: LAB_0060f065
    JZ 0x0060f07f                       ; 0060f068
        ;   XREF to: 0060f07f (CONDITIONAL_JUMP)  ; LAB_0060f07f
    LEA EAX,[EDX + 0x1]                 ; 0060f06a
    CMP byte ptr [EAX],0x0              ; 0060f06d
    JZ 0x0060f07f                       ; 0060f070
        ;   XREF to: 0060f07f (CONDITIONAL_JUMP)  ; LAB_0060f07f
    CMP byte ptr [EAX],0x3d             ; 0060f072
        ;   Label: LAB_0060f072
    JZ 0x0060f07f                       ; 0060f075
        ;   XREF to: 0060f07f (CONDITIONAL_JUMP)  ; LAB_0060f07f
    MOV CL,byte ptr [EAX + 0x1]         ; 0060f077
    INC EAX                             ; 0060f07a
    TEST CL,CL                          ; 0060f07b
    JNZ 0x0060f072                      ; 0060f07d
        ;   XREF to: 0060f072 (CONDITIONAL_JUMP)  ; LAB_0060f072
    CMP byte ptr [EAX],0x0              ; 0060f07f
        ;   Label: LAB_0060f07f
    JNZ 0x0060f091                      ; 0060f082
        ;   XREF to: 0060f091 (CONDITIONAL_JUMP)  ; LAB_0060f091
    MOV EAX,0xffffffff                  ; 0060f084
    ADD ESP,0x8                         ; 0060f089
    POP EBP                             ; 0060f08c
    POP EDI                             ; 0060f08d
    POP ESI                             ; 0060f08e
    POP EBX                             ; 0060f08f
    RET                                 ; 0060f090
    CMP byte ptr [EAX + 0x1],0x0        ; 0060f091
        ;   Label: LAB_0060f091
    SETZ AL                             ; 0060f095
    MOV EBX,dword ptr [0x03f9b864]      ; 0060f098 | g_EnvironmentBlock
    MOVZX EBP,AL                        ; 0060f09e
    TEST EBX,EBX                        ; 0060f0a1
    JNZ 0x0060f0e2                      ; 0060f0a3
        ;   XREF to: 0060f0e2 (CONDITIONAL_JUMP)  ; LAB_0060f0e2
    TEST EBP,EBP                        ; 0060f0a5
    JNZ 0x0060f1e5                      ; 0060f0a7
        ;   XREF to: 0060f1e5 (CONDITIONAL_JUMP)  ; LAB_0060f1e5
    PUSH 0x9                            ; 0060f0ad
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060f0af
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 0060f0b4
    MOV EBX,EAX                         ; 0060f0b7
    TEST EAX,EAX                        ; 0060f0b9
    JNZ 0x0060f0ca                      ; 0060f0bb
        ;   XREF to: 0060f0ca (CONDITIONAL_JUMP)  ; LAB_0060f0ca
    MOV EAX,0xffffffff                  ; 0060f0bd
    ADD ESP,0x8                         ; 0060f0c2
    POP EBP                             ; 0060f0c5
    POP EDI                             ; 0060f0c6
    POP ESI                             ; 0060f0c7
    POP EBX                             ; 0060f0c8
    RET                                 ; 0060f0c9
    MOV [0x03f9b864],EAX                ; 0060f0ca | g_EnvironmentBlock
        ;   Label: LAB_0060f0ca
    ADD EAX,0x8                         ; 0060f0cf
    MOV dword ptr [EAX + -0x8],EBP      ; 0060f0d2
    MOV dword ptr [EAX + -0x4],EBP      ; 0060f0d5
    MOV [0x03f9b860],EAX                ; 0060f0d8 | g_EnvironStringArea
    JMP 0x0060f1cd                      ; 0060f0dd
        ;   XREF to: 0060f1cd (UNCONDITIONAL_JUMP)  ; LAB_0060f1cd
    PUSH EBP                            ; 0060f0e2
        ;   Label: LAB_0060f0e2
    MOV ECX,dword ptr [ESP + 0x20]      ; 0060f0e3
    PUSH ECX                            ; 0060f0e7
    CALL crt_env.c_findEnvVar_FUN_0060f1f0 ; 0060f0e8
        ;   XREF to: 0060f1f0 (UNCONDITIONAL_CALL)  ; int crt_env.c_findEnvVar_FUN_0060f1f0(char * name, int delete_flag)
    ADD ESP,0x8                         ; 0060f0ed
    TEST EBP,EBP                        ; 0060f0f0
    JNZ 0x0060f1e5                      ; 0060f0f2
        ;   XREF to: 0060f1e5 (CONDITIONAL_JUMP)  ; LAB_0060f1e5
    TEST EAX,EAX                        ; 0060f0f8
    JG 0x0060f1ca                       ; 0060f0fa
        ;   XREF to: 0060f1ca (CONDITIONAL_JUMP)  ; LAB_0060f1ca
    NEG EAX                             ; 0060f100
    MOV EDX,dword ptr [0x03f9b860]      ; 0060f102 | g_EnvironStringArea
    MOV EBP,EAX                         ; 0060f108
    INC EAX                             ; 0060f10a
    LEA ESI,[EBP*0x4 + 0x0]             ; 0060f10b
    MOV dword ptr [ESP],EAX             ; 0060f112
    LEA EAX,[ESI + 0x8]                 ; 0060f115
    MOV EDI,dword ptr [ESP]             ; 0060f118
    MOV dword ptr [ESP + 0x4],EAX       ; 0060f11b
    ADD EAX,EDI                         ; 0060f11f
    TEST EDX,EDX                        ; 0060f121
    JNZ 0x0060f180                      ; 0060f123
        ;   XREF to: 0060f180 (CONDITIONAL_JUMP)  ; LAB_0060f180
    PUSH EAX                            ; 0060f125
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060f126
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    MOV EDX,EAX                         ; 0060f12b
    ADD ESP,0x4                         ; 0060f12d
    MOV EBX,EAX                         ; 0060f130
    TEST EAX,EAX                        ; 0060f132
    JNZ 0x0060f143                      ; 0060f134
        ;   XREF to: 0060f143 (CONDITIONAL_JUMP)  ; LAB_0060f143
    MOV EAX,0xffffffff                  ; 0060f136
    ADD ESP,0x8                         ; 0060f13b
    POP EBP                             ; 0060f13e
    POP EDI                             ; 0060f13f
    POP ESI                             ; 0060f140
    POP EBX                             ; 0060f141
    RET                                 ; 0060f142
    MOV EAX,[0x03f9b864]                ; 0060f143 | g_EnvironmentBlock
        ;   Label: LAB_0060f143
    MOV ECX,ESI                         ; 0060f148
    MOV EDI,EDX                         ; 0060f14a
    MOV ESI,EAX                         ; 0060f14c
    PUSH ES                             ; 0060f14e
    MOV AX,DS                           ; 0060f14f
    MOV ES,AX                           ; 0060f151
    PUSH EDI                            ; 0060f153
    MOV EAX,ECX                         ; 0060f154
    SHR ECX,0x2                         ; 0060f156
    MOVSD.REP ES:EDI,ESI                ; 0060f159
    MOV CL,AL                           ; 0060f15b
    AND CL,0x3                          ; 0060f15d
    MOVSB.REP ES:EDI,ESI                ; 0060f160
    POP EDI                             ; 0060f162
    POP ES                              ; 0060f163
    MOV ESI,dword ptr [ESP]             ; 0060f164
    PUSH ESI                            ; 0060f167
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060f168
    PUSH 0x0                            ; 0060f16c
    ADD EAX,EDX                         ; 0060f16e
    PUSH EAX                            ; 0060f170
    MOV [0x03f9b860],EAX                ; 0060f171 | g_EnvironStringArea
    CALL crt_memory.c_memset_FUN_005fde40 ; 0060f176
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0060f17b
    JMP 0x0060f1ba                      ; 0060f17e
        ;   XREF to: 0060f1ba (UNCONDITIONAL_JUMP)  ; LAB_0060f1ba
    PUSH EAX                            ; 0060f180
        ;   Label: LAB_0060f180
    PUSH EBX                            ; 0060f181
    CALL crt_memory.c_realloc_FUN_00601df0 ; 0060f182
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0060f187
    MOV EBX,EAX                         ; 0060f18a
    TEST EAX,EAX                        ; 0060f18c
    JNZ 0x0060f19d                      ; 0060f18e
        ;   XREF to: 0060f19d (CONDITIONAL_JUMP)  ; LAB_0060f19d
    MOV EAX,0xffffffff                  ; 0060f190
    ADD ESP,0x8                         ; 0060f195
    POP EBP                             ; 0060f198
    POP EDI                             ; 0060f199
    POP ESI                             ; 0060f19a
    POP EBX                             ; 0060f19b
    RET                                 ; 0060f19c
    PUSH EBP                            ; 0060f19d
        ;   Label: LAB_0060f19d
    MOV ECX,dword ptr [0x03f9b860]      ; 0060f19e | g_EnvironStringArea
    MOV ESI,dword ptr [ESP + 0x8]       ; 0060f1a4
    PUSH ECX                            ; 0060f1a8
    ADD ESI,EAX                         ; 0060f1a9
    PUSH ESI                            ; 0060f1ab
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0060f1ac
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0060f1b1
    MOV dword ptr [0x03f9b860],ESI      ; 0060f1b4 | g_EnvironStringArea
    MOV dword ptr [EBX + EBP*0x4 + 0x4],0x0 ; 0060f1ba
        ;   Label: LAB_0060f1ba
    MOV dword ptr [0x03f9b864],EBX      ; 0060f1c2 | g_EnvironmentBlock
    JMP 0x0060f1cd                      ; 0060f1c8
        ;   XREF to: 0060f1cd (UNCONDITIONAL_JUMP)  ; LAB_0060f1cd
    LEA EBP,[EAX + -0x1]                ; 0060f1ca
        ;   Label: LAB_0060f1ca
    LEA EAX,[EBP*0x4 + 0x0]             ; 0060f1cd
        ;   Label: LAB_0060f1cd
    ADD EBX,EAX                         ; 0060f1d4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0060f1d6
    MOV dword ptr [EBX],EAX             ; 0060f1da
    MOV EAX,[0x03f9b860]                ; 0060f1dc | g_EnvironStringArea
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 0060f1e1
    XOR EAX,EAX                         ; 0060f1e5
        ;   Label: LAB_0060f1e5
    ADD ESP,0x8                         ; 0060f1e7
        ;   Label: LAB_0060f1e7
    POP EBP                             ; 0060f1ea
    POP EDI                             ; 0060f1eb
    POP ESI                             ; 0060f1ec
    POP EBX                             ; 0060f1ed
    RET                                 ; 0060f1ee

