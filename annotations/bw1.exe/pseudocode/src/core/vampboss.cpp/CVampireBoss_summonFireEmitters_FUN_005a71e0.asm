; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_summonFireEmitters_FUN_005a71e0(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_005a5550 at 005a6384
;
; Referenced Globals:
;   TerminatedCString s_voicusummon_wav_005f8efc
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CEmitterClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_0049f0e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a71e0
        ;   Label: core_vampboss.cpp_CVampireBoss_summonFireEmitters_FUN_005a71e0
    PUSH ESI                            ; 005a71e1
    PUSH EDI                            ; 005a71e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a71e3
    PUSH 0x5f8efc                       ; 005a71e7 | = "voicusummon.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a71ec
    PUSH EBX                            ; 005a71f2
    XOR ESI,ESI                         ; 005a71f3
    CALL dword ptr [EAX + 0x2c]         ; 005a71f5
    ADD ESP,0x8                         ; 005a71f8
    XOR EBX,EBX                         ; 005a71fb
    MOV EAX,[0x00622c18]                ; 005a71fd | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_005a71fd
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 005a7202 | g_CDemonSetInstance.actor_count
    JL 0x005a720e                       ; 005a7208
        ;   XREF to: 005a720e (CONDITIONAL_JUMP)  ; LAB_005a720e
    POP EDI                             ; 005a720a
    POP ESI                             ; 005a720b
    POP EBX                             ; 005a720c
    RET                                 ; 005a720d
    MOV ECX,dword ptr [0x01c3f664]      ; 005a720e | g_CEmitterClassInfo.name_hash
        ;   Label: LAB_005a720e
    PUSH ECX                            ; 005a7214
    MOV EDI,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 005a7215 | g_CDemonSetInstance.actors[0]
    PUSH EDI                            ; 005a721c
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005a721d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005a7222
    TEST EAX,EAX                        ; 005a7225
    JZ 0x005a723b                       ; 005a7227
        ;   XREF to: 005a723b (CONDITIONAL_JUMP)  ; LAB_005a723b
    CMP dword ptr [EAX + 0x158],0x2     ; 005a7229
    JNZ 0x005a723b                      ; 005a7230
        ;   XREF to: 005a723b (CONDITIONAL_JUMP)  ; LAB_005a723b
    PUSH EAX                            ; 005a7232
    CALL core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_0049f0e0 ; 005a7233
        ;   XREF to: 0049f0e0 (UNCONDITIONAL_CALL)  ; void core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_0049f0e0(CEmitter * this_ptr)
    ADD ESP,0x4                         ; 005a7238
    INC ESI                             ; 005a723b
        ;   Label: LAB_005a723b
    ADD EBX,0x4                         ; 005a723c
    JMP 0x005a71fd                      ; 005a723f
        ;   XREF to: 005a71fd (UNCONDITIONAL_JUMP)  ; LAB_005a71fd

