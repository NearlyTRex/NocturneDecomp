; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hero_cpp_CHero_getPropertyList_FUN_004f3f20(CHero *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; XREF[9]:
;   core_baron.cpp_CBaron_getPropertyList_FUN_00414010 at 0041401c
;   core_colonel.cpp_FUN_00440610 at 0044061a
;   core_gabriela.cpp_FUN_004d7610 at 004d761a
;   core_haystack.cpp_CHaystack_getPropertyList_FUN_004f1cd0 at 004f1cda
;   core_icepick.cpp_CIcePick_getPropertyList_FUN_004f97a0 at 004f97aa
;   core_moloch.cpp_FUN_00529950 at 0052995c
;   core_scat.cpp_FUN_00559120 at 0055912a
;   core_stranger.cpp_CStranger_getPropertyList_FUN_005c68f0 at 005c68fa
;   core_svetlana.cpp_CSvetlana_FUN_005d9f10 at 005d9f1a
;
; Referenced Globals:
;   TerminatedCString s_State_0062edb8
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
;   core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3f20
        ;   Label: core_hero.cpp_CHero_getPropertyList_FUN_004f3f20
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f3f21
    PUSH EDX                            ; 004f3f25
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f3f26
    PUSH ECX                            ; 004f3f2a
    CALL core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730 ; 004f3f2b
        ;   XREF to: 0042f730 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730(CCharacter * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004f3f30
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f3f33
    ADD EAX,0x158                       ; 004f3f37
    PUSH EAX                            ; 004f3f3c
    PUSH 0x62edb8                       ; 004f3f3d | = "State"
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f3f42
    PUSH EBX                            ; 004f3f46
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0 ; 004f3f47
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f3f4c
    POP EBX                             ; 004f3f4f
    RET                                 ; 004f3f50

