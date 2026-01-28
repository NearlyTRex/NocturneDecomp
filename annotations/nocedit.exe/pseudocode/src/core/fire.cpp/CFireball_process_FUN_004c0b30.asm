; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CFireball_process_FUN_004c0b30(CFireball *this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   int g_GlobalDeltaTimeInt
;   CFireEffect g_CFireEffectInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.damage_listener_count
;   undefined4 g_CDemonSetInstance.damage_listeners
;
; Called Functions:
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
;   core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
;   core_fire.cpp_CFireEffect_FUN_004c79d0
;   core_particle.cpp_CParticle_process_FUN_00545760
;   core_set.cpp_CDemonSet_FUN_0056d110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0b30
        ;   Label: core_fire.cpp_CFireball_process_FUN_004c0b30
    PUSH ESI                            ; 004c0b31
    PUSH EDI                            ; 004c0b32
    PUSH EBP                            ; 004c0b33
    SUB ESP,0x44                        ; 004c0b34
    MOV EBP,dword ptr [ESP + 0x58]      ; 004c0b37
    MOV EDX,dword ptr [EBP + 0x40]      ; 004c0b3b
    TEST EDX,EDX                        ; 004c0b3e
    JNZ 0x004c0ce5                      ; 004c0b40
        ;   XREF to: 004c0ce5 (CONDITIONAL_JUMP)  ; LAB_004c0ce5
    MOV dword ptr [EBP + 0x40],0x1      ; 004c0b46
    MOV dword ptr [EBP + 0x48],EDX      ; 004c0b4d
    PUSH EBP                            ; 004c0b50
        ;   Label: LAB_004c0b50
    CALL core_particle.cpp_CParticle_process_FUN_00545760 ; 004c0b51
        ;   XREF to: 00545760 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_process_FUN_00545760(CParticle * this_ptr)
    MOV EAX,[0x02cf6a80]                ; 004c0b56 | g_GlobalDeltaTimeInt
    MOV EDX,EAX                         ; 004c0b5b
    SAR EDX,0x1f                        ; 004c0b5d
    SHL EDX,0x2                         ; 004c0b60
    SBB EAX,EDX                         ; 004c0b63
    SAR EAX,0x2                         ; 004c0b65
    MOV ESI,dword ptr [EBP + 0x4c]      ; 004c0b68
    ADD ESI,EAX                         ; 004c0b6b
    MOV EAX,[0x02cf6a80]                ; 004c0b6d | g_GlobalDeltaTimeInt
    MOV EDX,EAX                         ; 004c0b72
    SAR EDX,0x1f                        ; 004c0b74
    SUB EAX,EDX                         ; 004c0b77
    SAR EAX,0x1                         ; 004c0b79
    ADD ESP,0x4                         ; 004c0b7b
    MOV EDI,dword ptr [EBP + 0x50]      ; 004c0b7e
    MOV dword ptr [EBP + 0x4c],ESI      ; 004c0b81
    ADD EDI,EAX                         ; 004c0b84
    MOV EAX,dword ptr [EBP + 0x44]      ; 004c0b86
    MOV dword ptr [EBP + 0x50],EDI      ; 004c0b89
    TEST EAX,EAX                        ; 004c0b8c
    JNZ 0x004c0cb2                      ; 004c0b8e
        ;   XREF to: 004c0cb2 (CONDITIONAL_JUMP)  ; LAB_004c0cb2
    PUSH EBP                            ; 004c0b94
    LEA EBX,[EBP + 0x5c]                ; 004c0b95
    PUSH EBX                            ; 004c0b98
    CALL core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310 ; 004c0b99
        ;   XREF to: 00471310 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe * this_ptr, CColor3f * color)
    MOV EDX,dword ptr [EBP + 0x38]      ; 004c0b9e
    MOV EAX,EDX                         ; 004c0ba1
    MOV dword ptr [EBX + 0x3c],EDX      ; 004c0ba3
    SAR EDX,0x1f                        ; 004c0ba6
    SHL EDX,0x8                         ; 004c0ba9
    SBB EAX,EDX                         ; 004c0bac
    SAR EAX,0x8                         ; 004c0bae
    MOV EDX,EAX                         ; 004c0bb1
    SAR EDX,0x1f                        ; 004c0bb3
    SHL EDX,0x2                         ; 004c0bb6
    SBB EAX,EDX                         ; 004c0bb9
    SAR EAX,0x2                         ; 004c0bbb
    ADD ESP,0x8                         ; 004c0bbe
    PUSH 0x41000000                     ; 004c0bc1
    PUSH EBX                            ; 004c0bc6
    MOV byte ptr [EBX + 0x1c],AL        ; 004c0bc7
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360 ; 004c0bca
        ;   XREF to: 00471360 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 004c0bcf
    PUSH EBX                            ; 004c0bd2
    MOV EDX,dword ptr [0x006810c8]      ; 004c0bd3 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004c0bd9 | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x20],0x0      ; 004c0bda
    CALL core_set.cpp_CDemonSet_FUN_0056d110 ; 004c0be1
        ;   XREF to: 0056d110 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d110(CDemonSet * this_ptr)
    MOV EAX,[0x02cf6a80]                ; 004c0be6 | g_GlobalDeltaTimeInt
    MOV ECX,dword ptr [EBP + 0x48]      ; 004c0beb
    ADD ECX,EAX                         ; 004c0bee
    ADD ESP,0x8                         ; 004c0bf0
    MOV dword ptr [EBP + 0x48],ECX      ; 004c0bf3
    CMP ECX,0x1000                      ; 004c0bf6
    JLE 0x004c0cb2                      ; 004c0bfc
        ;   XREF to: 004c0cb2 (CONDITIONAL_JUMP)  ; LAB_004c0cb2
    PUSH 0xffff                         ; 004c0c02
    PUSH 0x0                            ; 004c0c07
    PUSH 0x40000000                     ; 004c0c09
    PUSH EBP                            ; 004c0c0e
    MOV ESI,dword ptr [0x0067a3d0]      ; 004c0c0f | g_CFireEffectPtr
    LEA EDI,[ECX + 0xfffff000]          ; 004c0c15
    PUSH ESI                            ; 004c0c1b | g_CFireEffectInstance
    MOV dword ptr [EBP + 0x48],EDI      ; 004c0c1c
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 004c0c1f
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004c0c24
    PUSH 0xffff                         ; 004c0c27
    PUSH 0x0                            ; 004c0c2c
    PUSH 0x10000                        ; 004c0c2e
    PUSH 0x20000                        ; 004c0c33
    PUSH 0x0                            ; 004c0c38
    PUSH EBP                            ; 004c0c3a
    MOV EAX,[0x0067a3d0]                ; 004c0c3b | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EAX                            ; 004c0c40 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 004c0c41
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 004c0c46
    PUSH 0xffff                         ; 004c0c49
    PUSH 0x0                            ; 004c0c4e
    PUSH 0x10000                        ; 004c0c50
    PUSH 0x20000                        ; 004c0c55
    PUSH 0x0                            ; 004c0c5a
    PUSH EBP                            ; 004c0c5c
    MOV EDX,dword ptr [0x0067a3d0]      ; 004c0c5d | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EDX                            ; 004c0c63 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 004c0c64
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 004c0c69
    PUSH 0xffff                         ; 004c0c6c
    PUSH 0x0                            ; 004c0c71
    PUSH 0x10000                        ; 004c0c73
    PUSH 0x20000                        ; 004c0c78
    PUSH 0x0                            ; 004c0c7d
    PUSH EBP                            ; 004c0c7f
    MOV ECX,dword ptr [0x0067a3d0]      ; 004c0c80 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 004c0c86 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 004c0c87
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 004c0c8c
    PUSH 0xffff                         ; 004c0c8f
    PUSH 0x0                            ; 004c0c94
    PUSH 0x10000                        ; 004c0c96
    PUSH 0x20000                        ; 004c0c9b
    PUSH 0x0                            ; 004c0ca0
    PUSH EBP                            ; 004c0ca2
    MOV EBX,dword ptr [0x0067a3d0]      ; 004c0ca3 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EBX                            ; 004c0ca9 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 004c0caa
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 004c0caf
    MOV ESI,dword ptr [EBP + 0x44]      ; 004c0cb2
        ;   Label: LAB_004c0cb2
    TEST ESI,ESI                        ; 004c0cb5
    JNZ 0x004c0d17                      ; 004c0cb7
        ;   XREF to: 004c0d17 (CONDITIONAL_JUMP)  ; LAB_004c0d17
    MOV EDI,0x41a00000                  ; 004c0cb9
    MOV ESI,0x40800000                  ; 004c0cbe
    MOV dword ptr [ESP + 0x3c],EDI      ; 004c0cc3
    MOV dword ptr [ESP + 0x40],ESI      ; 004c0cc7
    XOR ESI,ESI                         ; 004c0ccb
        ;   Label: LAB_004c0ccb
    XOR EBX,EBX                         ; 004c0ccd
    MOV EDI,dword ptr [0x006810c8]      ; 004c0ccf | g_CDemonSetPtr
        ;   Label: LAB_004c0ccf
    CMP EBX,dword ptr [EDI + 0x14f098]  ; 004c0cd5 | g_CDemonSetInstance.damage_listener_count
    JL 0x004c0d44                       ; 004c0cdb
        ;   XREF to: 004c0d44 (CONDITIONAL_JUMP)  ; LAB_004c0d44
    ADD ESP,0x44                        ; 004c0cdd
    POP EBP                             ; 004c0ce0
    POP EDI                             ; 004c0ce1
    POP ESI                             ; 004c0ce2
    POP EBX                             ; 004c0ce3
    RET                                 ; 004c0ce4
    MOV EDX,dword ptr [0x02cf6a80]      ; 004c0ce5 | g_GlobalDeltaTimeInt
        ;   Label: LAB_004c0ce5
    MOV EAX,dword ptr [EBP + 0x3c]      ; 004c0ceb
    IMUL EDX                            ; 004c0cee
    SHRD EAX,EDX,0x10                   ; 004c0cf0
    MOV ECX,dword ptr [EBP + 0x38]      ; 004c0cf4
    SUB ECX,EAX                         ; 004c0cf7
    MOV dword ptr [EBP + 0x38],ECX      ; 004c0cf9
    TEST ECX,ECX                        ; 004c0cfc
    JGE 0x004c0b50                      ; 004c0cfe
        ;   XREF to: 004c0b50 (CONDITIONAL_JUMP)  ; LAB_004c0b50
    MOV dword ptr [EBP + 0x18],0x0      ; 004c0d04
    MOV dword ptr [EBP + 0x38],0x0      ; 004c0d0b
    JMP 0x004c0b50                      ; 004c0d12
        ;   XREF to: 004c0b50 (UNCONDITIONAL_JUMP)  ; LAB_004c0b50
    CMP ESI,0x2                         ; 004c0d17
        ;   Label: LAB_004c0d17
    JNZ 0x004c0d30                      ; 004c0d1a
        ;   XREF to: 004c0d30 (CONDITIONAL_JUMP)  ; LAB_004c0d30
    MOV EBX,0x40a00000                  ; 004c0d1c
    MOV ECX,0x3f800000                  ; 004c0d21
    MOV dword ptr [ESP + 0x3c],EBX      ; 004c0d26
    MOV dword ptr [ESP + 0x40],ECX      ; 004c0d2a
    JMP 0x004c0ccb                      ; 004c0d2e
        ;   XREF to: 004c0ccb (UNCONDITIONAL_JUMP)  ; LAB_004c0ccb
    MOV EDX,0x40a00000                  ; 004c0d30
        ;   Label: LAB_004c0d30
    MOV EAX,0x3f800000                  ; 004c0d35
    MOV dword ptr [ESP + 0x3c],EDX      ; 004c0d3a
    MOV dword ptr [ESP + 0x40],EAX      ; 004c0d3e
    JMP 0x004c0ccb                      ; 004c0d42
        ;   XREF to: 004c0ccb (UNCONDITIONAL_JUMP)  ; LAB_004c0ccb
    MOV EAX,ESP                         ; 004c0d44
        ;   Label: LAB_004c0d44
    PUSH EAX                            ; 004c0d46
    MOV EDI,dword ptr [EDI + ESI*0x1 + 0x14f09c] ; 004c0d47 | g_CDemonSetInstance.damage_listeners
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004c0d4e
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004c0d53
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c0d56
    MOV dword ptr [ESP + 0x4],EAX       ; 004c0d5a
    MOV EAX,ESP                         ; 004c0d5e
    PUSH EAX                            ; 004c0d60
    PUSH dword ptr [ESP + 0x44]         ; 004c0d61
    PUSH EBP                            ; 004c0d65
    MOV EDX,dword ptr [EDI + 0x154]     ; 004c0d66
    PUSH EDI                            ; 004c0d6c
    ADD ESI,0x4                         ; 004c0d6d
    INC EBX                             ; 004c0d70
    CALL dword ptr [EDX + 0x114]        ; 004c0d71
    ADD ESP,0x10                        ; 004c0d77
    JMP 0x004c0ccf                      ; 004c0d7a
        ;   XREF to: 004c0ccf (UNCONDITIONAL_JUMP)  ; LAB_004c0ccf

