; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGasMask * __cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004a8a10(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a3094
;   core_gasmask.cpp_factoryFunc_FUN_004a89e0 at 004a89f3
;
; Referenced Globals:
;   TerminatedCString s_gasmask_kfm_00584aa1
;   CDemonActor_vtable g_CGasMaskVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8a10
        ;   Label: core_gasmask.cpp_CGasMask_ctor_FUN_004a8a10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a8a11
    PUSH EBX                            ; 004a8a15
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 004a8a16
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a8a1b
    ADD EAX,0x150                       ; 004a8a1e
    PUSH EAX                            ; 004a8a23
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004a8a24
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004a8a29
    LEA EBX,[EAX + 0xfffffeb0]          ; 004a8a2c
    PUSH 0x584aa1                       ; 004a8a32 | = "gasmask.kfm"
    LEA EAX,[EBX + 0x150]               ; 004a8a37
    PUSH EAX                            ; 004a8a3d
    MOV dword ptr [EBX + 0x14c],0x59e0e4 ; 004a8a3e | g_CGasMaskVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004a8a48
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004a8a4d
    MOV EAX,EBX                         ; 004a8a50
    MOV dword ptr [EBX + 0x2cc],0x0     ; 004a8a52
    POP EBX                             ; 004a8a5c
    RET                                 ; 004a8a5d

