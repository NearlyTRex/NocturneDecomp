; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CToss_process_FUN_004c4000(CToss *this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c7067
;
; Referenced Globals:
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGame* g_CGamePtr = 02d81a9c
;   CFireEffect g_CFireEffectInstance
;   undefined4 g_CGameInstance.delta_time_float
;   UVector3 g_ZeroVector
;   undefined4 g_ZeroVector+4
;   undefined4 g_ZeroVector+8
;
; Called Functions:
;   core_box.cpp_CBox_process_FUN_0041e2f0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10
;   core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4000
        ;   Label: core_fire.cpp_CToss_process_FUN_004c4000
    PUSH ESI                            ; 004c4001
    SUB ESP,0x28                        ; 004c4002
    MOV EBX,dword ptr [ESP + 0x34]      ; 004c4005
    FLD float ptr [EBX + 0x3dc]         ; 004c4009
    FLDZ                                ; 004c400f
    FCOMPP                              ; 004c4011
    FNSTSW AX                           ; 004c4013
    SAHF                                ; 004c4015
    JNC 0x004c4050                      ; 004c4016
        ;   XREF to: 004c4050 (CONDITIONAL_JUMP)  ; LAB_004c4050
    MOV EAX,[0x0067b654]                ; 004c4018 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x264]     ; 004c401d | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x24],EAX      ; 004c4023
    FLD float ptr [EBX + 0x3dc]         ; 004c4027
    FSUB float ptr [ESP + 0x24]         ; 004c402d
    LEA ESI,[EBX + 0x180]               ; 004c4031
    FST float ptr [EBX + 0x3dc]         ; 004c4037
    FLDZ                                ; 004c403d
    FCOMPP                              ; 004c403f
    FNSTSW AX                           ; 004c4041
    SAHF                                ; 004c4043
    JC 0x004c413f                       ; 004c4044
        ;   XREF to: 004c413f (CONDITIONAL_JUMP)  ; LAB_004c413f
    MOV EAX,dword ptr [EBX]             ; 004c404a
    TEST EAX,EAX                        ; 004c404c
    JZ 0x004c4056                       ; 004c404e
        ;   XREF to: 004c4056 (CONDITIONAL_JUMP)  ; LAB_004c4056
    ADD ESP,0x28                        ; 004c4050
        ;   Label: LAB_004c4050
    POP ESI                             ; 004c4053
    POP EBX                             ; 004c4054
    RET                                 ; 004c4055
    PUSH 0x40800000                     ; 004c4056
        ;   Label: LAB_004c4056
    PUSH 0x42c80000                     ; 004c405b
    PUSH 0x41800000                     ; 004c4060
    PUSH ESI                            ; 004c4065
    MOV ECX,dword ptr [0x0067a3d0]      ; 004c4066 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 004c406c | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10 ; 004c406d
        ;   XREF to: 004c8c10 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10(CFireEffect * this_ptr, CVector3f * position, float scale, int damage_amount)
    ADD ESP,0x14                        ; 004c4072
    MOV ESI,dword ptr [EBX + 0x3e0]     ; 004c4075
    PUSH ESI                            ; 004c407b
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004c407c
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004c4081
    ADD ESP,0x28                        ; 004c4084
    POP ESI                             ; 004c4087
    POP EBX                             ; 004c4088
    RET                                 ; 004c4089
    MOV EAX,[0x03f87558]                ; 004c408a | g_ZeroVector
        ;   Label: LAB_004c408a
    MOV dword ptr [ESP],EAX             ; 004c408f
    MOV EAX,[0x03f8755c]                ; 004c4092 | g_ZeroVector+4
    MOV dword ptr [ESP + 0x4],EAX       ; 004c4097
    MOV EAX,[0x03f87560]                ; 004c409b | g_ZeroVector+8
    MOV dword ptr [ESP + 0x8],EAX       ; 004c40a0
    LEA EAX,[EBX + 0x4]                 ; 004c40a4
    PUSH EAX                            ; 004c40a7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004c40a8
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c40ad
    FLD float ptr [ESP + 0x8]           ; 004c40b0
    FADD float ptr [EAX + 0x568c]       ; 004c40b4
    MOV EAX,ESP                         ; 004c40ba
    PUSH EAX                            ; 004c40bc
    LEA EAX,[ESP + 0x1c]                ; 004c40bd
    PUSH EAX                            ; 004c40c1
    ADD EBX,0x198                       ; 004c40c2
    PUSH EBX                            ; 004c40c8
    FSTP float ptr [ESP + 0x14]         ; 004c40c9
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004c40cd
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 004c40d2
    FADD float ptr [EAX]                ; 004c40d4
    ADD ESP,0xc                         ; 004c40d6
    FSTP float ptr [ESP + 0xc]          ; 004c40d9
    FLD float ptr [ESI + 0x4]           ; 004c40dd
    FADD float ptr [EAX + 0x4]          ; 004c40e0
    MOV EBX,ESP                         ; 004c40e3
    FSTP float ptr [ESP + 0x10]         ; 004c40e5
    FLD float ptr [ESI + 0x8]           ; 004c40e9
    FADD float ptr [EAX + 0x8]          ; 004c40ec
    LEA EAX,[ESP + 0xc]                 ; 004c40ef
    FSTP float ptr [ESP + 0x14]         ; 004c40f3
    CMP EBX,EAX                         ; 004c40f7
    JZ 0x004c4112                       ; 004c40f9
        ;   XREF to: 004c4112 (CONDITIONAL_JUMP)  ; LAB_004c4112
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c40fb
    MOV dword ptr [ESP],EAX             ; 004c40ff
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c4102
    MOV dword ptr [ESP + 0x4],EAX       ; 004c4106
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c410a
    MOV dword ptr [ESP + 0x8],EAX       ; 004c410e
    PUSH 0xffff                         ; 004c4112
        ;   Label: LAB_004c4112
    PUSH 0x0                            ; 004c4117
    PUSH 0x10000                        ; 004c4119
    PUSH 0x20000                        ; 004c411e
    PUSH 0x0                            ; 004c4123
    LEA EAX,[ESP + 0x14]                ; 004c4125
    PUSH EAX                            ; 004c4129
    MOV EDX,dword ptr [0x0067a3d0]      ; 004c412a | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EDX                            ; 004c4130 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0 ; 004c4131
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004c4136
    ADD ESP,0x28                        ; 004c4139
    POP ESI                             ; 004c413c
    POP EBX                             ; 004c413d
    RET                                 ; 004c413e
    PUSH dword ptr [ESP + 0x24]         ; 004c413f
        ;   Label: LAB_004c413f
    PUSH ESI                            ; 004c4143
    CALL core_box.cpp_CBox_process_FUN_0041e2f0 ; 004c4144
        ;   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041e2f0(CBox * this_ptr, float delta_time)
    MOV EAX,dword ptr [EBX]             ; 004c4149
    ADD ESP,0x8                         ; 004c414b
    TEST EAX,EAX                        ; 004c414e
    JZ 0x004c408a                       ; 004c4150
        ;   XREF to: 004c408a (CONDITIONAL_JUMP)  ; LAB_004c408a
    ADD ESP,0x28                        ; 004c4156
    POP ESI                             ; 004c4159
    POP EBX                             ; 004c415a
    RET                                 ; 004c415b

