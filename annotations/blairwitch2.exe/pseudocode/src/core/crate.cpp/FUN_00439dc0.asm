; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crate_cpp_FUN_00439dc0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ce1cb
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439dc0
        ;   Label: core_crate.cpp_FUN_00439dc0
    PUSH ESI                            ; 00439dc1
    PUSH EDI                            ; 00439dc2
    SUB ESP,0x38                        ; 00439dc3
    MOV EBX,dword ptr [ESP + 0x48]      ; 00439dc6
    PUSH EBX                            ; 00439dca
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 00439dcb
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00439dd0
    LEA ESI,[EBX + 0x2b4]               ; 00439dd3
    PUSH ESI                            ; 00439dd9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00439dda
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00439ddf
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00439de2
    PUSH EBX                            ; 00439de8
    LEA ESI,[ESP + 0x1c]                ; 00439de9
    LEA EDI,[ESP + 0x4]                 ; 00439ded
    CALL dword ptr [EAX + 0x24]         ; 00439df1
    MOV ECX,0x6                         ; 00439df4
    LEA ESI,[ESP + 0x1c]                ; 00439df9
    ADD ESP,0x4                         ; 00439dfd
    MOVSD.REP ES:EDI,ESI                ; 00439e00
    FLD float ptr [ESP + 0x14]          ; 00439e02
    FLD float ptr [ESP + 0xc]           ; 00439e06
    FSUB float ptr [ESP]                ; 00439e0a
    FXCH                                ; 00439e0d
    FSUB float ptr [ESP + 0x8]          ; 00439e0f
    FXCH                                ; 00439e13
    FLD double ptr [0x005ce1cb]         ; 00439e15 | DAT_005ce1cb
    FXCH                                ; 00439e1b
    FMUL ST1                            ; 00439e1d
    FXCH ST2                            ; 00439e1f
    FMULP                               ; 00439e21
    FXCH                                ; 00439e23
    FSTP float ptr [ESP + 0x34]         ; 00439e25
    FST float ptr [ESP + 0x30]          ; 00439e29
    FCOMP float ptr [ESP + 0x34]        ; 00439e2d
    FNSTSW AX                           ; 00439e31
    SAHF                                ; 00439e33
    JBE 0x00439e97                      ; 00439e34
        ;   XREF to: 00439e97 (CONDITIONAL_JUMP)  ; LAB_00439e97
    MOV EAX,dword ptr [ESP + 0x34]      ; 00439e36
    MOV dword ptr [EBX + 0x434],EAX     ; 00439e3a
        ;   Label: LAB_00439e3a
    MOV dword ptr [EBX + 0x43c],0xc61c3f9a ; 00439e40
    MOV dword ptr [EBX + 0x440],0xc61c3f9a ; 00439e4a
    MOV dword ptr [EBX + 0x444],0xc61c3f9a ; 00439e54
    MOV dword ptr [EBX + 0x448],0xc61c3f9a ; 00439e5e
    MOV dword ptr [EBX + 0x450],0xc61c3f9a ; 00439e68
    MOV dword ptr [EBX + 0x44c],0xc61c3f9a ; 00439e72
    MOV dword ptr [EBX + 0x454],0x461c3f9a ; 00439e7c
    MOV dword ptr [EBX + 0x430],0x0     ; 00439e86
    ADD ESP,0x38                        ; 00439e90
    POP EDI                             ; 00439e93
    POP ESI                             ; 00439e94
    POP EBX                             ; 00439e95
    RET                                 ; 00439e96
    MOV EAX,dword ptr [ESP + 0x30]      ; 00439e97
        ;   Label: LAB_00439e97
    JMP 0x00439e3a                      ; 00439e9b
        ;   XREF to: 00439e3a (UNCONDITIONAL_JUMP)  ; LAB_00439e3a

