; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004a03a0(void)
;
;
; Referenced Globals:
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01cc9450
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040eb70
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80
;   core_inv.cpp_CInventory_addItem_FUN_004bf360
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a03a0
        ;   Label: core_game.cpp_FUN_004a03a0
    PUSH 0x314                          ; 004a03a1
    CALL crt_unknown.c_FUN_0056497c     ; 004a03a6
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    MOV EBX,EAX                         ; 004a03ab
    ADD ESP,0x4                         ; 004a03ad
    TEST EAX,EAX                        ; 004a03b0
    JNZ 0x004a03ba                      ; 004a03b2
        ;   XREF to: 004a03ba (CONDITIONAL_JUMP)  ; LAB_004a03ba
    TEST EBX,EBX                        ; 004a03b4
    JNZ 0x004a03cb                      ; 004a03b6
        ;   XREF to: 004a03cb (CONDITIONAL_JUMP)  ; LAB_004a03cb
    POP EBX                             ; 004a03b8
    RET                                 ; 004a03b9
    PUSH EAX                            ; 004a03ba
        ;   Label: LAB_004a03ba
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040eb70 ; 004a03bb
        ;   XREF to: 0040eb70 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040eb70(CAmmo * this_ptr)
    MOV EBX,EAX                         ; 004a03c0
    ADD ESP,0x4                         ; 004a03c2
    TEST EBX,EBX                        ; 004a03c5
    JNZ 0x004a03cb                      ; 004a03c7
        ;   XREF to: 004a03cb (CONDITIONAL_JUMP)  ; LAB_004a03cb
    POP EBX                             ; 004a03c9
    RET                                 ; 004a03ca
    PUSH EBX                            ; 004a03cb
        ;   Label: LAB_004a03cb
    MOV EDX,dword ptr [0x005baf90]      ; 004a03cc | g_CDemonMission_PTR_005baf90
    PUSH EDX                            ; 004a03d2 | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004a03d3
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a03d8
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a03db
    PUSH EBX                            ; 004a03e1
    CALL dword ptr [EAX]                ; 004a03e2
    ADD ESP,0x4                         ; 004a03e4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004a03e7
    PUSH ECX                            ; 004a03eb
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a03ec
    PUSH EBX                            ; 004a03f0
    MOV dword ptr [EBX + 0x310],EAX     ; 004a03f1
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 ; 004a03f7
        ;   XREF to: 0040ed80 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004a03fc
    PUSH 0x1                            ; 004a03ff
    MOV dword ptr [EBX + 0x30c],0x1f4   ; 004a0401
    PUSH EBX                            ; 004a040b
    MOV EBX,dword ptr [0x01cae0e8]      ; 004a040c | DAT_01cae0e8
    MOV EBX,dword ptr [EBX*0x4 + 0x1cae0d8] ; 004a0412
    ADD EBX,0x1f5a0                     ; 004a0419
    PUSH EBX                            ; 004a041f
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004a0420
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004a0425
    POP EBX                             ; 004a0428
    RET                                 ; 004a0429

