; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_ctor_FUN_004f3c00(CHeroPlaceholder *this_ptr)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hero.cpp_factoryFuncHeroPlaceholder_FUN_004f3bc0 at 004f3bdd
;   core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_00524c20 at 00524d0d
;
; Referenced Globals:
;   CDemonActor_vtable g_CHeroPlaceholderVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f3c00
        ;   Label: core_hero.cpp_CHeroPlaceholder_ctor_FUN_004f3c00
    PUSH EDX                            ; 004f3c04
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004f3c05
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x154],0x65f844 ; 004f3c0a | g_CHeroPlaceholderVTable
    MOV dword ptr [EAX + 0xfc],0x1      ; 004f3c14
    ADD ESP,0x4                         ; 004f3c1e
    MOV dword ptr [EAX + 0x158],0x0     ; 004f3c21
    RET                                 ; 004f3c2b

