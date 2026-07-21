; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dracbrid_cpp_CDraculaBride_setup_FUN_00458730(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   string s_nbride2.dfm_0057d4b8
;   string s_nbride2x.dfm_0057d4c4
;   string s_nbride3.dfm_0057d4d1
;   string s_nbride3x.dfm_0057d4dd
;   string s_nbride4.dfm_0057d4ea
;   string s_nbride4x.dfm_0057d4f6
;   string s_nbride2x.dfm_0057d503
;   string s_nbride2.dfm_0057d510
;   string s_nbride3x.dfm_0057d51c
;   string s_nbride3.dfm_0057d529
;   string s_nbride4x.dfm_0057d535
;   string s_nbride4.dfm_0057d542
;   string s_Bip01_Head_0057d54e
;   string s_Bip01_L_Hand_0057d559
;   string s_Bip01_R_Hand_0057d566
;   ... and 24 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458730
        ;   Label: core_dracbrid.cpp_CDraculaBride_setup_FUN_00458730
    SUB ESP,0x4                         ; 00458731
    MOV EBX,dword ptr [ESP + 0xc]       ; 00458734
    PUSH EDI                            ; 00458738
    PUSH ESI                            ; 00458739
    MOV EDI,dword ptr [0x005b9354]      ; 0045873a | DAT_005b9354
    LEA EAX,[EBX + 0x23b0]              ; 00458740
    MOV EDX,dword ptr [EDI + 0x18]      ; 00458746 | DAT_01c77604
    LEA ESI,[EBX + 0x150]               ; 00458749
    TEST EDX,EDX                        ; 0045874f
    JZ 0x004589a9                       ; 00458751
        ;   XREF to: 004589a9 (CONDITIONAL_JUMP)  ; LAB_004589a9
    PUSH 0x57d503                       ; 00458757 | = "nbride2x.dfm"
    PUSH EAX                            ; 0045875c
    MOV EDI,EAX                         ; 0045875d
    CALL crt_string.c__stricmp_FUN_00564520 ; 0045875f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00458764
    TEST EAX,EAX                        ; 00458767
    JNZ 0x00458779                      ; 00458769
        ;   XREF to: 00458779 (CONDITIONAL_JUMP)  ; LAB_00458779
    PUSH 0x57d510                       ; 0045876b | = "nbride2.dfm"
    PUSH ESI                            ; 00458770
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00458771
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 00458776
    PUSH 0x57d51c                       ; 00458779 | = "nbride3x.dfm"
        ;   Label: LAB_00458779
    PUSH EDI                            ; 0045877e
    CALL crt_string.c__stricmp_FUN_00564520 ; 0045877f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00458784
    TEST EAX,EAX                        ; 00458787
    JNZ 0x0045879f                      ; 00458789
        ;   XREF to: 0045879f (CONDITIONAL_JUMP)  ; LAB_0045879f
    PUSH 0x57d529                       ; 0045878b | = "nbride3.dfm"
    LEA EAX,[EBX + 0x150]               ; 00458790
    PUSH EAX                            ; 00458796
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00458797
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 0045879c
    PUSH 0x57d535                       ; 0045879f | = "nbride4x.dfm"
        ;   Label: LAB_0045879f
    PUSH EDI                            ; 004587a4
    CALL crt_string.c__stricmp_FUN_00564520 ; 004587a5
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004587aa
    TEST EAX,EAX                        ; 004587ad
    JNZ 0x004587c5                      ; 004587af
        ;   XREF to: 004587c5 (CONDITIONAL_JUMP)  ; LAB_004587c5
    PUSH 0x57d542                       ; 004587b1 | = "nbride4.dfm"
    LEA EAX,[EBX + 0x150]               ; 004587b6
        ;   Label: LAB_004587b6
    PUSH EAX                            ; 004587bc
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004587bd
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 004587c2
    PUSH EBX                            ; 004587c5
        ;   Label: LAB_004587c5
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 004587c6
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_setup_FUN_004796b0()
    ADD ESP,0x4                         ; 004587cb
    LEA EDI,[EBX + 0x150]               ; 004587ce
    PUSH EDI                            ; 004587d4
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004587d5
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 004587da
    PUSH 0x1                            ; 004587dd
    PUSH 0x57d54e                       ; 004587df | = "Bip01 Head"
    PUSH EAX                            ; 004587e4
    MOV ESI,EAX                         ; 004587e5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004587e7
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004587ec
    PUSH 0x1                            ; 004587ef
    PUSH 0x57d559                       ; 004587f1 | = "Bip01 L Hand"
    PUSH ESI                            ; 004587f6
    MOV [0x01b4d260],EAX                ; 004587f7 | DAT_01b4d260
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004587fc
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00458801
    PUSH 0x1                            ; 00458804
    PUSH 0x57d566                       ; 00458806 | = "Bip01 R Hand"
    PUSH ESI                            ; 0045880b
    MOV [0x01b4d264],EAX                ; 0045880c | DAT_01b4d264
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00458811
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00458816
    PUSH 0x1                            ; 00458819
    PUSH 0x57d573                       ; 0045881b | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00458820
    MOV [0x01b4d268],EAX                ; 00458821 | DAT_01b4d268
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00458826
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0045882b
    PUSH 0x1                            ; 0045882e
    PUSH 0x57d584                       ; 00458830 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00458835
    MOV [0x01b4d26c],EAX                ; 00458836 | DAT_01b4d26c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0045883b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00458840
    PUSH 0x1                            ; 00458843
    PUSH 0x57d595                       ; 00458845 | = "Bip01 Spine"
    PUSH ESI                            ; 0045884a
    MOV [0x01b4d270],EAX                ; 0045884b | DAT_01b4d270
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00458850
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00458855
    PUSH 0x1                            ; 00458858
    PUSH 0x57d5a1                       ; 0045885a | = "Bip01 Spine1"
    PUSH ESI                            ; 0045885f
    MOV [0x01b4d274],EAX                ; 00458860 | DAT_01b4d274
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00458865
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0045886a
    PUSH 0x1                            ; 0045886d
    PUSH 0x57d5ae                       ; 0045886f | = "Bip01 Spine2"
    PUSH ESI                            ; 00458874
    MOV [0x01b4d278],EAX                ; 00458875 | DAT_01b4d278
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0045887a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0045887f
    PUSH EDI                            ; 00458882
    MOV [0x01b4d27c],EAX                ; 00458883 | DAT_01b4d27c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 00458888
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    MOV ESI,EAX                         ; 0045888d
    ADD ESP,0x4                         ; 0045888f
    PUSH 0x1                            ; 00458892
    PUSH 0x57d5bb                       ; 00458894 | = "larm01"
    PUSH EAX                            ; 00458899
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0045889a
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0045889f
    PUSH 0x1                            ; 004588a2
    PUSH 0x57d5c2                       ; 004588a4 | = "l4arm01"
    PUSH ESI                            ; 004588a9
    MOV dword ptr [EBX + 0xbd24],EAX    ; 004588aa
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004588b0
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 004588b5
    PUSH 0x1                            ; 004588b8
    PUSH 0x57d5ca                       ; 004588ba | = "rarm01"
    PUSH ESI                            ; 004588bf
    MOV dword ptr [EBX + 0xbd28],EAX    ; 004588c0
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004588c6
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 004588cb
    PUSH 0x1                            ; 004588ce
    PUSH 0x57d5d1                       ; 004588d0 | = "r4arm01"
    PUSH ESI                            ; 004588d5
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 004588d6
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004588dc
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 004588e1
    PUSH 0x1                            ; 004588e4
    PUSH 0x57d5d9                       ; 004588e6 | = "lshin01"
    PUSH ESI                            ; 004588eb
    MOV dword ptr [EBX + 0xbd30],EAX    ; 004588ec
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004588f2
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 004588f7
    PUSH 0x1                            ; 004588fa
    PUSH 0x57d5e1                       ; 004588fc | = "rshin01"
    PUSH ESI                            ; 00458901
    MOV dword ptr [EBX + 0xbd34],EAX    ; 00458902
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 00458908
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0045890d
    PUSH 0x1                            ; 00458910
    PUSH 0x57d5e9                       ; 00458912 | = "torso01"
    PUSH ESI                            ; 00458917
    MOV dword ptr [EBX + 0xbd38],EAX    ; 00458918
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0045891e
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 00458923
    PUSH 0x1                            ; 00458926
    PUSH 0x57d5f1                       ; 00458928 | = "waist01"
    PUSH ESI                            ; 0045892d
    MOV dword ptr [EBX + 0xbd3c],EAX    ; 0045892e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 00458934
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 00458939
    PUSH 0x1                            ; 0045893c
    PUSH 0x57d5f9                       ; 0045893e | = "head01"
    PUSH ESI                            ; 00458943
    MOV dword ptr [EBX + 0xbd40],EAX    ; 00458944
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 0045894a
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30()
    ADD ESP,0xc                         ; 0045894f
    MOV dword ptr [EBX + 0xbd44],EAX    ; 00458952
    POP ESI                             ; 00458958
    POP EDI                             ; 00458959
    PUSH 0x41200000                     ; 0045895a
    PUSH 0x40a00000                     ; 0045895f
    MOV dword ptr [EBX + 0xbdcc],0x0    ; 00458964
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045896e
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 00458973
    FLD float ptr [ESP + 0x8]           ; 00458977
    ADD ESP,0x8                         ; 0045897b
    PUSH 0x41a00000                     ; 0045897e
    PUSH 0x40000000                     ; 00458983
    FSTP float ptr [EBX + 0xbdb8]       ; 00458988
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045898e
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 00458993
    MOV EAX,dword ptr [ESP + 0x8]       ; 00458997
    MOV dword ptr [EBX + 0xbdbc],EAX    ; 0045899b
    ADD ESP,0x8                         ; 004589a1
    ADD ESP,0x4                         ; 004589a4
    POP EBX                             ; 004589a7
    RET                                 ; 004589a8
    PUSH 0x57d4b8                       ; 004589a9 | = "nbride2.dfm"
        ;   Label: LAB_004589a9
    PUSH EAX                            ; 004589ae
    MOV EDI,EAX                         ; 004589af
    CALL crt_string.c__stricmp_FUN_00564520 ; 004589b1
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004589b6
    TEST EAX,EAX                        ; 004589b9
    JNZ 0x004589cb                      ; 004589bb
        ;   XREF to: 004589cb (CONDITIONAL_JUMP)  ; LAB_004589cb
    PUSH 0x57d4c4                       ; 004589bd | = "nbride2x.dfm"
    PUSH ESI                            ; 004589c2
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004589c3
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 004589c8
    PUSH 0x57d4d1                       ; 004589cb | = "nbride3.dfm"
        ;   Label: LAB_004589cb
    PUSH EDI                            ; 004589d0
    CALL crt_string.c__stricmp_FUN_00564520 ; 004589d1
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004589d6
    TEST EAX,EAX                        ; 004589d9
    JNZ 0x004589f1                      ; 004589db
        ;   XREF to: 004589f1 (CONDITIONAL_JUMP)  ; LAB_004589f1
    PUSH 0x57d4dd                       ; 004589dd | = "nbride3x.dfm"
    LEA EAX,[EBX + 0x150]               ; 004589e2
    PUSH EAX                            ; 004589e8
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004589e9
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 004589ee
    PUSH 0x57d4ea                       ; 004589f1 | = "nbride4.dfm"
        ;   Label: LAB_004589f1
    PUSH EDI                            ; 004589f6
    CALL crt_string.c__stricmp_FUN_00564520 ; 004589f7
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004589fc
    TEST EAX,EAX                        ; 004589ff
    JNZ 0x004587c5                      ; 00458a01
        ;   XREF to: 004587c5 (CONDITIONAL_JUMP)  ; LAB_004587c5
    PUSH 0x57d4f6                       ; 00458a07 | = "nbride4x.dfm"
    JMP 0x004587b6                      ; 00458a0c
        ;   XREF to: 004587b6 (UNCONDITIONAL_JUMP)  ; LAB_004587b6

