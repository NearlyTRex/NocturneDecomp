; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_reset_FUN_004ed760(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e1bf6
;   core_gore.cpp_CGore_ctor_FUN_004ed730 at 004ed736
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 at 00523399
;   core_msnedit.cpp_CDemonMission_editGore_FUN_0053e220 at 0053e8d9
;
; Referenced Globals:
;   int g_BloodParticleIndex
;   CBloodParticle[256] g_BloodParticles
;   undefined4 DAT_02d833ec
;   undefined4 DAT_02d8342c
;   int g_BloodSplatIndex
;   int g_BloodSplatCount
;   int g_BloodPoolIndex
;   int g_BloodPoolCount
;   int g_FootstepIndex
;   int g_FootstepCount
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ed760
        ;   Label: core_gore.cpp_CGore_reset_FUN_004ed760
    XOR EDX,EDX                         ; 004ed761
    MOV EAX,0x2d833d4                   ; 004ed763 | g_BloodParticles
    MOV dword ptr [0x02d833d0],EDX      ; 004ed768 | g_BloodParticleIndex
    MOV dword ptr [0x02d873d4],EDX      ; 004ed76e | g_BloodSplatIndex
    MOV dword ptr [0x02d873d8],EDX      ; 004ed774 | g_BloodSplatCount
    MOV dword ptr [0x02da871c],EDX      ; 004ed77a | g_BloodPoolIndex
    MOV dword ptr [0x02da8720],EDX      ; 004ed780 | g_BloodPoolCount
    LEA EDX,[EAX + 0x4000]              ; 004ed786 | g_BloodSplatIndex
    ADD EAX,0x40                        ; 004ed78c
        ;   Label: LAB_004ed78c
    MOV dword ptr [EAX + -0x28],0x0     ; 004ed78f | DAT_02d833ec | DAT_02d8342c
    CMP EAX,EDX                         ; 004ed796
    JNZ 0x004ed78c                      ; 004ed798
        ;   XREF to: 004ed78c (CONDITIONAL_JUMP)  ; LAB_004ed78c
    XOR EAX,EDX                         ; 004ed79a
    XOR EBP,EBP                         ; 004ed79c
    MOV [0x02da8c28],EAX                ; 004ed79e | g_FootstepCount
    MOV dword ptr [0x02da8c24],EBP      ; 004ed7a3 | g_FootstepIndex
    POP EBP                             ; 004ed7a9
    RET                                 ; 004ed7aa

