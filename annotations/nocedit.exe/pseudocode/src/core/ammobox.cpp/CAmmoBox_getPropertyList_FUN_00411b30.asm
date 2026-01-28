; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ammobox_cpp_CAmmoBox_getPropertyList_FUN_00411b30(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00614c8d
;   TerminatedCString s_Weapon_00614c9f
;   TerminatedCString s_Amount_of_ammo_00614ca6
;   TerminatedCString s_Ammo_type_00614cb5
;   TerminatedCString s_CDemonActor_00614cbf
;   TerminatedCString s_Inventory_item_00614ccb
;   TerminatedCString s_Has_collision_00614cda
;   TerminatedCString s_Open_sound_00614ce8
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_FUN_0040e290
;   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_FUN_0040e670
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411b30
        ;   Label: core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30
    PUSH ESI                            ; 00411b31
    MOV EBX,dword ptr [ESP + 0xc]       ; 00411b32
    MOV ESI,dword ptr [ESP + 0x10]      ; 00411b36
    PUSH ESI                            ; 00411b3a
    PUSH EBX                            ; 00411b3b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 00411b3c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00411b41
    PUSH 0x0                            ; 00411b44
    LEA EAX,[EBX + 0x158]               ; 00411b46
    PUSH EAX                            ; 00411b4c
    PUSH 0x614c8d                       ; 00411b4d | = "Model file (.kfm)"
    PUSH ESI                            ; 00411b52
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 00411b53
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    MOV EDX,dword ptr [EBX + 0x320]     ; 00411b58
    ADD ESP,0x10                        ; 00411b5e
    TEST EDX,EDX                        ; 00411b61
    JZ 0x00411bb0                       ; 00411b63
        ;   XREF to: 00411bb0 (CONDITIONAL_JUMP)  ; LAB_00411bb0
    PUSH 0x0                            ; 00411b65
        ;   Label: LAB_00411b65
    PUSH 0x614cbf                       ; 00411b67 | = "CDemonActor"
    PUSH 0x1                            ; 00411b6c
    LEA EAX,[EBX + 0x320]               ; 00411b6e
    PUSH EAX                            ; 00411b74
    PUSH 0x614ccb                       ; 00411b75 | = "Inventory item"
    PUSH ESI                            ; 00411b7a
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e350 ; 00411b7b
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorPropertyList_FUN_0040e350(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 00411b80
    LEA EAX,[EBX + 0x324]               ; 00411b83
    PUSH EAX                            ; 00411b89
    PUSH 0x614cda                       ; 00411b8a | = "Has collision"
    PUSH ESI                            ; 00411b8f
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 00411b90
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00411b95
    ADD EBX,0x328                       ; 00411b98
    PUSH EBX                            ; 00411b9e
    PUSH 0x614ce8                       ; 00411b9f | = "Open sound"
    PUSH ESI                            ; 00411ba4
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 00411ba5
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00411baa
    POP ESI                             ; 00411bad
    POP EBX                             ; 00411bae
    RET                                 ; 00411baf
    PUSH EDX                            ; 00411bb0
        ;   Label: LAB_00411bb0
    PUSH 0x40                           ; 00411bb1
    LEA EAX,[EBX + 0x2d4]               ; 00411bb3
    PUSH EAX                            ; 00411bb9
    PUSH 0x614c9f                       ; 00411bba | = "Weapon"
    PUSH ESI                            ; 00411bbf
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e290 ; 00411bc0
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList * this_ptr)
    ADD ESP,0x14                        ; 00411bc5
    PUSH 0x0                            ; 00411bc8
    LEA EAX,[EBX + 0x314]               ; 00411bca
    PUSH EAX                            ; 00411bd0
    PUSH 0x614ca6                       ; 00411bd1 | = "Amount of ammo"
    PUSH ESI                            ; 00411bd6
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0 ; 00411bd7
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1e0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00411bdc
    PUSH 0x411ab0                       ; 00411bdf
    PUSH 0x411a30                       ; 00411be4
    PUSH 0x614cb5                       ; 00411be9 | = "Ammo type"
    PUSH ESI                            ; 00411bee
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e670 ; 00411bef
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e670(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00411bf4
    JMP 0x00411b65                      ; 00411bf7
        ;   XREF to: 00411b65 (UNCONDITIONAL_JUMP)  ; LAB_00411b65

