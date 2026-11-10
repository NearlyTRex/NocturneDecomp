; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_giveHeroWeaponAmmo_FUN_004b8fce(char *param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00618170
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040ddb0
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040e240
;   core_inv.cpp_FUN_004dadb0
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004b8fce
        ;   Label: core_game.cpp_giveHeroWeaponAmmo_FUN_004b8fce
    PUSH EBX                            ; 004b8fd0
    PUSH 0x47c                          ; 004b8fd1
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004b8fd6
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    MOV EBX,EAX                         ; 004b8fdb
    ADD ESP,0x4                         ; 004b8fdd
    TEST EAX,EAX                        ; 004b8fe0
    JNZ 0x004b8fea                      ; 004b8fe2
        ;   XREF to: 004b8fea (CONDITIONAL_JUMP)  ; LAB_004b8fea
    TEST EBX,EBX                        ; 004b8fe4
    JNZ 0x004b8ffb                      ; 004b8fe6
        ;   XREF to: 004b8ffb (CONDITIONAL_JUMP)  ; LAB_004b8ffb
    POP EBX                             ; 004b8fe8
    RET                                 ; 004b8fe9
    PUSH EAX                            ; 004b8fea
        ;   Label: LAB_004b8fea
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040ddb0 ; 004b8feb
        ;   XREF to: 0040ddb0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040ddb0(CAmmo * this_ptr)
    MOV EBX,EAX                         ; 004b8ff0
    ADD ESP,0x4                         ; 004b8ff2
    TEST EBX,EBX                        ; 004b8ff5
    JNZ 0x004b8ffb                      ; 004b8ff7
        ;   XREF to: 004b8ffb (CONDITIONAL_JUMP)  ; LAB_004b8ffb
    POP EBX                             ; 004b8ff9
    RET                                 ; 004b8ffa
    PUSH EBX                            ; 004b8ffb
        ;   Label: LAB_004b8ffb
    MOV EDX,dword ptr [0x00618170]      ; 004b8ffc | DAT_00618170
    PUSH EDX                            ; 004b9002
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0 ; 004b9003
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004b9008
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004b900b
    PUSH EBX                            ; 004b9011
    CALL dword ptr [EAX + 0x8]          ; 004b9012
    ADD ESP,0x4                         ; 004b9015
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b9018
    PUSH ECX                            ; 004b901c
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b901d
    PUSH EBX                            ; 004b9021
    MOV dword ptr [EBX + 0x474],EAX     ; 004b9022
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040e240 ; 004b9028
        ;   XREF to: 0040e240 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040e240(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004b902d
    PUSH 0x0                            ; 004b9030
    PUSH 0x1                            ; 004b9032
    MOV dword ptr [EBX + 0x470],0x1f4   ; 004b9034
    PUSH EBX                            ; 004b903e
    MOV EBX,dword ptr [0x01cedef4]      ; 004b903f | DAT_01cedef4
    MOV EBX,dword ptr [EBX*0x4 + 0x1cedee4] ; 004b9045
    ADD EBX,0x2437c                     ; 004b904c
    PUSH EBX                            ; 004b9052
    CALL core_inv.cpp_FUN_004dadb0      ; 004b9053
        ;   XREF to: 004dadb0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dadb0()
    ADD ESP,0x10                        ; 004b9058
    POP EBX                             ; 004b905b
    RET                                 ; 004b905c

