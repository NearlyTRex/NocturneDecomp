; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lever_cpp_CLever_archive_FUN_004ff770(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005e6d62
;   TerminatedCString s_modelName_005e6d6c
;   TerminatedCString s_leverType_005e6d76
;   TerminatedCString s_onEvent_005e6d80
;   TerminatedCString s_offEvent_005e6d88
;   TerminatedCString s_sound_005e6d91
;   TerminatedCString s_param_005e6d97
;   TerminatedCString s_momentaryFlag_005e6d9d
;   TerminatedCString s_linkedLever_005e6dab
;   TerminatedCString s_endVertexIndex_005e6db7
;   TerminatedCString s_moving_005e6dc6
;   TerminatedCString s_moveToPct_005e6dcd
;   TerminatedCString s_rules_005e6dd7
;   TerminatedCString s_allowedSides_005e6ddd
;   TerminatedCString s_enableCollision_005e6dea
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveRules_FUN_0040be80
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff770
        ;   Label: core_lever.cpp_CLever_archive_FUN_004ff770
    PUSH ESI                            ; 004ff771
    PUSH EDI                            ; 004ff772
    SUB ESP,0xc8                        ; 004ff773
    MOV EBX,dword ptr [ESP + 0xd8]      ; 004ff779
    PUSH EBX                            ; 004ff780
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 004ff781
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    MOV EDX,dword ptr [0x007c3038]      ; 004ff786 | DAT_007c3038
    ADD ESP,0x4                         ; 004ff78c
    LEA EDI,[EBX + 0x158]               ; 004ff78f
    CMP EDX,0x1                         ; 004ff795
    JZ 0x004ff90d                       ; 004ff798
        ;   XREF to: 004ff90d (CONDITIONAL_JUMP)  ; LAB_004ff90d
    MOV EDI,ESP                         ; 004ff79e
    LEA ESI,[EBX + 0x1d0]               ; 004ff7a0
    PUSH EDI                            ; 004ff7a6
    MOV AL,byte ptr [ESI]               ; 004ff7a7
        ;   Label: LAB_004ff7a7
    MOV byte ptr [EDI],AL               ; 004ff7a9
    CMP AL,0x0                          ; 004ff7ab
    JZ 0x004ff7bf                       ; 004ff7ad
        ;   XREF to: 004ff7bf (CONDITIONAL_JUMP)  ; LAB_004ff7bf
    MOV AL,byte ptr [ESI + 0x1]         ; 004ff7af
    ADD ESI,0x2                         ; 004ff7b2
    MOV byte ptr [EDI + 0x1],AL         ; 004ff7b5
    ADD EDI,0x2                         ; 004ff7b8
    CMP AL,0x0                          ; 004ff7bb
    JNZ 0x004ff7a7                      ; 004ff7bd
        ;   XREF to: 004ff7a7 (CONDITIONAL_JUMP)  ; LAB_004ff7a7
    POP EDI                             ; 004ff7bf
        ;   Label: LAB_004ff7bf
    PUSH 0x5e6d6c                       ; 004ff7c0 | = "modelName"
    LEA ESI,[ESP + 0x4]                 ; 004ff7c5
    PUSH ESI                            ; 004ff7c9
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004ff7ca
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ff7cf
        ;   Label: LAB_004ff7cf
    PUSH 0x5e6d76                       ; 004ff7d2 | = "leverType"
    LEA ESI,[EBX + 0x2d8]               ; 004ff7d7
    PUSH ESI                            ; 004ff7dd
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004ff7de
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ff7e3
    PUSH 0x5e6d80                       ; 004ff7e6 | = "onEvent"
    LEA ESI,[EBX + 0x2e0]               ; 004ff7eb
    PUSH ESI                            ; 004ff7f1
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004ff7f2
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ff7f7
    PUSH 0x5e6d88                       ; 004ff7fa | = "offEvent"
    LEA ESI,[EBX + 0x344]               ; 004ff7ff
    PUSH ESI                            ; 004ff805
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004ff806
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ff80b
    PUSH 0x5e6d91                       ; 004ff80e | = "sound"
    LEA ESI,[EBX + 0x3a8]               ; 004ff813
    PUSH ESI                            ; 004ff819
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004ff81a
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ff81f
    PUSH 0x5e6d97                       ; 004ff822 | = "param"
    LEA ESI,[EBX + 0x2dc]               ; 004ff827
    PUSH ESI                            ; 004ff82d
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004ff82e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    MOV ECX,dword ptr [0x0061f2fc]      ; 004ff833 | g_CLeverClassVersion
    ADD ESP,0x8                         ; 004ff839
    CMP ECX,0x2                         ; 004ff83c
    JL 0x004ff855                       ; 004ff83f
        ;   XREF to: 004ff855 (CONDITIONAL_JUMP)  ; LAB_004ff855
    PUSH 0x5e6d9d                       ; 004ff841 | = "momentaryFlag"
    LEA ESI,[EBX + 0x40c]               ; 004ff846
    PUSH ESI                            ; 004ff84c
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004ff84d
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ff852
    CMP dword ptr [0x0061f2fc],0x3      ; 004ff855 | g_CLeverClassVersion
        ;   Label: LAB_004ff855
    JL 0x004ff872                       ; 004ff85c
        ;   XREF to: 004ff872 (CONDITIONAL_JUMP)  ; LAB_004ff872
    PUSH 0x5e6dab                       ; 004ff85e | = "linkedLever"
    LEA ESI,[EBX + 0x410]               ; 004ff863
    PUSH ESI                            ; 004ff869
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004ff86a
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 004ff86f
    CMP dword ptr [0x0061f2fc],0x4      ; 004ff872 | g_CLeverClassVersion
        ;   Label: LAB_004ff872
    JL 0x004ff88f                       ; 004ff879
        ;   XREF to: 004ff88f (CONDITIONAL_JUMP)  ; LAB_004ff88f
    PUSH 0x5e6db7                       ; 004ff87b | = "endVertexIndex"
    LEA ESI,[EBX + 0x414]               ; 004ff880
    PUSH ESI                            ; 004ff886
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004ff887
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ff88c
    CMP dword ptr [0x0061f2fc],0x5      ; 004ff88f | g_CLeverClassVersion
        ;   Label: LAB_004ff88f
    JL 0x004ff8c0                       ; 004ff896
        ;   XREF to: 004ff8c0 (CONDITIONAL_JUMP)  ; LAB_004ff8c0
    PUSH 0x5e6dc6                       ; 004ff898 | = "moving"
    LEA ESI,[EBX + 0x418]               ; 004ff89d
    PUSH ESI                            ; 004ff8a3
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004ff8a4
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ff8a9
    PUSH 0x5e6dcd                       ; 004ff8ac | = "moveToPct"
    LEA ESI,[EBX + 0x41c]               ; 004ff8b1
    PUSH ESI                            ; 004ff8b7
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004ff8b8
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004ff8bd
    CMP dword ptr [0x0061f2fc],0x6      ; 004ff8c0 | g_CLeverClassVersion
        ;   Label: LAB_004ff8c0
    JL 0x004ff8dd                       ; 004ff8c7
        ;   XREF to: 004ff8dd (CONDITIONAL_JUMP)  ; LAB_004ff8dd
    PUSH 0x5e6dd7                       ; 004ff8c9 | = "rules"
    LEA ESI,[EBX + 0x420]               ; 004ff8ce
    PUSH ESI                            ; 004ff8d4
    CALL core_actor.cpp_archiveRules_FUN_0040be80 ; 004ff8d5
        ;   XREF to: 0040be80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveRules_FUN_0040be80()
    ADD ESP,0x8                         ; 004ff8da
    CMP dword ptr [0x0061f2fc],0x7      ; 004ff8dd | g_CLeverClassVersion
        ;   Label: LAB_004ff8dd
    JL 0x004ff8fa                       ; 004ff8e4
        ;   XREF to: 004ff8fa (CONDITIONAL_JUMP)  ; LAB_004ff8fa
    PUSH 0x5e6ddd                       ; 004ff8e6 | = "allowedSides"
    LEA ESI,[EBX + 0x80c]               ; 004ff8eb
    PUSH ESI                            ; 004ff8f1
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004ff8f2
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ff8f7
    CMP dword ptr [0x0061f2fc],0x8      ; 004ff8fa | g_CLeverClassVersion
        ;   Label: LAB_004ff8fa
    JGE 0x004ff92d                      ; 004ff901
        ;   XREF to: 004ff92d (CONDITIONAL_JUMP)  ; LAB_004ff92d
    ADD ESP,0xc8                        ; 004ff903
    POP EDI                             ; 004ff909
    POP ESI                             ; 004ff90a
    POP EBX                             ; 004ff90b
    RET                                 ; 004ff90c
    PUSH 0x5e6d62                       ; 004ff90d | = "modelName"
        ;   Label: LAB_004ff90d
    LEA ESI,[ESP + 0x4]                 ; 004ff912
    PUSH ESI                            ; 004ff916
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004ff917
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ff91c
    MOV ESI,ESP                         ; 004ff91f
    PUSH ESI                            ; 004ff921
    PUSH EDI                            ; 004ff922
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004ff923
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    JMP 0x004ff7cf                      ; 004ff928
        ;   XREF to: 004ff7cf (UNCONDITIONAL_JUMP)  ; LAB_004ff7cf
    PUSH 0x5e6dea                       ; 004ff92d | = "enableCollision"
        ;   Label: LAB_004ff92d
    ADD EBX,0x810                       ; 004ff932
    PUSH EBX                            ; 004ff938
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004ff939
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ff93e
    ADD ESP,0xc8                        ; 004ff941
    POP EDI                             ; 004ff947
    POP ESI                             ; 004ff948
    POP EBX                             ; 004ff949
    RET                                 ; 004ff94a

