; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHeroPlaceholder_ctor_FUN_004b5f90(undefined4 param_1)
;
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20 at 004d9d01
;
; Referenced Globals:
;   undefined1* PTR_core_actor.cpp_CDemonActor_setup_FUN_00409fc0_0059ec84 = 00409fc0
;
; Called Functions:
;   FUN_00409d30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b5f90
        ;   Label: core_hero.cpp_CHeroPlaceholder_ctor_FUN_004b5f90
    PUSH EDX                            ; 004b5f94
    CALL FUN_00409d30                   ; 004b5f95
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    MOV dword ptr [EAX + 0x14c],0x59ec84 ; 004b5f9a | PTR_core_actor.cpp_CDemonActor_setup_FUN_00409fc0_0059ec84
    MOV dword ptr [EAX + 0xfc],0x1      ; 004b5fa4
    ADD ESP,0x4                         ; 004b5fae
    MOV dword ptr [EAX + 0x150],0x0     ; 004b5fb1
    RET                                 ; 004b5fbb

