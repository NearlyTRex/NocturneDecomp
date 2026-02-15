; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e7320(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e6692
;
; Referenced Globals:
;   TerminatedCString s_voicusummon_wav_00656caf
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 g_CTVBatClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_tvbat.cpp_CTVBat_FUN_005e4d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e7320
        ;   Label: core_vampboss.cpp_CVampireBoss_FUN_005e7320
    PUSH ESI                            ; 005e7321
    PUSH EDI                            ; 005e7322
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e7323
    PUSH 0x656caf                       ; 005e7327 | = "voicusummon.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e732c
    PUSH EBX                            ; 005e7332
    XOR ESI,ESI                         ; 005e7333
    CALL dword ptr [EAX + 0x24]         ; 005e7335
    ADD ESP,0x8                         ; 005e7338
    XOR EBX,EBX                         ; 005e733b
    MOV EAX,[0x006810c8]                ; 005e733d | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005e733d
    CMP EBX,dword ptr [EAX + 0x14d154]  ; 005e7342 | g_CDemonSetInstance.actor_count
    JL 0x005e734e                       ; 005e7348
        ;   XREF to: 005e734e (CONDITIONAL_JUMP)  ; LAB_005e734e
    POP EDI                             ; 005e734a
    POP ESI                             ; 005e734b
    POP EBX                             ; 005e734c
    RET                                 ; 005e734d
    MOV ECX,dword ptr [0x03f87518]      ; 005e734e | g_CTVBatClassInfo.name_hash
        ;   Label: LAB_005e734e
    PUSH ECX                            ; 005e7354
    MOV EDI,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 005e7355 | g_CDemonSetInstance.actors[0]
    PUSH EDI                            ; 005e735c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e735d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005e7362
    TEST EAX,EAX                        ; 005e7365
    JZ 0x005e737b                       ; 005e7367
        ;   XREF to: 005e737b (CONDITIONAL_JUMP)  ; LAB_005e737b
    CMP dword ptr [EAX + 0xc064],0x0    ; 005e7369
    JZ 0x005e737b                       ; 005e7370
        ;   XREF to: 005e737b (CONDITIONAL_JUMP)  ; LAB_005e737b
    PUSH EAX                            ; 005e7372
    CALL core_tvbat.cpp_CTVBat_FUN_005e4d70 ; 005e7373
        ;   XREF to: 005e4d70 (UNCONDITIONAL_CALL)  ; void core_tvbat.cpp_CTVBat_FUN_005e4d70(CTVBat * this_ptr)
    ADD ESP,0x4                         ; 005e7378
    INC EBX                             ; 005e737b
        ;   Label: LAB_005e737b
    ADD ESI,0x4                         ; 005e737c
    JMP 0x005e733d                      ; 005e737f
        ;   XREF to: 005e733d (UNCONDITIONAL_JUMP)  ; LAB_005e733d

