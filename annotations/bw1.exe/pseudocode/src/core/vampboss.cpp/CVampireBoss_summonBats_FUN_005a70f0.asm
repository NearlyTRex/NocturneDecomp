; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_summonBats_FUN_005a70f0(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_005a5550 at 005a638f
;
; Referenced Globals:
;   undefined4 s_voicusummon_wav_005f8edb+1
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 g_CTVBatClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_tvbat.cpp_CTVBat_orderAttack_FUN_005a4eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a70f0
        ;   Label: core_vampboss.cpp_CVampireBoss_summonBats_FUN_005a70f0
    PUSH ESI                            ; 005a70f1
    PUSH EDI                            ; 005a70f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a70f3
    PUSH 0x5f8edc                       ; 005a70f7 | s_voicusummon_wav_005f8edb+1
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a70fc
    PUSH EBX                            ; 005a7102
    XOR ESI,ESI                         ; 005a7103
    CALL dword ptr [EAX + 0x2c]         ; 005a7105
    ADD ESP,0x8                         ; 005a7108
    XOR EBX,EBX                         ; 005a710b
    MOV EAX,[0x00622c18]                ; 005a710d | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_005a710d
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 005a7112 | g_CDemonSetInstance.actor_count
    JL 0x005a711e                       ; 005a7118
        ;   XREF to: 005a711e (CONDITIONAL_JUMP)  ; LAB_005a711e
    POP EDI                             ; 005a711a
    POP ESI                             ; 005a711b
    POP EBX                             ; 005a711c
    RET                                 ; 005a711d
    MOV ECX,dword ptr [0x02c8aee8]      ; 005a711e | g_CTVBatClassInfo.name_hash
        ;   Label: LAB_005a711e
    PUSH ECX                            ; 005a7124
    MOV EDI,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 005a7125 | g_CDemonSetInstance.actors[0]
    PUSH EDI                            ; 005a712c
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005a712d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 005a7132
    TEST EAX,EAX                        ; 005a7135
    JZ 0x005a714b                       ; 005a7137
        ;   XREF to: 005a714b (CONDITIONAL_JUMP)  ; LAB_005a714b
    CMP dword ptr [EAX + 0xc410],0x0    ; 005a7139
    JZ 0x005a714b                       ; 005a7140
        ;   XREF to: 005a714b (CONDITIONAL_JUMP)  ; LAB_005a714b
    PUSH EAX                            ; 005a7142
    CALL core_tvbat.cpp_CTVBat_orderAttack_FUN_005a4eb0 ; 005a7143
        ;   XREF to: 005a4eb0 (UNCONDITIONAL_CALL)  ; void core_tvbat.cpp_CTVBat_orderAttack_FUN_005a4eb0(CTVBat * this_ptr)
    ADD ESP,0x4                         ; 005a7148
    INC EBX                             ; 005a714b
        ;   Label: LAB_005a714b
    ADD ESI,0x4                         ; 005a714c
    JMP 0x005a710d                      ; 005a714f
        ;   XREF to: 005a710d (UNCONDITIONAL_JUMP)  ; LAB_005a710d

