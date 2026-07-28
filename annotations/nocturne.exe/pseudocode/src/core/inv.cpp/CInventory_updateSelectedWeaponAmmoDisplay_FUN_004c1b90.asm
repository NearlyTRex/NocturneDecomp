; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90(CInventory *this_ptr,int ammo_type)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ammo_type
;
; XREF[4]:
;   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50 at 004c0b2f
;   core_inv.cpp_CInventory_load_FUN_004c1190 at 004c13e5
;   core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 at 004c093b
;   core_inv.cpp_CInventory_select_FUN_004c1580 at 004c15eb
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1b90
        ;   Label: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c1b91
    MOV EDX,dword ptr [EBX + 0x330]     ; 004c1b95
    TEST EDX,EDX                        ; 004c1b9b
    JNZ 0x004c1ba1                      ; 004c1b9d
        ;   XREF to: 004c1ba1 (CONDITIONAL_JUMP)  ; LAB_004c1ba1
    POP EBX                             ; 004c1b9f
    RET                                 ; 004c1ba0
    PUSH ESI                            ; 004c1ba1
        ;   Label: LAB_004c1ba1
    MOV EAX,EDX                         ; 004c1ba2
    MOV EDX,dword ptr [EBX + 0x458]     ; 004c1ba4
    MOV EAX,dword ptr [EAX + 0x560]     ; 004c1baa
    MOV dword ptr [EDX + 0x30c],EAX     ; 004c1bb0
    MOV EAX,dword ptr [EBX + 0x330]     ; 004c1bb6
    MOV EDX,dword ptr [EBX + 0x458]     ; 004c1bbc
    MOV EAX,dword ptr [EAX + 0x564]     ; 004c1bc2
    MOV dword ptr [EDX + 0x310],EAX     ; 004c1bc8
    MOV ECX,dword ptr [EBX + 0x330]     ; 004c1bce
    PUSH ECX                            ; 004c1bd4
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004c1bd5
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c1bda
    PUSH EAX                            ; 004c1bdd
    MOV ESI,dword ptr [EBX + 0x458]     ; 004c1bde
    PUSH ESI                            ; 004c1be4
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 ; 004c1be5
        ;   XREF to: 0040ed80 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004c1bea
    POP ESI                             ; 004c1bed
    POP EBX                             ; 004c1bee
    RET                                 ; 004c1bef

