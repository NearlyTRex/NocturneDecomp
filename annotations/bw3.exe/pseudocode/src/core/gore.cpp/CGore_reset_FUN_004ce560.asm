; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_reset_FUN_004ce560(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_event.cpp_FUN_0048c2e0 at 0048f4ab
;   core_game.cpp_FUN_004bdfb0 at 004be897
;   core_gore.cpp_CGore_ctor_FUN_004ce530 at 004ce536
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004f5cc0 at 004f61a4
;
; Referenced Globals:
;   undefined4 DAT_01d22eb0
;   undefined4 g_BloodParticles[0].field36_0x24
;   undefined4 g_BloodParticles[1].field36_0x24
;   undefined4 DAT_01d276b4
;   undefined4 DAT_01d276b8
;   undefined4 DAT_01d4a93c
;   undefined4 DAT_01d4a940
;   undefined4 DAT_01d4aec4
;   undefined4 DAT_01d4aec8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ce560
        ;   Label: core_gore.cpp_CGore_reset_FUN_004ce560
    XOR EDX,EDX                         ; 004ce561
    MOV EAX,0x1d22eb4                   ; 004ce563
    MOV dword ptr [0x01d22eb0],EDX      ; 004ce568 | DAT_01d22eb0
    MOV dword ptr [0x01d276b4],EDX      ; 004ce56e | DAT_01d276b4
    MOV dword ptr [0x01d276b8],EDX      ; 004ce574 | DAT_01d276b8
    MOV dword ptr [0x01d4a93c],EDX      ; 004ce57a | DAT_01d4a93c
    MOV dword ptr [0x01d4a940],EDX      ; 004ce580 | DAT_01d4a940
    LEA EDX,[EAX + 0x4800]              ; 004ce586
    ADD EAX,0x48                        ; 004ce58c
        ;   Label: LAB_004ce58c
    MOV dword ptr [EAX + -0x24],0x0     ; 004ce58f | g_BloodParticles[0].field36_0x24 | g_BloodParticles[1].field36_0x24
    CMP EAX,EDX                         ; 004ce596
    JNZ 0x004ce58c                      ; 004ce598
        ;   XREF to: 004ce58c (CONDITIONAL_JUMP)  ; LAB_004ce58c
    XOR EAX,EDX                         ; 004ce59a
    XOR EBP,EBP                         ; 004ce59c
    MOV [0x01d4aec8],EAX                ; 004ce59e | DAT_01d4aec8
    MOV dword ptr [0x01d4aec4],EBP      ; 004ce5a3 | DAT_01d4aec4
    POP EBP                             ; 004ce5a9
    RET                                 ; 004ce5aa

