; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30 at 0049f1e3
;
; Referenced Globals:
;   undefined4 g_CWeaponActorType_02ddf970.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90
;   crt_string.c__strcmp_FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0a50
        ;   Label: core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50
    PUSH ESI                            ; 004c0a51
    PUSH EDI                            ; 004c0a52
    PUSH EBP                            ; 004c0a53
    SUB ESP,0x4                         ; 004c0a54
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c0a57
    PUSH 0x1                            ; 004c0a5b
    PUSH ESI                            ; 004c0a5d
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20 ; 004c0a5e
        ;   XREF to: 004c1d20 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20()
    MOV EDX,dword ptr [ESI + 0x330]     ; 004c0a63
    ADD ESP,0x8                         ; 004c0a69
    TEST EDX,EDX                        ; 004c0a6c
    JZ 0x004c0ab9                       ; 004c0a6e
        ;   XREF to: 004c0ab9 (CONDITIONAL_JUMP)  ; LAB_004c0ab9
    MOV ECX,dword ptr [ESI + 0x8]       ; 004c0a70
    XOR EBX,EBX                         ; 004c0a73
    TEST ECX,ECX                        ; 004c0a75
    JLE 0x004c0a86                      ; 004c0a77
        ;   XREF to: 004c0a86 (CONDITIONAL_JUMP)  ; LAB_004c0a86
    MOV EDI,ESI                         ; 004c0a79
    MOV EDX,dword ptr [ESI + 0x330]     ; 004c0a7b
        ;   Label: LAB_004c0a7b
    CMP EDX,dword ptr [EDI + 0xc]       ; 004c0a81
    JNZ 0x004c0ac1                      ; 004c0a84
        ;   XREF to: 004c0ac1 (CONDITIONAL_JUMP)  ; LAB_004c0ac1
    XOR EBP,EBP                         ; 004c0a86
        ;   Label: LAB_004c0a86
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004c0a88
        ;   Label: LAB_004c0a88
    MOV EDI,dword ptr [ESI + 0x8]       ; 004c0a8c
    ADD EBX,ECX                         ; 004c0a8f
    CMP EBX,EDI                         ; 004c0a91
    JL 0x004c0ace                       ; 004c0a93
        ;   XREF to: 004c0ace (CONDITIONAL_JUMP)  ; LAB_004c0ace
    XOR EBX,EBX                         ; 004c0a95
    MOV EAX,[0x02ddf9a8]                ; 004c0a97 | g_CWeaponActorType_02ddf970.name_hash
        ;   Label: LAB_004c0a97
    PUSH EAX                            ; 004c0a9c
    MOV EDX,dword ptr [ESI + EBX*0x4 + 0xc] ; 004c0a9d
    PUSH EDX                            ; 004c0aa1
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c0aa2
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c0aa7
    MOV EDI,EAX                         ; 004c0aaa
    MOV dword ptr [ESP],EAX             ; 004c0aac
    TEST EAX,EAX                        ; 004c0aaf
    JNZ 0x004c0ad7                      ; 004c0ab1
        ;   XREF to: 004c0ad7 (CONDITIONAL_JUMP)  ; LAB_004c0ad7
    INC EBP                             ; 004c0ab3
        ;   Label: LAB_004c0ab3
    CMP EBP,0x64                        ; 004c0ab4
    JL 0x004c0a88                       ; 004c0ab7
        ;   XREF to: 004c0a88 (CONDITIONAL_JUMP)  ; LAB_004c0a88
    ADD ESP,0x4                         ; 004c0ab9
        ;   Label: LAB_004c0ab9
    POP EBP                             ; 004c0abc
    POP EDI                             ; 004c0abd
    POP ESI                             ; 004c0abe
    POP EBX                             ; 004c0abf
    RET                                 ; 004c0ac0
    INC EBX                             ; 004c0ac1
        ;   Label: LAB_004c0ac1
    MOV EBP,dword ptr [ESI + 0x8]       ; 004c0ac2
    ADD EDI,0x4                         ; 004c0ac5
    CMP EBX,EBP                         ; 004c0ac8
    JL 0x004c0a7b                       ; 004c0aca
        ;   XREF to: 004c0a7b (CONDITIONAL_JUMP)  ; LAB_004c0a7b
    JMP 0x004c0a86                      ; 004c0acc
        ;   XREF to: 004c0a86 (UNCONDITIONAL_JUMP)  ; LAB_004c0a86
    TEST EBX,EBX                        ; 004c0ace
        ;   Label: LAB_004c0ace
    JGE 0x004c0a97                      ; 004c0ad0
        ;   XREF to: 004c0a97 (CONDITIONAL_JUMP)  ; LAB_004c0a97
    LEA EBX,[EDI + -0x1]                ; 004c0ad2
    JMP 0x004c0a97                      ; 004c0ad5
        ;   XREF to: 004c0a97 (UNCONDITIONAL_JUMP)  ; LAB_004c0a97
    MOV ECX,dword ptr [ESI + 0x330]     ; 004c0ad7
        ;   Label: LAB_004c0ad7
    PUSH ECX                            ; 004c0add
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004c0ade
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0()
    ADD ESP,0x4                         ; 004c0ae3
    PUSH EAX                            ; 004c0ae6
    PUSH EDI                            ; 004c0ae7
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004c0ae8
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0()
    ADD ESP,0x4                         ; 004c0aed
    PUSH EAX                            ; 004c0af0
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004c0af1
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 004c0af6
    TEST EAX,EAX                        ; 004c0af9
    JNZ 0x004c0ab3                      ; 004c0afb
        ;   XREF to: 004c0ab3 (CONDITIONAL_JUMP)  ; LAB_004c0ab3
    MOV EBX,dword ptr [ESI + 0x330]     ; 004c0afd
    CMP EDI,EBX                         ; 004c0b03
    JZ 0x004c0ab9                       ; 004c0b05
        ;   XREF to: 004c0ab9 (CONDITIONAL_JUMP)  ; LAB_004c0ab9
    TEST EBX,EBX                        ; 004c0b07
    JZ 0x004c0b1f                       ; 004c0b09
        ;   XREF to: 004c0b1f (CONDITIONAL_JUMP)  ; LAB_004c0b1f
    MOV EAX,EBX                         ; 004c0b0b
    PUSH 0x3dcccccd                     ; 004c0b0d
    PUSH EAX                            ; 004c0b12
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004c0b13
    CALL dword ptr [EBX + 0x4]          ; 004c0b19
    ADD ESP,0x8                         ; 004c0b1c
    PUSH 0x3e7                          ; 004c0b1f
        ;   Label: LAB_004c0b1f
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c0b24
    PUSH ESI                            ; 004c0b28
    MOV dword ptr [ESI + 0x330],EAX     ; 004c0b29
    CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90 ; 004c0b2f
        ;   XREF to: 004c1b90 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90()
    ADD ESP,0x8                         ; 004c0b34
    ADD ESP,0x4                         ; 004c0b37
    POP EBP                             ; 004c0b3a
    POP EDI                             ; 004c0b3b
    POP ESI                             ; 004c0b3c
    POP EBX                             ; 004c0b3d
    RET                                 ; 004c0b3e

