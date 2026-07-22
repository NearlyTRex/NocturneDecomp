; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_vessel_cpp_CCryptVessel_ctor_FUN_0054f920(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_vsslbase.kfm_00597448
;   undefined1 DAT_00597455
;   undefined1 DAT_00597456
;   undefined1 DAT_00597457
;   undefined1 DAT_00597458
;   undefined1 DAT_0059745a
;   undefined1 DAT_0059745b
;   undefined1 DAT_0059745c
;   undefined1 DAT_0059745d
;   string s_vsslorb.kfm_0059745f
;   undefined1* PTR_FUN_005a3d84 = 0054fa80
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_flame.cpp_CFlame_ctor_FUN_0048cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f920
        ;   Label: core_vessel.cpp_CCryptVessel_ctor_FUN_0054f920
    PUSH ESI                            ; 0054f921
    PUSH EDI                            ; 0054f922
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054f923
    PUSH EBX                            ; 0054f927
    CALL core_actor.cpp_FUN_00409d30    ; 0054f928
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409d30()
    ADD ESP,0x4                         ; 0054f92d
    ADD EAX,0x150                       ; 0054f930
    PUSH EAX                            ; 0054f935
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0054f936
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 0054f93b
    ADD EAX,0x26c                       ; 0054f93e
    PUSH EAX                            ; 0054f943
    CALL core_flame.cpp_CFlame_ctor_FUN_0048cf60 ; 0054f944
        ;   XREF to: 0048cf60 (UNCONDITIONAL_CALL)  ; undefined core_flame.cpp_CFlame_ctor_FUN_0048cf60()
    ADD ESP,0x4                         ; 0054f949
    ADD EAX,0x2a0                       ; 0054f94c
    PUSH EAX                            ; 0054f951
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0054f952
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 0054f957
    LEA EBX,[EAX + 0xfffff9a4]          ; 0054f95a
    PUSH 0x597448                       ; 0054f960 | = "vsslbase.kfm"
    LEA EAX,[EBX + 0x150]               ; 0054f965
    PUSH EAX                            ; 0054f96b
    MOV ESI,0x597455                    ; 0054f96c | DAT_00597455
    MOV dword ptr [EBX + 0x14c],0x5a3d84 ; 0054f971 | PTR_FUN_005a3d84
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0054f97b
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    MOV dword ptr [EBX + 0x2cc],0x0     ; 0054f980
    ADD ESP,0x8                         ; 0054f98a
    MOV dword ptr [EBX + 0x2d0],0x0     ; 0054f98d
    LEA EDI,[EBX + 0x2d8]               ; 0054f997
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0054f99d
    PUSH EDI                            ; 0054f9a7
    MOV AL,byte ptr [ESI]               ; 0054f9a8 | DAT_00597455 | DAT_00597457
        ;   Label: LAB_0054f9a8
    MOV byte ptr [EDI],AL               ; 0054f9aa
    CMP AL,0x0                          ; 0054f9ac
    JZ 0x0054f9c0                       ; 0054f9ae
        ;   XREF to: 0054f9c0 (CONDITIONAL_JUMP)  ; LAB_0054f9c0
    MOV AL,byte ptr [ESI + 0x1]         ; 0054f9b0 | DAT_00597456 | DAT_00597458
    ADD ESI,0x2                         ; 0054f9b3
    MOV byte ptr [EDI + 0x1],AL         ; 0054f9b6
    ADD EDI,0x2                         ; 0054f9b9
    CMP AL,0x0                          ; 0054f9bc
    JNZ 0x0054f9a8                      ; 0054f9be
        ;   XREF to: 0054f9a8 (CONDITIONAL_JUMP)  ; LAB_0054f9a8
    POP EDI                             ; 0054f9c0
        ;   Label: LAB_0054f9c0
    MOV dword ptr [EBX + 0x3a0],0x0     ; 0054f9c1
    MOV dword ptr [EBX + 0x3a4],0x0     ; 0054f9cb
    MOV ESI,0x59745a                    ; 0054f9d5 | DAT_0059745a
    MOV dword ptr [EBX + 0x3b4],0x0     ; 0054f9da
    LEA EDI,[EBX + 0x33c]               ; 0054f9e4
    MOV dword ptr [EBX + 0x3b0],0x0     ; 0054f9ea
    PUSH EDI                            ; 0054f9f4
    MOV AL,byte ptr [ESI]               ; 0054f9f5 | DAT_0059745a | DAT_0059745c
        ;   Label: LAB_0054f9f5
    MOV byte ptr [EDI],AL               ; 0054f9f7
    CMP AL,0x0                          ; 0054f9f9
    JZ 0x0054fa0d                       ; 0054f9fb
        ;   XREF to: 0054fa0d (CONDITIONAL_JUMP)  ; LAB_0054fa0d
    MOV AL,byte ptr [ESI + 0x1]         ; 0054f9fd | DAT_0059745b | DAT_0059745d
    ADD ESI,0x2                         ; 0054fa00
    MOV byte ptr [EDI + 0x1],AL         ; 0054fa03
    ADD EDI,0x2                         ; 0054fa06
    CMP AL,0x0                          ; 0054fa09
    JNZ 0x0054f9f5                      ; 0054fa0b
        ;   XREF to: 0054f9f5 (CONDITIONAL_JUMP)  ; LAB_0054f9f5
    POP EDI                             ; 0054fa0d
        ;   Label: LAB_0054fa0d
    MOV dword ptr [EBX + 0x3a8],0x41200000 ; 0054fa0e
    PUSH 0x59745f                       ; 0054fa18 | = "vsslorb.kfm"
    MOV dword ptr [EBX + 0x3b8],0x1     ; 0054fa1d
    LEA EAX,[EBX + 0x65c]               ; 0054fa27
    MOV dword ptr [EBX + 0x3ac],0x0     ; 0054fa2d
    PUSH EAX                            ; 0054fa37
    MOV dword ptr [EBX + 0x658],0x0     ; 0054fa38
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0054fa42
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    MOV dword ptr [EBX + 0x7d8],0x1     ; 0054fa47
    MOV dword ptr [EBX + 0xfc],0x1      ; 0054fa51
    ADD ESP,0x8                         ; 0054fa5b
    MOV dword ptr [EBX + 0x7dc],0x0     ; 0054fa5e
    MOV EAX,EBX                         ; 0054fa68
    MOV dword ptr [EBX + 0x7e0],0x0     ; 0054fa6a
    POP EDI                             ; 0054fa74
    POP ESI                             ; 0054fa75
    POP EBX                             ; 0054fa76
    RET                                 ; 0054fa77

