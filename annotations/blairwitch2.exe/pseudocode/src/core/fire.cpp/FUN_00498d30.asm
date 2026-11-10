; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_00498d30(float *param_1,float *param_2,float param_3,float param_4)
;
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360 at 0049e385
;
; Referenced Globals:
;   undefined4 DAT_005d5516
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_fire.cpp_CFireEffect_createRock_FUN_0049d5b0
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00534800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498d30
        ;   Label: core_fire.cpp_FUN_00498d30
    PUSH ESI                            ; 00498d31
    PUSH EDI                            ; 00498d32
    PUSH EBP                            ; 00498d33
    SUB ESP,0x40                        ; 00498d34
    MOV EBP,dword ptr [ESP + 0x54]      ; 00498d37
    MOV EAX,dword ptr [ESP + 0x58]      ; 00498d3b
    CMP EBP,EAX                         ; 00498d3f
    JZ 0x00498d54                       ; 00498d41
        ;   XREF to: 00498d54 (CONDITIONAL_JUMP)  ; LAB_00498d54
    MOV EDX,dword ptr [EAX]             ; 00498d43
    MOV dword ptr [EBP],EDX             ; 00498d45
    MOV EDX,dword ptr [EAX + 0x4]       ; 00498d48
    MOV dword ptr [EBP + 0x4],EDX       ; 00498d4b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00498d4e
    MOV dword ptr [EBP + 0x8],EDX       ; 00498d51
    PUSH 0x40000000                     ; 00498d54
        ;   Label: LAB_00498d54
    PUSH 0x0                            ; 00498d59
    MOV EAX,dword ptr [ESP + 0x64]      ; 00498d5b
    PUSH 0x0                            ; 00498d5f
    MOV EDX,dword ptr [0x0061b5a8]      ; 00498d61 | g_CDemonSetPtr
    PUSH 0x43480000                     ; 00498d67
    MOV dword ptr [EBP + 0xc],0x3f800000 ; 00498d6c
    PUSH EDX                            ; 00498d73
    MOV dword ptr [EBP + 0x10],EAX      ; 00498d74
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00534800 ; 00498d77
        ;   XREF to: 00534800 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00534800(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 00498d7c
    PUSH 0x3f000000                     ; 00498d7f
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 00498d84
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 00498d89
    MOV dword ptr [EBP + 0x18],EAX      ; 00498d8c
    MOV EAX,dword ptr [ESP + 0x60]      ; 00498d8f
    XOR EBX,EBX                         ; 00498d93
    MOV dword ptr [EBP + 0x14],EAX      ; 00498d95
    PUSH 0x3fc90fdb                     ; 00498d98
        ;   Label: LAB_00498d98
    PUSH 0x3f490fdb                     ; 00498d9d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00498da2
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 00498da7
    FLD float ptr [ESP + 0x44]          ; 00498dab
    ADD ESP,0x8                         ; 00498daf
    PUSH 0x40c90fdb                     ; 00498db2
    PUSH 0x0                            ; 00498db7
    FSTP float ptr [ESP + 0x38]         ; 00498db9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00498dbd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 00498dc2
    FLD float ptr [ESP + 0x44]          ; 00498dc6
    ADD ESP,0x8                         ; 00498dca
    FLD ST0                             ; 00498dcd
    FCOS                                ; 00498dcf
    FLD float ptr [ESP + 0x30]          ; 00498dd1
    FLD ST0                             ; 00498dd5
    FCOS                                ; 00498dd7
    FXCH ST3                            ; 00498dd9
    FSIN                                ; 00498ddb
    FXCH                                ; 00498ddd
    FSIN                                ; 00498ddf
    MOV EDX,EBX                         ; 00498de1
    MOV ECX,0x5                         ; 00498de3
    SAR EDX,0x1f                        ; 00498de8
    MOV EAX,EBX                         ; 00498deb
    IDIV ECX                            ; 00498ded
    IMUL EAX,EDX,0x17c                  ; 00498def
    FXCH ST2                            ; 00498df5
    FMUL float ptr [0x005d5516]         ; 00498df7 | DAT_005d5516
    FXCH                                ; 00498dfd
    FMUL float ptr [0x005d5516]         ; 00498dff | DAT_005d5516
    FXCH ST2                            ; 00498e05
    FMUL float ptr [0x005d5516]         ; 00498e07 | DAT_005d5516
    FXCH                                ; 00498e0d
    FMUL ST3                            ; 00498e0f
    FXCH ST2                            ; 00498e11
    FMULP ST3                           ; 00498e13
    LEA EDI,[ESP + 0xc]                 ; 00498e15
    MOV ESI,EBP                         ; 00498e19
    FLD1                                ; 00498e1b
    FXCH                                ; 00498e1d
    FSTP float ptr [ESP + 0x4]          ; 00498e1f
    FXCH                                ; 00498e23
    FSTP float ptr [ESP]                ; 00498e25
    FXCH                                ; 00498e28
    FSTP float ptr [ESP + 0x8]          ; 00498e2a
    MOVSD ES:EDI,ESI                    ; 00498e2e
    MOVSD ES:EDI,ESI                    ; 00498e2f
    MOVSD ES:EDI,ESI                    ; 00498e30
    ADD EAX,0x1c3ec5c                   ; 00498e31
    FADD float ptr [ESP + 0x10]         ; 00498e36
    PUSH EAX                            ; 00498e3a
    FSTP float ptr [ESP + 0x14]         ; 00498e3b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00498e3f
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00498e44
    PUSH EAX                            ; 00498e47
    LEA EAX,[ESP + 0x4]                 ; 00498e48
    PUSH EAX                            ; 00498e4c
    LEA EAX,[ESP + 0x14]                ; 00498e4d
    PUSH EAX                            ; 00498e51
    MOV ECX,dword ptr [0x00614d30]      ; 00498e52 | DAT_00614d30
    PUSH ECX                            ; 00498e58
    INC EBX                             ; 00498e59
    CALL core_fire.cpp_CFireEffect_createRock_FUN_0049d5b0 ; 00498e5a
        ;   XREF to: 0049d5b0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRock_FUN_0049d5b0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 00498e5f
    CMP EBX,0xa                         ; 00498e62
    JL 0x00498d98                       ; 00498e65
        ;   XREF to: 00498d98 (CONDITIONAL_JUMP)  ; LAB_00498d98
    ADD ESP,0x40                        ; 00498e6b
    POP EBP                             ; 00498e6e
    POP EDI                             ; 00498e6f
    POP ESI                             ; 00498e70
    POP EBX                             ; 00498e71
    RET                                 ; 00498e72

