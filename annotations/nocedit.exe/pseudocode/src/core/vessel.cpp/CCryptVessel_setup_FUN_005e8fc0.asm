; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_CCryptVessel_setup_FUN_005e8fc0(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_00657029 = 0.5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_flame.cpp_CFlame_setup_FUN_004c9b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e8fc0
        ;   Label: core_vessel.cpp_CCryptVessel_setup_FUN_005e8fc0
    SUB ESP,0x24                        ; 005e8fc1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005e8fc4
    PUSH EBX                            ; 005e8fc8
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005e8fc9
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005e8fce
    LEA EAX,[EBX + 0x158]               ; 005e8fd1
    PUSH EAX                            ; 005e8fd7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005e8fd8
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e8fdd
    LEA EAX,[EBX + 0x66c]               ; 005e8fe0
    PUSH EAX                            ; 005e8fe6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005e8fe7
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e8fec
    MOV EDX,ESP                         ; 005e8fef
    PUSH EDX                            ; 005e8ff1
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e8ff2
    PUSH EBX                            ; 005e8ff8
    CALL dword ptr [EAX + 0x14]         ; 005e8ff9
    ADD ESP,0x8                         ; 005e8ffc
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 005e8fff
    MOV dword ptr [EBX + 0x2d4],0x0     ; 005e9005
    TEST EDX,EDX                        ; 005e900f
    JZ 0x005e9097                       ; 005e9011
        ;   XREF to: 005e9097 (CONDITIONAL_JUMP)  ; LAB_005e9097
    MOV EAX,EDX                         ; 005e9017
    LEA EDX,[EBX + 0x20]                ; 005e9019
    FLD float ptr [EAX + 0x20]          ; 005e901c
    FSUB float ptr [EDX]                ; 005e901f
    FSTP float ptr [ESP + 0x18]         ; 005e9021
    FLD float ptr [EAX + 0x24]          ; 005e9025
    FSUB float ptr [EDX + 0x4]          ; 005e9028
    FST float ptr [ESP + 0x1c]          ; 005e902b
    FMUL float ptr [ESP + 0x1c]         ; 005e902f
    FLD float ptr [ESP + 0x18]          ; 005e9033
    FMUL ST0                            ; 005e9037
    FLD float ptr [EAX + 0x28]          ; 005e9039
    FSUB float ptr [EDX + 0x8]          ; 005e903c
    FXCH                                ; 005e903f
    FADDP ST2,ST0                       ; 005e9041
    FST float ptr [ESP + 0x20]          ; 005e9043
    FMUL float ptr [ESP + 0x20]         ; 005e9047
    FADDP                               ; 005e904b
    FSQRT                               ; 005e904d
    FCOMP double ptr [0x00657029]       ; 005e904f | DOUBLE_00657029
    FNSTSW AX                           ; 005e9055
    SAHF                                ; 005e9057
    JNC 0x005e9097                      ; 005e9058
        ;   XREF to: 005e9097 (CONDITIONAL_JUMP)  ; LAB_005e9097
    MOV EAX,dword ptr [EBX + 0x3a8]     ; 005e905a
    MOV ECX,dword ptr [EAX + 0x20]      ; 005e9060
    MOV dword ptr [EDX],ECX             ; 005e9063
    MOV ECX,dword ptr [EAX + 0x24]      ; 005e9065
    MOV dword ptr [EDX + 0x4],ECX       ; 005e9068
    MOV ECX,dword ptr [EAX + 0x28]      ; 005e906b
    MOV dword ptr [EDX + 0x8],ECX       ; 005e906e
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005e9071
    MOV dword ptr [EDX + 0xc],EAX       ; 005e9074
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 005e9077
    LEA EAX,[EBX + 0x30]                ; 005e907d
    ADD EDX,0x30                        ; 005e9080
    CMP EAX,EDX                         ; 005e9083
    JZ 0x005e9097                       ; 005e9085
        ;   XREF to: 005e9097 (CONDITIONAL_JUMP)  ; LAB_005e9097
    MOV ECX,dword ptr [EDX]             ; 005e9087
    MOV dword ptr [EAX],ECX             ; 005e9089
    MOV ECX,dword ptr [EDX + 0x4]       ; 005e908b
    MOV dword ptr [EAX + 0x4],ECX       ; 005e908e
    MOV ECX,dword ptr [EDX + 0x8]       ; 005e9091
    MOV dword ptr [EAX + 0x8],ECX       ; 005e9094
    MOV dword ptr [EBX + 0x3c0],0x1     ; 005e9097
        ;   Label: LAB_005e9097
    MOV dword ptr [EBX + 0x56c],0x0     ; 005e90a1
    MOV dword ptr [EBX + 0x578],0x1     ; 005e90ab
    MOV dword ptr [EBX + 0x570],0x0     ; 005e90b5
    MOV dword ptr [EBX + 0x51c],0x3f000000 ; 005e90bf
    LEA EAX,[EBX + 0x3c4]               ; 005e90c9
    MOV dword ptr [EBX + 0x520],0x3f800000 ; 005e90cf
    PUSH EAX                            ; 005e90d9
    MOV dword ptr [EBX + 0x524],0x3f000000 ; 005e90da
    CALL core_flame.cpp_CFlame_setup_FUN_004c9b90 ; 005e90e4
        ;   XREF to: 004c9b90 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_setup_FUN_004c9b90(CFlame * this_ptr)
    ADD ESP,0x4                         ; 005e90e9
    MOV dword ptr [EBX + 0xfc],0x1      ; 005e90ec
    ADD ESP,0x24                        ; 005e90f6
    POP EBX                             ; 005e90f9
    RET                                 ; 005e90fa

