; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_CFlies_archive_FUN_004cbe60(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_count_0062a3ef
;   TerminatedCString s_followActor_0062a3f5
;   TerminatedCString s_gatherCount_0062a401
;   TerminatedCString s_gatherTime_0062a40d
;   TerminatedCString s_boxSize_0062a418
;   int g_CFliesClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveVector_FUN_0040b340
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbe60
        ;   Label: core_flies.cpp_CFlies_archive_FUN_004cbe60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cbe61
    PUSH EBX                            ; 004cbe65
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 004cbe66
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cbe6b
    PUSH 0x62a3ef                       ; 004cbe6e | = "count"
    LEA EAX,[EBX + 0x164]               ; 004cbe73
    PUSH EAX                            ; 004cbe79
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004cbe7a
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x0067b510]      ; 004cbe7f | g_CFliesClassVersion
    ADD ESP,0x8                         ; 004cbe85
    CMP EDX,0x2                         ; 004cbe88
    JGE 0x004cbe98                      ; 004cbe8b
        ;   XREF to: 004cbe98 (CONDITIONAL_JUMP)  ; LAB_004cbe98
    CMP dword ptr [0x0067b510],0x3      ; 004cbe8d | g_CFliesClassVersion
    JGE 0x004cbedf                      ; 004cbe94
        ;   XREF to: 004cbedf (CONDITIONAL_JUMP)  ; LAB_004cbedf
    POP EBX                             ; 004cbe96
    RET                                 ; 004cbe97
    PUSH 0x62a3f5                       ; 004cbe98 | = "followActor"
        ;   Label: LAB_004cbe98
    LEA EAX,[EBX + 0x2a08]              ; 004cbe9d
    PUSH EAX                            ; 004cbea3
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004cbea4
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cbea9
    PUSH 0x62a401                       ; 004cbeac | = "gatherCount"
    LEA EAX,[EBX + 0x2a0c]              ; 004cbeb1
    PUSH EAX                            ; 004cbeb7
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004cbeb8
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cbebd
    PUSH 0x62a40d                       ; 004cbec0 | = "gatherTime"
    LEA EAX,[EBX + 0x2a14]              ; 004cbec5
    PUSH EAX                            ; 004cbecb
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004cbecc
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cbed1
    CMP dword ptr [0x0067b510],0x3      ; 004cbed4 | g_CFliesClassVersion
    JGE 0x004cbedf                      ; 004cbedb
        ;   XREF to: 004cbedf (CONDITIONAL_JUMP)  ; LAB_004cbedf
    POP EBX                             ; 004cbedd
    RET                                 ; 004cbede
    PUSH 0x62a418                       ; 004cbedf | = "boxSize"
        ;   Label: LAB_004cbedf
    ADD EBX,0x158                       ; 004cbee4
    PUSH EBX                            ; 004cbeea
    CALL core_actor.cpp_archiveVector_FUN_0040b340 ; 004cbeeb
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cbef0
    POP EBX                             ; 004cbef3
    RET                                 ; 004cbef4

