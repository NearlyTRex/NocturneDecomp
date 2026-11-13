; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_load_FUN_004dc4b0(CInventory *this_ptr,_FILE *file_handle)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0x78]:1  local_78
; undefined1       Stack[-0x77]:1  local_77
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_hero.cpp_CHero_archive_FUN_004ce590 at 004ce7f8
;
; Referenced Globals:
;   undefined4 DAT_005db882
;   undefined4 DAT_005db886
;   undefined4 DAT_005db88a
;   undefined4 DAT_005db88e
;   TerminatedCString s_s_005db892
;   TerminatedCString s_core_inv_cpp_005db89f
;   TerminatedCString s_CInventory_load_Can_t_fi_005db8af
;   undefined4 DAT_00617cd8
;   undefined4 DAT_00617cdc
;   undefined4 DAT_00617d40
;   undefined4 DAT_00617d44
;   undefined4 DAT_00618170
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d182f0
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CDemonActor_load_FUN_0040b1c0
;   core_actor.cpp_createActorByName_FUN_0040c5a0
;   core_inv.cpp_CInventory_clear_FUN_004da860
;   core_inv.cpp_CInventory_initialize_FUN_004da900
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020
;   core_main.c_FUN_004e4500
;   core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004fbc00
;   crt_stdio.c_fgets_FUN_005b9600
;   crt_stdio.c_fscanf_FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc4b0
        ;   Label: core_inv.cpp_CInventory_load_FUN_004dc4b0
    PUSH ESI                            ; 004dc4b1
    PUSH EDI                            ; 004dc4b2
    PUSH EBP                            ; 004dc4b3
    SUB ESP,0x1cc                       ; 004dc4b4
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 004dc4ba
    PUSH EDX                            ; 004dc4c1
    CALL core_inv.cpp_CInventory_clear_FUN_004da860 ; 004dc4c2
        ;   XREF to: 004da860 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004da860(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004dc4c7
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 004dc4ca
    PUSH ECX                            ; 004dc4d1
    CALL core_inv.cpp_CInventory_initialize_FUN_004da900 ; 004dc4d2
        ;   XREF to: 004da900 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004da900(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004dc4d7
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 004dc4da
    PUSH EBX                            ; 004dc4e1
    PUSH 0xff                           ; 004dc4e2
    LEA EAX,[ESP + 0x8]                 ; 004dc4e7
    PUSH EAX                            ; 004dc4eb
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004dc4ec
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc4f1
    PUSH EBX                            ; 004dc4f4
    PUSH 0xff                           ; 004dc4f5
    LEA EAX,[ESP + 0x8]                 ; 004dc4fa
    PUSH EAX                            ; 004dc4fe
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004dc4ff
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc504
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc507
    ADD EAX,0x334                       ; 004dc50e
    PUSH EAX                            ; 004dc513
    PUSH 0x5db882                       ; 004dc514 | DAT_005db882
    PUSH EBX                            ; 004dc519
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004dc51a
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004dc51f
    PUSH EBX                            ; 004dc522
    PUSH 0xff                           ; 004dc523
    LEA EAX,[ESP + 0x8]                 ; 004dc528
    PUSH EAX                            ; 004dc52c
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004dc52d
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc532
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc535
    ADD EAX,0x10                        ; 004dc53c
    PUSH EAX                            ; 004dc53f
    PUSH 0x5db886                       ; 004dc540 | DAT_005db886
    PUSH EBX                            ; 004dc545
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004dc546
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004dc54b
    PUSH EBX                            ; 004dc54e
    PUSH 0xff                           ; 004dc54f
    LEA EAX,[ESP + 0x8]                 ; 004dc554
    PUSH EAX                            ; 004dc558
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004dc559
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc55e
    LEA EAX,[ESP + 0x1c8]               ; 004dc561
    PUSH EAX                            ; 004dc568
    PUSH 0x5db88a                       ; 004dc569 | DAT_005db88a
    PUSH EBX                            ; 004dc56e
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004dc56f
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004dc574
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc577
    CMP dword ptr [EAX + 0x334],0x1     ; 004dc57e
    JGE 0x004dc726                      ; 004dc585
        ;   XREF to: 004dc726 (CONDITIONAL_JUMP)  ; LAB_004dc726
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 004dc58b
        ;   Label: LAB_004dc58b
    PUSH EAX                            ; 004dc592
    PUSH 0xff                           ; 004dc593
    LEA EAX,[ESP + 0x8]                 ; 004dc598
    PUSH EAX                            ; 004dc59c
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004dc59d
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc5a2
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc5a5
    MOV EDX,dword ptr [EAX + 0x10]      ; 004dc5ac
    XOR EBP,EBP                         ; 004dc5af
    TEST EDX,EDX                        ; 004dc5b1
    JLE 0x004dc644                      ; 004dc5b3
        ;   XREF to: 004dc644 (CONDITIONAL_JUMP)  ; LAB_004dc644
    MOV EBX,EAX                         ; 004dc5b9
    MOV ECX,0x19                        ; 004dc5bb
        ;   Label: LAB_004dc5bb
    LEA EDI,[ESP + 0x100]               ; 004dc5c0
    LEA EAX,[ESP + 0x164]               ; 004dc5c7
    MOV ESI,0x617cd8                    ; 004dc5ce | DAT_00617cd8
    PUSH EAX                            ; 004dc5d3
    LEA EAX,[ESP + 0x104]               ; 004dc5d4
    MOVSD.REP ES:EDI,ESI                ; 004dc5db | DAT_00617cd8 | DAT_00617cdc
    PUSH EAX                            ; 004dc5dd
    MOV ECX,0x19                        ; 004dc5de
    LEA EDI,[ESP + 0x16c]               ; 004dc5e3
    PUSH 0x5db892                       ; 004dc5ea | = " %s \"%[^\"]\"\n"
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 004dc5ef
    MOV ESI,0x617d40                    ; 004dc5f6 | DAT_00617d40
    PUSH EAX                            ; 004dc5fb
    MOVSD.REP ES:EDI,ESI                ; 004dc5fc | DAT_00617d40 | DAT_00617d44
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004dc5fe
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    MOV ESI,dword ptr [0x00618170]      ; 004dc603 | DAT_00618170
    MOV EDX,dword ptr [ESI + 0x1010]    ; 004dc609 | DAT_01d19300
    ADD ESP,0x10                        ; 004dc60f
    TEST EDX,EDX                        ; 004dc612
    JZ 0x004dc75b                       ; 004dc614
        ;   XREF to: 004dc75b (CONDITIONAL_JUMP)  ; LAB_004dc75b
    LEA EAX,[ESP + 0x164]               ; 004dc61a
    PUSH EAX                            ; 004dc621
    PUSH ESI                            ; 004dc622 | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004fbc00 ; 004dc623
        ;   XREF to: 004fbc00 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004fbc00(CDemonMission * this_ptr, char * actor_name)
    ADD ESP,0x8                         ; 004dc628
    MOV dword ptr [EBX + 0x14],EAX      ; 004dc62b
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc62e
        ;   Label: LAB_004dc62e
    INC EBP                             ; 004dc635
    MOV ECX,dword ptr [EAX + 0x10]      ; 004dc636
    ADD EBX,0x4                         ; 004dc639
    CMP EBP,ECX                         ; 004dc63c
    JL 0x004dc5bb                       ; 004dc63e
        ;   XREF to: 004dc5bb (CONDITIONAL_JUMP)  ; LAB_004dc5bb
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 004dc644
        ;   Label: LAB_004dc644
    PUSH EBX                            ; 004dc64b
    PUSH 0xff                           ; 004dc64c
    LEA EAX,[ESP + 0x8]                 ; 004dc651
    PUSH EAX                            ; 004dc655
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004dc656
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc65b
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc65e
    MOV EDI,dword ptr [EAX + 0x10]      ; 004dc665
    XOR ESI,ESI                         ; 004dc668
    TEST EDI,EDI                        ; 004dc66a
    JLE 0x004dc6a0                      ; 004dc66c
        ;   XREF to: 004dc6a0 (CONDITIONAL_JUMP)  ; LAB_004dc6a0
    MOV EBX,EAX                         ; 004dc66e
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 004dc670
        ;   Label: LAB_004dc670
    PUSH ECX                            ; 004dc677
    MOV EDI,dword ptr [EBX + 0x14]      ; 004dc678
    PUSH EDI                            ; 004dc67b
    CALL core_actor.cpp_CDemonActor_load_FUN_0040b1c0 ; 004dc67c
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_load_FUN_0040b1c0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004dc681
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc684
    INC ESI                             ; 004dc68b
    MOV EBP,dword ptr [EAX + 0x10]      ; 004dc68c
    ADD EBX,0x4                         ; 004dc68f
    CMP ESI,EBP                         ; 004dc692
    JL 0x004dc670                       ; 004dc694
        ;   XREF to: 004dc670 (CONDITIONAL_JUMP)  ; LAB_004dc670
    LEA EAX,[EAX]                       ; 004dc696
    LEA EDX,[EDX]                       ; 004dc69c
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004dc6a0
        ;   Label: LAB_004dc6a0
    CMP dword ptr [EAX + 0x334],0x2     ; 004dc6a7
    JL 0x004dc6ca                       ; 004dc6ae
        ;   XREF to: 004dc6ca (CONDITIONAL_JUMP)  ; LAB_004dc6ca
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 004dc6b0
    PUSH ECX                            ; 004dc6b7
    PUSH 0xff                           ; 004dc6b8
    LEA EAX,[ESP + 0x8]                 ; 004dc6bd
    PUSH EAX                            ; 004dc6c1
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004dc6c2
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc6c7
    MOV EAX,[0x00618170]                ; 004dc6ca | DAT_00618170
        ;   Label: LAB_004dc6ca
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 004dc6cf
    MOV EAX,dword ptr [EAX + 0x1010]    ; 004dc6d6 | DAT_01d19300
    MOV dword ptr [EDX + 0x460],EAX     ; 004dc6dc
    MOV EAX,dword ptr [EDX + 0x468]     ; 004dc6e2
    SHL EAX,0x2                         ; 004dc6e8
    ADD EAX,EDX                         ; 004dc6eb
    MOV dword ptr [EAX + 0x610],0x0     ; 004dc6ed
    MOV ESI,dword ptr [ESP + 0x1c8]     ; 004dc6f7
    TEST ESI,ESI                        ; 004dc6fe
    JGE 0x004dc798                      ; 004dc700
        ;   XREF to: 004dc798 (CONDITIONAL_JUMP)  ; LAB_004dc798
    PUSH 0x3e7                          ; 004dc706
        ;   Label: LAB_004dc706
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 004dc70b
    PUSH EAX                            ; 004dc712
    CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020 ; 004dc713
        ;   XREF to: 004dd020 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020(CInventory * this_ptr, int ammo_type)
    ADD ESP,0x8                         ; 004dc718
    ADD ESP,0x1cc                       ; 004dc71b
    POP EBP                             ; 004dc721
    POP EDI                             ; 004dc722
    POP ESI                             ; 004dc723
    POP EBX                             ; 004dc724
    RET                                 ; 004dc725
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 004dc726
        ;   Label: LAB_004dc726
    PUSH ESI                            ; 004dc72d
    PUSH 0xff                           ; 004dc72e
    LEA EAX,[ESP + 0x8]                 ; 004dc733
    PUSH EAX                            ; 004dc737
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004dc738
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004dc73d
    MOV EDI,dword ptr [ESP + 0x1e0]     ; 004dc740
    PUSH EDI                            ; 004dc747
    PUSH 0x5db88e                       ; 004dc748 | DAT_005db88e
    PUSH ESI                            ; 004dc74d
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004dc74e
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004dc753
    JMP 0x004dc58b                      ; 004dc756
        ;   XREF to: 004dc58b (UNCONDITIONAL_JUMP)  ; LAB_004dc58b
    LEA EAX,[ESP + 0x100]               ; 004dc75b
        ;   Label: LAB_004dc75b
    PUSH EAX                            ; 004dc762
    LEA ESI,[ESP + 0x168]               ; 004dc763
    CALL core_actor.cpp_createActorByName_FUN_0040c5a0 ; 004dc76a
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c5a0(char * class_name)
    ADD ESP,0x4                         ; 004dc76f
    MOV EDI,EAX                         ; 004dc772
    MOV EDX,EAX                         ; 004dc774
    PUSH EDI                            ; 004dc776
    MOV AL,byte ptr [ESI]               ; 004dc777
        ;   Label: LAB_004dc777
    MOV byte ptr [EDI],AL               ; 004dc779
    CMP AL,0x0                          ; 004dc77b
    JZ 0x004dc78f                       ; 004dc77d
        ;   XREF to: 004dc78f (CONDITIONAL_JUMP)  ; LAB_004dc78f
    MOV AL,byte ptr [ESI + 0x1]         ; 004dc77f
    ADD ESI,0x2                         ; 004dc782
    MOV byte ptr [EDI + 0x1],AL         ; 004dc785
    ADD EDI,0x2                         ; 004dc788
    CMP AL,0x0                          ; 004dc78b
    JNZ 0x004dc777                      ; 004dc78d
        ;   XREF to: 004dc777 (CONDITIONAL_JUMP)  ; LAB_004dc777
    POP EDI                             ; 004dc78f
        ;   Label: LAB_004dc78f
    MOV dword ptr [EBX + 0x14],EDX      ; 004dc790
    JMP 0x004dc62e                      ; 004dc793
        ;   XREF to: 004dc62e (UNCONDITIONAL_JUMP)  ; LAB_004dc62e
    LEA EAX,[ESI*0x4 + 0x0]             ; 004dc798
        ;   Label: LAB_004dc798
    MOV EDI,dword ptr [0x02661f38]      ; 004dc79f | g_CWeaponClassInfo.name_hash
    ADD EAX,EDX                         ; 004dc7a5
    PUSH EDI                            ; 004dc7a7
    MOV EBP,EDX                         ; 004dc7a8
    MOV EDX,dword ptr [EAX + 0x14]      ; 004dc7aa
    PUSH EDX                            ; 004dc7ad
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dc7ae
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,EBP                         ; 004dc7b3
    MOV EDX,dword ptr [EDX + 0x468]     ; 004dc7b5
    MOV ECX,EBP                         ; 004dc7bb
    SHL EDX,0x2                         ; 004dc7bd
    ADD EDX,ECX                         ; 004dc7c0
    MOV dword ptr [EDX + 0x610],EAX     ; 004dc7c2
    MOV EAX,dword ptr [ECX + 0x468]     ; 004dc7c8
    SHL EAX,0x2                         ; 004dc7ce
    ADD EAX,ECX                         ; 004dc7d1
    MOV ESI,dword ptr [EAX + 0x610]     ; 004dc7d3
    ADD ESP,0x8                         ; 004dc7d9
    TEST ESI,ESI                        ; 004dc7dc
    JNZ 0x004dc706                      ; 004dc7de
        ;   XREF to: 004dc706 (CONDITIONAL_JUMP)  ; LAB_004dc706
    MOV EDI,0x5db89f                    ; 004dc7e4 | = "..\\core\\inv.cpp"
    MOV EBP,0x62b                       ; 004dc7e9
    PUSH 0x5db8af                       ; 004dc7ee | = "CInventory::load - Can't find your we..."
    MOV dword ptr [0x01d046a0],EDI      ; 004dc7f3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004dc7f9 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004dc7ff
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004dc804
    JMP 0x004dc706                      ; 004dc807
        ;   XREF to: 004dc706 (UNCONDITIONAL_JUMP)  ; LAB_004dc706

