; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040fed0(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_candle.kfm_005784ca
;   undefined1* PTR_core_backgnd.cpp_CBackgroundActor_setup_FUN_0040ff30_005999a4 = 0040ff30
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fed0
        ;   Label: FUN_0040fed0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040fed1
    PUSH EBX                            ; 0040fed5
    CALL core_actor.cpp_FUN_00409d30    ; 0040fed6
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409d30()
    ADD ESP,0x4                         ; 0040fedb
    ADD EAX,0x150                       ; 0040fede
    PUSH EAX                            ; 0040fee3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0040fee4
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 0040fee9
    LEA EBX,[EAX + 0xfffffeb0]          ; 0040feec
    PUSH 0x5784ca                       ; 0040fef2 | = "candle.kfm"
    LEA EAX,[EBX + 0x150]               ; 0040fef7
    PUSH EAX                            ; 0040fefd
    MOV dword ptr [EBX + 0x14c],0x5999a4 ; 0040fefe | PTR_core_backgnd.cpp_CBackgroundActor_setup_FUN_0040ff30_005999a4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0040ff08
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 0040ff0d
    MOV dword ptr [EBX + 0x2cc],0x0     ; 0040ff10
    MOV EAX,EBX                         ; 0040ff1a
    MOV dword ptr [EBX + 0x2d0],0x0     ; 0040ff1c
    POP EBX                             ; 0040ff26
    RET                                 ; 0040ff27

