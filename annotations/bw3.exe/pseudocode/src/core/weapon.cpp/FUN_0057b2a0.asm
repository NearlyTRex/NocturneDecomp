; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weapon_cpp_FUN_0057b2a0(CDemonActor *param_1)
;
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   core_melee.cpp_FUN_004e70e0 at 004e70e6
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d781b
;   TerminatedCString s_carriedByActor_005d7825
;   TerminatedCString s_weaponState_005d7834
;   TerminatedCString s_ammoCount_005d7840
;   TerminatedCString s_ammoType_005d784a
;   TerminatedCString s_descriptiveName_005d7853
;   TerminatedCString s_simTimer_005d7863
;   TerminatedCString s_infinite_ammo_005d786c
;   TerminatedCString s_ammo_per_shot_005d787a
;   TerminatedCString s_weapon_class_005d7888
;   TerminatedCString s_draw_crosshair_005d7895
;   TerminatedCString s_number_of_hands_needed_005d78a4
;   int g_CWeaponClassVersion = 0xc
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveLocalizedString_FUN_0040b7a0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b2a0
        ;   Label: core_weapon.cpp_FUN_0057b2a0
    PUSH EBP                            ; 0057b2a1
    SUB ESP,0x104                       ; 0057b2a2
    MOV EBX,dword ptr [ESP + 0x110]     ; 0057b2a8
    PUSH EBX                            ; 0057b2af
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 0057b2b0
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057b2b5
    PUSH 0x5d781b                       ; 0057b2b8 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0057b2bd
    PUSH EAX                            ; 0057b2c3
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 0057b2c4
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0()
    MOV EDX,dword ptr [0x006071dc]      ; 0057b2c9 | g_CWeaponClassVersion
    ADD ESP,0x8                         ; 0057b2cf
    CMP EDX,0x3                         ; 0057b2d2
    JGE 0x0057b3ee                      ; 0057b2d5
        ;   XREF to: 0057b3ee (CONDITIONAL_JUMP)  ; LAB_0057b3ee
    CMP dword ptr [0x006071dc],0x4      ; 0057b2db | g_CWeaponClassVersion
        ;   Label: LAB_0057b2db
    JL 0x0057b320                       ; 0057b2e2
        ;   XREF to: 0057b320 (CONDITIONAL_JUMP)  ; LAB_0057b320
    PUSH 0x5d7834                       ; 0057b2e4 | = "weaponState"
    LEA EAX,[EBX + 0x2d4]               ; 0057b2e9
    PUSH EAX                            ; 0057b2ef
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0057b2f0
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057b2f5
    PUSH 0x5d7840                       ; 0057b2f8 | = "ammoCount"
    LEA EAX,[EBX + 0x568]               ; 0057b2fd
    PUSH EAX                            ; 0057b303
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0057b304
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057b309
    PUSH 0x5d784a                       ; 0057b30c | = "ammoType"
    LEA EAX,[EBX + 0x56c]               ; 0057b311
    PUSH EAX                            ; 0057b317
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0057b318
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057b31d
    CMP dword ptr [0x006071dc],0x5      ; 0057b320 | g_CWeaponClassVersion
        ;   Label: LAB_0057b320
    JNZ 0x0057b33b                      ; 0057b327
        ;   XREF to: 0057b33b (CONDITIONAL_JUMP)  ; LAB_0057b33b
    PUSH 0x5d7853                       ; 0057b329 | = "descriptiveName"
    LEA EAX,[ESP + 0x4]                 ; 0057b32e
    PUSH EAX                            ; 0057b332
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040b7a0 ; 0057b333
        ;   XREF to: 0040b7a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocalizedString_FUN_0040b7a0(char * string_buffer, char * localization_key)
    ADD ESP,0x8                         ; 0057b338
    CMP dword ptr [0x006071dc],0x7      ; 0057b33b | g_CWeaponClassVersion
        ;   Label: LAB_0057b33b
    JL 0x0057b358                       ; 0057b342
        ;   XREF to: 0057b358 (CONDITIONAL_JUMP)  ; LAB_0057b358
    PUSH 0x5d7863                       ; 0057b344 | = "simTimer"
    ADD EBX,0x580                       ; 0057b349
    PUSH EBX                            ; 0057b34f
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0057b350
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0057b355
    MOV EBP,dword ptr [0x006071dc]      ; 0057b358 | g_CWeaponClassVersion
        ;   Label: LAB_0057b358
    CMP EBP,0x8                         ; 0057b35e
    JL 0x0057b392                       ; 0057b361
        ;   XREF to: 0057b392 (CONDITIONAL_JUMP)  ; LAB_0057b392
    CMP EBP,0xb                         ; 0057b363
    JG 0x0057b392                       ; 0057b366
        ;   XREF to: 0057b392 (CONDITIONAL_JUMP)  ; LAB_0057b392
    PUSH 0x5d786c                       ; 0057b368 | = "infinite_ammo"
    LEA EBX,[ESP + 0x104]               ; 0057b36d
    PUSH EBX                            ; 0057b374
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0057b375
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057b37a
    PUSH 0x5d787a                       ; 0057b37d | = "ammo_per_shot"
    LEA EBX,[ESP + 0x104]               ; 0057b382
    PUSH EBX                            ; 0057b389
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0057b38a
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057b38f
    MOV EDX,dword ptr [0x006071dc]      ; 0057b392 | g_CWeaponClassVersion
        ;   Label: LAB_0057b392
    CMP EDX,0x9                         ; 0057b398
    JL 0x0057b3b7                       ; 0057b39b
        ;   XREF to: 0057b3b7 (CONDITIONAL_JUMP)  ; LAB_0057b3b7
    CMP EDX,0xb                         ; 0057b39d
    JG 0x0057b3b7                       ; 0057b3a0
        ;   XREF to: 0057b3b7 (CONDITIONAL_JUMP)  ; LAB_0057b3b7
    PUSH 0x5d7888                       ; 0057b3a2 | = "weapon_class"
    LEA EBX,[ESP + 0x104]               ; 0057b3a7
    PUSH EBX                            ; 0057b3ae
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0057b3af
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057b3b4
    MOV EBX,dword ptr [0x006071dc]      ; 0057b3b7 | g_CWeaponClassVersion
        ;   Label: LAB_0057b3b7
    CMP EBX,0xa                         ; 0057b3bd
    JL 0x0057b3dc                       ; 0057b3c0
        ;   XREF to: 0057b3dc (CONDITIONAL_JUMP)  ; LAB_0057b3dc
    CMP EBX,0xb                         ; 0057b3c2
    JG 0x0057b3dc                       ; 0057b3c5
        ;   XREF to: 0057b3dc (CONDITIONAL_JUMP)  ; LAB_0057b3dc
    PUSH 0x5d7895                       ; 0057b3c7 | = "draw_crosshair"
    LEA EBX,[ESP + 0x104]               ; 0057b3cc
    PUSH EBX                            ; 0057b3d3
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0057b3d4
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057b3d9
    CMP dword ptr [0x006071dc],0xb      ; 0057b3dc | g_CWeaponClassVersion
        ;   Label: LAB_0057b3dc
    JZ 0x0057b407                       ; 0057b3e3
        ;   XREF to: 0057b407 (CONDITIONAL_JUMP)  ; LAB_0057b407
    ADD ESP,0x104                       ; 0057b3e5
    POP EBP                             ; 0057b3eb
    POP EBX                             ; 0057b3ec
    RET                                 ; 0057b3ed
    PUSH 0x5d7825                       ; 0057b3ee | = "carriedByActor"
        ;   Label: LAB_0057b3ee
    LEA EAX,[EBX + 0x304]               ; 0057b3f3
    PUSH EAX                            ; 0057b3f9
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0057b3fa
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 0057b3ff
    JMP 0x0057b2db                      ; 0057b402
        ;   XREF to: 0057b2db (UNCONDITIONAL_JUMP)  ; LAB_0057b2db
    PUSH 0x5d78a4                       ; 0057b407 | = "number_of_hands_needed"
        ;   Label: LAB_0057b407
    LEA EBX,[ESP + 0x104]               ; 0057b40c
    PUSH EBX                            ; 0057b413
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0057b414
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057b419
    ADD ESP,0x104                       ; 0057b41c
    POP EBP                             ; 0057b422
    POP EBX                             ; 0057b423
    RET                                 ; 0057b424

