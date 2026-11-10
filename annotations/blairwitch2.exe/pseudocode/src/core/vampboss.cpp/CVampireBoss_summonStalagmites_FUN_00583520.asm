; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_00583520(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_00581910 at 00582503
;
; Referenced Globals:
;   TerminatedCString s_voicusummon_wav_005edb90
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDripClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_drip.cpp_CDrip_reset_FUN_0046d560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583520
        ;   Label: core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_00583520
    PUSH ESI                            ; 00583521
    PUSH EDI                            ; 00583522
    PUSH EBP                            ; 00583523
    MOV EBX,dword ptr [ESP + 0x14]      ; 00583524
    PUSH 0x5edb90                       ; 00583528 | = "voicusummon.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058352d
    PUSH EBX                            ; 00583533
    XOR ESI,ESI                         ; 00583534
    XOR EDI,EDI                         ; 00583536
    CALL dword ptr [EAX + 0x34]         ; 00583538
    ADD ESP,0x8                         ; 0058353b
    MOV EBX,dword ptr [0x0061b5a8]      ; 0058353e | g_CDemonSetPtr
        ;   Label: LAB_0058353e
    CMP ESI,dword ptr [EBX + 0x14d164]  ; 00583544 | g_CDemonSetInstance.actor_count
    JL 0x00583551                       ; 0058354a
        ;   XREF to: 00583551 (CONDITIONAL_JUMP)  ; LAB_00583551
    POP EBP                             ; 0058354c
    POP EDI                             ; 0058354d
    POP ESI                             ; 0058354e
    POP EBX                             ; 0058354f
    RET                                 ; 00583550
    MOV ECX,dword ptr [0x01bd3844]      ; 00583551 | g_CDripClassInfo.name_hash
        ;   Label: LAB_00583551
    PUSH ECX                            ; 00583557
    MOV EBP,dword ptr [EDI + EBX*0x1 + 0x14d168] ; 00583558 | g_CDemonSetInstance.actors[0]
    PUSH EBP                            ; 0058355f
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00583560
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV EBX,EAX                         ; 00583565
    ADD ESP,0x8                         ; 00583567
    TEST EAX,EAX                        ; 0058356a
    JZ 0x00583591                       ; 0058356c
        ;   XREF to: 00583591 (CONDITIONAL_JUMP)  ; LAB_00583591
    CMP dword ptr [EAX + 0x430],0x2     ; 0058356e
    JNZ 0x00583591                      ; 00583575
        ;   XREF to: 00583591 (CONDITIONAL_JUMP)  ; LAB_00583591
    PUSH 0x3f000000                     ; 00583577
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0058357c
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 00583581
    TEST EAX,EAX                        ; 00583584
    JNZ 0x00583591                      ; 00583586
        ;   XREF to: 00583591 (CONDITIONAL_JUMP)  ; LAB_00583591
    PUSH EBX                            ; 00583588
    CALL core_drip.cpp_CDrip_reset_FUN_0046d560 ; 00583589
        ;   XREF to: 0046d560 (UNCONDITIONAL_CALL)  ; void core_drip.cpp_CDrip_reset_FUN_0046d560(CDrip * this_ptr)
    ADD ESP,0x4                         ; 0058358e
    INC ESI                             ; 00583591
        ;   Label: LAB_00583591
    ADD EDI,0x4                         ; 00583592
    JMP 0x0058353e                      ; 00583595
        ;   XREF to: 0058353e (UNCONDITIONAL_JUMP)  ; LAB_0058353e

