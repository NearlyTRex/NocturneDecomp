; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weather_cpp_FUN_0057d050(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[7]:
;   core_event.cpp_FUN_0048c2e0 at 004909aa
;   core_fire.cpp_CStormEffect_activate_FUN_004a0480 at 004a04fe
;   core_fire.cpp_CStormEffect_process_FUN_004a0570 at 004a05b0
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bcd9f
;   core_hino.cpp_CHino_process_FUN_0059b960 at 0059c088
;   core_set.cpp_CDemonSet_initScene_FUN_00534420 at 0053463e
;   core_weather.cpp_FUN_0057bd80 at 0057bd88
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d050
        ;   Label: core_weather.cpp_FUN_0057d050
    PUSH ESI                            ; 0057d051
    SUB ESP,0x4                         ; 0057d052
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057d055
    MOV ESI,dword ptr [ESP + 0x14]      ; 0057d059
    CMP dword ptr [EBX],0x5             ; 0057d05d
    JNZ 0x0057d07b                      ; 0057d060
        ;   XREF to: 0057d07b (CONDITIONAL_JUMP)  ; LAB_0057d07b
    TEST dword ptr [EBX + 0x28],0x7fffffff ; 0057d062
    JZ 0x0057d07b                       ; 0057d069
        ;   XREF to: 0057d07b (CONDITIONAL_JUMP)  ; LAB_0057d07b
    PUSH dword ptr [EBX + 0x30]         ; 0057d06b
    PUSH 0x2038f4c                      ; 0057d06e
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680 ; 0057d073
        ;   XREF to: 0044f680 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0057d078
    MOV dword ptr [EBX],ESI             ; 0057d07b
        ;   Label: LAB_0057d07b
    CMP ESI,0x1                         ; 0057d07d
    JNZ 0x0057d0fc                      ; 0057d080
        ;   XREF to: 0057d0fc (CONDITIONAL_JUMP)  ; LAB_0057d0fc
    MOV dword ptr [EBX + 0x4],0x42200000 ; 0057d082
    CMP ESI,0x3                         ; 0057d089
        ;   Label: LAB_0057d089
    JNZ 0x0057d119                      ; 0057d08c
        ;   XREF to: 0057d119 (CONDITIONAL_JUMP)  ; LAB_0057d119
    MOV dword ptr [EBX + 0x38],0x2ee    ; 0057d092
    CMP ESI,0x5                         ; 0057d099
        ;   Label: LAB_0057d099
    JNZ 0x0057d147                      ; 0057d09c
        ;   XREF to: 0057d147 (CONDITIONAL_JUMP)  ; LAB_0057d147
    PUSH 0x3f400000                     ; 0057d0a2
    PUSH 0x3f000000                     ; 0057d0a7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057d0ac
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0057d0b1
    MOV dword ptr [EBX + 0x24],0x0      ; 0057d0b5
    FLD float ptr [ESP + 0x8]           ; 0057d0bc
    ADD ESP,0x8                         ; 0057d0c0
    MOV dword ptr [EBX + 0x34],0x40000000 ; 0057d0c3
    PUSH dword ptr [EBX + 0x34]         ; 0057d0ca
    MOV dword ptr [EBX + 0x28],0x0      ; 0057d0cd
    PUSH 0x3f000000                     ; 0057d0d4
    FSTP float ptr [EBX + 0x20]         ; 0057d0d9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057d0dc
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0057d0e1
    MOV dword ptr [EBX + 0x64],0x0      ; 0057d0e5
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057d0ec
    MOV dword ptr [EBX + 0x2c],EAX      ; 0057d0f0
    ADD ESP,0x8                         ; 0057d0f3
    ADD ESP,0x4                         ; 0057d0f6
    POP ESI                             ; 0057d0f9
    POP EBX                             ; 0057d0fa
    RET                                 ; 0057d0fb
    CMP ESI,0x5                         ; 0057d0fc
        ;   Label: LAB_0057d0fc
    JNZ 0x0057d10d                      ; 0057d0ff
        ;   XREF to: 0057d10d (CONDITIONAL_JUMP)  ; LAB_0057d10d
    MOV dword ptr [EBX + 0x4],0x42700000 ; 0057d101
    JMP 0x0057d089                      ; 0057d108
        ;   XREF to: 0057d089 (UNCONDITIONAL_JUMP)  ; LAB_0057d089
    MOV dword ptr [EBX + 0x4],0x40400000 ; 0057d10d
        ;   Label: LAB_0057d10d
    JMP 0x0057d089                      ; 0057d114
        ;   XREF to: 0057d089 (UNCONDITIONAL_JUMP)  ; LAB_0057d089
    CMP ESI,0x4                         ; 0057d119
        ;   Label: LAB_0057d119
    JNZ 0x0057d12a                      ; 0057d11c
        ;   XREF to: 0057d12a (CONDITIONAL_JUMP)  ; LAB_0057d12a
    MOV dword ptr [EBX + 0x38],0x7d0    ; 0057d11e
    JMP 0x0057d099                      ; 0057d125
        ;   XREF to: 0057d099 (UNCONDITIONAL_JUMP)  ; LAB_0057d099
    CMP ESI,0x5                         ; 0057d12a
        ;   Label: LAB_0057d12a
    JNZ 0x0057d13b                      ; 0057d12d
        ;   XREF to: 0057d13b (CONDITIONAL_JUMP)  ; LAB_0057d13b
    MOV dword ptr [EBX + 0x38],0x190    ; 0057d12f
    JMP 0x0057d099                      ; 0057d136
        ;   XREF to: 0057d099 (UNCONDITIONAL_JUMP)  ; LAB_0057d099
    MOV dword ptr [EBX + 0x38],0xc8     ; 0057d13b
        ;   Label: LAB_0057d13b
    JMP 0x0057d099                      ; 0057d142
        ;   XREF to: 0057d099 (UNCONDITIONAL_JUMP)  ; LAB_0057d099
    PUSH 0x41a00000                     ; 0057d147
        ;   Label: LAB_0057d147
    PUSH 0x41200000                     ; 0057d14c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057d151
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0057d156
    MOV dword ptr [EBX + 0x24],0x0      ; 0057d15a
    FLD float ptr [ESP + 0x8]           ; 0057d161
    ADD ESP,0x8                         ; 0057d165
    MOV dword ptr [EBX + 0x34],0x41200000 ; 0057d168
    PUSH dword ptr [EBX + 0x34]         ; 0057d16f
    MOV dword ptr [EBX + 0x28],0x0      ; 0057d172
    PUSH 0x40000000                     ; 0057d179
    FSTP float ptr [EBX + 0x20]         ; 0057d17e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057d181
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0057d186
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057d18a
    MOV dword ptr [EBX + 0x2c],EAX      ; 0057d18e
    ADD ESP,0x8                         ; 0057d191
    ADD ESP,0x4                         ; 0057d194
    POP ESI                             ; 0057d197
    POP EBX                             ; 0057d198
    RET                                 ; 0057d199

