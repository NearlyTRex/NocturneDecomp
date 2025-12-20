; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20(CPickList * this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CKeys* g_CKeysPtr = 02dcd7d4
;   char[256] g_CharacterClassificationTable
;   CKeys g_CKeysInstance
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0
;   shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3f20
        ;   Label: shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20
    PUSH ESI                            ; 004a3f21
    PUSH EDI                            ; 004a3f22
    PUSH EBP                            ; 004a3f23
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a3f24
    PUSH 0x1c                           ; 004a3f28
    MOV EAX,[0x0067cf44]                ; 004a3f2a | g_CKeysPtr
    PUSH EAX                            ; 004a3f2f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a3f30 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a3f32
    ADD ESP,0x8                         ; 004a3f35
    TEST EAX,EAX                        ; 004a3f38
    JZ 0x004a3f74                       ; 004a3f3a
        ;   XREF to: 004a3f74 (CONDITIONAL_JUMP)  ; LAB_004a3f74
    CMP dword ptr [EBX + 0x3a4],0x1     ; 004a3f3c
    JNZ 0x004a3f4f                      ; 004a3f43
        ;   XREF to: 004a3f4f (CONDITIONAL_JUMP)  ; LAB_004a3f4f
    MOV EAX,0xffffffff                  ; 004a3f45
        ;   Label: LAB_004a3f45
    POP EBP                             ; 004a3f4a
    POP EDI                             ; 004a3f4b
    POP ESI                             ; 004a3f4c
    POP EBX                             ; 004a3f4d
    RET                                 ; 004a3f4e
    MOV ECX,dword ptr [EBX + 0x17c]     ; 004a3f4f
        ;   Label: LAB_004a3f4f
    PUSH ECX                            ; 004a3f55
    PUSH EBX                            ; 004a3f56
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0 ; 004a3f57
        ;   XREF to: 004a54e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 004a3f5c
    TEST EAX,EAX                        ; 004a3f5f
    JZ 0x004a3f74                       ; 004a3f61
        ;   XREF to: 004a3f74 (CONDITIONAL_JUMP)  ; LAB_004a3f74
    MOV dword ptr [EBX + 0x170],0x1     ; 004a3f63
    XOR EAX,EAX                         ; 004a3f6d
    POP EBP                             ; 004a3f6f
    POP EDI                             ; 004a3f70
    POP ESI                             ; 004a3f71
    POP EBX                             ; 004a3f72
    RET                                 ; 004a3f73
    PUSH 0x1                            ; 004a3f74
        ;   Label: LAB_004a3f74
    MOV EAX,[0x0067cf44]                ; 004a3f76 | g_CKeysPtr
    PUSH EAX                            ; 004a3f7b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a3f7c | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a3f7e
    ADD ESP,0x8                         ; 004a3f81
    TEST EAX,EAX                        ; 004a3f84
    JNZ 0x004a3f45                      ; 004a3f86
        ;   XREF to: 004a3f45 (CONDITIONAL_JUMP)  ; LAB_004a3f45
    PUSH 0x1d                           ; 004a3f88
    MOV EAX,[0x0067cf44]                ; 004a3f8a | g_CKeysPtr
    PUSH EAX                            ; 004a3f8f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a3f90 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004a3f92
    ADD ESP,0x8                         ; 004a3f94
    TEST EAX,EAX                        ; 004a3f97
    JZ 0x004a3fd5                       ; 004a3f99
        ;   XREF to: 004a3fd5 (CONDITIONAL_JUMP)  ; LAB_004a3fd5
    PUSH 0x52                           ; 004a3f9b
    MOV EAX,[0x0067cf44]                ; 004a3f9d | g_CKeysPtr
    PUSH EAX                            ; 004a3fa2 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a3fa3 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a3fa5
    ADD ESP,0x8                         ; 004a3fa8
    TEST EAX,EAX                        ; 004a3fab
    JZ 0x004a3fb8                       ; 004a3fad
        ;   XREF to: 004a3fb8 (CONDITIONAL_JUMP)  ; LAB_004a3fb8
    PUSH EBX                            ; 004a3faf
    CALL shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270 ; 004a3fb0
        ;   XREF to: 004a3270 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004a3fb5
    PUSH 0x2e                           ; 004a3fb8
        ;   Label: LAB_004a3fb8
    MOV EAX,[0x0067cf44]                ; 004a3fba | g_CKeysPtr
    PUSH EAX                            ; 004a3fbf | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a3fc0 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a3fc2
    ADD ESP,0x8                         ; 004a3fc5
    TEST EAX,EAX                        ; 004a3fc8
    JZ 0x004a3fd5                       ; 004a3fca
        ;   XREF to: 004a3fd5 (CONDITIONAL_JUMP)  ; LAB_004a3fd5
    PUSH EBX                            ; 004a3fcc
    CALL shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270 ; 004a3fcd
        ;   XREF to: 004a3270 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004a3fd2
    PUSH 0x2a                           ; 004a3fd5
        ;   Label: LAB_004a3fd5
    MOV EAX,[0x0067cf44]                ; 004a3fd7 | g_CKeysPtr
    PUSH EAX                            ; 004a3fdc | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a3fdd | g_CKeysInstance
    XOR ESI,ESI                         ; 004a3fdf
    CALL dword ptr [EDX]                ; 004a3fe1
    ADD ESP,0x8                         ; 004a3fe3
    TEST EAX,EAX                        ; 004a3fe6
    JZ 0x004a40f6                       ; 004a3fe8
        ;   XREF to: 004a40f6 (CONDITIONAL_JUMP)  ; LAB_004a40f6
    PUSH 0x2a                           ; 004a3fee
        ;   Label: LAB_004a3fee
    MOV EAX,[0x0067cf44]                ; 004a3ff0 | g_CKeysPtr
    PUSH EAX                            ; 004a3ff5 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a3ff6 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004a3ff8
    ADD ESP,0x8                         ; 004a3ffa
    TEST EAX,EAX                        ; 004a3ffd
    JNZ 0x004a4118                      ; 004a3fff
        ;   XREF to: 004a4118 (CONDITIONAL_JUMP)  ; LAB_004a4118
    XOR EAX,EAX                         ; 004a4005
        ;   Label: LAB_004a4005
    XOR EDX,EDX                         ; 004a4007
    MOV EDI,dword ptr [EBX + 0x3a4]     ; 004a4009
        ;   Label: LAB_004a4009
    ADD EDI,ESI                         ; 004a400f
    MOV dword ptr [EBX + 0x3a4],EDI     ; 004a4011
    CMP EDI,0x2                         ; 004a4017
    JL 0x004a4158                       ; 004a401a
        ;   XREF to: 004a4158 (CONDITIONAL_JUMP)  ; LAB_004a4158
    MOV dword ptr [EBX + 0x3a4],0xffffffff ; 004a4020
    LEA ESI,[EBX + 0x10c]               ; 004a402a
        ;   Label: LAB_004a402a
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 004a4030
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
        ;   Label: LAB_004a4030
    TEST EAX,EAX                        ; 004a4035
    JZ 0x004a41b8                       ; 004a4037
        ;   XREF to: 004a41b8 (CONDITIONAL_JUMP)  ; LAB_004a41b8
    MOV EDI,dword ptr [0x0067cf44]      ; 004a403d | g_CKeysPtr
    PUSH EDI                            ; 004a4043 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 004a4044
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr)
    ADD ESP,0x4                         ; 004a4049
    MOV EDX,EAX                         ; 004a404c
    CMP EAX,0x8                         ; 004a404e
    JNZ 0x004a405a                      ; 004a4051
        ;   XREF to: 004a405a (CONDITIONAL_JUMP)  ; LAB_004a405a
    MOV byte ptr [EBX + 0x10c],0x0      ; 004a4053
    CMP dword ptr [EBX + 0x19c],0x0     ; 004a405a
        ;   Label: LAB_004a405a
    JNZ 0x004a4030                      ; 004a4061
        ;   XREF to: 004a4030 (CONDITIONAL_JUMP)  ; LAB_004a4030
    MOV AL,DL                           ; 004a4063
    INC AL                              ; 004a4065
    AND EAX,0xff                        ; 004a4067
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004a406c | g_CharacterClassificationTable
    JZ 0x004a4097                       ; 004a4073
        ;   XREF to: 004a4097 (CONDITIONAL_JUMP)  ; LAB_004a4097
    MOV EDI,ESI                         ; 004a4075
    SUB ECX,ECX                         ; 004a4077
    DEC ECX                             ; 004a4079
    XOR EAX,EAX                         ; 004a407a
    SCASB.REPNE ES:EDI                  ; 004a407c
    NOT ECX                             ; 004a407e
    DEC ECX                             ; 004a4080
    CMP ECX,0x63                        ; 004a4081
    JNC 0x004a4097                      ; 004a4084
        ;   XREF to: 004a4097 (CONDITIONAL_JUMP)  ; LAB_004a4097
    LEA EAX,[EBX + ECX*0x1]             ; 004a4086
    MOV byte ptr [EAX + 0x10c],DL       ; 004a4089
    MOV byte ptr [ECX + EBX*0x1 + 0x10d],0x0 ; 004a408f
    CMP byte ptr [EBX + 0x10c],0x0      ; 004a4097
        ;   Label: LAB_004a4097
    JZ 0x004a4030                       ; 004a409e
        ;   XREF to: 004a4030 (CONDITIONAL_JUMP)  ; LAB_004a4030
    MOV EAX,dword ptr [EBX + 0x17c]     ; 004a40a0
    PUSH EAX                            ; 004a40a6
    PUSH EBX                            ; 004a40a7
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004a40a8
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004a40ad
    PUSH EAX                            ; 004a40b0
    PUSH ESI                            ; 004a40b1
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004a40b2
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a40b7
    TEST EAX,EAX                        ; 004a40ba
    JLE 0x004a41a9                      ; 004a40bc
        ;   XREF to: 004a41a9 (CONDITIONAL_JUMP)  ; LAB_004a41a9
    MOV EDX,dword ptr [EBX]             ; 004a40c2
        ;   Label: LAB_004a40c2
    MOV EAX,dword ptr [EBX + 0x17c]     ; 004a40c4
    CMP EAX,EDX                         ; 004a40ca
    JGE 0x004a4030                      ; 004a40cc
        ;   XREF to: 004a4030 (CONDITIONAL_JUMP)  ; LAB_004a4030
    PUSH EAX                            ; 004a40d2
    PUSH EBX                            ; 004a40d3
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004a40d4
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004a40d9
    PUSH EAX                            ; 004a40dc
    PUSH ESI                            ; 004a40dd
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004a40de
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a40e3
    TEST EAX,EAX                        ; 004a40e6
    JLE 0x004a4030                      ; 004a40e8
        ;   XREF to: 004a4030 (CONDITIONAL_JUMP)  ; LAB_004a4030
    INC dword ptr [EBX + 0x17c]         ; 004a40ee
    JMP 0x004a40c2                      ; 004a40f4
        ;   XREF to: 004a40c2 (UNCONDITIONAL_JUMP)  ; LAB_004a40c2
    PUSH 0xf                            ; 004a40f6
        ;   Label: LAB_004a40f6
    MOV EAX,[0x0067cf44]                ; 004a40f8 | g_CKeysPtr
    PUSH EAX                            ; 004a40fd | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a40fe | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a4100
    ADD ESP,0x8                         ; 004a4103
    TEST EAX,EAX                        ; 004a4106
    JZ 0x004a3fee                       ; 004a4108
        ;   XREF to: 004a3fee (CONDITIONAL_JUMP)  ; LAB_004a3fee
    MOV ESI,0x1                         ; 004a410e
    JMP 0x004a3fee                      ; 004a4113
        ;   XREF to: 004a3fee (UNCONDITIONAL_JUMP)  ; LAB_004a3fee
    PUSH 0xf                            ; 004a4118
        ;   Label: LAB_004a4118
    MOV EAX,[0x0067cf44]                ; 004a411a | g_CKeysPtr
    PUSH EAX                            ; 004a411f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a4120 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a4122
    ADD ESP,0x8                         ; 004a4125
    TEST EAX,EAX                        ; 004a4128
    JZ 0x004a4005                       ; 004a412a
        ;   XREF to: 004a4005 (CONDITIONAL_JUMP)  ; LAB_004a4005
    MOV ESI,0xffffffff                  ; 004a4130
    JMP 0x004a4005                      ; 004a4135
        ;   XREF to: 004a4005 (UNCONDITIONAL_JUMP)  ; LAB_004a4005
    INC EAX                             ; 004a413a
        ;   Label: LAB_004a413a
    CMP EAX,0xa                         ; 004a413b
    JL 0x004a4009                       ; 004a413e
        ;   XREF to: 004a4009 (CONDITIONAL_JUMP)  ; LAB_004a4009
    CMP dword ptr [EBX + 0x3a4],-0x1    ; 004a4144
    JZ 0x004a402a                       ; 004a414b
        ;   XREF to: 004a402a (CONDITIONAL_JUMP)  ; LAB_004a402a
    XOR EAX,EAX                         ; 004a4151
    POP EBP                             ; 004a4153
    POP EDI                             ; 004a4154
    POP ESI                             ; 004a4155
    POP EBX                             ; 004a4156
    RET                                 ; 004a4157
    CMP EDI,-0x1                        ; 004a4158
        ;   Label: LAB_004a4158
    JGE 0x004a4183                      ; 004a415b
        ;   XREF to: 004a4183 (CONDITIONAL_JUMP)  ; LAB_004a4183
    MOV dword ptr [EBX + 0x3a4],0x1     ; 004a415d
    CMP DL,byte ptr [EBX + 0xa8]        ; 004a4167
        ;   Label: LAB_004a4167
    JZ 0x004a413a                       ; 004a416d
        ;   XREF to: 004a413a (CONDITIONAL_JUMP)  ; LAB_004a413a
    CMP dword ptr [EBX + 0x3a4],-0x1    ; 004a416f
    JZ 0x004a402a                       ; 004a4176
        ;   XREF to: 004a402a (CONDITIONAL_JUMP)  ; LAB_004a402a
    XOR EAX,EAX                         ; 004a417c
    POP EBP                             ; 004a417e
    POP EDI                             ; 004a417f
    POP ESI                             ; 004a4180
    POP EBX                             ; 004a4181
    RET                                 ; 004a4182
    CMP EDX,EDI                         ; 004a4183
        ;   Label: LAB_004a4183
    JNZ 0x004a418c                      ; 004a4185
        ;   XREF to: 004a418c (CONDITIONAL_JUMP)  ; LAB_004a418c
    CMP DL,byte ptr [EBX + 0x44]        ; 004a4187
    JZ 0x004a413a                       ; 004a418a
        ;   XREF to: 004a413a (CONDITIONAL_JUMP)  ; LAB_004a413a
    CMP dword ptr [EBX + 0x3a4],0x1     ; 004a418c
        ;   Label: LAB_004a418c
    JZ 0x004a4167                       ; 004a4193
        ;   XREF to: 004a4167 (CONDITIONAL_JUMP)  ; LAB_004a4167
    CMP dword ptr [EBX + 0x3a4],-0x1    ; 004a4195
    JZ 0x004a402a                       ; 004a419c
        ;   XREF to: 004a402a (CONDITIONAL_JUMP)  ; LAB_004a402a
    XOR EAX,EAX                         ; 004a41a2
    POP EBP                             ; 004a41a4
    POP EDI                             ; 004a41a5
    POP ESI                             ; 004a41a6
    POP EBX                             ; 004a41a7
    RET                                 ; 004a41a8
    MOV dword ptr [EBX + 0x17c],0x0     ; 004a41a9
        ;   Label: LAB_004a41a9
    JMP 0x004a40c2                      ; 004a41b3
        ;   XREF to: 004a40c2 (UNCONDITIONAL_JUMP)  ; LAB_004a40c2
    PUSH 0x48                           ; 004a41b8
        ;   Label: LAB_004a41b8
    MOV EAX,[0x0067cf44]                ; 004a41ba | g_CKeysPtr
    PUSH EAX                            ; 004a41bf | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a41c0 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a41c2
    ADD ESP,0x8                         ; 004a41c5
    TEST EAX,EAX                        ; 004a41c8
    JZ 0x004a41e0                       ; 004a41ca
        ;   XREF to: 004a41e0 (CONDITIONAL_JUMP)  ; LAB_004a41e0
    MOV EDX,dword ptr [EBX + 0x17c]     ; 004a41cc
    MOV byte ptr [EBX + 0x10c],0x0      ; 004a41d2
    DEC EDX                             ; 004a41d9
    MOV dword ptr [EBX + 0x17c],EDX     ; 004a41da
    PUSH 0x50                           ; 004a41e0
        ;   Label: LAB_004a41e0
    MOV EAX,[0x0067cf44]                ; 004a41e2 | g_CKeysPtr
    PUSH EAX                            ; 004a41e7 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a41e8 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a41ea
    ADD ESP,0x8                         ; 004a41ed
    TEST EAX,EAX                        ; 004a41f0
    JZ 0x004a4208                       ; 004a41f2
        ;   XREF to: 004a4208 (CONDITIONAL_JUMP)  ; LAB_004a4208
    MOV ECX,dword ptr [EBX + 0x17c]     ; 004a41f4
    MOV byte ptr [EBX + 0x10c],0x0      ; 004a41fa
    INC ECX                             ; 004a4201
    MOV dword ptr [EBX + 0x17c],ECX     ; 004a4202
    PUSH 0x47                           ; 004a4208
        ;   Label: LAB_004a4208
    MOV EAX,[0x0067cf44]                ; 004a420a | g_CKeysPtr
    PUSH EAX                            ; 004a420f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a4210 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a4212
    ADD ESP,0x8                         ; 004a4215
    TEST EAX,EAX                        ; 004a4218
    JZ 0x004a422d                       ; 004a421a
        ;   XREF to: 004a422d (CONDITIONAL_JUMP)  ; LAB_004a422d
    MOV byte ptr [EBX + 0x10c],0x0      ; 004a421c
    MOV dword ptr [EBX + 0x17c],0x0     ; 004a4223
    PUSH 0x4f                           ; 004a422d
        ;   Label: LAB_004a422d
    MOV EAX,[0x0067cf44]                ; 004a422f | g_CKeysPtr
    PUSH EAX                            ; 004a4234 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a4235 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a4237
    ADD ESP,0x8                         ; 004a423a
    TEST EAX,EAX                        ; 004a423d
    JZ 0x004a4250                       ; 004a423f
        ;   XREF to: 004a4250 (CONDITIONAL_JUMP)  ; LAB_004a4250
    MOV EAX,dword ptr [EBX]             ; 004a4241
    MOV byte ptr [EBX + 0x10c],0x0      ; 004a4243
    MOV dword ptr [EBX + 0x17c],EAX     ; 004a424a
    PUSH 0x49                           ; 004a4250
        ;   Label: LAB_004a4250
    MOV EAX,[0x0067cf44]                ; 004a4252 | g_CKeysPtr
    PUSH EAX                            ; 004a4257 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a4258 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a425a
    ADD ESP,0x8                         ; 004a425d
    TEST EAX,EAX                        ; 004a4260
    JZ 0x004a4293                       ; 004a4262
        ;   XREF to: 004a4293 (CONDITIONAL_JUMP)  ; LAB_004a4293
    MOV ESI,dword ptr [EBX + 0x17c]     ; 004a4264
    MOV EAX,dword ptr [EBX + 0x184]     ; 004a426a
    MOV EDI,dword ptr [EBX + 0x180]     ; 004a4270
    MOV byte ptr [EBX + 0x10c],0x0      ; 004a4276
    SUB ESI,EAX                         ; 004a427d
    MOV EAX,dword ptr [EBX + 0x184]     ; 004a427f
    MOV dword ptr [EBX + 0x17c],ESI     ; 004a4285
    SUB EDI,EAX                         ; 004a428b
    MOV dword ptr [EBX + 0x180],EDI     ; 004a428d
    PUSH 0x51                           ; 004a4293
        ;   Label: LAB_004a4293
    MOV EAX,[0x0067cf44]                ; 004a4295 | g_CKeysPtr
    PUSH EAX                            ; 004a429a | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a429b | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a429d
    ADD ESP,0x8                         ; 004a42a0
    TEST EAX,EAX                        ; 004a42a3
    JZ 0x004a42d6                       ; 004a42a5
        ;   XREF to: 004a42d6 (CONDITIONAL_JUMP)  ; LAB_004a42d6
    MOV EBP,dword ptr [EBX + 0x17c]     ; 004a42a7
    MOV EAX,dword ptr [EBX + 0x184]     ; 004a42ad
    MOV EDX,dword ptr [EBX + 0x180]     ; 004a42b3
    MOV byte ptr [EBX + 0x10c],0x0      ; 004a42b9
    ADD EBP,EAX                         ; 004a42c0
    MOV EAX,dword ptr [EBX + 0x184]     ; 004a42c2
    MOV dword ptr [EBX + 0x17c],EBP     ; 004a42c8
    ADD EDX,EAX                         ; 004a42ce
    MOV dword ptr [EBX + 0x180],EDX     ; 004a42d0
    PUSH 0x4b                           ; 004a42d6
        ;   Label: LAB_004a42d6
    MOV EAX,[0x0067cf44]                ; 004a42d8 | g_CKeysPtr
    PUSH EAX                            ; 004a42dd | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a42de | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a42e0
    ADD ESP,0x8                         ; 004a42e3
    TEST EAX,EAX                        ; 004a42e6
    JZ 0x004a4305                       ; 004a42e8
        ;   XREF to: 004a4305 (CONDITIONAL_JUMP)  ; LAB_004a4305
    MOV ECX,dword ptr [EBX + 0x17c]     ; 004a42ea
    MOV EAX,dword ptr [EBX + 0x188]     ; 004a42f0
    MOV byte ptr [EBX + 0x10c],0x0      ; 004a42f6
    SUB ECX,EAX                         ; 004a42fd
    MOV dword ptr [EBX + 0x17c],ECX     ; 004a42ff
    PUSH 0x4d                           ; 004a4305
        ;   Label: LAB_004a4305
    MOV EAX,[0x0067cf44]                ; 004a4307 | g_CKeysPtr
    PUSH EAX                            ; 004a430c | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a430d | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004a430f
    ADD ESP,0x8                         ; 004a4312
    TEST EAX,EAX                        ; 004a4315
    JZ 0x004a4334                       ; 004a4317
        ;   XREF to: 004a4334 (CONDITIONAL_JUMP)  ; LAB_004a4334
    MOV ESI,dword ptr [EBX + 0x17c]     ; 004a4319
    MOV EAX,dword ptr [EBX + 0x188]     ; 004a431f
    MOV byte ptr [EBX + 0x10c],0x0      ; 004a4325
    ADD ESI,EAX                         ; 004a432c
    MOV dword ptr [EBX + 0x17c],ESI     ; 004a432e
    XOR EAX,EAX                         ; 004a4334
        ;   Label: LAB_004a4334
    POP EBP                             ; 004a4336
    POP EDI                             ; 004a4337
    POP ESI                             ; 004a4338
    POP EBX                             ; 004a4339
    RET                                 ; 004a433a

