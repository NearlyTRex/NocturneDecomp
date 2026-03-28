; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammobox_cpp_CAmmoBox_addToInventory_FUN_00411700(CAmmoBox *this_ptr,CInventory *inventory)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; CInventory *     Stack[0x8]:4   inventory
;
; XREF[2]:
;   core_gabriela.cpp_CGabriella_collectAmmo_FUN_004d5c10 at 004d5c3d
;   core_stranger.cpp_CStranger_processPickupComplete_FUN_005c1f00 at 005c1f3c
;
; Referenced Globals:
;   TerminatedCString s_core_ammobox_cpp_00614be0
;   TerminatedCString s_core_ammobox_cpp_00614bf4
;   TerminatedCString s_Out_of_memory_00614c08
;   TerminatedCString s_Some_ammo_00614c16
;   undefined4 s_ome_ammo_00614c17
;   undefined4 s_me_ammo_00614c18
;   undefined4 s_e_ammo_00614c19
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
;   core_ammo.cpp_CAmmo_setAmmoCount_FUN_004111b0
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_00410fd0
;   core_inv.cpp_CInventory_addItem_FUN_004fd600
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411700
        ;   Label: core_ammobox.cpp_CAmmoBox_addToInventory_FUN_00411700
    PUSH EBP                            ; 00411701
    MOV EBP,dword ptr [ESP + 0xc]       ; 00411702
    MOV EDX,dword ptr [EBP + 0x320]     ; 00411706
    TEST EDX,EDX                        ; 0041170c
    JNZ 0x0041171c                      ; 0041170e
        ;   XREF to: 0041171c (CONDITIONAL_JUMP)  ; LAB_0041171c
    CMP dword ptr [EBP + 0x314],0x0     ; 00411710
    JNZ 0x00411743                      ; 00411717
        ;   XREF to: 00411743 (CONDITIONAL_JUMP)  ; LAB_00411743
    POP EBP                             ; 00411719
    POP EBX                             ; 0041171a
    RET                                 ; 0041171b
    PUSH 0x1                            ; 0041171c
        ;   Label: LAB_0041171c
    PUSH EDX                            ; 0041171e
    MOV EBX,dword ptr [ESP + 0x18]      ; 0041171f
    PUSH EBX                            ; 00411723
    CALL core_inv.cpp_CInventory_addItem_FUN_004fd600 ; 00411724
        ;   XREF to: 004fd600 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    MOV dword ptr [EBP + 0x320],0x0     ; 00411729
    ADD ESP,0xc                         ; 00411733
    MOV dword ptr [EBP + 0x314],0x0     ; 00411736
    POP EBP                             ; 00411740
    POP EBX                             ; 00411741
    RET                                 ; 00411742
    PUSH 0xa1                           ; 00411743
        ;   Label: LAB_00411743
    PUSH 0x614be0                       ; 00411748 | = "..\\core\\ammobox.cpp"
    PUSH 0x31c                          ; 0041174d
    CALL shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0 ; 00411752
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00411757
    TEST EAX,EAX                        ; 0041175a
    JZ 0x00411767                       ; 0041175c
        ;   XREF to: 00411767 (CONDITIONAL_JUMP)  ; LAB_00411767
    PUSH EAX                            ; 0041175e
    CALL core_ammo.cpp_CAmmo_ctor_FUN_00410dc0 ; 0041175f
        ;   XREF to: 00410dc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_00410dc0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 00411764
    PUSH EDI                            ; 00411767
        ;   Label: LAB_00411767
    PUSH ESI                            ; 00411768
    MOV EBX,EAX                         ; 00411769
    TEST EAX,EAX                        ; 0041176b
    JNZ 0x00411792                      ; 0041176d
        ;   XREF to: 00411792 (CONDITIONAL_JUMP)  ; LAB_00411792
    MOV ESI,0x614bf4                    ; 0041176f | = "..\\core\\ammobox.cpp"
    MOV EDI,0xa2                        ; 00411774
    PUSH 0x614c08                       ; 00411779 | = "Out of memory"
    MOV dword ptr [0x02f0ca48],ESI      ; 0041177e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00411784 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041178a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0041178f
    LEA ESI,[EBP + 0x2d4]               ; 00411792
        ;   Label: LAB_00411792
    PUSH ESI                            ; 00411798
    PUSH EBX                            ; 00411799
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_00410fd0 ; 0041179a
        ;   XREF to: 00410fd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_00410fd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 0041179f
    MOV EAX,dword ptr [EBP + 0x314]     ; 004117a2
    PUSH EAX                            ; 004117a8
    PUSH EBX                            ; 004117a9
    CALL core_ammo.cpp_CAmmo_setAmmoCount_FUN_004111b0 ; 004117aa
        ;   XREF to: 004111b0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setAmmoCount_FUN_004111b0(CAmmo * this_ptr, int ammo_count)
    MOV EAX,dword ptr [EBP + 0x318]     ; 004117af
    ADD ESP,0x8                         ; 004117b5
    MOV dword ptr [EBX + 0x318],EAX     ; 004117b8
    PUSH EBX                            ; 004117be
    MOV EAX,dword ptr [EBX + 0x154]     ; 004117bf
    CALL dword ptr [EAX]                ; 004117c5
    ADD ESP,0x4                         ; 004117c7
    PUSH ESI                            ; 004117ca
    PUSH EBX                            ; 004117cb
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_00410fd0 ; 004117cc
        ;   XREF to: 00410fd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_00410fd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004117d1
    MOV EDI,EBX                         ; 004117d4
    MOV ESI,0x614c16                    ; 004117d6 | = "Some_ammo"
    PUSH EDI                            ; 004117db
    MOV AL,byte ptr [ESI]               ; 004117dc | = "Some_ammo" | s_me_ammo_00614c18
        ;   Label: LAB_004117dc
    MOV byte ptr [EDI],AL               ; 004117de
    CMP AL,0x0                          ; 004117e0
    JZ 0x004117f4                       ; 004117e2
        ;   XREF to: 004117f4 (CONDITIONAL_JUMP)  ; LAB_004117f4
    MOV AL,byte ptr [ESI + 0x1]         ; 004117e4 | s_ome_ammo_00614c17 | s_e_ammo_00614c19
    ADD ESI,0x2                         ; 004117e7
    MOV byte ptr [EDI + 0x1],AL         ; 004117ea
    ADD EDI,0x2                         ; 004117ed
    CMP AL,0x0                          ; 004117f0
    JNZ 0x004117dc                      ; 004117f2
        ;   XREF to: 004117dc (CONDITIONAL_JUMP)  ; LAB_004117dc
    POP EDI                             ; 004117f4
        ;   Label: LAB_004117f4
    PUSH 0x1                            ; 004117f5
    PUSH EBX                            ; 004117f7
    MOV EDX,dword ptr [ESP + 0x20]      ; 004117f8
    PUSH EDX                            ; 004117fc
    CALL core_inv.cpp_CInventory_addItem_FUN_004fd600 ; 004117fd
        ;   XREF to: 004fd600 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 00411802
    MOV dword ptr [EBP + 0x314],0x0     ; 00411805
    POP ESI                             ; 0041180f
    POP EDI                             ; 00411810
    POP EBP                             ; 00411811
    POP EBX                             ; 00411812
    RET                                 ; 00411813

