; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_reset_FUN_004afdb0(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_CGame_loadGame_FUN_004a4170 at 004a4aa5
;   core_gore.cpp_CGore_ctor_FUN_004afd80 at 004afd86
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0 at 004d84b2
;
; Referenced Globals:
;   int g_BloodParticleIndex
;   undefined4 g_BloodParticles[0].base.lifetime_remaining
;   undefined4 g_BloodParticles[1].base.lifetime_remaining
;   int g_BloodSplatIndex
;   int g_BloodSplatCount
;   int g_BloodPoolIndex
;   int g_BloodPoolCount
;   int g_FootstepIndex
;   int g_FootstepCount
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004afdb0
        ;   Label: core_gore.cpp_CGore_reset_FUN_004afdb0
    XOR EDX,EDX                         ; 004afdb1
    MOV EAX,0x1c78cec                   ; 004afdb3
    MOV dword ptr [0x01c78ce8],EDX      ; 004afdb8 | g_BloodParticleIndex
    MOV dword ptr [0x01c7ccec],EDX      ; 004afdbe | g_BloodSplatIndex
    MOV dword ptr [0x01c7ccf0],EDX      ; 004afdc4 | g_BloodSplatCount
    MOV dword ptr [0x01c9e034],EDX      ; 004afdca | g_BloodPoolIndex
    MOV dword ptr [0x01c9e038],EDX      ; 004afdd0 | g_BloodPoolCount
    LEA EDX,[EAX + 0x4000]              ; 004afdd6
    ADD EAX,0x40                        ; 004afddc
        ;   Label: LAB_004afddc
    MOV dword ptr [EAX + -0x28],0x0     ; 004afddf | g_BloodParticles[0].base.lifetime_remaining | g_BloodParticles[1].base.lifetime_remaining
    CMP EAX,EDX                         ; 004afde6
    JNZ 0x004afddc                      ; 004afde8
        ;   XREF to: 004afddc (CONDITIONAL_JUMP)  ; LAB_004afddc
    XOR EAX,EDX                         ; 004afdea
    XOR EBP,EBP                         ; 004afdec
    MOV [0x01c9e540],EAX                ; 004afdee | g_FootstepCount
    MOV dword ptr [0x01c9e53c],EBP      ; 004afdf3 | g_FootstepIndex
    POP EBP                             ; 004afdf9
    RET                                 ; 004afdfa

