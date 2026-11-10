; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004fa4e0(CInventory *this_ptr,int ammo_type)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ammo_type
;
; XREF[4]:
;   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004f8fe0 at 004f90bf
;   core_inv.cpp_CInventory_load_FUN_004f97a0 at 004f99f8
;   core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0 at 004f8eab
;   core_inv.cpp_CInventory_select_FUN_004f9bd0 at 004f9c3a
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa4e0
        ;   Label: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004fa4e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fa4e1
    MOV EDX,dword ptr [EBX + 0x338]     ; 004fa4e5
    TEST EDX,EDX                        ; 004fa4eb
    JNZ 0x004fa4f1                      ; 004fa4ed
        ;   XREF to: 004fa4f1 (CONDITIONAL_JUMP)  ; LAB_004fa4f1
    POP EBX                             ; 004fa4ef
    RET                                 ; 004fa4f0
    PUSH ESI                            ; 004fa4f1
        ;   Label: LAB_004fa4f1
    MOV EAX,EDX                         ; 004fa4f2
    MOV EDX,dword ptr [EBX + 0x464]     ; 004fa4f4
    MOV EAX,dword ptr [EAX + 0x568]     ; 004fa4fa
    MOV dword ptr [EDX + 0x314],EAX     ; 004fa500
    MOV EAX,dword ptr [EBX + 0x338]     ; 004fa506
    MOV EDX,dword ptr [EBX + 0x464]     ; 004fa50c
    MOV EAX,dword ptr [EAX + 0x56c]     ; 004fa512
    MOV dword ptr [EDX + 0x318],EAX     ; 004fa518
    MOV ECX,dword ptr [EBX + 0x338]     ; 004fa51e
    PUSH ECX                            ; 004fa524
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830 ; 004fa525
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fa52a
    PUSH EAX                            ; 004fa52d
    MOV ESI,dword ptr [EBX + 0x464]     ; 004fa52e
    PUSH ESI                            ; 004fa534
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0 ; 004fa535
        ;   XREF to: 0040ddd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004fa53a
    POP ESI                             ; 004fa53d
    POP EBX                             ; 004fa53e
    RET                                 ; 004fa53f

