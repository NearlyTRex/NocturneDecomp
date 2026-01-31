; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_npc_cpp_CNPC_getPropertyList_FUN_00544e40(CNPC *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; XREF[4]:
;   core_hiram.cpp_CHiram_getPropertyList_FUN_004f46a0 at 004f46ab
;   core_hostage.cpp_CHostage_getPropertyList_FUN_004f69c0 at 004f69cc
;   core_hpriest.cpp_CHighPriestOfGardath_getPropertyList_FUN_004f7c70 at 004f7c7b
;   core_passngr.cpp_FUN_00546270 at 0054627c
;
; Referenced Globals:
;   TerminatedCString s_Model_0063e3cd
;   TerminatedCString s_State_0063e3d3
;   TerminatedCString s_Shoot_me_0063e3d9
;   TerminatedCString s_Hit_points_0063e3e2
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
;   core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544e40
        ;   Label: core_npc.cpp_CNPC_getPropertyList_FUN_00544e40
    PUSH ESI                            ; 00544e41
    PUSH EDI                            ; 00544e42
    MOV ESI,dword ptr [ESP + 0x10]      ; 00544e43
    MOV EBX,dword ptr [ESP + 0x14]      ; 00544e47
    PUSH EBX                            ; 00544e4b
    PUSH ESI                            ; 00544e4c
    CALL core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730 ; 00544e4d
        ;   XREF to: 0042f730 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730(CCharacter * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00544e52
    PUSH 0x0                            ; 00544e55
    LEA EDI,[ESI + 0x158]               ; 00544e57
    PUSH EDI                            ; 00544e5d
    PUSH 0x63e3cd                       ; 00544e5e | = "Model"
    PUSH EBX                            ; 00544e63
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0 ; 00544e64
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00544e69
    PUSH EDI                            ; 00544e6c
    PUSH 0x63e3d3                       ; 00544e6d | = "State"
    PUSH EBX                            ; 00544e72
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0 ; 00544e73
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00544e78
    LEA EDI,[ESI + 0x1f700]             ; 00544e7b
    PUSH EDI                            ; 00544e81
    PUSH 0x63e3d9                       ; 00544e82 | = "Shoot me"
    PUSH EBX                            ; 00544e87
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 00544e88
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00544e8d
    PUSH 0x0                            ; 00544e90
    ADD ESI,0x243c                      ; 00544e92
    PUSH ESI                            ; 00544e98
    PUSH 0x63e3e2                       ; 00544e99 | = "Hit points"
    PUSH EBX                            ; 00544e9e
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 00544e9f
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00544ea4
    POP EDI                             ; 00544ea7
    POP ESI                             ; 00544ea8
    POP EBX                             ; 00544ea9
    RET                                 ; 00544eaa

