; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ghoul_cpp_CGhoul_randomize_FUN_004e8e40(CGhoul *this_ptr)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* switchdataD_004e8e20 = 004e8e66
;   TerminatedCString s_guul_dfm_0062df01
;   TerminatedCString s_chubgul2_dfm_0062df0a
;   TerminatedCString s_guullmap_dfm_0062df17
;   TerminatedCString s_longguul_dfm_0062df24
;   TerminatedCString s_chubguul_dfm_0062df31
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_enemy.cpp_CEnemy_randomize_FUN_004aa250
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8e40
        ;   Label: core_ghoul.cpp_CGhoul_randomize_FUN_004e8e40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e8e41
    PUSH EBX                            ; 004e8e45
    CALL core_enemy.cpp_CEnemy_randomize_FUN_004aa250 ; 004e8e46
        ;   XREF to: 004aa250 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_randomize_FUN_004aa250(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004e8e4b
    PUSH 0x4                            ; 004e8e4e
    PUSH 0x0                            ; 004e8e50
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004e8e52
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004e8e57
    CMP EAX,0x4                         ; 004e8e5a
    JA 0x004e8e7a                       ; 004e8e5d
        ;   XREF to: 004e8e7a (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4e8e20]  ; 004e8e5f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x62df01                       ; 004e8e66 | = "guul.dfm"
        ;   Label: caseD_0
    ADD EBX,0x158                       ; 004e8e6b
    PUSH EBX                            ; 004e8e71
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004e8e72
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004e8e77
    POP EBX                             ; 004e8e7a
        ;   Label: default
    RET                                 ; 004e8e7b
    PUSH 0x62df0a                       ; 004e8e7c | = "chubgul2.dfm"
        ;   Label: caseD_1
    ADD EBX,0x158                       ; 004e8e81
    PUSH EBX                            ; 004e8e87
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004e8e88
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004e8e8d
    POP EBX                             ; 004e8e90
    RET                                 ; 004e8e91
    PUSH 0x62df17                       ; 004e8e92 | = "guullmap.dfm"
        ;   Label: caseD_2
    ADD EBX,0x158                       ; 004e8e97
    PUSH EBX                            ; 004e8e9d
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004e8e9e
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004e8ea3
    POP EBX                             ; 004e8ea6
    RET                                 ; 004e8ea7
    PUSH 0x62df24                       ; 004e8ea8 | = "longguul.dfm"
        ;   Label: caseD_3
    ADD EBX,0x158                       ; 004e8ead
    PUSH EBX                            ; 004e8eb3
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004e8eb4
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004e8eb9
    POP EBX                             ; 004e8ebc
    RET                                 ; 004e8ebd
    PUSH 0x62df31                       ; 004e8ebe | = "chubguul.dfm"
        ;   Label: caseD_4
    ADD EBX,0x158                       ; 004e8ec3
    PUSH EBX                            ; 004e8ec9
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004e8eca
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004e8ecf
    POP EBX                             ; 004e8ed2
    RET                                 ; 004e8ed3

