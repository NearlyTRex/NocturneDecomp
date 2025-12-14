; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   specific_weapon
; int              Stack[0xc]:4   weapon_category
; int              Stack[0x10]:4   direction
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0 at 004dc869
;   core_hero.cpp_CHero_FUN_004f2a30 at 004f2aa6
;   core_inv.cpp_CInventory_addItem_FUN_004fd600 at 004fe58f
;   core_inv.cpp_CInventory_select_FUN_004ff800 at 004ff91c
;   core_scat.cpp_FUN_00557150 at 005571a9
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055e8da
;
; Referenced Globals:
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004feb10
        ;   Label: core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
    PUSH ESI                            ; 004feb11
    PUSH EDI                            ; 004feb12
    PUSH EBP                            ; 004feb13
    SUB ESP,0x4                         ; 004feb14
    MOV ESI,dword ptr [ESP + 0x18]      ; 004feb17
    CMP dword ptr [ESI + 0x8],0x1       ; 004feb1b
    JGE 0x004feb33                      ; 004feb1f
        ;   XREF to: 004feb33 (CONDITIONAL_JUMP)  ; LAB_004feb33
    MOV dword ptr [ESI + 0x330],0x0     ; 004feb21
    ADD ESP,0x4                         ; 004feb2b
        ;   Label: LAB_004feb2b
    POP EBP                             ; 004feb2e
    POP EDI                             ; 004feb2f
    POP ESI                             ; 004feb30
    POP EBX                             ; 004feb31
    RET                                 ; 004feb32
    PUSH 0x1                            ; 004feb33
        ;   Label: LAB_004feb33
    PUSH ESI                            ; 004feb35
    XOR EBX,EBX                         ; 004feb36
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0 ; 004feb38
        ;   XREF to: 004fffa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(CInventory * this_ptr, int reset_both)
    MOV ECX,dword ptr [ESI + 0x8]       ; 004feb3d
    ADD ESP,0x8                         ; 004feb40
    TEST ECX,ECX                        ; 004feb43
    JLE 0x004feb54                      ; 004feb45
        ;   XREF to: 004feb54 (CONDITIONAL_JUMP)  ; LAB_004feb54
    MOV EDI,ESI                         ; 004feb47
    MOV EDX,dword ptr [ESI + 0x330]     ; 004feb49
        ;   Label: LAB_004feb49
    CMP EDX,dword ptr [EDI + 0xc]       ; 004feb4f
    JNZ 0x004feb8f                      ; 004feb52
        ;   XREF to: 004feb8f (CONDITIONAL_JUMP)  ; LAB_004feb8f
    XOR EBP,EBP                         ; 004feb54
        ;   Label: LAB_004feb54
    MOV ECX,dword ptr [ESP + 0x24]      ; 004feb56
        ;   Label: LAB_004feb56
    MOV EDI,dword ptr [ESI + 0x8]       ; 004feb5a
    ADD EBX,ECX                         ; 004feb5d
    CMP EBX,EDI                         ; 004feb5f
    JL 0x004feb9c                       ; 004feb61
        ;   XREF to: 004feb9c (CONDITIONAL_JUMP)  ; LAB_004feb9c
    XOR EBX,EBX                         ; 004feb63
    MOV EAX,[0x03f95d78]                ; 004feb65 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004feb65
    PUSH EAX                            ; 004feb6a
    MOV EDX,dword ptr [ESI + EBX*0x4 + 0xc] ; 004feb6b
    PUSH EDX                            ; 004feb6f
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004feb70
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004feb75
    MOV EDI,EAX                         ; 004feb78
    MOV dword ptr [ESP],EAX             ; 004feb7a
    TEST EAX,EAX                        ; 004feb7d
    JNZ 0x004feba5                      ; 004feb7f
        ;   XREF to: 004feba5 (CONDITIONAL_JUMP)  ; LAB_004feba5
    INC EBP                             ; 004feb81
        ;   Label: LAB_004feb81
    CMP EBP,0x64                        ; 004feb82
    JL 0x004feb56                       ; 004feb85
        ;   XREF to: 004feb56 (CONDITIONAL_JUMP)  ; LAB_004feb56
    ADD ESP,0x4                         ; 004feb87
    POP EBP                             ; 004feb8a
    POP EDI                             ; 004feb8b
    POP ESI                             ; 004feb8c
    POP EBX                             ; 004feb8d
    RET                                 ; 004feb8e
    INC EBX                             ; 004feb8f
        ;   Label: LAB_004feb8f
    MOV EBP,dword ptr [ESI + 0x8]       ; 004feb90
    ADD EDI,0x4                         ; 004feb93
    CMP EBX,EBP                         ; 004feb96
    JL 0x004feb49                       ; 004feb98
        ;   XREF to: 004feb49 (CONDITIONAL_JUMP)  ; LAB_004feb49
    JMP 0x004feb54                      ; 004feb9a
        ;   XREF to: 004feb54 (UNCONDITIONAL_JUMP)  ; LAB_004feb54
    TEST EBX,EBX                        ; 004feb9c
        ;   Label: LAB_004feb9c
    JGE 0x004feb65                      ; 004feb9e
        ;   XREF to: 004feb65 (CONDITIONAL_JUMP)  ; LAB_004feb65
    LEA EBX,[EDI + -0x1]                ; 004feba0
    JMP 0x004feb65                      ; 004feba3
        ;   XREF to: 004feb65 (UNCONDITIONAL_JUMP)  ; LAB_004feb65
    MOV ECX,dword ptr [ESP + 0x20]      ; 004feba5
        ;   Label: LAB_004feba5
    PUSH ECX                            ; 004feba9
    PUSH EAX                            ; 004febaa
    PUSH ESI                            ; 004febab
    CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70 ; 004febac
        ;   XREF to: 004ffe70 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70(CInventory * this_ptr, CDemonActor * weapon_actor, int weapon_category)
    ADD ESP,0xc                         ; 004febb1
    TEST EAX,EAX                        ; 004febb4
    JZ 0x004feb81                       ; 004febb6
        ;   XREF to: 004feb81 (CONDITIONAL_JUMP)  ; LAB_004feb81
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004febb8
    TEST EAX,EAX                        ; 004febbc
    JZ 0x004febc4                       ; 004febbe
        ;   XREF to: 004febc4 (CONDITIONAL_JUMP)  ; LAB_004febc4
    CMP EDI,EAX                         ; 004febc0
    JNZ 0x004feb81                      ; 004febc2
        ;   XREF to: 004feb81 (CONDITIONAL_JUMP)  ; LAB_004feb81
    MOV ECX,dword ptr [ESP]             ; 004febc4
        ;   Label: LAB_004febc4
    MOV EAX,dword ptr [ESI + 0x330]     ; 004febc7
    CMP EAX,ECX                         ; 004febcd
    JZ 0x004feb2b                       ; 004febcf
        ;   XREF to: 004feb2b (CONDITIONAL_JUMP)  ; LAB_004feb2b
    TEST EAX,EAX                        ; 004febd5
    JZ 0x004febeb                       ; 004febd7
        ;   XREF to: 004febeb (CONDITIONAL_JUMP)  ; LAB_004febeb
    PUSH 0x3dcccccd                     ; 004febd9
    MOV EBX,dword ptr [EAX + 0x154]     ; 004febde
    PUSH EAX                            ; 004febe4
    CALL dword ptr [EBX + 0x4]          ; 004febe5
    ADD ESP,0x8                         ; 004febe8
    PUSH 0x3e7                          ; 004febeb
        ;   Label: LAB_004febeb
    MOV EAX,dword ptr [ESP + 0x4]       ; 004febf0
    PUSH ESI                            ; 004febf4
    MOV dword ptr [ESI + 0x330],EAX     ; 004febf5
    CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10 ; 004febfb
        ;   XREF to: 004ffe10 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(CInventory * this_ptr)
    ADD ESP,0x8                         ; 004fec00
    ADD ESP,0x4                         ; 004fec03
    POP EBP                             ; 004fec06
    POP EDI                             ; 004fec07
    POP ESI                             ; 004fec08
    POP EBX                             ; 004fec09
    RET                                 ; 004fec0a

