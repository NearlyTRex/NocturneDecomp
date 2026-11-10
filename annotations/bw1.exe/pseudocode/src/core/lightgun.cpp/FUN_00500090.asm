; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lightgun_cpp_FUN_00500090(int param_1)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[2]:
;   core_lightgun.cpp_CLightGun_fire_FUN_00500310 at 00500588
;   core_lightgun.cpp_CLightGun_process_FUN_00500d20 at 00500e1c
;
; Referenced Globals:
;   undefined4 DAT_00603014
;   undefined4 g_CDemonLightInstance.base.base.position
;   undefined4 g_CDemonLightInstance.base.base.position+4
;   undefined4 g_CDemonLightInstance.base.base.position+8
;   undefined4 g_CDemonLightInstance.base.base.rotation_matrix.m[0].x
;   undefined4 g_CDemonLightInstance.base.base.focal_length
;   undefined4 g_CDemonLightInstance.base.max_distance
;   undefined4 g_CDemonLightInstance.light_enabled_flag
;   undefined4 g_CDemonLightInstance.volumetric_enabled
;   undefined4 g_CDemonLightInstance.antialiasing_enabled
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500090
        ;   Label: core_lightgun.cpp_FUN_00500090
    PUSH ESI                            ; 00500091
    PUSH EDI                            ; 00500092
    SUB ESP,0x30                        ; 00500093
    MOV EBX,dword ptr [ESP + 0x40]      ; 00500096
    PUSH EBX                            ; 0050009a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050009b
    LEA ESI,[ESP + 0x28]                ; 005000a1
    LEA EDI,[ESP + 0x4]                 ; 005000a5
    CALL dword ptr [EAX + 0xe0]         ; 005000a9
    ADD ESP,0x4                         ; 005000af
    MOV EAX,ESP                         ; 005000b2
    LEA ESI,[ESP + 0x24]                ; 005000b4
    PUSH EAX                            ; 005000b8
    MOVSD ES:EDI,ESI                    ; 005000b9
    MOVSD ES:EDI,ESI                    ; 005000ba
    MOVSD ES:EDI,ESI                    ; 005000bb
    PUSH EBX                            ; 005000bc
    LEA ESI,[ESP + 0x14]                ; 005000bd
    LEA EDI,[ESP + 0x20]                ; 005000c1
    CALL core_actor.cpp_FUN_00408b40    ; 005000c5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x14]                ; 005000ca
    MOV EDX,0x1                         ; 005000ce
    LEA EAX,[ESP + 0x20]                ; 005000d3
    ADD ESP,0x8                         ; 005000d7
    MOV dword ptr [0x01cce098],EDX      ; 005000da | g_CDemonLightInstance.light_enabled_flag
    MOV dword ptr [0x01cce0a0],EDX      ; 005000e0 | g_CDemonLightInstance.volumetric_enabled
    MOVSD ES:EDI,ESI                    ; 005000e6
    MOVSD ES:EDI,ESI                    ; 005000e7
    MOVSD ES:EDI,ESI                    ; 005000e8
    CMP EAX,0x1ccc3e8                   ; 005000e9
    JZ 0x0050010b                       ; 005000ee
        ;   XREF to: 0050010b (CONDITIONAL_JUMP)  ; LAB_0050010b
    MOV EAX,dword ptr [ESP + 0x18]      ; 005000f0
    MOV [0x01ccc3e8],EAX                ; 005000f4 | g_CDemonLightInstance.base.base.position
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005000f9
    MOV [0x01ccc3ec],EAX                ; 005000fd | g_CDemonLightInstance.base.base.position+4
    MOV EAX,dword ptr [ESP + 0x20]      ; 00500102
    MOV [0x01ccc3f0],EAX                ; 00500106 | g_CDemonLightInstance.base.base.position+8
    ADD EBX,0x30                        ; 0050010b
        ;   Label: LAB_0050010b
    PUSH EBX                            ; 0050010e
    PUSH 0x1ccc3f4                      ; 0050010f | g_CDemonLightInstance.base.base.rotation_matrix.m[0].x
    MOV ESI,0x1                         ; 00500114
    MOV EBX,0x42000000                  ; 00500119
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0050011e
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00500123
    FLD float ptr [0x00603014]          ; 00500126 | DAT_00603014
    PUSH 0x3f800000                     ; 0050012c
    MOV dword ptr [0x01ccc524],EBX      ; 00500131 | g_CDemonLightInstance.base.max_distance
    PUSH 0x1ccc3e4                      ; 00500137
    FSTP float ptr [0x01ccc41c]         ; 0050013c | g_CDemonLightInstance.base.base.focal_length
    MOV dword ptr [0x01cce0b4],ESI      ; 00500142 | g_CDemonLightInstance.antialiasing_enabled
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0 ; 00500148
        ;   XREF to: 00465da0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0050014d
    ADD ESP,0x30                        ; 00500150
    POP EDI                             ; 00500153
    POP ESI                             ; 00500154
    POP EBX                             ; 00500155
    RET                                 ; 00500156

