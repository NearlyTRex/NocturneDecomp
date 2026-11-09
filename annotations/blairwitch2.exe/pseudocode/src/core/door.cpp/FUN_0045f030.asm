; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_FUN_0045f030(CDemonActor *param_1)
;
; Local Variables:
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0x138]:1  local_138
;
; XREF[3]:
;   core_door.cpp_FUN_0045efe0 at 0045f008
;   core_door.cpp_FUN_0045f5a0 at 0045f678
;   core_door.cpp_FUN_004605e0 at 004605ff
;
; Referenced Globals:
;   void* switchdataD_0045f01c = 0045f078
;   TerminatedCString s_core_door_cpp_005d09ce
;   TerminatedCString s_CDoor_reposition_Unknown_005d09df
;   undefined4 DAT_005d0a00
;   undefined4 DAT_005d0a08
;   undefined4 DAT_005d0a10
;   undefined4 DAT_005d0a18
;   undefined4 DAT_006141f0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_0040cf60
;   core_dirmat.cpp_FUN_00449530
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f030
        ;   Label: core_door.cpp_FUN_0045f030
    PUSH ESI                            ; 0045f031
    PUSH EDI                            ; 0045f032
    PUSH EBP                            ; 0045f033
    MOV EBP,ESP                         ; 0045f034
    SUB ESP,0x150                       ; 0045f036
    AND ESP,0xfffffff8                  ; 0045f03c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045f03f
    PUSH EBX                            ; 0045f042
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045f043
    LEA ESI,[ESP + 0x2c]                ; 0045f049
    LEA EDI,[ESP + 0x14]                ; 0045f04d
    CALL dword ptr [EAX + 0x24]         ; 0045f051
    MOV ECX,0x6                         ; 0045f054
    LEA ESI,[ESP + 0x2c]                ; 0045f059
    ADD ESP,0x4                         ; 0045f05d
    MOVSD.REP ES:EDI,ESI                ; 0045f060
    MOV EAX,dword ptr [EBX + 0x434]     ; 0045f062
    CMP EAX,0x3                         ; 0045f068
    JA 0x0045f494                       ; 0045f06b
        ;   XREF to: 0045f494 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x45f01c]  ; 0045f071 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x20]                ; 0045f078
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0x30],0x0      ; 0045f07b
    LEA EDX,[EBX + 0xaf0]               ; 0045f082
    MOV dword ptr [EBX + 0x38],0x0      ; 0045f088
    MOV ECX,dword ptr [EDX]             ; 0045f08f
    MOV dword ptr [EAX],ECX             ; 0045f091
    MOV ECX,dword ptr [EDX + 0x4]       ; 0045f093
    MOV dword ptr [EAX + 0x4],ECX       ; 0045f096
    MOV ECX,dword ptr [EDX + 0x8]       ; 0045f099
    MOV dword ptr [EAX + 0x8],ECX       ; 0045f09c
    CMP dword ptr [EBX + 0x440],0x0     ; 0045f09f
    JNZ 0x0045f1a8                      ; 0045f0a6
        ;   XREF to: 0045f1a8 (CONDITIONAL_JUMP)  ; LAB_0045f1a8
    FLD float ptr [EBX + 0xb08]         ; 0045f0ac
    FMUL double ptr [0x005d0a00]        ; 0045f0b2 | DAT_005d0a00
    FADD float ptr [EBX + 0xb00]        ; 0045f0b8
    FSTP float ptr [EBX + 0x34]         ; 0045f0be
        ;   Label: LAB_0045f0be
    PUSH EBX                            ; 0045f0c1
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 0045f0c2
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0045f0c7
    FLD float ptr [ESP + 0x1c]          ; 0045f0ca
    FST double ptr [ESP + 0x8]          ; 0045f0ce
    FABS                                ; 0045f0d2
    FLD float ptr [ESP + 0x10]          ; 0045f0d4
    FST double ptr [ESP]                ; 0045f0d8
    FABS                                ; 0045f0db
    FCOMPP                              ; 0045f0dd
    FNSTSW AX                           ; 0045f0df
    SAHF                                ; 0045f0e1
    JBE 0x0045f1bf                      ; 0045f0e2
        ;   XREF to: 0045f1bf (CONDITIONAL_JUMP)  ; LAB_0045f1bf
    FLD double ptr [ESP]                ; 0045f0e8
    FADD double ptr [0x005d0a18]        ; 0045f0eb | DAT_005d0a18
    FSTP float ptr [EBX + 0xb18]        ; 0045f0f1
        ;   Label: LAB_0045f0f1
    LEA EAX,[EBX + 0xb18]               ; 0045f0f7
    LEA ESI,[ESP + 0x118]               ; 0045f0fd
    PUSH EAX                            ; 0045f104
    LEA EDI,[ESP + 0xe0]                ; 0045f105
    MOV dword ptr [EBX + 0xb1c],0x40600000 ; 0045f10c
    PUSH EBX                            ; 0045f116
    MOV dword ptr [EBX + 0xb20],0x0     ; 0045f117
    MOV dword ptr [ESP + 0x150],EAX     ; 0045f121
    CALL core_actor.cpp_FUN_00408d70    ; 0045f128
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x120]               ; 0045f12d
    ADD ESP,0x8                         ; 0045f134
    MOVSD ES:EDI,ESI                    ; 0045f137
    MOVSD ES:EDI,ESI                    ; 0045f138
    MOVSD ES:EDI,ESI                    ; 0045f139
    LEA EAX,[ESP + 0xdc]                ; 0045f13a
    MOV EDI,dword ptr [ESP + 0x148]     ; 0045f141
    CMP EAX,EDI                         ; 0045f148
    JZ 0x0045f169                       ; 0045f14a
        ;   XREF to: 0045f169 (CONDITIONAL_JUMP)  ; LAB_0045f169
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0045f14c
    MOV dword ptr [EDI],EAX             ; 0045f153
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0045f155
    MOV dword ptr [EDI + 0x4],EAX       ; 0045f15c
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0045f15f
    MOV dword ptr [EDI + 0x8],EAX       ; 0045f166
    LEA EAX,[EBX + 0xb40]               ; 0045f169
        ;   Label: LAB_0045f169
    PUSH EAX                            ; 0045f16f
    MOV EAX,[0x006141f0]                ; 0045f170 | DAT_006141f0
    PUSH EAX                            ; 0045f175
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0045f176
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0045f17b
    TEST EAX,EAX                        ; 0045f17e
    JZ 0x0045f18e                       ; 0045f180
        ;   XREF to: 0045f18e (CONDITIONAL_JUMP)  ; LAB_0045f18e
    MOV EAX,dword ptr [EBX + 0xb3c]     ; 0045f182
    MOV dword ptr [EBX + 0xb28],EAX     ; 0045f188
    FLD float ptr [EBX + 0xb28]         ; 0045f18e
        ;   Label: LAB_0045f18e
    FLDZ                                ; 0045f194
    FCOMPP                              ; 0045f196
    FNSTSW AX                           ; 0045f198
    SAHF                                ; 0045f19a
    JC 0x0045f4bc                       ; 0045f19b
        ;   XREF to: 0045f4bc (CONDITIONAL_JUMP)  ; LAB_0045f4bc
    MOV ESP,EBP                         ; 0045f1a1
    POP EBP                             ; 0045f1a3
    POP EDI                             ; 0045f1a4
    POP ESI                             ; 0045f1a5
    POP EBX                             ; 0045f1a6
    RET                                 ; 0045f1a7
    FLD float ptr [EBX + 0xb08]         ; 0045f1a8
        ;   Label: LAB_0045f1a8
    FMUL double ptr [0x005d0a00]        ; 0045f1ae | DAT_005d0a00
    FSUBR float ptr [EBX + 0xb00]       ; 0045f1b4
    JMP 0x0045f0be                      ; 0045f1ba
        ;   XREF to: 0045f0be (UNCONDITIONAL_JUMP)  ; LAB_0045f0be
    FLD double ptr [ESP + 0x8]          ; 0045f1bf
        ;   Label: LAB_0045f1bf
    FADD double ptr [0x005d0a10]        ; 0045f1c3 | DAT_005d0a10
    JMP 0x0045f0f1                      ; 0045f1c9
        ;   XREF to: 0045f0f1 (UNCONDITIONAL_JUMP)  ; LAB_0045f0f1
    FLD float ptr [EBX + 0xaf4]         ; 0045f1ce
        ;   Label: caseD_1
    FADD float ptr [EBX + 0xb08]        ; 0045f1d4
    MOV EAX,0x40600000                  ; 0045f1da
    FSTP float ptr [EBX + 0x24]         ; 0045f1df
    MOV dword ptr [ESP + 0xa4],EAX      ; 0045f1e2
    LEA EAX,[ESP + 0xa0]                ; 0045f1e9
    XOR EDI,EDI                         ; 0045f1f0
    PUSH EAX                            ; 0045f1f2
    LEA ESI,[ESP + 0x134]               ; 0045f1f3
    MOV dword ptr [ESP + 0xa4],EDI      ; 0045f1fa
    PUSH EBX                            ; 0045f201
    MOV dword ptr [ESP + 0xb0],EDI      ; 0045f202
    LEA EDI,[ESP + 0xd8]                ; 0045f209
    CALL core_actor.cpp_FUN_00408d70    ; 0045f210
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x138]               ; 0045f215
    LEA EAX,[ESP + 0xd8]                ; 0045f21c
    ADD ESP,0x8                         ; 0045f223
    LEA EDX,[EBX + 0xb18]               ; 0045f226
    MOVSD ES:EDI,ESI                    ; 0045f22c
    MOVSD ES:EDI,ESI                    ; 0045f22d
    MOVSD ES:EDI,ESI                    ; 0045f22e
    CMP EDX,EAX                         ; 0045f22f
    JZ 0x0045f169                       ; 0045f231
        ;   XREF to: 0045f169 (CONDITIONAL_JUMP)  ; LAB_0045f169
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0045f237
    MOV dword ptr [EDX],EAX             ; 0045f23e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0045f240
    MOV dword ptr [EDX + 0x4],EAX       ; 0045f247
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0045f24a
    MOV dword ptr [EDX + 0x8],EAX       ; 0045f251
    JMP 0x0045f169                      ; 0045f254
        ;   XREF to: 0045f169 (UNCONDITIONAL_JUMP)  ; LAB_0045f169
    CMP dword ptr [EBX + 0x438],0x1     ; 0045f259
        ;   Label: caseD_2
    JZ 0x0045f37c                       ; 0045f260
        ;   XREF to: 0045f37c (CONDITIONAL_JUMP)  ; LAB_0045f37c
    FLD float ptr [EBX + 0xb08]         ; 0045f266
    FCHS                                ; 0045f26c
    FSTP float ptr [ESP + 0x40]         ; 0045f26e
    LEA EAX,[ESP + 0x40]                ; 0045f272
        ;   Label: LAB_0045f272
    LEA ESI,[ESP + 0x4c]                ; 0045f276
    XOR EDI,EDI                         ; 0045f27a
    PUSH EAX                            ; 0045f27c
    LEA EAX,[EBX + 0x3c]                ; 0045f27d
    MOV dword ptr [ESP + 0x48],EDI      ; 0045f280
    PUSH EAX                            ; 0045f284
    MOV dword ptr [ESP + 0x50],EDI      ; 0045f285
    LEA EDI,[ESP + 0x60]                ; 0045f289
    CALL core_dirmat.cpp_FUN_00449530   ; 0045f28d
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x54]                ; 0045f292
    ADD ESP,0x8                         ; 0045f296
    LEA EAX,[EBX + 0xaf0]               ; 0045f299
    MOVSD ES:EDI,ESI                    ; 0045f29f
    MOVSD ES:EDI,ESI                    ; 0045f2a0
    MOVSD ES:EDI,ESI                    ; 0045f2a1
    FLD float ptr [EAX]                 ; 0045f2a2
    FLD float ptr [EAX + 0x4]           ; 0045f2a4
    FLD float ptr [EAX + 0x8]           ; 0045f2a7
    LEA EDI,[ESP + 0xac]                ; 0045f2aa
    LEA ESI,[ESP + 0x94]                ; 0045f2b1
    FXCH ST2                            ; 0045f2b8
    FADD float ptr [ESP + 0x58]         ; 0045f2ba
    FXCH                                ; 0045f2be
    FADD float ptr [ESP + 0x5c]         ; 0045f2c0
    FXCH ST2                            ; 0045f2c4
    FADD float ptr [ESP + 0x60]         ; 0045f2c6
    FXCH                                ; 0045f2ca
    FSTP float ptr [ESP + 0x94]         ; 0045f2cc
    FXCH                                ; 0045f2d3
    FSTP float ptr [ESP + 0x98]         ; 0045f2d5
    FSTP float ptr [ESP + 0x9c]         ; 0045f2dc
    MOVSD ES:EDI,ESI                    ; 0045f2e3
    MOVSD ES:EDI,ESI                    ; 0045f2e4
    MOVSD ES:EDI,ESI                    ; 0045f2e5
    LEA EDX,[EBX + 0x20]                ; 0045f2e6
    MOV EAX,dword ptr [ESP + 0xac]      ; 0045f2e9
    MOV dword ptr [EDX],EAX             ; 0045f2f0
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0045f2f2
    MOV ECX,0x40600000                  ; 0045f2f9
    MOV dword ptr [EDX + 0x4],EAX       ; 0045f2fe
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0045f301
    LEA ESI,[ESP + 0x70]                ; 0045f308
    MOV dword ptr [EDX + 0x8],EAX       ; 0045f30c
    LEA EAX,[ESP + 0xf4]                ; 0045f30f
    LEA EDI,[ESP + 0x88]                ; 0045f316
    PUSH EAX                            ; 0045f31d
    MOV dword ptr [ESP + 0xfc],ECX      ; 0045f31e
    XOR EDX,EDX                         ; 0045f325
    PUSH EBX                            ; 0045f327
    MOV dword ptr [ESP + 0xfc],EDX      ; 0045f328
    MOV dword ptr [ESP + 0x104],EDX     ; 0045f32f
    CALL core_actor.cpp_FUN_00408d70    ; 0045f336
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x78]                ; 0045f33b
    LEA EAX,[ESP + 0x90]                ; 0045f33f
    ADD ESP,0x8                         ; 0045f346
    LEA EDX,[EBX + 0xb18]               ; 0045f349
    MOVSD ES:EDI,ESI                    ; 0045f34f
    MOVSD ES:EDI,ESI                    ; 0045f350
    MOVSD ES:EDI,ESI                    ; 0045f351
    CMP EDX,EAX                         ; 0045f352
    JZ 0x0045f169                       ; 0045f354
        ;   XREF to: 0045f169 (CONDITIONAL_JUMP)  ; LAB_0045f169
    MOV EAX,dword ptr [ESP + 0x88]      ; 0045f35a
    MOV dword ptr [EDX],EAX             ; 0045f361
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0045f363
    MOV dword ptr [EDX + 0x4],EAX       ; 0045f36a
    MOV EAX,dword ptr [ESP + 0x90]      ; 0045f36d
    MOV dword ptr [EDX + 0x8],EAX       ; 0045f374
    JMP 0x0045f169                      ; 0045f377
        ;   XREF to: 0045f169 (UNCONDITIONAL_JUMP)  ; LAB_0045f169
    MOV EAX,dword ptr [EBX + 0xb08]     ; 0045f37c
        ;   Label: LAB_0045f37c
    MOV dword ptr [ESP + 0x40],EAX      ; 0045f382
    JMP 0x0045f272                      ; 0045f386
        ;   XREF to: 0045f272 (UNCONDITIONAL_JUMP)  ; LAB_0045f272
    FLD float ptr [EBX + 0xb08]         ; 0045f38b
        ;   Label: caseD_3
    FMUL double ptr [0x005d0a00]        ; 0045f391 | DAT_005d0a00
    LEA EDI,[ESP + 0xb8]                ; 0045f397
    PUSH EBX                            ; 0045f39e
    FSTP float ptr [EBX + 0x30]         ; 0045f39f
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 0045f3a2
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0045f3a7
    LEA ESI,[ESP + 0xc4]                ; 0045f3aa
    FLD float ptr [ESP + 0x10]          ; 0045f3b1
    FLD float ptr [ESP + 0x14]          ; 0045f3b5
    FLD float ptr [ESP + 0x18]          ; 0045f3b9
    FXCH ST2                            ; 0045f3bd
    FADD float ptr [ESP + 0x1c]         ; 0045f3bf
    FXCH                                ; 0045f3c3
    FADD float ptr [ESP + 0x20]         ; 0045f3c5
    FXCH ST2                            ; 0045f3c9
    FADD float ptr [ESP + 0x24]         ; 0045f3cb
    FXCH                                ; 0045f3cf
    FSTP float ptr [ESP + 0xc4]         ; 0045f3d1
    FXCH                                ; 0045f3d8
    FSTP float ptr [ESP + 0xc8]         ; 0045f3da
    FSTP float ptr [ESP + 0xcc]         ; 0045f3e1
    MOVSD ES:EDI,ESI                    ; 0045f3e8
    MOVSD ES:EDI,ESI                    ; 0045f3e9
    MOVSD ES:EDI,ESI                    ; 0045f3ea
    FLD float ptr [0x005d0a08]          ; 0045f3eb | DAT_005d0a08
    FLD float ptr [ESP + 0xb8]          ; 0045f3f1
    FMUL ST1                            ; 0045f3f8
    FLD float ptr [ESP + 0xbc]          ; 0045f3fa
    FMUL ST2                            ; 0045f401
    LEA EAX,[ESP + 0x100]               ; 0045f403
    FLD float ptr [ESP + 0xc0]          ; 0045f40a
    FMULP ST3                           ; 0045f411
    PUSH EAX                            ; 0045f413
    LEA EDI,[ESP + 0x104]               ; 0045f414
    LEA ESI,[ESP + 0x80]                ; 0045f41b
    FXCH                                ; 0045f422
    FSTP float ptr [ESP + 0x80]         ; 0045f424
    FSTP float ptr [ESP + 0x84]         ; 0045f42b
    FSTP float ptr [ESP + 0x88]         ; 0045f432
    MOVSD ES:EDI,ESI                    ; 0045f439
    MOVSD ES:EDI,ESI                    ; 0045f43a
    MOVSD ES:EDI,ESI                    ; 0045f43b
    PUSH EBX                            ; 0045f43c
    LEA ESI,[ESP + 0x114]               ; 0045f43d
    LEA EDI,[ESP + 0x144]               ; 0045f444
    CALL core_actor.cpp_FUN_00408d70    ; 0045f44b
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x114]               ; 0045f450
    LEA EAX,[ESP + 0x144]               ; 0045f457
    ADD ESP,0x8                         ; 0045f45e
    LEA EDX,[EBX + 0xb18]               ; 0045f461
    MOVSD ES:EDI,ESI                    ; 0045f467
    MOVSD ES:EDI,ESI                    ; 0045f468
    MOVSD ES:EDI,ESI                    ; 0045f469
    CMP EDX,EAX                         ; 0045f46a
    JZ 0x0045f169                       ; 0045f46c
        ;   XREF to: 0045f169 (CONDITIONAL_JUMP)  ; LAB_0045f169
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0045f472
    MOV dword ptr [EDX],EAX             ; 0045f479
    MOV EAX,dword ptr [ESP + 0x140]     ; 0045f47b
    MOV dword ptr [EDX + 0x4],EAX       ; 0045f482
    MOV EAX,dword ptr [ESP + 0x144]     ; 0045f485
    MOV dword ptr [EDX + 0x8],EAX       ; 0045f48c
    JMP 0x0045f169                      ; 0045f48f
        ;   XREF to: 0045f169 (UNCONDITIONAL_JUMP)  ; LAB_0045f169
    MOV EDX,0x5d09ce                    ; 0045f494 | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ECX,0x117                       ; 0045f499
    PUSH 0x5d09df                       ; 0045f49e | = "CDoor::reposition - Unknown type"
    MOV dword ptr [0x01d046a0],EDX      ; 0045f4a3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0045f4a9 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0045f4af
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0045f4b4
    JMP 0x0045f169                      ; 0045f4b7
        ;   XREF to: 0045f169 (UNCONDITIONAL_JUMP)  ; LAB_0045f169
    PUSH dword ptr [EBX + 0xb28]        ; 0045f4bc
        ;   Label: LAB_0045f4bc
    FLD float ptr [EBX + 0xb28]         ; 0045f4c2
    SUB ESP,0x4                         ; 0045f4c8
    FCHS                                ; 0045f4cb
    FSTP float ptr [ESP]                ; 0045f4cd
    CALL core_actor.cpp_FUN_0040cf60    ; 0045f4d0
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x154],EAX     ; 0045f4d5
    XOR EDX,EDX                         ; 0045f4dc
    FLD float ptr [ESP + 0x154]         ; 0045f4de
    ADD ESP,0x8                         ; 0045f4e5
    MOV dword ptr [ESP + 0x68],EDX      ; 0045f4e8
    FSTP float ptr [ESP + 0x64]         ; 0045f4ec
    PUSH dword ptr [EBX + 0xb28]        ; 0045f4f0
    FLD float ptr [EBX + 0xb28]         ; 0045f4f6
    SUB ESP,0x4                         ; 0045f4fc
    FCHS                                ; 0045f4ff
    FSTP float ptr [ESP]                ; 0045f501
    CALL core_actor.cpp_FUN_0040cf60    ; 0045f504
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x154],EAX     ; 0045f509
    FLD float ptr [ESP + 0x154]         ; 0045f510
    ADD ESP,0x8                         ; 0045f517
    LEA EAX,[ESP + 0x64]                ; 0045f51a
    PUSH EAX                            ; 0045f51e
    LEA ESI,[ESP + 0x128]               ; 0045f51f
    LEA EDI,[ESP + 0xec]                ; 0045f526
    PUSH EBX                            ; 0045f52d
    FSTP float ptr [ESP + 0x74]         ; 0045f52e
    CALL core_actor.cpp_FUN_00408cf0    ; 0045f532
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x12c]               ; 0045f537
    ADD ESP,0x8                         ; 0045f53e
    LEA EAX,[EBX + 0x20]                ; 0045f541
    MOVSD ES:EDI,ESI                    ; 0045f544
    MOVSD ES:EDI,ESI                    ; 0045f545
    MOVSD ES:EDI,ESI                    ; 0045f546
    FLD float ptr [EAX]                 ; 0045f547
    FLD float ptr [EAX + 0x4]           ; 0045f549
    FLD float ptr [EAX + 0x8]           ; 0045f54c
    FXCH ST2                            ; 0045f54f
    FADD float ptr [ESP + 0xe8]         ; 0045f551
    FXCH                                ; 0045f558
    FADD float ptr [ESP + 0xec]         ; 0045f55a
    FXCH ST2                            ; 0045f561
    FADD float ptr [ESP + 0xf0]         ; 0045f563
    FXCH                                ; 0045f56a
    FSTP float ptr [EAX]                ; 0045f56c
    FXCH                                ; 0045f56e
    FSTP float ptr [EAX + 0x4]          ; 0045f570
    FSTP float ptr [EAX + 0x8]          ; 0045f573
    MOV dword ptr [EBX + 0xb28],0x0     ; 0045f576
    MOV ESP,EBP                         ; 0045f580
    POP EBP                             ; 0045f582
    POP EDI                             ; 0045f583
    POP ESI                             ; 0045f584
    POP EBX                             ; 0045f585
    RET                                 ; 0045f586

