; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flies_cpp_CFlies_process_FUN_0048f090(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x58]:8  local_58
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 DAT_00581707
;   undefined4 DAT_0058170f
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
;   core_flies.cpp_CFlies_generateRandomPoint_FUN_0048f9b0
;   core_flies.cpp_CFlies_initFly_FUN_0048f8f0
;   crt_math.c_floor_FUN_005648c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f090
        ;   Label: core_flies.cpp_CFlies_process_FUN_0048f090
    PUSH ESI                            ; 0048f091
    PUSH EDI                            ; 0048f092
    PUSH EBP                            ; 0048f093
    MOV EBP,ESP                         ; 0048f094
    SUB ESP,0x44                        ; 0048f096
    AND ESP,0xfffffff8                  ; 0048f099
    MOV EDI,dword ptr [EBP + 0x14]      ; 0048f09c
    CMP dword ptr [EDI + 0x2a14],0x0    ; 0048f09f
    JZ 0x0048f14d                       ; 0048f0a6
        ;   XREF to: 0048f14d (CONDITIONAL_JUMP)  ; LAB_0048f14d
    MOV ECX,dword ptr [EDI + 0x2a00]    ; 0048f0ac
    TEST ECX,ECX                        ; 0048f0b2
    JNZ 0x0048f154                      ; 0048f0b4
        ;   XREF to: 0048f154 (CONDITIONAL_JUMP)  ; LAB_0048f154
    CMP dword ptr [EDI + 0x2a04],0x0    ; 0048f0ba
        ;   Label: LAB_0048f0ba
    JLE 0x0048f0f7                      ; 0048f0c1
        ;   XREF to: 0048f0f7 (CONDITIONAL_JUMP)  ; LAB_0048f0f7
    FLD float ptr [EDI + 0x2a08]        ; 0048f0c3
    FSUB float ptr [EBP + 0x18]         ; 0048f0c9
    FST float ptr [EDI + 0x2a08]        ; 0048f0cc
    FLDZ                                ; 0048f0d2
    FCOMPP                              ; 0048f0d4
    FNSTSW AX                           ; 0048f0d6
    SAHF                                ; 0048f0d8
    JC 0x0048f0f7                       ; 0048f0d9
        ;   XREF to: 0048f0f7 (CONDITIONAL_JUMP)  ; LAB_0048f0f7
    MOV ESI,dword ptr [EDI + 0x15c]     ; 0048f0db
    CMP ESI,0xc8                        ; 0048f0e1
    JL 0x0048f2d5                       ; 0048f0e7
        ;   XREF to: 0048f2d5 (CONDITIONAL_JUMP)  ; LAB_0048f2d5
    MOV dword ptr [EDI + 0x2a04],0x0    ; 0048f0ed
    FLD float ptr [EBP + 0x18]          ; 0048f0f7
        ;   Label: LAB_0048f0f7
    FLD ST0                             ; 0048f0fa
    FMUL double ptr [0x0058170f]        ; 0048f0fc | DAT_0058170f
    XOR EBX,EBX                         ; 0048f102
    MOV ESI,dword ptr [EDI + 0x15c]     ; 0048f104
    MOV dword ptr [ESP + 0x40],EBX      ; 0048f10a
    FSTP ST1                            ; 0048f10e
    FSTP float ptr [EBP + 0x18]         ; 0048f110
    TEST ESI,ESI                        ; 0048f113
    JLE 0x0048f14d                      ; 0048f115
        ;   XREF to: 0048f14d (CONDITIONAL_JUMP)  ; LAB_0048f14d
    LEA EBX,[EDI + 0x160]               ; 0048f117
    FLD1                                ; 0048f11d
        ;   Label: LAB_0048f11d
    FLD float ptr [EBX]                 ; 0048f11f
    FADD float ptr [EBP + 0x18]         ; 0048f121
    MOV ESI,EBX                         ; 0048f124
    FST float ptr [EBX]                 ; 0048f126
    FSTP double ptr [ESP]               ; 0048f128
    FCOMP double ptr [ESP]              ; 0048f12b
    FNSTSW AX                           ; 0048f12e
    SAHF                                ; 0048f130
    JBE 0x0048f30a                      ; 0048f131
        ;   XREF to: 0048f30a (CONDITIONAL_JUMP)  ; LAB_0048f30a
    MOV EAX,dword ptr [ESP + 0x40]      ; 0048f137
        ;   Label: LAB_0048f137
    ADD EBX,0x34                        ; 0048f13b
    INC EAX                             ; 0048f13e
    MOV EDX,dword ptr [EDI + 0x15c]     ; 0048f13f
    MOV dword ptr [ESP + 0x40],EAX      ; 0048f145
    CMP EAX,EDX                         ; 0048f149
    JL 0x0048f11d                       ; 0048f14b
        ;   XREF to: 0048f11d (CONDITIONAL_JUMP)  ; LAB_0048f11d
    MOV ESP,EBP                         ; 0048f14d
        ;   Label: LAB_0048f14d
    POP EBP                             ; 0048f14f
    POP EDI                             ; 0048f150
    POP ESI                             ; 0048f151
    POP EBX                             ; 0048f152
    RET                                 ; 0048f153
    MOV EDX,ECX                         ; 0048f154
        ;   Label: LAB_0048f154
    LEA EAX,[EDI + 0x20]                ; 0048f156
    FLD float ptr [EDX + 0x20]          ; 0048f159
    FSUB float ptr [EAX]                ; 0048f15c
    FSTP float ptr [ESP + 0x20]         ; 0048f15e
    FLD float ptr [EDX + 0x24]          ; 0048f162
    FSUB float ptr [EAX + 0x4]          ; 0048f165
    FST float ptr [ESP + 0x24]          ; 0048f168
    FMUL float ptr [ESP + 0x24]         ; 0048f16c
    FLD float ptr [ESP + 0x20]          ; 0048f170
    FMUL ST0                            ; 0048f174
    FLD float ptr [EDX + 0x28]          ; 0048f176
    FSUB float ptr [EAX + 0x8]          ; 0048f179
    FXCH                                ; 0048f17c
    FADDP ST2,ST0                       ; 0048f17e
    FST float ptr [ESP + 0x28]          ; 0048f180
    FMUL float ptr [ESP + 0x28]         ; 0048f184
    FADDP                               ; 0048f188
    FSQRT                               ; 0048f18a
    FLDZ                                ; 0048f18c
    FCOMPP                              ; 0048f18e
    FNSTSW AX                           ; 0048f190
    SAHF                                ; 0048f192
    JNC 0x0048f2b0                      ; 0048f193
        ;   XREF to: 0048f2b0 (CONDITIONAL_JUMP)  ; LAB_0048f2b0
    LEA EAX,[ESP + 0x20]                ; 0048f199
    PUSH EAX                            ; 0048f19d
    LEA EAX,[ESP + 0x30]                ; 0048f19e
    PUSH EAX                            ; 0048f1a2
    PUSH EDI                            ; 0048f1a3
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 0048f1a4
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220()
    FLD float ptr [0x00581707]          ; 0048f1a9 | DAT_00581707
    FLD float ptr [EAX]                 ; 0048f1af
    FMUL ST1                            ; 0048f1b1
    ADD ESP,0xc                         ; 0048f1b3
    FSTP float ptr [ESP + 0x14]         ; 0048f1b6
    FLD float ptr [EAX + 0x4]           ; 0048f1ba
    FMUL ST1                            ; 0048f1bd
    FSTP float ptr [ESP + 0x18]         ; 0048f1bf
    FMUL float ptr [EAX + 0x8]          ; 0048f1c3
    LEA EDX,[ESP + 0x14]                ; 0048f1c6
    LEA EAX,[ESP + 0x20]                ; 0048f1ca
    FSTP float ptr [ESP + 0x1c]         ; 0048f1ce
    CMP EAX,EDX                         ; 0048f1d2
    JZ 0x0048f1ee                       ; 0048f1d4
        ;   XREF to: 0048f1ee (CONDITIONAL_JUMP)  ; LAB_0048f1ee
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048f1d6
    MOV dword ptr [ESP + 0x20],EAX      ; 0048f1da
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048f1de
    MOV dword ptr [ESP + 0x24],EAX      ; 0048f1e2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048f1e6
    MOV dword ptr [ESP + 0x28],EAX      ; 0048f1ea
    MOV ESI,dword ptr [EDI + 0x15c]     ; 0048f1ee
        ;   Label: LAB_0048f1ee
    XOR EBX,EBX                         ; 0048f1f4
    TEST ESI,ESI                        ; 0048f1f6
    JLE 0x0048f2b0                      ; 0048f1f8
        ;   XREF to: 0048f2b0 (CONDITIONAL_JUMP)  ; LAB_0048f2b0
    LEA EAX,[EDI + 0x17c]               ; 0048f1fe
    LEA EDX,[EDI + 0x164]               ; 0048f204
    FLD float ptr [EDX]                 ; 0048f20a
        ;   Label: LAB_0048f20a
    FSUB float ptr [ESP + 0x20]         ; 0048f20c
    FLD float ptr [EDX + 0x4]           ; 0048f210
    FXCH                                ; 0048f213
    FSTP float ptr [EDX]                ; 0048f215
    FSUB float ptr [ESP + 0x24]         ; 0048f217
    FLD float ptr [EDX + 0x8]           ; 0048f21b
    FXCH                                ; 0048f21e
    FSTP float ptr [EDX + 0x4]          ; 0048f220
    FSUB float ptr [ESP + 0x28]         ; 0048f223
    FLD float ptr [EDX + 0xc]           ; 0048f227
    FXCH                                ; 0048f22a
    FSTP float ptr [EDX + 0x8]          ; 0048f22c
    FSUB float ptr [ESP + 0x20]         ; 0048f22f
    FLD float ptr [EDX + 0x10]          ; 0048f233
    FXCH                                ; 0048f236
    FSTP float ptr [EDX + 0xc]          ; 0048f238
    FSUB float ptr [ESP + 0x24]         ; 0048f23b
    FLD float ptr [EDX + 0x14]          ; 0048f23f
    FXCH                                ; 0048f242
    FSTP float ptr [EDX + 0x10]         ; 0048f244
    FSUB float ptr [ESP + 0x28]         ; 0048f247
    ADD EAX,0x34                        ; 0048f24b
    FSTP float ptr [EDX + 0x14]         ; 0048f24e
    FLD float ptr [EAX + -0x34]         ; 0048f251
    FSUB float ptr [ESP + 0x20]         ; 0048f254
    FLD float ptr [EAX + -0x30]         ; 0048f258
    FXCH                                ; 0048f25b
    FSTP float ptr [EAX + -0x34]        ; 0048f25d
    FSUB float ptr [ESP + 0x24]         ; 0048f260
    FLD float ptr [EAX + -0x2c]         ; 0048f264
    FXCH                                ; 0048f267
    FSTP float ptr [EAX + -0x30]        ; 0048f269
    FSUB float ptr [ESP + 0x28]         ; 0048f26c
    FLD float ptr [EAX + -0x28]         ; 0048f270
    FXCH                                ; 0048f273
    FSTP float ptr [EAX + -0x2c]        ; 0048f275
    FSUB float ptr [ESP + 0x20]         ; 0048f278
    FLD float ptr [EAX + -0x24]         ; 0048f27c
    FXCH                                ; 0048f27f
    FSTP float ptr [EAX + -0x28]        ; 0048f281
    FSUB float ptr [ESP + 0x24]         ; 0048f284
    FLD float ptr [EAX + -0x20]         ; 0048f288
    FXCH                                ; 0048f28b
    FSTP float ptr [EAX + -0x24]        ; 0048f28d
    FSUB float ptr [ESP + 0x28]         ; 0048f290
    INC EBX                             ; 0048f294
    FSTP float ptr [EAX + -0x20]        ; 0048f295
    MOV ECX,dword ptr [EDI + 0x15c]     ; 0048f298
    ADD EDX,0x34                        ; 0048f29e
    CMP EBX,ECX                         ; 0048f2a1
    JL 0x0048f20a                       ; 0048f2a3
        ;   XREF to: 0048f20a (CONDITIONAL_JUMP)  ; LAB_0048f20a
    LEA EAX,[EAX]                       ; 0048f2a9
    NOP                                 ; 0048f2af
    MOV EAX,dword ptr [EDI + 0x2a00]    ; 0048f2b0
        ;   Label: LAB_0048f2b0
    LEA EDX,[EDI + 0x20]                ; 0048f2b6
    MOV ECX,dword ptr [EAX + 0x20]      ; 0048f2b9
    MOV dword ptr [EDX],ECX             ; 0048f2bc
    MOV ECX,dword ptr [EAX + 0x24]      ; 0048f2be
    MOV dword ptr [EDX + 0x4],ECX       ; 0048f2c1
    MOV ECX,dword ptr [EAX + 0x28]      ; 0048f2c4
    MOV dword ptr [EDX + 0x8],ECX       ; 0048f2c7
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0048f2ca
    MOV dword ptr [EDX + 0xc],EAX       ; 0048f2cd
    JMP 0x0048f0ba                      ; 0048f2d0
        ;   XREF to: 0048f0ba (UNCONDITIONAL_JUMP)  ; LAB_0048f0ba
    PUSH ESI                            ; 0048f2d5
        ;   Label: LAB_0048f2d5
    PUSH EDI                            ; 0048f2d6
    CALL core_flies.cpp_CFlies_initFly_FUN_0048f8f0 ; 0048f2d7
        ;   XREF to: 0048f8f0 (UNCONDITIONAL_CALL)  ; undefined core_flies.cpp_CFlies_initFly_FUN_0048f8f0()
    FLD float ptr [EDI + 0x2a0c]        ; 0048f2dc
    MOV EDX,dword ptr [EDI + 0x15c]     ; 0048f2e2
    ADD ESP,0x8                         ; 0048f2e8
    INC EDX                             ; 0048f2eb
    MOV ECX,dword ptr [EDI + 0x2a04]    ; 0048f2ec
    MOV dword ptr [EDI + 0x15c],EDX     ; 0048f2f2
    DEC ECX                             ; 0048f2f8
    FSTP float ptr [EDI + 0x2a08]       ; 0048f2f9
    MOV dword ptr [EDI + 0x2a04],ECX    ; 0048f2ff
    JMP 0x0048f0f7                      ; 0048f305
        ;   XREF to: 0048f0f7 (UNCONDITIONAL_JUMP)  ; LAB_0048f0f7
    MOV ECX,dword ptr [ESP + 0x4]       ; 0048f30a
        ;   Label: LAB_0048f30a
    PUSH ECX                            ; 0048f30e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0048f30f
    PUSH EAX                            ; 0048f313
    CALL crt_math.c_floor_FUN_005648c0  ; 0048f314
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x40],EAX      ; 0048f319
    MOV dword ptr [ESP + 0x44],EDX      ; 0048f31d
    FLD double ptr [ESP + 0x40]         ; 0048f321
    LEA EAX,[EBX + 0x4]                 ; 0048f325
    ADD ESP,0x8                         ; 0048f328
    FLD float ptr [EBX]                 ; 0048f32b
    FXCH                                ; 0048f32d
    FSUBR ST0,ST1                       ; 0048f32f
    LEA EDX,[EBX + 0x10]                ; 0048f331
    FSTP ST1                            ; 0048f334
    FSTP float ptr [EBX]                ; 0048f336
    CMP EAX,EDX                         ; 0048f338
    JZ 0x0048f34c                       ; 0048f33a
        ;   XREF to: 0048f34c (CONDITIONAL_JUMP)  ; LAB_0048f34c
    MOV ECX,dword ptr [EDX]             ; 0048f33c
    MOV dword ptr [EAX],ECX             ; 0048f33e
    MOV ECX,dword ptr [EDX + 0x4]       ; 0048f340
    MOV dword ptr [EAX + 0x4],ECX       ; 0048f343
    MOV ECX,dword ptr [EDX + 0x8]       ; 0048f346
    MOV dword ptr [EAX + 0x8],ECX       ; 0048f349
    LEA EAX,[ESI + 0x10]                ; 0048f34c
        ;   Label: LAB_0048f34c
    LEA EDX,[ESI + 0x1c]                ; 0048f34f
    CMP EAX,EDX                         ; 0048f352
    JZ 0x0048f366                       ; 0048f354
        ;   XREF to: 0048f366 (CONDITIONAL_JUMP)  ; LAB_0048f366
    MOV ECX,dword ptr [EDX]             ; 0048f356
    MOV dword ptr [EAX],ECX             ; 0048f358
    MOV ECX,dword ptr [EDX + 0x4]       ; 0048f35a
    MOV dword ptr [EAX + 0x4],ECX       ; 0048f35d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0048f360
    MOV dword ptr [EAX + 0x8],ECX       ; 0048f363
    LEA EDX,[ESI + 0x1c]                ; 0048f366
        ;   Label: LAB_0048f366
    LEA EAX,[ESI + 0x28]                ; 0048f369
    CMP EDX,EAX                         ; 0048f36c
    JZ 0x0048f380                       ; 0048f36e
        ;   XREF to: 0048f380 (CONDITIONAL_JUMP)  ; LAB_0048f380
    MOV ECX,dword ptr [EAX]             ; 0048f370
    MOV dword ptr [EDX],ECX             ; 0048f372
    MOV ECX,dword ptr [EAX + 0x4]       ; 0048f374
    MOV dword ptr [EDX + 0x4],ECX       ; 0048f377
    MOV ECX,dword ptr [EAX + 0x8]       ; 0048f37a
    MOV dword ptr [EDX + 0x8],ECX       ; 0048f37d
    LEA EAX,[ESI + 0x1c]                ; 0048f380
        ;   Label: LAB_0048f380
    PUSH EAX                            ; 0048f383
    LEA EAX,[ESP + 0xc]                 ; 0048f384
    PUSH EAX                            ; 0048f388
    PUSH EDI                            ; 0048f389
    ADD ESI,0x28                        ; 0048f38a
    CALL core_flies.cpp_CFlies_generateRandomPoint_FUN_0048f9b0 ; 0048f38d
        ;   XREF to: 0048f9b0 (UNCONDITIONAL_CALL)  ; undefined core_flies.cpp_CFlies_generateRandomPoint_FUN_0048f9b0()
    ADD ESP,0xc                         ; 0048f392
    CMP ESI,EAX                         ; 0048f395
    JZ 0x0048f137                       ; 0048f397
        ;   XREF to: 0048f137 (CONDITIONAL_JUMP)  ; LAB_0048f137
    MOV EDX,dword ptr [EAX]             ; 0048f39d
    MOV dword ptr [ESI],EDX             ; 0048f39f
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048f3a1
    MOV dword ptr [ESI + 0x4],EDX       ; 0048f3a4
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048f3a7
    MOV dword ptr [ESI + 0x8],EDX       ; 0048f3aa
    JMP 0x0048f137                      ; 0048f3ad
        ;   XREF to: 0048f137 (UNCONDITIONAL_JUMP)  ; LAB_0048f137

