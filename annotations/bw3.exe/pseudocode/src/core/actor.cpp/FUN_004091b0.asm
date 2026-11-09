; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_FUN_004091b0(int param_1,float *param_2,float *param_3,float *param_4,int param_5,uint param_6,CBoundingBox3D *param_7)
;
; Local Variables:
; undefined8       Stack[-0x120]:8  local_120
; undefined4       Stack[-0x118]:4  local_118
; undefined        Stack[-0x114]:1  local_114
; undefined        Stack[-0xfc]:1  local_fc
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_setcolid.cpp_FUN_0053d270 at 0053d567
;   core_spike.cpp_FUN_00566fd0 at 00567440
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005b5558
;   TerminatedCString s_CDemonActor_rayIntersect_005b556a
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 g_CDemonSetInstance.field1439476_0x15f6f4
;   undefined4 DAT_0272af44
;   undefined4 DAT_0272af48
;   undefined4 DAT_0272af4c
;   undefined4 DAT_0272af50
;   undefined4 DAT_0272af54
;   undefined4 DAT_0272af58
;
; Called Functions:
;   core_actor.cpp_FUN_00408100
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_FUN_00408f00
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041d840
;   core_box.cpp_FUN_0041e220
;   core_box.cpp_FUN_0041e910
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dmodel.cpp_FUN_004618a0
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_0054bde0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_FUN_0054f400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004091b0
        ;   Label: core_actor.cpp_FUN_004091b0
    PUSH ESI                            ; 004091b1
    PUSH EDI                            ; 004091b2
    PUSH EBP                            ; 004091b3
    MOV EBP,ESP                         ; 004091b4
    SUB ESP,0x120                       ; 004091b6
    AND ESP,0xfffffff8                  ; 004091bc
    MOV EBX,dword ptr [EBP + 0x20]      ; 004091bf
    MOV EDX,dword ptr [EBP + 0x28]      ; 004091c2
    TEST EDX,EDX                        ; 004091c5
    JNZ 0x004091e2                      ; 004091c7
        ;   XREF to: 004091e2 (CONDITIONAL_JUMP)  ; LAB_004091e2
    MOV dword ptr [ESP + 0x118],0x40000000 ; 004091c9
        ;   Label: LAB_004091c9
    MOV EAX,dword ptr [ESP + 0x118]     ; 004091d4
    MOV ESP,EBP                         ; 004091db
    POP EBP                             ; 004091dd
    POP EDI                             ; 004091de
    POP ESI                             ; 004091df
    POP EBX                             ; 004091e0
    RET                                 ; 004091e1
    PUSH EDX                            ; 004091e2
        ;   Label: LAB_004091e2
    MOV ESI,dword ptr [EBP + 0x24]      ; 004091e3
    PUSH ESI                            ; 004091e6
    MOV EDI,dword ptr [EBP + 0x14]      ; 004091e7
    PUSH EDI                            ; 004091ea
    LEA ESI,[ESP + 0x28]                ; 004091eb
    CALL core_actor.cpp_FUN_00408f00    ; 004091ef
        ;   XREF to: 00408f00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408f00()
    MOV ECX,0x6                         ; 004091f4
    LEA EDI,[ESP + 0x40]                ; 004091f9
    ADD ESP,0xc                         ; 004091fd
    LEA ESI,[ESP + 0x1c]                ; 00409200
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00409204
    MOVSD.REP ES:EDI,ESI                ; 00409207
    TEST EAX,EAX                        ; 00409209
    JNZ 0x00409455                      ; 0040920b
        ;   XREF to: 00409455 (CONDITIONAL_JUMP)  ; LAB_00409455
    LEA EAX,[ESP + 0x4c]                ; 00409211
    MOV EDX,dword ptr [EBP + 0x18]      ; 00409215
    CMP EAX,EDX                         ; 00409218
    JZ 0x00409230                       ; 0040921a
        ;   XREF to: 00409230 (CONDITIONAL_JUMP)  ; LAB_00409230
    MOV EAX,dword ptr [EDX]             ; 0040921c
    MOV dword ptr [ESP + 0x4c],EAX      ; 0040921e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00409222
    MOV dword ptr [ESP + 0x50],EAX      ; 00409225
    MOV EAX,dword ptr [EDX + 0x8]       ; 00409229
    MOV dword ptr [ESP + 0x54],EAX      ; 0040922c
    LEA EAX,[ESP + 0x58]                ; 00409230
        ;   Label: LAB_00409230
    CMP EAX,EDX                         ; 00409234
    JZ 0x0040924c                       ; 00409236
        ;   XREF to: 0040924c (CONDITIONAL_JUMP)  ; LAB_0040924c
    MOV EAX,dword ptr [EDX]             ; 00409238
    MOV dword ptr [ESP + 0x58],EAX      ; 0040923a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0040923e
    MOV dword ptr [ESP + 0x5c],EAX      ; 00409241
    MOV EAX,dword ptr [EDX + 0x8]       ; 00409245
    MOV dword ptr [ESP + 0x60],EAX      ; 00409248
    MOV EAX,dword ptr [EBP + 0x18]      ; 0040924c
        ;   Label: LAB_0040924c
    FLD float ptr [EAX]                 ; 0040924f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00409251
    FADD float ptr [EAX]                ; 00409254
    MOV EAX,dword ptr [EBP + 0x18]      ; 00409256
    FLD float ptr [EAX + 0x4]           ; 00409259
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0040925c
    FADD float ptr [EAX + 0x4]          ; 0040925f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00409262
    LEA EDI,[ESP + 0x10c]               ; 00409265
    LEA ESI,[ESP + 0x94]                ; 0040926c
    FLD float ptr [EAX + 0x8]           ; 00409273
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00409276
    FXCH ST2                            ; 00409279
    FSTP float ptr [ESP + 0x94]         ; 0040927b
    FXCH                                ; 00409282
    FADD float ptr [EAX + 0x8]          ; 00409284
    LEA EAX,[ESP + 0x10c]               ; 00409287
    FXCH                                ; 0040928e
    FSTP float ptr [ESP + 0x98]         ; 00409290
    PUSH EAX                            ; 00409297
    LEA EAX,[ESP + 0x50]                ; 00409298
    FSTP float ptr [ESP + 0xa0]         ; 0040929c
    PUSH EAX                            ; 004092a3
    MOVSD ES:EDI,ESI                    ; 004092a4
    MOVSD ES:EDI,ESI                    ; 004092a5
    MOVSD ES:EDI,ESI                    ; 004092a6
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041d840 ; 004092a7
        ;   XREF to: 0041d840 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041d840(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 004092ac
    LEA EAX,[ESP + 0x34]                ; 004092af
    PUSH EAX                            ; 004092b3
    LEA EAX,[ESP + 0x50]                ; 004092b4
    PUSH EAX                            ; 004092b8
    CALL core_box.cpp_FUN_0041e910      ; 004092b9
        ;   XREF to: 0041e910 (UNCONDITIONAL_CALL)  ; int core_box.cpp_FUN_0041e910(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 004092be
    TEST EAX,EAX                        ; 004092c1
    JZ 0x004091c9                       ; 004092c3
        ;   XREF to: 004091c9 (CONDITIONAL_JUMP)  ; LAB_004091c9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004092c9
        ;   Label: LAB_004092c9
    PUSH EAX                            ; 004092cc
    MOV EDX,dword ptr [EBP + 0x14]      ; 004092cd
    PUSH EDX                            ; 004092d0
    LEA ESI,[ESP + 0xe4]                ; 004092d1
    LEA EDI,[ESP + 0xc0]                ; 004092d8
    CALL core_actor.cpp_FUN_00408bf0    ; 004092df
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    ADD ESP,0x8                         ; 004092e4
    LEA ESI,[ESP + 0xdc]                ; 004092e7
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004092ee
    MOVSD ES:EDI,ESI                    ; 004092f1
    MOVSD ES:EDI,ESI                    ; 004092f2
    MOVSD ES:EDI,ESI                    ; 004092f3
    PUSH ECX                            ; 004092f4
    MOV ESI,dword ptr [EBP + 0x14]      ; 004092f5
    PUSH ESI                            ; 004092f8
    LEA ESI,[ESP + 0xd8]                ; 004092f9
    LEA EDI,[ESP + 0xfc]                ; 00409300
    CALL core_actor.cpp_FUN_00408b40    ; 00409307
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0xd8]                ; 0040930c
    ADD ESP,0x8                         ; 00409313
    MOVSD ES:EDI,ESI                    ; 00409316
    MOVSD ES:EDI,ESI                    ; 00409317
    MOVSD ES:EDI,ESI                    ; 00409318
    MOV dword ptr [EBX + 0xc],0xffffffff ; 00409319
    MOV dword ptr [EBX + 0x10],0xffffffff ; 00409320
    MOV dword ptr [EBX + 0x14],0xffffffff ; 00409327
    MOV EDI,dword ptr [EBP + 0x28]      ; 0040932e
    MOV dword ptr [EBX + 0x18],0xffffffff ; 00409331
    CMP EDI,0x2                         ; 00409338
    JNC 0x0040953c                      ; 0040933b
        ;   XREF to: 0040953c (CONDITIONAL_JUMP)  ; LAB_0040953c
    CMP EDI,0x1                         ; 00409341
    JNZ 0x0040954b                      ; 00409344
        ;   XREF to: 0040954b (CONDITIONAL_JUMP)  ; LAB_0040954b
    LEA EAX,[ESP + 0xe8]                ; 0040934a
    PUSH EAX                            ; 00409351
    LEA EAX,[ESP + 0xf8]                ; 00409352
    PUSH EAX                            ; 00409359
    LEA EAX,[ESP + 0xc0]                ; 0040935a
    PUSH EAX                            ; 00409361
    MOV ESI,dword ptr [EBP + 0x14]      ; 00409362
    MOV EAX,dword ptr [EBP + 0x14]      ; 00409365
    PUSH ESI                            ; 00409368
    MOV EAX,dword ptr [EAX + 0x154]     ; 00409369
    LEA ESI,[ESP + 0x8c]                ; 0040936f
    LEA EDI,[ESP + 0x74]                ; 00409376
    CALL dword ptr [EAX + 0x1c]         ; 0040937a
    MOV ECX,0x6                         ; 0040937d
    ADD ESP,0x4                         ; 00409382
    LEA EAX,[ESP + 0x70]                ; 00409385
    LEA ESI,[ESP + 0x88]                ; 00409389
    PUSH EAX                            ; 00409390
    MOVSD.REP ES:EDI,ESI                ; 00409391
    CALL core_box.cpp_FUN_0041e220      ; 00409393
        ;   XREF to: 0041e220 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041e220()
    MOV dword ptr [ESP + 0x12c],EAX     ; 00409398
        ;   Label: LAB_00409398
    FLD float ptr [ESP + 0x12c]         ; 0040939f
    ADD ESP,0x10                        ; 004093a6
    FSTP float ptr [ESP + 0x18]         ; 004093a9
    FLD float ptr [ESP + 0x18]          ; 004093ad
        ;   Label: LAB_004093ad
    FLDZ                                ; 004093b1
    FXCH                                ; 004093b3
    FSTP double ptr [ESP + 0x10]        ; 004093b5
    FCOMP double ptr [ESP + 0x10]       ; 004093b9
    FNSTSW AX                           ; 004093bd
    SAHF                                ; 004093bf
    JA 0x004091c9                       ; 004093c0
        ;   XREF to: 004091c9 (CONDITIONAL_JUMP)  ; LAB_004091c9
    FLD1                                ; 004093c6
    FCOMP double ptr [ESP + 0x10]       ; 004093c8
    FNSTSW AX                           ; 004093cc
    SAHF                                ; 004093ce
    JC 0x004091c9                       ; 004093cf
        ;   XREF to: 004091c9 (CONDITIONAL_JUMP)  ; LAB_004091c9
    MOV EAX,[0x00603b28]                ; 004093d5 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15f6f4]  ; 004093da | g_CDemonSetInstance.field1439476_0x15f6f4
    TEST EAX,EAX                        ; 004093e0
    JZ 0x00409573                       ; 004093e2
        ;   XREF to: 00409573 (CONDITIONAL_JUMP)  ; LAB_00409573
    LEA EAX,[ESP + 0xe8]                ; 004093e8
        ;   Label: LAB_004093e8
    PUSH EAX                            ; 004093ef
    MOV EDI,dword ptr [EBP + 0x14]      ; 004093f0
    PUSH EDI                            ; 004093f3
    LEA ESI,[ESP + 0xb4]                ; 004093f4
    CALL core_actor.cpp_FUN_00408b00    ; 004093fb
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA EDI,[ESP + 0xa8]                ; 00409400
    LEA ESI,[ESP + 0xb4]                ; 00409407
    ADD ESP,0x8                         ; 0040940e
    LEA EAX,[ESP + 0xa0]                ; 00409411
    MOVSD ES:EDI,ESI                    ; 00409418
    MOVSD ES:EDI,ESI                    ; 00409419
    MOVSD ES:EDI,ESI                    ; 0040941a
    CMP EBX,EAX                         ; 0040941b
    JZ 0x0040943c                       ; 0040941d
        ;   XREF to: 0040943c (CONDITIONAL_JUMP)  ; LAB_0040943c
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0040941f
    MOV dword ptr [EBX],EAX             ; 00409426
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00409428
    MOV dword ptr [EBX + 0x4],EAX       ; 0040942f
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00409432
    MOV dword ptr [EBX + 0x8],EAX       ; 00409439
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040943c
        ;   Label: LAB_0040943c
    MOV dword ptr [ESP + 0x118],EAX     ; 00409440
    MOV EAX,dword ptr [ESP + 0x118]     ; 00409447
    MOV ESP,EBP                         ; 0040944e
    POP EBP                             ; 00409450
    POP EDI                             ; 00409451
    POP ESI                             ; 00409452
    POP EBX                             ; 00409453
    RET                                 ; 00409454
    LEA EAX,[ESP + 0x34]                ; 00409455
        ;   Label: LAB_00409455
    PUSH EAX                            ; 00409459
    MOV ESI,dword ptr [EBP + 0x2c]      ; 0040945a
    PUSH ESI                            ; 0040945d
    CALL core_box.cpp_FUN_0041e910      ; 0040945e
        ;   XREF to: 0041e910 (UNCONDITIONAL_CALL)  ; int core_box.cpp_FUN_0041e910(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 00409463
    TEST EAX,EAX                        ; 00409466
    JNZ 0x004092c9                      ; 00409468
        ;   XREF to: 004092c9 (CONDITIONAL_JUMP)  ; LAB_004092c9
    JMP 0x004091c9                      ; 0040946e
        ;   XREF to: 004091c9 (UNCONDITIONAL_JUMP)  ; LAB_004091c9
    LEA EAX,[ESP + 0xe8]                ; 00409473
        ;   Label: LAB_00409473
    PUSH EAX                            ; 0040947a
    LEA EAX,[ESP + 0xf8]                ; 0040947b
    PUSH EAX                            ; 00409482
    LEA EAX,[ESP + 0xc0]                ; 00409483
    PUSH EAX                            ; 0040948a
    MOV EDI,dword ptr [EBP + 0x24]      ; 0040948b
    PUSH EDI                            ; 0040948e
    CALL core_actor.cpp_FUN_00408100    ; 0040948f
        ;   XREF to: 00408100 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408100()
    JMP 0x00409398                      ; 00409494
        ;   XREF to: 00409398 (UNCONDITIONAL_JUMP)  ; LAB_00409398
    PUSH EBX                            ; 00409499
        ;   Label: LAB_00409499
    LEA EAX,[ESP + 0xf8]                ; 0040949a
    PUSH EAX                            ; 004094a1
    LEA EAX,[ESP + 0xc0]                ; 004094a2
    MOV EDX,dword ptr [EBP + 0x14]      ; 004094a9
    PUSH EAX                            ; 004094ac
    MOV ECX,dword ptr [EBP + 0x14]      ; 004094ad
    MOV EDX,dword ptr [EDX + 0x154]     ; 004094b0
    PUSH ECX                            ; 004094b6
    CALL dword ptr [EDX + 0xb8]         ; 004094b7
    MOV dword ptr [ESP + 0x12c],EAX     ; 004094bd
    FLD float ptr [ESP + 0x12c]         ; 004094c4
    ADD ESP,0x10                        ; 004094cb
    PUSH EBX                            ; 004094ce
    MOV ESI,dword ptr [EBP + 0x14]      ; 004094cf
    LEA EDI,[ESP + 0xc8]                ; 004094d2
    PUSH ESI                            ; 004094d9
    LEA ESI,[ESP + 0x108]               ; 004094da
    FSTP float ptr [ESP + 0x20]         ; 004094e1
    CALL core_actor.cpp_FUN_00408b40    ; 004094e5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x108]               ; 004094ea
    LEA EAX,[ESP + 0xcc]                ; 004094f1
    ADD ESP,0x8                         ; 004094f8
    LEA EDX,[ESP + 0xe8]                ; 004094fb
    MOVSD ES:EDI,ESI                    ; 00409502
    MOVSD ES:EDI,ESI                    ; 00409503
    MOVSD ES:EDI,ESI                    ; 00409504
    CMP EDX,EAX                         ; 00409505
    JZ 0x004093ad                       ; 00409507
        ;   XREF to: 004093ad (CONDITIONAL_JUMP)  ; LAB_004093ad
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0040950d
    MOV dword ptr [ESP + 0xe8],EAX      ; 00409514
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0040951b
    MOV dword ptr [ESP + 0xec],EAX      ; 00409522
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00409529
    MOV dword ptr [ESP + 0xf0],EAX      ; 00409530
    JMP 0x004093ad                      ; 00409537
        ;   XREF to: 004093ad (UNCONDITIONAL_JUMP)  ; LAB_004093ad
    JBE 0x00409473                      ; 0040953c
        ;   XREF to: 00409473 (CONDITIONAL_JUMP)  ; LAB_00409473
        ;   Label: LAB_0040953c
    CMP EDI,0x3                         ; 00409542
    JZ 0x00409499                       ; 00409545
        ;   XREF to: 00409499 (CONDITIONAL_JUMP)  ; LAB_00409499
    MOV EDX,0x5b5558                    ; 0040954b | = "..\\core\\actor.cpp"
        ;   Label: LAB_0040954b
    MOV ECX,0x4ac                       ; 00409550
    PUSH 0x5b556a                       ; 00409555 | = "CDemonActor::rayIntersect - Invalid c..."
    MOV dword ptr [0x01d71de0],EDX      ; 0040955a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00409560 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00409566
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0040956b
    JMP 0x004093ad                      ; 0040956e
        ;   XREF to: 004093ad (UNCONDITIONAL_JUMP)  ; LAB_004093ad
    MOV EAX,dword ptr [EBP + 0x24]      ; 00409573
        ;   Label: LAB_00409573
    MOV EDI,dword ptr [EAX + 0x20]      ; 00409576
    TEST EDI,EDI                        ; 00409579
    JNZ 0x004095f3                      ; 0040957b
        ;   XREF to: 004095f3 (CONDITIONAL_JUMP)  ; LAB_004095f3
    CMP dword ptr [EAX + 0x24],0x0      ; 0040957d
    JZ 0x004093e8                       ; 00409581
        ;   XREF to: 004093e8 (CONDITIONAL_JUMP)  ; LAB_004093e8
    LEA EAX,[ESP + 0xe8]                ; 00409587
    PUSH EAX                            ; 0040958e
    LEA EAX,[ESP + 0xf8]                ; 0040958f
    PUSH EAX                            ; 00409596
    LEA EAX,[ESP + 0xc0]                ; 00409597
    PUSH EAX                            ; 0040959e
    MOV EAX,dword ptr [EBP + 0x24]      ; 0040959f
    PUSH EDI                            ; 004095a2
    MOV ECX,dword ptr [EAX + 0x24]      ; 004095a3
    PUSH ECX                            ; 004095a6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004095a7
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004095ac
    PUSH EAX                            ; 004095af
    CALL core_dmodel.cpp_FUN_004618a0   ; 004095b0
        ;   XREF to: 004618a0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_004618a0()
    MOV dword ptr [ESP + 0x130],EAX     ; 004095b5
    FLD float ptr [ESP + 0x130]         ; 004095bc
    ADD ESP,0x14                        ; 004095c3
    FLDZ                                ; 004095c6
    FXCH                                ; 004095c8
    FST float ptr [ESP + 0x18]          ; 004095ca
    FSTP double ptr [ESP + 0x8]         ; 004095ce
    FCOMP double ptr [ESP + 0x8]        ; 004095d2
    FNSTSW AX                           ; 004095d6
    SAHF                                ; 004095d8
    JA 0x004091c9                       ; 004095d9
        ;   XREF to: 004091c9 (CONDITIONAL_JUMP)  ; LAB_004091c9
    FLD1                                ; 004095df
    FCOMP double ptr [ESP + 0x8]        ; 004095e1
    FNSTSW AX                           ; 004095e5
    SAHF                                ; 004095e7
    JNC 0x004093e8                      ; 004095e8
        ;   XREF to: 004093e8 (CONDITIONAL_JUMP)  ; LAB_004093e8
    JMP 0x004091c9                      ; 004095ee
        ;   XREF to: 004091c9 (UNCONDITIONAL_JUMP)  ; LAB_004091c9
    LEA EAX,[ESP + 0xf4]                ; 004095f3
        ;   Label: LAB_004095f3
    PUSH EAX                            ; 004095fa
    LEA EAX,[ESP + 0xbc]                ; 004095fb
    PUSH EAX                            ; 00409602
    MOV EAX,dword ptr [EBP + 0x24]      ; 00409603
    MOV EDI,dword ptr [EAX + 0x20]      ; 00409606
    PUSH EDI                            ; 00409609
    CALL core_skeleton.cpp_FUN_0054f400 ; 0040960a
        ;   XREF to: 0054f400 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054f400()
    MOV dword ptr [ESP + 0x128],EAX     ; 0040960f
    FLD float ptr [ESP + 0x128]         ; 00409616
    ADD ESP,0xc                         ; 0040961d
    FLDZ                                ; 00409620
    FXCH                                ; 00409622
    FST float ptr [ESP + 0x18]          ; 00409624
    FSTP double ptr [ESP]               ; 00409628
    FCOMP double ptr [ESP]              ; 0040962b
    FNSTSW AX                           ; 0040962e
    SAHF                                ; 00409630
    JA 0x004091c9                       ; 00409631
        ;   XREF to: 004091c9 (CONDITIONAL_JUMP)  ; LAB_004091c9
    FLD1                                ; 00409637
    FCOMP double ptr [ESP]              ; 00409639
    FNSTSW AX                           ; 0040963c
    SAHF                                ; 0040963e
    JC 0x004091c9                       ; 0040963f
        ;   XREF to: 004091c9 (CONDITIONAL_JUMP)  ; LAB_004091c9
    MOV EAX,[0x0272af44]                ; 00409645 | DAT_0272af44
    MOV dword ptr [EBX + 0xc],EAX       ; 0040964a
    MOV EAX,[0x0272af54]                ; 0040964d | DAT_0272af54
    MOV dword ptr [EBX + 0x10],EAX      ; 00409652
    MOV EAX,[0x0272af58]                ; 00409655 | DAT_0272af58
    MOV EDX,dword ptr [0x0272af54]      ; 0040965a | DAT_0272af54
    PUSH EAX                            ; 00409660
    MOV dword ptr [EBX + 0x14],EAX      ; 00409661
    MOV EAX,dword ptr [EBP + 0x24]      ; 00409664
    PUSH EDX                            ; 00409667
    MOV ECX,dword ptr [EAX + 0x20]      ; 00409668
    PUSH ECX                            ; 0040966b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0040966c
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00409671
    PUSH EAX                            ; 00409674
    CALL core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_0054bde0 ; 00409675
        ;   XREF to: 0054bde0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_0054bde0(CDeformableModel * this_ptr, int lod_level, int triangle_index)
    MOV dword ptr [EBX + 0x18],EAX      ; 0040967a
    LEA EAX,[ESP + 0xf4]                ; 0040967d
    ADD ESP,0xc                         ; 00409684
    CMP EAX,0x272af48                   ; 00409687
    JZ 0x004093e8                       ; 0040968c
        ;   XREF to: 004093e8 (CONDITIONAL_JUMP)  ; LAB_004093e8
    MOV EAX,[0x0272af48]                ; 00409692 | DAT_0272af48
    MOV dword ptr [ESP + 0xe8],EAX      ; 00409697
    MOV EAX,[0x0272af4c]                ; 0040969e | DAT_0272af4c
    MOV dword ptr [ESP + 0xec],EAX      ; 004096a3
    MOV EAX,[0x0272af50]                ; 004096aa | DAT_0272af50
    MOV dword ptr [ESP + 0xf0],EAX      ; 004096af
    JMP 0x004093e8                      ; 004096b6
        ;   XREF to: 004093e8 (UNCONDITIONAL_JUMP)  ; LAB_004093e8

