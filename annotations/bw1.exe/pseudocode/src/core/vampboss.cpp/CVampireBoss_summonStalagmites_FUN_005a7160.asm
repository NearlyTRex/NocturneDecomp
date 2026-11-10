; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_005a7160(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_005a5550 at 005a6143
;
; Referenced Globals:
;   TerminatedCString s_voicusummon_wav_005f8eec
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CDripClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_drip.cpp_CDrip_reset_FUN_00485a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7160
        ;   Label: core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_005a7160
    PUSH ESI                            ; 005a7161
    PUSH EDI                            ; 005a7162
    PUSH EBP                            ; 005a7163
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a7164
    PUSH 0x5f8eec                       ; 005a7168 | = "voicusummon.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a716d
    PUSH EBX                            ; 005a7173
    XOR ESI,ESI                         ; 005a7174
    XOR EDI,EDI                         ; 005a7176
    CALL dword ptr [EAX + 0x2c]         ; 005a7178
    ADD ESP,0x8                         ; 005a717b
    MOV EBX,dword ptr [0x00622c18]      ; 005a717e | g_CDemonSetPtr
        ;   Label: LAB_005a717e
    CMP ESI,dword ptr [EBX + 0x14d164]  ; 005a7184 | g_CDemonSetInstance.actor_count
    JL 0x005a7191                       ; 005a718a
        ;   XREF to: 005a7191 (CONDITIONAL_JUMP)  ; LAB_005a7191
    POP EBP                             ; 005a718c
    POP EDI                             ; 005a718d
    POP ESI                             ; 005a718e
    POP EBX                             ; 005a718f
    RET                                 ; 005a7190
    MOV ECX,dword ptr [0x01beee00]      ; 005a7191 | g_CDripClassInfo.name_hash
        ;   Label: LAB_005a7191
    PUSH ECX                            ; 005a7197
    MOV EBP,dword ptr [EDI + EBX*0x1 + 0x14d168] ; 005a7198 | g_CDemonSetInstance.actors[0]
    PUSH EBP                            ; 005a719f
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005a71a0
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EBX,EAX                         ; 005a71a5
    ADD ESP,0x8                         ; 005a71a7
    TEST EAX,EAX                        ; 005a71aa
    JZ 0x005a71d1                       ; 005a71ac
        ;   XREF to: 005a71d1 (CONDITIONAL_JUMP)  ; LAB_005a71d1
    CMP dword ptr [EAX + 0x2d4],0x2     ; 005a71ae
    JNZ 0x005a71d1                      ; 005a71b5
        ;   XREF to: 005a71d1 (CONDITIONAL_JUMP)  ; LAB_005a71d1
    PUSH 0x3f000000                     ; 005a71b7
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 005a71bc
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 005a71c1
    TEST EAX,EAX                        ; 005a71c4
    JNZ 0x005a71d1                      ; 005a71c6
        ;   XREF to: 005a71d1 (CONDITIONAL_JUMP)  ; LAB_005a71d1
    PUSH EBX                            ; 005a71c8
    CALL core_drip.cpp_CDrip_reset_FUN_00485a60 ; 005a71c9
        ;   XREF to: 00485a60 (UNCONDITIONAL_CALL)  ; void core_drip.cpp_CDrip_reset_FUN_00485a60(CDrip * this_ptr)
    ADD ESP,0x4                         ; 005a71ce
    INC ESI                             ; 005a71d1
        ;   Label: LAB_005a71d1
    ADD EDI,0x4                         ; 005a71d2
    JMP 0x005a717e                      ; 005a71d5
        ;   XREF to: 005a717e (UNCONDITIONAL_JUMP)  ; LAB_005a717e

