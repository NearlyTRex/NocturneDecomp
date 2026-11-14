; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004efa10(CHotDemon *this_ptr)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hotdemon.cpp_factoryFuncHotDemon_FUN_004ef9e0 at 004ef9f3
;   core_succubus.cpp_CSuccubus_process_FUN_00592320 at 00592619
;
; Referenced Globals:
;   TerminatedCString s_hotdemon_dfm_005e5054
;   undefined4 DAT_00602300
;   undefined4 DAT_00602304
;   CEnemy_full_vtable g_CHotDemonVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efa10
        ;   Label: core_hotdemon.cpp_CHotDemon_ctor_FUN_004efa10
    MOV EDX,dword ptr [ESP + 0x8]       ; 004efa11
    PUSH EDX                            ; 004efa15
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 004efa16
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004efa1b
    PUSH 0x5e5054                       ; 004efa1e | = "hotdemon.dfm"
    MOV EBX,EAX                         ; 004efa23
    ADD EAX,0x158                       ; 004efa25
    PUSH EAX                            ; 004efa2a
    MOV dword ptr [EAX + -0x4],0x602314 ; 004efa2b | g_CHotDemonVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 004efa32
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x00602300]          ; 004efa37 | DAT_00602300
    FLD float ptr [0x00602304]          ; 004efa3d | DAT_00602304
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 004efa43
    ADD ESP,0x8                         ; 004efa4d
    MOV dword ptr [EBX + 0x2ff0],0x3f666666 ; 004efa50
    MOV EAX,EBX                         ; 004efa5a
    FXCH                                ; 004efa5c
    FSTP float ptr [EBX + 0x2ff4]       ; 004efa5e
    FSTP float ptr [EBX + 0x2ff8]       ; 004efa64
    POP EBX                             ; 004efa6a
    RET                                 ; 004efa6b

