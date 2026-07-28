; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_simbox_cpp_CSimBox_setup_FUN_00516c60(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_box.cpp_CBox_setupCorners_FUN_0041a6e0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516c60
        ;   Label: core_simbox.cpp_CSimBox_setup_FUN_00516c60
    PUSH ESI                            ; 00516c61
    SUB ESP,0x3c                        ; 00516c62
    MOV EBX,dword ptr [ESP + 0x48]      ; 00516c65
    LEA EAX,[EBX + 0x150]               ; 00516c69
    PUSH EAX                            ; 00516c6f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 00516c70
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00516c75
    PUSH EBX                            ; 00516c78
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 00516c79
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00516c7e
    MOV EAX,ESP                         ; 00516c81
    PUSH EAX                            ; 00516c83
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00516c84
    PUSH EBX                            ; 00516c8a
    CALL dword ptr [EDX + 0x14]         ; 00516c8b
    MOV EDX,EAX                         ; 00516c8e
    MOV ESI,EAX                         ; 00516c90
    LEA EAX,[ESP + 0x20]                ; 00516c92
    ADD ESP,0x8                         ; 00516c96
    CMP EAX,EDX                         ; 00516c99
    JNZ 0x00516d56                      ; 00516c9b
        ;   XREF to: 00516d56 (CONDITIONAL_JUMP)  ; LAB_00516d56
    LEA EAX,[ESP + 0x24]                ; 00516ca1
        ;   Label: LAB_00516ca1
    LEA EDX,[ESI + 0xc]                 ; 00516ca5
    CMP EAX,EDX                         ; 00516ca8
    JZ 0x00516cc0                       ; 00516caa
        ;   XREF to: 00516cc0 (CONDITIONAL_JUMP)  ; LAB_00516cc0
    MOV EAX,dword ptr [EDX]             ; 00516cac
    MOV dword ptr [ESP + 0x24],EAX      ; 00516cae
    MOV EAX,dword ptr [EDX + 0x4]       ; 00516cb2
    MOV dword ptr [ESP + 0x28],EAX      ; 00516cb5
    MOV EAX,dword ptr [EDX + 0x8]       ; 00516cb9
    MOV dword ptr [ESP + 0x2c],EAX      ; 00516cbc
    FLD float ptr [ESP + 0x24]          ; 00516cc0
        ;   Label: LAB_00516cc0
    FLD float ptr [ESP + 0x28]          ; 00516cc4
    FLD float ptr [ESP + 0x2c]          ; 00516cc8
    LEA EAX,[ESP + 0x30]                ; 00516ccc
    FXCH ST2                            ; 00516cd0
    FSUB float ptr [ESP + 0x18]         ; 00516cd2
    FXCH                                ; 00516cd6
    FSUB float ptr [ESP + 0x1c]         ; 00516cd8
    FXCH ST2                            ; 00516cdc
    FSUB float ptr [ESP + 0x20]         ; 00516cde
    FXCH                                ; 00516ce2
    FSTP float ptr [ESP + 0x30]         ; 00516ce4
    FXCH                                ; 00516ce8
    FSTP float ptr [ESP + 0x34]         ; 00516cea
    FSTP float ptr [ESP + 0x38]         ; 00516cee
    PUSH dword ptr [EBX + 0x2d0]        ; 00516cf2
    PUSH EAX                            ; 00516cf8
    LEA EAX,[EBX + 0x30]                ; 00516cf9
    PUSH EAX                            ; 00516cfc
    LEA ESI,[EBX + 0x20]                ; 00516cfd
    PUSH ESI                            ; 00516d00
    LEA EAX,[EBX + 0x350]               ; 00516d01
    PUSH EAX                            ; 00516d07
    CALL core_box.cpp_CBox_setupCorners_FUN_0041a6e0 ; 00516d08
        ;   XREF to: 0041a6e0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041a6e0(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    LEA EAX,[EBX + 0x5ac]               ; 00516d0d
    ADD ESP,0x14                        ; 00516d13
    CMP EAX,ESI                         ; 00516d16
    JZ 0x00516d2a                       ; 00516d18
        ;   XREF to: 00516d2a (CONDITIONAL_JUMP)  ; LAB_00516d2a
    MOV EDX,dword ptr [ESI]             ; 00516d1a
    MOV dword ptr [EAX],EDX             ; 00516d1c
    MOV EDX,dword ptr [ESI + 0x4]       ; 00516d1e
    MOV dword ptr [EAX + 0x4],EDX       ; 00516d21
    MOV EDX,dword ptr [ESI + 0x8]       ; 00516d24
    MOV dword ptr [EAX + 0x8],EDX       ; 00516d27
    LEA EDX,[EBX + 0x5b8]               ; 00516d2a
        ;   Label: LAB_00516d2a
    LEA EAX,[EBX + 0x30]                ; 00516d30
    CMP EDX,EAX                         ; 00516d33
    JZ 0x00516d47                       ; 00516d35
        ;   XREF to: 00516d47 (CONDITIONAL_JUMP)  ; LAB_00516d47
    MOV ECX,dword ptr [EAX]             ; 00516d37
    MOV dword ptr [EDX],ECX             ; 00516d39
    MOV ECX,dword ptr [EAX + 0x4]       ; 00516d3b
    MOV dword ptr [EDX + 0x4],ECX       ; 00516d3e
    MOV ECX,dword ptr [EAX + 0x8]       ; 00516d41
    MOV dword ptr [EDX + 0x8],ECX       ; 00516d44
    CMP dword ptr [EBX + 0x2cc],0x1     ; 00516d47
        ;   Label: LAB_00516d47
    JZ 0x00516d6f                       ; 00516d4e
        ;   XREF to: 00516d6f (CONDITIONAL_JUMP)  ; LAB_00516d6f
    ADD ESP,0x3c                        ; 00516d50
    POP ESI                             ; 00516d53
    POP EBX                             ; 00516d54
    RET                                 ; 00516d55
    MOV EAX,dword ptr [EDX]             ; 00516d56
        ;   Label: LAB_00516d56
    MOV dword ptr [ESP + 0x18],EAX      ; 00516d58
    MOV EAX,dword ptr [EDX + 0x4]       ; 00516d5c
    MOV dword ptr [ESP + 0x1c],EAX      ; 00516d5f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00516d63
    MOV dword ptr [ESP + 0x20],EAX      ; 00516d66
    JMP 0x00516ca1                      ; 00516d6a
        ;   XREF to: 00516ca1 (UNCONDITIONAL_JUMP)  ; LAB_00516ca1
    MOV dword ptr [EBX + 0x5a4],0x0     ; 00516d6f
        ;   Label: LAB_00516d6f
    ADD ESP,0x3c                        ; 00516d79
    POP ESI                             ; 00516d7c
    POP EBX                             ; 00516d7d
    RET                                 ; 00516d7e

