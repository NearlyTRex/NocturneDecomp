; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_createDefaultGun_FUN_004f2a30(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hero.cpp_CHero_ctor_FUN_004f2340 at 004f243e
;
; Referenced Globals:
;   TerminatedCString s_CGun_0062ebd9
;   TerminatedCString s_core_hero_cpp_0062ebde
;   TerminatedCString s_Out_of_memory_0062ebef
;   TerminatedCString s_Your_weapon_0062ebfe
;   undefined4 s_our_weapon_0062ebff
;   undefined4 s_ur_weapon_0062ec00
;   undefined4 s_r_weapon_0062ec01
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_inv.cpp_CInventory_addItem_FUN_004fd600
;   core_inv.cpp_CInventory_initialize_FUN_004fd190
;   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2a30
        ;   Label: core_hero.cpp_CHero_createDefaultGun_FUN_004f2a30
    PUSH ESI                            ; 004f2a31
    PUSH EDI                            ; 004f2a32
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f2a33
    ADD EAX,0x1f738                     ; 004f2a37
    PUSH EAX                            ; 004f2a3c
    CALL core_inv.cpp_CInventory_initialize_FUN_004fd190 ; 004f2a3d
        ;   XREF to: 004fd190 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004fd190(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004f2a42
    MOV EDX,dword ptr [0x03f95d78]      ; 004f2a45 | g_CWeaponClassInfo.name_hash
    PUSH EDX                            ; 004f2a4b
    PUSH 0x62ebd9                       ; 004f2a4c | = "CGun"
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 004f2a51
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 004f2a56
    PUSH EAX                            ; 004f2a59
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f2a5a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f2a5f
    MOV EBX,EAX                         ; 004f2a62
    TEST EAX,EAX                        ; 004f2a64
    JZ 0x004f2abc                       ; 004f2a66
        ;   XREF to: 004f2abc (CONDITIONAL_JUMP)  ; LAB_004f2abc
    MOV ESI,0x62ebfe                    ; 004f2a68 | = "Your_weapon"
        ;   Label: LAB_004f2a68
    MOV EDI,EBX                         ; 004f2a6d
    PUSH EDI                            ; 004f2a6f
    MOV AL,byte ptr [ESI]               ; 004f2a70 | = "Your_weapon" | s_ur_weapon_0062ec00
        ;   Label: LAB_004f2a70
    MOV byte ptr [EDI],AL               ; 004f2a72
    CMP AL,0x0                          ; 004f2a74
    JZ 0x004f2a88                       ; 004f2a76
        ;   XREF to: 004f2a88 (CONDITIONAL_JUMP)  ; LAB_004f2a88
    MOV AL,byte ptr [ESI + 0x1]         ; 004f2a78 | s_our_weapon_0062ebff | s_r_weapon_0062ec01
    ADD ESI,0x2                         ; 004f2a7b
    MOV byte ptr [EDI + 0x1],AL         ; 004f2a7e
    ADD EDI,0x2                         ; 004f2a81
    CMP AL,0x0                          ; 004f2a84
    JNZ 0x004f2a70                      ; 004f2a86
        ;   XREF to: 004f2a70 (CONDITIONAL_JUMP)  ; LAB_004f2a70
    POP EDI                             ; 004f2a88
        ;   Label: LAB_004f2a88
    PUSH 0x1                            ; 004f2a89
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f2a8b
    PUSH EBX                            ; 004f2a8f
    ADD ESI,0x1f738                     ; 004f2a90
    PUSH ESI                            ; 004f2a96
    CALL core_inv.cpp_CInventory_addItem_FUN_004fd600 ; 004f2a97
        ;   XREF to: 004fd600 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004f2a9c
    PUSH 0x1                            ; 004f2a9f
    PUSH 0x5                            ; 004f2aa1
    PUSH 0x0                            ; 004f2aa3
    PUSH ESI                            ; 004f2aa5
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 ; 004f2aa6
        ;   XREF to: 004feb10 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004f2aab
    MOV dword ptr [EBX + 0x568],0x64    ; 004f2aae
    POP EDI                             ; 004f2ab8
    POP ESI                             ; 004f2ab9
    POP EBX                             ; 004f2aba
    RET                                 ; 004f2abb
    MOV ECX,0x62ebde                    ; 004f2abc | = "..\\core\\hero.cpp"
        ;   Label: LAB_004f2abc
    MOV ESI,0x1b2                       ; 004f2ac1
    PUSH 0x62ebef                       ; 004f2ac6 | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],ECX      ; 004f2acb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004f2ad1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004f2ad7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004f2adc
    JMP 0x004f2a68                      ; 004f2adf
        ;   XREF to: 004f2a68 (UNCONDITIONAL_JUMP)  ; LAB_004f2a68

