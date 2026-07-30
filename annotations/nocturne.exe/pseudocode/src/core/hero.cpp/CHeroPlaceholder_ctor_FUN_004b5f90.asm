; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_ctor_FUN_004b5f90(CHeroPlaceholder *this_ptr)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hero.cpp_FUN_004b5f60 at 004b5f73
;   core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20 at 004d9d01
;
; Referenced Globals:
;   CDemonActor_vtable g_CHeroPlaceholderVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b5f90
        ;   Label: core_hero.cpp_CHeroPlaceholder_ctor_FUN_004b5f90
    PUSH EDX                            ; 004b5f94
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 004b5f95
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x14c],0x59ec84 ; 004b5f9a | g_CHeroPlaceholderVTable
    MOV dword ptr [EAX + 0xfc],0x1      ; 004b5fa4
    ADD ESP,0x4                         ; 004b5fae
    MOV dword ptr [EAX + 0x150],0x0     ; 004b5fb1
    RET                                 ; 004b5fbb

