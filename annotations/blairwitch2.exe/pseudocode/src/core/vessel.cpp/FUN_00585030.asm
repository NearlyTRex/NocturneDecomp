; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vessel_cpp_FUN_00585030(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005eddd2
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_flame.cpp_CFlame_setup_FUN_0049f270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585030
        ;   Label: core_vessel.cpp_FUN_00585030
    PUSH ESI                            ; 00585031
    PUSH EDI                            ; 00585032
    PUSH EBP                            ; 00585033
    MOV EBP,ESP                         ; 00585034
    SUB ESP,0x30                        ; 00585036
    AND ESP,0xfffffff8                  ; 00585039
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058503c
    PUSH EBX                            ; 0058503f
    CALL core_actor.cpp_FUN_00408a80    ; 00585040
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00585045
    LEA EDX,[EBX + 0x2b4]               ; 00585048
    PUSH EDX                            ; 0058504e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0058504f
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00585054
    LEA EDX,[EBX + 0x924]               ; 00585057
    PUSH EDX                            ; 0058505d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0058505e
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00585063
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00585066
    PUSH EBX                            ; 0058506c
    LEA ESI,[ESP + 0x4]                 ; 0058506d
    CALL dword ptr [EDX + 0x24]         ; 00585071
    ADD ESP,0x4                         ; 00585074
    MOV EDX,dword ptr [EBX + 0x504]     ; 00585077
    MOV dword ptr [EBX + 0x430],0x0     ; 0058507d
    TEST EDX,EDX                        ; 00585087
    JZ 0x0058511f                       ; 00585089
        ;   XREF to: 0058511f (CONDITIONAL_JUMP)  ; LAB_0058511f
    LEA ECX,[EDX + 0x20]                ; 0058508f
    LEA EDI,[ESP + 0x18]                ; 00585092
    LEA ESI,[ESP + 0x24]                ; 00585096
    FLD float ptr [ECX]                 ; 0058509a
    FLD float ptr [ECX + 0x4]           ; 0058509c
    LEA EDX,[EBX + 0x20]                ; 0058509f
    FLD float ptr [ECX + 0x8]           ; 005850a2
    FXCH ST2                            ; 005850a5
    FSUB float ptr [EDX]                ; 005850a7
    FXCH                                ; 005850a9
    FSUB float ptr [EDX + 0x4]          ; 005850ab
    FXCH ST2                            ; 005850ae
    FSUB float ptr [EDX + 0x8]          ; 005850b0
    FXCH                                ; 005850b3
    FSTP float ptr [ESP + 0x24]         ; 005850b5
    FXCH                                ; 005850b9
    FSTP float ptr [ESP + 0x28]         ; 005850bb
    FSTP float ptr [ESP + 0x2c]         ; 005850bf
    MOVSD ES:EDI,ESI                    ; 005850c3
    MOVSD ES:EDI,ESI                    ; 005850c4
    MOVSD ES:EDI,ESI                    ; 005850c5
    FLD float ptr [ESP + 0x1c]          ; 005850c6
    FMUL ST0                            ; 005850ca
    FLD float ptr [ESP + 0x18]          ; 005850cc
    FMUL ST0                            ; 005850d0
    FADDP                               ; 005850d2
    FLD float ptr [ESP + 0x20]          ; 005850d4
    FMUL ST0                            ; 005850d8
    FADDP                               ; 005850da
    FSQRT                               ; 005850dc
    FCOMP double ptr [0x005eddd2]       ; 005850de | DAT_005eddd2
    FNSTSW AX                           ; 005850e4
    SAHF                                ; 005850e6
    JNC 0x0058511f                      ; 005850e7
        ;   XREF to: 0058511f (CONDITIONAL_JUMP)  ; LAB_0058511f
    MOV EAX,dword ptr [ECX]             ; 005850e9
    MOV dword ptr [EDX],EAX             ; 005850eb
    MOV EAX,dword ptr [ECX + 0x4]       ; 005850ed
    MOV dword ptr [EDX + 0x4],EAX       ; 005850f0
    MOV EAX,dword ptr [ECX + 0x8]       ; 005850f3
    MOV dword ptr [EDX + 0x8],EAX       ; 005850f6
    MOV ECX,dword ptr [ECX + 0xc]       ; 005850f9
    MOV dword ptr [EDX + 0xc],ECX       ; 005850fc
    MOV ECX,dword ptr [EBX + 0x504]     ; 005850ff
    LEA EDX,[EBX + 0x30]                ; 00585105
    ADD ECX,0x30                        ; 00585108
    CMP EDX,ECX                         ; 0058510b
    JZ 0x0058511f                       ; 0058510d
        ;   XREF to: 0058511f (CONDITIONAL_JUMP)  ; LAB_0058511f
    MOV EAX,dword ptr [ECX]             ; 0058510f
    MOV dword ptr [EDX],EAX             ; 00585111
    MOV EAX,dword ptr [ECX + 0x4]       ; 00585113
    MOV dword ptr [EDX + 0x4],EAX       ; 00585116
    MOV EAX,dword ptr [ECX + 0x8]       ; 00585119
    MOV dword ptr [EDX + 0x8],EAX       ; 0058511c
    MOV dword ptr [EBX + 0x51c],0x1     ; 0058511f
        ;   Label: LAB_0058511f
    MOV dword ptr [EBX + 0x824],0x0     ; 00585129
    MOV dword ptr [EBX + 0x830],0x1     ; 00585133
    MOV dword ptr [EBX + 0x828],0x0     ; 0058513d
    MOV dword ptr [EBX + 0x7d4],0x3f000000 ; 00585147
    LEA EDX,[EBX + 0x520]               ; 00585151
    MOV dword ptr [EBX + 0x7d8],0x3f800000 ; 00585157
    PUSH EDX                            ; 00585161
    MOV dword ptr [EBX + 0x7dc],0x3f000000 ; 00585162
    CALL core_flame.cpp_CFlame_setup_FUN_0049f270 ; 0058516c
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_setup_FUN_0049f270(CFlame * this_ptr)
    ADD ESP,0x4                         ; 00585171
    MOV dword ptr [EBX + 0xfc],0x1      ; 00585174
    MOV ESP,EBP                         ; 0058517e
    POP EBP                             ; 00585180
    POP EDI                             ; 00585181
    POP ESI                             ; 00585182
    POP EBX                             ; 00585183
    RET                                 ; 00585184

