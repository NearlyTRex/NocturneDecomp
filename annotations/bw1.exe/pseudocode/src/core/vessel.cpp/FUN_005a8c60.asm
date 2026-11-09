; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vessel_cpp_FUN_005a8c60(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f912e
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_flame.cpp_CFlame_setup_FUN_004b7b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8c60
        ;   Label: core_vessel.cpp_FUN_005a8c60
    PUSH ESI                            ; 005a8c61
    PUSH EDI                            ; 005a8c62
    PUSH EBP                            ; 005a8c63
    MOV EBP,ESP                         ; 005a8c64
    SUB ESP,0x30                        ; 005a8c66
    AND ESP,0xfffffff8                  ; 005a8c69
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a8c6c
    PUSH EBX                            ; 005a8c6f
    CALL core_actor.cpp_FUN_00408850    ; 005a8c70
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a8c75
    LEA EDX,[EBX + 0x158]               ; 005a8c78
    PUSH EDX                            ; 005a8c7e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 005a8c7f
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a8c84
    LEA EDX,[EBX + 0x66c]               ; 005a8c87
    PUSH EDX                            ; 005a8c8d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 005a8c8e
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a8c93
    MOV EDX,dword ptr [EBX + 0x154]     ; 005a8c96
    PUSH EBX                            ; 005a8c9c
    LEA ESI,[ESP + 0x4]                 ; 005a8c9d
    CALL dword ptr [EDX + 0x1c]         ; 005a8ca1
    ADD ESP,0x4                         ; 005a8ca4
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 005a8ca7
    MOV dword ptr [EBX + 0x2d4],0x0     ; 005a8cad
    TEST EDX,EDX                        ; 005a8cb7
    JZ 0x005a8d4f                       ; 005a8cb9
        ;   XREF to: 005a8d4f (CONDITIONAL_JUMP)  ; LAB_005a8d4f
    LEA ECX,[EDX + 0x20]                ; 005a8cbf
    LEA EDI,[ESP + 0x18]                ; 005a8cc2
    LEA ESI,[ESP + 0x24]                ; 005a8cc6
    FLD float ptr [ECX]                 ; 005a8cca
    FLD float ptr [ECX + 0x4]           ; 005a8ccc
    LEA EDX,[EBX + 0x20]                ; 005a8ccf
    FLD float ptr [ECX + 0x8]           ; 005a8cd2
    FXCH ST2                            ; 005a8cd5
    FSUB float ptr [EDX]                ; 005a8cd7
    FXCH                                ; 005a8cd9
    FSUB float ptr [EDX + 0x4]          ; 005a8cdb
    FXCH ST2                            ; 005a8cde
    FSUB float ptr [EDX + 0x8]          ; 005a8ce0
    FXCH                                ; 005a8ce3
    FSTP float ptr [ESP + 0x24]         ; 005a8ce5
    FXCH                                ; 005a8ce9
    FSTP float ptr [ESP + 0x28]         ; 005a8ceb
    FSTP float ptr [ESP + 0x2c]         ; 005a8cef
    MOVSD ES:EDI,ESI                    ; 005a8cf3
    MOVSD ES:EDI,ESI                    ; 005a8cf4
    MOVSD ES:EDI,ESI                    ; 005a8cf5
    FLD float ptr [ESP + 0x1c]          ; 005a8cf6
    FMUL ST0                            ; 005a8cfa
    FLD float ptr [ESP + 0x18]          ; 005a8cfc
    FMUL ST0                            ; 005a8d00
    FADDP                               ; 005a8d02
    FLD float ptr [ESP + 0x20]          ; 005a8d04
    FMUL ST0                            ; 005a8d08
    FADDP                               ; 005a8d0a
    FSQRT                               ; 005a8d0c
    FCOMP double ptr [0x005f912e]       ; 005a8d0e | DAT_005f912e
    FNSTSW AX                           ; 005a8d14
    SAHF                                ; 005a8d16
    JNC 0x005a8d4f                      ; 005a8d17
        ;   XREF to: 005a8d4f (CONDITIONAL_JUMP)  ; LAB_005a8d4f
    MOV EAX,dword ptr [ECX]             ; 005a8d19
    MOV dword ptr [EDX],EAX             ; 005a8d1b
    MOV EAX,dword ptr [ECX + 0x4]       ; 005a8d1d
    MOV dword ptr [EDX + 0x4],EAX       ; 005a8d20
    MOV EAX,dword ptr [ECX + 0x8]       ; 005a8d23
    MOV dword ptr [EDX + 0x8],EAX       ; 005a8d26
    MOV ECX,dword ptr [ECX + 0xc]       ; 005a8d29
    MOV dword ptr [EDX + 0xc],ECX       ; 005a8d2c
    MOV ECX,dword ptr [EBX + 0x3a8]     ; 005a8d2f
    LEA EDX,[EBX + 0x30]                ; 005a8d35
    ADD ECX,0x30                        ; 005a8d38
    CMP EDX,ECX                         ; 005a8d3b
    JZ 0x005a8d4f                       ; 005a8d3d
        ;   XREF to: 005a8d4f (CONDITIONAL_JUMP)  ; LAB_005a8d4f
    MOV EAX,dword ptr [ECX]             ; 005a8d3f
    MOV dword ptr [EDX],EAX             ; 005a8d41
    MOV EAX,dword ptr [ECX + 0x4]       ; 005a8d43
    MOV dword ptr [EDX + 0x4],EAX       ; 005a8d46
    MOV EAX,dword ptr [ECX + 0x8]       ; 005a8d49
    MOV dword ptr [EDX + 0x8],EAX       ; 005a8d4c
    MOV dword ptr [EBX + 0x3c0],0x1     ; 005a8d4f
        ;   Label: LAB_005a8d4f
    MOV dword ptr [EBX + 0x56c],0x0     ; 005a8d59
    MOV dword ptr [EBX + 0x578],0x1     ; 005a8d63
    MOV dword ptr [EBX + 0x570],0x0     ; 005a8d6d
    MOV dword ptr [EBX + 0x51c],0x3f000000 ; 005a8d77
    LEA EDX,[EBX + 0x3c4]               ; 005a8d81
    MOV dword ptr [EBX + 0x520],0x3f800000 ; 005a8d87
    PUSH EDX                            ; 005a8d91
    MOV dword ptr [EBX + 0x524],0x3f000000 ; 005a8d92
    CALL core_flame.cpp_CFlame_setup_FUN_004b7b20 ; 005a8d9c
        ;   XREF to: 004b7b20 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_setup_FUN_004b7b20(CFlame * this_ptr)
    ADD ESP,0x4                         ; 005a8da1
    MOV dword ptr [EBX + 0xfc],0x1      ; 005a8da4
    MOV ESP,EBP                         ; 005a8dae
    POP EBP                             ; 005a8db0
    POP EDI                             ; 005a8db1
    POP ESI                             ; 005a8db2
    POP EBX                             ; 005a8db3
    RET                                 ; 005a8db4

