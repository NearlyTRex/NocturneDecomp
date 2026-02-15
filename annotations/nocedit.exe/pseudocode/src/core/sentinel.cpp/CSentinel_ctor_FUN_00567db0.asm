; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_00567db0(CSentinel *this_ptr)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_sentinel.cpp_factoryFunc_FUN_00567d70 at 00567d8a
;
; Referenced Globals:
;   TerminatedCString s_sentinel_dfm_00645719
;   float FLOAT_0066267c = 50
;   float FLOAT_00662680 = 100
;   CDemonActor_vtable g_CSentinelVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567db0
        ;   Label: core_sentinel.cpp_CSentinel_ctor_FUN_00567db0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00567db1
    PUSH EDX                            ; 00567db5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 00567db6
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00567dbb
    PUSH 0x645719                       ; 00567dbe | = "sentinel.dfm"
    MOV EBX,EAX                         ; 00567dc3
    ADD EAX,0x158                       ; 00567dc5
    PUSH EAX                            ; 00567dca
    MOV dword ptr [EAX + -0x4],0x662694 ; 00567dcb | g_CSentinelVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00567dd2
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x0066267c]          ; 00567dd7 | FLOAT_0066267c
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 00567ddd
    FLD float ptr [0x00662680]          ; 00567de7 | FLOAT_00662680
    MOV dword ptr [EBX + 0x2de0],0x40000000 ; 00567ded
    ADD ESP,0x8                         ; 00567df7
    MOV dword ptr [EBX + 0xbec0],0x0    ; 00567dfa
    MOV EAX,EBX                         ; 00567e04
    FXCH                                ; 00567e06
    FSTP float ptr [EBX + 0x2de4]       ; 00567e08
    FSTP float ptr [EBX + 0x2de8]       ; 00567e0e
    POP EBX                             ; 00567e14
    RET                                 ; 00567e15

