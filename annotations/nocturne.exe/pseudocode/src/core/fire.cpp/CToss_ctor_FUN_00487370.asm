; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_fire_cpp_CToss_ctor_FUN_00487370(int param_1)
;
;
; Called Functions:
;   core_box.cpp_CBox_ctor_FUN_0041a610
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00487370
        ;   Label: core_fire.cpp_CToss_ctor_FUN_00487370
    ADD EAX,0x4                         ; 00487374
    PUSH EAX                            ; 00487377
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00487378
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 0048737d
    ADD EAX,0x17c                       ; 00487380
    PUSH EAX                            ; 00487385
    CALL core_box.cpp_CBox_ctor_FUN_0041a610 ; 00487386
        ;   XREF to: 0041a610 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_ctor_FUN_0041a610()
    ADD ESP,0x4                         ; 0048738b
    MOV dword ptr [EAX + 0x25c],0x0     ; 0048738e
    SUB EAX,0x180                       ; 00487398
    RET                                 ; 0048739d

