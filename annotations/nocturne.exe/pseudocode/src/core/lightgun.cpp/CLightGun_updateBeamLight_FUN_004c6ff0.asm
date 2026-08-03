; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(CLightGun *this_ptr)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_lightgun.cpp_CLightGun_process_FUN_004c79a0 at 004c7b22
;   core_lightgun.cpp_FUN_004c71a0 at 004c73df
;
; Referenced Globals:
;   float FLOAT_0059fd64 = 112
;   CDemonLight g_CDemonLight_01c74640
;   undefined4 g_CDemonLight_01c74640.base.fixed_point_scale
;   undefined4 g_CDemonLight_01c74640.base.position.x
;   undefined4 g_CDemonLight_01c74640.base.position.y
;   undefined4 g_CDemonLight_01c74640.base.position.z
;   undefined4 g_CDemonLight_01c74640.base.rotation_matrix.m[0].x
;   undefined4 g_CDemonLight_01c74640.base.focal_length
;   undefined4 g_CDemonLight_01c74640.light_enabled_flag
;   undefined4 g_CDemonLight_01c74640.volumetric_enabled
;   undefined4 g_CDemonLight_01c74640.antialiasing_enabled
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6ff0
        ;   Label: core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0
    PUSH ESI                            ; 004c6ff1
    SUB ESP,0x18                        ; 004c6ff2
    MOV EBX,dword ptr [ESP + 0x24]      ; 004c6ff5
    MOV EDX,ESP                         ; 004c6ff9
    PUSH EDX                            ; 004c6ffb
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c6ffc
    PUSH EBX                            ; 004c7002
    CALL dword ptr [EAX + 0xd8]         ; 004c7003
    ADD ESP,0x8                         ; 004c7009
    PUSH EAX                            ; 004c700c
    LEA EAX,[ESP + 0x10]                ; 004c700d
    PUSH EAX                            ; 004c7011
    PUSH EBX                            ; 004c7012
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004c7013
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,0x1                         ; 004c7018
    LEA EAX,[ESP + 0x18]                ; 004c701d
    ADD ESP,0xc                         ; 004c7021
    XOR ECX,ECX                         ; 004c7024
    MOV dword ptr [0x01c762f4],EDX      ; 004c7026 | g_CDemonLight_01c74640.light_enabled_flag
    MOV dword ptr [0x01c762fc],ECX      ; 004c702c | g_CDemonLight_01c74640.volumetric_enabled
    CMP EAX,0x1c74744                   ; 004c7032
    JZ 0x004c7054                       ; 004c7037
        ;   XREF to: 004c7054 (CONDITIONAL_JUMP)  ; LAB_004c7054
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c7039
    MOV [0x01c74744],EAX                ; 004c703d | g_CDemonLight_01c74640.base.position.x
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c7042
    MOV [0x01c74748],EAX                ; 004c7046 | g_CDemonLight_01c74640.base.position.y
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c704b
    MOV [0x01c7474c],EAX                ; 004c704f | g_CDemonLight_01c74640.base.position.z
    ADD EBX,0x30                        ; 004c7054
        ;   Label: LAB_004c7054
    PUSH EBX                            ; 004c7057
    PUSH 0x1c74750                      ; 004c7058 | g_CDemonLight_01c74640.base.rotation_matrix.m[0].x
    MOV ESI,0x1                         ; 004c705d
    MOV EBX,0x42000000                  ; 004c7062
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004c7067
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004c706c
    FLD float ptr [0x0059fd64]          ; 004c706f | FLOAT_0059fd64
    PUSH 0x3f800000                     ; 004c7075
    MOV dword ptr [0x01c74740],EBX      ; 004c707a | g_CDemonLight_01c74640.base.fixed_point_scale
    PUSH 0x1c74640                      ; 004c7080 | g_CDemonLight_01c74640
    FSTP float ptr [0x01c74778]         ; 004c7085 | g_CDemonLight_01c74640.base.focal_length
    MOV dword ptr [0x01c76310],ESI      ; 004c708b | g_CDemonLight_01c74640.antialiasing_enabled
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080 ; 004c7091
        ;   XREF to: 00452080 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 004c7096
    ADD ESP,0x18                        ; 004c7099
    POP ESI                             ; 004c709c
    POP EBX                             ; 004c709d
    RET                                 ; 004c709e

