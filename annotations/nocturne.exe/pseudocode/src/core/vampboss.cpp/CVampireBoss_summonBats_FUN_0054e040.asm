; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_summonBats_FUN_0054e040(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054d3b2
;
; Referenced Globals:
;   TerminatedCString s_voicusummon_wav_00597219
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonSet_01e57284.actor_count
;   undefined4 g_CDemonSet_01e57284.actors[0]
;   undefined4 g_CTVBatActorType_02dd110c.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_tvbat.cpp_CTVBat_FUN_0054bfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e040
        ;   Label: core_vampboss.cpp_CVampireBoss_summonBats_FUN_0054e040
    PUSH ESI                            ; 0054e041
    PUSH EDI                            ; 0054e042
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054e043
    PUSH 0x597219                       ; 0054e047 | = "voicusummon.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054e04c
    PUSH EBX                            ; 0054e052
    XOR ESI,ESI                         ; 0054e053
    CALL dword ptr [EAX + 0x24]         ; 0054e055
    ADD ESP,0x8                         ; 0054e058
    XOR EBX,EBX                         ; 0054e05b
    MOV EAX,[0x005be368]                ; 0054e05d | g_CDemonSet_PTR_005be368 | g_CDemonSet_01e57284
        ;   Label: LAB_0054e05d
    CMP EBX,dword ptr [EAX + 0x14cd6c]  ; 0054e062 | g_CDemonSet_01e57284.actor_count
    JL 0x0054e06e                       ; 0054e068
        ;   XREF to: 0054e06e (CONDITIONAL_JUMP)  ; LAB_0054e06e
    POP EDI                             ; 0054e06a
    POP ESI                             ; 0054e06b
    POP EBX                             ; 0054e06c
    RET                                 ; 0054e06d
    MOV ECX,dword ptr [0x02dd1144]      ; 0054e06e | g_CTVBatActorType_02dd110c.name_hash
        ;   Label: LAB_0054e06e
    PUSH ECX                            ; 0054e074
    MOV EDI,dword ptr [ESI + EAX*0x1 + 0x14cd70] ; 0054e075 | g_CDemonSet_01e57284.actors[0]
    PUSH EDI                            ; 0054e07c
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054e07d
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0054e082
    TEST EAX,EAX                        ; 0054e085
    JZ 0x0054e09b                       ; 0054e087
        ;   XREF to: 0054e09b (CONDITIONAL_JUMP)  ; LAB_0054e09b
    CMP dword ptr [EAX + 0xbecc],0x0    ; 0054e089
    JZ 0x0054e09b                       ; 0054e090
        ;   XREF to: 0054e09b (CONDITIONAL_JUMP)  ; LAB_0054e09b
    PUSH EAX                            ; 0054e092
    CALL core_tvbat.cpp_CTVBat_FUN_0054bfc0 ; 0054e093
        ;   XREF to: 0054bfc0 (UNCONDITIONAL_CALL)  ; void core_tvbat.cpp_CTVBat_FUN_0054bfc0(CTVBat * this_ptr)
    ADD ESP,0x4                         ; 0054e098
    INC EBX                             ; 0054e09b
        ;   Label: LAB_0054e09b
    ADD ESI,0x4                         ; 0054e09c
    JMP 0x0054e05d                      ; 0054e09f
        ;   XREF to: 0054e05d (UNCONDITIONAL_JUMP)  ; LAB_0054e05d

