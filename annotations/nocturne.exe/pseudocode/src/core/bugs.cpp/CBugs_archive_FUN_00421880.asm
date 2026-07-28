; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_CBugs_archive_FUN_00421880(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_count_00579c5d
;   TerminatedCString s_modelCount_00579c63
;   char CHAR_00h_00579c6e = \x00
;   TerminatedCString s_modelName_00579c6f
;   TerminatedCString s_allowChase_00579c79
;   TerminatedCString s_allowSwarm_00579c84
;   TerminatedCString s_allowChaseEvent_00579c8f
;   TerminatedCString s_allowSwarmEvent_00579c9f
;   TerminatedCString s_animateEvent_00579caf
;   undefined4 DAT_00763e88
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421880
        ;   Label: core_bugs.cpp_CBugs_archive_FUN_00421880
    PUSH ESI                            ; 00421881
    PUSH EDI                            ; 00421882
    PUSH EBP                            ; 00421883
    MOV EDI,dword ptr [ESP + 0x14]      ; 00421884
    PUSH EDI                            ; 00421888
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 00421889
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0042188e
    PUSH 0x579c5d                       ; 00421891 | = "count"
    LEA EBX,[EDI + 0xbd28]              ; 00421896
    PUSH EBX                            ; 0042189c
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0042189d
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004218a2
    PUSH 0x579c63                       ; 004218a5 | = "modelCount"
    LEA EBX,[EDI + 0x1212c]             ; 004218aa
    PUSH EBX                            ; 004218b0
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004218b1
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x00763e88]      ; 004218b6 | DAT_00763e88
    ADD ESP,0x8                         ; 004218bc
    CMP EDX,0x1                         ; 004218bf
    JNZ 0x004218f0                      ; 004218c2
        ;   XREF to: 004218f0 (CONDITIONAL_JUMP)  ; LAB_004218f0
    LEA ESI,[EDI + 0x12130]             ; 004218c4
    MOV EBX,ESI                         ; 004218ca
    ADD ESI,0x5f0                       ; 004218cc
    PUSH 0x579c6e                       ; 004218d2 | CHAR_00h_00579c6e
        ;   Label: LAB_004218d2
    PUSH EBX                            ; 004218d7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004218d8
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD EBX,0x17c                       ; 004218dd
    ADD ESP,0x8                         ; 004218e3
    CMP EBX,ESI                         ; 004218e6
    JNZ 0x004218d2                      ; 004218e8
        ;   XREF to: 004218d2 (CONDITIONAL_JUMP)  ; LAB_004218d2
    LEA EAX,[EAX]                       ; 004218ea
    MOV ECX,dword ptr [EDI + 0x1212c]   ; 004218f0
        ;   Label: LAB_004218f0
    XOR EBX,EBX                         ; 004218f6
    TEST ECX,ECX                        ; 004218f8
    JLE 0x00421930                      ; 004218fa
        ;   XREF to: 00421930 (CONDITIONAL_JUMP)  ; LAB_00421930
    LEA ESI,[EDI + 0x12130]             ; 004218fc
    PUSH 0x579c6f                       ; 00421902 | = "modelName"
        ;   Label: LAB_00421902
    PUSH ESI                            ; 00421907
    INC EBX                             ; 00421908
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 00421909
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042190e
    MOV EBP,dword ptr [EDI + 0x1212c]   ; 00421911
    ADD ESI,0x17c                       ; 00421917
    CMP EBX,EBP                         ; 0042191d
    JL 0x00421902                       ; 0042191f
        ;   XREF to: 00421902 (CONDITIONAL_JUMP)  ; LAB_00421902
    LEA EAX,[EAX]                       ; 00421921
    LEA EDX,[EDX]                       ; 00421927
    LEA EAX,[EAX]                       ; 0042192d
    PUSH 0x579c79                       ; 00421930 | = "allowChase"
        ;   Label: LAB_00421930
    LEA EBX,[EDI + 0x19700]             ; 00421935
    PUSH EBX                            ; 0042193b
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0042193c
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00421941
    PUSH 0x579c84                       ; 00421944 | = "allowSwarm"
    LEA EBX,[EDI + 0x19704]             ; 00421949
    PUSH EBX                            ; 0042194f
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00421950
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00421955
    PUSH 0x579c8f                       ; 00421958 | = "allowChaseEvent"
    LEA EBX,[EDI + 0x19708]             ; 0042195d
    PUSH EBX                            ; 00421963
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00421964
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00421969
    PUSH 0x579c9f                       ; 0042196c | = "allowSwarmEvent"
    LEA EBX,[EDI + 0x1976c]             ; 00421971
    PUSH EBX                            ; 00421977
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00421978
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0042197d
    PUSH 0x579caf                       ; 00421980 | = "animateEvent"
    ADD EDI,0x197d0                     ; 00421985
    PUSH EDI                            ; 0042198b
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0042198c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00421991
    POP EBP                             ; 00421994
    POP EDI                             ; 00421995
    POP ESI                             ; 00421996
    POP EBX                             ; 00421997
    RET                                 ; 00421998

