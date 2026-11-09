; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_archive_FUN_005096a0(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_allowedAttackTypes_005e7893
;   TerminatedCString s_strengthLo_005e78a6
;   TerminatedCString s_strengthHi_005e78b1
;   TerminatedCString s_canAttachLight_005e78bc
;   TerminatedCString s_dismemberProb_005e78cb
;   TerminatedCString s_canGoInInventory_005e78d9
;   TerminatedCString s_ammoType_005e78ea
;   TerminatedCString s_thrustHitCharacterSound_005e78f3
;   TerminatedCString s_swingHitCharacterSound_005e790b
;   TerminatedCString s_hitOtherSound_005e7922
;   int g_CMeleeClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_weapon.cpp_CWeapon_archive_FUN_005ad8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005096a0
        ;   Label: core_melee.cpp_CMelee_archive_FUN_005096a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005096a1
    PUSH EBX                            ; 005096a5
    CALL core_weapon.cpp_CWeapon_archive_FUN_005ad8b0 ; 005096a6
        ;   XREF to: 005ad8b0 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_archive_FUN_005ad8b0(CWeapon * this_ptr)
    MOV EDX,dword ptr [0x0061f43c]      ; 005096ab | g_CMeleeClassVersion
    ADD ESP,0x4                         ; 005096b1
    CMP EDX,0x2                         ; 005096b4
    JGE 0x00509764                      ; 005096b7
        ;   XREF to: 00509764 (CONDITIONAL_JUMP)  ; LAB_00509764
    CMP dword ptr [0x0061f43c],0x3      ; 005096bd | g_CMeleeClassVersion
        ;   Label: LAB_005096bd
    JL 0x00509702                       ; 005096c4
        ;   XREF to: 00509702 (CONDITIONAL_JUMP)  ; LAB_00509702
    PUSH 0x5e78a6                       ; 005096c6 | = "strengthLo"
    LEA EAX,[EBX + 0x57c]               ; 005096cb
    PUSH EAX                            ; 005096d1
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005096d2
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005096d7
    PUSH 0x5e78b1                       ; 005096da | = "strengthHi"
    LEA EAX,[EBX + 0x580]               ; 005096df
    PUSH EAX                            ; 005096e5
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005096e6
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005096eb
    PUSH 0x5e78bc                       ; 005096ee | = "canAttachLight"
    LEA EAX,[EBX + 0x2f0]               ; 005096f3
    PUSH EAX                            ; 005096f9
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005096fa
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005096ff
    CMP dword ptr [0x0061f43c],0x4      ; 00509702 | g_CMeleeClassVersion
        ;   Label: LAB_00509702
    JL 0x0050971f                       ; 00509709
        ;   XREF to: 0050971f (CONDITIONAL_JUMP)  ; LAB_0050971f
    PUSH 0x5e78cb                       ; 0050970b | = "dismemberProb"
    LEA EAX,[EBX + 0x584]               ; 00509710
    PUSH EAX                            ; 00509716
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00509717
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0050971c
    CMP dword ptr [0x0061f43c],0x5      ; 0050971f | g_CMeleeClassVersion
        ;   Label: LAB_0050971f
    JL 0x0050973c                       ; 00509726
        ;   XREF to: 0050973c (CONDITIONAL_JUMP)  ; LAB_0050973c
    PUSH 0x5e78d9                       ; 00509728 | = "canGoInInventory"
    LEA EAX,[EBX + 0x588]               ; 0050972d
    PUSH EAX                            ; 00509733
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00509734
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00509739
    CMP dword ptr [0x0061f43c],0x6      ; 0050973c | g_CMeleeClassVersion
        ;   Label: LAB_0050973c
    JL 0x00509759                       ; 00509743
        ;   XREF to: 00509759 (CONDITIONAL_JUMP)  ; LAB_00509759
    PUSH 0x5e78ea                       ; 00509745 | = "ammoType"
    LEA EAX,[EBX + 0x59c]               ; 0050974a
    PUSH EAX                            ; 00509750
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00509751
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00509756
    CMP dword ptr [0x0061f43c],0x7      ; 00509759 | g_CMeleeClassVersion
        ;   Label: LAB_00509759
    JGE 0x0050977d                      ; 00509760
        ;   XREF to: 0050977d (CONDITIONAL_JUMP)  ; LAB_0050977d
    POP EBX                             ; 00509762
    RET                                 ; 00509763
    PUSH 0x5e7893                       ; 00509764 | = "allowedAttackTypes"
        ;   Label: LAB_00509764
    LEA EAX,[EBX + 0x578]               ; 00509769
    PUSH EAX                            ; 0050976f
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00509770
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00509775
    JMP 0x005096bd                      ; 00509778
        ;   XREF to: 005096bd (UNCONDITIONAL_JUMP)  ; LAB_005096bd
    PUSH 0x5e78f3                       ; 0050977d | = "thrustHitCharacterSound"
        ;   Label: LAB_0050977d
    LEA EAX,[EBX + 0x5a0]               ; 00509782
    PUSH EAX                            ; 00509788
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00509789
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0050978e
    PUSH 0x5e790b                       ; 00509791 | = "swingHitCharacterSound"
    LEA EAX,[EBX + 0x604]               ; 00509796
    PUSH EAX                            ; 0050979c
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0050979d
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005097a2
    PUSH 0x5e7922                       ; 005097a5 | = "hitOtherSound"
    ADD EBX,0x668                       ; 005097aa
    PUSH EBX                            ; 005097b0
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005097b1
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005097b6
    POP EBX                             ; 005097b9
    RET                                 ; 005097ba

