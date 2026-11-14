; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_archive_FUN_004ce590(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x14]:1  local_14
;
; XREF[10]:
;   core_baron.cpp_CBaron_archive_FUN_00410600 at 00410606
;   core_colonel.cpp_CColonel_archive_FUN_00436480 at 00436485
;   core_doc.cpp_CDoc_archive_FUN_004597a0 at 004597a9
;   core_gabriela.cpp_CGabriella_archive_FUN_004b0fb0 at 004b0fb6
;   core_haystack.cpp_CHaystack_archive_FUN_004cd860 at 004cd865
;   core_icepick.cpp_CIcePick_archive_FUN_004d6350 at 004d6355
;   core_moloch.cpp_CMoloch_archive_FUN_00502200 at 00502206
;   core_scat.cpp_CScat_archive_FUN_0051fa50 at 0051fa55
;   core_stranger.cpp_CStranger_archive_FUN_0056b600 at 0056b606
;   core_svetlana.cpp_CSvetlana_archive_FUN_005716f0 at 005716f5
;
; Referenced Globals:
;   TerminatedCString s_motion_state_005d9a43
;   TerminatedCString s_partStatus_005d9a50
;   TerminatedCString s_grabbedBy_005d9a5b
;   TerminatedCString s_hitPoints_005d9a65
;   TerminatedCString s_motion_state_005d9a6f
;   TerminatedCString s_partStatus_005d9a7c
;   TerminatedCString s_grabbedBy_005d9a87
;   TerminatedCString s_controlType_005d9a91
;   TerminatedCString s_objectToPickUp_005d9a9d
;   TerminatedCString s_doorToOpen_005d9aac
;   TerminatedCString s_leverToPull_005d9ab7
;   TerminatedCString s_ladderToClimb_005d9ac3
;   TerminatedCString s_pushedObject_005d9ad1
;   undefined4 DAT_005d9ade
;   TerminatedCString s_keyNameList_d_005d9ae3
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_actor.cpp_archivePartStatus_FUN_0040bc50
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;   core_charactr.cpp_CCharacter_archive_FUN_00422c30
;   core_inv.cpp_CInventory_load_FUN_004dc4b0
;   core_inv.cpp_CInventory_save_FUN_004dc2c0
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce590
        ;   Label: core_hero.cpp_CHero_archive_FUN_004ce590
    PUSH ESI                            ; 004ce591
    PUSH EDI                            ; 004ce592
    PUSH EBP                            ; 004ce593
    SUB ESP,0xcc                        ; 004ce594
    MOV ESI,dword ptr [ESP + 0xe0]      ; 004ce59a
    MOV EDX,dword ptr [0x00617a5c]      ; 004ce5a1 | g_CHeroClassVersion
    LEA EBX,[ESI + 0x2b4]               ; 004ce5a7
    CMP EDX,0x4                         ; 004ce5ad
    JGE 0x004ce633                      ; 004ce5b0
        ;   XREF to: 004ce633 (CONDITIONAL_JUMP)  ; LAB_004ce633
    PUSH ESI                            ; 004ce5b6
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 004ce5b7
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    MOV ECX,dword ptr [0x00617a5c]      ; 004ce5bc | g_CHeroClassVersion
    ADD ESP,0x4                         ; 004ce5c2
    CMP ECX,0x2                         ; 004ce5c5
    JL 0x004ce5d8                       ; 004ce5c8
        ;   XREF to: 004ce5d8 (CONDITIONAL_JUMP)  ; LAB_004ce5d8
    PUSH 0x5d9a43                       ; 004ce5ca | = "motion state"
    PUSH EBX                            ; 004ce5cf
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 004ce5d0
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bb60(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004ce5d5
    CMP dword ptr [0x00617a5c],0x3      ; 004ce5d8 | g_CHeroClassVersion
        ;   Label: LAB_004ce5d8
    JGE 0x004ce5ec                      ; 004ce5df
        ;   XREF to: 004ce5ec (CONDITIONAL_JUMP)  ; LAB_004ce5ec
    ADD ESP,0xcc                        ; 004ce5e1
        ;   Label: LAB_004ce5e1
    POP EBP                             ; 004ce5e7
    POP EDI                             ; 004ce5e8
    POP ESI                             ; 004ce5e9
    POP EBX                             ; 004ce5ea
    RET                                 ; 004ce5eb
    PUSH 0x5d9a50                       ; 004ce5ec | = "partStatus"
        ;   Label: LAB_004ce5ec
    LEA EAX,[ESI + 0x2b4]               ; 004ce5f1
    PUSH EAX                            ; 004ce5f7
    CALL core_actor.cpp_archivePartStatus_FUN_0040bc50 ; 004ce5f8
        ;   XREF to: 0040bc50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bc50(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce5fd
    PUSH 0x5d9a5b                       ; 004ce600 | = "grabbedBy"
    LEA EAX,[ESI + 0x276c]              ; 004ce605
    PUSH EAX                            ; 004ce60b
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004ce60c
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce611
    PUSH 0x5d9a65                       ; 004ce614 | = "hitPoints"
    ADD ESI,0x25a8                      ; 004ce619
    PUSH ESI                            ; 004ce61f
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004ce620
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce625
    ADD ESP,0xcc                        ; 004ce628
    POP EBP                             ; 004ce62e
    POP EDI                             ; 004ce62f
    POP ESI                             ; 004ce630
    POP EBX                             ; 004ce631
    RET                                 ; 004ce632
    PUSH ESI                            ; 004ce633
        ;   Label: LAB_004ce633
    CALL core_charactr.cpp_CCharacter_archive_FUN_00422c30 ; 004ce634
        ;   XREF to: 00422c30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_archive_FUN_00422c30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004ce639
    PUSH 0x5d9a6f                       ; 004ce63c | = "motion state"
    PUSH EBX                            ; 004ce641
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 004ce642
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bb60(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004ce647
    PUSH 0x5d9a7c                       ; 004ce64a | = "partStatus"
    PUSH EBX                            ; 004ce64f
    CALL core_actor.cpp_archivePartStatus_FUN_0040bc50 ; 004ce650
        ;   XREF to: 0040bc50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bc50(CDeformableModelInstance * model_ptr, char * property_name)
    MOV ECX,dword ptr [0x00617a5c]      ; 004ce655 | g_CHeroClassVersion
    ADD ESP,0x8                         ; 004ce65b
    CMP ECX,0x8                         ; 004ce65e
    JGE 0x004ce681                      ; 004ce661
        ;   XREF to: 004ce681 (CONDITIONAL_JUMP)  ; LAB_004ce681
    PUSH 0x5d9a87                       ; 004ce663 | = "grabbedBy"
    LEA EAX,[ESI + 0x276c]              ; 004ce668
    PUSH EAX                            ; 004ce66e
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004ce66f
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce674
    MOV dword ptr [ESI + 0x2770],0x0    ; 004ce677
    CMP dword ptr [0x00617a5c],0x5      ; 004ce681 | g_CHeroClassVersion
        ;   Label: LAB_004ce681
    JL 0x004ce69e                       ; 004ce688
        ;   XREF to: 004ce69e (CONDITIONAL_JUMP)  ; LAB_004ce69e
    PUSH 0x5d9a91                       ; 004ce68a | = "controlType"
    LEA EAX,[ESI + 0x10a64]             ; 004ce68f
    PUSH EAX                            ; 004ce695
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004ce696
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce69b
    CMP dword ptr [0x00617a5c],0x7      ; 004ce69e | g_CHeroClassVersion
        ;   Label: LAB_004ce69e
    JL 0x004ce70b                       ; 004ce6a5
        ;   XREF to: 004ce70b (CONDITIONAL_JUMP)  ; LAB_004ce70b
    PUSH 0x5d9a9d                       ; 004ce6a7 | = "objectToPickUp"
    LEA EAX,[ESI + 0x25608]             ; 004ce6ac
    PUSH EAX                            ; 004ce6b2
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004ce6b3
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce6b8
    PUSH 0x5d9aac                       ; 004ce6bb | = "doorToOpen"
    LEA EAX,[ESI + 0x25604]             ; 004ce6c0
    PUSH EAX                            ; 004ce6c6
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004ce6c7
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce6cc
    PUSH 0x5d9ab7                       ; 004ce6cf | = "leverToPull"
    LEA EAX,[ESI + 0x25610]             ; 004ce6d4
    PUSH EAX                            ; 004ce6da
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004ce6db
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce6e0
    PUSH 0x5d9ac3                       ; 004ce6e3 | = "ladderToClimb"
    LEA EAX,[ESI + 0x25614]             ; 004ce6e8
    PUSH EAX                            ; 004ce6ee
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004ce6ef
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce6f4
    PUSH 0x5d9ad1                       ; 004ce6f7 | = "pushedObject"
    LEA EAX,[ESI + 0x2560c]             ; 004ce6fc
    PUSH EAX                            ; 004ce702
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004ce703
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce708
    CMP dword ptr [0x00617a5c],0xa      ; 004ce70b | g_CHeroClassVersion
        ;   Label: LAB_004ce70b
    JNZ 0x004ce729                      ; 004ce712
        ;   XREF to: 004ce729 (CONDITIONAL_JUMP)  ; LAB_004ce729
    PUSH 0x5d9ade                       ; 004ce714 | DAT_005d9ade
    LEA EAX,[ESP + 0xcc]                ; 004ce719
    PUSH EAX                            ; 004ce720
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004ce721
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce726
    MOV EAX,[0x00617a5c]                ; 004ce729 | g_CHeroClassVersion
        ;   Label: LAB_004ce729
    CMP EAX,0x8                         ; 004ce72e
    JL 0x004ce770                       ; 004ce731
        ;   XREF to: 004ce770 (CONDITIONAL_JUMP)  ; LAB_004ce770
    CMP EAX,0xb                         ; 004ce733
    JGE 0x004ce770                      ; 004ce736
        ;   XREF to: 004ce770 (CONDITIONAL_JUMP)  ; LAB_004ce770
    XOR EBX,EBX                         ; 004ce738
    PUSH EBX                            ; 004ce73a
        ;   Label: LAB_004ce73a
    PUSH 0x5d9ae3                       ; 004ce73b | = "keyNameList[%d]"
    LEA EAX,[ESP + 0x8]                 ; 004ce740
    PUSH EAX                            ; 004ce744
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ce745
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ce74a
    MOV EAX,ESP                         ; 004ce74d
    PUSH EAX                            ; 004ce74f
    LEA EAX,[ESP + 0x68]                ; 004ce750
    PUSH EAX                            ; 004ce754
    INC EBX                             ; 004ce755
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004ce756
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ce75b
    CMP EBX,0x20                        ; 004ce75e
    JL 0x004ce73a                       ; 004ce761
        ;   XREF to: 004ce73a (CONDITIONAL_JUMP)  ; LAB_004ce73a
    LEA EAX,[EAX]                       ; 004ce763
    LEA EDX,[EDX]                       ; 004ce769
    NOP                                 ; 004ce76f
    CMP dword ptr [0x00617a5c],0x9      ; 004ce770 | g_CHeroClassVersion
        ;   Label: LAB_004ce770
    JL 0x004ce78d                       ; 004ce777
        ;   XREF to: 004ce78d (CONDITIONAL_JUMP)  ; LAB_004ce78d
    PUSH 0x5d9af3                       ; 004ce779 | = "AITask"
    LEA EAX,[ESI + 0x25638]             ; 004ce77e
    PUSH EAX                            ; 004ce784
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004ce785
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce78a
    CMP dword ptr [0x00617a5c],0xc      ; 004ce78d | g_CHeroClassVersion
        ;   Label: LAB_004ce78d
    JL 0x004ce7aa                       ; 004ce794
        ;   XREF to: 004ce7aa (CONDITIONAL_JUMP)  ; LAB_004ce7aa
    PUSH 0x5d9afa                       ; 004ce796 | = "isWearingGasMask"
    LEA EAX,[ESI + 0x255e8]             ; 004ce79b
    PUSH EAX                            ; 004ce7a1
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004ce7a2
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce7a7
    CMP dword ptr [0x00617a5c],0xd      ; 004ce7aa | g_CHeroClassVersion
        ;   Label: LAB_004ce7aa
    JL 0x004ce7c7                       ; 004ce7b1
        ;   XREF to: 004ce7c7 (CONDITIONAL_JUMP)  ; LAB_004ce7c7
    PUSH 0x5d9b0b                       ; 004ce7b3 | = "isWearingGoggles"
    LEA EAX,[ESI + 0x255ec]             ; 004ce7b8
    PUSH EAX                            ; 004ce7be
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004ce7bf
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce7c4
    MOV EDX,dword ptr [0x00617a5c]      ; 004ce7c7 | g_CHeroClassVersion
        ;   Label: LAB_004ce7c7
    CMP EDX,0x11                        ; 004ce7cd
    JGE 0x004ce8ad                      ; 004ce7d0
        ;   XREF to: 004ce8ad (CONDITIONAL_JUMP)  ; LAB_004ce8ad
    CMP EDX,0x6                         ; 004ce7d6
    JL 0x004ce800                       ; 004ce7d9
        ;   XREF to: 004ce800 (CONDITIONAL_JUMP)  ; LAB_004ce800
    MOV EBX,dword ptr [0x007bc038]      ; 004ce7db | DAT_007bc038
    LEA EAX,[ESI + 0x2437c]             ; 004ce7e1
    CMP EBX,0x1                         ; 004ce7e7
    JNZ 0x004ce92a                      ; 004ce7ea
        ;   XREF to: 004ce92a (CONDITIONAL_JUMP)  ; LAB_004ce92a
    MOV EBP,dword ptr [0x007bc034]      ; 004ce7f0 | DAT_007bc034
    PUSH EBP                            ; 004ce7f6
    PUSH EAX                            ; 004ce7f7
    CALL core_inv.cpp_CInventory_load_FUN_004dc4b0 ; 004ce7f8
        ;   XREF to: 004dc4b0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_load_FUN_004dc4b0(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004ce7fd
        ;   Label: LAB_004ce7fd
    CMP dword ptr [0x00617a5c],0xe      ; 004ce800 | g_CHeroClassVersion
        ;   Label: LAB_004ce800
    JL 0x004ce843                       ; 004ce807
        ;   XREF to: 004ce843 (CONDITIONAL_JUMP)  ; LAB_004ce843
    LEA EBX,[ESI + 0x24fc4]             ; 004ce809
    MOV EDX,dword ptr [0x007bc038]      ; 004ce80f | DAT_007bc038
    LEA EAX,[ESI + 0x249a0]             ; 004ce815
    CMP EDX,0x1                         ; 004ce81b
    JNZ 0x004ce93c                      ; 004ce81e
        ;   XREF to: 004ce93c (CONDITIONAL_JUMP)  ; LAB_004ce93c
    MOV EBP,dword ptr [0x007bc034]      ; 004ce824 | DAT_007bc034
    PUSH EBP                            ; 004ce82a
    PUSH EAX                            ; 004ce82b
    CALL core_inv.cpp_CInventory_load_FUN_004dc4b0 ; 004ce82c
        ;   XREF to: 004dc4b0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_load_FUN_004dc4b0(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004ce831
    MOV EAX,[0x007bc034]                ; 004ce834 | DAT_007bc034
    PUSH EAX                            ; 004ce839
    PUSH EBX                            ; 004ce83a
    CALL core_inv.cpp_CInventory_load_FUN_004dc4b0 ; 004ce83b
        ;   XREF to: 004dc4b0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_load_FUN_004dc4b0(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004ce840
        ;   Label: LAB_004ce840
    CMP dword ptr [0x00617a5c],0xf      ; 004ce843 | g_CHeroClassVersion
        ;   Label: LAB_004ce843
    JL 0x004ce890                       ; 004ce84a
        ;   XREF to: 004ce890 (CONDITIONAL_JUMP)  ; LAB_004ce890
    PUSH 0x5d9b1c                       ; 004ce84c | = "HeroInventoryIndex"
    LEA EAX,[ESI + 0x2563c]             ; 004ce851
    PUSH EAX                            ; 004ce857
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004ce858
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    LEA EDI,[ESI + 0x247e8]             ; 004ce85d
    ADD ESP,0x8                         ; 004ce863
    MOV EBX,EDI                         ; 004ce866
    ADD EDI,0x190                       ; 004ce868
    PUSH 0x5d9b2f                       ; 004ce86e | = "inventoryIndex"
        ;   Label: LAB_004ce86e
    PUSH EBX                            ; 004ce873
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004ce874
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD EBX,0x4                         ; 004ce879
    ADD ESP,0x8                         ; 004ce87c
    CMP EBX,EDI                         ; 004ce87f
    JNZ 0x004ce86e                      ; 004ce881
        ;   XREF to: 004ce86e (CONDITIONAL_JUMP)  ; LAB_004ce86e
    LEA EAX,[EAX]                       ; 004ce883
    LEA EDX,[EDX]                       ; 004ce889
    NOP                                 ; 004ce88f
    CMP dword ptr [0x00617a5c],0x10     ; 004ce890 | g_CHeroClassVersion
        ;   Label: LAB_004ce890
    JL 0x004ce8ad                       ; 004ce897
        ;   XREF to: 004ce8ad (CONDITIONAL_JUMP)  ; LAB_004ce8ad
    PUSH 0x5d9b3e                       ; 004ce899 | = "InventoryIndex"
    LEA EAX,[ESI + 0x247e4]             ; 004ce89e
    PUSH EAX                            ; 004ce8a4
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004ce8a5
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce8aa
    MOV EBX,dword ptr [0x00617a5c]      ; 004ce8ad | g_CHeroClassVersion
        ;   Label: LAB_004ce8ad
    CMP EBX,0x11                        ; 004ce8b3
    JL 0x004ce5e1                       ; 004ce8b6
        ;   XREF to: 004ce5e1 (CONDITIONAL_JUMP)  ; LAB_004ce5e1
    CMP EBX,0xf                         ; 004ce8bc
    JGE 0x004ce95e                      ; 004ce8bf
        ;   XREF to: 004ce95e (CONDITIONAL_JUMP)  ; LAB_004ce95e
    LEA EAX,[EAX]                       ; 004ce8c5
    LEA EDX,[EDX]                       ; 004ce8cb
    MOV EBX,EBX                         ; 004ce8ce
    CMP dword ptr [0x00617a5c],0x10     ; 004ce8d0 | g_CHeroClassVersion
        ;   Label: LAB_004ce8d0
    JL 0x004ce8ed                       ; 004ce8d7
        ;   XREF to: 004ce8ed (CONDITIONAL_JUMP)  ; LAB_004ce8ed
    PUSH 0x5d9b6f                       ; 004ce8d9 | = "InventoryIndex"
    LEA EAX,[ESI + 0x247e4]             ; 004ce8de
    PUSH EAX                            ; 004ce8e4
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004ce8e5
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ce8ea
    CMP dword ptr [0x00617a5c],0x6      ; 004ce8ed | g_CHeroClassVersion
        ;   Label: LAB_004ce8ed
    JL 0x004ce5e1                       ; 004ce8f4
        ;   XREF to: 004ce5e1 (CONDITIONAL_JUMP)  ; LAB_004ce5e1
    MOV EDX,dword ptr [0x007bc038]      ; 004ce8fa | DAT_007bc038
    LEA EAX,[ESI + 0x2437c]             ; 004ce900
    CMP EDX,0x1                         ; 004ce906
    JNZ 0x004ce99a                      ; 004ce909
        ;   XREF to: 004ce99a (CONDITIONAL_JUMP)  ; LAB_004ce99a
    MOV EBX,dword ptr [0x007bc034]      ; 004ce90f | DAT_007bc034
    PUSH EBX                            ; 004ce915
    PUSH EAX                            ; 004ce916
    CALL core_inv.cpp_CInventory_load_FUN_004dc4b0 ; 004ce917
        ;   XREF to: 004dc4b0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_load_FUN_004dc4b0(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004ce91c
    ADD ESP,0xcc                        ; 004ce91f
    POP EBP                             ; 004ce925
    POP EDI                             ; 004ce926
    POP ESI                             ; 004ce927
    POP EBX                             ; 004ce928
    RET                                 ; 004ce929
    MOV EDI,dword ptr [0x007bc034]      ; 004ce92a | DAT_007bc034
        ;   Label: LAB_004ce92a
    PUSH EDI                            ; 004ce930
    PUSH EAX                            ; 004ce931
    CALL core_inv.cpp_CInventory_save_FUN_004dc2c0 ; 004ce932
        ;   XREF to: 004dc2c0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_save_FUN_004dc2c0(CInventory * this_ptr, _FILE * file_handle)
    JMP 0x004ce7fd                      ; 004ce937
        ;   XREF to: 004ce7fd (UNCONDITIONAL_JUMP)  ; LAB_004ce7fd
    MOV ECX,dword ptr [0x007bc034]      ; 004ce93c | DAT_007bc034
        ;   Label: LAB_004ce93c
    PUSH ECX                            ; 004ce942
    PUSH EAX                            ; 004ce943
    CALL core_inv.cpp_CInventory_save_FUN_004dc2c0 ; 004ce944
        ;   XREF to: 004dc2c0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_save_FUN_004dc2c0(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004ce949
    MOV EDI,dword ptr [0x007bc034]      ; 004ce94c | DAT_007bc034
    PUSH EDI                            ; 004ce952
    PUSH EBX                            ; 004ce953
    CALL core_inv.cpp_CInventory_save_FUN_004dc2c0 ; 004ce954
        ;   XREF to: 004dc2c0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_save_FUN_004dc2c0(CInventory * this_ptr, _FILE * file_handle)
    JMP 0x004ce840                      ; 004ce959
        ;   XREF to: 004ce840 (UNCONDITIONAL_JUMP)  ; LAB_004ce840
    PUSH 0x5d9b4d                       ; 004ce95e | = "HeroInventoryIndex"
        ;   Label: LAB_004ce95e
    LEA EAX,[ESI + 0x2563c]             ; 004ce963
    PUSH EAX                            ; 004ce969
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004ce96a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    LEA EDI,[ESI + 0x247e8]             ; 004ce96f
    ADD ESP,0x8                         ; 004ce975
    MOV EBX,EDI                         ; 004ce978
    ADD EDI,0x190                       ; 004ce97a
    PUSH 0x5d9b60                       ; 004ce980 | = "inventoryIndex"
        ;   Label: LAB_004ce980
    PUSH EBX                            ; 004ce985
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004ce986
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD EBX,0x4                         ; 004ce98b
    ADD ESP,0x8                         ; 004ce98e
    CMP EBX,EDI                         ; 004ce991
    JNZ 0x004ce980                      ; 004ce993
        ;   XREF to: 004ce980 (CONDITIONAL_JUMP)  ; LAB_004ce980
    JMP 0x004ce8d0                      ; 004ce995
        ;   XREF to: 004ce8d0 (UNCONDITIONAL_JUMP)  ; LAB_004ce8d0
    MOV ECX,dword ptr [0x007bc034]      ; 004ce99a | DAT_007bc034
        ;   Label: LAB_004ce99a
    PUSH ECX                            ; 004ce9a0
    PUSH EAX                            ; 004ce9a1
    CALL core_inv.cpp_CInventory_save_FUN_004dc2c0 ; 004ce9a2
        ;   XREF to: 004dc2c0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_save_FUN_004dc2c0(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004ce9a7
    ADD ESP,0xcc                        ; 004ce9aa
    POP EBP                             ; 004ce9b0
    POP EDI                             ; 004ce9b1
    POP ESI                             ; 004ce9b2
    POP EBX                             ; 004ce9b3
    RET                                 ; 004ce9b4

