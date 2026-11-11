; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_loadState_FUN_0054b3e0(CScript *this_ptr,_FILE *file_handle)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004d6990 at 004d7058
;
; Referenced Globals:
;   undefined4 DAT_005f0062
;   TerminatedCString s_core_script_cpp_005f0066
;   TerminatedCString s_CScript_loadState_file_v_005f0079
;   undefined4 DAT_005f00ae
;   undefined4 DAT_005f00b2
;   undefined4 DAT_005f00b6
;   undefined4 DAT_005f00ba
;   undefined4 DAT_005f00be
;   TerminatedCString s_anon_005f00c2
;   undefined4 DAT_005f00c9
;   undefined4 DAT_005f00cc
;   undefined4 DAT_005f00d0
;   undefined4 DAT_005f00d4
;   undefined4 DAT_005f00d8
;   undefined4 DAT_005f00dc
;   ... and 10 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_script.cpp_CScript_computeChecksum_FUN_0054b940
;   core_script.cpp_readActorReference_FUN_0054b320
;   crt_stdio.c_fgets_FUN_005c1180
;   crt_stdio.c_fscanf_FUN_005c04b0
;   shape_edittool.cpp_FUN_00494340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b3e0
        ;   Label: core_script.cpp_CScript_loadState_FUN_0054b3e0
    PUSH ESI                            ; 0054b3e1
    PUSH EDI                            ; 0054b3e2
    PUSH EBP                            ; 0054b3e3
    SUB ESP,0x108                       ; 0054b3e4
    MOV EBP,dword ptr [ESP + 0x11c]     ; 0054b3ea
    MOV EDI,dword ptr [ESP + 0x120]     ; 0054b3f1
    PUSH EDI                            ; 0054b3f8
    PUSH 0xff                           ; 0054b3f9
    LEA EAX,[ESP + 0x8]                 ; 0054b3fe
    PUSH EAX                            ; 0054b402
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b403
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0054b408
    LEA EAX,[ESP + 0x100]               ; 0054b40b
    PUSH EAX                            ; 0054b412
    PUSH 0x5f0062                       ; 0054b413 | DAT_005f0062
    PUSH EDI                            ; 0054b418
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b419
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b41e
    CMP dword ptr [ESP + 0x100],0x6     ; 0054b421
    JG 0x0054b685                       ; 0054b429
        ;   XREF to: 0054b685 (CONDITIONAL_JUMP)  ; LAB_0054b685
    PUSH EDI                            ; 0054b42f
        ;   Label: LAB_0054b42f
    PUSH 0xff                           ; 0054b430
    LEA EAX,[ESP + 0x8]                 ; 0054b435
    PUSH EAX                            ; 0054b439
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b43a
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    MOV EAX,[0x0061d95c]                ; 0054b43f | g_CGamePtr
    ADD ESP,0xc                         ; 0054b444
    ADD EAX,0x244                       ; 0054b447
    PUSH EAX                            ; 0054b44c | g_CGameInstance.letterbox_mode
    PUSH 0x5f00ae                       ; 0054b44d | DAT_005f00ae
    PUSH EDI                            ; 0054b452
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b453
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b458
    CMP dword ptr [ESP + 0x100],0x2     ; 0054b45b
    JL 0x0054b491                       ; 0054b463
        ;   XREF to: 0054b491 (CONDITIONAL_JUMP)  ; LAB_0054b491
    PUSH EDI                            ; 0054b465
    PUSH 0xff                           ; 0054b466
    LEA EAX,[ESP + 0x8]                 ; 0054b46b
    PUSH EAX                            ; 0054b46f
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b470
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    MOV EAX,[0x0061d95c]                ; 0054b475 | g_CGamePtr
    ADD ESP,0xc                         ; 0054b47a
    ADD EAX,0x248                       ; 0054b47d
    PUSH EAX                            ; 0054b482 | g_CGameInstance.allow_damage_flag
    PUSH 0x5f00b2                       ; 0054b483 | DAT_005f00b2
    PUSH EDI                            ; 0054b488
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b489
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b48e
    CMP dword ptr [ESP + 0x100],0x3     ; 0054b491
        ;   Label: LAB_0054b491
    JL 0x0054b4c7                       ; 0054b499
        ;   XREF to: 0054b4c7 (CONDITIONAL_JUMP)  ; LAB_0054b4c7
    PUSH EDI                            ; 0054b49b
    PUSH 0xff                           ; 0054b49c
    LEA EAX,[ESP + 0x8]                 ; 0054b4a1
    PUSH EAX                            ; 0054b4a5
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b4a6
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    MOV EAX,[0x0061d95c]                ; 0054b4ab | g_CGamePtr
    ADD ESP,0xc                         ; 0054b4b0
    ADD EAX,0x24c                       ; 0054b4b3
    PUSH EAX                            ; 0054b4b8 | g_CGameInstance.allow_enemy_attack_flag
    PUSH 0x5f00b6                       ; 0054b4b9 | DAT_005f00b6
    PUSH EDI                            ; 0054b4be
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b4bf
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b4c4
    PUSH EDI                            ; 0054b4c7
        ;   Label: LAB_0054b4c7
    PUSH 0xff                           ; 0054b4c8
    LEA EAX,[ESP + 0x8]                 ; 0054b4cd
    PUSH EAX                            ; 0054b4d1
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b4d2
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0054b4d7
    PUSH 0x1e818b0                      ; 0054b4da | DAT_01e818b0
    PUSH 0x5f00ba                       ; 0054b4df | DAT_005f00ba
    PUSH EDI                            ; 0054b4e4
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b4e5
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b4ea
    PUSH EDI                            ; 0054b4ed
    PUSH 0xff                           ; 0054b4ee
    LEA EAX,[ESP + 0x8]                 ; 0054b4f3
    PUSH EAX                            ; 0054b4f7
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b4f8
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0054b4fd
    LEA EAX,[EBP + 0x44]                ; 0054b500
    PUSH EAX                            ; 0054b503
    PUSH 0x5f00be                       ; 0054b504 | DAT_005f00be
    PUSH EDI                            ; 0054b509
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b50a
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b50f
    PUSH EDI                            ; 0054b512
    PUSH 0xff                           ; 0054b513
    LEA EAX,[ESP + 0x8]                 ; 0054b518
    PUSH EAX                            ; 0054b51c
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b51d
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0054b522
    LEA EBX,[EBP + 0x50]                ; 0054b525
    PUSH EBX                            ; 0054b528
    PUSH 0x5f00c2                       ; 0054b529 | = "\"%[^\"]"
    PUSH EDI                            ; 0054b52e
    MOV byte ptr [EBP + 0x50],0x0       ; 0054b52f
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b533
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b538
    PUSH EBX                            ; 0054b53b
    PUSH 0x5f00c9                       ; 0054b53c | DAT_005f00c9
    PUSH EDI                            ; 0054b541
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b542
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b547
    PUSH EDI                            ; 0054b54a
    PUSH 0xff                           ; 0054b54b
    LEA EAX,[ESP + 0x8]                 ; 0054b550
    PUSH EAX                            ; 0054b554
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b555
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0054b55a
    LEA EAX,[EBP + 0x48]                ; 0054b55d
    PUSH EAX                            ; 0054b560
    PUSH 0x5f00cc                       ; 0054b561 | DAT_005f00cc
    PUSH EDI                            ; 0054b566
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b567
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b56c
    PUSH EDI                            ; 0054b56f
    PUSH 0xff                           ; 0054b570
    LEA EAX,[ESP + 0x8]                 ; 0054b575
    PUSH EAX                            ; 0054b579
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b57a
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0054b57f
    LEA EAX,[EBP + 0x4c]                ; 0054b582
    PUSH EAX                            ; 0054b585
    PUSH 0x5f00d0                       ; 0054b586 | DAT_005f00d0
    PUSH EDI                            ; 0054b58b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b58c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b591
    PUSH EDI                            ; 0054b594
    PUSH 0xff                           ; 0054b595
    LEA EAX,[ESP + 0x8]                 ; 0054b59a
    PUSH EAX                            ; 0054b59e
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b59f
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0054b5a4
    LEA EAX,[EBP + 0x4]                 ; 0054b5a7
    PUSH EAX                            ; 0054b5aa
    PUSH EDI                            ; 0054b5ab
    CALL core_script.cpp_readActorReference_FUN_0054b320 ; 0054b5ac
        ;   XREF to: 0054b320 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_readActorReference_FUN_0054b320()
    ADD ESP,0x8                         ; 0054b5b1
    PUSH EDI                            ; 0054b5b4
    PUSH 0xff                           ; 0054b5b5
    LEA EAX,[ESP + 0x8]                 ; 0054b5ba
    PUSH EAX                            ; 0054b5be
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b5bf
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0054b5c4
    LEA EAX,[EBP + 0xc]                 ; 0054b5c7
    PUSH EAX                            ; 0054b5ca
    PUSH EDI                            ; 0054b5cb
    CALL core_script.cpp_readActorReference_FUN_0054b320 ; 0054b5cc
        ;   XREF to: 0054b320 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_readActorReference_FUN_0054b320()
    ADD ESP,0x8                         ; 0054b5d1
    CMP dword ptr [ESP + 0x100],0x5     ; 0054b5d4
    JL 0x0054b603                       ; 0054b5dc
        ;   XREF to: 0054b603 (CONDITIONAL_JUMP)  ; LAB_0054b603
    PUSH EDI                            ; 0054b5de
    PUSH 0xff                           ; 0054b5df
    LEA EAX,[ESP + 0x8]                 ; 0054b5e4
    PUSH EAX                            ; 0054b5e8
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b5e9
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0054b5ee
    LEA EAX,[EBP + 0x14]                ; 0054b5f1
    PUSH EAX                            ; 0054b5f4
    PUSH 0x5f00d4                       ; 0054b5f5 | DAT_005f00d4
    PUSH EDI                            ; 0054b5fa
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b5fb
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b600
    CMP dword ptr [ESP + 0x100],0x4     ; 0054b603
        ;   Label: LAB_0054b603
    JL 0x0054b670                       ; 0054b60b
        ;   XREF to: 0054b670 (CONDITIONAL_JUMP)  ; LAB_0054b670
    PUSH EDI                            ; 0054b60d
    PUSH 0xff                           ; 0054b60e
    LEA EAX,[ESP + 0x8]                 ; 0054b613
    PUSH EAX                            ; 0054b617
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b618
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0054b61d
    LEA EAX,[EBP + 0x458]               ; 0054b620
    PUSH EAX                            ; 0054b626
    PUSH 0x5f00d8                       ; 0054b627 | DAT_005f00d8
    PUSH EDI                            ; 0054b62c
    XOR ESI,ESI                         ; 0054b62d
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b62f
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EBX,dword ptr [EBP + 0x458]     ; 0054b634
    ADD ESP,0xc                         ; 0054b63a
    TEST EBX,EBX                        ; 0054b63d
    JLE 0x0054b670                      ; 0054b63f
        ;   XREF to: 0054b670 (CONDITIONAL_JUMP)  ; LAB_0054b670
    LEA EBX,[EBP + 0x45c]               ; 0054b641
    PUSH EBX                            ; 0054b647
        ;   Label: LAB_0054b647
    PUSH 0x5f00dc                       ; 0054b648 | DAT_005f00dc
    PUSH EDI                            ; 0054b64d
    INC ESI                             ; 0054b64e
    ADD EBX,0x4                         ; 0054b64f
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b652
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,dword ptr [EBP + 0x458]     ; 0054b657
    ADD ESP,0xc                         ; 0054b65d
    CMP ESI,EAX                         ; 0054b660
    JL 0x0054b647                       ; 0054b662
        ;   XREF to: 0054b647 (CONDITIONAL_JUMP)  ; LAB_0054b647
    LEA EAX,[EAX]                       ; 0054b664
    LEA EDX,[EDX]                       ; 0054b66a
    CMP dword ptr [ESP + 0x100],0x6     ; 0054b670
        ;   Label: LAB_0054b670
    JGE 0x0054b6ad                      ; 0054b678
        ;   XREF to: 0054b6ad (CONDITIONAL_JUMP)  ; LAB_0054b6ad
    ADD ESP,0x108                       ; 0054b67a
        ;   Label: LAB_0054b67a
    POP EBP                             ; 0054b680
    POP EDI                             ; 0054b681
    POP ESI                             ; 0054b682
    POP EBX                             ; 0054b683
    RET                                 ; 0054b684
    MOV ECX,0x5f0066                    ; 0054b685 | = "..\\core\\script.cpp"
        ;   Label: LAB_0054b685
    MOV EBX,0x10e6                      ; 0054b68a
    PUSH 0x5f0079                       ; 0054b68f | = "CScript::loadState - file version is ..."
    MOV dword ptr [0x01d1d400],ECX      ; 0054b694 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0054b69a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0054b6a0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0054b6a5
    JMP 0x0054b42f                      ; 0054b6a8
        ;   XREF to: 0054b42f (UNCONDITIONAL_JUMP)  ; LAB_0054b42f
    PUSH EDI                            ; 0054b6ad
        ;   Label: LAB_0054b6ad
    PUSH 0xff                           ; 0054b6ae
    LEA EAX,[ESP + 0x8]                 ; 0054b6b3
    PUSH EAX                            ; 0054b6b7
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0054b6b8
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0054b6bd
    LEA EAX,[ESP + 0x104]               ; 0054b6c0
    PUSH EAX                            ; 0054b6c7
    PUSH 0x5f00e0                       ; 0054b6c8 | DAT_005f00e0
    PUSH EDI                            ; 0054b6cd
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0054b6ce
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0054b6d3
    PUSH EBP                            ; 0054b6d6
    CALL core_script.cpp_CScript_computeChecksum_FUN_0054b940 ; 0054b6d7
        ;   XREF to: 0054b940 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_computeChecksum_FUN_0054b940(CScript * this_ptr)
    ADD ESP,0x4                         ; 0054b6dc
    CMP EAX,dword ptr [ESP + 0x104]     ; 0054b6df
    JZ 0x0054b67a                       ; 0054b6e6
        ;   XREF to: 0054b67a (CONDITIONAL_JUMP)  ; LAB_0054b67a
    PUSH 0x5f00e4                       ; 0054b6e8 | = "The script you were using when this g..."
    MOV EBX,dword ptr [0x0061abc0]      ; 0054b6ed | g_CEditorToolsPtr
    PUSH EBX                            ; 0054b6f3
    CALL shape_edittool.cpp_FUN_00494340 ; 0054b6f4
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x8                         ; 0054b6f9
    ADD ESP,0x108                       ; 0054b6fc
    POP EBP                             ; 0054b702
    POP EDI                             ; 0054b703
    POP ESI                             ; 0054b704
    POP EBX                             ; 0054b705
    RET                                 ; 0054b706

