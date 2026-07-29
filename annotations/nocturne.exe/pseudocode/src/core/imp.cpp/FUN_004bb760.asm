; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * core_imp_cpp_FUN_004bb760(CEnemy *param_1)
;
;
; XREF[1]:
;   core_imp.cpp_FUN_004bb730 at 004bb743
;
; Referenced Globals:
;   TerminatedCString s_imp_dfm_00586282
;   float FLOAT_0059f570 = 50
;   float FLOAT_0059f574 = 100
;   CEnemy_full_vtable g_CImpVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb760
        ;   Label: core_imp.cpp_FUN_004bb760
    MOV EDX,dword ptr [ESP + 0x8]       ; 004bb761
    PUSH EDX                            ; 004bb765
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 004bb766
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00479560(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004bb76b
    PUSH 0x586282                       ; 004bb76e | = "imp.dfm"
    MOV EBX,EAX                         ; 004bb773
    ADD EAX,0x150                       ; 004bb775
    PUSH EAX                            ; 004bb77a
    MOV dword ptr [EAX + -0x4],0x59f584 ; 004bb77b | g_CImpVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004bb782
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x0059f570]          ; 004bb787 | FLOAT_0059f570
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 004bb78d
    FLD float ptr [0x0059f574]          ; 004bb797 | FLOAT_0059f574
    MOV dword ptr [EBX + 0x2dd8],0x3f000000 ; 004bb79d
    ADD ESP,0x8                         ; 004bb7a7
    MOV dword ptr [EBX + 0x261c],0x0    ; 004bb7aa
    MOV EAX,EBX                         ; 004bb7b4
    FXCH                                ; 004bb7b6
    FSTP float ptr [EBX + 0x2ddc]       ; 004bb7b8
    FSTP float ptr [EBX + 0x2de0]       ; 004bb7be
    POP EBX                             ; 004bb7c4
    RET                                 ; 004bb7c5

