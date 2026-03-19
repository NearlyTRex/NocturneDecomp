; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_position
; CVector3i *      Stack[0xc]:4   surface_normal
; Local Variables:
; float[1012]      Stack[-0x1030]:4048  afStackY_1030
; CVector3i        Stack[-0x48]:12  local_48
; CVector3f        Stack[-0x3c]:12  local_3c
; CVector3i        Stack[-0x30]:12  local_30
; CVector3i        Stack[-0x24]:12  local_24
; int              Stack[-0x18]:4  local_18
; CDemonSet *      Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0 at 0056e045
;   core_set.cpp_CDemonSet_renderFlashlightShadow_FUN_0056c990 at 0056cbde
;   core_trigger.cpp_CTrigger_process_FUN_005dfac0 at 005dfd62
;
; Referenced Globals:
;   CDemonCamera g_CDemonCameraInstance
;   int g_DynamicLightCount
;   CDemonLight*[4] g_DynamicLights
;   undefined4 g_DynamicLights[1]
;   int g_SecondaryDirectionalLightCount
;   CDemonLight*[32] g_SecondaryDirectionalLights
;   undefined4 g_SecondaryDirectionalLights[1]
;   int g_PrimaryDirectionalLightCount
;   CDemonLight*[4] g_PrimaryDirectionalLights
;   undefined4 g_PrimaryDirectionalLights[1]
;   int g_GlobeLightCount
;   CDemonGlobe*[100] g_GlobeLights
;   undefined4 g_GlobeLights[1]
;   int g_LightingSystemDirty
;   CVector3f g_LightingReferencePosition
;   ... and 4 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
;   core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850
;   core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_00522a50
;   core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_005229b0
;   core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056db80
        ;   Label: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
    PUSH ESI                            ; 0056db81
    PUSH EDI                            ; 0056db82
    PUSH EBP                            ; 0056db83
    SUB ESP,0x38                        ; 0056db84
    MOV EBP,dword ptr [ESP + 0x54]      ; 0056db87
    MOV EDX,dword ptr [0x032c1c64]      ; 0056db8b | g_LightingSystemDirty
    TEST EDX,EDX                        ; 0056db91
    JZ 0x0056dbbd                       ; 0056db93
        ;   XREF to: 0056dbbd (CONDITIONAL_JUMP)  ; LAB_0056dbbd
    CMP EDX,0x1                         ; 0056db95
    JNZ 0x0056dd43                      ; 0056db98
        ;   XREF to: 0056dd43 (CONDITIONAL_JUMP)  ; LAB_0056dd43
    PUSH 0x0                            ; 0056db9e
    PUSH 0x0                            ; 0056dba0
    PUSH 0x0                            ; 0056dba2
    PUSH 0x0                            ; 0056dba4
    PUSH 0x0                            ; 0056dba6
    MOV ESI,dword ptr [ESP + 0x60]      ; 0056dba8
    PUSH ESI                            ; 0056dbac
    CALL core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0 ; 0056dbad
        ;   XREF to: 0056d4a0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0(CDemonSet * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * aabb_min, ...)
        ;   Label: LAB_0056dbad
    ADD ESP,0x18                        ; 0056dbb2
    XOR EDI,EDI                         ; 0056dbb5
    MOV dword ptr [0x032c1c64],EDI      ; 0056dbb7 | g_LightingSystemDirty
    MOV EAX,[0x032c1798]                ; 0056dbbd | g_PrimaryDirectionalLightCount
        ;   Label: LAB_0056dbbd
    XOR ESI,ESI                         ; 0056dbc2
    XOR EBX,EBX                         ; 0056dbc4
    TEST EAX,EAX                        ; 0056dbc6
    JLE 0x0056dc00                      ; 0056dbc8
        ;   XREF to: 0056dc00 (CONDITIONAL_JUMP)  ; LAB_0056dc00
    XOR EDI,EDI                         ; 0056dbca
    PUSH EBP                            ; 0056dbcc
        ;   Label: LAB_0056dbcc
    MOV EDX,dword ptr [EDI + 0x32c179c] ; 0056dbcd | g_PrimaryDirectionalLights | g_PrimaryDirectionalLights[1]
    PUSH EDX                            ; 0056dbd3
    MOV ECX,dword ptr [ESP + 0x58]      ; 0056dbd4
    PUSH ECX                            ; 0056dbd8
    PUSH 0x32758e4                      ; 0056dbd9 | g_CDemonCameraInstance
    ADD EDI,0x4                         ; 0056dbde
    INC ESI                             ; 0056dbe1
    CALL core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0 ; 0056dbe2
        ;   XREF to: 0044edf0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0(CDemonCamera * this_ptr, CVector3i * world_pos, CDemonLight * light_source, CVector3i * light_direction)
    ADD EBX,EAX                         ; 0056dbe7
    MOV EAX,[0x032c1798]                ; 0056dbe9 | g_PrimaryDirectionalLightCount
    ADD ESP,0x10                        ; 0056dbee
    CMP ESI,EAX                         ; 0056dbf1
    JL 0x0056dbcc                       ; 0056dbf3
        ;   XREF to: 0056dbcc (CONDITIONAL_JUMP)  ; LAB_0056dbcc
    LEA EAX,[EAX]                       ; 0056dbf5
    LEA EDX,[EDX]                       ; 0056dbfb
    MOV EBX,EBX                         ; 0056dbfe
    MOV EDX,dword ptr [0x032c1614]      ; 0056dc00 | g_SecondaryDirectionalLightCount
        ;   Label: LAB_0056dc00
    XOR EDI,EDI                         ; 0056dc06
    TEST EDX,EDX                        ; 0056dc08
    JLE 0x0056dc40                      ; 0056dc0a
        ;   XREF to: 0056dc40 (CONDITIONAL_JUMP)  ; LAB_0056dc40
    XOR ESI,ESI                         ; 0056dc0c
    PUSH EBP                            ; 0056dc0e
        ;   Label: LAB_0056dc0e
    MOV ECX,dword ptr [ESI + 0x32c1618] ; 0056dc0f | g_SecondaryDirectionalLights | g_SecondaryDirectionalLights[1]
    PUSH ECX                            ; 0056dc15
    MOV EAX,dword ptr [ESP + 0x58]      ; 0056dc16
    PUSH EAX                            ; 0056dc1a
    PUSH 0x32758e4                      ; 0056dc1b | g_CDemonCameraInstance
    ADD ESI,0x4                         ; 0056dc20
    INC EDI                             ; 0056dc23
    CALL core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0 ; 0056dc24
        ;   XREF to: 0044edf0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0(CDemonCamera * this_ptr, CVector3i * world_pos, CDemonLight * light_source, CVector3i * light_direction)
    MOV EDX,dword ptr [0x032c1614]      ; 0056dc29 | g_SecondaryDirectionalLightCount
    ADD ESP,0x10                        ; 0056dc2f
    ADD EBX,EAX                         ; 0056dc32
    CMP EDI,EDX                         ; 0056dc34
    JL 0x0056dc0e                       ; 0056dc36
        ;   XREF to: 0056dc0e (CONDITIONAL_JUMP)  ; LAB_0056dc0e
    LEA EAX,[EAX]                       ; 0056dc38
    MOV EDX,EDX                         ; 0056dc3e
    MOV ECX,dword ptr [0x032c17ac]      ; 0056dc40 | g_GlobeLightCount
        ;   Label: LAB_0056dc40
    XOR EDI,EDI                         ; 0056dc46
    TEST ECX,ECX                        ; 0056dc48
    JLE 0x0056dc80                      ; 0056dc4a
        ;   XREF to: 0056dc80 (CONDITIONAL_JUMP)  ; LAB_0056dc80
    XOR ESI,ESI                         ; 0056dc4c
    PUSH EBP                            ; 0056dc4e
        ;   Label: LAB_0056dc4e
    MOV EAX,dword ptr [ESP + 0x54]      ; 0056dc4f
    PUSH EAX                            ; 0056dc53
    MOV EDX,dword ptr [ESI + 0x32c17b0] ; 0056dc54 | g_GlobeLights | g_GlobeLights[1]
    PUSH EDX                            ; 0056dc5a
    ADD ESI,0x4                         ; 0056dc5b
    INC EDI                             ; 0056dc5e
    CALL core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850 ; 0056dc5f
        ;   XREF to: 00471850 (UNCONDITIONAL_CALL)  ; int core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850(CDemonGlobe * this_ptr, CVector3i * vertex_position, CVector3i * surface_normal)
    MOV ECX,dword ptr [0x032c17ac]      ; 0056dc64 | g_GlobeLightCount
    ADD ESP,0xc                         ; 0056dc6a
    ADD EBX,EAX                         ; 0056dc6d
    CMP EDI,ECX                         ; 0056dc6f
    JL 0x0056dc4e                       ; 0056dc71
        ;   XREF to: 0056dc4e (CONDITIONAL_JUMP)  ; LAB_0056dc4e
    LEA EAX,[EAX]                       ; 0056dc73
    LEA EDX,[EDX]                       ; 0056dc79
    NOP                                 ; 0056dc7f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0056dc80
        ;   Label: LAB_0056dc80
    XOR ESI,ESI                         ; 0056dc84
    MOV EDI,dword ptr [EAX + 0x15acb4]  ; 0056dc86
    MOV dword ptr [ESP + 0x30],ESI      ; 0056dc8c
    TEST EDI,EDI                        ; 0056dc90
    JLE 0x0056dd39                      ; 0056dc92
        ;   XREF to: 0056dd39 (CONDITIONAL_JUMP)  ; LAB_0056dd39
    MOV dword ptr [ESP + 0x34],EAX      ; 0056dc98
    MOV EAX,dword ptr [ESP + 0x34]      ; 0056dc9c
        ;   Label: LAB_0056dc9c
    MOV ESI,dword ptr [ESP + 0x50]      ; 0056dca0
    MOV EAX,dword ptr [EAX + 0x15acb8]  ; 0056dca4
    PUSH ESI                            ; 0056dcaa
    ADD EAX,0x1ec                       ; 0056dcab
    PUSH EAX                            ; 0056dcb0
    LEA ESI,[ESP + 0x14]                ; 0056dcb1
    LEA EDI,[ESP + 0x8]                 ; 0056dcb5
    CALL core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_005229b0 ; 0056dcb9
        ;   XREF to: 005229b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_005229b0(CMirrorReflection * this_ptr, CVector3f * input_vertex, CVector3f * output_vertex)
    LEA ESI,[ESP + 0x14]                ; 0056dcbe
    ADD ESP,0x8                         ; 0056dcc2
    MOVSD ES:EDI,ESI                    ; 0056dcc5
    MOVSD ES:EDI,ESI                    ; 0056dcc6
    MOVSD ES:EDI,ESI                    ; 0056dcc7
    TEST EBP,EBP                        ; 0056dcc8
    JNZ 0x0056dd66                      ; 0056dcca
        ;   XREF to: 0056dd66 (CONDITIONAL_JUMP)  ; LAB_0056dd66
    MOV EAX,[0x032776b4]                ; 0056dcd0 | g_DynamicLightCount
        ;   Label: LAB_0056dcd0
    XOR EDI,EDI                         ; 0056dcd5
    TEST EAX,EAX                        ; 0056dcd7
    JLE 0x0056dd13                      ; 0056dcd9
        ;   XREF to: 0056dd13 (CONDITIONAL_JUMP)  ; LAB_0056dd13
    XOR ESI,ESI                         ; 0056dcdb
    TEST EBP,EBP                        ; 0056dcdd
        ;   Label: LAB_0056dcdd
    JZ 0x0056dd98                       ; 0056dcdf
        ;   XREF to: 0056dd98 (CONDITIONAL_JUMP)  ; LAB_0056dd98
    LEA EAX,[ESP + 0x24]                ; 0056dce5
    PUSH EAX                            ; 0056dce9
    MOV EAX,dword ptr [ESI + 0x32776b8] ; 0056dcea | g_DynamicLights | g_DynamicLights[1]
    PUSH EAX                            ; 0056dcf0
    LEA EAX,[ESP + 0x8]                 ; 0056dcf1
        ;   Label: LAB_0056dcf1
    PUSH EAX                            ; 0056dcf5
    PUSH 0x32758e4                      ; 0056dcf6 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0 ; 0056dcfb
        ;   XREF to: 0044edf0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0(CDemonCamera * this_ptr, CVector3i * world_pos, CDemonLight * light_source, CVector3i * light_direction)
    ADD ESP,0x10                        ; 0056dd00
    ADD EBX,EAX                         ; 0056dd03
    MOV EDX,dword ptr [0x032776b4]      ; 0056dd05 | g_DynamicLightCount
    INC EDI                             ; 0056dd0b
    ADD ESI,0x4                         ; 0056dd0c
    CMP EDI,EDX                         ; 0056dd0f
    JL 0x0056dcdd                       ; 0056dd11
        ;   XREF to: 0056dcdd (CONDITIONAL_JUMP)  ; LAB_0056dcdd
    MOV EAX,dword ptr [ESP + 0x34]      ; 0056dd13
        ;   Label: LAB_0056dd13
    MOV EDX,dword ptr [ESP + 0x30]      ; 0056dd17
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0056dd1b
    ADD EAX,0x4                         ; 0056dd1f
    INC EDX                             ; 0056dd22
    MOV ECX,dword ptr [ESI + 0x15acb4]  ; 0056dd23
    MOV dword ptr [ESP + 0x34],EAX      ; 0056dd29
    MOV dword ptr [ESP + 0x30],EDX      ; 0056dd2d
    CMP EDX,ECX                         ; 0056dd31
    JL 0x0056dc9c                       ; 0056dd33
        ;   XREF to: 0056dc9c (CONDITIONAL_JUMP)  ; LAB_0056dc9c
    MOV EAX,EBX                         ; 0056dd39
        ;   Label: LAB_0056dd39
    ADD ESP,0x38                        ; 0056dd3b
    POP EBP                             ; 0056dd3e
    POP EDI                             ; 0056dd3f
    POP ESI                             ; 0056dd40
    POP EBX                             ; 0056dd41
    RET                                 ; 0056dd42
    PUSH 0x32c1c98                      ; 0056dd43 | g_LightingRotationMatrix
        ;   Label: LAB_0056dd43
    PUSH 0x32c1c8c                      ; 0056dd48 | g_LightingAABBMax
    PUSH 0x32c1c80                      ; 0056dd4d | g_LightingAABBMin
    PUSH 0x32c1c74                      ; 0056dd52 | g_LightingOrientation
    PUSH 0x32c1c68                      ; 0056dd57 | g_LightingReferencePosition
    MOV EBX,dword ptr [ESP + 0x60]      ; 0056dd5c
    PUSH EBX                            ; 0056dd60
    JMP 0x0056dbad                      ; 0056dd61
        ;   XREF to: 0056dbad (UNCONDITIONAL_JUMP)  ; LAB_0056dbad
    MOV EAX,dword ptr [ESP + 0x34]      ; 0056dd66
        ;   Label: LAB_0056dd66
    PUSH EBP                            ; 0056dd6a
    MOV EDI,dword ptr [ESP + 0x54]      ; 0056dd6b
    MOV EAX,dword ptr [EAX + 0x15acb8]  ; 0056dd6f
    PUSH EDI                            ; 0056dd75
    ADD EAX,0x1ec                       ; 0056dd76
    PUSH EAX                            ; 0056dd7b
    LEA ESI,[ESP + 0x24]                ; 0056dd7c
    LEA EDI,[ESP + 0x30]                ; 0056dd80
    CALL core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_00522a50 ; 0056dd84
        ;   XREF to: 00522a50 (UNCONDITIONAL_CALL)  ; CVector3i * core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_00522a50(CMirrorReflection * this_ptr, CVector3i * point_a, CVector3i * point_b, CVector3i * output)
    LEA ESI,[ESP + 0x24]                ; 0056dd89
    ADD ESP,0xc                         ; 0056dd8d
    MOVSD ES:EDI,ESI                    ; 0056dd90
    MOVSD ES:EDI,ESI                    ; 0056dd91
    MOVSD ES:EDI,ESI                    ; 0056dd92
    JMP 0x0056dcd0                      ; 0056dd93
        ;   XREF to: 0056dcd0 (UNCONDITIONAL_JUMP)  ; LAB_0056dcd0
    PUSH EBP                            ; 0056dd98
        ;   Label: LAB_0056dd98
    MOV ECX,dword ptr [ESI + 0x32776b8] ; 0056dd99 | g_DynamicLights[1]
    PUSH ECX                            ; 0056dd9f
    JMP 0x0056dcf1                      ; 0056dda0
        ;   XREF to: 0056dcf1 (UNCONDITIONAL_JUMP)  ; LAB_0056dcf1

