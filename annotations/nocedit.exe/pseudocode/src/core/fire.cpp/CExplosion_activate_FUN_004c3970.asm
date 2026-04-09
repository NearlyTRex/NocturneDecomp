; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CExplosion_activate_FUN_004c3970(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   scale
; float            Stack[0x10]:4   gore_multiplier
; Local Variables:
; CVector3f        Stack[-0x50]:12  local_50
; CVector3f[2]     Stack[-0x44]:24  local_44
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10 at 004c8c35
;
; Referenced Globals:
;   float FLOAT_00629da7 = 30
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CFireEffect g_CFireEffectInstance
;   CKeyFramedModelInstance[5] g_CFireEffectDebrisModels
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_fire.cpp_CFireEffect_createRock_FUN_004c7e60
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3970
        ;   Label: core_fire.cpp_CExplosion_activate_FUN_004c3970
    PUSH ESI                            ; 004c3971
    PUSH EDI                            ; 004c3972
    PUSH EBP                            ; 004c3973
    SUB ESP,0x40                        ; 004c3974
    MOV ESI,dword ptr [ESP + 0x54]      ; 004c3977
    MOV EAX,dword ptr [ESP + 0x58]      ; 004c397b
    CMP ESI,EAX                         ; 004c397f
    JZ 0x004c3993                       ; 004c3981
        ;   XREF to: 004c3993 (CONDITIONAL_JUMP)  ; LAB_004c3993
    MOV EDX,dword ptr [EAX]             ; 004c3983
    MOV dword ptr [ESI],EDX             ; 004c3985
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c3987
    MOV dword ptr [ESI + 0x4],EDX       ; 004c398a
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c398d
    MOV dword ptr [ESI + 0x8],EDX       ; 004c3990
    PUSH 0x40000000                     ; 004c3993
        ;   Label: LAB_004c3993
    PUSH 0x0                            ; 004c3998
    MOV EAX,dword ptr [ESP + 0x64]      ; 004c399a
    PUSH 0x0                            ; 004c399e
    MOV EDX,dword ptr [0x006810c8]      ; 004c39a0 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH 0x43480000                     ; 004c39a6
    MOV dword ptr [ESI + 0xc],0x3f800000 ; 004c39ab
    PUSH EDX                            ; 004c39b2 | g_CDemonSetInstance
    MOV dword ptr [ESI + 0x10],EAX      ; 004c39b3
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0 ; 004c39b6
        ;   XREF to: 00570fa0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 004c39bb
    LEA EDI,[ESI + 0x4]                 ; 004c39be
    PUSH 0x3f000000                     ; 004c39c1
    XOR EBX,EBX                         ; 004c39c6
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004c39c8
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004c39cd
    MOV dword ptr [ESI + 0x18],EAX      ; 004c39d0
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c39d3
    LEA EBP,[ESI + 0x8]                 ; 004c39d7
    MOV dword ptr [ESI + 0x14],EAX      ; 004c39da
    PUSH 0x3fc90fdb                     ; 004c39dd
        ;   Label: LAB_004c39dd
    PUSH 0x3f490fdb                     ; 004c39e2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c39e7
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 004c39ec
    FLD float ptr [ESP + 0x44]          ; 004c39f0
    ADD ESP,0x8                         ; 004c39f4
    PUSH 0x40c90fdb                     ; 004c39f7
    PUSH 0x0                            ; 004c39fc
    FSTP float ptr [ESP + 0x30]         ; 004c39fe
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c3a02
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 004c3a07
    FLD float ptr [ESP + 0x44]          ; 004c3a0b
    ADD ESP,0x8                         ; 004c3a0f
    FLD ST0                             ; 004c3a12
    FCOS                                ; 004c3a14
    FLD float ptr [ESP + 0x28]          ; 004c3a16
    FLD ST0                             ; 004c3a1a
    FCOS                                ; 004c3a1c
    FXCH ST3                            ; 004c3a1e
    FSIN                                ; 004c3a20
    FXCH                                ; 004c3a22
    FSIN                                ; 004c3a24
    FXCH ST2                            ; 004c3a26
    FMUL float ptr [0x00629da7]         ; 004c3a28 | FLOAT_00629da7
    FXCH                                ; 004c3a2e
    FMUL float ptr [0x00629da7]         ; 004c3a30 | FLOAT_00629da7
    FXCH ST2                            ; 004c3a36
    FMUL float ptr [0x00629da7]         ; 004c3a38 | FLOAT_00629da7
    FXCH                                ; 004c3a3e
    FMUL ST3                            ; 004c3a40
    FXCH ST2                            ; 004c3a42
    FMULP ST3                           ; 004c3a44
    FSTP float ptr [ESP + 0x4]          ; 004c3a46
    FSTP float ptr [ESP]                ; 004c3a4a
    FSTP float ptr [ESP + 0x8]          ; 004c3a4d
    MOV EAX,dword ptr [ESI]             ; 004c3a51
    MOV dword ptr [ESP + 0xc],EAX       ; 004c3a53
    MOV EAX,dword ptr [EDI]             ; 004c3a57
    MOV ECX,0x5                         ; 004c3a59
    MOV dword ptr [ESP + 0x10],EAX      ; 004c3a5e
    MOV EDX,EBX                         ; 004c3a62
    MOV EAX,dword ptr [EBP]             ; 004c3a64
    SAR EDX,0x1f                        ; 004c3a67
    MOV dword ptr [ESP + 0x14],EAX      ; 004c3a6a
    MOV EAX,EBX                         ; 004c3a6e
    IDIV ECX                            ; 004c3a70
    IMUL EDX,EDX,0x17c                  ; 004c3a72
    FLD1                                ; 004c3a78
    ADD EDX,0x2d13568                   ; 004c3a7a | g_CFireEffectDebrisModels
    FADD float ptr [ESP + 0x10]         ; 004c3a80
    PUSH EDX                            ; 004c3a84
    FSTP float ptr [ESP + 0x14]         ; 004c3a85
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004c3a89
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c3a8e
    PUSH EAX                            ; 004c3a91
    LEA EAX,[ESP + 0x4]                 ; 004c3a92
    PUSH EAX                            ; 004c3a96
    LEA EAX,[ESP + 0x14]                ; 004c3a97
    PUSH EAX                            ; 004c3a9b
    MOV ECX,dword ptr [0x0067a3d0]      ; 004c3a9c | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH ECX                            ; 004c3aa2 | g_CFireEffectInstance
    INC EBX                             ; 004c3aa3
    CALL core_fire.cpp_CFireEffect_createRock_FUN_004c7e60 ; 004c3aa4
        ;   XREF to: 004c7e60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRock_FUN_004c7e60(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 004c3aa9
    CMP EBX,0xa                         ; 004c3aac
    JL 0x004c39dd                       ; 004c3aaf
        ;   XREF to: 004c39dd (CONDITIONAL_JUMP)  ; LAB_004c39dd
    ADD ESP,0x40                        ; 004c3ab5
    POP EBP                             ; 004c3ab8
    POP EDI                             ; 004c3ab9
    POP ESI                             ; 004c3aba
    POP EBX                             ; 004c3abb
    RET                                 ; 004c3abc

