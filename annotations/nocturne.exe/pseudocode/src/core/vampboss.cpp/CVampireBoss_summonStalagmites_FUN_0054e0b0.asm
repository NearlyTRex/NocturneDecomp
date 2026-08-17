; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054d1a9
;
; Referenced Globals:
;   TerminatedCString s_voicusummon_wav_00597229
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 g_CDripActorType_01b7b2f4.name_hash
;   undefined4 g_CDemonSet_01e57284.actor_count
;   undefined4 g_CDemonSet_01e57284.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_drip.cpp_CDrip_reset_FUN_00462710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e0b0
        ;   Label: core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0
    PUSH ESI                            ; 0054e0b1
    PUSH EDI                            ; 0054e0b2
    PUSH EBP                            ; 0054e0b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054e0b4
    PUSH 0x597229                       ; 0054e0b8 | = "voicusummon.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054e0bd
    PUSH EBX                            ; 0054e0c3
    XOR ESI,ESI                         ; 0054e0c4
    XOR EDI,EDI                         ; 0054e0c6
    CALL dword ptr [EAX + 0x24]         ; 0054e0c8
    ADD ESP,0x8                         ; 0054e0cb
    MOV EBX,dword ptr [0x005be368]      ; 0054e0ce | g_CDemonSet_PTR_005be368
        ;   Label: LAB_0054e0ce
    CMP ESI,dword ptr [EBX + 0x14cd6c]  ; 0054e0d4 | g_CDemonSet_01e57284.actor_count
    JL 0x0054e0e1                       ; 0054e0da
        ;   XREF to: 0054e0e1 (CONDITIONAL_JUMP)  ; LAB_0054e0e1
    POP EBP                             ; 0054e0dc
    POP EDI                             ; 0054e0dd
    POP ESI                             ; 0054e0de
    POP EBX                             ; 0054e0df
    RET                                 ; 0054e0e0
    MOV ECX,dword ptr [0x01b7b32c]      ; 0054e0e1 | g_CDripActorType_01b7b2f4.name_hash
        ;   Label: LAB_0054e0e1
    PUSH ECX                            ; 0054e0e7
    MOV EBP,dword ptr [EDI + EBX*0x1 + 0x14cd70] ; 0054e0e8 | g_CDemonSet_01e57284.actors[0]
    PUSH EBP                            ; 0054e0ef
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054e0f0
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0054e0f5
    ADD ESP,0x8                         ; 0054e0f7
    TEST EAX,EAX                        ; 0054e0fa
    JZ 0x0054e121                       ; 0054e0fc
        ;   XREF to: 0054e121 (CONDITIONAL_JUMP)  ; LAB_0054e121
    CMP dword ptr [EAX + 0x2cc],0x2     ; 0054e0fe
    JNZ 0x0054e121                      ; 0054e105
        ;   XREF to: 0054e121 (CONDITIONAL_JUMP)  ; LAB_0054e121
    PUSH 0x3f000000                     ; 0054e107
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0054e10c
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 0054e111
    TEST EAX,EAX                        ; 0054e114
    JNZ 0x0054e121                      ; 0054e116
        ;   XREF to: 0054e121 (CONDITIONAL_JUMP)  ; LAB_0054e121
    PUSH EBX                            ; 0054e118
    CALL core_drip.cpp_CDrip_reset_FUN_00462710 ; 0054e119
        ;   XREF to: 00462710 (UNCONDITIONAL_CALL)  ; void core_drip.cpp_CDrip_reset_FUN_00462710(CDrip * this_ptr)
    ADD ESP,0x4                         ; 0054e11e
    INC ESI                             ; 0054e121
        ;   Label: LAB_0054e121
    ADD EDI,0x4                         ; 0054e122
    JMP 0x0054e0ce                      ; 0054e125
        ;   XREF to: 0054e0ce (UNCONDITIONAL_JUMP)  ; LAB_0054e0ce

