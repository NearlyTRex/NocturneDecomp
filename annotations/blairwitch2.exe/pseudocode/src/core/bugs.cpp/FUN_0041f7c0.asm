; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_0041f7c0(CEnemy *param_1)
;
;
; Referenced Globals:
;   undefined4 s_count_005cc960+1
;   TerminatedCString s_modelCount_005cc967
;   undefined4 DAT_005cc972
;   TerminatedCString s_modelName_005cc973
;   TerminatedCString s_allowChase_005cc97d
;   TerminatedCString s_allowSwarm_005cc988
;   TerminatedCString s_allowChaseEvent_005cc993
;   TerminatedCString s_allowSwarmEvent_005cc9a3
;   TerminatedCString s_animateEvent_005cc9b3
;   undefined4 DAT_007bc038
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f7c0
        ;   Label: core_bugs.cpp_FUN_0041f7c0
    PUSH ESI                            ; 0041f7c1
    PUSH EDI                            ; 0041f7c2
    PUSH EBP                            ; 0041f7c3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0041f7c4
    PUSH EDI                            ; 0041f7c8
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 0041f7c9
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041f7ce
    PUSH 0x5cc961                       ; 0041f7d1 | s_count_005cc960+1
    LEA EBX,[EDI + 0x10afc]             ; 0041f7d6
    PUSH EBX                            ; 0041f7dc
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0041f7dd
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041f7e2
    PUSH 0x5cc967                       ; 0041f7e5 | = "modelCount"
    LEA EBX,[EDI + 0x16f00]             ; 0041f7ea
    PUSH EBX                            ; 0041f7f0
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0041f7f1
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x007bc038]      ; 0041f7f6 | DAT_007bc038
    ADD ESP,0x8                         ; 0041f7fc
    CMP EDX,0x1                         ; 0041f7ff
    JNZ 0x0041f830                      ; 0041f802
        ;   XREF to: 0041f830 (CONDITIONAL_JUMP)  ; LAB_0041f830
    LEA ESI,[EDI + 0x16f04]             ; 0041f804
    MOV EBX,ESI                         ; 0041f80a
    ADD ESI,0x5f0                       ; 0041f80c
    PUSH 0x5cc972                       ; 0041f812 | DAT_005cc972
        ;   Label: LAB_0041f812
    PUSH EBX                            ; 0041f817
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0041f818
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD EBX,0x17c                       ; 0041f81d
    ADD ESP,0x8                         ; 0041f823
    CMP EBX,ESI                         ; 0041f826
    JNZ 0x0041f812                      ; 0041f828
        ;   XREF to: 0041f812 (CONDITIONAL_JUMP)  ; LAB_0041f812
    LEA EAX,[EAX]                       ; 0041f82a
    MOV ECX,dword ptr [EDI + 0x16f00]   ; 0041f830
        ;   Label: LAB_0041f830
    XOR EBX,EBX                         ; 0041f836
    TEST ECX,ECX                        ; 0041f838
    JLE 0x0041f870                      ; 0041f83a
        ;   XREF to: 0041f870 (CONDITIONAL_JUMP)  ; LAB_0041f870
    LEA ESI,[EDI + 0x16f04]             ; 0041f83c
    PUSH 0x5cc973                       ; 0041f842 | = "modelName"
        ;   Label: LAB_0041f842
    PUSH ESI                            ; 0041f847
    INC EBX                             ; 0041f848
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 0041f849
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 0041f84e
    MOV EBP,dword ptr [EDI + 0x16f00]   ; 0041f851
    ADD ESI,0x17c                       ; 0041f857
    CMP EBX,EBP                         ; 0041f85d
    JL 0x0041f842                       ; 0041f85f
        ;   XREF to: 0041f842 (CONDITIONAL_JUMP)  ; LAB_0041f842
    LEA EAX,[EAX]                       ; 0041f861
    LEA EDX,[EDX]                       ; 0041f867
    LEA EAX,[EAX]                       ; 0041f86d
    PUSH 0x5cc97d                       ; 0041f870 | = "allowChase"
        ;   Label: LAB_0041f870
    LEA EBX,[EDI + 0x1e4d4]             ; 0041f875
    PUSH EBX                            ; 0041f87b
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0041f87c
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041f881
    PUSH 0x5cc988                       ; 0041f884 | = "allowSwarm"
    LEA EBX,[EDI + 0x1e4d8]             ; 0041f889
    PUSH EBX                            ; 0041f88f
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0041f890
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041f895
    PUSH 0x5cc993                       ; 0041f898 | = "allowChaseEvent"
    LEA EBX,[EDI + 0x1e4dc]             ; 0041f89d
    PUSH EBX                            ; 0041f8a3
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0041f8a4
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0041f8a9
    PUSH 0x5cc9a3                       ; 0041f8ac | = "allowSwarmEvent"
    LEA EBX,[EDI + 0x1e540]             ; 0041f8b1
    PUSH EBX                            ; 0041f8b7
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0041f8b8
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0041f8bd
    PUSH 0x5cc9b3                       ; 0041f8c0 | = "animateEvent"
    ADD EDI,0x1e5a4                     ; 0041f8c5
    PUSH EDI                            ; 0041f8cb
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0041f8cc
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0041f8d1
    POP EBP                             ; 0041f8d4
    POP EDI                             ; 0041f8d5
    POP ESI                             ; 0041f8d6
    POP EBX                             ; 0041f8d7
    RET                                 ; 0041f8d8

