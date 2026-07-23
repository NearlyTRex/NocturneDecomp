; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_stranger_cpp_CStranger_tryClimbLadder_FUN_0053bf90(int param_1)
;
; Local Variables:
; undefined8       Stack[-0xe8]:8  local_e8
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0053fc60 at 0053febf
;
; Referenced Globals:
;   string s_Climbing_ladder_%s_00595af7
;   double DOUBLE_00595b0f = 0.990000000000000
;   float FLOAT_00595b17 = 0.5
;   double DOUBLE_00595b1f = 2
;   double DOUBLE_00595b27 = 4
;   double DOUBLE_00595b2f = -1
;   double DOUBLE_00595b37 = 0.261799387791667
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005be368
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01cc3120
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053bf90
        ;   Label: core_stranger.cpp_CStranger_tryClimbLadder_FUN_0053bf90
    PUSH ESI                            ; 0053bf91
    PUSH EDI                            ; 0053bf92
    PUSH EBP                            ; 0053bf93
    MOV EBP,ESP                         ; 0053bf94
    SUB ESP,0xd8                        ; 0053bf96
    AND ESP,0xfffffff8                  ; 0053bf9c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0053bf9f
    PUSH 0x0                            ; 0053bfa2
    PUSH EDI                            ; 0053bfa4
    MOV dword ptr [EDI + 0x1fa14],0x0   ; 0053bfa5
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 0053bfaf
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0()
    MOV dword ptr [ESP + 0xdc],EAX      ; 0053bfb4
    FLD float ptr [ESP + 0xdc]          ; 0053bfbb
    ADD ESP,0x8                         ; 0053bfc2
    FCOMP double ptr [0x00595b0f]       ; 0053bfc5 | DOUBLE_00595b0f
    FNSTSW AX                           ; 0053bfcb
    SAHF                                ; 0053bfcd
    JC 0x0053c00f                       ; 0053bfce
        ;   XREF to: 0053c00f (CONDITIONAL_JUMP)  ; LAB_0053c00f
    MOV EDX,dword ptr [EDI + 0x24ac]    ; 0053bfd0
    TEST EDX,EDX                        ; 0053bfd6
    JNZ 0x0053c00f                      ; 0053bfd8
        ;   XREF to: 0053c00f (CONDITIONAL_JUMP)  ; LAB_0053c00f
    CMP dword ptr [EDI + 0x24f0],0x0    ; 0053bfda
    JNZ 0x0053c00f                      ; 0053bfe1
        ;   XREF to: 0053c00f (CONDITIONAL_JUMP)  ; LAB_0053c00f
    MOV dword ptr [ESP + 0xcc],EDX      ; 0053bfe3
    LEA EAX,[EDI + 0x20]                ; 0053bfea
    MOV dword ptr [ESP + 0xd0],EDX      ; 0053bfed
    MOV dword ptr [ESP + 0xc8],EAX      ; 0053bff4
    MOV EAX,[0x005be368]                ; 0053bffb | DAT_005be368
        ;   Label: LAB_0053bffb
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0053c000
    CMP EDX,dword ptr [EAX + 0x14cd6c]  ; 0053c007 | DAT_01fa3ff0
    JL 0x0053c03a                       ; 0053c00d
        ;   XREF to: 0053c03a (CONDITIONAL_JUMP)  ; LAB_0053c03a
    XOR EAX,EAX                         ; 0053c00f
        ;   Label: LAB_0053c00f
    MOV ESP,EBP                         ; 0053c011
    POP EBP                             ; 0053c013
    POP EDI                             ; 0053c014
    POP ESI                             ; 0053c015
    POP EBX                             ; 0053c016
    RET                                 ; 0053c017
    MOV EBX,dword ptr [ESP + 0xcc]      ; 0053c018
        ;   Label: LAB_0053c018
    MOV ECX,dword ptr [ESP + 0xd0]      ; 0053c01f
    INC EBX                             ; 0053c026
    ADD ECX,0x4                         ; 0053c027
    MOV dword ptr [ESP + 0xcc],EBX      ; 0053c02a
    MOV dword ptr [ESP + 0xd0],ECX      ; 0053c031
    JMP 0x0053bffb                      ; 0053c038
        ;   XREF to: 0053bffb (UNCONDITIONAL_JUMP)  ; LAB_0053bffb
    MOV EBX,dword ptr [ESP + 0xd0]      ; 0053c03a
        ;   Label: LAB_0053c03a
    MOV ESI,dword ptr [0x01cc3120]      ; 0053c041 | DAT_01cc3120
    ADD EAX,EBX                         ; 0053c047
    PUSH ESI                            ; 0053c049
    MOV EAX,dword ptr [EAX + 0x14cd70]  ; 0053c04a | DAT_01fa3ff4
    PUSH EAX                            ; 0053c050
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053c051
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV EBX,EAX                         ; 0053c056
    ADD ESP,0x8                         ; 0053c058
    MOV ESI,EAX                         ; 0053c05b
    TEST EAX,EAX                        ; 0053c05d
    JZ 0x0053c018                       ; 0053c05f
        ;   XREF to: 0053c018 (CONDITIONAL_JUMP)  ; LAB_0053c018
    FLD float ptr [EDI + 0x24]          ; 0053c061
    FSUB float ptr [EAX + 0x24]         ; 0053c064
    FABS                                ; 0053c067
    FCOMP double ptr [0x00595b1f]       ; 0053c069 | DOUBLE_00595b1f
    FNSTSW AX                           ; 0053c06f
    SAHF                                ; 0053c071
    JA 0x0053c018                       ; 0053c072
        ;   XREF to: 0053c018 (CONDITIONAL_JUMP)  ; LAB_0053c018
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0053c074
    PUSH EAX                            ; 0053c07b
    LEA EAX,[ESP + 0x48]                ; 0053c07c
    PUSH EAX                            ; 0053c080
    PUSH EBX                            ; 0053c081
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0053c082
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 0053c087
    FLD float ptr [ESP + 0x4c]          ; 0053c08a
    FST double ptr [ESP]                ; 0053c08e
    FABS                                ; 0053c091
    FCOMP double ptr [0x00595b27]       ; 0053c093 | DOUBLE_00595b27
    FNSTSW AX                           ; 0053c099
    SAHF                                ; 0053c09b
    JA 0x0053c018                       ; 0053c09c
        ;   XREF to: 0053c018 (CONDITIONAL_JUMP)  ; LAB_0053c018
    FLDZ                                ; 0053c0a2
    FCOMP double ptr [ESP]              ; 0053c0a4
    FNSTSW AX                           ; 0053c0a7
    SAHF                                ; 0053c0a9
    JA 0x0053c018                       ; 0053c0aa
        ;   XREF to: 0053c018 (CONDITIONAL_JUMP)  ; LAB_0053c018
    LEA EDX,[ESP + 0x8]                 ; 0053c0b0
    PUSH EDX                            ; 0053c0b4
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053c0b5
    PUSH EBX                            ; 0053c0bb
    CALL dword ptr [EAX + 0x14]         ; 0053c0bc
    ADD ESP,0x8                         ; 0053c0bf
    FLD float ptr [ESP + 0x44]          ; 0053c0c2
    FCOMP float ptr [ESP + 0x14]        ; 0053c0c6
    FNSTSW AX                           ; 0053c0ca
    SAHF                                ; 0053c0cc
    JBE 0x0053c0ee                      ; 0053c0cd
        ;   XREF to: 0053c0ee (CONDITIONAL_JUMP)  ; LAB_0053c0ee
    FLD float ptr [ESP + 0x14]          ; 0053c0cf
    FLD1                                ; 0053c0d3
    FADDP                               ; 0053c0d5
    FLD float ptr [ESP + 0x44]          ; 0053c0d7
    FCOMPP                              ; 0053c0db
    FNSTSW AX                           ; 0053c0dd
    SAHF                                ; 0053c0df
    JA 0x0053c018                       ; 0053c0e0
        ;   XREF to: 0053c018 (CONDITIONAL_JUMP)  ; LAB_0053c018
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053c0e6
    MOV dword ptr [ESP + 0x44],EAX      ; 0053c0ea
    FLD float ptr [ESP + 0x44]          ; 0053c0ee
        ;   Label: LAB_0053c0ee
    FCOMP float ptr [ESP + 0x8]         ; 0053c0f2
    FNSTSW AX                           ; 0053c0f6
    SAHF                                ; 0053c0f8
    JNC 0x0053c11c                      ; 0053c0f9
        ;   XREF to: 0053c11c (CONDITIONAL_JUMP)  ; LAB_0053c11c
    FLD float ptr [ESP + 0x8]           ; 0053c0fb
    FADD double ptr [0x00595b2f]        ; 0053c0ff | DOUBLE_00595b2f
    FLD float ptr [ESP + 0x44]          ; 0053c105
    FCOMPP                              ; 0053c109
    FNSTSW AX                           ; 0053c10b
    SAHF                                ; 0053c10d
    JC 0x0053c018                       ; 0053c10e
        ;   XREF to: 0053c018 (CONDITIONAL_JUMP)  ; LAB_0053c018
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053c114
    MOV dword ptr [ESP + 0x44],EAX      ; 0053c118
    FLD float ptr [ESP + 0x8]           ; 0053c11c
        ;   Label: LAB_0053c11c
    FADD float ptr [ESP + 0x14]         ; 0053c120
    FST float ptr [ESP + 0x2c]          ; 0053c124
    FLD float ptr [0x00595b17]          ; 0053c128 | FLOAT_00595b17
    FXCH                                ; 0053c12e
    FMUL ST1                            ; 0053c130
    FLD float ptr [ESP + 0xc]           ; 0053c132
    FLD float ptr [ESP + 0x10]          ; 0053c136
    FADD float ptr [ESP + 0x1c]         ; 0053c13a
    FXCH                                ; 0053c13e
    FADD float ptr [ESP + 0x18]         ; 0053c140
    FXCH                                ; 0053c144
    FST float ptr [ESP + 0x34]          ; 0053c146
    FMUL ST3                            ; 0053c14a
    FXCH                                ; 0053c14c
    FST float ptr [ESP + 0x30]          ; 0053c14e
    FMULP ST3                           ; 0053c152
    FSTP float ptr [ESP + 0x28]         ; 0053c154
    MOV EAX,dword ptr [ESP + 0x28]      ; 0053c158
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053c15c
    LEA EAX,[ESP + 0x44]                ; 0053c160
    PUSH EAX                            ; 0053c164
    LEA EAX,[ESP + 0x60]                ; 0053c165
    PUSH EAX                            ; 0053c169
    FSTP float ptr [ESP + 0x28]         ; 0053c16a
    PUSH ESI                            ; 0053c16e
    FSTP float ptr [ESP + 0x30]         ; 0053c16f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053c173
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EBX,EAX                         ; 0053c178
    LEA EAX,[ESP + 0x50]                ; 0053c17a
    ADD ESP,0xc                         ; 0053c17e
    CMP EAX,EBX                         ; 0053c181
    JZ 0x0053c199                       ; 0053c183
        ;   XREF to: 0053c199 (CONDITIONAL_JUMP)  ; LAB_0053c199
    MOV EAX,dword ptr [EBX]             ; 0053c185
    MOV dword ptr [ESP + 0x44],EAX      ; 0053c187
    MOV EAX,dword ptr [EBX + 0x4]       ; 0053c18b
    MOV dword ptr [ESP + 0x48],EAX      ; 0053c18e
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053c192
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053c195
    MOV EAX,dword ptr [EDI + 0x44]      ; 0053c199
        ;   Label: LAB_0053c199
    MOV dword ptr [ESP + 0xb0],EAX      ; 0053c19c
    MOV EAX,dword ptr [EDI + 0x50]      ; 0053c1a3
    MOV dword ptr [ESP + 0xb4],EAX      ; 0053c1a6
    MOV EAX,dword ptr [EDI + 0x5c]      ; 0053c1ad
    MOV dword ptr [ESP + 0xb8],EAX      ; 0053c1b0
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0053c1b7
    MOV dword ptr [ESP + 0x38],EAX      ; 0053c1be
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0053c1c2
    MOV dword ptr [ESP + 0x3c],EAX      ; 0053c1c9
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0053c1cd
    MOV dword ptr [ESP + 0x40],EAX      ; 0053c1d4
    MOV EAX,dword ptr [ESI + 0x44]      ; 0053c1d8
    MOV dword ptr [ESP + 0xbc],EAX      ; 0053c1db
    MOV EAX,dword ptr [ESI + 0x50]      ; 0053c1e2
    MOV dword ptr [ESP + 0xc0],EAX      ; 0053c1e5
    FLD float ptr [ESP + 0xb4]          ; 0053c1ec
    FMUL float ptr [ESP + 0xc0]         ; 0053c1f3
    MOV EAX,dword ptr [ESI + 0x5c]      ; 0053c1fa
    FLD float ptr [ESP + 0xb0]          ; 0053c1fd
    MOV dword ptr [ESP + 0xc4],EAX      ; 0053c204
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0053c20b
    FMUL float ptr [ESP + 0xbc]         ; 0053c212
    MOV dword ptr [ESP + 0xa4],EAX      ; 0053c219
    FADDP                               ; 0053c220
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0053c222
    FLD float ptr [ESP + 0xb8]          ; 0053c229
    FMUL float ptr [ESP + 0xc4]         ; 0053c230
    MOV dword ptr [ESP + 0xa8],EAX      ; 0053c237
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0053c23e
    FADDP                               ; 0053c245
    MOV dword ptr [ESP + 0xac],EAX      ; 0053c247
    FABS                                ; 0053c24e
    FLD double ptr [0x00595b37]         ; 0053c250 | DOUBLE_00595b37
    FCOS                                ; 0053c256
    FCOMPP                              ; 0053c258
    FNSTSW AX                           ; 0053c25a
    SAHF                                ; 0053c25c
    JA 0x0053c018                       ; 0053c25d
        ;   XREF to: 0053c018 (CONDITIONAL_JUMP)  ; LAB_0053c018
    LEA EAX,[ESI + 0x20]                ; 0053c263
    PUSH EAX                            ; 0053c266
    LEA EAX,[ESP + 0x54]                ; 0053c267
    PUSH EAX                            ; 0053c26b
    PUSH EDI                            ; 0053c26c
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0053c26d
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    FLD float ptr [EAX + 0x8]           ; 0053c272
    FLDZ                                ; 0053c275
    ADD ESP,0xc                         ; 0053c277
    FCOMPP                              ; 0053c27a
    FNSTSW AX                           ; 0053c27c
    SAHF                                ; 0053c27e
    JNC 0x0053c018                      ; 0053c27f
        ;   XREF to: 0053c018 (CONDITIONAL_JUMP)  ; LAB_0053c018
    PUSH 0x1                            ; 0053c285
    PUSH 0x2a                           ; 0053c287
    LEA EAX,[EDI + 0x150]               ; 0053c289
    PUSH EAX                            ; 0053c28f
    MOV dword ptr [EDI + 0x1fa14],ESI   ; 0053c290
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053c296
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    MOV EAX,0x40000000                  ; 0053c29b
    ADD ESP,0xc                         ; 0053c2a0
    MOV dword ptr [EDI + 0xbca0],0x0    ; 0053c2a3
    MOV dword ptr [ESP + 0x94],EAX      ; 0053c2ad
    LEA EAX,[ESP + 0x8c]                ; 0053c2b4
    PUSH EAX                            ; 0053c2bb
    LEA EAX,[ESP + 0x9c]                ; 0053c2bc
    PUSH EAX                            ; 0053c2c3
    LEA EBX,[EDI + 0x20]                ; 0053c2c4
    XOR EDX,EDX                         ; 0053c2c7
    PUSH ESI                            ; 0053c2c9
    MOV dword ptr [ESP + 0x98],EDX      ; 0053c2ca
    MOV dword ptr [ESP + 0x9c],EDX      ; 0053c2d1
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053c2d8
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    FLD float ptr [EAX]                 ; 0053c2dd
    FSUB float ptr [EBX]                ; 0053c2df
    ADD ESP,0xc                         ; 0053c2e1
    FSTP float ptr [ESP + 0x80]         ; 0053c2e4
    FLD float ptr [EAX + 0x4]           ; 0053c2eb
    FSUB float ptr [EBX + 0x4]          ; 0053c2ee
    LEA EDX,[EDI + 0x1fcbc]             ; 0053c2f1
    FSTP float ptr [ESP + 0x84]         ; 0053c2f7
    FLD float ptr [EAX + 0x8]           ; 0053c2fe
    FSUB float ptr [EBX + 0x8]          ; 0053c301
    LEA EAX,[ESP + 0x80]                ; 0053c304
    FSTP float ptr [ESP + 0x88]         ; 0053c30b
    CMP EDX,EAX                         ; 0053c312
    JZ 0x0053c333                       ; 0053c314
        ;   XREF to: 0053c333 (CONDITIONAL_JUMP)  ; LAB_0053c333
    MOV EAX,dword ptr [ESP + 0x80]      ; 0053c316
    MOV dword ptr [EDX],EAX             ; 0053c31d
    MOV EAX,dword ptr [ESP + 0x84]      ; 0053c31f
    MOV dword ptr [EDX + 0x4],EAX       ; 0053c326
    MOV EAX,dword ptr [ESP + 0x88]      ; 0053c329
    MOV dword ptr [EDX + 0x8],EAX       ; 0053c330
    LEA EAX,[EDI + 0x20]                ; 0053c333
        ;   Label: LAB_0053c333
    FLD float ptr [ESP + 0x44]          ; 0053c336
    FSUB float ptr [EAX]                ; 0053c33a
    FLD float ptr [ESP + 0x48]          ; 0053c33c
    FXCH                                ; 0053c340
    FSTP float ptr [ESP + 0x74]         ; 0053c342
    FSUB float ptr [EAX + 0x4]          ; 0053c346
    FLD float ptr [ESP + 0x4c]          ; 0053c349
    FXCH                                ; 0053c34d
    FSTP float ptr [ESP + 0x78]         ; 0053c34f
    FSUB float ptr [EAX + 0x8]          ; 0053c353
    LEA EAX,[ESP + 0x74]                ; 0053c356
    PUSH EAX                            ; 0053c35a
    LEA EAX,[ESP + 0x6c]                ; 0053c35b
    PUSH EAX                            ; 0053c35f
    FSTP float ptr [ESP + 0x84]         ; 0053c360
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0053c367
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 0053c36c
    PUSH ESI                            ; 0053c36f
    MOV EDX,dword ptr [0x005ad350]      ; 0053c370 | PTR_DAT_005ad350
    PUSH 0x595af7                       ; 0053c376 | = "Climbing ladder %s\n"
    FLD float ptr [EAX + 0x4]           ; 0053c37b
    PUSH EDX                            ; 0053c37e | DAT_0077ad0c
    FSTP float ptr [EDI + 0x1fcc8]      ; 0053c37f
    MOV dword ptr [EDI + 0x1fccc],0x3f800000 ; 0053c385
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0053c38f
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    MOV EAX,0x1                         ; 0053c394
    ADD ESP,0xc                         ; 0053c399
    MOV ESP,EBP                         ; 0053c39c
    POP EBP                             ; 0053c39e
    POP EDI                             ; 0053c39f
    POP ESI                             ; 0053c3a0
    POP EBX                             ; 0053c3a1
    RET                                 ; 0053c3a2

