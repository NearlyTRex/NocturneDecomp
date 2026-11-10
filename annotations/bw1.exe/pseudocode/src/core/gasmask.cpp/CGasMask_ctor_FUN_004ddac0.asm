; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGasMask * __cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004ddac0(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d5225
;   core_gasmask.cpp_factoryFuncGasMask_FUN_004dda90 at 004ddaa3
;
; Referenced Globals:
;   TerminatedCString s_gasmask_kfm_005e3a25
;   CDemonActor_vtable g_CGasMaskVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ddac0
        ;   Label: core_gasmask.cpp_CGasMask_ctor_FUN_004ddac0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ddac1
    PUSH EBX                            ; 004ddac5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 004ddac6
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ddacb
    ADD EAX,0x158                       ; 004ddace
    PUSH EAX                            ; 004ddad3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 004ddad4
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ddad9
    LEA EBX,[EAX + 0xfffffea8]          ; 004ddadc
    PUSH 0x5e3a25                       ; 004ddae2 | = "gasmask.kfm"
    LEA EAX,[EBX + 0x158]               ; 004ddae7
    PUSH EAX                            ; 004ddaed
    MOV dword ptr [EBX + 0x154],0x6011a4 ; 004ddaee | g_CGasMaskVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004ddaf8
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ddafd
    MOV EAX,EBX                         ; 004ddb00
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004ddb02
    POP EBX                             ; 004ddb0c
    RET                                 ; 004ddb0d

