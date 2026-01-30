; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vampboss_cpp_AnotherVoicuSummonWavCall_FUN_005e7390(void)
;
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e6489
;
; Referenced Globals:
;   TerminatedCString s_voicusummon_wav_00656cbf
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CDripClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_drip.cpp_FUN_0048e6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e7390
        ;   Label: core_vampboss.cpp_AnotherVoicuSummonWavCall_FUN_005e7390
    PUSH ESI                            ; 005e7391
    PUSH EDI                            ; 005e7392
    PUSH EBP                            ; 005e7393
    MOV EBX,dword ptr [ESP + 0x14]      ; 005e7394
    PUSH 0x656cbf                       ; 005e7398 | = "voicusummon.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e739d
    PUSH EBX                            ; 005e73a3
    XOR ESI,ESI                         ; 005e73a4
    XOR EDI,EDI                         ; 005e73a6
    CALL dword ptr [EAX + 0x24]         ; 005e73a8
    ADD ESP,0x8                         ; 005e73ab
    MOV EBX,dword ptr [0x006810c8]      ; 005e73ae | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005e73ae
    CMP ESI,dword ptr [EBX + 0x14d154]  ; 005e73b4 | g_CDemonSetInstance.actor_list_ptr
    JL 0x005e73c1                       ; 005e73ba
        ;   XREF to: 005e73c1 (CONDITIONAL_JUMP)  ; LAB_005e73c1
    POP EBP                             ; 005e73bc
    POP EDI                             ; 005e73bd
    POP ESI                             ; 005e73be
    POP EBX                             ; 005e73bf
    RET                                 ; 005e73c0
    MOV ECX,dword ptr [0x02c9b16c]      ; 005e73c1 | g_CDripClassInfo.name_hash
        ;   Label: LAB_005e73c1
    PUSH ECX                            ; 005e73c7
    MOV EBP,dword ptr [EDI + EBX*0x1 + 0x14d158] ; 005e73c8 | g_CDemonSetInstance.actor_list_data[0]
    PUSH EBP                            ; 005e73cf
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e73d0
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 005e73d5
    ADD ESP,0x8                         ; 005e73d7
    TEST EAX,EAX                        ; 005e73da
    JZ 0x005e7401                       ; 005e73dc
        ;   XREF to: 005e7401 (CONDITIONAL_JUMP)  ; LAB_005e7401
    CMP dword ptr [EAX + 0x2d4],0x2     ; 005e73de
    JNZ 0x005e7401                      ; 005e73e5
        ;   XREF to: 005e7401 (CONDITIONAL_JUMP)  ; LAB_005e7401
    PUSH 0x3f000000                     ; 005e73e7
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005e73ec
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005e73f1
    TEST EAX,EAX                        ; 005e73f4
    JNZ 0x005e7401                      ; 005e73f6
        ;   XREF to: 005e7401 (CONDITIONAL_JUMP)  ; LAB_005e7401
    PUSH EBX                            ; 005e73f8
    CALL core_drip.cpp_FUN_0048e6b0     ; 005e73f9
        ;   XREF to: 0048e6b0 (UNCONDITIONAL_CALL)  ; void core_drip.cpp_FUN_0048e6b0()
    ADD ESP,0x4                         ; 005e73fe
    INC ESI                             ; 005e7401
        ;   Label: LAB_005e7401
    ADD EDI,0x4                         ; 005e7402
    JMP 0x005e73ae                      ; 005e7405
        ;   XREF to: 005e73ae (UNCONDITIONAL_JUMP)  ; LAB_005e73ae

