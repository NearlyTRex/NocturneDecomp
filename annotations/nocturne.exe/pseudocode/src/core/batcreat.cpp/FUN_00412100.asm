; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * core_batcreat_cpp_FUN_00412100(CEnemy *param_1)
;
;
; XREF[1]:
;   core_batcreat.cpp_factoryFunc_FUN_004120d0 at 004120e3
;
; Referenced Globals:
;   TerminatedCString s_batcreat_dfm_0057883c
;   float FLOAT_00599fb0 = 50
;   float FLOAT_00599fb4 = 100
;   CEnemy_full_vtable g_CBatCreatureVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412100
        ;   Label: core_batcreat.cpp_FUN_00412100
    MOV EDX,dword ptr [ESP + 0x8]       ; 00412101
    PUSH EDX                            ; 00412105
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 00412106
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00479560(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041210b
    PUSH 0x57883c                       ; 0041210e | = "batcreat.dfm"
    MOV EBX,EAX                         ; 00412113
    ADD EAX,0x150                       ; 00412115
    PUSH EAX                            ; 0041211a
    MOV dword ptr [EAX + -0x4],0x599fc4 ; 0041211b | g_CBatCreatureVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00412122
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x00599fb0]          ; 00412127 | FLOAT_00599fb0
    FLD float ptr [0x00599fb4]          ; 0041212d | FLOAT_00599fb4
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 00412133
    ADD ESP,0x8                         ; 0041213d
    MOV dword ptr [EBX + 0x2dd8],0x3fc00000 ; 00412140
    MOV EAX,EBX                         ; 0041214a
    FXCH                                ; 0041214c
    FSTP float ptr [EBX + 0x2ddc]       ; 0041214e
    FSTP float ptr [EBX + 0x2de0]       ; 00412154
    POP EBX                             ; 0041215a
    RET                                 ; 0041215b

