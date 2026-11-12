; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_trigger_cpp_FUN_0059c090(int param_1,CDemonActor *param_2)
;
; Local Variables:
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xb0]:1  local_b0
;
; Referenced Globals:
;   TerminatedCString s_core_trigger_cpp_005f8228
;   TerminatedCString s_CTrigger_containsActor_i_005f823c
;   TerminatedCString s_core_trigger_cpp_005f8276
;   TerminatedCString s_Hell_froze_005f828a
;   undefined4 DAT_005f8298
;   undefined4 DAT_005f829c
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c090
        ;   Label: core_trigger.cpp_FUN_0059c090
    PUSH ESI                            ; 0059c091
    PUSH EDI                            ; 0059c092
    PUSH EBP                            ; 0059c093
    SUB ESP,0x100                       ; 0059c094
    MOV EBX,dword ptr [ESP + 0x114]     ; 0059c09a
    MOV EBP,dword ptr [ESP + 0x118]     ; 0059c0a1
    TEST EBP,EBP                        ; 0059c0a8
    JNZ 0x0059c0b9                      ; 0059c0aa
        ;   XREF to: 0059c0b9 (CONDITIONAL_JUMP)  ; LAB_0059c0b9
    XOR EAX,EAX                         ; 0059c0ac
        ;   Label: LAB_0059c0ac
    ADD ESP,0x100                       ; 0059c0ae
    POP EBP                             ; 0059c0b4
    POP EDI                             ; 0059c0b5
    POP ESI                             ; 0059c0b6
    POP EBX                             ; 0059c0b7
    RET                                 ; 0059c0b8
    PUSH EBP                            ; 0059c0b9
        ;   Label: LAB_0059c0b9
    MOV EAX,dword ptr [EBP + 0x154]     ; 0059c0ba
    LEA ESI,[ESP + 0x34]                ; 0059c0c0
    LEA EDI,[ESP + 0x64]                ; 0059c0c4
    CALL dword ptr [EAX + 0x1c]         ; 0059c0c8
    MOV ECX,0x6                         ; 0059c0cb
    LEA ESI,[ESP + 0x34]                ; 0059c0d0
    ADD ESP,0x4                         ; 0059c0d4
    MOVSD.REP ES:EDI,ESI                ; 0059c0d7
    LEA EAX,[ESP + 0x60]                ; 0059c0d9
    FLD float ptr [ESP + 0x60]          ; 0059c0dd
    FLD float ptr [ESP + 0x64]          ; 0059c0e1
    FLD float ptr [ESP + 0x68]          ; 0059c0e5
    LEA EDI,[ESP + 0xb4]                ; 0059c0e9
    LEA ESI,[ESP + 0x90]                ; 0059c0f0
    FXCH ST2                            ; 0059c0f7
    FADD float ptr [EAX + 0xc]          ; 0059c0f9
    FXCH                                ; 0059c0fc
    FADD float ptr [EAX + 0x10]         ; 0059c0fe
    FXCH ST2                            ; 0059c101
    FADD float ptr [EAX + 0x14]         ; 0059c103
    FXCH                                ; 0059c106
    FSTP float ptr [ESP + 0x90]         ; 0059c108
    FXCH                                ; 0059c10f
    FSTP float ptr [ESP + 0x94]         ; 0059c111
    FSTP float ptr [ESP + 0x98]         ; 0059c118
    MOVSD ES:EDI,ESI                    ; 0059c11f
    MOVSD ES:EDI,ESI                    ; 0059c120
    MOVSD ES:EDI,ESI                    ; 0059c121
    FLD float ptr [0x005f8298]          ; 0059c122 | DAT_005f8298
    FLD float ptr [ESP + 0xb4]          ; 0059c128
    FMUL ST1                            ; 0059c12f
    FLD float ptr [ESP + 0xb8]          ; 0059c131
    FMUL ST2                            ; 0059c138
    LEA EAX,[ESP + 0xc0]                ; 0059c13a
    FLD float ptr [ESP + 0xbc]          ; 0059c141
    FMULP ST3                           ; 0059c148
    PUSH EAX                            ; 0059c14a
    LEA EDI,[ESP + 0xc4]                ; 0059c14b
    LEA ESI,[ESP + 0xe8]                ; 0059c152
    FXCH                                ; 0059c159
    FSTP float ptr [ESP + 0xe8]         ; 0059c15b
    FSTP float ptr [ESP + 0xec]         ; 0059c162
    FSTP float ptr [ESP + 0xf0]         ; 0059c169
    MOVSD ES:EDI,ESI                    ; 0059c170
    MOVSD ES:EDI,ESI                    ; 0059c171
    MOVSD ES:EDI,ESI                    ; 0059c172
    PUSH EBP                            ; 0059c173
    LEA ESI,[ESP + 0xe0]                ; 0059c174
    LEA EDI,[ESP + 0xb0]                ; 0059c17b
    CALL core_actor.cpp_FUN_00408b40    ; 0059c182
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0xe0]                ; 0059c187
    ADD ESP,0x8                         ; 0059c18e
    MOVSD ES:EDI,ESI                    ; 0059c191
    MOVSD ES:EDI,ESI                    ; 0059c192
    MOVSD ES:EDI,ESI                    ; 0059c193
    CMP dword ptr [EBX + 0x218],0x0     ; 0059c194
    JNZ 0x0059c2ea                      ; 0059c19b
        ;   XREF to: 0059c2ea (CONDITIONAL_JUMP)  ; LAB_0059c2ea
    LEA EAX,[EBX + 0x20]                ; 0059c1a1
        ;   Label: LAB_0059c1a1
    FLD float ptr [ESP + 0xa8]          ; 0059c1a4
    FSUB float ptr [EAX]                ; 0059c1ab
    FMUL ST0                            ; 0059c1ad
    FLD float ptr [ESP + 0xac]          ; 0059c1af
    FSUB float ptr [EAX + 0x4]          ; 0059c1b6
    FMUL ST0                            ; 0059c1b9
    FLD float ptr [ESP + 0xb0]          ; 0059c1bb
    FXCH                                ; 0059c1c2
    FADDP ST2,ST0                       ; 0059c1c4
    FSUB float ptr [EAX + 0x8]          ; 0059c1c6
    FMUL ST0                            ; 0059c1c9
    FLD float ptr [EBX + 0x158]         ; 0059c1cb
    FXCH                                ; 0059c1d1
    FADDP ST2,ST0                       ; 0059c1d3
    FMUL float ptr [EBX + 0x158]        ; 0059c1d5
    FXCH                                ; 0059c1db
    FCOMPP                              ; 0059c1dd
    FNSTSW AX                           ; 0059c1df
    SAHF                                ; 0059c1e1
    JA 0x0059c0ac                       ; 0059c1e2
        ;   XREF to: 0059c0ac (CONDITIONAL_JUMP)  ; LAB_0059c0ac
    LEA EAX,[ESP + 0xa8]                ; 0059c1e8
    PUSH EAX                            ; 0059c1ef
    PUSH EBX                            ; 0059c1f0
    LEA ESI,[ESP + 0xa4]                ; 0059c1f1
    LEA EDI,[ESP + 0xd4]                ; 0059c1f8
    CALL core_actor.cpp_FUN_00408bb0    ; 0059c1ff
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xa4]                ; 0059c204
    ADD ESP,0x8                         ; 0059c20b
    MOVSD ES:EDI,ESI                    ; 0059c20e
    MOVSD ES:EDI,ESI                    ; 0059c20f
    MOVSD ES:EDI,ESI                    ; 0059c210
    LEA EAX,[ESP + 0xa8]                ; 0059c211
    LEA ESI,[ESP + 0xcc]                ; 0059c218
    CMP EAX,ESI                         ; 0059c21f
    JZ 0x0059c24d                       ; 0059c221
        ;   XREF to: 0059c24d (CONDITIONAL_JUMP)  ; LAB_0059c24d
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0059c223
    MOV dword ptr [ESP + 0xa8],EAX      ; 0059c22a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0059c231
    MOV dword ptr [ESP + 0xac],EAX      ; 0059c238
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0059c23f
    MOV dword ptr [ESP + 0xb0],EAX      ; 0059c246
    MOV EAX,dword ptr [EBX + 0x170]     ; 0059c24d
        ;   Label: LAB_0059c24d
    TEST EAX,EAX                        ; 0059c253
    JBE 0x0059c31a                      ; 0059c255
        ;   XREF to: 0059c31a (CONDITIONAL_JUMP)  ; LAB_0059c31a
    CMP EAX,0x1                         ; 0059c25b
    JNZ 0x0059c3c2                      ; 0059c25e
        ;   XREF to: 0059c3c2 (CONDITIONAL_JUMP)  ; LAB_0059c3c2
    PUSH EBX                            ; 0059c264
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059c265
    LEA ESI,[ESP + 0x7c]                ; 0059c26b
    LEA EDI,[ESP + 0x4]                 ; 0059c26f
    CALL dword ptr [EAX + 0x1c]         ; 0059c273
    MOV ECX,0x6                         ; 0059c276
    LEA ESI,[ESP + 0x7c]                ; 0059c27b
    ADD ESP,0x4                         ; 0059c27f
    MOVSD.REP ES:EDI,ESI                ; 0059c282
    FLD float ptr [ESP + 0xac]          ; 0059c284
    FCOMP float ptr [ESP + 0x4]         ; 0059c28b
    FNSTSW AX                           ; 0059c28f
    SAHF                                ; 0059c291
    JC 0x0059c0ac                       ; 0059c292
        ;   XREF to: 0059c0ac (CONDITIONAL_JUMP)  ; LAB_0059c0ac
    FLD float ptr [ESP + 0xac]          ; 0059c298
    FCOMP float ptr [ESP + 0x10]        ; 0059c29f
    FNSTSW AX                           ; 0059c2a3
    SAHF                                ; 0059c2a5
    JA 0x0059c0ac                       ; 0059c2a6
        ;   XREF to: 0059c0ac (CONDITIONAL_JUMP)  ; LAB_0059c0ac
    FLD float ptr [ESP + 0xb0]          ; 0059c2ac
    FMUL ST0                            ; 0059c2b3
    FLD float ptr [ESP + 0xa8]          ; 0059c2b5
    FMUL ST0                            ; 0059c2bc
    FADDP                               ; 0059c2be
    FLD float ptr [EBX + 0x160]         ; 0059c2c0
    FMUL float ptr [EBX + 0x168]        ; 0059c2c6
    FMUL double ptr [0x005f829c]        ; 0059c2cc | DAT_005f829c
    FCOMPP                              ; 0059c2d2
    FNSTSW AX                           ; 0059c2d4
    SAHF                                ; 0059c2d6
    JNC 0x0059c3b2                      ; 0059c2d7
        ;   XREF to: 0059c3b2 (CONDITIONAL_JUMP)  ; LAB_0059c3b2
    XOR EAX,EAX                         ; 0059c2dd
    ADD ESP,0x100                       ; 0059c2df
    POP EBP                             ; 0059c2e5
    POP EDI                             ; 0059c2e6
    POP ESI                             ; 0059c2e7
    POP EBX                             ; 0059c2e8
    RET                                 ; 0059c2e9
    MOV ECX,dword ptr [0x007c637c]      ; 0059c2ea | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_0059c2ea
    PUSH ECX                            ; 0059c2f0
    PUSH EBP                            ; 0059c2f1
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0059c2f2
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0059c2f7
    TEST EAX,EAX                        ; 0059c2fa
    JZ 0x0059c30b                       ; 0059c2fc
        ;   XREF to: 0059c30b (CONDITIONAL_JUMP)  ; LAB_0059c30b
    CMP dword ptr [EAX + 0x2500],0x0    ; 0059c2fe
    JZ 0x0059c0ac                       ; 0059c305
        ;   XREF to: 0059c0ac (CONDITIONAL_JUMP)  ; LAB_0059c0ac
    MOV EAX,dword ptr [EBP + 0x24]      ; 0059c30b
        ;   Label: LAB_0059c30b
    MOV dword ptr [ESP + 0xac],EAX      ; 0059c30e
    JMP 0x0059c1a1                      ; 0059c315
        ;   XREF to: 0059c1a1 (UNCONDITIONAL_JUMP)  ; LAB_0059c1a1
    PUSH EBX                            ; 0059c31a
        ;   Label: LAB_0059c31a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059c31b
    LEA ESI,[ESP + 0x4c]                ; 0059c321
    LEA EDI,[ESP + 0x1c]                ; 0059c325
    CALL dword ptr [EAX + 0x1c]         ; 0059c329
    MOV ECX,0x6                         ; 0059c32c
    LEA ESI,[ESP + 0x4c]                ; 0059c331
    ADD ESP,0x4                         ; 0059c335
    MOVSD.REP ES:EDI,ESI                ; 0059c338
    FLD float ptr [ESP + 0x18]          ; 0059c33a
    FCOMP float ptr [ESP + 0xa8]        ; 0059c33e
    FNSTSW AX                           ; 0059c345
    SAHF                                ; 0059c347
    JA 0x0059c0ac                       ; 0059c348
        ;   XREF to: 0059c0ac (CONDITIONAL_JUMP)  ; LAB_0059c0ac
    FLD float ptr [ESP + 0x1c]          ; 0059c34e
    FCOMP float ptr [ESP + 0xac]        ; 0059c352
    FNSTSW AX                           ; 0059c359
    SAHF                                ; 0059c35b
    JA 0x0059c0ac                       ; 0059c35c
        ;   XREF to: 0059c0ac (CONDITIONAL_JUMP)  ; LAB_0059c0ac
    FLD float ptr [ESP + 0x20]          ; 0059c362
    FCOMP float ptr [ESP + 0xb0]        ; 0059c366
    FNSTSW AX                           ; 0059c36d
    SAHF                                ; 0059c36f
    JA 0x0059c0ac                       ; 0059c370
        ;   XREF to: 0059c0ac (CONDITIONAL_JUMP)  ; LAB_0059c0ac
    FLD float ptr [ESP + 0x24]          ; 0059c376
    FCOMP float ptr [ESP + 0xa8]        ; 0059c37a
    FNSTSW AX                           ; 0059c381
    SAHF                                ; 0059c383
    JC 0x0059c0ac                       ; 0059c384
        ;   XREF to: 0059c0ac (CONDITIONAL_JUMP)  ; LAB_0059c0ac
    FLD float ptr [ESP + 0x28]          ; 0059c38a
    FCOMP float ptr [ESP + 0xac]        ; 0059c38e
    FNSTSW AX                           ; 0059c395
    SAHF                                ; 0059c397
    JC 0x0059c0ac                       ; 0059c398
        ;   XREF to: 0059c0ac (CONDITIONAL_JUMP)  ; LAB_0059c0ac
    FLD float ptr [ESP + 0x2c]          ; 0059c39e
    FCOMP float ptr [ESP + 0xb0]        ; 0059c3a2
    FNSTSW AX                           ; 0059c3a9
    SAHF                                ; 0059c3ab
    JC 0x0059c0ac                       ; 0059c3ac
        ;   XREF to: 0059c0ac (CONDITIONAL_JUMP)  ; LAB_0059c0ac
    MOV EAX,0x1                         ; 0059c3b2
        ;   Label: LAB_0059c3b2
    ADD ESP,0x100                       ; 0059c3b7
    POP EBP                             ; 0059c3bd
    POP EDI                             ; 0059c3be
    POP ESI                             ; 0059c3bf
    POP EBX                             ; 0059c3c0
    RET                                 ; 0059c3c1
    PUSH EBX                            ; 0059c3c2
        ;   Label: LAB_0059c3c2
    MOV EAX,dword ptr [EBX + 0x170]     ; 0059c3c3
    PUSH EAX                            ; 0059c3c9
    MOV EDI,0x5f8228                    ; 0059c3ca | = "..\\core\\trigger.cpp"
    MOV EBP,0x38e                       ; 0059c3cf
    PUSH 0x5f823c                       ; 0059c3d4 | = "CTrigger::containsActor - invalid tri..."
    MOV dword ptr [0x01d1d400],EDI      ; 0059c3d9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0059c3df | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0059c3e5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 0059c3ea
    MOV EDX,0x5f8276                    ; 0059c3ed | = "..\\core\\trigger.cpp"
    MOV ECX,0x394                       ; 0059c3f2
    PUSH 0x5f828a                       ; 0059c3f7 | = "Hell froze..."
    MOV dword ptr [0x01d1d400],EDX      ; 0059c3fc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0059c402 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0059c408
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0059c40d
    XOR EAX,EAX                         ; 0059c410
    ADD ESP,0x100                       ; 0059c412
    POP EBP                             ; 0059c418
    POP EDI                             ; 0059c419
    POP ESI                             ; 0059c41a
    POP EBX                             ; 0059c41b
    RET                                 ; 0059c41c

