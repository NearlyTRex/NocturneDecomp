; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_explode_FUN_0042b930(CCharacter *this_ptr,CVector3f *impact_point,float impact_force)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   impact_point
; float            Stack[0xc]:4   impact_force
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 at 0042c421
;
; Referenced Globals:
;   float FLOAT_00617156 = 0.5
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b930
        ;   Label: core_charactr.cpp_CCharacter_explode_FUN_0042b930
    SUB ESP,0x3c                        ; 0042b931
    MOV EBX,dword ptr [ESP + 0x44]      ; 0042b934
    MOV EDX,ESP                         ; 0042b938
    PUSH EDX                            ; 0042b93a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b93b
    PUSH EBX                            ; 0042b941
    CALL dword ptr [EAX + 0x14]         ; 0042b942
    LEA EDX,[EAX + 0xc]                 ; 0042b945
    FLD float ptr [EAX]                 ; 0042b948
    FADD float ptr [EDX]                ; 0042b94a
    ADD ESP,0x8                         ; 0042b94c
    FST float ptr [ESP + 0x30]          ; 0042b94f
    FLD float ptr [EAX + 0x4]           ; 0042b953
    FADD float ptr [EDX + 0x4]          ; 0042b956
    FXCH                                ; 0042b959
    FLD float ptr [0x00617156]          ; 0042b95b | FLOAT_00617156
    FXCH                                ; 0042b961
    FMUL ST1                            ; 0042b963
    FXCH ST2                            ; 0042b965
    FST float ptr [ESP + 0x34]          ; 0042b967
    FMUL ST1                            ; 0042b96b
    FLD float ptr [EAX + 0x8]           ; 0042b96d
    FADD float ptr [EDX + 0x8]          ; 0042b970
    LEA EAX,[ESP + 0x18]                ; 0042b973
    FST float ptr [ESP + 0x38]          ; 0042b977
    FMULP ST2                           ; 0042b97b
    PUSH EAX                            ; 0042b97d
    LEA EAX,[ESP + 0x28]                ; 0042b97e
    FXCH ST2                            ; 0042b982
    FSTP float ptr [ESP + 0x1c]         ; 0042b984
    PUSH EAX                            ; 0042b988
    FXCH                                ; 0042b989
    FSTP float ptr [ESP + 0x24]         ; 0042b98b
    PUSH EBX                            ; 0042b98f
    FSTP float ptr [ESP + 0x2c]         ; 0042b990
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042b994
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042b999
    PUSH 0x40800000                     ; 0042b99c
    PUSH 0x44bb8000                     ; 0042b9a1
    LEA EAX,[ESP + 0x2c]                ; 0042b9a6
    PUSH 0x40000000                     ; 0042b9aa
    PUSH EAX                            ; 0042b9af
    MOV EDX,dword ptr [0x0067a3d0]      ; 0042b9b0 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EDX                            ; 0042b9b6 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10 ; 0042b9b7
        ;   XREF to: 004c8c10 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    ADD ESP,0x14                        ; 0042b9bc
    PUSH 0x0                            ; 0042b9bf
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0042b9c1
    PUSH dword ptr [ESP + 0x50]         ; 0042b9c5
    PUSH ECX                            ; 0042b9c9
    PUSH EBX                            ; 0042b9ca
    CALL core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0 ; 0042b9cb
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 0042b9d0
    ADD ESP,0x3c                        ; 0042b9d3
    POP EBX                             ; 0042b9d6
    RET                                 ; 0042b9d7

