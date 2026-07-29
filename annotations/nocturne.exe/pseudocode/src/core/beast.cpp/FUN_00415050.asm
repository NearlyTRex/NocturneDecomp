; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * core_beast_cpp_FUN_00415050(CEnemy *param_1)
;
;
; XREF[1]:
;   core_beast.cpp_FUN_00415020 at 00415033
;
; Referenced Globals:
;   TerminatedCString s_beast_dfm_00578d9f
;   float FLOAT_0059a408 = 100
;   float FLOAT_0059a40c = 100
;   CEnemy_full_vtable g_CBeastVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415050
        ;   Label: core_beast.cpp_FUN_00415050
    MOV EDX,dword ptr [ESP + 0x8]       ; 00415051
    PUSH EDX                            ; 00415055
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 00415056
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00479560(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041505b
    PUSH 0x578d9f                       ; 0041505e | = "beast.dfm"
    MOV EBX,EAX                         ; 00415063
    ADD EAX,0x150                       ; 00415065
    PUSH EAX                            ; 0041506a
    MOV dword ptr [EAX + -0x4],0x59a414 ; 0041506b | g_CBeastVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00415072
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x0059a408]          ; 00415077 | FLOAT_0059a408
    FLD float ptr [0x0059a40c]          ; 0041507d | FLOAT_0059a40c
    MOV dword ptr [EBX + 0x2dd4],0x41200000 ; 00415083
    ADD ESP,0x8                         ; 0041508d
    MOV dword ptr [EBX + 0x2dd8],0x41200000 ; 00415090
    MOV EAX,EBX                         ; 0041509a
    FXCH                                ; 0041509c
    FSTP float ptr [EBX + 0x2ddc]       ; 0041509e
    FSTP float ptr [EBX + 0x2de0]       ; 004150a4
    POP EBX                             ; 004150aa
    RET                                 ; 004150ab

