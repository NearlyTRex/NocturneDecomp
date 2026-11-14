; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CToss_process_FUN_004b1d90(CToss *this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004b4dd0 at 004b4fe7
;
; Referenced Globals:
;   undefined4 DAT_0061c010
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 DAT_02c8af28
;   undefined4 DAT_02c8af2c
;   undefined4 DAT_02c8af30
;
; Called Functions:
;   core_box.cpp_CBox_process_FUN_0041e0d0
;   core_dirmat.cpp_FUN_0045f690
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1d90
        ;   Label: core_fire.cpp_CToss_process_FUN_004b1d90
    PUSH ESI                            ; 004b1d91
    PUSH EBP                            ; 004b1d92
    SUB ESP,0x40                        ; 004b1d93
    MOV EBX,dword ptr [ESP + 0x50]      ; 004b1d96
    FLD float ptr [EBX + 0x3dc]         ; 004b1d9a
    FLDZ                                ; 004b1da0
    FCOMPP                              ; 004b1da2
    FNSTSW AX                           ; 004b1da4
    SAHF                                ; 004b1da6
    JNC 0x004b1de1                      ; 004b1da7
        ;   XREF to: 004b1de1 (CONDITIONAL_JUMP)  ; LAB_004b1de1
    MOV EAX,[0x0061d95c]                ; 004b1da9 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x294]     ; 004b1dae | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x3c],EAX      ; 004b1db4
    FLD float ptr [EBX + 0x3dc]         ; 004b1db8
    FSUB float ptr [ESP + 0x3c]         ; 004b1dbe
    LEA EBP,[EBX + 0x180]               ; 004b1dc2
    FST float ptr [EBX + 0x3dc]         ; 004b1dc8
    FLDZ                                ; 004b1dce
    FCOMPP                              ; 004b1dd0
    FNSTSW AX                           ; 004b1dd2
    SAHF                                ; 004b1dd4
    JC 0x004b1ef0                       ; 004b1dd5
        ;   XREF to: 004b1ef0 (CONDITIONAL_JUMP)  ; LAB_004b1ef0
    MOV EAX,dword ptr [EBX]             ; 004b1ddb
    TEST EAX,EAX                        ; 004b1ddd
    JZ 0x004b1de8                       ; 004b1ddf
        ;   XREF to: 004b1de8 (CONDITIONAL_JUMP)  ; LAB_004b1de8
    ADD ESP,0x40                        ; 004b1de1
        ;   Label: LAB_004b1de1
    POP EBP                             ; 004b1de4
    POP ESI                             ; 004b1de5
    POP EBX                             ; 004b1de6
    RET                                 ; 004b1de7
    PUSH 0x40800000                     ; 004b1de8
        ;   Label: LAB_004b1de8
    PUSH 0x42c80000                     ; 004b1ded
    PUSH 0x41800000                     ; 004b1df2
    PUSH EBP                            ; 004b1df7
    MOV ECX,dword ptr [0x0061c010]      ; 004b1df8 | DAT_0061c010
    PUSH ECX                            ; 004b1dfe
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60 ; 004b1dff
        ;   XREF to: 004b6c60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    ADD ESP,0x14                        ; 004b1e04
    MOV ESI,dword ptr [EBX + 0x3e0]     ; 004b1e07
    PUSH ESI                            ; 004b1e0d
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004b1e0e
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004b1e13
    ADD ESP,0x40                        ; 004b1e16
    POP EBP                             ; 004b1e19
    POP ESI                             ; 004b1e1a
    POP EBX                             ; 004b1e1b
    RET                                 ; 004b1e1c
    PUSH EDI                            ; 004b1e1d
        ;   Label: LAB_004b1e1d
    LEA EDI,[ESP + 0x10]                ; 004b1e1e
    LEA EAX,[EBX + 0x4]                 ; 004b1e22
    MOV ESI,0x2c8af28                   ; 004b1e25
    PUSH EAX                            ; 004b1e2a
    MOVSD ES:EDI,ESI                    ; 004b1e2b | DAT_02c8af28
    MOVSD ES:EDI,ESI                    ; 004b1e2c | DAT_02c8af2c
    MOVSD ES:EDI,ESI                    ; 004b1e2d | DAT_02c8af30
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004b1e2e
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b1e33
    FLD float ptr [ESP + 0x18]          ; 004b1e36
    FADD float ptr [EAX + 0x34c]        ; 004b1e3a
    LEA EAX,[ESP + 0x10]                ; 004b1e40
    ADD EBX,0x198                       ; 004b1e44
    PUSH EAX                            ; 004b1e4a
    LEA ESI,[ESP + 0x2c]                ; 004b1e4b
    LEA EDI,[ESP + 0x38]                ; 004b1e4f
    PUSH EBX                            ; 004b1e53
    FSTP float ptr [ESP + 0x20]         ; 004b1e54
    CALL core_dirmat.cpp_FUN_0045f690   ; 004b1e58
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x30]                ; 004b1e5d
    ADD ESP,0x8                         ; 004b1e61
    LEA EBX,[ESP + 0x1c]                ; 004b1e64
    MOVSD ES:EDI,ESI                    ; 004b1e68
    MOVSD ES:EDI,ESI                    ; 004b1e69
    MOVSD ES:EDI,ESI                    ; 004b1e6a
    LEA EAX,[ESP + 0x10]                ; 004b1e6b
    FLD float ptr [EBP]                 ; 004b1e6f
    FLD float ptr [EBP + 0x4]           ; 004b1e72
    FLD float ptr [EBP + 0x8]           ; 004b1e75
    LEA EDI,[ESP + 0x1c]                ; 004b1e78
    LEA ESI,[ESP + 0x4]                 ; 004b1e7c
    FXCH ST2                            ; 004b1e80
    FADD float ptr [ESP + 0x34]         ; 004b1e82
    FXCH                                ; 004b1e86
    FADD float ptr [ESP + 0x38]         ; 004b1e88
    FXCH ST2                            ; 004b1e8c
    FADD float ptr [ESP + 0x3c]         ; 004b1e8e
    FXCH                                ; 004b1e92
    FSTP float ptr [ESP + 0x4]          ; 004b1e94
    FXCH                                ; 004b1e98
    FSTP float ptr [ESP + 0x8]          ; 004b1e9a
    FSTP float ptr [ESP + 0xc]          ; 004b1e9e
    MOVSD ES:EDI,ESI                    ; 004b1ea2
    MOVSD ES:EDI,ESI                    ; 004b1ea3
    MOVSD ES:EDI,ESI                    ; 004b1ea4
    CMP EAX,EBX                         ; 004b1ea5
    JZ 0x004b1ec1                       ; 004b1ea7
        ;   XREF to: 004b1ec1 (CONDITIONAL_JUMP)  ; LAB_004b1ec1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b1ea9
    MOV dword ptr [ESP + 0x10],EAX      ; 004b1ead
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b1eb1
    MOV dword ptr [ESP + 0x14],EAX      ; 004b1eb5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b1eb9
    MOV dword ptr [ESP + 0x18],EAX      ; 004b1ebd
    PUSH 0xffff                         ; 004b1ec1
        ;   Label: LAB_004b1ec1
    PUSH 0x0                            ; 004b1ec6
    PUSH 0x10000                        ; 004b1ec8
    PUSH 0x20000                        ; 004b1ecd
    PUSH 0x0                            ; 004b1ed2
    LEA EAX,[ESP + 0x24]                ; 004b1ed4
    PUSH EAX                            ; 004b1ed8
    MOV EDX,dword ptr [0x0061c010]      ; 004b1ed9 | DAT_0061c010
    PUSH EDX                            ; 004b1edf
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 004b1ee0
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004b1ee5
    POP EDI                             ; 004b1ee8
    ADD ESP,0x40                        ; 004b1ee9
    POP EBP                             ; 004b1eec
    POP ESI                             ; 004b1eed
    POP EBX                             ; 004b1eee
    RET                                 ; 004b1eef
    PUSH dword ptr [ESP + 0x3c]         ; 004b1ef0
        ;   Label: LAB_004b1ef0
    PUSH EBP                            ; 004b1ef4
    CALL core_box.cpp_CBox_process_FUN_0041e0d0 ; 004b1ef5
        ;   XREF to: 0041e0d0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041e0d0(CBox * this_ptr, float delta_time)
    MOV EAX,dword ptr [EBX]             ; 004b1efa
    ADD ESP,0x8                         ; 004b1efc
    TEST EAX,EAX                        ; 004b1eff
    JZ 0x004b1e1d                       ; 004b1f01
        ;   XREF to: 004b1e1d (CONDITIONAL_JUMP)  ; LAB_004b1e1d
    ADD ESP,0x40                        ; 004b1f07
    POP EBP                             ; 004b1f0a
    POP ESI                             ; 004b1f0b
    POP EBX                             ; 004b1f0c
    RET                                 ; 004b1f0d

