; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CExplosion_activate_FUN_00486e40(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   scale
; float            Stack[0x10]:4   gore_multiplier
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_FUN_0048c0d0 at 0048c0f5
;
; Referenced Globals:
;   float FLOAT_00581210 = 30
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_fire.cpp_CFireEffect_createRock_FUN_0048b320
;   core_set.cpp_CDemonSet_FUN_0050e660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486e40
        ;   Label: core_fire.cpp_CExplosion_activate_FUN_00486e40
    PUSH ESI                            ; 00486e41
    PUSH EDI                            ; 00486e42
    PUSH EBP                            ; 00486e43
    SUB ESP,0x40                        ; 00486e44
    MOV ESI,dword ptr [ESP + 0x54]      ; 00486e47
    MOV EAX,dword ptr [ESP + 0x58]      ; 00486e4b
    CMP ESI,EAX                         ; 00486e4f
    JZ 0x00486e63                       ; 00486e51
        ;   XREF to: 00486e63 (CONDITIONAL_JUMP)  ; LAB_00486e63
    MOV EDX,dword ptr [EAX]             ; 00486e53
    MOV dword ptr [ESI],EDX             ; 00486e55
    MOV EDX,dword ptr [EAX + 0x4]       ; 00486e57
    MOV dword ptr [ESI + 0x4],EDX       ; 00486e5a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00486e5d
    MOV dword ptr [ESI + 0x8],EDX       ; 00486e60
    PUSH 0x40000000                     ; 00486e63
        ;   Label: LAB_00486e63
    PUSH 0x0                            ; 00486e68
    MOV EAX,dword ptr [ESP + 0x64]      ; 00486e6a
    PUSH 0x0                            ; 00486e6e
    MOV EDX,dword ptr [0x005be368]      ; 00486e70 | g_CDemonSet_PTR_005be368
    PUSH 0x43480000                     ; 00486e76
    MOV dword ptr [ESI + 0xc],0x3f800000 ; 00486e7b
    PUSH EDX                            ; 00486e82 | g_CDemonSet_01e57284
    MOV dword ptr [ESI + 0x10],EAX      ; 00486e83
    CALL core_set.cpp_CDemonSet_FUN_0050e660 ; 00486e86
        ;   XREF to: 0050e660 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050e660(CDemonSet * this_ptr, float param_2, float param_3, float param_4, ...)
    ADD ESP,0x14                        ; 00486e8b
    LEA EDI,[ESI + 0x4]                 ; 00486e8e
    PUSH 0x3f000000                     ; 00486e91
    XOR EBX,EBX                         ; 00486e96
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00486e98
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 00486e9d
    MOV dword ptr [ESI + 0x18],EAX      ; 00486ea0
    MOV EAX,dword ptr [ESP + 0x60]      ; 00486ea3
    LEA EBP,[ESI + 0x8]                 ; 00486ea7
    MOV dword ptr [ESI + 0x14],EAX      ; 00486eaa
    PUSH 0x3fc90fdb                     ; 00486ead
        ;   Label: LAB_00486ead
    PUSH 0x3f490fdb                     ; 00486eb2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00486eb7
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 00486ebc
    FLD float ptr [ESP + 0x44]          ; 00486ec0
    ADD ESP,0x8                         ; 00486ec4
    PUSH 0x40c90fdb                     ; 00486ec7
    PUSH 0x0                            ; 00486ecc
    FSTP float ptr [ESP + 0x30]         ; 00486ece
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00486ed2
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 00486ed7
    FLD float ptr [ESP + 0x44]          ; 00486edb
    ADD ESP,0x8                         ; 00486edf
    FLD ST0                             ; 00486ee2
    FCOS                                ; 00486ee4
    FLD float ptr [ESP + 0x28]          ; 00486ee6
    FLD ST0                             ; 00486eea
    FCOS                                ; 00486eec
    FXCH ST3                            ; 00486eee
    FSIN                                ; 00486ef0
    FXCH                                ; 00486ef2
    FSIN                                ; 00486ef4
    FXCH ST2                            ; 00486ef6
    FMUL float ptr [0x00581210]         ; 00486ef8 | FLOAT_00581210
    FXCH                                ; 00486efe
    FMUL float ptr [0x00581210]         ; 00486f00 | FLOAT_00581210
    FXCH ST2                            ; 00486f06
    FMUL float ptr [0x00581210]         ; 00486f08 | FLOAT_00581210
    FXCH                                ; 00486f0e
    FMUL ST3                            ; 00486f10
    FXCH ST2                            ; 00486f12
    FMULP ST3                           ; 00486f14
    FSTP float ptr [ESP + 0x4]          ; 00486f16
    FSTP float ptr [ESP]                ; 00486f1a
    FSTP float ptr [ESP + 0x8]          ; 00486f1d
    MOV EAX,dword ptr [ESI]             ; 00486f21
    MOV dword ptr [ESP + 0xc],EAX       ; 00486f23
    MOV EAX,dword ptr [EDI]             ; 00486f27
    MOV ECX,0x5                         ; 00486f29
    MOV dword ptr [ESP + 0x10],EAX      ; 00486f2e
    MOV EDX,EBX                         ; 00486f32
    MOV EAX,dword ptr [EBP]             ; 00486f34
    SAR EDX,0x1f                        ; 00486f37
    MOV dword ptr [ESP + 0x14],EAX      ; 00486f3a
    MOV EAX,EBX                         ; 00486f3e
    IDIV ECX                            ; 00486f40
    IMUL EDX,EDX,0x17c                  ; 00486f42
    FLD1                                ; 00486f48
    ADD EDX,0x1c094bc                   ; 00486f4a
    FADD float ptr [ESP + 0x10]         ; 00486f50
    PUSH EDX                            ; 00486f54
    FSTP float ptr [ESP + 0x14]         ; 00486f55
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00486f59
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00486f5e
    PUSH EAX                            ; 00486f61
    LEA EAX,[ESP + 0x4]                 ; 00486f62
    PUSH EAX                            ; 00486f66
    LEA EAX,[ESP + 0x14]                ; 00486f67
    PUSH EAX                            ; 00486f6b
    MOV ECX,dword ptr [0x005b80f0]      ; 00486f6c | g_CFireEffect_PTR_005b80f0
    PUSH ECX                            ; 00486f72
    INC EBX                             ; 00486f73
    CALL core_fire.cpp_CFireEffect_createRock_FUN_0048b320 ; 00486f74
        ;   XREF to: 0048b320 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRock_FUN_0048b320(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 00486f79
    CMP EBX,0xa                         ; 00486f7c
    JL 0x00486ead                       ; 00486f7f
        ;   XREF to: 00486ead (CONDITIONAL_JUMP)  ; LAB_00486ead
    ADD ESP,0x40                        ; 00486f85
    POP EBP                             ; 00486f88
    POP EDI                             ; 00486f89
    POP ESI                             ; 00486f8a
    POP EBX                             ; 00486f8b
    RET                                 ; 00486f8c

