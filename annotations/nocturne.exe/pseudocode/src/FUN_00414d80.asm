; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00414d80(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_question.kfm_00578d60
;   undefined1* PTR_FUN_0059a2f4 = 00414de0
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   FUN_00409d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414d80
        ;   Label: FUN_00414d80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414d81
    PUSH EBX                            ; 00414d85
    CALL FUN_00409d30                   ; 00414d86
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 00414d8b
    ADD EAX,0x150                       ; 00414d8e
    PUSH EAX                            ; 00414d93
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00414d94
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 00414d99
    LEA EBX,[EAX + 0xfffffeb0]          ; 00414d9c
    PUSH 0x578d60                       ; 00414da2 | = "question.kfm"
    LEA EAX,[EBX + 0x150]               ; 00414da7
    PUSH EAX                            ; 00414dad
    MOV dword ptr [EBX + 0x14c],0x59a2f4 ; 00414dae | PTR_FUN_0059a2f4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00414db8
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 00414dbd
    MOV dword ptr [EBX + 0x2d0],0x41f00000 ; 00414dc0
    MOV EAX,EBX                         ; 00414dca
    MOV dword ptr [EBX + 0x2d4],0x41f00000 ; 00414dcc
    POP EBX                             ; 00414dd6
    RET                                 ; 00414dd7

