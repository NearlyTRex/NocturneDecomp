; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004b1c50(int *param_1,int param_2,CVector3f *param_3,CVector3f *param_4,CVector3f *param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_allocateToss_FUN_004b6ed0 at 004b6efe
;
; Referenced Globals:
;   undefined4 s_dynamitestick_kfm_005df389+3
;   TerminatedCString s_core_fire_cpp_005df39e
;   TerminatedCString s_CToss_create_invalid_tos_005df3af
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_box.cpp_CBox_setupCorners_FUN_0041dac0
;   core_box.cpp_CBox_setupVelocities_FUN_00420450
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1c50
        ;   Label: core_fire.cpp_FUN_004b1c50
    PUSH ESI                            ; 004b1c51
    PUSH EDI                            ; 004b1c52
    PUSH EBP                            ; 004b1c53
    SUB ESP,0x28                        ; 004b1c54
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004b1c57
    MOV EAX,dword ptr [ESP + 0x40]      ; 004b1c5b
    MOV dword ptr [EBX],EAX             ; 004b1c5f
    MOV EAX,dword ptr [ESP + 0x50]      ; 004b1c61
    MOV dword ptr [EBX + 0x3dc],EAX     ; 004b1c65
    MOV EAX,dword ptr [EBX]             ; 004b1c6b
    MOV dword ptr [EBX + 0x3e0],0x0     ; 004b1c6d
    TEST EAX,EAX                        ; 004b1c77
    JZ 0x004b1d62                       ; 004b1c79
        ;   XREF to: 004b1d62 (CONDITIONAL_JUMP)  ; LAB_004b1d62
    MOV EDX,0x5df39e                    ; 004b1c7f | = "..\\core\\fire.cpp"
    MOV ECX,0xd76                       ; 004b1c84
    PUSH 0x5df3af                       ; 004b1c89 | = "CToss::create - invalid toss type."
    MOV dword ptr [0x01d1d400],EDX      ; 004b1c8e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004b1c94 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004b1c9a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004b1c9f
    FLD float ptr [EBX + 0x3dc]         ; 004b1ca2
        ;   Label: LAB_004b1ca2
    FLDZ                                ; 004b1ca8
    FCOMPP                              ; 004b1caa
    FNSTSW AX                           ; 004b1cac
    SAHF                                ; 004b1cae
    JC 0x004b1cbb                       ; 004b1caf
        ;   XREF to: 004b1cbb (CONDITIONAL_JUMP)  ; LAB_004b1cbb
    MOV dword ptr [EBX + 0x3dc],0x40a00000 ; 004b1cb1
    LEA ESI,[EBX + 0x4]                 ; 004b1cbb
        ;   Label: LAB_004b1cbb
    PUSH ESI                            ; 004b1cbe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004b1cbf
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b1cc4
    PUSH ESI                            ; 004b1cc7
    LEA EDI,[ESP + 0x10]                ; 004b1cc8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004b1ccc
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    LEA ESI,[ESP + 0x4]                 ; 004b1cd1
    ADD ESP,0x4                         ; 004b1cd5
    MOV EDX,EAX                         ; 004b1cd8
    PUSH dword ptr [ESP + 0x24]         ; 004b1cda
    FLD float ptr [EDX + 0x344]         ; 004b1cde
    FLD float ptr [EDX + 0x348]         ; 004b1ce4
    ADD EAX,0x338                       ; 004b1cea
    FLD float ptr [EDX + 0x34c]         ; 004b1cef
    FXCH ST2                            ; 004b1cf5
    FSUB float ptr [EAX]                ; 004b1cf7
    FXCH                                ; 004b1cf9
    FSUB float ptr [EAX + 0x4]          ; 004b1cfb
    FXCH ST2                            ; 004b1cfe
    FSUB float ptr [EAX + 0x8]          ; 004b1d00
    FXCH                                ; 004b1d03
    FSTP float ptr [ESP + 0x4]          ; 004b1d05
    FXCH                                ; 004b1d09
    FSTP float ptr [ESP + 0x8]          ; 004b1d0b
    FSTP float ptr [ESP + 0xc]          ; 004b1d0f
    LEA EAX,[ESP + 0x10]                ; 004b1d13
    MOVSD ES:EDI,ESI                    ; 004b1d17
    MOVSD ES:EDI,ESI                    ; 004b1d18
    MOVSD ES:EDI,ESI                    ; 004b1d19
    PUSH EAX                            ; 004b1d1a
    MOV EDI,dword ptr [ESP + 0x50]      ; 004b1d1b
    PUSH EDI                            ; 004b1d1f
    MOV EBP,dword ptr [ESP + 0x50]      ; 004b1d20
    PUSH EBP                            ; 004b1d24
    ADD EBX,0x180                       ; 004b1d25
    PUSH EBX                            ; 004b1d2b
    CALL core_box.cpp_CBox_setupCorners_FUN_0041dac0 ; 004b1d2c
        ;   XREF to: 0041dac0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041dac0(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 004b1d31
    XOR EAX,EAX                         ; 004b1d34
    MOV dword ptr [ESP + 0x20],EAX      ; 004b1d36
    MOV dword ptr [ESP + 0x1c],EAX      ; 004b1d3a
    LEA EAX,[ESP + 0x18]                ; 004b1d3e
    PUSH EAX                            ; 004b1d42
    MOV ESI,dword ptr [ESP + 0x50]      ; 004b1d43
    PUSH ESI                            ; 004b1d47
    MOV ECX,0x4116cbe4                  ; 004b1d48
    PUSH EBX                            ; 004b1d4d
    MOV dword ptr [ESP + 0x24],ECX      ; 004b1d4e
    CALL core_box.cpp_CBox_setupVelocities_FUN_00420450 ; 004b1d52
        ;   XREF to: 00420450 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupVelocities_FUN_00420450(CBox * this_ptr, CVector3f * linear_velocity, CVector3f * angular_velocity)
    ADD ESP,0xc                         ; 004b1d57
    ADD ESP,0x28                        ; 004b1d5a
    POP EBP                             ; 004b1d5d
    POP EDI                             ; 004b1d5e
    POP ESI                             ; 004b1d5f
    POP EBX                             ; 004b1d60
    RET                                 ; 004b1d61
    PUSH 0x5df38c                       ; 004b1d62 | s_dynamitestick_kfm_005df389+3
        ;   Label: LAB_004b1d62
    LEA EAX,[EBX + 0x4]                 ; 004b1d67
    PUSH EAX                            ; 004b1d6a
    MOV ESI,0x3f800000                  ; 004b1d6b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004b1d70
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b1d75
    MOV dword ptr [ESP + 0x24],ESI      ; 004b1d78
    JMP 0x004b1ca2                      ; 004b1d7c
        ;   XREF to: 004b1ca2 (UNCONDITIONAL_JUMP)  ; LAB_004b1ca2

