; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flamegun_cpp_CFlameThrower_fire_FUN_0048ea60(CFlameThrower *this_ptr)
;
; Parameters:
; CFlameThrower *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   float FLOAT_0059d7a0 = 4
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   CForceFeedback* g_CForceFeedback_PTR_005b9284 = 01c70f74
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_0048c3c0
;   engine_force.cpp_CForceFeedback_processEvent_FUN_004940d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ea60
        ;   Label: core_flamegun.cpp_CFlameThrower_fire_FUN_0048ea60
    PUSH EBP                            ; 0048ea61
    SUB ESP,0x18                        ; 0048ea62
    MOV EBX,dword ptr [ESP + 0x24]      ; 0048ea65
    CMP dword ptr [EBX + 0x560],0x0     ; 0048ea69
    JG 0x0048ea7a                       ; 0048ea70
        ;   XREF to: 0048ea7a (CONDITIONAL_JUMP)  ; LAB_0048ea7a
    XOR EAX,EAX                         ; 0048ea72
    ADD ESP,0x18                        ; 0048ea74
    POP EBP                             ; 0048ea77
    POP EBX                             ; 0048ea78
    RET                                 ; 0048ea79
    PUSH ESI                            ; 0048ea7a
        ;   Label: LAB_0048ea7a
    LEA EAX,[ESP + 0x4]                 ; 0048ea7b
    PUSH EAX                            ; 0048ea7f
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0048ea80
    PUSH EBX                            ; 0048ea86
    CALL dword ptr [EDX + 0xd8]         ; 0048ea87
    ADD ESP,0x8                         ; 0048ea8d
    PUSH EAX                            ; 0048ea90
    LEA EAX,[ESP + 0x14]                ; 0048ea91
    PUSH EAX                            ; 0048ea95
    PUSH EBX                            ; 0048ea96
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0048ea97
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0048ea9c
    PUSH 0x1                            ; 0048ea9f
    PUSH 0x3                            ; 0048eaa1
    LEA EAX,[EBX + 0x30]                ; 0048eaa3
    PUSH EAX                            ; 0048eaa6
    LEA EAX,[ESP + 0x1c]                ; 0048eaa7
    PUSH EAX                            ; 0048eaab
    MOV ECX,dword ptr [0x005b80f0]      ; 0048eaac | g_CFireEffect_PTR_005b80f0
    PUSH ECX                            ; 0048eab2
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_0048c3c0 ; 0048eab3
        ;   XREF to: 0048c3c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGunFlames_FUN_0048c3c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_count, ...)
    MOV ESI,dword ptr [EBX + 0x578]     ; 0048eab8
    ADD ESP,0x14                        ; 0048eabe
    TEST ESI,ESI                        ; 0048eac1
    JZ 0x0048eb0a                       ; 0048eac3
        ;   XREF to: 0048eb0a (CONDITIONAL_JUMP)  ; LAB_0048eb0a
    PUSH EBX                            ; 0048eac5
        ;   Label: LAB_0048eac5
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0048eac6
    CALL dword ptr [EAX + 0x8c]         ; 0048eacc
    MOV EDX,dword ptr [0x01cae0e8]      ; 0048ead2 | g_LocalHeroIndex
    MOV EBP,dword ptr [EDX*0x4 + 0x1cae0d8] ; 0048ead8
    ADD ESP,0x4                         ; 0048eadf
    CMP EAX,EBP                         ; 0048eae2
    JNZ 0x0048eaf4                      ; 0048eae4
        ;   XREF to: 0048eaf4 (CONDITIONAL_JUMP)  ; LAB_0048eaf4
    MOV EAX,[0x005b9284]                ; 0048eae6 | g_CForceFeedback_PTR_005b9284
    PUSH EAX                            ; 0048eaeb
    CALL engine_force.cpp_CForceFeedback_processEvent_FUN_004940d0 ; 0048eaec
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; void engine_force.cpp_CForceFeedback_processEvent_FUN_004940d0(CForceFeedback * this_ptr)
    ADD ESP,0x4                         ; 0048eaf1
    MOV EAX,0x1                         ; 0048eaf4
        ;   Label: LAB_0048eaf4
    MOV dword ptr [EBX + 0x570],0x1     ; 0048eaf9
    POP ESI                             ; 0048eb03
    ADD ESP,0x18                        ; 0048eb04
    POP EBP                             ; 0048eb07
    POP EBX                             ; 0048eb08
    RET                                 ; 0048eb09
    FLD float ptr [0x0059d7a0]          ; 0048eb0a | FLOAT_0059d7a0
        ;   Label: LAB_0048eb0a
    FLD1                                ; 0048eb10
    FDIVRP                              ; 0048eb12
    DEC dword ptr [EBX + 0x560]         ; 0048eb14
    FSTP float ptr [EBX + 0x57c]        ; 0048eb1a
    JMP 0x0048eac5                      ; 0048eb20
        ;   XREF to: 0048eac5 (UNCONDITIONAL_JUMP)  ; LAB_0048eac5

