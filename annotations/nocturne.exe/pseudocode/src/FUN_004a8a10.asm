; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a8a10(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_004a89e0 at 004a89f3
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a3094
;
; Referenced Globals:
;   TerminatedCString s_gasmask_kfm_00584aa1
;   undefined1* PTR_FUN_0059e0e4 = 004a8a60
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8a10
        ;   Label: FUN_004a8a10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a8a11
    PUSH EBX                            ; 004a8a15
    CALL core_actor.cpp_FUN_00409d30    ; 004a8a16
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409d30()
    ADD ESP,0x4                         ; 004a8a1b
    ADD EAX,0x150                       ; 004a8a1e
    PUSH EAX                            ; 004a8a23
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004a8a24
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 004a8a29
    LEA EBX,[EAX + 0xfffffeb0]          ; 004a8a2c
    PUSH 0x584aa1                       ; 004a8a32 | = "gasmask.kfm"
    LEA EAX,[EBX + 0x150]               ; 004a8a37
    PUSH EAX                            ; 004a8a3d
    MOV dword ptr [EBX + 0x14c],0x59e0e4 ; 004a8a3e | PTR_FUN_0059e0e4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004a8a48
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 004a8a4d
    MOV EAX,EBX                         ; 004a8a50
    MOV dword ptr [EBX + 0x2cc],0x0     ; 004a8a52
    POP EBX                             ; 004a8a5c
    RET                                 ; 004a8a5d

