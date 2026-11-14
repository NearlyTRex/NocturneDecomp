; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_CTVBat_archive_FUN_005804c0(CTVBat *this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_homePos_005ed84b+1
;   TerminatedCString s_modelName_005ed854
;   TerminatedCString s_speed_005ed85e
;   TerminatedCString s_maxDistance_005ed864
;   TerminatedCString s_maxHeight_005ed870
;   TerminatedCString s_rotSpeed_005ed87a
;   TerminatedCString s_moveSpeed_005ed883
;   TerminatedCString s_followOrders_005ed88d
;   TerminatedCString s_state_005ed89a
;   TerminatedCString s_periodicSoundTimerMin_005ed8a0
;   TerminatedCString s_periodicSoundTimerMax_005ed8b6
;   int g_CTVBatClassVersion = 0x5
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005804c0
        ;   Label: core_tvbat.cpp_CTVBat_archive_FUN_005804c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005804c1
    CMP dword ptr [0x0061e4a8],0x3      ; 005804c5 | g_CTVBatClassVersion
    JL 0x005805ae                       ; 005804cc
        ;   XREF to: 005805ae (CONDITIONAL_JUMP)  ; LAB_005805ae
    PUSH EBX                            ; 005804d2
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 005804d3
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005804d8
        ;   Label: LAB_005804d8
    PUSH 0x5ed84c                       ; 005804db | s_homePos_005ed84b+1
    LEA EAX,[EBX + 0x10c80]             ; 005804e0
    PUSH EAX                            ; 005804e6
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 005804e7
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b4b0(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 005804ec
    PUSH 0x5ed854                       ; 005804ef | = "modelName"
    LEA EAX,[EBX + 0x10afc]             ; 005804f4
    PUSH EAX                            ; 005804fa
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 005804fb
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60(CKeyFramedModelInstance * model_ptr, char * property_name)
    MOV ECX,dword ptr [0x0061e4a8]      ; 00580500 | g_CTVBatClassVersion
    ADD ESP,0x8                         ; 00580506
    CMP ECX,0x2                         ; 00580509
    JL 0x00580586                       ; 0058050c
        ;   XREF to: 00580586 (CONDITIONAL_JUMP)  ; LAB_00580586
    PUSH 0x5ed85e                       ; 0058050e | = "speed"
    LEA EAX,[EBX + 0x10c78]             ; 00580513
    PUSH EAX                            ; 00580519
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0058051a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058051f
    PUSH 0x5ed864                       ; 00580522 | = "maxDistance"
    LEA EAX,[EBX + 0x10c8c]             ; 00580527
    PUSH EAX                            ; 0058052d
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0058052e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00580533
    PUSH 0x5ed870                       ; 00580536 | = "maxHeight"
    LEA EAX,[EBX + 0x10c90]             ; 0058053b
    PUSH EAX                            ; 00580541
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00580542
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00580547
    PUSH 0x5ed87a                       ; 0058054a | = "rotSpeed"
    LEA EAX,[EBX + 0x10c94]             ; 0058054f
    PUSH EAX                            ; 00580555
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00580556
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058055b
    PUSH 0x5ed883                       ; 0058055e | = "moveSpeed"
    LEA EAX,[EBX + 0x10c98]             ; 00580563
    PUSH EAX                            ; 00580569
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0058056a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058056f
    PUSH 0x5ed88d                       ; 00580572 | = "followOrders"
    LEA EAX,[EBX + 0x10ca0]             ; 00580577
    PUSH EAX                            ; 0058057d
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0058057e
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00580583
    CMP dword ptr [0x0061e4a8],0x4      ; 00580586 | g_CTVBatClassVersion
        ;   Label: LAB_00580586
    JL 0x005805b9                       ; 0058058d
        ;   XREF to: 005805b9 (CONDITIONAL_JUMP)  ; LAB_005805b9
    PUSH 0x5ed89a                       ; 0058058f | = "state"
    LEA EAX,[EBX + 0x10cb4]             ; 00580594
    PUSH EAX                            ; 0058059a
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0058059b
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005805a0
    CMP dword ptr [0x0061e4a8],0x5      ; 005805a3 | g_CTVBatClassVersion
    JGE 0x005805ce                      ; 005805aa
        ;   XREF to: 005805ce (CONDITIONAL_JUMP)  ; LAB_005805ce
    POP EBX                             ; 005805ac
    RET                                 ; 005805ad
    PUSH EBX                            ; 005805ae
        ;   Label: LAB_005805ae
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 005805af
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    JMP 0x005804d8                      ; 005805b4
        ;   XREF to: 005804d8 (UNCONDITIONAL_JUMP)  ; LAB_005804d8
    MOV dword ptr [EBX + 0x10cb4],0x0   ; 005805b9
        ;   Label: LAB_005805b9
    CMP dword ptr [0x0061e4a8],0x5      ; 005805c3 | g_CTVBatClassVersion
    JGE 0x005805ce                      ; 005805ca
        ;   XREF to: 005805ce (CONDITIONAL_JUMP)  ; LAB_005805ce
    POP EBX                             ; 005805cc
    RET                                 ; 005805cd
    PUSH 0x0                            ; 005805ce
        ;   Label: LAB_005805ce
    LEA EAX,[EBX + 0x10cb8]             ; 005805d0
    PUSH EAX                            ; 005805d6
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 005805d7
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005805dc
    PUSH 0x5ed8a0                       ; 005805df | = "periodicSoundTimerMin"
    LEA EAX,[EBX + 0x10d1c]             ; 005805e4
    PUSH EAX                            ; 005805ea
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 005805eb
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005805f0
    PUSH 0x5ed8b6                       ; 005805f3 | = "periodicSoundTimerMax"
    ADD EBX,0x10d20                     ; 005805f8
    PUSH EBX                            ; 005805fe
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 005805ff
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00580604
    POP EBX                             ; 00580607
    RET                                 ; 00580608

