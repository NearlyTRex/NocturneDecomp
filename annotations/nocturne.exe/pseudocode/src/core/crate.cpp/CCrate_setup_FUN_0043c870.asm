; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crate_cpp_CCrate_setup_FUN_0043c870(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0057b433
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c870
        ;   Label: core_crate.cpp_CCrate_setup_FUN_0043c870
    SUB ESP,0x20                        ; 0043c871
    MOV EBX,dword ptr [ESP + 0x28]      ; 0043c874
    PUSH EBX                            ; 0043c878
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 0043c879
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    ADD ESP,0x4                         ; 0043c87e
    LEA EAX,[EBX + 0x150]               ; 0043c881
    PUSH EAX                            ; 0043c887
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0043c888
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    ADD ESP,0x4                         ; 0043c88d
    MOV EAX,ESP                         ; 0043c890
    PUSH EAX                            ; 0043c892
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0043c893
    PUSH EBX                            ; 0043c899
    CALL dword ptr [EDX + 0x14]         ; 0043c89a
    ADD ESP,0x8                         ; 0043c89d
    FLD float ptr [ESP + 0x14]          ; 0043c8a0
    FLD float ptr [ESP + 0xc]           ; 0043c8a4
    FSUB float ptr [ESP]                ; 0043c8a8
    FXCH                                ; 0043c8ab
    FSUB float ptr [ESP + 0x8]          ; 0043c8ad
    FXCH                                ; 0043c8b1
    FLD double ptr [0x0057b433]         ; 0043c8b3 | DAT_0057b433
    FXCH                                ; 0043c8b9
    FMUL ST1                            ; 0043c8bb
    FXCH ST2                            ; 0043c8bd
    FMULP                               ; 0043c8bf
    FXCH                                ; 0043c8c1
    FSTP float ptr [ESP + 0x1c]         ; 0043c8c3
    FST float ptr [ESP + 0x18]          ; 0043c8c7
    FCOMP float ptr [ESP + 0x1c]        ; 0043c8cb
    FNSTSW AX                           ; 0043c8cf
    SAHF                                ; 0043c8d1
    JBE 0x0043c933                      ; 0043c8d2
        ;   XREF to: 0043c933 (CONDITIONAL_JUMP)  ; LAB_0043c933
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043c8d4
    MOV dword ptr [EBX + 0x2d0],EAX     ; 0043c8d8
        ;   Label: LAB_0043c8d8
    MOV dword ptr [EBX + 0x2d8],0xc61c3f9a ; 0043c8de
    MOV dword ptr [EBX + 0x2dc],0xc61c3f9a ; 0043c8e8
    MOV dword ptr [EBX + 0x2e0],0xc61c3f9a ; 0043c8f2
    MOV dword ptr [EBX + 0x2e4],0xc61c3f9a ; 0043c8fc
    MOV dword ptr [EBX + 0x2ec],0xc61c3f9a ; 0043c906
    MOV dword ptr [EBX + 0x2e8],0xc61c3f9a ; 0043c910
    MOV dword ptr [EBX + 0x2f0],0x461c3f9a ; 0043c91a
    MOV dword ptr [EBX + 0x2cc],0x0     ; 0043c924
    ADD ESP,0x20                        ; 0043c92e
    POP EBX                             ; 0043c931
    RET                                 ; 0043c932
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043c933
        ;   Label: LAB_0043c933
    JMP 0x0043c8d8                      ; 0043c937
        ;   XREF to: 0043c8d8 (UNCONDITIONAL_JUMP)  ; LAB_0043c8d8

