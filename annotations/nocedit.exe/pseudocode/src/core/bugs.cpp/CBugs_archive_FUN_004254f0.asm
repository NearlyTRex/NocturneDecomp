; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bugs_cpp_CBugs_archive_FUN_004254f0(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_count_00616d33
;   TerminatedCString s_modelCount_00616d39
;   undefined4 DAT_00616d44
;   TerminatedCString s_modelName_00616d45
;   TerminatedCString s_allowChase_00616d4f
;   TerminatedCString s_allowSwarm_00616d5a
;   TerminatedCString s_allowChaseEvent_00616d65
;   TerminatedCString s_allowSwarmEvent_00616d75
;   TerminatedCString s_animateEvent_00616d85
;   int g_ActorReadingMode
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_enemy.cpp_CEnemy_archive_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004254f0
        ;   Label: core_bugs.cpp_CBugs_archive_FUN_004254f0
    PUSH ESI                            ; 004254f1
    PUSH EDI                            ; 004254f2
    PUSH EBP                            ; 004254f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004254f4
    PUSH EDI                            ; 004254f8
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a9660 ; 004254f9
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004254fe
    PUSH 0x616d33                       ; 00425501 | = "count"
    LEA EBX,[EDI + 0xbec0]              ; 00425506
    PUSH EBX                            ; 0042550c
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0042550d
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00425512
    PUSH 0x616d39                       ; 00425515 | = "modelCount"
    LEA EBX,[EDI + 0x122c4]             ; 0042551a
    PUSH EBX                            ; 00425520
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00425521
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x00822038]      ; 00425526 | g_ActorReadingMode
    ADD ESP,0x8                         ; 0042552c
    CMP EDX,0x1                         ; 0042552f
    JNZ 0x00425560                      ; 00425532
        ;   XREF to: 00425560 (CONDITIONAL_JUMP)  ; LAB_00425560
    LEA ESI,[EDI + 0x122c8]             ; 00425534
    MOV EBX,ESI                         ; 0042553a
    ADD ESI,0x5f0                       ; 0042553c
    PUSH 0x616d44                       ; 00425542 | DAT_00616d44
        ;   Label: LAB_00425542
    PUSH EBX                            ; 00425547
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00425548
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD EBX,0x17c                       ; 0042554d
    ADD ESP,0x8                         ; 00425553
    CMP EBX,ESI                         ; 00425556
    JNZ 0x00425542                      ; 00425558
        ;   XREF to: 00425542 (CONDITIONAL_JUMP)  ; LAB_00425542
    LEA EAX,[EAX]                       ; 0042555a
    MOV ECX,dword ptr [EDI + 0x122c4]   ; 00425560
        ;   Label: LAB_00425560
    XOR EBX,EBX                         ; 00425566
    TEST ECX,ECX                        ; 00425568
    JLE 0x004255a0                      ; 0042556a
        ;   XREF to: 004255a0 (CONDITIONAL_JUMP)  ; LAB_004255a0
    LEA ESI,[EDI + 0x122c8]             ; 0042556c
    PUSH 0x616d45                       ; 00425572 | = "modelName"
        ;   Label: LAB_00425572
    PUSH ESI                            ; 00425577
    INC EBX                             ; 00425578
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0 ; 00425579
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042557e
    MOV EBP,dword ptr [EDI + 0x122c4]   ; 00425581
    ADD ESI,0x17c                       ; 00425587
    CMP EBX,EBP                         ; 0042558d
    JL 0x00425572                       ; 0042558f
        ;   XREF to: 00425572 (CONDITIONAL_JUMP)  ; LAB_00425572
    LEA EAX,[EAX]                       ; 00425591
    LEA EDX,[EDX]                       ; 00425597
    LEA EAX,[EAX]                       ; 0042559d
    PUSH 0x616d4f                       ; 004255a0 | = "allowChase"
        ;   Label: LAB_004255a0
    LEA EBX,[EDI + 0x19898]             ; 004255a5
    PUSH EBX                            ; 004255ab
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004255ac
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004255b1
    PUSH 0x616d5a                       ; 004255b4 | = "allowSwarm"
    LEA EBX,[EDI + 0x1989c]             ; 004255b9
    PUSH EBX                            ; 004255bf
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004255c0
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004255c5
    PUSH 0x616d65                       ; 004255c8 | = "allowChaseEvent"
    LEA EBX,[EDI + 0x198a0]             ; 004255cd
    PUSH EBX                            ; 004255d3
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 004255d4
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004255d9
    PUSH 0x616d75                       ; 004255dc | = "allowSwarmEvent"
    LEA EBX,[EDI + 0x19904]             ; 004255e1
    PUSH EBX                            ; 004255e7
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 004255e8
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004255ed
    PUSH 0x616d85                       ; 004255f0 | = "animateEvent"
    ADD EDI,0x19968                     ; 004255f5
    PUSH EDI                            ; 004255fb
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 004255fc
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00425601
    POP EBP                             ; 00425604
    POP EDI                             ; 00425605
    POP ESI                             ; 00425606
    POP EBX                             ; 00425607
    RET                                 ; 00425608

