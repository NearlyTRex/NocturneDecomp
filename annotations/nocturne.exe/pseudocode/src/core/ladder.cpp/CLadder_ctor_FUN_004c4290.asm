; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_ladder_cpp_CLadder_ctor_FUN_004c4290(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_null.kfm_0058772c
;   undefined1* PTR_FUN_0059f954 = 004c4340
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   FUN_00409d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4290
        ;   Label: core_ladder.cpp_CLadder_ctor_FUN_004c4290
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c4291
    PUSH EBX                            ; 004c4295
    CALL FUN_00409d30                   ; 004c4296
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 004c429b
    ADD EAX,0x150                       ; 004c429e
    PUSH EAX                            ; 004c42a3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004c42a4
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 004c42a9
    LEA EBX,[EAX + 0xfffffeb0]          ; 004c42ac
    PUSH 0x58772c                       ; 004c42b2 | = "null.kfm"
    LEA EAX,[EBX + 0x150]               ; 004c42b7
    PUSH EAX                            ; 004c42bd
    MOV dword ptr [EBX + 0x14c],0x59f954 ; 004c42be | PTR_FUN_0059f954
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004c42c8
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    MOV dword ptr [EBX + 0x2cc],0x40000000 ; 004c42cd
    MOV dword ptr [EBX + 0x2d0],0x41200000 ; 004c42d7
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004c42e1
    LEA EAX,[EBX + 0x2dc]               ; 004c42eb
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004c42f1
    MOV dword ptr [EAX + 0x8],0x0       ; 004c42fb
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c4302
    MOV dword ptr [EAX + 0x4],EDX       ; 004c4305
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c4308
    MOV dword ptr [EAX],EDX             ; 004c430b
    LEA EAX,[EBX + 0x2e8]               ; 004c430d
    MOV dword ptr [EAX + 0x8],0x0       ; 004c4313
    ADD ESP,0x8                         ; 004c431a
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c431d
    MOV dword ptr [EAX + 0x4],EDX       ; 004c4320
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c4323
    MOV dword ptr [EAX],EDX             ; 004c4326
    MOV EAX,EBX                         ; 004c4328
    MOV dword ptr [EBX + 0x2f4],0x0     ; 004c432a
    POP EBX                             ; 004c4334
    RET                                 ; 004c4335

