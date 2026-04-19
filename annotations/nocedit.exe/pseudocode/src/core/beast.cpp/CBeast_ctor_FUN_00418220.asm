; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00418220(CBeast *this_ptr)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_beast.cpp_factoryFunc_FUN_004181e0 at 004181fa
;
; Referenced Globals:
;   TerminatedCString s_beast_dfm_00615a6e
;   float FLOAT_0065aa58 = 100
;   float FLOAT_0065aa5c = 100
;   CEnemy_full_vtable g_CBeastVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418220
        ;   Label: core_beast.cpp_CBeast_ctor_FUN_00418220
    MOV EDX,dword ptr [ESP + 0x8]       ; 00418221
    PUSH EDX                            ; 00418225
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 00418226
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041822b
    PUSH 0x615a6e                       ; 0041822e | = "beast.dfm"
    MOV EBX,EAX                         ; 00418233
    ADD EAX,0x158                       ; 00418235
    PUSH EAX                            ; 0041823a
    MOV dword ptr [EAX + -0x4],0x65aa64 ; 0041823b | g_CBeastVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00418242
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x0065aa58]          ; 00418247 | FLOAT_0065aa58
    FLD float ptr [0x0065aa5c]          ; 0041824d | FLOAT_0065aa5c
    MOV dword ptr [EBX + 0x2ddc],0x41200000 ; 00418253
    ADD ESP,0x8                         ; 0041825d
    MOV dword ptr [EBX + 0x2de0],0x41200000 ; 00418260
    MOV EAX,EBX                         ; 0041826a
    FXCH                                ; 0041826c
    FSTP float ptr [EBX + 0x2de4]       ; 0041826e
    FSTP float ptr [EBX + 0x2de8]       ; 00418274
    POP EBX                             ; 0041827a
    RET                                 ; 0041827b

