; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_FUN_00409170(int param_1,CBoundingBox3D *param_2,float *param_3,float *param_4,int param_5,uint param_6,CBoundingBox3D *param_7)
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
;   core_setcolid.cpp_FUN_005578b0 at 00557ba7
;   core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_00583700 at 00583b70
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005d2520
;   TerminatedCString s_CDemonActor_rayIntersect_005d2532
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 g_CDemonSetInstance.skip_exact_collisions
;   undefined4 DAT_026b82a4
;   undefined4 DAT_026b82a8
;   undefined4 DAT_026b82ac
;   undefined4 DAT_026b82b0
;   undefined4 DAT_026b82b4
;   undefined4 DAT_026b82b8
;
; Called Functions:
;   core_actor.cpp_FUN_004080c0
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_FUN_00408ec0
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420500
;   core_box.cpp_FUN_00420ee0
;   core_box.cpp_FUN_004215d0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_FUN_00467c00
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_00567250
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_0056a870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409170
        ;   Label: core_actor.cpp_FUN_00409170
    PUSH ESI                            ; 00409171
    PUSH EDI                            ; 00409172
    PUSH EBP                            ; 00409173
    MOV EBP,ESP                         ; 00409174
    SUB ESP,0x120                       ; 00409176
    AND ESP,0xfffffff8                  ; 0040917c
    MOV EBX,dword ptr [EBP + 0x20]      ; 0040917f
    MOV EDX,dword ptr [EBP + 0x28]      ; 00409182
    TEST EDX,EDX                        ; 00409185
    JNZ 0x004091a2                      ; 00409187
        ;   XREF to: 004091a2 (CONDITIONAL_JUMP)  ; LAB_004091a2
    MOV dword ptr [ESP + 0x118],0x40000000 ; 00409189
        ;   Label: LAB_00409189
    MOV EAX,dword ptr [ESP + 0x118]     ; 00409194
    MOV ESP,EBP                         ; 0040919b
    POP EBP                             ; 0040919d
    POP EDI                             ; 0040919e
    POP ESI                             ; 0040919f
    POP EBX                             ; 004091a0
    RET                                 ; 004091a1
    PUSH EDX                            ; 004091a2
        ;   Label: LAB_004091a2
    MOV ESI,dword ptr [EBP + 0x24]      ; 004091a3
    PUSH ESI                            ; 004091a6
    MOV EDI,dword ptr [EBP + 0x14]      ; 004091a7
    PUSH EDI                            ; 004091aa
    LEA ESI,[ESP + 0x28]                ; 004091ab
    CALL core_actor.cpp_FUN_00408ec0    ; 004091af
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ec0()
    MOV ECX,0x6                         ; 004091b4
    LEA EDI,[ESP + 0x40]                ; 004091b9
    ADD ESP,0xc                         ; 004091bd
    LEA ESI,[ESP + 0x1c]                ; 004091c0
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004091c4
    MOVSD.REP ES:EDI,ESI                ; 004091c7
    TEST EAX,EAX                        ; 004091c9
    JNZ 0x00409415                      ; 004091cb
        ;   XREF to: 00409415 (CONDITIONAL_JUMP)  ; LAB_00409415
    LEA EAX,[ESP + 0x4c]                ; 004091d1
    MOV EDX,dword ptr [EBP + 0x18]      ; 004091d5
    CMP EAX,EDX                         ; 004091d8
    JZ 0x004091f0                       ; 004091da
        ;   XREF to: 004091f0 (CONDITIONAL_JUMP)  ; LAB_004091f0
    MOV EAX,dword ptr [EDX]             ; 004091dc
    MOV dword ptr [ESP + 0x4c],EAX      ; 004091de
    MOV EAX,dword ptr [EDX + 0x4]       ; 004091e2
    MOV dword ptr [ESP + 0x50],EAX      ; 004091e5
    MOV EAX,dword ptr [EDX + 0x8]       ; 004091e9
    MOV dword ptr [ESP + 0x54],EAX      ; 004091ec
    LEA EAX,[ESP + 0x58]                ; 004091f0
        ;   Label: LAB_004091f0
    CMP EAX,EDX                         ; 004091f4
    JZ 0x0040920c                       ; 004091f6
        ;   XREF to: 0040920c (CONDITIONAL_JUMP)  ; LAB_0040920c
    MOV EAX,dword ptr [EDX]             ; 004091f8
    MOV dword ptr [ESP + 0x58],EAX      ; 004091fa
    MOV EAX,dword ptr [EDX + 0x4]       ; 004091fe
    MOV dword ptr [ESP + 0x5c],EAX      ; 00409201
    MOV EAX,dword ptr [EDX + 0x8]       ; 00409205
    MOV dword ptr [ESP + 0x60],EAX      ; 00409208
    MOV EAX,dword ptr [EBP + 0x18]      ; 0040920c
        ;   Label: LAB_0040920c
    FLD float ptr [EAX]                 ; 0040920f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00409211
    FADD float ptr [EAX]                ; 00409214
    MOV EAX,dword ptr [EBP + 0x18]      ; 00409216
    FLD float ptr [EAX + 0x4]           ; 00409219
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0040921c
    FADD float ptr [EAX + 0x4]          ; 0040921f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00409222
    LEA EDI,[ESP + 0x10c]               ; 00409225
    LEA ESI,[ESP + 0x94]                ; 0040922c
    FLD float ptr [EAX + 0x8]           ; 00409233
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00409236
    FXCH ST2                            ; 00409239
    FSTP float ptr [ESP + 0x94]         ; 0040923b
    FXCH                                ; 00409242
    FADD float ptr [EAX + 0x8]          ; 00409244
    LEA EAX,[ESP + 0x10c]               ; 00409247
    FXCH                                ; 0040924e
    FSTP float ptr [ESP + 0x98]         ; 00409250
    PUSH EAX                            ; 00409257
    LEA EAX,[ESP + 0x50]                ; 00409258
    FSTP float ptr [ESP + 0xa0]         ; 0040925c
    PUSH EAX                            ; 00409263
    MOVSD ES:EDI,ESI                    ; 00409264
    MOVSD ES:EDI,ESI                    ; 00409265
    MOVSD ES:EDI,ESI                    ; 00409266
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 00409267
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0040926c
    LEA EAX,[ESP + 0x34]                ; 0040926f
    PUSH EAX                            ; 00409273
    LEA EAX,[ESP + 0x50]                ; 00409274
    PUSH EAX                            ; 00409278
    CALL core_box.cpp_FUN_004215d0      ; 00409279
        ;   XREF to: 004215d0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_FUN_004215d0(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 0040927e
    TEST EAX,EAX                        ; 00409281
    JZ 0x00409189                       ; 00409283
        ;   XREF to: 00409189 (CONDITIONAL_JUMP)  ; LAB_00409189
    MOV EAX,dword ptr [EBP + 0x18]      ; 00409289
        ;   Label: LAB_00409289
    PUSH EAX                            ; 0040928c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0040928d
    PUSH EDX                            ; 00409290
    LEA ESI,[ESP + 0xe4]                ; 00409291
    LEA EDI,[ESP + 0xc0]                ; 00409298
    CALL core_actor.cpp_FUN_00408bb0    ; 0040929f
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    ADD ESP,0x8                         ; 004092a4
    LEA ESI,[ESP + 0xdc]                ; 004092a7
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004092ae
    MOVSD ES:EDI,ESI                    ; 004092b1
    MOVSD ES:EDI,ESI                    ; 004092b2
    MOVSD ES:EDI,ESI                    ; 004092b3
    PUSH ECX                            ; 004092b4
    MOV ESI,dword ptr [EBP + 0x14]      ; 004092b5
    PUSH ESI                            ; 004092b8
    LEA ESI,[ESP + 0xd8]                ; 004092b9
    LEA EDI,[ESP + 0xfc]                ; 004092c0
    CALL core_actor.cpp_FUN_00408b00    ; 004092c7
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0xd8]                ; 004092cc
    ADD ESP,0x8                         ; 004092d3
    MOVSD ES:EDI,ESI                    ; 004092d6
    MOVSD ES:EDI,ESI                    ; 004092d7
    MOVSD ES:EDI,ESI                    ; 004092d8
    MOV dword ptr [EBX + 0xc],0xffffffff ; 004092d9
    MOV dword ptr [EBX + 0x10],0xffffffff ; 004092e0
    MOV dword ptr [EBX + 0x14],0xffffffff ; 004092e7
    MOV EDI,dword ptr [EBP + 0x28]      ; 004092ee
    MOV dword ptr [EBX + 0x18],0xffffffff ; 004092f1
    CMP EDI,0x2                         ; 004092f8
    JNC 0x004094fc                      ; 004092fb
        ;   XREF to: 004094fc (CONDITIONAL_JUMP)  ; LAB_004094fc
    CMP EDI,0x1                         ; 00409301
    JNZ 0x0040950b                      ; 00409304
        ;   XREF to: 0040950b (CONDITIONAL_JUMP)  ; LAB_0040950b
    LEA EAX,[ESP + 0xe8]                ; 0040930a
    PUSH EAX                            ; 00409311
    LEA EAX,[ESP + 0xf8]                ; 00409312
    PUSH EAX                            ; 00409319
    LEA EAX,[ESP + 0xc0]                ; 0040931a
    PUSH EAX                            ; 00409321
    MOV ESI,dword ptr [EBP + 0x14]      ; 00409322
    MOV EAX,dword ptr [EBP + 0x14]      ; 00409325
    PUSH ESI                            ; 00409328
    MOV EAX,dword ptr [EAX + 0x154]     ; 00409329
    LEA ESI,[ESP + 0x8c]                ; 0040932f
    LEA EDI,[ESP + 0x74]                ; 00409336
    CALL dword ptr [EAX + 0x1c]         ; 0040933a
    MOV ECX,0x6                         ; 0040933d
    ADD ESP,0x4                         ; 00409342
    LEA EAX,[ESP + 0x70]                ; 00409345
    LEA ESI,[ESP + 0x88]                ; 00409349
    PUSH EAX                            ; 00409350
    MOVSD.REP ES:EDI,ESI                ; 00409351
    CALL core_box.cpp_FUN_00420ee0      ; 00409353
        ;   XREF to: 00420ee0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420ee0()
    MOV dword ptr [ESP + 0x12c],EAX     ; 00409358
        ;   Label: LAB_00409358
    FLD float ptr [ESP + 0x12c]         ; 0040935f
    ADD ESP,0x10                        ; 00409366
    FSTP float ptr [ESP + 0x18]         ; 00409369
    FLD float ptr [ESP + 0x18]          ; 0040936d
        ;   Label: LAB_0040936d
    FLDZ                                ; 00409371
    FXCH                                ; 00409373
    FSTP double ptr [ESP + 0x10]        ; 00409375
    FCOMP double ptr [ESP + 0x10]       ; 00409379
    FNSTSW AX                           ; 0040937d
    SAHF                                ; 0040937f
    JA 0x00409189                       ; 00409380
        ;   XREF to: 00409189 (CONDITIONAL_JUMP)  ; LAB_00409189
    FLD1                                ; 00409386
    FCOMP double ptr [ESP + 0x10]       ; 00409388
    FNSTSW AX                           ; 0040938c
    SAHF                                ; 0040938e
    JC 0x00409189                       ; 0040938f
        ;   XREF to: 00409189 (CONDITIONAL_JUMP)  ; LAB_00409189
    MOV EAX,[0x00622c18]                ; 00409395 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15f6f4]  ; 0040939a | g_CDemonSetInstance.skip_exact_collisions
    TEST EAX,EAX                        ; 004093a0
    JZ 0x00409533                       ; 004093a2
        ;   XREF to: 00409533 (CONDITIONAL_JUMP)  ; LAB_00409533
    LEA EAX,[ESP + 0xe8]                ; 004093a8
        ;   Label: LAB_004093a8
    PUSH EAX                            ; 004093af
    MOV EDI,dword ptr [EBP + 0x14]      ; 004093b0
    PUSH EDI                            ; 004093b3
    LEA ESI,[ESP + 0xb4]                ; 004093b4
    CALL core_actor.cpp_FUN_00408ac0    ; 004093bb
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA EDI,[ESP + 0xa8]                ; 004093c0
    LEA ESI,[ESP + 0xb4]                ; 004093c7
    ADD ESP,0x8                         ; 004093ce
    LEA EAX,[ESP + 0xa0]                ; 004093d1
    MOVSD ES:EDI,ESI                    ; 004093d8
    MOVSD ES:EDI,ESI                    ; 004093d9
    MOVSD ES:EDI,ESI                    ; 004093da
    CMP EBX,EAX                         ; 004093db
    JZ 0x004093fc                       ; 004093dd
        ;   XREF to: 004093fc (CONDITIONAL_JUMP)  ; LAB_004093fc
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004093df
    MOV dword ptr [EBX],EAX             ; 004093e6
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004093e8
    MOV dword ptr [EBX + 0x4],EAX       ; 004093ef
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004093f2
    MOV dword ptr [EBX + 0x8],EAX       ; 004093f9
    MOV EAX,dword ptr [ESP + 0x18]      ; 004093fc
        ;   Label: LAB_004093fc
    MOV dword ptr [ESP + 0x118],EAX     ; 00409400
    MOV EAX,dword ptr [ESP + 0x118]     ; 00409407
    MOV ESP,EBP                         ; 0040940e
    POP EBP                             ; 00409410
    POP EDI                             ; 00409411
    POP ESI                             ; 00409412
    POP EBX                             ; 00409413
    RET                                 ; 00409414
    LEA EAX,[ESP + 0x34]                ; 00409415
        ;   Label: LAB_00409415
    PUSH EAX                            ; 00409419
    MOV ESI,dword ptr [EBP + 0x2c]      ; 0040941a
    PUSH ESI                            ; 0040941d
    CALL core_box.cpp_FUN_004215d0      ; 0040941e
        ;   XREF to: 004215d0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_FUN_004215d0(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 00409423
    TEST EAX,EAX                        ; 00409426
    JNZ 0x00409289                      ; 00409428
        ;   XREF to: 00409289 (CONDITIONAL_JUMP)  ; LAB_00409289
    JMP 0x00409189                      ; 0040942e
        ;   XREF to: 00409189 (UNCONDITIONAL_JUMP)  ; LAB_00409189
    LEA EAX,[ESP + 0xe8]                ; 00409433
        ;   Label: LAB_00409433
    PUSH EAX                            ; 0040943a
    LEA EAX,[ESP + 0xf8]                ; 0040943b
    PUSH EAX                            ; 00409442
    LEA EAX,[ESP + 0xc0]                ; 00409443
    PUSH EAX                            ; 0040944a
    MOV EDI,dword ptr [EBP + 0x24]      ; 0040944b
    PUSH EDI                            ; 0040944e
    CALL core_actor.cpp_FUN_004080c0    ; 0040944f
        ;   XREF to: 004080c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004080c0()
    JMP 0x00409358                      ; 00409454
        ;   XREF to: 00409358 (UNCONDITIONAL_JUMP)  ; LAB_00409358
    PUSH EBX                            ; 00409459
        ;   Label: LAB_00409459
    LEA EAX,[ESP + 0xf8]                ; 0040945a
    PUSH EAX                            ; 00409461
    LEA EAX,[ESP + 0xc0]                ; 00409462
    MOV EDX,dword ptr [EBP + 0x14]      ; 00409469
    PUSH EAX                            ; 0040946c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0040946d
    MOV EDX,dword ptr [EDX + 0x154]     ; 00409470
    PUSH ECX                            ; 00409476
    CALL dword ptr [EDX + 0xb8]         ; 00409477
    MOV dword ptr [ESP + 0x12c],EAX     ; 0040947d
    FLD float ptr [ESP + 0x12c]         ; 00409484
    ADD ESP,0x10                        ; 0040948b
    PUSH EBX                            ; 0040948e
    MOV ESI,dword ptr [EBP + 0x14]      ; 0040948f
    LEA EDI,[ESP + 0xc8]                ; 00409492
    PUSH ESI                            ; 00409499
    LEA ESI,[ESP + 0x108]               ; 0040949a
    FSTP float ptr [ESP + 0x20]         ; 004094a1
    CALL core_actor.cpp_FUN_00408b00    ; 004094a5
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x108]               ; 004094aa
    LEA EAX,[ESP + 0xcc]                ; 004094b1
    ADD ESP,0x8                         ; 004094b8
    LEA EDX,[ESP + 0xe8]                ; 004094bb
    MOVSD ES:EDI,ESI                    ; 004094c2
    MOVSD ES:EDI,ESI                    ; 004094c3
    MOVSD ES:EDI,ESI                    ; 004094c4
    CMP EDX,EAX                         ; 004094c5
    JZ 0x0040936d                       ; 004094c7
        ;   XREF to: 0040936d (CONDITIONAL_JUMP)  ; LAB_0040936d
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004094cd
    MOV dword ptr [ESP + 0xe8],EAX      ; 004094d4
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004094db
    MOV dword ptr [ESP + 0xec],EAX      ; 004094e2
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004094e9
    MOV dword ptr [ESP + 0xf0],EAX      ; 004094f0
    JMP 0x0040936d                      ; 004094f7
        ;   XREF to: 0040936d (UNCONDITIONAL_JUMP)  ; LAB_0040936d
    JBE 0x00409433                      ; 004094fc
        ;   XREF to: 00409433 (CONDITIONAL_JUMP)  ; LAB_00409433
        ;   Label: LAB_004094fc
    CMP EDI,0x3                         ; 00409502
    JZ 0x00409459                       ; 00409505
        ;   XREF to: 00409459 (CONDITIONAL_JUMP)  ; LAB_00409459
    MOV EDX,0x5d2520                    ; 0040950b | = "..\\core\\actor.cpp"
        ;   Label: LAB_0040950b
    MOV ECX,0x4ac                       ; 00409510
    PUSH 0x5d2532                       ; 00409515 | = "CDemonActor::rayIntersect - Invalid c..."
    MOV dword ptr [0x01d1d400],EDX      ; 0040951a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00409520 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00409526
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0040952b
    JMP 0x0040936d                      ; 0040952e
        ;   XREF to: 0040936d (UNCONDITIONAL_JUMP)  ; LAB_0040936d
    MOV EAX,dword ptr [EBP + 0x24]      ; 00409533
        ;   Label: LAB_00409533
    MOV EDI,dword ptr [EAX + 0x20]      ; 00409536
    TEST EDI,EDI                        ; 00409539
    JNZ 0x004095b3                      ; 0040953b
        ;   XREF to: 004095b3 (CONDITIONAL_JUMP)  ; LAB_004095b3
    CMP dword ptr [EAX + 0x24],0x0      ; 0040953d
    JZ 0x004093a8                       ; 00409541
        ;   XREF to: 004093a8 (CONDITIONAL_JUMP)  ; LAB_004093a8
    LEA EAX,[ESP + 0xe8]                ; 00409547
    PUSH EAX                            ; 0040954e
    LEA EAX,[ESP + 0xf8]                ; 0040954f
    PUSH EAX                            ; 00409556
    LEA EAX,[ESP + 0xc0]                ; 00409557
    PUSH EAX                            ; 0040955e
    MOV EAX,dword ptr [EBP + 0x24]      ; 0040955f
    PUSH EDI                            ; 00409562
    MOV ECX,dword ptr [EAX + 0x24]      ; 00409563
    PUSH ECX                            ; 00409566
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00409567
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040956c
    PUSH EAX                            ; 0040956f
    CALL core_dmodel.cpp_FUN_00467c00   ; 00409570
        ;   XREF to: 00467c00 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00467c00()
    MOV dword ptr [ESP + 0x130],EAX     ; 00409575
    FLD float ptr [ESP + 0x130]         ; 0040957c
    ADD ESP,0x14                        ; 00409583
    FLDZ                                ; 00409586
    FXCH                                ; 00409588
    FST float ptr [ESP + 0x18]          ; 0040958a
    FSTP double ptr [ESP + 0x8]         ; 0040958e
    FCOMP double ptr [ESP + 0x8]        ; 00409592
    FNSTSW AX                           ; 00409596
    SAHF                                ; 00409598
    JA 0x00409189                       ; 00409599
        ;   XREF to: 00409189 (CONDITIONAL_JUMP)  ; LAB_00409189
    FLD1                                ; 0040959f
    FCOMP double ptr [ESP + 0x8]        ; 004095a1
    FNSTSW AX                           ; 004095a5
    SAHF                                ; 004095a7
    JNC 0x004093a8                      ; 004095a8
        ;   XREF to: 004093a8 (CONDITIONAL_JUMP)  ; LAB_004093a8
    JMP 0x00409189                      ; 004095ae
        ;   XREF to: 00409189 (UNCONDITIONAL_JUMP)  ; LAB_00409189
    LEA EAX,[ESP + 0xf4]                ; 004095b3
        ;   Label: LAB_004095b3
    PUSH EAX                            ; 004095ba
    LEA EAX,[ESP + 0xbc]                ; 004095bb
    PUSH EAX                            ; 004095c2
    MOV EAX,dword ptr [EBP + 0x24]      ; 004095c3
    MOV EDI,dword ptr [EAX + 0x20]      ; 004095c6
    PUSH EDI                            ; 004095c9
    CALL core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_0056a870 ; 004095ca
        ;   XREF to: 0056a870 (UNCONDITIONAL_CALL)  ; float core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_0056a870(CDeformableModelInstance * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
    MOV dword ptr [ESP + 0x128],EAX     ; 004095cf
    FLD float ptr [ESP + 0x128]         ; 004095d6
    ADD ESP,0xc                         ; 004095dd
    FLDZ                                ; 004095e0
    FXCH                                ; 004095e2
    FST float ptr [ESP + 0x18]          ; 004095e4
    FSTP double ptr [ESP]               ; 004095e8
    FCOMP double ptr [ESP]              ; 004095eb
    FNSTSW AX                           ; 004095ee
    SAHF                                ; 004095f0
    JA 0x00409189                       ; 004095f1
        ;   XREF to: 00409189 (CONDITIONAL_JUMP)  ; LAB_00409189
    FLD1                                ; 004095f7
    FCOMP double ptr [ESP]              ; 004095f9
    FNSTSW AX                           ; 004095fc
    SAHF                                ; 004095fe
    JC 0x00409189                       ; 004095ff
        ;   XREF to: 00409189 (CONDITIONAL_JUMP)  ; LAB_00409189
    MOV EAX,[0x026b82a4]                ; 00409605 | DAT_026b82a4
    MOV dword ptr [EBX + 0xc],EAX       ; 0040960a
    MOV EAX,[0x026b82b4]                ; 0040960d | DAT_026b82b4
    MOV dword ptr [EBX + 0x10],EAX      ; 00409612
    MOV EAX,[0x026b82b8]                ; 00409615 | DAT_026b82b8
    MOV EDX,dword ptr [0x026b82b4]      ; 0040961a | DAT_026b82b4
    PUSH EAX                            ; 00409620
    MOV dword ptr [EBX + 0x14],EAX      ; 00409621
    MOV EAX,dword ptr [EBP + 0x24]      ; 00409624
    PUSH EDX                            ; 00409627
    MOV ECX,dword ptr [EAX + 0x20]      ; 00409628
    PUSH ECX                            ; 0040962b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0040962c
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00409631
    PUSH EAX                            ; 00409634
    CALL core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_00567250 ; 00409635
        ;   XREF to: 00567250 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_00567250(CDeformableModel * this_ptr, int lod_level, int triangle_index)
    MOV dword ptr [EBX + 0x18],EAX      ; 0040963a
    LEA EAX,[ESP + 0xf4]                ; 0040963d
    ADD ESP,0xc                         ; 00409644
    CMP EAX,0x26b82a8                   ; 00409647
    JZ 0x004093a8                       ; 0040964c
        ;   XREF to: 004093a8 (CONDITIONAL_JUMP)  ; LAB_004093a8
    MOV EAX,[0x026b82a8]                ; 00409652 | DAT_026b82a8
    MOV dword ptr [ESP + 0xe8],EAX      ; 00409657
    MOV EAX,[0x026b82ac]                ; 0040965e | DAT_026b82ac
    MOV dword ptr [ESP + 0xec],EAX      ; 00409663
    MOV EAX,[0x026b82b0]                ; 0040966a | DAT_026b82b0
    MOV dword ptr [ESP + 0xf0],EAX      ; 0040966f
    JMP 0x004093a8                      ; 00409676
        ;   XREF to: 004093a8 (UNCONDITIONAL_JUMP)  ; LAB_004093a8

