; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseDeathType_FUN_004890e0(char *type_name,int *out_type_id)
;
; Parameters:
; char *           Stack[0x4]:4   type_name
; int *            Stack[0x8]:4   out_type_id
;
; XREF[1]:
;   core_event.cpp_FUN_00489670 at 0048bb4d
;
; Referenced Globals:
;   TerminatedCString s_generic_005d2f6c
;   TerminatedCString s_drown_005d2f74
;   undefined4 DAT_005d2f7a
;   TerminatedCString s_explode_005d2f7f
;   TerminatedCString s_fallApart_005d2f87
;   TerminatedCString s_shatter_005d2f91
;   TerminatedCString s_electrocute_005d2f99
;   undefined4 DAT_005d2fa5
;   TerminatedCString s_Chopped_005d2fa9
;   TerminatedCString s_Crushed_005d2fb1
;   TerminatedCString s_Impale_005d2fb9
;   undefined4 DAT_005d2fc0
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004890e0
        ;   Label: core_event.cpp_parseDeathType_FUN_004890e0
    PUSH ESI                            ; 004890e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004890e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004890e6
    PUSH 0x5d2f6c                       ; 004890ea | = "generic"
    PUSH EBX                            ; 004890ef
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004890f0
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004890f5
    TEST EAX,EAX                        ; 004890f8
    JNZ 0x00489106                      ; 004890fa
        ;   XREF to: 00489106 (CONDITIONAL_JUMP)  ; LAB_00489106
    MOV dword ptr [ESI],EAX             ; 004890fc
    MOV EAX,0x1                         ; 004890fe
    POP ESI                             ; 00489103
    POP EBX                             ; 00489104
    RET                                 ; 00489105
    PUSH 0x5d2f74                       ; 00489106 | = "drown"
        ;   Label: LAB_00489106
    PUSH EBX                            ; 0048910b
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048910c
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00489111
    TEST EAX,EAX                        ; 00489114
    JNZ 0x00489126                      ; 00489116
        ;   XREF to: 00489126 (CONDITIONAL_JUMP)  ; LAB_00489126
    MOV dword ptr [ESI],0x1             ; 00489118
    MOV EAX,0x1                         ; 0048911e
    POP ESI                             ; 00489123
    POP EBX                             ; 00489124
    RET                                 ; 00489125
    PUSH 0x5d2f7a                       ; 00489126 | DAT_005d2f7a
        ;   Label: LAB_00489126
    PUSH EBX                            ; 0048912b
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048912c
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00489131
    TEST EAX,EAX                        ; 00489134
    JNZ 0x00489146                      ; 00489136
        ;   XREF to: 00489146 (CONDITIONAL_JUMP)  ; LAB_00489146
    MOV dword ptr [ESI],0x2             ; 00489138
    MOV EAX,0x1                         ; 0048913e
    POP ESI                             ; 00489143
    POP EBX                             ; 00489144
    RET                                 ; 00489145
    PUSH 0x5d2f7f                       ; 00489146 | = "explode"
        ;   Label: LAB_00489146
    PUSH EBX                            ; 0048914b
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048914c
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00489151
    TEST EAX,EAX                        ; 00489154
    JNZ 0x00489166                      ; 00489156
        ;   XREF to: 00489166 (CONDITIONAL_JUMP)  ; LAB_00489166
    MOV dword ptr [ESI],0x3             ; 00489158
    MOV EAX,0x1                         ; 0048915e
    POP ESI                             ; 00489163
    POP EBX                             ; 00489164
    RET                                 ; 00489165
    PUSH 0x5d2f87                       ; 00489166 | = "fallApart"
        ;   Label: LAB_00489166
    PUSH EBX                            ; 0048916b
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048916c
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00489171
    TEST EAX,EAX                        ; 00489174
    JNZ 0x00489186                      ; 00489176
        ;   XREF to: 00489186 (CONDITIONAL_JUMP)  ; LAB_00489186
    MOV dword ptr [ESI],0x4             ; 00489178
    MOV EAX,0x1                         ; 0048917e
    POP ESI                             ; 00489183
    POP EBX                             ; 00489184
    RET                                 ; 00489185
    PUSH 0x5d2f91                       ; 00489186 | = "shatter"
        ;   Label: LAB_00489186
    PUSH EBX                            ; 0048918b
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048918c
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00489191
    TEST EAX,EAX                        ; 00489194
    JNZ 0x004891a6                      ; 00489196
        ;   XREF to: 004891a6 (CONDITIONAL_JUMP)  ; LAB_004891a6
    MOV dword ptr [ESI],0x5             ; 00489198
    MOV EAX,0x1                         ; 0048919e
    POP ESI                             ; 004891a3
    POP EBX                             ; 004891a4
    RET                                 ; 004891a5
    PUSH 0x5d2f99                       ; 004891a6 | = "electrocute"
        ;   Label: LAB_004891a6
    PUSH EBX                            ; 004891ab
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004891ac
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004891b1
    TEST EAX,EAX                        ; 004891b4
    JNZ 0x004891c6                      ; 004891b6
        ;   XREF to: 004891c6 (CONDITIONAL_JUMP)  ; LAB_004891c6
    MOV dword ptr [ESI],0x6             ; 004891b8
    MOV EAX,0x1                         ; 004891be
    POP ESI                             ; 004891c3
    POP EBX                             ; 004891c4
    RET                                 ; 004891c5
    PUSH 0x5d2fa5                       ; 004891c6 | DAT_005d2fa5
        ;   Label: LAB_004891c6
    PUSH EBX                            ; 004891cb
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004891cc
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004891d1
    TEST EAX,EAX                        ; 004891d4
    JNZ 0x004891e6                      ; 004891d6
        ;   XREF to: 004891e6 (CONDITIONAL_JUMP)  ; LAB_004891e6
    MOV dword ptr [ESI],0x69            ; 004891d8
    MOV EAX,0x1                         ; 004891de
    POP ESI                             ; 004891e3
    POP EBX                             ; 004891e4
    RET                                 ; 004891e5
    PUSH 0x5d2fa9                       ; 004891e6 | = "Chopped"
        ;   Label: LAB_004891e6
    PUSH EBX                            ; 004891eb
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004891ec
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004891f1
    TEST EAX,EAX                        ; 004891f4
    JNZ 0x00489206                      ; 004891f6
        ;   XREF to: 00489206 (CONDITIONAL_JUMP)  ; LAB_00489206
    MOV dword ptr [ESI],0x7             ; 004891f8
    MOV EAX,0x1                         ; 004891fe
    POP ESI                             ; 00489203
    POP EBX                             ; 00489204
    RET                                 ; 00489205
    PUSH 0x5d2fb1                       ; 00489206 | = "Crushed"
        ;   Label: LAB_00489206
    PUSH EBX                            ; 0048920b
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048920c
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00489211
    TEST EAX,EAX                        ; 00489214
    JNZ 0x00489226                      ; 00489216
        ;   XREF to: 00489226 (CONDITIONAL_JUMP)  ; LAB_00489226
    MOV dword ptr [ESI],0x8             ; 00489218
    MOV EAX,0x1                         ; 0048921e
    POP ESI                             ; 00489223
    POP EBX                             ; 00489224
    RET                                 ; 00489225
    PUSH 0x5d2fb9                       ; 00489226 | = "Impale"
        ;   Label: LAB_00489226
    PUSH EBX                            ; 0048922b
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048922c
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00489231
    TEST EAX,EAX                        ; 00489234
    JNZ 0x00489246                      ; 00489236
        ;   XREF to: 00489246 (CONDITIONAL_JUMP)  ; LAB_00489246
    MOV dword ptr [ESI],0x9             ; 00489238
    MOV EAX,0x1                         ; 0048923e
    POP ESI                             ; 00489243
    POP EBX                             ; 00489244
    RET                                 ; 00489245
    PUSH 0x5d2fc0                       ; 00489246 | DAT_005d2fc0
        ;   Label: LAB_00489246
    PUSH EBX                            ; 0048924b
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048924c
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00489251
    TEST EAX,EAX                        ; 00489254
    JNZ 0x00489266                      ; 00489256
        ;   XREF to: 00489266 (CONDITIONAL_JUMP)  ; LAB_00489266
    MOV dword ptr [ESI],0xa             ; 00489258
    MOV EAX,0x1                         ; 0048925e
    POP ESI                             ; 00489263
    POP EBX                             ; 00489264
    RET                                 ; 00489265
    XOR EAX,EAX                         ; 00489266
        ;   Label: LAB_00489266
    POP ESI                             ; 00489268
    POP EBX                             ; 00489269
    RET                                 ; 0048926a

