; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hero_cpp_CHero_archive_FUN_004f2610(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xd4]:1  local_d4
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0xc]:1  local_c
;
; XREF[9]:
;   core_baron.cpp_CBaron_archive_FUN_00413a70 at 00413a76
;   core_colonel.cpp_CColonel_archive_FUN_00440490 at 00440495
;   core_gabriela.cpp_CGabriella_archive_FUN_004d6090 at 004d6096
;   core_haystack.cpp_CHaystack_archive_FUN_004f1b50 at 004f1b55
;   core_icepick.cpp_CIcePick_archive_FUN_004f9590 at 004f9595
;   core_moloch.cpp_CMoloch_archive_FUN_00529880 at 00529886
;   core_scat.cpp_CSCat_archive_FUN_00557db0 at 00557db5
;   core_stranger.cpp_CStranger_archive_FUN_005c2fe0 at 005c2fe6
;   core_svetlana.cpp_CSVetlana_archive_FUN_005d9bb0 at 005d9bb5
;
; Referenced Globals:
;   TerminatedCString s_motion_state_0062eaad
;   TerminatedCString s_partStatus_0062eaba
;   TerminatedCString s_grabbedBy_0062eac5
;   TerminatedCString s_hitPoints_0062eacf
;   TerminatedCString s_motion_state_0062ead9
;   TerminatedCString s_partStatus_0062eae6
;   TerminatedCString s_grabbedBy_0062eaf1
;   TerminatedCString s_controlType_0062eafb
;   TerminatedCString s_objectToPickUp_0062eb07
;   TerminatedCString s_doorToOpen_0062eb16
;   TerminatedCString s_leverToPull_0062eb21
;   TerminatedCString s_ladderToClimb_0062eb2d
;   TerminatedCString s_pushedObject_0062eb3b
;   TerminatedCString s_keys_0062eb48
;   TerminatedCString s_keyNameList_d_0062eb4d
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveMotionState_FUN_0040b9f0
;   core_actor.cpp_archivePartStatus_FUN_0040bae0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;   core_charactr.cpp_CCharacter_archive_FUN_004283a0
;   core_inv.cpp_CInventory_load_FUN_004ff400
;   core_inv.cpp_CInventory_save_FUN_004ff210
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2610
        ;   Label: core_hero.cpp_CHero_archive_FUN_004f2610
    PUSH ESI                            ; 004f2611
    SUB ESP,0xcc                        ; 004f2612
    MOV ESI,dword ptr [ESP + 0xd8]      ; 004f2618
    MOV EDX,dword ptr [0x0067cc1c]      ; 004f261f | g_CHeroClassVersion
    LEA EBX,[ESI + 0x158]               ; 004f2625
    CMP EDX,0x4                         ; 004f262b
    JGE 0x004f26a2                      ; 004f262e
        ;   XREF to: 004f26a2 (CONDITIONAL_JUMP)  ; LAB_004f26a2
    PUSH ESI                            ; 004f2630
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 004f2631
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    MOV ECX,dword ptr [0x0067cc1c]      ; 004f2636 | g_CHeroClassVersion
    ADD ESP,0x4                         ; 004f263c
    CMP ECX,0x2                         ; 004f263f
    JL 0x004f2652                       ; 004f2642
        ;   XREF to: 004f2652 (CONDITIONAL_JUMP)  ; LAB_004f2652
    PUSH 0x62eaad                       ; 004f2644 | = "motion state"
    PUSH EBX                            ; 004f2649
    CALL core_actor.cpp_archiveMotionState_FUN_0040b9f0 ; 004f264a
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004f264f
    CMP dword ptr [0x0067cc1c],0x3      ; 004f2652 | g_CHeroClassVersion
        ;   Label: LAB_004f2652
    JGE 0x004f2664                      ; 004f2659
        ;   XREF to: 004f2664 (CONDITIONAL_JUMP)  ; LAB_004f2664
    ADD ESP,0xcc                        ; 004f265b
        ;   Label: LAB_004f265b
    POP ESI                             ; 004f2661
    POP EBX                             ; 004f2662
    RET                                 ; 004f2663
    PUSH 0x62eaba                       ; 004f2664 | = "partStatus"
        ;   Label: LAB_004f2664
    LEA EAX,[ESI + 0x158]               ; 004f2669
    PUSH EAX                            ; 004f266f
    CALL core_actor.cpp_archivePartStatus_FUN_0040bae0 ; 004f2670
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bae0(void * part, char * property_name)
    ADD ESP,0x8                         ; 004f2675
    PUSH 0x62eac5                       ; 004f2678 | = "grabbedBy"
    LEA EAX,[ESI + 0x2598]              ; 004f267d
    PUSH EAX                            ; 004f2683
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004f2684
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f2689
    PUSH 0x62eacf                       ; 004f268c | = "hitPoints"
    ADD ESI,0x243c                      ; 004f2691
    PUSH ESI                            ; 004f2697
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004f2698
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f269d
    JMP 0x004f265b                      ; 004f26a0
        ;   XREF to: 004f265b (UNCONDITIONAL_JUMP)  ; LAB_004f265b
    PUSH ESI                            ; 004f26a2
        ;   Label: LAB_004f26a2
    CALL core_charactr.cpp_CCharacter_archive_FUN_004283a0 ; 004f26a3
        ;   XREF to: 004283a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_archive_FUN_004283a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f26a8
    PUSH 0x62ead9                       ; 004f26ab | = "motion state"
    PUSH EBX                            ; 004f26b0
    CALL core_actor.cpp_archiveMotionState_FUN_0040b9f0 ; 004f26b1
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004f26b6
    PUSH 0x62eae6                       ; 004f26b9 | = "partStatus"
    PUSH EBX                            ; 004f26be
    CALL core_actor.cpp_archivePartStatus_FUN_0040bae0 ; 004f26bf
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bae0(void * part, char * property_name)
    MOV ECX,dword ptr [0x0067cc1c]      ; 004f26c4 | g_CHeroClassVersion
    ADD ESP,0x8                         ; 004f26ca
    CMP ECX,0x8                         ; 004f26cd
    JGE 0x004f26f0                      ; 004f26d0
        ;   XREF to: 004f26f0 (CONDITIONAL_JUMP)  ; LAB_004f26f0
    PUSH 0x62eaf1                       ; 004f26d2 | = "grabbedBy"
    LEA EAX,[ESI + 0x2598]              ; 004f26d7
    PUSH EAX                            ; 004f26dd
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004f26de
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f26e3
    MOV dword ptr [ESI + 0x259c],0x0    ; 004f26e6
    CMP dword ptr [0x0067cc1c],0x5      ; 004f26f0 | g_CHeroClassVersion
        ;   Label: LAB_004f26f0
    JL 0x004f270d                       ; 004f26f7
        ;   XREF to: 004f270d (CONDITIONAL_JUMP)  ; LAB_004f270d
    PUSH 0x62eafb                       ; 004f26f9 | = "controlType"
    LEA EAX,[ESI + 0xbe28]              ; 004f26fe
    PUSH EAX                            ; 004f2704
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004f2705
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f270a
    CMP dword ptr [0x0067cc1c],0x7      ; 004f270d | g_CHeroClassVersion
        ;   Label: LAB_004f270d
    JL 0x004f277a                       ; 004f2714
        ;   XREF to: 004f277a (CONDITIONAL_JUMP)  ; LAB_004f277a
    PUSH 0x62eb07                       ; 004f2716 | = "objectToPickUp"
    LEA EAX,[ESI + 0x1fba0]             ; 004f271b
    PUSH EAX                            ; 004f2721
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004f2722
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f2727
    PUSH 0x62eb16                       ; 004f272a | = "doorToOpen"
    LEA EAX,[ESI + 0x1fb9c]             ; 004f272f
    PUSH EAX                            ; 004f2735
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004f2736
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f273b
    PUSH 0x62eb21                       ; 004f273e | = "leverToPull"
    LEA EAX,[ESI + 0x1fba8]             ; 004f2743
    PUSH EAX                            ; 004f2749
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004f274a
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f274f
    PUSH 0x62eb2d                       ; 004f2752 | = "ladderToClimb"
    LEA EAX,[ESI + 0x1fbac]             ; 004f2757
    PUSH EAX                            ; 004f275d
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004f275e
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f2763
    PUSH 0x62eb3b                       ; 004f2766 | = "pushedObject"
    LEA EAX,[ESI + 0x1fba4]             ; 004f276b
    PUSH EAX                            ; 004f2771
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004f2772
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f2777
    CMP dword ptr [0x0067cc1c],0xa      ; 004f277a | g_CHeroClassVersion
        ;   Label: LAB_004f277a
    JNZ 0x004f2798                      ; 004f2781
        ;   XREF to: 004f2798 (CONDITIONAL_JUMP)  ; LAB_004f2798
    PUSH 0x62eb48                       ; 004f2783 | = "keys"
    LEA EAX,[ESP + 0xcc]                ; 004f2788
    PUSH EAX                            ; 004f278f
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004f2790
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f2795
    MOV EAX,[0x0067cc1c]                ; 004f2798 | g_CHeroClassVersion
        ;   Label: LAB_004f2798
    CMP EAX,0x8                         ; 004f279d
    JL 0x004f27e0                       ; 004f27a0
        ;   XREF to: 004f27e0 (CONDITIONAL_JUMP)  ; LAB_004f27e0
    CMP EAX,0xb                         ; 004f27a2
    JGE 0x004f27e0                      ; 004f27a5
        ;   XREF to: 004f27e0 (CONDITIONAL_JUMP)  ; LAB_004f27e0
    XOR EBX,EBX                         ; 004f27a7
    PUSH EBX                            ; 004f27a9
        ;   Label: LAB_004f27a9
    PUSH 0x62eb4d                       ; 004f27aa | = "keyNameList[%d]"
    LEA EAX,[ESP + 0x6c]                ; 004f27af
    PUSH EAX                            ; 004f27b3
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004f27b4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004f27b9
    LEA EAX,[ESP + 0x64]                ; 004f27bc
    PUSH EAX                            ; 004f27c0
    LEA EAX,[ESP + 0x4]                 ; 004f27c1
    PUSH EAX                            ; 004f27c5
    INC EBX                             ; 004f27c6
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 004f27c7
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004f27cc
    CMP EBX,0x20                        ; 004f27cf
    JL 0x004f27a9                       ; 004f27d2
        ;   XREF to: 004f27a9 (CONDITIONAL_JUMP)  ; LAB_004f27a9
    LEA EAX,[EAX]                       ; 004f27d4
    LEA EDX,[EDX]                       ; 004f27da
    CMP dword ptr [0x0067cc1c],0x9      ; 004f27e0 | g_CHeroClassVersion
        ;   Label: LAB_004f27e0
    JL 0x004f27fd                       ; 004f27e7
        ;   XREF to: 004f27fd (CONDITIONAL_JUMP)  ; LAB_004f27fd
    PUSH 0x62eb5d                       ; 004f27e9 | = "AITask"
    LEA EAX,[ESI + 0x1fbd0]             ; 004f27ee
    PUSH EAX                            ; 004f27f4
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004f27f5
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f27fa
    CMP dword ptr [0x0067cc1c],0xc      ; 004f27fd | g_CHeroClassVersion
        ;   Label: LAB_004f27fd
    JL 0x004f281a                       ; 004f2804
        ;   XREF to: 004f281a (CONDITIONAL_JUMP)  ; LAB_004f281a
    PUSH 0x62eb64                       ; 004f2806 | = "isWearingGasMask"
    LEA EAX,[ESI + 0x1fb98]             ; 004f280b
    PUSH EAX                            ; 004f2811
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004f2812
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f2817
    CMP dword ptr [0x0067cc1c],0x6      ; 004f281a | g_CHeroClassVersion
        ;   Label: LAB_004f281a
    JL 0x004f265b                       ; 004f2821
        ;   XREF to: 004f265b (CONDITIONAL_JUMP)  ; LAB_004f265b
    MOV EDX,dword ptr [0x00822038]      ; 004f2827 | g_ActorReadingMode
    LEA EAX,[ESI + 0x1f738]             ; 004f282d
    CMP EDX,0x1                         ; 004f2833
    JNZ 0x004f2851                      ; 004f2836
        ;   XREF to: 004f2851 (CONDITIONAL_JUMP)  ; LAB_004f2851
    MOV EBX,dword ptr [0x00822034]      ; 004f2838 | g_ActorDataFile
    PUSH EBX                            ; 004f283e
    PUSH EAX                            ; 004f283f
    CALL core_inv.cpp_CInventory_load_FUN_004ff400 ; 004f2840
        ;   XREF to: 004ff400 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_load_FUN_004ff400(CInventory * this_ptr)
    ADD ESP,0x8                         ; 004f2845
    ADD ESP,0xcc                        ; 004f2848
    POP ESI                             ; 004f284e
    POP EBX                             ; 004f284f
    RET                                 ; 004f2850
    MOV ECX,dword ptr [0x00822034]      ; 004f2851 | g_ActorDataFile
        ;   Label: LAB_004f2851
    PUSH ECX                            ; 004f2857
    PUSH EAX                            ; 004f2858
    CALL core_inv.cpp_CInventory_save_FUN_004ff210 ; 004f2859
        ;   XREF to: 004ff210 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_save_FUN_004ff210(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004f285e
    ADD ESP,0xcc                        ; 004f2861
    POP ESI                             ; 004f2867
    POP EBX                             ; 004f2868
    RET                                 ; 004f2869

