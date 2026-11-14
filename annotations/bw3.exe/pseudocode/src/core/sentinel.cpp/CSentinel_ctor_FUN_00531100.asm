; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_00531100(CSentinel *this_ptr)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_sentinel.cpp_factoryFuncSentinel_FUN_005310d0 at 005310e3
;
; Referenced Globals:
;   undefined4 DAT_005e3a0c
;   undefined4 DAT_005e3a10
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531100
        ;   Label: core_sentinel.cpp_CSentinel_ctor_FUN_00531100
    MOV EDX,dword ptr [ESP + 0x8]       ; 00531101
    PUSH EDX                            ; 00531105
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 00531106
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0053110b
    PUSH 0x5cff54                       ; 0053110e
    MOV EBX,EAX                         ; 00531113
    ADD EAX,0x158                       ; 00531115
    PUSH EAX                            ; 0053111a
    MOV dword ptr [EAX + -0x4],0x5e3a24 ; 0053111b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00531122
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005e3a0c]          ; 00531127 | DAT_005e3a0c
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 0053112d
    FLD float ptr [0x005e3a10]          ; 00531137 | DAT_005e3a10
    MOV dword ptr [EBX + 0x3270],0x40000000 ; 0053113d
    ADD ESP,0x8                         ; 00531147
    MOV dword ptr [EBX + 0xd058],0x0    ; 0053114a
    MOV EAX,EBX                         ; 00531154
    FXCH                                ; 00531156
    FSTP float ptr [EBX + 0x3274]       ; 00531158
    FSTP float ptr [EBX + 0x3278]       ; 0053115e
    POP EBX                             ; 00531164
    RET                                 ; 00531165

