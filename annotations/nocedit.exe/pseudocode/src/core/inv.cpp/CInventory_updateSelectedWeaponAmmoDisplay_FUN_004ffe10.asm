; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10 at 004fedef
;   core_inv.cpp_CInventory_load_FUN_004ff400 at 004ff655
;   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 at 004febfb
;   core_inv.cpp_CInventory_select_FUN_004ff800 at 004ff86b
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_ammo.cpp_CAmmo_FUN_00410fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ffe10
        ;   Label: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ffe11
    MOV EDX,dword ptr [EBX + 0x330]     ; 004ffe15
    TEST EDX,EDX                        ; 004ffe1b
    JNZ 0x004ffe21                      ; 004ffe1d
        ;   XREF to: 004ffe21 (CONDITIONAL_JUMP)  ; LAB_004ffe21
    POP EBX                             ; 004ffe1f
    RET                                 ; 004ffe20
    PUSH ESI                            ; 004ffe21
        ;   Label: LAB_004ffe21
    MOV EAX,EDX                         ; 004ffe22
    MOV EDX,dword ptr [EBX + 0x458]     ; 004ffe24
    MOV EAX,dword ptr [EAX + 0x568]     ; 004ffe2a
    MOV dword ptr [EDX + 0x314],EAX     ; 004ffe30
    MOV EAX,dword ptr [EBX + 0x330]     ; 004ffe36
    MOV EDX,dword ptr [EBX + 0x458]     ; 004ffe3c
    MOV EAX,dword ptr [EAX + 0x56c]     ; 004ffe42
    MOV dword ptr [EDX + 0x318],EAX     ; 004ffe48
    MOV ECX,dword ptr [EBX + 0x330]     ; 004ffe4e
    PUSH ECX                            ; 004ffe54
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004ffe55
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ffe5a
    PUSH EAX                            ; 004ffe5d
    MOV ESI,dword ptr [EBX + 0x458]     ; 004ffe5e
    PUSH ESI                            ; 004ffe64
    CALL core_ammo.cpp_CAmmo_FUN_00410fd0 ; 004ffe65
        ;   XREF to: 00410fd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_FUN_00410fd0()
    ADD ESP,0x8                         ; 004ffe6a
    POP ESI                             ; 004ffe6d
    POP EBX                             ; 004ffe6e
    RET                                 ; 004ffe6f

