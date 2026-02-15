; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGasMask * __cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004e0332
;   core_gasmask.cpp_factoryFunc_FUN_004e5cc0 at 004e5cda
;
; Referenced Globals:
;   TerminatedCString s_gasmask_kfm_0062daa9
;   CDemonActor_vtable g_CGasMaskVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5d00
        ;   Label: core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e5d01
    PUSH EBX                            ; 004e5d05
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004e5d06
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e5d0b
    ADD EAX,0x158                       ; 004e5d0e
    PUSH EAX                            ; 004e5d13
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004e5d14
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e5d19
    LEA EBX,[EAX + 0xfffffea8]          ; 004e5d1c
    PUSH 0x62daa9                       ; 004e5d22 | = "gasmask.kfm"
    LEA EAX,[EBX + 0x158]               ; 004e5d27
    PUSH EAX                            ; 004e5d2d
    MOV dword ptr [EBX + 0x154],0x65ebf4 ; 004e5d2e | g_CGasMaskVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004e5d38
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004e5d3d
    MOV EAX,EBX                         ; 004e5d40
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004e5d42
    POP EBX                             ; 004e5d4c
    RET                                 ; 004e5d4d

