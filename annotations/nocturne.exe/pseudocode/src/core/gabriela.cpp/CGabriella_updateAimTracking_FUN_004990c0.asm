; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004990c0(int param_1,float param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined        Stack[-0x134]:1  local_134
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gabriela.cpp_FUN_00495a20 at 00496013
;
; Referenced Globals:
;   double DOUBLE_0058223a = 3.14159265350000
;   double DOUBLE_00582242 = 2
;   float FLOAT_0058224a = -1.570796
;   float FLOAT_0058224e = 0.5
;   double DOUBLE_00582252 = 0.5
;   double DOUBLE_0058225a = 1.5
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;   float FLOAT_0059dcb0 = 0.3000000
;   undefined4 DAT_005be368
;   undefined4 DAT_01c713b0
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;   undefined4 DAT_01fa3ff8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_gabriela.cpp_FUN_00498de0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004990c0
        ;   Label: core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004990c0
    PUSH ESI                            ; 004990c1
    PUSH EDI                            ; 004990c2
    PUSH EBP                            ; 004990c3
    MOV EBP,ESP                         ; 004990c4
    SUB ESP,0x124                       ; 004990c6
    AND ESP,0xfffffff8                  ; 004990cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004990cf
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004990d2
    TEST ESI,ESI                        ; 004990d5
    JZ 0x004991d5                       ; 004990d7
        ;   XREF to: 004991d5 (CONDITIONAL_JUMP)  ; LAB_004991d5
    CMP dword ptr [EBX + 0x1f59c],0x0   ; 004990dd
        ;   Label: LAB_004990dd
    JNZ 0x004991fa                      ; 004990e4
        ;   XREF to: 004991fa (CONDITIONAL_JUMP)  ; LAB_004991fa
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004990ea
        ;   Label: LAB_004990ea
    JNZ 0x0049928c                      ; 004990f1
        ;   XREF to: 0049928c (CONDITIONAL_JUMP)  ; LAB_0049928c
    MOV dword ptr [EBX + 0x1fa60],0x0   ; 004990f7
        ;   Label: LAB_004990f7
    CMP dword ptr [EBX + 0x1fa54],0x2   ; 00499101
        ;   Label: LAB_00499101
    JNZ 0x00499357                      ; 00499108
        ;   XREF to: 00499357 (CONDITIONAL_JUMP)  ; LAB_00499357
    MOV ESI,dword ptr [EBX + 0x1fa60]   ; 0049910e
    TEST ESI,ESI                        ; 00499114
    JNZ 0x00499142                      ; 00499116
        ;   XREF to: 00499142 (CONDITIONAL_JUMP)  ; LAB_00499142
    MOV dword ptr [EBX + 0x1fa70],ESI   ; 00499118
    MOV EAX,dword ptr [EBX + 0x1fa70]   ; 0049911e
    MOV dword ptr [EBX + 0x1fa6c],EAX   ; 00499124
    MOV EAX,dword ptr [EBX + 0x1fa6c]   ; 0049912a
    MOV dword ptr [EBX + 0x1fa68],EAX   ; 00499130
    MOV EAX,dword ptr [EBX + 0x1fa68]   ; 00499136
    MOV dword ptr [EBX + 0x1fa64],EAX   ; 0049913c
    FLD float ptr [0x0059dcb0]          ; 00499142 | FLOAT_0059dcb0
        ;   Label: LAB_00499142
    FMUL double ptr [0x00582252]        ; 00499148 | DOUBLE_00582252
    FDIVR float ptr [EBP + 0x18]        ; 0049914e
    FADD float ptr [EBX + 0x1fa78]      ; 00499151
    FSTP float ptr [EBX + 0x1fa78]      ; 00499157
        ;   Label: LAB_00499157
    FLD float ptr [EBX + 0x1fa78]       ; 0049915d
        ;   Label: LAB_0049915d
    FLD1                                ; 00499163
    FCOMPP                              ; 00499165
    FNSTSW AX                           ; 00499167
    SAHF                                ; 00499169
    JNC 0x00499176                      ; 0049916a
        ;   XREF to: 00499176 (CONDITIONAL_JUMP)  ; LAB_00499176
    MOV dword ptr [EBX + 0x1fa78],0x3f800000 ; 0049916c
    FLD float ptr [EBX + 0x1fa78]       ; 00499176
        ;   Label: LAB_00499176
    FLDZ                                ; 0049917c
    FCOMPP                              ; 0049917e
    FNSTSW AX                           ; 00499180
    SAHF                                ; 00499182
    JBE 0x004991a3                      ; 00499183
        ;   XREF to: 004991a3 (CONDITIONAL_JUMP)  ; LAB_004991a3
    MOV dword ptr [EBX + 0x1fa6c],0x0   ; 00499185
    MOV dword ptr [EBX + 0x1fa70],0x0   ; 0049918f
    MOV dword ptr [EBX + 0x1fa78],0x0   ; 00499199
    FLD float ptr [EBX + 0x1fa78]       ; 004991a3
        ;   Label: LAB_004991a3
    FLDZ                                ; 004991a9
    FCOMPP                              ; 004991ab
    FNSTSW AX                           ; 004991ad
    SAHF                                ; 004991af
    JC 0x00499567                       ; 004991b0
        ;   XREF to: 00499567 (CONDITIONAL_JUMP)  ; LAB_00499567
    FLD float ptr [EBX + 0x1fa68]       ; 004991b6
    MOV EAX,dword ptr [EBX + 0x1fa64]   ; 004991bc
    MOV dword ptr [EBX + 0x1fa6c],EAX   ; 004991c2
    FSTP float ptr [EBX + 0x1fa70]      ; 004991c8
    MOV ESP,EBP                         ; 004991ce
    POP EBP                             ; 004991d0
    POP EDI                             ; 004991d1
    POP ESI                             ; 004991d2
    POP EBX                             ; 004991d3
    RET                                 ; 004991d4
    LEA EAX,[EBX + 0x150]               ; 004991d5
        ;   Label: LAB_004991d5
    PUSH EAX                            ; 004991db
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004991dc
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004991e1
    ADD ESP,0x4                         ; 004991e4
    CMP EAX,0x2                         ; 004991e7
    JNZ 0x004990dd                      ; 004991ea
        ;   XREF to: 004990dd (CONDITIONAL_JUMP)  ; LAB_004990dd
    MOV ESI,0x1                         ; 004991f0
    JMP 0x004990dd                      ; 004991f5
        ;   XREF to: 004990dd (UNCONDITIONAL_JUMP)  ; LAB_004990dd
    CMP dword ptr [EBX + 0xbc90],0x2    ; 004991fa
        ;   Label: LAB_004991fa
    JZ 0x004990ea                       ; 00499201
        ;   XREF to: 004990ea (CONDITIONAL_JUMP)  ; LAB_004990ea
    FLD float ptr [EBX + 0xbcbc]        ; 00499207
    FMUL double ptr [0x0058223a]        ; 0049920d | DOUBLE_0058223a
    FMUL double ptr [0x00582242]        ; 00499213 | DOUBLE_00582242
    FMUL float ptr [EBP + 0x18]         ; 00499219
    MOV ESI,0x3fc90fdb                  ; 0049921c
    FLD float ptr [EBX + 0x1fa64]       ; 00499221
    FXCH                                ; 00499227
    FADD ST0,ST1                        ; 00499229
    MOV dword ptr [ESP + 0xfc],ESI      ; 0049922b
    FSTP ST1                            ; 00499232
    FST float ptr [EBX + 0x1fa64]       ; 00499234
    FCOMP float ptr [0x0058224a]        ; 0049923a | FLOAT_0058224a
    FNSTSW AX                           ; 00499240
    SAHF                                ; 00499242
    JNC 0x0049924f                      ; 00499243
        ;   XREF to: 0049924f (CONDITIONAL_JUMP)  ; LAB_0049924f
    MOV dword ptr [EBX + 0x1fa64],0xbfc90fdb ; 00499245
    FLD float ptr [EBX + 0x1fa64]       ; 0049924f
        ;   Label: LAB_0049924f
    FCOMP float ptr [ESP + 0xfc]        ; 00499255
    FNSTSW AX                           ; 0049925c
    SAHF                                ; 0049925e
    JBE 0x0049926e                      ; 0049925f
        ;   XREF to: 0049926e (CONDITIONAL_JUMP)  ; LAB_0049926e
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00499261
    MOV dword ptr [EBX + 0x1fa64],EAX   ; 00499268
    FLD float ptr [EBP + 0x18]          ; 0049926e
        ;   Label: LAB_0049926e
    FDIV float ptr [0x0059dcb0]         ; 00499271 | FLOAT_0059dcb0
    FADD float ptr [EBX + 0x1fa78]      ; 00499277
    MOV dword ptr [EBX + 0x1fa68],0x0   ; 0049927d
    JMP 0x00499157                      ; 00499287
        ;   XREF to: 00499157 (UNCONDITIONAL_JUMP)  ; LAB_00499157
    TEST ESI,ESI                        ; 0049928c
        ;   Label: LAB_0049928c
    JNZ 0x004990f7                      ; 0049928e
        ;   XREF to: 004990f7 (CONDITIONAL_JUMP)  ; LAB_004990f7
    CMP dword ptr [EBX + 0x1fa54],0x0   ; 00499294
    JNZ 0x00499101                      ; 0049929b
        ;   XREF to: 00499101 (CONDITIONAL_JUMP)  ; LAB_00499101
    MOV EDX,0x7149f2ca                  ; 004992a1
    MOV dword ptr [ESP + 0x110],ESI     ; 004992a6
    MOV dword ptr [ESP + 0x118],ESI     ; 004992ad
    XOR EDI,EDI                         ; 004992b4
    MOV dword ptr [ESP + 0x114],EDX     ; 004992b6
    MOV EAX,[0x005be368]                ; 004992bd | DAT_005be368
        ;   Label: LAB_004992bd
    MOV ESI,dword ptr [ESP + 0x118]     ; 004992c2
    CMP ESI,dword ptr [EAX + 0x14cd6c]  ; 004992c9 | DAT_01fa3ff0
    JGE 0x00499345                      ; 004992cf
        ;   XREF to: 00499345 (CONDITIONAL_JUMP)  ; LAB_00499345
    MOV ESI,dword ptr [EDI + EAX*0x1 + 0x14cd70] ; 004992d5 | DAT_01fa3ff4 | DAT_01fa3ff8
    CMP ESI,dword ptr [EBX + 0x1fa60]   ; 004992dc
    SETZ AL                             ; 004992e2
    AND EAX,0xff                        ; 004992e5
    PUSH EAX                            ; 004992ea
    PUSH ESI                            ; 004992eb
    PUSH EBX                            ; 004992ec
    CALL core_gabriela.cpp_FUN_00498de0 ; 004992ed
        ;   XREF to: 00498de0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_00498de0()
    MOV dword ptr [ESP + 0x12c],EAX     ; 004992f2
    FLD float ptr [ESP + 0x12c]         ; 004992f9
    ADD ESP,0xc                         ; 00499300
    FST float ptr [ESP]                 ; 00499303
    FLDZ                                ; 00499306
    FCOMPP                              ; 00499308
    FNSTSW AX                           ; 0049930a
    SAHF                                ; 0049930c
    JBE 0x00499323                      ; 0049930d
        ;   XREF to: 00499323 (CONDITIONAL_JUMP)  ; LAB_00499323
    MOV ESI,dword ptr [ESP + 0x118]     ; 0049930f
        ;   Label: LAB_0049930f
    INC ESI                             ; 00499316
    ADD EDI,0x4                         ; 00499317
    MOV dword ptr [ESP + 0x118],ESI     ; 0049931a
    JMP 0x004992bd                      ; 00499321
        ;   XREF to: 004992bd (UNCONDITIONAL_JUMP)  ; LAB_004992bd
    FLD float ptr [ESP]                 ; 00499323
        ;   Label: LAB_00499323
    FCOMP float ptr [ESP + 0x114]       ; 00499326
    FNSTSW AX                           ; 0049932d
    SAHF                                ; 0049932f
    JNC 0x0049930f                      ; 00499330
        ;   XREF to: 0049930f (CONDITIONAL_JUMP)  ; LAB_0049930f
    MOV EAX,dword ptr [ESP]             ; 00499332
    MOV dword ptr [ESP + 0x110],ESI     ; 00499335
    MOV dword ptr [ESP + 0x114],EAX     ; 0049933c
    JMP 0x0049930f                      ; 00499343
        ;   XREF to: 0049930f (UNCONDITIONAL_JUMP)  ; LAB_0049930f
    MOV EAX,dword ptr [ESP + 0x110]     ; 00499345
        ;   Label: LAB_00499345
    MOV dword ptr [EBX + 0x1fa60],EAX   ; 0049934c
    JMP 0x00499101                      ; 00499352
        ;   XREF to: 00499101 (UNCONDITIONAL_JUMP)  ; LAB_00499101
    CMP dword ptr [EBX + 0x1fa60],0x0   ; 00499357
        ;   Label: LAB_00499357
    JZ 0x00499540                       ; 0049935e
        ;   XREF to: 00499540 (CONDITIONAL_JUMP)  ; LAB_00499540
    PUSH 0x5993b0                       ; 00499364 | g_CVectorTypeInfo_005993b0
    PUSH 0xa                            ; 00499369
    LEA EAX,[ESP + 0xc]                 ; 0049936b
    PUSH EAX                            ; 0049936f
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00499370
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 00499375
    LEA ESI,[ESP + 0x4]                 ; 00499378
    MOV EAX,dword ptr [EBX + 0x1fa60]   ; 0049937c
    PUSH ESI                            ; 00499382
    MOV EDI,dword ptr [EAX + 0x14c]     ; 00499383
    PUSH EAX                            ; 00499389
    CALL dword ptr [EDI + 0x4c]         ; 0049938a
    ADD ESP,0x8                         ; 0049938d
    TEST EAX,EAX                        ; 00499390
    JLE 0x00499493                      ; 00499392
        ;   XREF to: 00499493 (CONDITIONAL_JUMP)  ; LAB_00499493
    LEA EAX,[ESP + 0xe8]                ; 00499398
    LEA ESI,[ESP + 0x4]                 ; 0049939f
    CMP EAX,ESI                         ; 004993a3
    JZ 0x004993c8                       ; 004993a5
        ;   XREF to: 004993c8 (CONDITIONAL_JUMP)  ; LAB_004993c8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004993a7
    MOV dword ptr [ESP + 0xe8],EAX      ; 004993ab
    MOV EAX,dword ptr [ESP + 0x8]       ; 004993b2
    MOV dword ptr [ESP + 0xec],EAX      ; 004993b6
    MOV EAX,dword ptr [ESP + 0xc]       ; 004993bd
    MOV dword ptr [ESP + 0xf0],EAX      ; 004993c1
        ;   Label: LAB_004993c1
    LEA EAX,[ESP + 0xe8]                ; 004993c8
        ;   Label: LAB_004993c8
    PUSH EAX                            ; 004993cf
    LEA EAX,[ESP + 0xd4]                ; 004993d0
    PUSH EAX                            ; 004993d7
    MOV EDX,dword ptr [EBX + 0x1fa60]   ; 004993d8
    PUSH EDX                            ; 004993de
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004993df
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004993e4
    PUSH EAX                            ; 004993e7
    LEA EAX,[ESP + 0xc8]                ; 004993e8
    PUSH EAX                            ; 004993ef
    PUSH EBX                            ; 004993f0
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004993f1
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 004993f6
    MOV ECX,dword ptr [0x01c713b0]      ; 004993f9 | DAT_01c713b0
    PUSH ECX                            ; 004993ff
    LEA EAX,[ESP + 0xbc]                ; 00499400
    PUSH EAX                            ; 00499407
    LEA EAX,[EBX + 0x150]               ; 00499408
    PUSH EAX                            ; 0049940e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0049940f
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 00499414
    FLD float ptr [ESP + 0xc4]          ; 00499417
    FSUB float ptr [EAX]                ; 0049941e
    FLD float ptr [ESP + 0xc8]          ; 00499420
    FXCH                                ; 00499427
    FSTP float ptr [ESP + 0xa0]         ; 00499429
    FSUB float ptr [EAX + 0x4]          ; 00499430
    FLD float ptr [ESP + 0xcc]          ; 00499433
    FXCH                                ; 0049943a
    FSTP float ptr [ESP + 0xa4]         ; 0049943c
    FSUB float ptr [EAX + 0x8]          ; 00499443
    LEA EAX,[ESP + 0xa0]                ; 00499446
    PUSH EAX                            ; 0049944d
    LEA EAX,[ESP + 0xe0]                ; 0049944e
    PUSH EAX                            ; 00499455
    FSTP float ptr [ESP + 0xb0]         ; 00499456
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0049945d
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 00499462
    FLD float ptr [EBP + 0x18]          ; 00499465
    FDIV float ptr [0x0059dcb0]         ; 00499468 | FLOAT_0059dcb0
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0049946e
    MOV dword ptr [EBX + 0x1fa64],EAX   ; 00499475
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0049947b
    FADD float ptr [EBX + 0x1fa78]      ; 00499482
    MOV dword ptr [EBX + 0x1fa68],EAX   ; 00499488
    JMP 0x00499157                      ; 0049948e
        ;   XREF to: 00499157 (UNCONDITIONAL_JUMP)  ; LAB_00499157
    LEA ESI,[ESP + 0x7c]                ; 00499493
        ;   Label: LAB_00499493
    MOV EAX,dword ptr [EBX + 0x1fa60]   ; 00499497
    PUSH ESI                            ; 0049949d
    MOV EDI,dword ptr [EAX + 0x14c]     ; 0049949e
    PUSH EAX                            ; 004994a4
    CALL dword ptr [EDI + 0x14]         ; 004994a5
    LEA ESI,[EAX + 0xc]                 ; 004994a8
    FLD float ptr [EAX]                 ; 004994ab
    FADD float ptr [ESI]                ; 004994ad
    ADD ESP,0x8                         ; 004994af
    FST float ptr [ESP + 0x94]          ; 004994b2
    FLD float ptr [EAX + 0x4]           ; 004994b9
    FADD float ptr [ESI + 0x4]          ; 004994bc
    FXCH                                ; 004994bf
    FLD float ptr [0x0058224e]          ; 004994c1 | FLOAT_0058224e
    FXCH                                ; 004994c7
    FMUL ST1                            ; 004994c9
    FXCH ST2                            ; 004994cb
    FST float ptr [ESP + 0x98]          ; 004994cd
    FLD float ptr [EAX + 0x8]           ; 004994d4
    FADD float ptr [ESI + 0x8]          ; 004994d7
    FXCH                                ; 004994da
    FMUL ST2                            ; 004994dc
    FXCH                                ; 004994de
    FST float ptr [ESP + 0x9c]          ; 004994e0
    FMULP ST2                           ; 004994e7
    LEA EAX,[ESP + 0xac]                ; 004994e9
    FXCH ST2                            ; 004994f0
    FSTP float ptr [ESP + 0xac]         ; 004994f2
    FXCH                                ; 004994f9
    FSTP float ptr [ESP + 0xb0]         ; 004994fb
    LEA ESI,[ESP + 0xe8]                ; 00499502
    FSTP float ptr [ESP + 0xb4]         ; 00499509
    CMP ESI,EAX                         ; 00499510
    JZ 0x004993c8                       ; 00499512
        ;   XREF to: 004993c8 (CONDITIONAL_JUMP)  ; LAB_004993c8
    MOV EAX,dword ptr [ESP + 0xac]      ; 00499518
    MOV dword ptr [ESP + 0xe8],EAX      ; 0049951f
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00499526
    MOV dword ptr [ESP + 0xec],EAX      ; 0049952d
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00499534
    JMP 0x004993c1                      ; 0049953b
        ;   XREF to: 004993c1 (UNCONDITIONAL_JUMP)  ; LAB_004993c1
    FLD float ptr [EBX + 0x1fa74]       ; 00499540
        ;   Label: LAB_00499540
    FLDZ                                ; 00499546
    FCOMPP                              ; 00499548
    FNSTSW AX                           ; 0049954a
    SAHF                                ; 0049954c
    JC 0x0049915d                       ; 0049954d
        ;   XREF to: 0049915d (CONDITIONAL_JUMP)  ; LAB_0049915d
    FLD float ptr [EBP + 0x18]          ; 00499553
    FDIV float ptr [0x0059dcb0]         ; 00499556 | FLOAT_0059dcb0
    FSUBR float ptr [EBX + 0x1fa78]     ; 0049955c
    JMP 0x00499157                      ; 00499562
        ;   XREF to: 00499157 (UNCONDITIONAL_JUMP)  ; LAB_00499157
    FLD float ptr [EBX + 0x1fa68]       ; 00499567
        ;   Label: LAB_00499567
    FSUB float ptr [EBX + 0x1fa70]      ; 0049956d
    SUB ESP,0x4                         ; 00499573
    FSTP float ptr [ESP]                ; 00499576
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00499579
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x124],EAX     ; 0049957e
    FLD float ptr [EBX + 0x1fa64]       ; 00499585
    FLD float ptr [ESP + 0x124]         ; 0049958b
    ADD ESP,0x4                         ; 00499592
    FXCH                                ; 00499595
    FSUB float ptr [EBX + 0x1fa6c]      ; 00499597
    FXCH                                ; 0049959d
    FSTP float ptr [ESP + 0x11c]        ; 0049959f
    SUB ESP,0x4                         ; 004995a6
    FSTP float ptr [ESP]                ; 004995a9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004995ac
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x124],EAX     ; 004995b1
    FLD float ptr [ESP + 0x124]         ; 004995b8
    ADD ESP,0x4                         ; 004995bf
    FLD float ptr [EBP + 0x18]          ; 004995c2
    FMUL double ptr [0x0058223a]        ; 004995c5 | DOUBLE_0058223a
    FMUL double ptr [0x0058225a]        ; 004995cb | DOUBLE_0058225a
    FLD float ptr [ESP + 0x11c]         ; 004995d1
    FXCH ST2                            ; 004995d8
    FSTP float ptr [ESP + 0x108]        ; 004995da
    FST float ptr [ESP + 0x10c]         ; 004995e1
    FCHS                                ; 004995e8
    FSTP float ptr [ESP + 0x100]        ; 004995ea
    FCOMP float ptr [ESP + 0x100]       ; 004995f1
    FNSTSW AX                           ; 004995f8
    SAHF                                ; 004995fa
    JNC 0x0049960b                      ; 004995fb
        ;   XREF to: 0049960b (CONDITIONAL_JUMP)  ; LAB_0049960b
    MOV EAX,dword ptr [ESP + 0x100]     ; 004995fd
    MOV dword ptr [ESP + 0x11c],EAX     ; 00499604
    FLD float ptr [ESP + 0x11c]         ; 0049960b
        ;   Label: LAB_0049960b
    FCOMP float ptr [ESP + 0x10c]       ; 00499612
    FNSTSW AX                           ; 00499619
    SAHF                                ; 0049961b
    JBE 0x0049962c                      ; 0049961c
        ;   XREF to: 0049962c (CONDITIONAL_JUMP)  ; LAB_0049962c
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0049961e
    MOV dword ptr [ESP + 0x11c],EAX     ; 00499625
    FLD float ptr [ESP + 0x108]         ; 0049962c
        ;   Label: LAB_0049962c
    FLD float ptr [ESP + 0x10c]         ; 00499633
    FCHS                                ; 0049963a
    FSTP float ptr [ESP + 0x104]        ; 0049963c
    FCOMP float ptr [ESP + 0x104]       ; 00499643
    FNSTSW AX                           ; 0049964a
    SAHF                                ; 0049964c
    JNC 0x0049965d                      ; 0049964d
        ;   XREF to: 0049965d (CONDITIONAL_JUMP)  ; LAB_0049965d
    MOV EAX,dword ptr [ESP + 0x104]     ; 0049964f
    MOV dword ptr [ESP + 0x108],EAX     ; 00499656
    FLD float ptr [ESP + 0x108]         ; 0049965d
        ;   Label: LAB_0049965d
    FCOMP float ptr [ESP + 0x10c]       ; 00499664
    FNSTSW AX                           ; 0049966b
    SAHF                                ; 0049966d
    JBE 0x0049967e                      ; 0049966e
        ;   XREF to: 0049967e (CONDITIONAL_JUMP)  ; LAB_0049967e
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00499670
    MOV dword ptr [ESP + 0x108],EAX     ; 00499677
    FLD float ptr [EBX + 0x1fa70]       ; 0049967e
        ;   Label: LAB_0049967e
    FLD float ptr [EBX + 0x1fa6c]       ; 00499684
    FADD float ptr [ESP + 0x108]        ; 0049968a
    FXCH                                ; 00499691
    FADD float ptr [ESP + 0x11c]        ; 00499693
    FXCH                                ; 0049969a
    FSTP float ptr [EBX + 0x1fa6c]      ; 0049969c
    FSTP float ptr [EBX + 0x1fa70]      ; 004996a2
    MOV ESP,EBP                         ; 004996a8
    POP EBP                             ; 004996aa
    POP EDI                             ; 004996ab
    POP ESI                             ; 004996ac
    POP EBX                             ; 004996ad
    RET                                 ; 004996ae

