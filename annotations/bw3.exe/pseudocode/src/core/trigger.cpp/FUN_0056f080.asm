; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_trigger_cpp_FUN_0056f080(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xb0]:1  local_b0
;
; Referenced Globals:
;   TerminatedCString s_core_trigger_cpp_005d6797
;   TerminatedCString s_CTrigger_containsActor_i_005d67ab
;   TerminatedCString s_core_trigger_cpp_005d67e5
;   TerminatedCString s_Hell_froze_005d67f9
;   undefined4 DAT_005d6807
;   undefined4 DAT_005d680b
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f080
        ;   Label: core_trigger.cpp_FUN_0056f080
    PUSH ESI                            ; 0056f081
    PUSH EDI                            ; 0056f082
    PUSH EBP                            ; 0056f083
    SUB ESP,0x100                       ; 0056f084
    MOV EBX,dword ptr [ESP + 0x114]     ; 0056f08a
    MOV EBP,dword ptr [ESP + 0x118]     ; 0056f091
    TEST EBP,EBP                        ; 0056f098
    JNZ 0x0056f0a9                      ; 0056f09a
        ;   XREF to: 0056f0a9 (CONDITIONAL_JUMP)  ; LAB_0056f0a9
    XOR EAX,EAX                         ; 0056f09c
        ;   Label: LAB_0056f09c
    ADD ESP,0x100                       ; 0056f09e
    POP EBP                             ; 0056f0a4
    POP EDI                             ; 0056f0a5
    POP ESI                             ; 0056f0a6
    POP EBX                             ; 0056f0a7
    RET                                 ; 0056f0a8
    PUSH EBP                            ; 0056f0a9
        ;   Label: LAB_0056f0a9
    MOV EAX,dword ptr [EBP + 0x154]     ; 0056f0aa
    LEA ESI,[ESP + 0x34]                ; 0056f0b0
    LEA EDI,[ESP + 0x64]                ; 0056f0b4
    CALL dword ptr [EAX + 0x1c]         ; 0056f0b8
    MOV ECX,0x6                         ; 0056f0bb
    LEA ESI,[ESP + 0x34]                ; 0056f0c0
    ADD ESP,0x4                         ; 0056f0c4
    MOVSD.REP ES:EDI,ESI                ; 0056f0c7
    LEA EAX,[ESP + 0x60]                ; 0056f0c9
    FLD float ptr [ESP + 0x60]          ; 0056f0cd
    FLD float ptr [ESP + 0x64]          ; 0056f0d1
    FLD float ptr [ESP + 0x68]          ; 0056f0d5
    LEA EDI,[ESP + 0xb4]                ; 0056f0d9
    LEA ESI,[ESP + 0x90]                ; 0056f0e0
    FXCH ST2                            ; 0056f0e7
    FADD float ptr [EAX + 0xc]          ; 0056f0e9
    FXCH                                ; 0056f0ec
    FADD float ptr [EAX + 0x10]         ; 0056f0ee
    FXCH ST2                            ; 0056f0f1
    FADD float ptr [EAX + 0x14]         ; 0056f0f3
    FXCH                                ; 0056f0f6
    FSTP float ptr [ESP + 0x90]         ; 0056f0f8
    FXCH                                ; 0056f0ff
    FSTP float ptr [ESP + 0x94]         ; 0056f101
    FSTP float ptr [ESP + 0x98]         ; 0056f108
    MOVSD ES:EDI,ESI                    ; 0056f10f
    MOVSD ES:EDI,ESI                    ; 0056f110
    MOVSD ES:EDI,ESI                    ; 0056f111
    FLD float ptr [0x005d6807]          ; 0056f112 | DAT_005d6807
    FLD float ptr [ESP + 0xb4]          ; 0056f118
    FMUL ST1                            ; 0056f11f
    FLD float ptr [ESP + 0xb8]          ; 0056f121
    FMUL ST2                            ; 0056f128
    LEA EAX,[ESP + 0xc0]                ; 0056f12a
    FLD float ptr [ESP + 0xbc]          ; 0056f131
    FMULP ST3                           ; 0056f138
    PUSH EAX                            ; 0056f13a
    LEA EDI,[ESP + 0xc4]                ; 0056f13b
    LEA ESI,[ESP + 0xe8]                ; 0056f142
    FXCH                                ; 0056f149
    FSTP float ptr [ESP + 0xe8]         ; 0056f14b
    FSTP float ptr [ESP + 0xec]         ; 0056f152
    FSTP float ptr [ESP + 0xf0]         ; 0056f159
    MOVSD ES:EDI,ESI                    ; 0056f160
    MOVSD ES:EDI,ESI                    ; 0056f161
    MOVSD ES:EDI,ESI                    ; 0056f162
    PUSH EBP                            ; 0056f163
    LEA ESI,[ESP + 0xe0]                ; 0056f164
    LEA EDI,[ESP + 0xb0]                ; 0056f16b
    CALL core_actor.cpp_FUN_00408b80    ; 0056f172
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0xe0]                ; 0056f177
    ADD ESP,0x8                         ; 0056f17e
    MOVSD ES:EDI,ESI                    ; 0056f181
    MOVSD ES:EDI,ESI                    ; 0056f182
    MOVSD ES:EDI,ESI                    ; 0056f183
    CMP dword ptr [EBX + 0x218],0x0     ; 0056f184
    JNZ 0x0056f2da                      ; 0056f18b
        ;   XREF to: 0056f2da (CONDITIONAL_JUMP)  ; LAB_0056f2da
    LEA EAX,[EBX + 0x20]                ; 0056f191
        ;   Label: LAB_0056f191
    FLD float ptr [ESP + 0xa8]          ; 0056f194
    FSUB float ptr [EAX]                ; 0056f19b
    FMUL ST0                            ; 0056f19d
    FLD float ptr [ESP + 0xac]          ; 0056f19f
    FSUB float ptr [EAX + 0x4]          ; 0056f1a6
    FMUL ST0                            ; 0056f1a9
    FLD float ptr [ESP + 0xb0]          ; 0056f1ab
    FXCH                                ; 0056f1b2
    FADDP ST2,ST0                       ; 0056f1b4
    FSUB float ptr [EAX + 0x8]          ; 0056f1b6
    FMUL ST0                            ; 0056f1b9
    FLD float ptr [EBX + 0x158]         ; 0056f1bb
    FXCH                                ; 0056f1c1
    FADDP ST2,ST0                       ; 0056f1c3
    FMUL float ptr [EBX + 0x158]        ; 0056f1c5
    FXCH                                ; 0056f1cb
    FCOMPP                              ; 0056f1cd
    FNSTSW AX                           ; 0056f1cf
    SAHF                                ; 0056f1d1
    JA 0x0056f09c                       ; 0056f1d2
        ;   XREF to: 0056f09c (CONDITIONAL_JUMP)  ; LAB_0056f09c
    LEA EAX,[ESP + 0xa8]                ; 0056f1d8
    PUSH EAX                            ; 0056f1df
    PUSH EBX                            ; 0056f1e0
    LEA ESI,[ESP + 0xa4]                ; 0056f1e1
    LEA EDI,[ESP + 0xd4]                ; 0056f1e8
    CALL core_actor.cpp_FUN_00408bf0    ; 0056f1ef
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0xa4]                ; 0056f1f4
    ADD ESP,0x8                         ; 0056f1fb
    MOVSD ES:EDI,ESI                    ; 0056f1fe
    MOVSD ES:EDI,ESI                    ; 0056f1ff
    MOVSD ES:EDI,ESI                    ; 0056f200
    LEA EAX,[ESP + 0xa8]                ; 0056f201
    LEA ESI,[ESP + 0xcc]                ; 0056f208
    CMP EAX,ESI                         ; 0056f20f
    JZ 0x0056f23d                       ; 0056f211
        ;   XREF to: 0056f23d (CONDITIONAL_JUMP)  ; LAB_0056f23d
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0056f213
    MOV dword ptr [ESP + 0xa8],EAX      ; 0056f21a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0056f221
    MOV dword ptr [ESP + 0xac],EAX      ; 0056f228
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0056f22f
    MOV dword ptr [ESP + 0xb0],EAX      ; 0056f236
    MOV EAX,dword ptr [EBX + 0x170]     ; 0056f23d
        ;   Label: LAB_0056f23d
    TEST EAX,EAX                        ; 0056f243
    JBE 0x0056f30a                      ; 0056f245
        ;   XREF to: 0056f30a (CONDITIONAL_JUMP)  ; LAB_0056f30a
    CMP EAX,0x1                         ; 0056f24b
    JNZ 0x0056f3b2                      ; 0056f24e
        ;   XREF to: 0056f3b2 (CONDITIONAL_JUMP)  ; LAB_0056f3b2
    PUSH EBX                            ; 0056f254
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056f255
    LEA ESI,[ESP + 0x7c]                ; 0056f25b
    LEA EDI,[ESP + 0x4]                 ; 0056f25f
    CALL dword ptr [EAX + 0x1c]         ; 0056f263
    MOV ECX,0x6                         ; 0056f266
    LEA ESI,[ESP + 0x7c]                ; 0056f26b
    ADD ESP,0x4                         ; 0056f26f
    MOVSD.REP ES:EDI,ESI                ; 0056f272
    FLD float ptr [ESP + 0xac]          ; 0056f274
    FCOMP float ptr [ESP + 0x4]         ; 0056f27b
    FNSTSW AX                           ; 0056f27f
    SAHF                                ; 0056f281
    JC 0x0056f09c                       ; 0056f282
        ;   XREF to: 0056f09c (CONDITIONAL_JUMP)  ; LAB_0056f09c
    FLD float ptr [ESP + 0xac]          ; 0056f288
    FCOMP float ptr [ESP + 0x10]        ; 0056f28f
    FNSTSW AX                           ; 0056f293
    SAHF                                ; 0056f295
    JA 0x0056f09c                       ; 0056f296
        ;   XREF to: 0056f09c (CONDITIONAL_JUMP)  ; LAB_0056f09c
    FLD float ptr [ESP + 0xb0]          ; 0056f29c
    FMUL ST0                            ; 0056f2a3
    FLD float ptr [ESP + 0xa8]          ; 0056f2a5
    FMUL ST0                            ; 0056f2ac
    FADDP                               ; 0056f2ae
    FLD float ptr [EBX + 0x160]         ; 0056f2b0
    FMUL float ptr [EBX + 0x168]        ; 0056f2b6
    FMUL double ptr [0x005d680b]        ; 0056f2bc | DAT_005d680b
    FCOMPP                              ; 0056f2c2
    FNSTSW AX                           ; 0056f2c4
    SAHF                                ; 0056f2c6
    JNC 0x0056f3a2                      ; 0056f2c7
        ;   XREF to: 0056f3a2 (CONDITIONAL_JUMP)  ; LAB_0056f3a2
    XOR EAX,EAX                         ; 0056f2cd
    ADD ESP,0x100                       ; 0056f2cf
    POP EBP                             ; 0056f2d5
    POP EDI                             ; 0056f2d6
    POP ESI                             ; 0056f2d7
    POP EBX                             ; 0056f2d8
    RET                                 ; 0056f2d9
    MOV ECX,dword ptr [0x007e2cec]      ; 0056f2da | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_0056f2da
    PUSH ECX                            ; 0056f2e0
    PUSH EBP                            ; 0056f2e1
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0056f2e2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0056f2e7
    TEST EAX,EAX                        ; 0056f2ea
    JZ 0x0056f2fb                       ; 0056f2ec
        ;   XREF to: 0056f2fb (CONDITIONAL_JUMP)  ; LAB_0056f2fb
    CMP dword ptr [EAX + 0x2500],0x0    ; 0056f2ee
    JZ 0x0056f09c                       ; 0056f2f5
        ;   XREF to: 0056f09c (CONDITIONAL_JUMP)  ; LAB_0056f09c
    MOV EAX,dword ptr [EBP + 0x24]      ; 0056f2fb
        ;   Label: LAB_0056f2fb
    MOV dword ptr [ESP + 0xac],EAX      ; 0056f2fe
    JMP 0x0056f191                      ; 0056f305
        ;   XREF to: 0056f191 (UNCONDITIONAL_JUMP)  ; LAB_0056f191
    PUSH EBX                            ; 0056f30a
        ;   Label: LAB_0056f30a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056f30b
    LEA ESI,[ESP + 0x4c]                ; 0056f311
    LEA EDI,[ESP + 0x1c]                ; 0056f315
    CALL dword ptr [EAX + 0x1c]         ; 0056f319
    MOV ECX,0x6                         ; 0056f31c
    LEA ESI,[ESP + 0x4c]                ; 0056f321
    ADD ESP,0x4                         ; 0056f325
    MOVSD.REP ES:EDI,ESI                ; 0056f328
    FLD float ptr [ESP + 0x18]          ; 0056f32a
    FCOMP float ptr [ESP + 0xa8]        ; 0056f32e
    FNSTSW AX                           ; 0056f335
    SAHF                                ; 0056f337
    JA 0x0056f09c                       ; 0056f338
        ;   XREF to: 0056f09c (CONDITIONAL_JUMP)  ; LAB_0056f09c
    FLD float ptr [ESP + 0x1c]          ; 0056f33e
    FCOMP float ptr [ESP + 0xac]        ; 0056f342
    FNSTSW AX                           ; 0056f349
    SAHF                                ; 0056f34b
    JA 0x0056f09c                       ; 0056f34c
        ;   XREF to: 0056f09c (CONDITIONAL_JUMP)  ; LAB_0056f09c
    FLD float ptr [ESP + 0x20]          ; 0056f352
    FCOMP float ptr [ESP + 0xb0]        ; 0056f356
    FNSTSW AX                           ; 0056f35d
    SAHF                                ; 0056f35f
    JA 0x0056f09c                       ; 0056f360
        ;   XREF to: 0056f09c (CONDITIONAL_JUMP)  ; LAB_0056f09c
    FLD float ptr [ESP + 0x24]          ; 0056f366
    FCOMP float ptr [ESP + 0xa8]        ; 0056f36a
    FNSTSW AX                           ; 0056f371
    SAHF                                ; 0056f373
    JC 0x0056f09c                       ; 0056f374
        ;   XREF to: 0056f09c (CONDITIONAL_JUMP)  ; LAB_0056f09c
    FLD float ptr [ESP + 0x28]          ; 0056f37a
    FCOMP float ptr [ESP + 0xac]        ; 0056f37e
    FNSTSW AX                           ; 0056f385
    SAHF                                ; 0056f387
    JC 0x0056f09c                       ; 0056f388
        ;   XREF to: 0056f09c (CONDITIONAL_JUMP)  ; LAB_0056f09c
    FLD float ptr [ESP + 0x2c]          ; 0056f38e
    FCOMP float ptr [ESP + 0xb0]        ; 0056f392
    FNSTSW AX                           ; 0056f399
    SAHF                                ; 0056f39b
    JC 0x0056f09c                       ; 0056f39c
        ;   XREF to: 0056f09c (CONDITIONAL_JUMP)  ; LAB_0056f09c
    MOV EAX,0x1                         ; 0056f3a2
        ;   Label: LAB_0056f3a2
    ADD ESP,0x100                       ; 0056f3a7
    POP EBP                             ; 0056f3ad
    POP EDI                             ; 0056f3ae
    POP ESI                             ; 0056f3af
    POP EBX                             ; 0056f3b0
    RET                                 ; 0056f3b1
    PUSH EBX                            ; 0056f3b2
        ;   Label: LAB_0056f3b2
    MOV EAX,dword ptr [EBX + 0x170]     ; 0056f3b3
    PUSH EAX                            ; 0056f3b9
    MOV EDI,0x5d6797                    ; 0056f3ba | = "..\\core\\trigger.cpp"
    MOV EBP,0x38e                       ; 0056f3bf
    PUSH 0x5d67ab                       ; 0056f3c4 | = "CTrigger::containsActor - invalid tri..."
    MOV dword ptr [0x01d71de0],EDI      ; 0056f3c9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0056f3cf | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056f3d5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 0056f3da
    MOV EDX,0x5d67e5                    ; 0056f3dd | = "..\\core\\trigger.cpp"
    MOV ECX,0x394                       ; 0056f3e2
    PUSH 0x5d67f9                       ; 0056f3e7 | = "Hell froze..."
    MOV dword ptr [0x01d71de0],EDX      ; 0056f3ec | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0056f3f2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056f3f8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0056f3fd
    XOR EAX,EAX                         ; 0056f400
    ADD ESP,0x100                       ; 0056f402
    POP EBP                             ; 0056f408
    POP EDI                             ; 0056f409
    POP ESI                             ; 0056f40a
    POP EBX                             ; 0056f40b
    RET                                 ; 0056f40c

