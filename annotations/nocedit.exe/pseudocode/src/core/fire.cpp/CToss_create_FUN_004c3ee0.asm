; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CToss_create_FUN_004c3ee0(CToss * this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_FUN_004c8e40 at 004c8e6e
;
; Referenced Globals:
;   TerminatedCString s_dynamitestick_kfm_00629ddb
;   TerminatedCString s_core_fire_cpp_00629ded
;   TerminatedCString s_CToss_create_invalid_tos_00629dfe
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_box.cpp_CBox_setupCorners_FUN_0041dd20
;   core_box.cpp_CBox_setupVelocities_FUN_00420180
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3ee0
        ;   Label: core_fire.cpp_CToss_create_FUN_004c3ee0
    PUSH ESI                            ; 004c3ee1
    PUSH EDI                            ; 004c3ee2
    PUSH EBP                            ; 004c3ee3
    SUB ESP,0x1c                        ; 004c3ee4
    MOV EBX,dword ptr [ESP + 0x30]      ; 004c3ee7
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c3eeb
    MOV dword ptr [EBX],EAX             ; 004c3eef
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c3ef1
    MOV dword ptr [EBX + 0x3dc],EAX     ; 004c3ef5
    MOV EAX,dword ptr [EBX]             ; 004c3efb
    MOV dword ptr [EBX + 0x3e0],0x0     ; 004c3efd
    TEST EAX,EAX                        ; 004c3f07
    JZ 0x004c3fe1                       ; 004c3f09
        ;   XREF to: 004c3fe1 (CONDITIONAL_JUMP)  ; LAB_004c3fe1
    MOV EDX,0x629ded                    ; 004c3f0f | = "..\\core\\fire.cpp"
    MOV ECX,0xba2                       ; 004c3f14
    PUSH 0x629dfe                       ; 004c3f19 | = "CToss::create - invalid toss type."
    MOV dword ptr [0x02f0ca48],EDX      ; 004c3f1e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004c3f24 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004c3f2a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004c3f2f
    FLD float ptr [EBX + 0x3dc]         ; 004c3f32
        ;   Label: LAB_004c3f32
    FLDZ                                ; 004c3f38
    FCOMPP                              ; 004c3f3a
    FNSTSW AX                           ; 004c3f3c
    SAHF                                ; 004c3f3e
    JC 0x004c3f4b                       ; 004c3f3f
        ;   XREF to: 004c3f4b (CONDITIONAL_JUMP)  ; LAB_004c3f4b
    MOV dword ptr [EBX + 0x3dc],0x40a00000 ; 004c3f41
    LEA ESI,[EBX + 0x4]                 ; 004c3f4b
        ;   Label: LAB_004c3f4b
    PUSH ESI                            ; 004c3f4e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004c3f4f
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c3f54
    PUSH ESI                            ; 004c3f57
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004c3f58
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,EAX                         ; 004c3f5d
    FLD float ptr [EDX + 0x5684]        ; 004c3f5f
    FSUB float ptr [EAX + 0x5678]       ; 004c3f65
    ADD ESP,0x4                         ; 004c3f6b
    FSTP float ptr [ESP]                ; 004c3f6e
    FLD float ptr [EDX + 0x5688]        ; 004c3f71
    FSUB float ptr [EAX + 0x567c]       ; 004c3f77
    ADD EAX,0x5678                      ; 004c3f7d
    FSTP float ptr [ESP + 0x4]          ; 004c3f82
    FLD float ptr [EDX + 0x568c]        ; 004c3f86
    FSUB float ptr [EAX + 0x8]          ; 004c3f8c
    MOV EAX,ESP                         ; 004c3f8f
    PUSH dword ptr [ESP + 0x18]         ; 004c3f91
    PUSH EAX                            ; 004c3f95
    MOV EDI,dword ptr [ESP + 0x44]      ; 004c3f96
    PUSH EDI                            ; 004c3f9a
    MOV EBP,dword ptr [ESP + 0x44]      ; 004c3f9b
    PUSH EBP                            ; 004c3f9f
    ADD EBX,0x180                       ; 004c3fa0
    PUSH EBX                            ; 004c3fa6
    FSTP float ptr [ESP + 0x1c]         ; 004c3fa7
    CALL core_box.cpp_CBox_setupCorners_FUN_0041dd20 ; 004c3fab
        ;   XREF to: 0041dd20 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041dd20(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 004c3fb0
    XOR EAX,EAX                         ; 004c3fb3
    MOV dword ptr [ESP + 0x14],EAX      ; 004c3fb5
    MOV dword ptr [ESP + 0x10],EAX      ; 004c3fb9
    LEA EAX,[ESP + 0xc]                 ; 004c3fbd
    PUSH EAX                            ; 004c3fc1
    MOV ESI,dword ptr [ESP + 0x44]      ; 004c3fc2
    PUSH ESI                            ; 004c3fc6
    MOV ECX,0x4116cbe4                  ; 004c3fc7
    PUSH EBX                            ; 004c3fcc
    MOV dword ptr [ESP + 0x18],ECX      ; 004c3fcd
    CALL core_box.cpp_CBox_setupVelocities_FUN_00420180 ; 004c3fd1
        ;   XREF to: 00420180 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupVelocities_FUN_00420180(CBox * this_ptr, CVector3f * linear_velocity, CVector3f * angular_velocity)
    ADD ESP,0xc                         ; 004c3fd6
    ADD ESP,0x1c                        ; 004c3fd9
    POP EBP                             ; 004c3fdc
    POP EDI                             ; 004c3fdd
    POP ESI                             ; 004c3fde
    POP EBX                             ; 004c3fdf
    RET                                 ; 004c3fe0
    PUSH 0x629ddb                       ; 004c3fe1 | = "dynamitestick.kfm"
        ;   Label: LAB_004c3fe1
    LEA EAX,[EBX + 0x4]                 ; 004c3fe6
    PUSH EAX                            ; 004c3fe9
    MOV ESI,0x3f800000                  ; 004c3fea
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004c3fef
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c3ff4
    MOV dword ptr [ESP + 0x18],ESI      ; 004c3ff7
    JMP 0x004c3f32                      ; 004c3ffb
        ;   XREF to: 004c3f32 (UNCONDITIONAL_JUMP)  ; LAB_004c3f32

