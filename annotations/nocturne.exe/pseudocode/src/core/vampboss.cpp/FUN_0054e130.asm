; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_FUN_0054e130(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054d3a7
;
; Referenced Globals:
;   TerminatedCString s_voicusummon_wav_00597239
;   undefined4 DAT_005be368
;   undefined4 g_CEmitterActorType_01bcde80.name_hash
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004785a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e130
        ;   Label: core_vampboss.cpp_FUN_0054e130
    PUSH ESI                            ; 0054e131
    PUSH EDI                            ; 0054e132
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054e133
    PUSH 0x597239                       ; 0054e137 | = "voicusummon.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054e13c
    PUSH EBX                            ; 0054e142
    XOR ESI,ESI                         ; 0054e143
    CALL dword ptr [EAX + 0x24]         ; 0054e145
    ADD ESP,0x8                         ; 0054e148
    XOR EBX,EBX                         ; 0054e14b
    MOV EAX,[0x005be368]                ; 0054e14d | DAT_005be368 | DAT_01e57284
        ;   Label: LAB_0054e14d
    CMP ESI,dword ptr [EAX + 0x14cd6c]  ; 0054e152 | DAT_01fa3ff0
    JL 0x0054e15e                       ; 0054e158
        ;   XREF to: 0054e15e (CONDITIONAL_JUMP)  ; LAB_0054e15e
    POP EDI                             ; 0054e15a
    POP ESI                             ; 0054e15b
    POP EBX                             ; 0054e15c
    RET                                 ; 0054e15d
    MOV ECX,dword ptr [0x01bcdeb8]      ; 0054e15e | g_CEmitterActorType_01bcde80.name_hash
        ;   Label: LAB_0054e15e
    PUSH ECX                            ; 0054e164
    MOV EDI,dword ptr [EBX + EAX*0x1 + 0x14cd70] ; 0054e165 | DAT_01fa3ff4
    PUSH EDI                            ; 0054e16c
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054e16d
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0054e172
    TEST EAX,EAX                        ; 0054e175
    JZ 0x0054e18b                       ; 0054e177
        ;   XREF to: 0054e18b (CONDITIONAL_JUMP)  ; LAB_0054e18b
    CMP dword ptr [EAX + 0x150],0x2     ; 0054e179
    JNZ 0x0054e18b                      ; 0054e180
        ;   XREF to: 0054e18b (CONDITIONAL_JUMP)  ; LAB_0054e18b
    PUSH EAX                            ; 0054e182
    CALL core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004785a0 ; 0054e183
        ;   XREF to: 004785a0 (UNCONDITIONAL_CALL)  ; void core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004785a0(CEmitter * this_ptr)
    ADD ESP,0x4                         ; 0054e188
    INC ESI                             ; 0054e18b
        ;   Label: LAB_0054e18b
    ADD EBX,0x4                         ; 0054e18c
    JMP 0x0054e14d                      ; 0054e18f
        ;   XREF to: 0054e14d (UNCONDITIONAL_JUMP)  ; LAB_0054e14d

