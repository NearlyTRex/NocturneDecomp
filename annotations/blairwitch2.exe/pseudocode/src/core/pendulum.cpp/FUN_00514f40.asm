; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_FUN_00514f40(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CDemonActor *    Stack[0xc]:4   left_hand_actor
; CDemonActor *    Stack[0x10]:4   right_hand_actor
;
; XREF[1]:
;   core_pendulum.cpp_FUN_00515cd0 at 00515df3
;
; Referenced Globals:
;   undefined4 DAT_005e1a26
;   undefined4 DAT_005faae8
;   CGore* g_CGorePtr = 01cb8284
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449530
;   core_dirmat.cpp_FUN_004495a0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_gore.cpp_FUN_004c9850
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514f40
        ;   Label: core_pendulum.cpp_FUN_00514f40
    PUSH ESI                            ; 00514f41
    PUSH EDI                            ; 00514f42
    PUSH EBP                            ; 00514f43
    MOV EBP,ESP                         ; 00514f44
    SUB ESP,0x1b8                       ; 00514f46
    AND ESP,0xfffffff8                  ; 00514f4c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00514f4f
    MOV EAX,ESP                         ; 00514f52
    PUSH EAX                            ; 00514f54
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0 ; 00514f55
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00514f5a
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00514f5d
    TEST EDX,EDX                        ; 00514f60
    JNZ 0x00514f86                      ; 00514f62
        ;   XREF to: 00514f86 (CONDITIONAL_JUMP)  ; LAB_00514f86
    MOV ESI,dword ptr [EBP + 0x20]      ; 00514f64
        ;   Label: LAB_00514f64
    TEST ESI,ESI                        ; 00514f67
    JZ 0x00514f9c                       ; 00514f69
        ;   XREF to: 00514f9c (CONDITIONAL_JUMP)  ; LAB_00514f9c
    PUSH ESI                            ; 00514f6b
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00514f6c
    CALL dword ptr [EAX + 0x114]        ; 00514f72
    ADD ESP,0x4                         ; 00514f78
    TEST EAX,EAX                        ; 00514f7b
    JZ 0x00514f9c                       ; 00514f7d
        ;   XREF to: 00514f9c (CONDITIONAL_JUMP)  ; LAB_00514f9c
    MOV ESP,EBP                         ; 00514f7f
        ;   Label: LAB_00514f7f
    POP EBP                             ; 00514f81
    POP EDI                             ; 00514f82
    POP ESI                             ; 00514f83
    POP EBX                             ; 00514f84
    RET                                 ; 00514f85
    PUSH EDX                            ; 00514f86
        ;   Label: LAB_00514f86
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 00514f87
    CALL dword ptr [EAX + 0x114]        ; 00514f8d
    ADD ESP,0x4                         ; 00514f93
    TEST EAX,EAX                        ; 00514f96
    JNZ 0x00514f7f                      ; 00514f98
        ;   XREF to: 00514f7f (CONDITIONAL_JUMP)  ; LAB_00514f7f
    JMP 0x00514f64                      ; 00514f9a
        ;   XREF to: 00514f64 (UNCONDITIONAL_JUMP)  ; LAB_00514f64
    MOV EAX,ESP                         ; 00514f9c
        ;   Label: LAB_00514f9c
    MOV ESI,dword ptr [EBP + 0x18]      ; 00514f9e
    PUSH EAX                            ; 00514fa1
    MOV EAX,dword ptr [EBP + 0x18]      ; 00514fa2
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 00514fa5
    PUSH EAX                            ; 00514fab
    CALL dword ptr [ESI + 0x44]         ; 00514fac
    ADD ESP,0x8                         ; 00514faf
    CMP EAX,0x2                         ; 00514fb2
    JNZ 0x00514f7f                      ; 00514fb5
        ;   XREF to: 00514f7f (CONDITIONAL_JUMP)  ; LAB_00514f7f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00514fb7
    MOV EAX,dword ptr [EBP + 0x18]      ; 00514fba
    PUSH EDX                            ; 00514fbd
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00514fbe
    LEA ESI,[ESP + 0xa4]                ; 00514fc4
    LEA EDI,[ESP + 0x2c]                ; 00514fcb
    CALL dword ptr [EAX + 0x24]         ; 00514fcf
    MOV ECX,0x6                         ; 00514fd2
    LEA ESI,[ESP + 0xa4]                ; 00514fd7
    ADD ESP,0x4                         ; 00514fde
    MOVSD.REP ES:EDI,ESI                ; 00514fe1
    LEA EAX,[ESP + 0x28]                ; 00514fe3
    FLD float ptr [ESP + 0x28]          ; 00514fe7
    FLD float ptr [ESP + 0x2c]          ; 00514feb
    FLD float ptr [ESP + 0x30]          ; 00514fef
    LEA EDI,[ESP + 0x16c]               ; 00514ff3
    LEA ESI,[ESP + 0x100]               ; 00514ffa
    FXCH ST2                            ; 00515001
    FADD float ptr [EAX + 0xc]          ; 00515003
    FXCH                                ; 00515006
    FADD float ptr [EAX + 0x10]         ; 00515008
    FXCH ST2                            ; 0051500b
    FADD float ptr [EAX + 0x14]         ; 0051500d
    FXCH                                ; 00515010
    FSTP float ptr [ESP + 0x100]        ; 00515012
    FXCH                                ; 00515019
    FSTP float ptr [ESP + 0x104]        ; 0051501b
    FSTP float ptr [ESP + 0x108]        ; 00515022
    MOVSD ES:EDI,ESI                    ; 00515029
    MOVSD ES:EDI,ESI                    ; 0051502a
    MOVSD ES:EDI,ESI                    ; 0051502b
    FLD float ptr [0x005e1a26]          ; 0051502c | DAT_005e1a26
    FLD float ptr [ESP + 0x16c]         ; 00515032
    FMUL ST1                            ; 00515039
    FLD float ptr [ESP + 0x170]         ; 0051503b
    FMUL ST2                            ; 00515042
    FLD float ptr [ESP + 0x174]         ; 00515044
    FMULP ST3                           ; 0051504b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051504d
    LEA EDI,[ESP + 0xd0]                ; 00515050
    LEA ESI,[ESP + 0x190]               ; 00515057
    FXCH                                ; 0051505e
    FSTP float ptr [ESP + 0x190]        ; 00515060
    FSTP float ptr [ESP + 0x194]        ; 00515067
    FSTP float ptr [ESP + 0x198]        ; 0051506e
    MOVSD ES:EDI,ESI                    ; 00515075
    MOVSD ES:EDI,ESI                    ; 00515076
    MOVSD ES:EDI,ESI                    ; 00515077
    FLD float ptr [EAX + 0x20]          ; 00515078
    FLD float ptr [EAX + 0x24]          ; 0051507b
    FLD float ptr [EAX + 0x28]          ; 0051507e
    LEA EDI,[ESP + 0xdc]                ; 00515081
    LEA ESI,[ESP + 0x160]               ; 00515088
    FXCH ST2                            ; 0051508f
    FADD float ptr [ESP + 0xd0]         ; 00515091
    FXCH                                ; 00515098
    FADD float ptr [ESP + 0xd4]         ; 0051509a
    FXCH ST2                            ; 005150a1
    FADD float ptr [ESP + 0xd8]         ; 005150a3
    FXCH                                ; 005150aa
    FSTP float ptr [ESP + 0x160]        ; 005150ac
    FXCH                                ; 005150b3
    FSTP float ptr [ESP + 0x164]        ; 005150b5
    FSTP float ptr [ESP + 0x168]        ; 005150bc
    MOVSD ES:EDI,ESI                    ; 005150c3
    MOVSD ES:EDI,ESI                    ; 005150c4
    MOVSD ES:EDI,ESI                    ; 005150c5
    LEA EAX,[EBX + 0x20]                ; 005150c6
    FLD float ptr [ESP + 0xdc]          ; 005150c9
    FLD float ptr [ESP + 0xe0]          ; 005150d0
    FLD float ptr [ESP + 0xe4]          ; 005150d7
    LEA EDI,[ESP + 0x178]               ; 005150de
    LEA ESI,[ESP + 0x10c]               ; 005150e5
    FXCH ST2                            ; 005150ec
    FSUB float ptr [EAX]                ; 005150ee
    FXCH                                ; 005150f0
    FSUB float ptr [EAX + 0x4]          ; 005150f2
    FXCH ST2                            ; 005150f5
    FSUB float ptr [EAX + 0x8]          ; 005150f7
    FXCH                                ; 005150fa
    FSTP float ptr [ESP + 0x10c]        ; 005150fc
    FXCH                                ; 00515103
    FSTP float ptr [ESP + 0x110]        ; 00515105
    LEA EAX,[ESP + 0x178]               ; 0051510c
    FSTP float ptr [ESP + 0x114]        ; 00515113
    PUSH EAX                            ; 0051511a
    LEA EAX,[EBX + 0x3c]                ; 0051511b
    MOVSD ES:EDI,ESI                    ; 0051511e
    MOVSD ES:EDI,ESI                    ; 0051511f
    MOVSD ES:EDI,ESI                    ; 00515120
    PUSH EAX                            ; 00515121
    LEA ESI,[ESP + 0x15c]               ; 00515122
    LEA EDI,[ESP + 0xf0]                ; 00515129
    CALL core_dirmat.cpp_FUN_004495a0   ; 00515130
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x15c]               ; 00515135
    ADD ESP,0x8                         ; 0051513c
    MOVSD ES:EDI,ESI                    ; 0051513f
    MOVSD ES:EDI,ESI                    ; 00515140
    MOVSD ES:EDI,ESI                    ; 00515141
    LEA EAX,[ESP + 0xe8]                ; 00515142
    LEA ESI,[ESP + 0xdc]                ; 00515149
    CMP ESI,EAX                         ; 00515150
    JZ 0x0051517e                       ; 00515152
        ;   XREF to: 0051517e (CONDITIONAL_JUMP)  ; LAB_0051517e
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00515154
    MOV dword ptr [ESP + 0xdc],EAX      ; 0051515b
    MOV EAX,dword ptr [ESP + 0xec]      ; 00515162
    MOV dword ptr [ESP + 0xe0],EAX      ; 00515169
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00515170
    MOV dword ptr [ESP + 0xe4],EAX      ; 00515177
    PUSH EBX                            ; 0051517e
        ;   Label: LAB_0051517e
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0051517f
    LEA ESI,[ESP + 0x74]                ; 00515185
    LEA EDI,[ESP + 0x5c]                ; 00515189
    CALL dword ptr [EAX + 0x24]         ; 0051518d
    MOV ECX,0x6                         ; 00515190
    LEA ESI,[ESP + 0x74]                ; 00515195
    ADD ESP,0x4                         ; 00515199
    MOVSD.REP ES:EDI,ESI                ; 0051519c
    FLD float ptr [ESP + 0x58]          ; 0051519e
    FCOMP float ptr [ESP + 0xdc]        ; 005151a2
    FNSTSW AX                           ; 005151a9
    SAHF                                ; 005151ab
    JA 0x00514f7f                       ; 005151ac
        ;   XREF to: 00514f7f (CONDITIONAL_JUMP)  ; LAB_00514f7f
    FLD float ptr [ESP + 0x5c]          ; 005151b2
    FCOMP float ptr [ESP + 0xe0]        ; 005151b6
    FNSTSW AX                           ; 005151bd
    SAHF                                ; 005151bf
    JA 0x00514f7f                       ; 005151c0
        ;   XREF to: 00514f7f (CONDITIONAL_JUMP)  ; LAB_00514f7f
    FLD float ptr [ESP + 0x60]          ; 005151c6
    FCOMP float ptr [ESP + 0xe4]        ; 005151ca
    FNSTSW AX                           ; 005151d1
    SAHF                                ; 005151d3
    JA 0x00514f7f                       ; 005151d4
        ;   XREF to: 00514f7f (CONDITIONAL_JUMP)  ; LAB_00514f7f
    FLD float ptr [ESP + 0x64]          ; 005151da
    FCOMP float ptr [ESP + 0xdc]        ; 005151de
    FNSTSW AX                           ; 005151e5
    SAHF                                ; 005151e7
    JC 0x00514f7f                       ; 005151e8
        ;   XREF to: 00514f7f (CONDITIONAL_JUMP)  ; LAB_00514f7f
    FLD float ptr [ESP + 0x68]          ; 005151ee
    FCOMP float ptr [ESP + 0xe0]        ; 005151f2
    FNSTSW AX                           ; 005151f9
    SAHF                                ; 005151fb
    JC 0x00514f7f                       ; 005151fc
        ;   XREF to: 00514f7f (CONDITIONAL_JUMP)  ; LAB_00514f7f
    FLD float ptr [ESP + 0x6c]          ; 00515202
    FCOMP float ptr [ESP + 0xe4]        ; 00515206
    FNSTSW AX                           ; 0051520d
    SAHF                                ; 0051520f
    JC 0x00514f7f                       ; 00515210
        ;   XREF to: 00514f7f (CONDITIONAL_JUMP)  ; LAB_00514f7f
    LEA EAX,[EBX + 0x2b4]               ; 00515216
    PUSH EAX                            ; 0051521c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0051521d
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00515222
    FLD float ptr [ESP + 0x1c]          ; 00515225
    FMUL ST0                            ; 00515229
    MOV ESI,dword ptr [EAX + 0x104]     ; 0051522b
    XOR ECX,ECX                         ; 00515231
    MOV dword ptr [ESP + 0x1a0],ESI     ; 00515233
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0051523a
    MOV dword ptr [ESP + 0x1b4],ECX     ; 00515240
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00515247
    FSTP float ptr [ESP + 0x1a4]        ; 0051524e
    TEST ESI,ESI                        ; 00515255
    JLE 0x00514f7f                      ; 00515257
        ;   XREF to: 00514f7f (CONDITIONAL_JUMP)  ; LAB_00514f7f
    LEA EAX,[EBX + 0x20]                ; 0051525d
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00515260
    MOV EAX,dword ptr [EBP + 0x18]      ; 00515267
    ADD EBX,0x3c                        ; 0051526a
    ADD EAX,0x20                        ; 0051526d
    MOV dword ptr [ESP + 0x19c],EBX     ; 00515270
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00515277
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 0051527e
        ;   Label: LAB_0051527e
    LEA EBX,[ESP + 0x184]               ; 00515285
    FILD dword ptr [EAX]                ; 0051528c
    FMUL float ptr [0x005faae8]         ; 0051528e | DAT_005faae8
    FSTP float ptr [EBX]                ; 00515294
    FILD dword ptr [EAX + 0x4]          ; 00515296
    FMUL float ptr [0x005faae8]         ; 00515299 | DAT_005faae8
    FSTP float ptr [EBX + 0x4]          ; 0051529f
    FILD dword ptr [EAX + 0x8]          ; 005152a2
    FMUL float ptr [0x005faae8]         ; 005152a5 | DAT_005faae8
    FSTP float ptr [EBX + 0x8]          ; 005152ab
    LEA EAX,[ESP + 0x184]               ; 005152ae
    PUSH EAX                            ; 005152b5
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 005152b6
    LEA ESI,[ESP + 0x11c]               ; 005152bd
    PUSH EAX                            ; 005152c4
    LEA EDI,[ESP + 0xfc]                ; 005152c5
    LEA EBX,[ESP + 0xfc]                ; 005152cc
    CALL core_dirmat.cpp_FUN_00449530   ; 005152d3
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x120]               ; 005152d8
    ADD ESP,0x8                         ; 005152df
    LEA EAX,[ESP + 0x184]               ; 005152e2
    MOVSD ES:EDI,ESI                    ; 005152e9
    MOVSD ES:EDI,ESI                    ; 005152ea
    MOVSD ES:EDI,ESI                    ; 005152eb
    CMP EAX,EBX                         ; 005152ec
    JNZ 0x005153bc                      ; 005152ee
        ;   XREF to: 005153bc (CONDITIONAL_JUMP)  ; LAB_005153bc
    FLD float ptr [ESP + 0x184]         ; 005152f4
        ;   Label: LAB_005152f4
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 005152fb
    FLD float ptr [ESP + 0x188]         ; 00515302
    FXCH                                ; 00515309
    FADD float ptr [EAX]                ; 0051530b
    FLD float ptr [ESP + 0x18c]         ; 0051530d
    FXCH                                ; 00515314
    FSTP float ptr [ESP + 0x184]        ; 00515316
    FXCH                                ; 0051531d
    FADD float ptr [EAX + 0x4]          ; 0051531f
    FLD float ptr [ESP + 0x184]         ; 00515322
    FXCH                                ; 00515329
    FSTP float ptr [ESP + 0x188]        ; 0051532b
    FXCH                                ; 00515332
    FADD float ptr [EAX + 0x8]          ; 00515334
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 00515337
    FSTP float ptr [ESP + 0x18c]        ; 0051533e
    FSUB float ptr [EAX]                ; 00515345
    FLD float ptr [ESP + 0x188]         ; 00515347
    FXCH                                ; 0051534e
    FSTP float ptr [ESP + 0x184]        ; 00515350
    FSUB float ptr [EAX + 0x4]          ; 00515357
    FLD float ptr [ESP + 0x18c]         ; 0051535a
    FXCH                                ; 00515361
    FSTP float ptr [ESP + 0x188]        ; 00515363
    FSUB float ptr [EAX + 0x8]          ; 0051536a
    FLD float ptr [ESP + 0x188]         ; 0051536d
    FXCH                                ; 00515374
    FSTP float ptr [ESP + 0x18c]        ; 00515376
    FCOMP float ptr [ESP + 0x14]        ; 0051537d
    FNSTSW AX                           ; 00515381
    SAHF                                ; 00515383
    JNC 0x005153eb                      ; 00515384
        ;   XREF to: 005153eb (CONDITIONAL_JUMP)  ; LAB_005153eb
    MOV EBX,dword ptr [ESP + 0x1b4]     ; 00515386
        ;   Label: LAB_00515386
    MOV ESI,dword ptr [ESP + 0x1b0]     ; 0051538d
    MOV EDI,dword ptr [ESP + 0x1a0]     ; 00515394
    INC EBX                             ; 0051539b
    ADD ESI,0xc                         ; 0051539c
    MOV dword ptr [ESP + 0x1b4],EBX     ; 0051539f
    MOV dword ptr [ESP + 0x1b0],ESI     ; 005153a6
    CMP EBX,EDI                         ; 005153ad
    JL 0x0051527e                       ; 005153af
        ;   XREF to: 0051527e (CONDITIONAL_JUMP)  ; LAB_0051527e
    MOV ESP,EBP                         ; 005153b5
    POP EBP                             ; 005153b7
    POP EDI                             ; 005153b8
    POP ESI                             ; 005153b9
    POP EBX                             ; 005153ba
    RET                                 ; 005153bb
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005153bc
        ;   Label: LAB_005153bc
    MOV dword ptr [ESP + 0x184],EAX     ; 005153c3
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005153ca
    MOV dword ptr [ESP + 0x188],EAX     ; 005153d1
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005153d8
    MOV dword ptr [ESP + 0x18c],EAX     ; 005153df
    JMP 0x005152f4                      ; 005153e6
        ;   XREF to: 005152f4 (UNCONDITIONAL_JUMP)  ; LAB_005152f4
    FLD float ptr [ESP + 0x18]          ; 005153eb
        ;   Label: LAB_005153eb
    FLD1                                ; 005153ef
    FADDP                               ; 005153f1
    FLD float ptr [ESP + 0x188]         ; 005153f3
    FCOMPP                              ; 005153fa
    FNSTSW AX                           ; 005153fc
    SAHF                                ; 005153fe
    JA 0x00515386                       ; 005153ff
        ;   XREF to: 00515386 (CONDITIONAL_JUMP)  ; LAB_00515386
    FLD float ptr [ESP + 0x18c]         ; 00515401
    FMUL ST0                            ; 00515408
    FLD float ptr [ESP + 0x184]         ; 0051540a
    FMUL ST0                            ; 00515411
    FADDP                               ; 00515413
    FCOMP float ptr [ESP + 0x1a4]       ; 00515415
    FNSTSW AX                           ; 0051541c
    SAHF                                ; 0051541e
    JA 0x00515386                       ; 0051541f
        ;   XREF to: 00515386 (CONDITIONAL_JUMP)  ; LAB_00515386
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00515425
    TEST EDX,EDX                        ; 00515428
    JZ 0x00515445                       ; 0051542a
        ;   XREF to: 00515445 (CONDITIONAL_JUMP)  ; LAB_00515445
    PUSH 0xbf800000                     ; 0051542c
    PUSH 0x0                            ; 00515431
    PUSH 0x7                            ; 00515433
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 00515435
    PUSH EDX                            ; 0051543b
    CALL dword ptr [EAX + 0xe4]         ; 0051543c
    ADD ESP,0x10                        ; 00515442
    MOV EBX,dword ptr [EBP + 0x20]      ; 00515445
        ;   Label: LAB_00515445
    TEST EBX,EBX                        ; 00515448
    JZ 0x00515465                       ; 0051544a
        ;   XREF to: 00515465 (CONDITIONAL_JUMP)  ; LAB_00515465
    PUSH 0xbf800000                     ; 0051544c
    PUSH 0x0                            ; 00515451
    PUSH 0x7                            ; 00515453
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00515455
    PUSH EBX                            ; 0051545b
    CALL dword ptr [EAX + 0xe4]         ; 0051545c
    ADD ESP,0x10                        ; 00515462
    MOV EDI,dword ptr [EBP + 0x18]      ; 00515465
        ;   Label: LAB_00515465
    MOV EAX,dword ptr [EBP + 0x18]      ; 00515468
    PUSH EDI                            ; 0051546b
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0051546c
    LEA ESI,[ESP + 0x44]                ; 00515472
    CALL dword ptr [EAX + 0x24]         ; 00515476
    MOV ECX,0x6                         ; 00515479
    LEA EDI,[ESP + 0x8c]                ; 0051547e
    LEA ESI,[ESP + 0x44]                ; 00515485
    ADD ESP,0x4                         ; 00515489
    MOVSD.REP ES:EDI,ESI                ; 0051548c
    LEA EAX,[ESP + 0x88]                ; 0051548e
    FLD float ptr [ESP + 0x88]          ; 00515495
    FLD float ptr [ESP + 0x8c]          ; 0051549c
    FLD float ptr [ESP + 0x90]          ; 005154a3
    LEA EDI,[ESP + 0x148]               ; 005154aa
    LEA ESI,[ESP + 0x130]               ; 005154b1
    FXCH ST2                            ; 005154b8
    FADD float ptr [EAX + 0xc]          ; 005154ba
    FXCH                                ; 005154bd
    FADD float ptr [EAX + 0x10]         ; 005154bf
    FXCH ST2                            ; 005154c2
    FADD float ptr [EAX + 0x14]         ; 005154c4
    FXCH                                ; 005154c7
    FSTP float ptr [ESP + 0x130]        ; 005154c9
    FXCH                                ; 005154d0
    FSTP float ptr [ESP + 0x134]        ; 005154d2
    FSTP float ptr [ESP + 0x138]        ; 005154d9
    MOVSD ES:EDI,ESI                    ; 005154e0
    MOVSD ES:EDI,ESI                    ; 005154e1
    MOVSD ES:EDI,ESI                    ; 005154e2
    FLD float ptr [0x005e1a26]          ; 005154e3 | DAT_005e1a26
    FLD float ptr [ESP + 0x148]         ; 005154e9
    FMUL ST1                            ; 005154f0
    FLD float ptr [ESP + 0x14c]         ; 005154f2
    FMUL ST2                            ; 005154f9
    FLD float ptr [ESP + 0x150]         ; 005154fb
    FMULP ST3                           ; 00515502
    MOV EAX,dword ptr [EBP + 0x18]      ; 00515504
    LEA EDI,[ESP + 0xc4]                ; 00515507
    LEA ESI,[ESP + 0x124]               ; 0051550e
    FXCH                                ; 00515515
    FSTP float ptr [ESP + 0x124]        ; 00515517
    FSTP float ptr [ESP + 0x128]        ; 0051551e
    FSTP float ptr [ESP + 0x12c]        ; 00515525
    MOVSD ES:EDI,ESI                    ; 0051552c
    MOVSD ES:EDI,ESI                    ; 0051552d
    MOVSD ES:EDI,ESI                    ; 0051552e
    LEA EBX,[ESP + 0x184]               ; 0051552f
    FLD float ptr [EAX + 0x24]          ; 00515536
    FLD float ptr [EAX + 0x28]          ; 00515539
    FLD float ptr [EAX + 0x20]          ; 0051553c
    LEA EDI,[ESP + 0x13c]               ; 0051553f
    LEA ESI,[ESP + 0xb8]                ; 00515546
    LEA EAX,[ESP + 0x13c]               ; 0051554d
    FADD float ptr [ESP + 0xc4]         ; 00515554
    FXCH ST2                            ; 0051555b
    FADD float ptr [ESP + 0xc8]         ; 0051555d
    FXCH                                ; 00515564
    FADD float ptr [ESP + 0xcc]         ; 00515566
    FXCH ST2                            ; 0051556d
    FSTP float ptr [ESP + 0xb8]         ; 0051556f
    FSTP float ptr [ESP + 0xbc]         ; 00515576
    FSTP float ptr [ESP + 0xc0]         ; 0051557d
    MOVSD ES:EDI,ESI                    ; 00515584
    MOVSD ES:EDI,ESI                    ; 00515585
    MOVSD ES:EDI,ESI                    ; 00515586
    CMP EBX,EAX                         ; 00515587
    JZ 0x005155b5                       ; 00515589
        ;   XREF to: 005155b5 (CONDITIONAL_JUMP)  ; LAB_005155b5
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0051558b
    MOV dword ptr [ESP + 0x184],EAX     ; 00515592
    MOV EAX,dword ptr [ESP + 0x140]     ; 00515599
    MOV dword ptr [ESP + 0x188],EAX     ; 005155a0
    MOV EAX,dword ptr [ESP + 0x144]     ; 005155a7
    MOV dword ptr [ESP + 0x18c],EAX     ; 005155ae
    PUSH 0x0                            ; 005155b5
        ;   Label: LAB_005155b5
    PUSH 0xc8                           ; 005155b7
    PUSH 0x0                            ; 005155bc
    LEA EAX,[ESP + 0x190]               ; 005155be
    PUSH EAX                            ; 005155c5
    MOV EAX,[0x006167e0]                ; 005155c6 | g_CGorePtr
    PUSH EAX                            ; 005155cb
    CALL core_gore.cpp_FUN_004c9850     ; 005155cc
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005155d1
    MOV ESP,EBP                         ; 005155d4
    POP EBP                             ; 005155d6
    POP EDI                             ; 005155d7
    POP ESI                             ; 005155d8
    POP EBX                             ; 005155d9
    RET                                 ; 005155da

