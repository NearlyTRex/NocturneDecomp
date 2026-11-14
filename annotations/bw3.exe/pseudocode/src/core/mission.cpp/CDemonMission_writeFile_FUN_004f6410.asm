; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_004f6410(CDemonMission *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_FUN_004bda10 at 004bdb29
;   core_mission.cpp_FUN_004f5c60 at 004f5c85
;
; Referenced Globals:
;   TerminatedCString s_mission_version_actor_ve_005c87b6
;   TerminatedCString s_d_d_005c87d9
;   TerminatedCString s_Root_name_of_mission_005c87e0
;   undefined4 DAT_005c87f9
;   TerminatedCString s_setList_005c87fd
;   undefined4 DAT_005c8809
;   undefined4 DAT_005c880d
;   TerminatedCString s_actorTypeList_005c8811
;   undefined4 DAT_005c8823
;   TerminatedCString s_s_d_005c8827
;   TerminatedCString s_actor_count_005c882e
;   undefined4 DAT_005c883e
;   TerminatedCString s_inventory_actor_count_005c8842
;   undefined4 DAT_005c885c
;   TerminatedCString s_actor_name_list_005c8860
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870
;   core_actor.cpp_CDemonActor_save_FUN_0040aff0
;   core_actor.cpp_syncActorTypeIDs_FUN_0040c870
;   core_gore.cpp_CGore_save_FUN_004cf0c0
;   core_inv.cpp_CInventory_saveItems_FUN_004dc700
;   core_main.c_FUN_004e4330
;   core_mission.cpp_CDemonMission_countActors_FUN_004f6a50
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6410
        ;   Label: core_mission.cpp_CDemonMission_writeFile_FUN_004f6410
    PUSH ESI                            ; 004f6411
    PUSH EDI                            ; 004f6412
    PUSH EBP                            ; 004f6413
    SUB ESP,0x4                         ; 004f6414
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f6417
    PUSH 0x5c87b6                       ; 004f641b | = "// mission version, actor version\n"
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f6420
    PUSH EDX                            ; 004f6424
    MOV dword ptr [EBX + 0x100c],0x7    ; 004f6425
    CALL crt_unknown.c_FUN_005a3140     ; 004f642f
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004f6434
    PUSH 0x4                            ; 004f6437
    MOV ECX,dword ptr [EBX + 0x100c]    ; 004f6439
    PUSH ECX                            ; 004f643f
    PUSH 0x5c87d9                       ; 004f6440 | = "%d,%d\n"
    MOV ESI,dword ptr [ESP + 0x28]      ; 004f6445
    PUSH ESI                            ; 004f6449
    CALL crt_unknown.c_FUN_005a3140     ; 004f644a
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 004f644f
    PUSH 0x5c87e0                       ; 004f6452 | = "// Root name of mission\n"
    PUSH ESI                            ; 004f6457
    CALL crt_unknown.c_FUN_005a3140     ; 004f6458
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004f645d
    LEA EAX,[EBX + 0x133c]              ; 004f6460
    PUSH EAX                            ; 004f6466
    PUSH 0x5c87f9                       ; 004f6467 | DAT_005c87f9
    PUSH ESI                            ; 004f646c
    CALL crt_unknown.c_FUN_005a3140     ; 004f646d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004f6472
    PUSH 0x5c87fd                       ; 004f6475 | = "// setList\n"
    PUSH ESI                            ; 004f647a
    CALL crt_unknown.c_FUN_005a3140     ; 004f647b
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004f6480
    MOV EDX,dword ptr [EBX + 0x4]       ; 004f6483
    PUSH EDX                            ; 004f6486
    PUSH 0x5c8809                       ; 004f6487 | DAT_005c8809
    MOV EDI,ESI                         ; 004f648c
    PUSH ESI                            ; 004f648e
    XOR EDI,ESI                         ; 004f648f
    CALL crt_unknown.c_FUN_005a3140     ; 004f6491
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ESI,dword ptr [EBX + 0x4]       ; 004f6496
    ADD ESP,0xc                         ; 004f6499
    TEST ESI,ESI                        ; 004f649c
    JLE 0x004f64d0                      ; 004f649e
        ;   XREF to: 004f64d0 (CONDITIONAL_JUMP)  ; LAB_004f64d0
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f64a0
    LEA ESI,[EBX + 0x8]                 ; 004f64a4
    PUSH ESI                            ; 004f64a7
        ;   Label: LAB_004f64a7
    PUSH 0x5c880d                       ; 004f64a8 | DAT_005c880d
    PUSH EBP                            ; 004f64ad
    INC EDI                             ; 004f64ae
    ADD ESI,0x100                       ; 004f64af
    CALL crt_unknown.c_FUN_005a3140     ; 004f64b5
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,dword ptr [EBX + 0x4]       ; 004f64ba
    ADD ESP,0xc                         ; 004f64bd
    CMP EDI,EAX                         ; 004f64c0
    JL 0x004f64a7                       ; 004f64c2
        ;   XREF to: 004f64a7 (CONDITIONAL_JUMP)  ; LAB_004f64a7
    LEA EAX,[EAX]                       ; 004f64c4
    LEA EDX,[EDX]                       ; 004f64ca
    PUSH 0x5c8811                       ; 004f64d0 | = "// actorTypeList\n"
        ;   Label: LAB_004f64d0
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f64d5
    PUSH EDX                            ; 004f64d9
    CALL crt_unknown.c_FUN_005a3140     ; 004f64da
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004f64df
    MOV ECX,dword ptr [0x007df9c4]      ; 004f64e2 | DAT_007df9c4
    PUSH ECX                            ; 004f64e8
    PUSH 0x5c8823                       ; 004f64e9 | DAT_005c8823
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f64ee
    PUSH ESI                            ; 004f64f2
    CALL crt_unknown.c_FUN_005a3140     ; 004f64f3
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004f64f8
    CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c870 ; 004f64fb
        ;   XREF to: 0040c870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_syncActorTypeIDs_FUN_0040c870()
    MOV EDI,dword ptr [0x007df9c4]      ; 004f6500 | DAT_007df9c4
    XOR ESI,ESI                         ; 004f6506
    TEST EDI,EDI                        ; 004f6508
    JLE 0x004f6540                      ; 004f650a
        ;   XREF to: 004f6540 (CONDITIONAL_JUMP)  ; LAB_004f6540
    XOR EDI,EDI                         ; 004f650c
    MOV EAX,dword ptr [EDI + 0x7df9c8]  ; 004f650e | DAT_007df9c8 | DAT_007df9cc
        ;   Label: LAB_004f650e
    MOV EBP,dword ptr [EAX + 0x34]      ; 004f6514
    PUSH EBP                            ; 004f6517
    PUSH EAX                            ; 004f6518
    PUSH 0x5c8827                       ; 004f6519 | = "%s %d\n"
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f651e
    PUSH EAX                            ; 004f6522
    ADD EDI,0x4                         ; 004f6523
    INC ESI                             ; 004f6526
    CALL crt_unknown.c_FUN_005a3140     ; 004f6527
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EDX,dword ptr [0x007df9c4]      ; 004f652c | DAT_007df9c4
    ADD ESP,0x10                        ; 004f6532
    CMP ESI,EDX                         ; 004f6535
    JL 0x004f650e                       ; 004f6537
        ;   XREF to: 004f650e (CONDITIONAL_JUMP)  ; LAB_004f650e
    LEA EAX,[EAX]                       ; 004f6539
    NOP                                 ; 004f653f
    PUSH 0x5c882e                       ; 004f6540 | = "// actor count\n"
        ;   Label: LAB_004f6540
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f6545
    PUSH ECX                            ; 004f6549
    CALL crt_unknown.c_FUN_005a3140     ; 004f654a
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004f654f
    PUSH EBX                            ; 004f6552
    CALL core_mission.cpp_CDemonMission_countActors_FUN_004f6a50 ; 004f6553
        ;   XREF to: 004f6a50 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_countActors_FUN_004f6a50(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004f6558
    PUSH EAX                            ; 004f655b
    PUSH 0x5c883e                       ; 004f655c | DAT_005c883e
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f6561
    PUSH ESI                            ; 004f6565
    CALL crt_unknown.c_FUN_005a3140     ; 004f6566
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004f656b
    PUSH 0x5c8842                       ; 004f656e | = "// inventory actor count\n"
    PUSH ESI                            ; 004f6573
    XOR EDI,EDI                         ; 004f6574
    CALL crt_unknown.c_FUN_005a3140     ; 004f6576
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ESI,dword ptr [EBX + 0x143c]    ; 004f657b
    ADD ESP,0x8                         ; 004f6581
    TEST ESI,ESI                        ; 004f6584
    JZ 0x004f65ae                       ; 004f6586
        ;   XREF to: 004f65ae (CONDITIONAL_JUMP)  ; LAB_004f65ae
    MOV ECX,dword ptr [0x01d5ba70]      ; 004f6588 | g_CHeroClassInfo.name_hash
        ;   Label: LAB_004f6588
    PUSH ECX                            ; 004f658e
    PUSH ESI                            ; 004f658f
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004f6590
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f6595
    TEST EAX,EAX                        ; 004f6598
    JZ 0x004f65a4                       ; 004f659a
        ;   XREF to: 004f65a4 (CONDITIONAL_JUMP)  ; LAB_004f65a4
    MOV EAX,dword ptr [EAX + 0x206f8]   ; 004f659c
    ADD EDI,EAX                         ; 004f65a2
    MOV ESI,dword ptr [ESI + 0x14c]     ; 004f65a4
        ;   Label: LAB_004f65a4
    TEST ESI,ESI                        ; 004f65aa
    JNZ 0x004f6588                      ; 004f65ac
        ;   XREF to: 004f6588 (CONDITIONAL_JUMP)  ; LAB_004f6588
    PUSH EDI                            ; 004f65ae
        ;   Label: LAB_004f65ae
    PUSH 0x5c885c                       ; 004f65af | DAT_005c885c
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f65b4
    PUSH EAX                            ; 004f65b8
    CALL crt_unknown.c_FUN_005a3140     ; 004f65b9
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004f65be
    PUSH 0x5c8860                       ; 004f65c1 | = "// actor name list\n"
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f65c6
    PUSH EDX                            ; 004f65ca
    CALL crt_unknown.c_FUN_005a3140     ; 004f65cb
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004f65d0
    MOV ESI,dword ptr [EBX + 0x143c]    ; 004f65d3
    MOV dword ptr [EBX + 0x145c],0x0    ; 004f65d9
    TEST ESI,ESI                        ; 004f65e3
    JZ 0x004f6652                       ; 004f65e5
        ;   XREF to: 004f6652 (CONDITIONAL_JUMP)  ; LAB_004f6652
    PUSH ESI                            ; 004f65e7
        ;   Label: LAB_004f65e7
    PUSH ESI                            ; 004f65e8
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870 ; 004f65e9
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f65ee
    PUSH EAX                            ; 004f65f1
    PUSH 0x5c8874                       ; 004f65f2 | = "%s \"%s\"\n"
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f65f7
    PUSH EAX                            ; 004f65fb
    CALL crt_unknown.c_FUN_005a3140     ; 004f65fc
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EDX,dword ptr [EBX + 0x145c]    ; 004f6601
    ADD ESP,0x10                        ; 004f6607
    CMP EDX,0x1770                      ; 004f660a
    JL 0x004f6635                       ; 004f6610
        ;   XREF to: 004f6635 (CONDITIONAL_JUMP)  ; LAB_004f6635
    MOV ECX,0x5c887d                    ; 004f6612 | = "..\\core\\mission.cpp"
    MOV EDI,0x1f0                       ; 004f6617
    PUSH 0x5c8891                       ; 004f661c | = "Too many actors"
    MOV dword ptr [0x01d71de0],ECX      ; 004f6621 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004f6627 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f662d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f6632
    MOV EAX,dword ptr [EBX + 0x145c]    ; 004f6635
        ;   Label: LAB_004f6635
    MOV dword ptr [EBX + EAX*0x4 + 0x1460],ESI ; 004f663b
    INC dword ptr [EBX + 0x145c]        ; 004f6642
    MOV ESI,dword ptr [ESI + 0x14c]     ; 004f6648
    TEST ESI,ESI                        ; 004f664e
    JNZ 0x004f65e7                      ; 004f6650
        ;   XREF to: 004f65e7 (CONDITIONAL_JUMP)  ; LAB_004f65e7
    MOV EAX,dword ptr [EBX + 0x143c]    ; 004f6652
        ;   Label: LAB_004f6652
    MOV dword ptr [ESP],EAX             ; 004f6658
    TEST EAX,EAX                        ; 004f665b
    JZ 0x004f66cf                       ; 004f665d
        ;   XREF to: 004f66cf (CONDITIONAL_JUMP)  ; LAB_004f66cf
    MOV EDX,dword ptr [0x01d5ba70]      ; 004f665f | g_CHeroClassInfo.name_hash
        ;   Label: LAB_004f665f
    PUSH EDX                            ; 004f6665
    MOV ECX,dword ptr [ESP + 0x4]       ; 004f6666
    PUSH ECX                            ; 004f666a
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004f666b
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f6670
    TEST EAX,EAX                        ; 004f6673
    JZ 0x004f66bf                       ; 004f6675
        ;   XREF to: 004f66bf (CONDITIONAL_JUMP)  ; LAB_004f66bf
    LEA EBP,[EAX + 0x206e8]             ; 004f6677
    XOR EDI,EDI                         ; 004f667d
    MOV ESI,EBP                         ; 004f667f
    MOV EAX,dword ptr [EBP + 0x10]      ; 004f6681
        ;   Label: LAB_004f6681
    CMP EDI,EAX                         ; 004f6684
    JGE 0x004f675d                      ; 004f6686
        ;   XREF to: 004f675d (CONDITIONAL_JUMP)  ; LAB_004f675d
    CMP dword ptr [EBX + 0x145c],0x1770 ; 004f668c
    JGE 0x004f6736                      ; 004f6696
        ;   XREF to: 004f6736 (CONDITIONAL_JUMP)  ; LAB_004f6736
    MOV EAX,dword ptr [EBX + 0x145c]    ; 004f669c
        ;   Label: LAB_004f669c
    MOV EDX,dword ptr [ESI + 0x14]      ; 004f66a2
    MOV dword ptr [EBX + EAX*0x4 + 0x1460],EDX ; 004f66a5
    MOV EDX,dword ptr [EBX + 0x145c]    ; 004f66ac
    ADD ESI,0x4                         ; 004f66b2
    INC EDX                             ; 004f66b5
    INC EDI                             ; 004f66b6
    MOV dword ptr [EBX + 0x145c],EDX    ; 004f66b7
    JMP 0x004f6681                      ; 004f66bd
        ;   XREF to: 004f6681 (UNCONDITIONAL_JUMP)  ; LAB_004f6681
    MOV EAX,dword ptr [ESP]             ; 004f66bf
        ;   Label: LAB_004f66bf
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004f66c2
    MOV dword ptr [ESP],EAX             ; 004f66c8
    TEST EAX,EAX                        ; 004f66cb
    JNZ 0x004f665f                      ; 004f66cd
        ;   XREF to: 004f665f (CONDITIONAL_JUMP)  ; LAB_004f665f
    PUSH 0x5c88c5                       ; 004f66cf | = "// actor data list\n"
        ;   Label: LAB_004f66cf
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f66d4
    PUSH EAX                            ; 004f66d8
    CALL crt_unknown.c_FUN_005a3140     ; 004f66d9
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ESI,dword ptr [EBX + 0x143c]    ; 004f66de
    ADD ESP,0x8                         ; 004f66e4
    TEST ESI,ESI                        ; 004f66e7
    JZ 0x004f6710                       ; 004f66e9
        ;   XREF to: 004f6710 (CONDITIONAL_JUMP)  ; LAB_004f6710
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f66eb
    PUSH EDI                            ; 004f66ef
        ;   Label: LAB_004f66ef
    PUSH ESI                            ; 004f66f0
    CALL core_actor.cpp_CDemonActor_save_FUN_0040aff0 ; 004f66f1
        ;   XREF to: 0040aff0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_save_FUN_0040aff0(CDemonActor * this_ptr, _FILE * file_handle)
    MOV ESI,dword ptr [ESI + 0x14c]     ; 004f66f6
    ADD ESP,0x8                         ; 004f66fc
    TEST ESI,ESI                        ; 004f66ff
    JNZ 0x004f66ef                      ; 004f6701
        ;   XREF to: 004f66ef (CONDITIONAL_JUMP)  ; LAB_004f66ef
    LEA EAX,[EAX]                       ; 004f6703
    LEA EDX,[EDX]                       ; 004f6709
    NOP                                 ; 004f670f
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004f6710
        ;   Label: LAB_004f6710
    PUSH ECX                            ; 004f6714
    MOV ESI,dword ptr [0x005fed24]      ; 004f6715 | g_CGorePtr
    PUSH ESI                            ; 004f671b
    CALL core_gore.cpp_CGore_save_FUN_004cf0c0 ; 004f671c
        ;   XREF to: 004cf0c0 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CGore_save_FUN_004cf0c0(CGore * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004f6721
    MOV dword ptr [EBX + 0x145c],0x0    ; 004f6724
    ADD ESP,0x4                         ; 004f672e
    POP EBP                             ; 004f6731
    POP EDI                             ; 004f6732
    POP ESI                             ; 004f6733
    POP EBX                             ; 004f6734
    RET                                 ; 004f6735
    MOV ECX,0x5c88a1                    ; 004f6736 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004f6736
    MOV EAX,0x1fb                       ; 004f673b
    PUSH 0x5c88b5                       ; 004f6740 | = "Too many actors"
    MOV dword ptr [0x01d71de0],ECX      ; 004f6745 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004f674b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f6750
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f6755
    JMP 0x004f669c                      ; 004f6758
        ;   XREF to: 004f669c (UNCONDITIONAL_JUMP)  ; LAB_004f669c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f675d
        ;   Label: LAB_004f675d
    PUSH EAX                            ; 004f6761
    PUSH EBP                            ; 004f6762
    CALL core_inv.cpp_CInventory_saveItems_FUN_004dc700 ; 004f6763
        ;   XREF to: 004dc700 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_saveItems_FUN_004dc700(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004f6768
    JMP 0x004f66bf                      ; 004f676b
        ;   XREF to: 004f66bf (UNCONDITIONAL_JUMP)  ; LAB_004f66bf

