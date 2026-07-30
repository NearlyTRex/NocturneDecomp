; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004b8ca0(CHotDemon *this_ptr)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hotdemon.cpp_factoryFunc_FUN_004b8c70 at 004b8c83
;   core_succubus.cpp_CSuccubus_process_FUN_00540f50 at 00541202
;
; Referenced Globals:
;   TerminatedCString s_hotdemon_dfm_00585df7
;   float FLOAT_0059f0c0 = 50
;   float FLOAT_0059f0c4 = 100
;   CEnemy_full_vtable g_CHotDemonVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8ca0
        ;   Label: core_hotdemon.cpp_CHotDemon_ctor_FUN_004b8ca0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b8ca1
    PUSH EDX                            ; 004b8ca5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 004b8ca6
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00479560(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004b8cab
    PUSH 0x585df7                       ; 004b8cae | = "hotdemon.dfm"
    MOV EBX,EAX                         ; 004b8cb3
    ADD EAX,0x150                       ; 004b8cb5
    PUSH EAX                            ; 004b8cba
    MOV dword ptr [EAX + -0x4],0x59f0d4 ; 004b8cbb | g_CHotDemonVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004b8cc2
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x0059f0c0]          ; 004b8cc7 | FLOAT_0059f0c0
    FLD float ptr [0x0059f0c4]          ; 004b8ccd | FLOAT_0059f0c4
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 004b8cd3
    ADD ESP,0x8                         ; 004b8cdd
    MOV dword ptr [EBX + 0x2dd8],0x3f666666 ; 004b8ce0
    MOV EAX,EBX                         ; 004b8cea
    FXCH                                ; 004b8cec
    FSTP float ptr [EBX + 0x2ddc]       ; 004b8cee
    FSTP float ptr [EBX + 0x2de0]       ; 004b8cf4
    POP EBX                             ; 004b8cfa
    RET                                 ; 004b8cfb

