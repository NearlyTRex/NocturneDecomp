; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(CHotDemon *this_ptr)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hotdemon.cpp_factoryFunc_FUN_004f6c60 at 004f6c7a
;   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 at 005c714c
;
; Referenced Globals:
;   TerminatedCString s_hotdemon_dfm_0062f357
;   float FLOAT_0065fcd0 = 50
;   float FLOAT_0065fcd4 = 100
;   CDemonActor_vtable g_CHotDemonVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6ca0
        ;   Label: core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f6ca1
    PUSH EDX                            ; 004f6ca5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 004f6ca6
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004f6cab
    PUSH 0x62f357                       ; 004f6cae | = "hotdemon.dfm"
    MOV EBX,EAX                         ; 004f6cb3
    ADD EAX,0x158                       ; 004f6cb5
    PUSH EAX                            ; 004f6cba
    MOV dword ptr [EAX + -0x4],0x65fce4 ; 004f6cbb | g_CHotDemonVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004f6cc2
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x0065fcd0]          ; 004f6cc7 | FLOAT_0065fcd0
    FLD float ptr [0x0065fcd4]          ; 004f6ccd | FLOAT_0065fcd4
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 004f6cd3
    ADD ESP,0x8                         ; 004f6cdd
    MOV dword ptr [EBX + 0x2de0],0x3f666666 ; 004f6ce0
    MOV EAX,EBX                         ; 004f6cea
    FXCH                                ; 004f6cec
    FSTP float ptr [EBX + 0x2de4]       ; 004f6cee
    FSTP float ptr [EBX + 0x2de8]       ; 004f6cf4
    POP EBX                             ; 004f6cfa
    RET                                 ; 004f6cfb

