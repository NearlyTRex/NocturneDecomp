; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_reset_FUN_004c93f0(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_event.cpp_FUN_00489670 at 0048c368
;   core_game.cpp_FUN_004bbf70 at 004bc802
;   core_gore.cpp_CGore_ctor_FUN_004c93c0 at 004c93c6
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590 at 004fba74
;
; Referenced Globals:
;   undefined4 DAT_01cb82f0
;   undefined4 g_BloodParticles[0].field36_0x24
;   undefined4 g_BloodParticles[1].field36_0x24
;   undefined4 DAT_01cbcaf4
;   undefined4 DAT_01cbcaf8
;   undefined4 DAT_01cdde3c
;   undefined4 DAT_01cdde40
;   undefined4 DAT_01cde344
;   undefined4 DAT_01cde348
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004c93f0
        ;   Label: core_gore.cpp_CGore_reset_FUN_004c93f0
    XOR EDX,EDX                         ; 004c93f1
    MOV EAX,0x1cb82f4                   ; 004c93f3
    MOV dword ptr [0x01cb82f0],EDX      ; 004c93f8 | DAT_01cb82f0
    MOV dword ptr [0x01cbcaf4],EDX      ; 004c93fe | DAT_01cbcaf4
    MOV dword ptr [0x01cbcaf8],EDX      ; 004c9404 | DAT_01cbcaf8
    MOV dword ptr [0x01cdde3c],EDX      ; 004c940a | DAT_01cdde3c
    MOV dword ptr [0x01cdde40],EDX      ; 004c9410 | DAT_01cdde40
    LEA EDX,[EAX + 0x4800]              ; 004c9416
    ADD EAX,0x48                        ; 004c941c
        ;   Label: LAB_004c941c
    MOV dword ptr [EAX + -0x24],0x0     ; 004c941f | g_BloodParticles[0].field36_0x24 | g_BloodParticles[1].field36_0x24
    CMP EAX,EDX                         ; 004c9426
    JNZ 0x004c941c                      ; 004c9428
        ;   XREF to: 004c941c (CONDITIONAL_JUMP)  ; LAB_004c941c
    XOR EAX,EDX                         ; 004c942a
    XOR EBP,EBP                         ; 004c942c
    MOV [0x01cde348],EAX                ; 004c942e | DAT_01cde348
    MOV dword ptr [0x01cde344],EBP      ; 004c9433 | DAT_01cde344
    POP EBP                             ; 004c9439
    RET                                 ; 004c943a

