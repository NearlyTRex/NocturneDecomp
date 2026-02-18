; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flamegun_cpp_CFlameThrower_fire_FUN_004cb920(CFlameThrower *this_ptr)
;
; Parameters:
; CFlameThrower *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   float FLOAT_0065e270 = 4
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_004c8ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb920
        ;   Label: core_flamegun.cpp_CFlameThrower_fire_FUN_004cb920
    SUB ESP,0x18                        ; 004cb921
    MOV EBX,dword ptr [ESP + 0x20]      ; 004cb924
    CMP dword ptr [EBX + 0x568],0x0     ; 004cb928
    JG 0x004cb938                       ; 004cb92f
        ;   XREF to: 004cb938 (CONDITIONAL_JUMP)  ; LAB_004cb938
    XOR EAX,EAX                         ; 004cb931
    ADD ESP,0x18                        ; 004cb933
    POP EBX                             ; 004cb936
    RET                                 ; 004cb937
    PUSH ESI                            ; 004cb938
        ;   Label: LAB_004cb938
    LEA EAX,[ESP + 0x4]                 ; 004cb939
    PUSH EAX                            ; 004cb93d
    MOV EDX,dword ptr [EBX + 0x154]     ; 004cb93e
    PUSH EBX                            ; 004cb944
    CALL dword ptr [EDX + 0xf4]         ; 004cb945
    ADD ESP,0x8                         ; 004cb94b
    PUSH EAX                            ; 004cb94e
    LEA EAX,[ESP + 0x14]                ; 004cb94f
    PUSH EAX                            ; 004cb953
    PUSH EBX                            ; 004cb954
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004cb955
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004cb95a
    PUSH 0x1                            ; 004cb95d
    PUSH 0x3                            ; 004cb95f
    LEA EAX,[EBX + 0x30]                ; 004cb961
    PUSH EAX                            ; 004cb964
    LEA EAX,[ESP + 0x1c]                ; 004cb965
    PUSH EAX                            ; 004cb969
    MOV ECX,dword ptr [0x0067a3d0]      ; 004cb96a | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 004cb970 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_004c8ef0 ; 004cb971
        ;   XREF to: 004c8ef0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGunFlames_FUN_004c8ef0(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_count, ...)
    MOV ESI,dword ptr [EBX + 0x580]     ; 004cb976
    ADD ESP,0x14                        ; 004cb97c
    TEST ESI,ESI                        ; 004cb97f
    JNZ 0x004cb999                      ; 004cb981
        ;   XREF to: 004cb999 (CONDITIONAL_JUMP)  ; LAB_004cb999
    FLD float ptr [0x0065e270]          ; 004cb983 | FLOAT_0065e270
    FLD1                                ; 004cb989
    FDIVRP                              ; 004cb98b
    DEC dword ptr [EBX + 0x568]         ; 004cb98d
    FSTP float ptr [EBX + 0x584]        ; 004cb993
    MOV EAX,0x1                         ; 004cb999
        ;   Label: LAB_004cb999
    MOV dword ptr [EBX + 0x578],0x1     ; 004cb99e
    POP ESI                             ; 004cb9a8
    ADD ESP,0x18                        ; 004cb9a9
    POP EBX                             ; 004cb9ac
    RET                                 ; 004cb9ad

