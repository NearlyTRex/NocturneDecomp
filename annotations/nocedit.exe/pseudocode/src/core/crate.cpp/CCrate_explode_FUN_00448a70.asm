; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_explode_FUN_00448a70(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040abaa
;   core_gun.cpp_CGun_fire_FUN_004f0350 at 004f0abe
;   core_tommygun.cpp_CTommyGun_fire_FUN_005ddb30 at 005de2d7
;   core_turret.cpp_CTurret_fire_FUN_005e3750 at 005e3c2a
;
; Referenced Globals:
;   TerminatedCString s_s_exploding_00619b2e
;   CConsole* g_CConsolePtr = 0083b1a4
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CConsole g_CConsoleInstance
;   CFireEffect g_CFireEffectInstance
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448a70
        ;   Label: core_crate.cpp_CCrate_explode_FUN_00448a70
    SUB ESP,0x24                        ; 00448a71
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00448a74
    CMP dword ptr [EBX + 0x70],0x1      ; 00448a78
    JZ 0x00448a83                       ; 00448a7c
        ;   XREF to: 00448a83 (CONDITIONAL_JUMP)  ; LAB_00448a83
    ADD ESP,0x24                        ; 00448a7e
    POP EBX                             ; 00448a81
    RET                                 ; 00448a82
    PUSH EBX                            ; 00448a83
        ;   Label: LAB_00448a83
    PUSH 0x619b2e                       ; 00448a84 | = "%s exploding!\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 00448a89 | g_CConsoleInstance | g_CConsolePtr
    PUSH ECX                            ; 00448a8f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00448a90
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00448a95
    MOV EAX,ESP                         ; 00448a98
    PUSH EAX                            ; 00448a9a
    MOV EDX,dword ptr [EBX + 0x154]     ; 00448a9b
    PUSH EBX                            ; 00448aa1
    CALL dword ptr [EDX + 0x14]         ; 00448aa2
    LEA EAX,[ESP + 0x20]                ; 00448aa5
    LEA EDX,[EBX + 0x20]                ; 00448aa9
    ADD ESP,0x8                         ; 00448aac
    CMP EAX,EDX                         ; 00448aaf
    JZ 0x00448ac7                       ; 00448ab1
        ;   XREF to: 00448ac7 (CONDITIONAL_JUMP)  ; LAB_00448ac7
    MOV EAX,dword ptr [EDX]             ; 00448ab3
    MOV dword ptr [ESP + 0x18],EAX      ; 00448ab5
    MOV EAX,dword ptr [EDX + 0x4]       ; 00448ab9
    MOV dword ptr [ESP + 0x1c],EAX      ; 00448abc
    MOV EAX,dword ptr [EDX + 0x8]       ; 00448ac0
    MOV dword ptr [ESP + 0x20],EAX      ; 00448ac3
    PUSH EDI                            ; 00448ac7
        ;   Label: LAB_00448ac7
    PUSH ESI                            ; 00448ac8
    PUSH 0x40800000                     ; 00448ac9
    FLD float ptr [ESP + 0x1c]          ; 00448ace
    PUSH 0x44bb8000                     ; 00448ad2
    LEA EAX,[ESP + 0x28]                ; 00448ad7
    MOV ESI,dword ptr [0x0067a3d0]      ; 00448adb | g_CFireEffectPtr
    PUSH 0x42000000                     ; 00448ae1
    FSUB float ptr [ESP + 0x18]         ; 00448ae6
    PUSH EAX                            ; 00448aea
    FADD float ptr [ESP + 0x34]         ; 00448aeb
    PUSH ESI                            ; 00448aef | g_CFireEffectInstance
    FSTP float ptr [ESP + 0x38]         ; 00448af0
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10 ; 00448af4
        ;   XREF to: 004c8c10 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    ADD ESP,0x14                        ; 00448af9
    PUSH 0x1                            ; 00448afc
    PUSH EBX                            ; 00448afe
    MOV EDI,dword ptr [0x0067d550]      ; 00448aff | g_CDemonMissionPtr
    PUSH EDI                            ; 00448b05 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 ; 00448b06
        ;   XREF to: 005240a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr, CDemonActor * actor, uint flags)
    ADD ESP,0xc                         ; 00448b0b
    MOV dword ptr [EBX + 0x70],0x2      ; 00448b0e
    POP ESI                             ; 00448b15
    POP EDI                             ; 00448b16
    ADD ESP,0x24                        ; 00448b17
    POP EBX                             ; 00448b1a
    RET                                 ; 00448b1b

