; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weapon_cpp_CWeapon_onPickup_FUN_00554570(CDemonActor *param_1,CDemonActor *param_2)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onPickup_FUN_0040b1a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00554570
        ;   Label: core_weapon.cpp_CWeapon_onPickup_FUN_00554570
    PUSH EDX                            ; 00554574
    MOV ECX,dword ptr [ESP + 0x8]       ; 00554575
    PUSH ECX                            ; 00554579
    CALL core_actor.cpp_CDemonActor_onPickup_FUN_0040b1a0 ; 0055457a
        ;   XREF to: 0040b1a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onPickup_FUN_0040b1a0(CDemonActor * this_ptr, CDemonActor * owner)
    ADD ESP,0x8                         ; 0055457f
    RET                                 ; 00554582

