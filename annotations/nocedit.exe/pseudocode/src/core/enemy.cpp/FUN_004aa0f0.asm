; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_enemy.cpp_FUN_004aa0f0()
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   undefined4 g_CDemonSetInstance.field19_0x14f0a0[7996]
;   undefined4 DAT_03265258
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa0f0
        ;   Label: core_enemy.cpp_FUN_004aa0f0
    PUSH ESI                            ; 004aa0f1
    PUSH EDI                            ; 004aa0f2
    PUSH EBP                            ; 004aa0f3
    SUB ESP,0x4                         ; 004aa0f4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004aa0f7
    PUSH EDX                            ; 004aa0fb
    XOR EDI,EDI                         ; 004aa0fc
    XOR ESI,ESI                         ; 004aa0fe
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004aa100
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004aa105
    XOR EBP,EBP                         ; 004aa108
    MOV dword ptr [ESP],EAX             ; 004aa10a
    MOV EAX,[0x006810c8]                ; 004aa10d | g_CDemonSetPtr
        ;   Label: LAB_004aa10d
    CMP EDI,dword ptr [EAX + 0x150fdc]  ; 004aa112 | g_CDemonSetInstance.field19_0x14f0a0[7996]
    JL 0x004aa124                       ; 004aa118
        ;   XREF to: 004aa124 (CONDITIONAL_JUMP)  ; LAB_004aa124
    MOV EAX,EBP                         ; 004aa11a
    ADD ESP,0x4                         ; 004aa11c
    POP EBP                             ; 004aa11f
    POP EDI                             ; 004aa120
    POP ESI                             ; 004aa121
    POP EBX                             ; 004aa122
    RET                                 ; 004aa123
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x150fe0] ; 004aa124 | DAT_03265258
        ;   Label: LAB_004aa124
    MOV EAX,dword ptr [ESP]             ; 004aa12b
    PUSH EAX                            ; 004aa12e
    PUSH EBX                            ; 004aa12f
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004aa130
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004aa135
    TEST EAX,EAX                        ; 004aa138
    JZ 0x004aa166                       ; 004aa13a
        ;   XREF to: 004aa166 (CONDITIONAL_JUMP)  ; LAB_004aa166
    PUSH EBX                            ; 004aa13c
    MOV EAX,dword ptr [EBX + 0x154]     ; 004aa13d
    CALL dword ptr [EAX + 0x120]        ; 004aa143
    ADD ESP,0x4                         ; 004aa149
    TEST EAX,EAX                        ; 004aa14c
    JNZ 0x004aa166                      ; 004aa14e
        ;   XREF to: 004aa166 (CONDITIONAL_JUMP)  ; LAB_004aa166
    MOV EDX,dword ptr [0x02db87d0]      ; 004aa150 | g_LocalHeroIndex
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004aa156
    CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0] ; 004aa15c | g_HeroActors
    JNZ 0x004aa166                      ; 004aa163
        ;   XREF to: 004aa166 (CONDITIONAL_JUMP)  ; LAB_004aa166
    INC EBP                             ; 004aa165
    INC EDI                             ; 004aa166
        ;   Label: LAB_004aa166
    ADD ESI,0x4                         ; 004aa167
    JMP 0x004aa10d                      ; 004aa16a
        ;   XREF to: 004aa10d (UNCONDITIONAL_JUMP)  ; LAB_004aa10d

