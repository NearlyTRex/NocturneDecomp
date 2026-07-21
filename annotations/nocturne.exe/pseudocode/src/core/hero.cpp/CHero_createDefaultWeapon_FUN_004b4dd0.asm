; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_CHero_createDefaultWeapon_FUN_004b4dd0(int param_1)
;
;
; XREF[1]:
;   FUN_004b46d0 at 004b47ce
;
; Referenced Globals:
;   undefined4 DAT_005857f6
;   string s_..\\core\\hero.cpp_005857fb
;   string s_Out_of_memory!_0058580c
;   string s_Your_weapon_0058581b
;   undefined4 s_our_weapon_0058581b+1
;   undefined4 s_ur_weapon_0058581b+2
;   undefined4 s_r_weapon_0058581b+3
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02ddf9a8
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_createActorByName_FUN_0040d540
;   core_inv.cpp_CInventory_addItem_FUN_004bf360
;   core_inv.cpp_CInventory_initialize_FUN_004bef10
;   core_inv.cpp_CInventory_selectWeapon_FUN_004c0850
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4dd0
        ;   Label: core_hero.cpp_CHero_createDefaultWeapon_FUN_004b4dd0
    PUSH ESI                            ; 004b4dd1
    PUSH EDI                            ; 004b4dd2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b4dd3
    ADD EAX,0x1f5a0                     ; 004b4dd7
    PUSH EAX                            ; 004b4ddc
    CALL core_inv.cpp_CInventory_initialize_FUN_004bef10 ; 004b4ddd
        ;   XREF to: 004bef10 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_initialize_FUN_004bef10()
    ADD ESP,0x4                         ; 004b4de2
    MOV EDX,dword ptr [0x02ddf9a8]      ; 004b4de5 | DAT_02ddf9a8
    PUSH EDX                            ; 004b4deb
    PUSH 0x5857f6                       ; 004b4dec | DAT_005857f6
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004b4df1
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040d540()
    ADD ESP,0x4                         ; 004b4df6
    PUSH EAX                            ; 004b4df9
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b4dfa
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004b4dff
    MOV EBX,EAX                         ; 004b4e02
    TEST EAX,EAX                        ; 004b4e04
    JZ 0x004b4e5c                       ; 004b4e06
        ;   XREF to: 004b4e5c (CONDITIONAL_JUMP)  ; LAB_004b4e5c
    MOV ESI,0x58581b                    ; 004b4e08 | = "Your_weapon"
        ;   Label: LAB_004b4e08
    MOV EDI,EBX                         ; 004b4e0d
    PUSH EDI                            ; 004b4e0f
    MOV AL,byte ptr [ESI]               ; 004b4e10 | = "Your_weapon" | s_ur_weapon_0058581b+2
        ;   Label: LAB_004b4e10
    MOV byte ptr [EDI],AL               ; 004b4e12
    CMP AL,0x0                          ; 004b4e14
    JZ 0x004b4e28                       ; 004b4e16
        ;   XREF to: 004b4e28 (CONDITIONAL_JUMP)  ; LAB_004b4e28
    MOV AL,byte ptr [ESI + 0x1]         ; 004b4e18 | s_our_weapon_0058581b+1 | s_r_weapon_0058581b+3
    ADD ESI,0x2                         ; 004b4e1b
    MOV byte ptr [EDI + 0x1],AL         ; 004b4e1e
    ADD EDI,0x2                         ; 004b4e21
    CMP AL,0x0                          ; 004b4e24
    JNZ 0x004b4e10                      ; 004b4e26
        ;   XREF to: 004b4e10 (CONDITIONAL_JUMP)  ; LAB_004b4e10
    POP EDI                             ; 004b4e28
        ;   Label: LAB_004b4e28
    PUSH 0x1                            ; 004b4e29
    MOV ESI,dword ptr [ESP + 0x14]      ; 004b4e2b
    PUSH EBX                            ; 004b4e2f
    ADD ESI,0x1f5a0                     ; 004b4e30
    PUSH ESI                            ; 004b4e36
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004b4e37
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_addItem_FUN_004bf360()
    ADD ESP,0xc                         ; 004b4e3c
    PUSH 0x1                            ; 004b4e3f
    PUSH 0x5                            ; 004b4e41
    PUSH 0x0                            ; 004b4e43
    PUSH ESI                            ; 004b4e45
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 ; 004b4e46
        ;   XREF to: 004c0850 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_selectWeapon_FUN_004c0850()
    ADD ESP,0x10                        ; 004b4e4b
    MOV dword ptr [EBX + 0x560],0x64    ; 004b4e4e
    POP EDI                             ; 004b4e58
    POP ESI                             ; 004b4e59
    POP EBX                             ; 004b4e5a
    RET                                 ; 004b4e5b
    MOV ECX,0x5857fb                    ; 004b4e5c | = "..\\core\\hero.cpp"
        ;   Label: LAB_004b4e5c
    MOV ESI,0x1b2                       ; 004b4e61
    PUSH 0x58580c                       ; 004b4e66 | = "Out of memory!"
    MOV dword ptr [0x01cc4800],ECX      ; 004b4e6b | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004b4e71 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004b4e77
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004b4e7c
    JMP 0x004b4e08                      ; 004b4e7f
        ;   XREF to: 004b4e08 (UNCONDITIONAL_JUMP)  ; LAB_004b4e08

