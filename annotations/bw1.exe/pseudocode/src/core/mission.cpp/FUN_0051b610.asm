; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_0051b610(CDemonMission *param_1,int param_2)
;
;
; XREF[4]:
;   core_mission.cpp_CDemonMission_process_FUN_0051b8d0 at 0051ba10
;   core_mission.cpp_CDemonMission_run_FUN_0051bad0 at 0051bb27
;   core_mission.cpp_FUN_0051ba5c at 0051babf
;   core_mission.cpp_FUN_0051bdc0 at 0051be62
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field588_0x288
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_game.cpp_FUN_004dc000
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_0051b2b0
;   core_mission.cpp_FUN_0051b7b0
;   core_set.cpp_FUN_0054d3c0
;   sound_sndmain.cpp_killAllSfx_FUN_00573b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b610
        ;   Label: core_mission.cpp_FUN_0051b610
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b611
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051b615
    CMP EAX,dword ptr [EBX]             ; 0051b619
    JNZ 0x0051b61f                      ; 0051b61b
        ;   XREF to: 0051b61f (CONDITIONAL_JUMP)  ; LAB_0051b61f
    POP EBX                             ; 0051b61d
    RET                                 ; 0051b61e
    PUSH ESI                            ; 0051b61f
        ;   Label: LAB_0051b61f
    LEA EDX,[EBX + 0x8]                 ; 0051b620
    MOV dword ptr [EBX],EAX             ; 0051b623
    SHL EAX,0x8                         ; 0051b625
    ADD EAX,EDX                         ; 0051b628
    PUSH EAX                            ; 0051b62a
    MOV ECX,dword ptr [0x00622c18]      ; 0051b62b | g_CDemonSetPtr
    PUSH ECX                            ; 0051b631 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_0054d3c0      ; 0051b632
        ;   XREF to: 0054d3c0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0054d3c0()
    MOV ESI,dword ptr [EBX + 0x1008]    ; 0051b637
    ADD ESP,0x8                         ; 0051b63d
    TEST ESI,ESI                        ; 0051b640
    JZ 0x0051b684                       ; 0051b642
        ;   XREF to: 0051b684 (CONDITIONAL_JUMP)  ; LAB_0051b684
    PUSH EBX                            ; 0051b644
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420 ; 0051b645
        ;   XREF to: 0051b420 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0051b64a
        ;   Label: LAB_0051b64a
    PUSH EDI                            ; 0051b64d
    MOV EDI,dword ptr [EBX]             ; 0051b64e
    CMP EDI,dword ptr [EBX + 0x1454]    ; 0051b650
    JNZ 0x0051b68c                      ; 0051b656
        ;   XREF to: 0051b68c (CONDITIONAL_JUMP)  ; LAB_0051b68c
    XOR EBX,EBX                         ; 0051b658
        ;   Label: LAB_0051b658
    XOR ESI,ESI                         ; 0051b65a
    POP EDI                             ; 0051b65c
    MOV EAX,[0x00622c18]                ; 0051b65d | g_CDemonSetPtr
        ;   Label: LAB_0051b65d
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 0051b662 | g_CDemonSetInstance.actor_count
    JGE 0x0051b697                      ; 0051b668
        ;   XREF to: 0051b697 (CONDITIONAL_JUMP)  ; LAB_0051b697
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 0051b66a | g_CDemonSetInstance.actors[0]
    PUSH EAX                            ; 0051b671
    MOV EDX,dword ptr [EAX + 0x154]     ; 0051b672
    ADD EBX,0x4                         ; 0051b678
    INC ESI                             ; 0051b67b
    CALL dword ptr [EDX + 0x50]         ; 0051b67c
    ADD ESP,0x4                         ; 0051b67f
    JMP 0x0051b65d                      ; 0051b682
        ;   XREF to: 0051b65d (UNCONDITIONAL_JUMP)  ; LAB_0051b65d
    PUSH EBX                            ; 0051b684
        ;   Label: LAB_0051b684
    CALL core_mission.cpp_FUN_0051b7b0  ; 0051b685
        ;   XREF to: 0051b7b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b7b0()
    JMP 0x0051b64a                      ; 0051b68a
        ;   XREF to: 0051b64a (UNCONDITIONAL_JUMP)  ; LAB_0051b64a
    PUSH EBX                            ; 0051b68c
        ;   Label: LAB_0051b68c
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_0051b2b0 ; 0051b68d
        ;   XREF to: 0051b2b0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_0051b2b0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0051b692
    JMP 0x0051b658                      ; 0051b695
        ;   XREF to: 0051b658 (UNCONDITIONAL_JUMP)  ; LAB_0051b658
    CALL sound_sndmain.cpp_killAllSfx_FUN_00573b00 ; 0051b697
        ;   XREF to: 00573b00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_killAllSfx_FUN_00573b00()
        ;   Label: LAB_0051b697
    MOV EAX,[0x0061d95c]                ; 0051b69c | g_CGamePtr
    PUSH EAX                            ; 0051b6a1 | g_CGameInstance
    CALL core_game.cpp_FUN_004dc000     ; 0051b6a2
        ;   XREF to: 004dc000 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004dc000()
    MOV EAX,[0x0061d95c]                ; 0051b6a7 | g_CGamePtr | g_CGameInstance
    ADD ESP,0x4                         ; 0051b6ac
    MOV dword ptr [EAX + 0x288],0x1     ; 0051b6af | g_CGameInstance.field588_0x288
    POP ESI                             ; 0051b6b9
    POP EBX                             ; 0051b6ba
    RET                                 ; 0051b6bb

