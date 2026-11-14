; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_randomChance_FUN_0040cf40(float probability_threshold)
;
; Parameters:
; float            Stack[0x4]:4   probability_threshold
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[36]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cab0 at 0040cbe2
;   core_bodypart.cpp_CBodyPart_spawnGore_FUN_00416b20 at 00416b25
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426ed8
;   core_carved.cpp_FUN_00428810 at 004288ba
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90 at 0042feaf
;   core_charactr.cpp_FUN_0042fc90 at 0042fcfc
;   core_charactr.cpp_FUN_0042fdc0 at 0042fddf
;   core_construc.cpp_CConstruct_process_FUN_00442a20 at 00443616
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_00445730 at 004457b6
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00455080 at 0045725b
;   ... and 26 more
;
; Referenced Globals:
;   undefined4 DAT_005b5f01
;   undefined4 DAT_005b5f05
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.is_processing
;
; Called Functions:
;   core_actor.cpp_generateRandomValue_FUN_0040cdd0
;   crt_stdlib.c_rand_FUN_005a35cc
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0040cf40
        ;   Label: core_actor.cpp_randomChance_FUN_0040cf40
    MOV EAX,[0x005fe9dc]                ; 0040cf43 | g_CGamePtr
    CMP dword ptr [EAX + 0x260],0x0     ; 0040cf48 | g_CGameInstance.is_processing
    JZ 0x0040cf7d                       ; 0040cf4f
        ;   XREF to: 0040cf7d (CONDITIONAL_JUMP)  ; LAB_0040cf7d
    CALL core_actor.cpp_generateRandomValue_FUN_0040cdd0 ; 0040cf51
        ;   XREF to: 0040cdd0 (UNCONDITIONAL_CALL)  ; uint core_actor.cpp_generateRandomValue_FUN_0040cdd0()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040cf56
    FILD dword ptr [ESP + 0x4]          ; 0040cf5a
    FMUL float ptr [0x005b5f05]         ; 0040cf5e | DAT_005b5f05
    FSTP float ptr [ESP]                ; 0040cf64
        ;   Label: LAB_0040cf64
    FLD float ptr [ESP]                 ; 0040cf67
    FCOMP float ptr [ESP + 0xc]         ; 0040cf6a
    FNSTSW AX                           ; 0040cf6e
    SAHF                                ; 0040cf70
    SETC AL                             ; 0040cf71
    AND EAX,0xff                        ; 0040cf74
    ADD ESP,0x8                         ; 0040cf79
    RET                                 ; 0040cf7c
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 0040cf7d
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
        ;   Label: LAB_0040cf7d
    MOV dword ptr [ESP + 0x4],EAX       ; 0040cf82
    FILD dword ptr [ESP + 0x4]          ; 0040cf86
    FMUL float ptr [0x005b5f01]         ; 0040cf8a | DAT_005b5f01
    JMP 0x0040cf64                      ; 0040cf90
        ;   XREF to: 0040cf64 (UNCONDITIONAL_JUMP)  ; LAB_0040cf64

