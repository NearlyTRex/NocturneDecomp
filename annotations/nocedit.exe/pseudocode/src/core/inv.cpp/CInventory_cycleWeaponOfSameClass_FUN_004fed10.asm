; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10(CInventory *this_ptr,int direction)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   direction
;
; XREF[1]:
;   core_game.cpp_CGame_processKeyboardControls_FUN_004dc3e0 at 004dc793
;
; Referenced Globals:
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
;   crt_string.c__strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fed10
        ;   Label: core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10
    PUSH ESI                            ; 004fed11
    PUSH EDI                            ; 004fed12
    PUSH EBP                            ; 004fed13
    SUB ESP,0x4                         ; 004fed14
    MOV ESI,dword ptr [ESP + 0x18]      ; 004fed17
    PUSH 0x1                            ; 004fed1b
    PUSH ESI                            ; 004fed1d
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0 ; 004fed1e
        ;   XREF to: 004fffa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(CInventory * this_ptr, int reset_both)
    MOV EDX,dword ptr [ESI + 0x330]     ; 004fed23
    ADD ESP,0x8                         ; 004fed29
    TEST EDX,EDX                        ; 004fed2c
    JZ 0x004fed79                       ; 004fed2e
        ;   XREF to: 004fed79 (CONDITIONAL_JUMP)  ; LAB_004fed79
    MOV ECX,dword ptr [ESI + 0x8]       ; 004fed30
    XOR EBX,EBX                         ; 004fed33
    TEST ECX,ECX                        ; 004fed35
    JLE 0x004fed46                      ; 004fed37
        ;   XREF to: 004fed46 (CONDITIONAL_JUMP)  ; LAB_004fed46
    MOV EDI,ESI                         ; 004fed39
    MOV EDX,dword ptr [ESI + 0x330]     ; 004fed3b
        ;   Label: LAB_004fed3b
    CMP EDX,dword ptr [EDI + 0xc]       ; 004fed41
    JNZ 0x004fed81                      ; 004fed44
        ;   XREF to: 004fed81 (CONDITIONAL_JUMP)  ; LAB_004fed81
    XOR EBP,EBP                         ; 004fed46
        ;   Label: LAB_004fed46
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004fed48
        ;   Label: LAB_004fed48
    MOV EDI,dword ptr [ESI + 0x8]       ; 004fed4c
    ADD EBX,ECX                         ; 004fed4f
    CMP EBX,EDI                         ; 004fed51
    JL 0x004fed8e                       ; 004fed53
        ;   XREF to: 004fed8e (CONDITIONAL_JUMP)  ; LAB_004fed8e
    XOR EBX,EBX                         ; 004fed55
    MOV EAX,[0x03f95d78]                ; 004fed57 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004fed57
    PUSH EAX                            ; 004fed5c
    MOV EDX,dword ptr [ESI + EBX*0x4 + 0xc] ; 004fed5d
    PUSH EDX                            ; 004fed61
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fed62
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fed67
    MOV EDI,EAX                         ; 004fed6a
    MOV dword ptr [ESP],EAX             ; 004fed6c
    TEST EAX,EAX                        ; 004fed6f
    JNZ 0x004fed97                      ; 004fed71
        ;   XREF to: 004fed97 (CONDITIONAL_JUMP)  ; LAB_004fed97
    INC EBP                             ; 004fed73
        ;   Label: LAB_004fed73
    CMP EBP,0x64                        ; 004fed74
    JL 0x004fed48                       ; 004fed77
        ;   XREF to: 004fed48 (CONDITIONAL_JUMP)  ; LAB_004fed48
    ADD ESP,0x4                         ; 004fed79
        ;   Label: LAB_004fed79
    POP EBP                             ; 004fed7c
    POP EDI                             ; 004fed7d
    POP ESI                             ; 004fed7e
    POP EBX                             ; 004fed7f
    RET                                 ; 004fed80
    INC EBX                             ; 004fed81
        ;   Label: LAB_004fed81
    MOV EBP,dword ptr [ESI + 0x8]       ; 004fed82
    ADD EDI,0x4                         ; 004fed85
    CMP EBX,EBP                         ; 004fed88
    JL 0x004fed3b                       ; 004fed8a
        ;   XREF to: 004fed3b (CONDITIONAL_JUMP)  ; LAB_004fed3b
    JMP 0x004fed46                      ; 004fed8c
        ;   XREF to: 004fed46 (UNCONDITIONAL_JUMP)  ; LAB_004fed46
    TEST EBX,EBX                        ; 004fed8e
        ;   Label: LAB_004fed8e
    JGE 0x004fed57                      ; 004fed90
        ;   XREF to: 004fed57 (CONDITIONAL_JUMP)  ; LAB_004fed57
    LEA EBX,[EDI + -0x1]                ; 004fed92
    JMP 0x004fed57                      ; 004fed95
        ;   XREF to: 004fed57 (UNCONDITIONAL_JUMP)  ; LAB_004fed57
    MOV ECX,dword ptr [ESI + 0x330]     ; 004fed97
        ;   Label: LAB_004fed97
    PUSH ECX                            ; 004fed9d
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004fed9e
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004feda3
    PUSH EAX                            ; 004feda6
    PUSH EDI                            ; 004feda7
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004feda8
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fedad
    PUSH EAX                            ; 004fedb0
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004fedb1
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fedb6
    TEST EAX,EAX                        ; 004fedb9
    JNZ 0x004fed73                      ; 004fedbb
        ;   XREF to: 004fed73 (CONDITIONAL_JUMP)  ; LAB_004fed73
    MOV EBX,dword ptr [ESI + 0x330]     ; 004fedbd
    CMP EDI,EBX                         ; 004fedc3
    JZ 0x004fed79                       ; 004fedc5
        ;   XREF to: 004fed79 (CONDITIONAL_JUMP)  ; LAB_004fed79
    TEST EBX,EBX                        ; 004fedc7
    JZ 0x004feddf                       ; 004fedc9
        ;   XREF to: 004feddf (CONDITIONAL_JUMP)  ; LAB_004feddf
    MOV EAX,EBX                         ; 004fedcb
    PUSH 0x3dcccccd                     ; 004fedcd
    PUSH EAX                            ; 004fedd2
    MOV EBX,dword ptr [EBX + 0x154]     ; 004fedd3
    CALL dword ptr [EBX + 0x4]          ; 004fedd9
    ADD ESP,0x8                         ; 004feddc
    PUSH 0x3e7                          ; 004feddf
        ;   Label: LAB_004feddf
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fede4
    PUSH ESI                            ; 004fede8
    MOV dword ptr [ESI + 0x330],EAX     ; 004fede9
    CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10 ; 004fedef
        ;   XREF to: 004ffe10 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(CInventory * this_ptr)
    ADD ESP,0x8                         ; 004fedf4
    ADD ESP,0x4                         ; 004fedf7
    POP EBP                             ; 004fedfa
    POP EDI                             ; 004fedfb
    POP ESI                             ; 004fedfc
    POP EBX                             ; 004fedfd
    RET                                 ; 004fedfe

