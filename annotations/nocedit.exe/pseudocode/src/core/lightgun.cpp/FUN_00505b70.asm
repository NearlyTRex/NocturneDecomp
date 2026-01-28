; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_lightgun_cpp_FUN_00505b70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTrigger_CGlass_006314b6
;   float FLOAT_006314ca = 0.5
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_032613bc
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505b70
        ;   Label: core_lightgun.cpp_FUN_00505b70
    PUSH ESI                            ; 00505b71
    PUSH EDI                            ; 00505b72
    PUSH EBP                            ; 00505b73
    SUB ESP,0x3c                        ; 00505b74
    MOV EDI,dword ptr [ESP + 0x50]      ; 00505b77
    MOV ESI,dword ptr [ESP + 0x54]      ; 00505b7b
    MOV EDX,dword ptr [0x006810c8]      ; 00505b7f | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 00505b85 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10 ; 00505b86
        ;   XREF to: 00573e10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00505b8b
    MOV EAX,ESP                         ; 00505b8e
    PUSH EAX                            ; 00505b90
    MOV EBX,dword ptr [ESI + 0x154]     ; 00505b91
    PUSH ESI                            ; 00505b97
    CALL dword ptr [EBX + 0x14]         ; 00505b98
    LEA EBX,[EAX + 0xc]                 ; 00505b9b
    FLD float ptr [EAX]                 ; 00505b9e
    FADD float ptr [EBX]                ; 00505ba0
    ADD ESP,0x8                         ; 00505ba2
    FST float ptr [ESP + 0x30]          ; 00505ba5
    FLD float ptr [EAX + 0x4]           ; 00505ba9
    FADD float ptr [EBX + 0x4]          ; 00505bac
    FXCH                                ; 00505baf
    FLD float ptr [0x006314ca]          ; 00505bb1 | FLOAT_006314ca
    FXCH                                ; 00505bb7
    FMUL ST1                            ; 00505bb9
    FXCH ST2                            ; 00505bbb
    FST float ptr [ESP + 0x34]          ; 00505bbd
    FLD float ptr [EAX + 0x8]           ; 00505bc1
    FADD float ptr [EBX + 0x8]          ; 00505bc4
    FXCH                                ; 00505bc7
    FMUL ST2                            ; 00505bc9
    FXCH                                ; 00505bcb
    FST float ptr [ESP + 0x38]          ; 00505bcd
    FMULP ST2                           ; 00505bd1
    LEA EAX,[ESP + 0x18]                ; 00505bd3
    XOR EBP,EBP                         ; 00505bd7
    PUSH EAX                            ; 00505bd9
    LEA EAX,[ESP + 0x28]                ; 00505bda
    FXCH ST2                            ; 00505bde
    FSTP float ptr [ESP + 0x1c]         ; 00505be0
    PUSH EAX                            ; 00505be4
    FXCH                                ; 00505be5
    FSTP float ptr [ESP + 0x24]         ; 00505be7
    XOR EBX,EBX                         ; 00505beb
    PUSH ESI                            ; 00505bed
    FSTP float ptr [ESP + 0x2c]         ; 00505bee
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00505bf2
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00505bf7
    LEA EAX,[ESP + 0x24]                ; 00505bfa
        ;   Label: LAB_00505bfa
    PUSH EAX                            ; 00505bfe
    PUSH EDI                            ; 00505bff
    MOV ECX,dword ptr [0x006810c8]      ; 00505c00 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 00505c06 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 00505c07
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV EAX,[0x006810c8]                ; 00505c0c | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00505c11 | DAT_032613bc
    ADD ESP,0xc                         ; 00505c17
    TEST EDX,EDX                        ; 00505c1a
    JZ 0x00505c4f                       ; 00505c1c
        ;   XREF to: 00505c4f (CONDITIONAL_JUMP)  ; LAB_00505c4f
    CMP ESI,EDX                         ; 00505c1e
    JZ 0x00505c68                       ; 00505c20
        ;   XREF to: 00505c68 (CONDITIONAL_JUMP)  ; LAB_00505c68
    PUSH 0x6314b6                       ; 00505c22 | = "CTrigger || CGlass"
    PUSH EDX                            ; 00505c27
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00505c28
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00505c2d
    TEST EAX,EAX                        ; 00505c30
    JZ 0x00505c4f                       ; 00505c32
        ;   XREF to: 00505c4f (CONDITIONAL_JUMP)  ; LAB_00505c4f
    MOV EAX,[0x006810c8]                ; 00505c34 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 00505c39 | DAT_032613bc
    PUSH ECX                            ; 00505c3f
    PUSH EAX                            ; 00505c40 | g_CDemonSetInstance
    INC EBX                             ; 00505c41
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 00505c42
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00505c47
    CMP EBX,0x3                         ; 00505c4a
    JL 0x00505bfa                       ; 00505c4d
        ;   XREF to: 00505bfa (CONDITIONAL_JUMP)  ; LAB_00505bfa
    MOV EBX,dword ptr [0x006810c8]      ; 00505c4f | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00505c4f
    PUSH EBX                            ; 00505c55 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0 ; 00505c56
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00505c5b
    MOV EAX,EBP                         ; 00505c5e
    ADD ESP,0x3c                        ; 00505c60
    POP EBP                             ; 00505c63
    POP EDI                             ; 00505c64
    POP ESI                             ; 00505c65
    POP EBX                             ; 00505c66
    RET                                 ; 00505c67
    MOV EBP,0x1                         ; 00505c68
        ;   Label: LAB_00505c68
    JMP 0x00505c4f                      ; 00505c6d
        ;   XREF to: 00505c4f (UNCONDITIONAL_JUMP)  ; LAB_00505c4f

