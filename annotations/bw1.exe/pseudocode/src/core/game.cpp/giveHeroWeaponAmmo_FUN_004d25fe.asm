; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_giveHeroWeaponAmmo_FUN_004d25fe(char *param_1,EAmmoType param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0
;   core_inv.cpp_FUN_004f7690
;   core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004d25fe
        ;   Label: core_game.cpp_giveHeroWeaponAmmo_FUN_004d25fe
    PUSH EBX                            ; 004d2600
    PUSH 0x31c                          ; 004d2601
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004d2606
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    MOV EBX,EAX                         ; 004d260b
    ADD ESP,0x4                         ; 004d260d
    TEST EAX,EAX                        ; 004d2610
    JNZ 0x004d261a                      ; 004d2612
        ;   XREF to: 004d261a (CONDITIONAL_JUMP)  ; LAB_004d261a
    TEST EBX,EBX                        ; 004d2614
    JNZ 0x004d262b                      ; 004d2616
        ;   XREF to: 004d262b (CONDITIONAL_JUMP)  ; LAB_004d262b
    POP EBX                             ; 004d2618
    RET                                 ; 004d2619
    PUSH EAX                            ; 004d261a
        ;   Label: LAB_004d261a
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0 ; 004d261b
        ;   XREF to: 0040dbc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0(CAmmo * this_ptr)
    MOV EBX,EAX                         ; 004d2620
    ADD ESP,0x4                         ; 004d2622
    TEST EBX,EBX                        ; 004d2625
    JNZ 0x004d262b                      ; 004d2627
        ;   XREF to: 004d262b (CONDITIONAL_JUMP)  ; LAB_004d262b
    POP EBX                             ; 004d2629
    RET                                 ; 004d262a
    PUSH EBX                            ; 004d262b
        ;   Label: LAB_004d262b
    MOV EDX,dword ptr [0x0061f650]      ; 004d262c | DAT_0061f650
    PUSH EDX                            ; 004d2632
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004d2633
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d2638
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d263b
    PUSH EBX                            ; 004d2641
    CALL dword ptr [EAX]                ; 004d2642
    ADD ESP,0x4                         ; 004d2644
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d2647
    PUSH ECX                            ; 004d264b
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d264c
    PUSH EBX                            ; 004d2650
    MOV dword ptr [EBX + 0x318],EAX     ; 004d2651
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0 ; 004d2657
        ;   XREF to: 0040ddd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004d265c
    PUSH 0x1                            ; 004d265f
    MOV dword ptr [EBX + 0x314],0x1f4   ; 004d2661
    PUSH EBX                            ; 004d266b
    MOV EBX,dword ptr [0x01d06ab4]      ; 004d266c | DAT_01d06ab4
    MOV EBX,dword ptr [EBX*0x4 + 0x1d06aa4] ; 004d2672
    ADD EBX,0x1fae8                     ; 004d2679
    PUSH EBX                            ; 004d267f
    CALL core_inv.cpp_FUN_004f7690      ; 004d2680
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004d2685
    POP EBX                             ; 004d2688
    RET                                 ; 004d2689

