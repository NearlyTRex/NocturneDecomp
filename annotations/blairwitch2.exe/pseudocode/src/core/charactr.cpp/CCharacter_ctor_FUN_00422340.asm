; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCharacter * core_charactr_cpp_CCharacter_ctor_FUN_00422340(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0 at 00487dbb
;   core_hero.cpp_FUN_004ce240 at 004ce246
;   core_npc.cpp_CNPC_ctor_FUN_00510460 at 00510469
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   WatcomTypeInfo g_CFlameTypeInfo
;   undefined4 DAT_005f4088
;   CCharacter_full_vtable g_CCharacterVTable
;   WatcomTypeInfo g_SFireTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_cloth.cpp_CClothList_ctor_FUN_005b1440
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0
;   crt_memory.c___arrinit_FUN_005b7f5f
;   engine_special.cpp_bindDllFunction_FUN_0059df80
;   unkaddr_0059d350.cpp_FUN_0059ded0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422340
        ;   Label: core_charactr.cpp_CCharacter_ctor_FUN_00422340
    PUSH ESI                            ; 00422341
    PUSH EDI                            ; 00422342
    PUSH EBP                            ; 00422343
    SUB ESP,0x84                        ; 00422344
    MOV EBX,dword ptr [ESP + 0x98]      ; 0042234a
    PUSH EBX                            ; 00422351
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 00422352
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00422357
    ADD EAX,0x2b4                       ; 0042235a
    PUSH EAX                            ; 0042235f
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0 ; 00422360
        ;   XREF to: 00544cd0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00422365
    ADD EAX,0x2a58                      ; 00422368
    PUSH EAX                            ; 0042236d
    CALL core_cloth.cpp_CClothList_ctor_FUN_005b1440 ; 0042236e
        ;   XREF to: 005b1440 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_ctor_FUN_005b1440(CClothList * this_ptr)
    ADD ESP,0x4                         ; 00422373
    PUSH 0x5f22b0                       ; 00422376 | g_CVectorTypeInfo
    PUSH 0xf                            ; 0042237b
    ADD EAX,0x1c8                       ; 0042237d
    PUSH EAX                            ; 00422382
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00422383
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 00422388
    PUSH 0x5f22b0                       ; 0042238b | g_CVectorTypeInfo
    PUSH 0xf                            ; 00422390
    ADD EAX,0xb4                        ; 00422392
    PUSH EAX                            ; 00422397
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00422398
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 0042239d
    ADD EAX,0xd0                        ; 004223a0
    PUSH EAX                            ; 004223a5
    CALL unkaddr_0059d350.cpp_FUN_0059ded0 ; 004223a6
        ;   XREF to: 0059ded0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059ded0()
    ADD ESP,0x4                         ; 004223ab
    PUSH 0x5f41e0                       ; 004223ae | g_SFireTypeInfo
    PUSH 0x32                           ; 004223b3
    ADD EAX,0x518                       ; 004223b5
    PUSH EAX                            ; 004223ba
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004223bb
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 004223c0
    PUSH 0x5f2820                       ; 004223c3 | g_CFlameTypeInfo
    PUSH 0x32                           ; 004223c8
    ADD EAX,0x4b0                       ; 004223ca
    PUSH EAX                            ; 004223cf
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004223d0
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    LEA EBX,[EAX + 0xffffc5e0]          ; 004223d5
    MOV dword ptr [EBX + 0x2b0],0x5f4094 ; 004223db | g_CCharacterVTable
    ADD ESP,0xc                         ; 004223e5
    MOV dword ptr [EBX + 0x256c],0x1    ; 004223e8
    LEA EAX,[EBX + 0x2588]              ; 004223f2
    MOV dword ptr [EBX + 0x2568],0x0    ; 004223f8
    MOV dword ptr [EAX + 0x8],0x0       ; 00422402
    MOV EDX,dword ptr [EAX + 0x8]       ; 00422409
    MOV dword ptr [EAX + 0x4],EDX       ; 0042240c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042240f
    MOV dword ptr [EAX],EDX             ; 00422412
    MOV dword ptr [EBX + 0x25a8],0x42c80000 ; 00422414
    MOV dword ptr [EBX + 0x25ac],0x42c80000 ; 0042241e
    MOV dword ptr [EBX + 0x3430],0x3f800000 ; 00422428
    MOV dword ptr [EBX + 0x3434],0x40000000 ; 00422432
    MOV dword ptr [EBX + 0x3438],0x41a00000 ; 0042243c
    MOV dword ptr [EBX + 0x343c],0x42480000 ; 00422446
    MOV dword ptr [EBX + 0x3440],0x40000000 ; 00422450
    MOV dword ptr [EBX + 0x3444],0xc479c000 ; 0042245a
    MOV dword ptr [EBX + 0x3448],0x0    ; 00422464
    MOV dword ptr [EBX + 0x3564],0x0    ; 0042246e
    MOV dword ptr [EBX + 0x356c],0x40000000 ; 00422478
    MOV dword ptr [EBX + 0x27c4],0xffffffff ; 00422482
    MOV dword ptr [EBX + 0x27c0],0xffffffff ; 0042248c
    MOV dword ptr [EBX + 0x3050],0x0    ; 00422496
    MOV dword ptr [EBX + 0x27ac],0x0    ; 004224a0
    MOV dword ptr [EBX + 0x2774],0x0    ; 004224aa
    MOV dword ptr [EBX + 0x2778],0x40400000 ; 004224b4
    MOV dword ptr [EBX + 0x277c],0x7149f2ca ; 004224be
    MOV ESI,0x40000000                  ; 004224c8
    MOV dword ptr [EBX + 0x2780],0xbf800000 ; 004224cd
    XOR EDX,EDX                         ; 004224d7
    MOV dword ptr [EBX + 0x27b0],0x0    ; 004224d9
    LEA EAX,[ESP + 0x30]                ; 004224e3
    MOV dword ptr [ESP + 0x30],EDX      ; 004224e7
    MOV dword ptr [ESP + 0x34],EDX      ; 004224eb
    LEA EDX,[EBX + 0x27b4]              ; 004224ef
    MOV dword ptr [ESP + 0x38],ESI      ; 004224f5
    CMP EDX,EAX                         ; 004224f9
    JNZ 0x004228f3                      ; 004224fb
        ;   XREF to: 004228f3 (CONDITIONAL_JUMP)  ; LAB_004228f3
    MOV dword ptr [EBX + 0x27e4],0x0    ; 00422501
        ;   Label: LAB_00422501
    MOV dword ptr [EBX + 0x27e8],0x0    ; 0042250b
    MOV dword ptr [EBX + 0x27ec],0x0    ; 00422515
    MOV ECX,0xffffffff                  ; 0042251f
    MOV dword ptr [EBX + 0x27f0],0x0    ; 00422524
    MOV EAX,EBX                         ; 0042252e
    MOV dword ptr [EBX + 0x27e0],0xffffffff ; 00422530
    LEA EDX,[EBX + 0xf0]                ; 0042253a
    ADD EAX,0x78                        ; 00422540
        ;   Label: LAB_00422540
    MOV dword ptr [EAX + 0x25a8],0x0    ; 00422543
    MOV dword ptr [EAX + 0x25a0],ECX    ; 0042254d
    MOV dword ptr [EAX + 0x25a4],ECX    ; 00422553
    CMP EAX,EDX                         ; 00422559
    JNZ 0x00422540                      ; 0042255b
        ;   XREF to: 00422540 (CONDITIONAL_JUMP)  ; LAB_00422540
    MOV dword ptr [EBX + 0x27d4],0x0    ; 0042255d
    MOV dword ptr [EBX + 0x27d8],0x0    ; 00422567
    MOV dword ptr [EBX + 0x27dc],0x0    ; 00422571
    MOV dword ptr [EBX + 0x27cc],0x0    ; 0042257b
    MOV dword ptr [EBX + 0x27d0],0x0    ; 00422585
    MOV dword ptr [EBX + 0x280c],0x0    ; 0042258f
    MOV dword ptr [EBX + 0x10224],0x0   ; 00422599
    MOV dword ptr [EBX + 0x2810],0x0    ; 004225a3
    MOV dword ptr [EBX + 0x2814],0x0    ; 004225ad
    MOV dword ptr [EBX + 0x2818],0x0    ; 004225b7
    MOV dword ptr [EBX + 0x281c],0x0    ; 004225c1
    MOV dword ptr [EBX + 0x276c],0x0    ; 004225cb
    MOV dword ptr [EBX + 0x2770],0x0    ; 004225d5
    MOV dword ptr [EBX + 0x2820],0x0    ; 004225df
    MOV dword ptr [EBX + 0x1022c],0x0   ; 004225e9
    MOV dword ptr [EBX + 0x2824],0x3f800000 ; 004225f3
    MOV dword ptr [EBX + 0x2828],0x0    ; 004225fd
    MOV dword ptr [EBX + 0x2830],0x0    ; 00422607
    MOV dword ptr [EBX + 0x2d04],0x0    ; 00422611
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0042261b
    MOV dword ptr [EBX + 0x282c],0x1    ; 00422625
    MOV dword ptr [EBX + 0x25b0],0x0    ; 0042262f
    MOV byte ptr [EBX + 0x25b4],0x0     ; 00422639
    MOV dword ptr [EBX + 0x2ec8],0x0    ; 00422640
    MOV dword ptr [EBX + 0x2ecc],0x0    ; 0042264a
    MOV dword ptr [EBX + 0x2ed0],0x0    ; 00422654
    MOV dword ptr [EBX + 0x303c],0x0    ; 0042265e
    MOV EDI,0x461c1800                  ; 00422668
    MOV dword ptr [EBX + 0x304c],0x0    ; 0042266d
    LEA EAX,[ESP + 0x54]                ; 00422677
    MOV dword ptr [EBX + 0x2784],0x0    ; 0042267b
    LEA EDX,[EBX + 0x2788]              ; 00422685
    MOV byte ptr [EBX + 0x2708],0x0     ; 0042268b
    XOR EBP,EBP                         ; 00422692
    MOV dword ptr [ESP + 0x54],EDI      ; 00422694
    MOV dword ptr [ESP + 0x58],EBP      ; 00422698
    MOV dword ptr [ESP + 0x5c],EDI      ; 0042269c
    CMP EDX,EAX                         ; 004226a0
    JZ 0x004226b4                       ; 004226a2
        ;   XREF to: 004226b4 (CONDITIONAL_JUMP)  ; LAB_004226b4
    MOV dword ptr [EDX],EDI             ; 004226a4
    MOV EAX,dword ptr [ESP + 0x58]      ; 004226a6
    MOV dword ptr [EDX + 0x4],EAX       ; 004226aa
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004226ad
    MOV dword ptr [EDX + 0x8],EAX       ; 004226b1
    MOV EDX,0x45f2d000                  ; 004226b4
        ;   Label: LAB_004226b4
    LEA EAX,[ESP + 0x18]                ; 004226b9
    XOR ECX,ECX                         ; 004226bd
    MOV dword ptr [ESP + 0x20],EDX      ; 004226bf
    MOV dword ptr [ESP + 0x18],EDX      ; 004226c3
    LEA EDX,[EBX + 0x2794]              ; 004226c7
    MOV dword ptr [ESP + 0x1c],ECX      ; 004226cd
    CMP EDX,EAX                         ; 004226d1
    JZ 0x004226e9                       ; 004226d3
        ;   XREF to: 004226e9 (CONDITIONAL_JUMP)  ; LAB_004226e9
    MOV dword ptr [EDX],0x45f2d000      ; 004226d5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004226db
    MOV dword ptr [EDX + 0x4],EAX       ; 004226df
    MOV EAX,dword ptr [ESP + 0x20]      ; 004226e2
    MOV dword ptr [EDX + 0x8],EAX       ; 004226e6
    MOV EDI,0x45ad7000                  ; 004226e9
        ;   Label: LAB_004226e9
    LEA EAX,[ESP + 0x48]                ; 004226ee
    XOR EBP,EBP                         ; 004226f2
    LEA EDX,[EBX + 0x27a0]              ; 004226f4
    MOV dword ptr [ESP + 0x4c],EBP      ; 004226fa
    MOV dword ptr [ESP + 0x50],EDI      ; 004226fe
    MOV dword ptr [ESP + 0x48],EDI      ; 00422702
    CMP EDX,EAX                         ; 00422706
    JZ 0x0042271a                       ; 00422708
        ;   XREF to: 0042271a (CONDITIONAL_JUMP)  ; LAB_0042271a
    MOV dword ptr [EDX],EDI             ; 0042270a
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042270c
    MOV dword ptr [EDX + 0x4],EAX       ; 00422710
    MOV EAX,dword ptr [ESP + 0x50]      ; 00422713
    MOV dword ptr [EDX + 0x8],EAX       ; 00422717
    MOV dword ptr [EBX + 0x25a0],0x40c90fdb ; 0042271a
        ;   Label: LAB_0042271a
    MOV dword ptr [EBX + 0x259c],0x40c90fdb ; 00422724
    MOV dword ptr [EBX + 0x25a4],0x40490fdb ; 0042272e
    MOV dword ptr [EBX + 0x109c0],0x0   ; 00422738
    MOV dword ptr [EBX + 0x109c4],0x0   ; 00422742
    FLD float ptr [0x005f4088]          ; 0042274c | DAT_005f4088
    MOV dword ptr [EBX + 0x109c8],0x0   ; 00422752
    MOV ESI,0x3e75c28f                  ; 0042275c
    MOV dword ptr [EBX + 0x109d4],0x0   ; 00422761
    PUSH EBX                            ; 0042276b
    MOV dword ptr [EBX + 0x109cc],0x0   ; 0042276c
    LEA EAX,[EBX + 0x3058]              ; 00422776
    MOV dword ptr [EBX + 0x109d8],0xfffffffe ; 0042277c
    PUSH EAX                            ; 00422786
    FSTP float ptr [EBX + 0x109d0]      ; 00422787
    CALL engine_special.cpp_bindDllFunction_FUN_0059df80 ; 0042278d
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_bindDllFunction_FUN_0059df80(void * * slot, void * proc)
    MOV EDX,0xbdc6a7f0                  ; 00422792
    MOV ECX,0x3ea7ef9e                  ; 00422797
    ADD ESP,0x8                         ; 0042279c
    MOV dword ptr [EBX + 0x342c],0x0    ; 0042279f
    LEA EAX,[ESP + 0x6c]                ; 004227a9
    MOV dword ptr [ESP + 0x6c],EDX      ; 004227ad
    MOV dword ptr [ESP + 0x70],ECX      ; 004227b1
    LEA EDX,[EBX + 0x10a0c]             ; 004227b5
    MOV dword ptr [ESP + 0x74],ESI      ; 004227bb
    CMP EDX,EAX                         ; 004227bf
    JZ 0x004227d7                       ; 004227c1
        ;   XREF to: 004227d7 (CONDITIONAL_JUMP)  ; LAB_004227d7
    MOV dword ptr [EDX],0xbdc6a7f0      ; 004227c3
    MOV EAX,dword ptr [ESP + 0x70]      ; 004227c9
    MOV dword ptr [EDX + 0x4],EAX       ; 004227cd
    MOV EAX,dword ptr [ESP + 0x74]      ; 004227d0
    MOV dword ptr [EDX + 0x8],EAX       ; 004227d4
    MOV EBP,0x3ea7ef9e                  ; 004227d7
        ;   Label: LAB_004227d7
    MOV EAX,0x3e75c28f                  ; 004227dc
    MOV EDI,0x3dc6a7f0                  ; 004227e1
    LEA EDX,[EBX + 0x10a18]             ; 004227e6
    MOV dword ptr [ESP + 0x7c],EBP      ; 004227ec
    MOV dword ptr [ESP + 0x80],EAX      ; 004227f0
    LEA EAX,[ESP + 0x78]                ; 004227f7
    MOV dword ptr [ESP + 0x78],EDI      ; 004227fb
    CMP EDX,EAX                         ; 004227ff
    JZ 0x00422816                       ; 00422801
        ;   XREF to: 00422816 (CONDITIONAL_JUMP)  ; LAB_00422816
    MOV dword ptr [EDX],EDI             ; 00422803
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00422805
    MOV dword ptr [EDX + 0x4],EAX       ; 00422809
    MOV EAX,dword ptr [ESP + 0x80]      ; 0042280c
    MOV dword ptr [EDX + 0x8],EAX       ; 00422813
    LEA EDI,[ESP + 0xc]                 ; 00422816
        ;   Label: LAB_00422816
    LEA ESI,[ESP + 0x60]                ; 0042281a
    XOR EDX,EDX                         ; 0042281e
    LEA EAX,[ESP + 0xc]                 ; 00422820
    MOV dword ptr [ESP + 0x68],EDX      ; 00422824
    MOV dword ptr [ESP + 0x64],EDX      ; 00422828
    MOV dword ptr [ESP + 0x60],EDX      ; 0042282c
    LEA EDX,[EBX + 0x10a48]             ; 00422830
    MOVSD ES:EDI,ESI                    ; 00422836
    MOVSD ES:EDI,ESI                    ; 00422837
    MOVSD ES:EDI,ESI                    ; 00422838
    CMP EDX,EAX                         ; 00422839
    JZ 0x00422851                       ; 0042283b
        ;   XREF to: 00422851 (CONDITIONAL_JUMP)  ; LAB_00422851
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042283d
    MOV dword ptr [EDX],EAX             ; 00422841
    MOV EAX,dword ptr [ESP + 0x10]      ; 00422843
    MOV dword ptr [EDX + 0x4],EAX       ; 00422847
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042284a
    MOV dword ptr [EDX + 0x8],EAX       ; 0042284e
    XOR EDI,EDI                         ; 00422851
        ;   Label: LAB_00422851
    LEA ESI,[ESP + 0x24]                ; 00422853
    MOV dword ptr [ESP + 0x2c],EDI      ; 00422857
    MOV dword ptr [ESP + 0x28],EDI      ; 0042285b
    MOV dword ptr [ESP + 0x24],EDI      ; 0042285f
    LEA EDI,[ESP + 0x3c]                ; 00422863
    LEA EAX,[ESP + 0x3c]                ; 00422867
    LEA EDX,[EBX + 0x10a54]             ; 0042286b
    MOVSD ES:EDI,ESI                    ; 00422871
    MOVSD ES:EDI,ESI                    ; 00422872
    MOVSD ES:EDI,ESI                    ; 00422873
    CMP EDX,EAX                         ; 00422874
    JZ 0x0042288c                       ; 00422876
        ;   XREF to: 0042288c (CONDITIONAL_JUMP)  ; LAB_0042288c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00422878
    MOV dword ptr [EDX],EAX             ; 0042287c
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042287e
    MOV dword ptr [EDX + 0x4],EAX       ; 00422882
    MOV EAX,dword ptr [ESP + 0x44]      ; 00422885
    MOV dword ptr [EDX + 0x8],EAX       ; 00422889
    MOV dword ptr [EBX + 0x10a2c],0x0   ; 0042288c
        ;   Label: LAB_0042288c
    MOV dword ptr [EBX + 0x10a30],0x3f800000 ; 00422896
    MOV dword ptr [EBX + 0x10a34],0x3f800000 ; 004228a0
    MOV dword ptr [EBX + 0x10a38],0x0   ; 004228aa
    MOV ESI,0x3f800000                  ; 004228b4
    MOV dword ptr [EBX + 0x10a28],0x0   ; 004228b9
    XOR EDX,EDX                         ; 004228c3
    MOV EAX,ESP                         ; 004228c5
    MOV dword ptr [ESP],EDX             ; 004228c7
    MOV dword ptr [ESP + 0x4],EDX       ; 004228ca
    LEA EDX,[EBX + 0x10a3c]             ; 004228ce
    MOV dword ptr [ESP + 0x8],ESI       ; 004228d4
    CMP EDX,EAX                         ; 004228d8
    JNZ 0x0042290c                      ; 004228da
        ;   XREF to: 0042290c (CONDITIONAL_JUMP)  ; LAB_0042290c
    MOV EAX,EBX                         ; 004228dc
        ;   Label: LAB_004228dc
    MOV dword ptr [EBX + 0x10a24],0xffffffff ; 004228de
    ADD ESP,0x84                        ; 004228e8
    POP EBP                             ; 004228ee
    POP EDI                             ; 004228ef
    POP ESI                             ; 004228f0
    POP EBX                             ; 004228f1
    RET                                 ; 004228f2
    MOV dword ptr [EDX],0x0             ; 004228f3
        ;   Label: LAB_004228f3
    MOV EAX,dword ptr [ESP + 0x34]      ; 004228f9
    MOV dword ptr [EDX + 0x4],EAX       ; 004228fd
    MOV EAX,dword ptr [ESP + 0x38]      ; 00422900
    MOV dword ptr [EDX + 0x8],EAX       ; 00422904
    JMP 0x00422501                      ; 00422907
        ;   XREF to: 00422501 (UNCONDITIONAL_JUMP)  ; LAB_00422501
    MOV dword ptr [EDX],0x0             ; 0042290c
        ;   Label: LAB_0042290c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00422912
    MOV dword ptr [EDX + 0x4],EAX       ; 00422916
    MOV EAX,dword ptr [ESP + 0x8]       ; 00422919
    MOV dword ptr [EDX + 0x8],EAX       ; 0042291d
    JMP 0x004228dc                      ; 00422920
        ;   XREF to: 004228dc (UNCONDITIONAL_JUMP)  ; LAB_004228dc

