; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_vampboss.cpp_VoicuSummonWavFile2_FUN_005e7410()
;
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e6687
;
; Referenced Globals:
;   TerminatedCString s_voicusummon_wav_00656ccf
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CEmitterClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_emitter.cpp_FUN_004a7e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e7410
        ;   Label: core_vampboss.cpp_VoicuSummonWavFile2_FUN_005e7410
    PUSH ESI                            ; 005e7411
    PUSH EDI                            ; 005e7412
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e7413
    PUSH 0x656ccf                       ; 005e7417 | = "voicusummon.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e741c
    PUSH EBX                            ; 005e7422
    XOR ESI,ESI                         ; 005e7423
    CALL dword ptr [EAX + 0x24]         ; 005e7425
    ADD ESP,0x8                         ; 005e7428
    XOR EBX,EBX                         ; 005e742b
    MOV EAX,[0x006810c8]                ; 005e742d | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005e742d
    CMP ESI,dword ptr [EAX + 0x14d154]  ; 005e7432 | g_CDemonSetInstance.actor_list_ptr
    JL 0x005e743e                       ; 005e7438
        ;   XREF to: 005e743e (CONDITIONAL_JUMP)  ; LAB_005e743e
    POP EDI                             ; 005e743a
    POP ESI                             ; 005e743b
    POP EBX                             ; 005e743c
    RET                                 ; 005e743d
    MOV ECX,dword ptr [0x02cf2bb4]      ; 005e743e | g_CEmitterClassInfo.name_hash
        ;   Label: LAB_005e743e
    PUSH ECX                            ; 005e7444
    MOV EDI,dword ptr [EBX + EAX*0x1 + 0x14d158] ; 005e7445 | g_CDemonSetInstance.actor_list_data[0]
    PUSH EDI                            ; 005e744c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e744d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005e7452
    TEST EAX,EAX                        ; 005e7455
    JZ 0x005e746b                       ; 005e7457
        ;   XREF to: 005e746b (CONDITIONAL_JUMP)  ; LAB_005e746b
    CMP dword ptr [EAX + 0x158],0x2     ; 005e7459
    JNZ 0x005e746b                      ; 005e7460
        ;   XREF to: 005e746b (CONDITIONAL_JUMP)  ; LAB_005e746b
    PUSH EAX                            ; 005e7462
    CALL core_emitter.cpp_FUN_004a7e80  ; 005e7463
        ;   XREF to: 004a7e80 (UNCONDITIONAL_CALL)  ; undefined core_emitter.cpp_FUN_004a7e80()
    ADD ESP,0x4                         ; 005e7468
    INC ESI                             ; 005e746b
        ;   Label: LAB_005e746b
    ADD EBX,0x4                         ; 005e746c
    JMP 0x005e742d                      ; 005e746f
        ;   XREF to: 005e742d (UNCONDITIONAL_JUMP)  ; LAB_005e742d

