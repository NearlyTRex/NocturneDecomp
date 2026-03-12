; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_CDemonMission_showDifficultyStats_FUN_0053d3b0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x10d8]:8  local_10d8
; undefined8       Stack[-0x10cc]:8  local_10cc
; CPickList        Stack[-0x10c4]:936  local_10c4
; CPickList        Stack[-0xd1c]:936  local_d1c
; CPickList        Stack[-0x974]:936  local_974
; CPickList        Stack[-0x5cc]:936  local_5cc
; char[500]        Stack[-0x224]:500  local_224
; double           Stack[-0x30]:8  local_30
; int              Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; char *           Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 0053883c
;
; Referenced Globals:
;   char s_EmptyChar_0063cbe7 = \x00
;   TerminatedCString s_none_0063cbe8
;   TerminatedCString s_true_0063cbed
;   TerminatedCString s_s_g_hp_x_i_g_hp_0063cbf2
;   TerminatedCString s_s_s_s_d_0063cc0a
;   TerminatedCString s_s_g_hp_x_d_uses_g_hp_0063cc16
;   TerminatedCString s_Total_enemy_HP_g_0063cc31
;   TerminatedCString s_Total_g_hp_0063cc43
;   TerminatedCString s_Total_ammo_d_0063cc53
;   TerminatedCString s_Total_d_0063cc61
;   TerminatedCString s_Total_health_items_g_0063cc6c
;   TerminatedCString s_Total_g_hp_0063cc82
;   TerminatedCString s_Mission_difficulty_stats_0063cc92
;   TerminatedCString s_Enemy_detail_0063ccc8
;   TerminatedCString s_Ammo_detail_0063ccd5
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c__stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d3b0
        ;   Label: core_msnedit.cpp_CDemonMission_showDifficultyStats_FUN_0053d3b0
    PUSH ESI                            ; 0053d3b1
    PUSH EDI                            ; 0053d3b2
    PUSH EBP                            ; 0053d3b3
    MOV EBP,ESP                         ; 0053d3b4
    SUB ESP,0x10b4                      ; 0053d3b6
    LEA EAX,[EBP + 0xfffff2f4]          ; 0053d3bc
    PUSH EAX                            ; 0053d3c2
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053d3c3
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0053d3c8
    LEA EAX,[EBP + 0xfffff69c]          ; 0053d3cb
    PUSH EAX                            ; 0053d3d1
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053d3d2
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0053d3d7
    LEA EAX,[EBP + 0xffffef4c]          ; 0053d3da
    PUSH EAX                            ; 0053d3e0
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053d3e1
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053d3e4
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0053d3e9
    XOR EDX,EDX                         ; 0053d3ec
    MOV ESI,dword ptr [ESI + 0x548]     ; 0053d3ee
    MOV dword ptr [EBP + -0x10],EDX     ; 0053d3f4
    MOV dword ptr [EBP + -0xc],EDX      ; 0053d3f7
    MOV dword ptr [EBP + -0x14],EDX     ; 0053d3fa
    TEST ESI,ESI                        ; 0053d3fd
    JZ 0x0053d5b1                       ; 0053d3ff
        ;   XREF to: 0053d5b1 (CONDITIONAL_JUMP)  ; LAB_0053d5b1
    MOV ECX,dword ptr [0x02cf2bf0]      ; 0053d405 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_0053d405
    PUSH ECX                            ; 0053d40b
    PUSH ESI                            ; 0053d40c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0053d40d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0053d412
    ADD ESP,0x8                         ; 0053d414
    MOV EDI,EAX                         ; 0053d417
    TEST EAX,EAX                        ; 0053d419
    JZ 0x0053d4cb                       ; 0053d41b
        ;   XREF to: 0053d4cb (CONDITIONAL_JUMP)  ; LAB_0053d4cb
    MOV dword ptr [EBP + -0x4],0x3f800000 ; 0053d421
    CMP byte ptr [EBX + 0x78],0x0       ; 0053d428
    JZ 0x0053d461                       ; 0053d42c
        ;   XREF to: 0053d461 (CONDITIONAL_JUMP)  ; LAB_0053d461
    PUSH 0x63cbe8                       ; 0053d42e | = "none"
    LEA EAX,[EBX + 0x78]                ; 0053d433
    PUSH EAX                            ; 0053d436
    MOV dword ptr [EBP + -0x8],EAX      ; 0053d437
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0053d43a
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053d43f
    TEST EAX,EAX                        ; 0053d442
    JZ 0x0053d461                       ; 0053d444
        ;   XREF to: 0053d461 (CONDITIONAL_JUMP)  ; LAB_0053d461
    PUSH 0x63cbed                       ; 0053d446 | = "true"
    MOV ECX,dword ptr [EBP + -0x8]      ; 0053d44b
    PUSH ECX                            ; 0053d44e
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0053d44f
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053d454
    TEST EAX,EAX                        ; 0053d457
    JZ 0x0053d461                       ; 0053d459
        ;   XREF to: 0053d461 (CONDITIONAL_JUMP)  ; LAB_0053d461
    MOV EAX,dword ptr [EBX + 0x74]      ; 0053d45b
    MOV dword ptr [EBP + -0x4],EAX      ; 0053d45e
    FLD float ptr [EDI + 0x243c]        ; 0053d461
        ;   Label: LAB_0053d461
    FMUL float ptr [EBP + -0x4]         ; 0053d467
    FLD float ptr [EBP + -0x4]          ; 0053d46a
    FMUL float ptr [0x0063ccf0]         ; 0053d46d | FLOAT_0063ccf0
    SUB ESP,0x8                         ; 0053d473
    CALL crt_math.c_round_FUN_005fe6b0  ; 0053d476
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x18]       ; 0053d47b
    MOV EBX,dword ptr [EBP + -0x18]     ; 0053d47e
    FSTP double ptr [ESP]               ; 0053d481
    PUSH EBX                            ; 0053d484
    SUB ESP,0x8                         ; 0053d485
    FLD float ptr [EDI + 0x243c]        ; 0053d488
    FSTP double ptr [ESP]               ; 0053d48e
    PUSH EDI                            ; 0053d491
    PUSH 0x63cbf2                       ; 0053d492 | = "%s\t%g hp\tx\t%i%%\t=\t%g hp"
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d497
    PUSH EAX                            ; 0053d49d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0053d49e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x20                        ; 0053d4a3
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d4a6
    PUSH EAX                            ; 0053d4ac
    LEA EAX,[EBP + 0xfffff2f4]          ; 0053d4ad
    PUSH EAX                            ; 0053d4b3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053d4b4
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    FLD float ptr [EDI + 0x243c]        ; 0053d4b9
    FMUL float ptr [EBP + -0x4]         ; 0053d4bf
    FADD float ptr [EBP + -0x10]        ; 0053d4c2
    ADD ESP,0x8                         ; 0053d4c5
    FSTP float ptr [EBP + -0x10]        ; 0053d4c8
    MOV EDI,dword ptr [0x008223a4]      ; 0053d4cb | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_0053d4cb
    PUSH EDI                            ; 0053d4d1
    PUSH ESI                            ; 0053d4d2
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0053d4d3
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0053d4d8
    ADD ESP,0x8                         ; 0053d4da
    TEST EAX,EAX                        ; 0053d4dd
    JZ 0x0053d52b                       ; 0053d4df
        ;   XREF to: 0053d52b (CONDITIONAL_JUMP)  ; LAB_0053d52b
    MOV EAX,dword ptr [EAX + 0x314]     ; 0053d4e1
    PUSH EAX                            ; 0053d4e7
    PUSH 0x63cbe7                       ; 0053d4e8 | s_EmptyChar_0063cbe7
    LEA EAX,[EBX + 0x2d4]               ; 0053d4ed
    PUSH EAX                            ; 0053d4f3
    PUSH EBX                            ; 0053d4f4
    PUSH 0x63cc0a                       ; 0053d4f5 | = "%s\t%s\t%s\t%d"
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d4fa
    PUSH EAX                            ; 0053d500
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0053d501
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 0053d506
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d509
    PUSH EAX                            ; 0053d50f
    LEA EAX,[EBP + 0xfffff69c]          ; 0053d510
    PUSH EAX                            ; 0053d516
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053d517
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    MOV EDX,dword ptr [EBP + -0xc]      ; 0053d51c
    ADD EDX,dword ptr [EBX + 0x314]     ; 0053d51f
    ADD ESP,0x8                         ; 0053d525
    MOV dword ptr [EBP + -0xc],EDX      ; 0053d528
    MOV ECX,dword ptr [0x02db87b8]      ; 0053d52b | DAT_02db8780.name_hash
        ;   Label: LAB_0053d52b
    PUSH ECX                            ; 0053d531
    PUSH ESI                            ; 0053d532
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0053d533
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0053d538
    ADD ESP,0x8                         ; 0053d53a
    TEST EAX,EAX                        ; 0053d53d
    JZ 0x0053d5a3                       ; 0053d53f
        ;   XREF to: 0053d5a3 (CONDITIONAL_JUMP)  ; LAB_0053d5a3
    FILD dword ptr [EAX + 0x2d4]        ; 0053d541
    FMUL float ptr [EAX + 0x2d8]        ; 0053d547
    SUB ESP,0x8                         ; 0053d54d
    FSTP double ptr [ESP]               ; 0053d550
    MOV EDI,dword ptr [EAX + 0x2d4]     ; 0053d553
    PUSH EDI                            ; 0053d559
    SUB ESP,0x8                         ; 0053d55a
    FLD float ptr [EAX + 0x2d8]         ; 0053d55d
    FSTP double ptr [ESP]               ; 0053d563
    PUSH EAX                            ; 0053d566
    PUSH 0x63cc16                       ; 0053d567 | = "%s\t%g hp\tx\t%d uses\t=\t%g hp"
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d56c
    PUSH EAX                            ; 0053d572
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0053d573
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x20                        ; 0053d578
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d57b
    PUSH EAX                            ; 0053d581
    LEA EAX,[EBP + 0xffffef4c]          ; 0053d582
    PUSH EAX                            ; 0053d588
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053d589
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    FILD dword ptr [EBX + 0x2d4]        ; 0053d58e
    FMUL float ptr [EBX + 0x2d8]        ; 0053d594
    FADD float ptr [EBP + -0x14]        ; 0053d59a
    ADD ESP,0x8                         ; 0053d59d
    FSTP float ptr [EBP + -0x14]        ; 0053d5a0
    MOV ESI,dword ptr [ESI + 0x14c]     ; 0053d5a3
        ;   Label: LAB_0053d5a3
    TEST ESI,ESI                        ; 0053d5a9
    JNZ 0x0053d405                      ; 0053d5ab
        ;   XREF to: 0053d405 (CONDITIONAL_JUMP)  ; LAB_0053d405
    LEA EAX,[EBP + 0xfffffa44]          ; 0053d5b1
        ;   Label: LAB_0053d5b1
    PUSH EAX                            ; 0053d5b7
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053d5b8
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    FLD float ptr [EBP + -0x10]         ; 0053d5bd
    ADD ESP,0x4                         ; 0053d5c0
    FSTP double ptr [EBP + -0x20]       ; 0053d5c3
    MOV ESI,dword ptr [EBP + -0x1c]     ; 0053d5c6
    PUSH ESI                            ; 0053d5c9
    MOV EDI,dword ptr [EBP + -0x20]     ; 0053d5ca
    PUSH EDI                            ; 0053d5cd
    PUSH 0x63cc31                       ; 0053d5ce | = "Total enemy HP\t%g"
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d5d3
    PUSH EAX                            ; 0053d5d9
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0053d5da
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0053d5df
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d5e2
    PUSH EAX                            ; 0053d5e8
    LEA EAX,[EBP + 0xfffffa44]          ; 0053d5e9
    PUSH EAX                            ; 0053d5ef
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053d5f0
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053d5f5
    PUSH ESI                            ; 0053d5f8
    PUSH EDI                            ; 0053d5f9
    PUSH 0x63cc43                       ; 0053d5fa | = "Total\t\t\t\t\t%g hp"
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d5ff
    PUSH EAX                            ; 0053d605
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0053d606
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0053d60b
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d60e
    PUSH EAX                            ; 0053d614
    LEA EAX,[EBP + 0xfffff2f4]          ; 0053d615
    PUSH EAX                            ; 0053d61b
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053d61c
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053d621
    MOV ECX,dword ptr [EBP + -0xc]      ; 0053d624
    PUSH ECX                            ; 0053d627
    PUSH 0x63cc53                       ; 0053d628 | = "Total ammo\t%d"
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d62d
    PUSH EAX                            ; 0053d633
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0053d634
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053d639
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d63c
    PUSH EAX                            ; 0053d642
    LEA EAX,[EBP + 0xfffffa44]          ; 0053d643
    PUSH EAX                            ; 0053d649
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053d64a
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053d64f
    MOV EBX,dword ptr [EBP + -0xc]      ; 0053d652
    PUSH EBX                            ; 0053d655
    PUSH 0x63cc61                       ; 0053d656 | = "Total\t\t\t%d"
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d65b
    PUSH EAX                            ; 0053d661
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0053d662
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053d667
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d66a
    PUSH EAX                            ; 0053d670
    LEA EAX,[EBP + 0xfffff69c]          ; 0053d671
    PUSH EAX                            ; 0053d677
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053d678
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    FLD float ptr [EBP + -0x14]         ; 0053d67d
    ADD ESP,0x8                         ; 0053d680
    FSTP double ptr [EBP + -0x20]       ; 0053d683
    MOV ESI,dword ptr [EBP + -0x1c]     ; 0053d686
    PUSH ESI                            ; 0053d689
    MOV EDI,dword ptr [EBP + -0x20]     ; 0053d68a
    PUSH EDI                            ; 0053d68d
    PUSH 0x63cc6c                       ; 0053d68e | = "Total health items\t%g"
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d693
    PUSH EAX                            ; 0053d699
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0053d69a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0053d69f
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d6a2
    PUSH EAX                            ; 0053d6a8
    LEA EAX,[EBP + 0xfffffa44]          ; 0053d6a9
    PUSH EAX                            ; 0053d6af
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053d6b0
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053d6b5
    PUSH ESI                            ; 0053d6b8
    PUSH EDI                            ; 0053d6b9
    PUSH 0x63cc82                       ; 0053d6ba | = "Total\t\t\t\t\t%g hp"
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d6bf
    PUSH EAX                            ; 0053d6c5
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0053d6c6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0053d6cb
    LEA EAX,[EBP + 0xfffffdec]          ; 0053d6ce
    PUSH EAX                            ; 0053d6d4
    LEA EAX,[EBP + 0xffffef4c]          ; 0053d6d5
    PUSH EAX                            ; 0053d6db
    XOR EBX,EBX                         ; 0053d6dc
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053d6de
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053d6e3
    MOV EDI,0xffffffff                  ; 0053d6e6
    XOR ESI,ESI                         ; 0053d6eb
    PUSH ESI                            ; 0053d6ed
        ;   Label: LAB_0053d6ed
    PUSH EBX                            ; 0053d6ee
    PUSH 0x63cc92                       ; 0053d6ef | = "Mission difficulty stats.  Select an ..."
    LEA EAX,[EBP + 0xfffffa44]          ; 0053d6f4
    PUSH EAX                            ; 0053d6fa
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053d6fb
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0053d700
    MOV EBX,EAX                         ; 0053d703
    TEST EAX,EAX                        ; 0053d705
    JL 0x0053d759                       ; 0053d707
        ;   XREF to: 0053d759 (CONDITIONAL_JUMP)  ; LAB_0053d759
    JNZ 0x0053d721                      ; 0053d709
        ;   XREF to: 0053d721 (CONDITIONAL_JUMP)  ; LAB_0053d721
    PUSH ESI                            ; 0053d70b
    PUSH EDI                            ; 0053d70c
    PUSH 0x63ccc8                       ; 0053d70d | = "Enemy detail"
    LEA EAX,[EBP + 0xfffff2f4]          ; 0053d712
    PUSH EAX                            ; 0053d718
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053d719
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0053d71e
    CMP EBX,0x1                         ; 0053d721
        ;   Label: LAB_0053d721
    JNZ 0x0053d73c                      ; 0053d724
        ;   XREF to: 0053d73c (CONDITIONAL_JUMP)  ; LAB_0053d73c
    PUSH ESI                            ; 0053d726
    PUSH EDI                            ; 0053d727
    PUSH 0x63ccd5                       ; 0053d728 | = "Ammo detail"
    LEA EAX,[EBP + 0xfffff69c]          ; 0053d72d
    PUSH EAX                            ; 0053d733
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053d734
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0053d739
    CMP EBX,0x2                         ; 0053d73c
        ;   Label: LAB_0053d73c
    JNZ 0x0053d6ed                      ; 0053d73f
        ;   XREF to: 0053d6ed (CONDITIONAL_JUMP)  ; LAB_0053d6ed
    PUSH ESI                            ; 0053d741
    PUSH EDI                            ; 0053d742
    PUSH 0x63cce1                       ; 0053d743 | = "Health detail"
    LEA EAX,[EBP + 0xffffef4c]          ; 0053d748
    PUSH EAX                            ; 0053d74e
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053d74f
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0053d754
    JMP 0x0053d6ed                      ; 0053d757
        ;   XREF to: 0053d6ed (UNCONDITIONAL_JUMP)  ; LAB_0053d6ed
    PUSH 0x0                            ; 0053d759
        ;   Label: LAB_0053d759
    LEA EAX,[EBP + 0xfffffa44]          ; 0053d75b
    PUSH EAX                            ; 0053d761
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053d762
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053d767
    PUSH 0x0                            ; 0053d76a
    LEA EAX,[EBP + 0xffffef4c]          ; 0053d76c
    PUSH EAX                            ; 0053d772
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053d773
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053d778
    PUSH 0x0                            ; 0053d77b
    LEA EAX,[EBP + 0xfffff69c]          ; 0053d77d
    PUSH EAX                            ; 0053d783
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053d784
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053d789
    PUSH 0x0                            ; 0053d78c
    LEA EAX,[EBP + 0xfffff2f4]          ; 0053d78e
    PUSH EAX                            ; 0053d794
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053d795
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053d79a
    MOV ESP,EBP                         ; 0053d79d
    POP EBP                             ; 0053d79f
    POP EDI                             ; 0053d7a0
    POP ESI                             ; 0053d7a1
    POP EBX                             ; 0053d7a2
    RET                                 ; 0053d7a3

