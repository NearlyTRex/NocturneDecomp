; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dynamite_cpp_CDynamite_process_FUN_0049cfb0(CDynamite *this_ptr,float delta_time)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined8       Stack[-0x68]:8  local_68
; undefined1       Stack[-0x48]:1  local_48
;
; Referenced Globals:
;   double DOUBLE_00622ea2 = 5
;   float FLOAT_00622eaa = 0.5
;   float FLOAT_0065d30c = 3.5
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CSound* g_CSoundPtr = 03f6af64
;   CFireEffect g_CFireEffectInstance
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_fire.cpp_CFireEffect_FUN_004c79d0
;   core_sound.cpp_CSound_killSound_FUN_005b3b90
;   core_weapon.cpp_CWeapon_process_FUN_005ee110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049cfb0
        ;   Label: core_dynamite.cpp_CDynamite_process_FUN_0049cfb0
    PUSH ESI                            ; 0049cfb1
    PUSH EBP                            ; 0049cfb2
    MOV EBP,ESP                         ; 0049cfb3
    SUB ESP,0x5c                        ; 0049cfb5
    AND ESP,0xfffffff8                  ; 0049cfb8
    MOV EBX,dword ptr [EBP + 0x10]      ; 0049cfbb
    PUSH dword ptr [EBP + 0x14]         ; 0049cfbe
    PUSH EBX                            ; 0049cfc1
    CALL core_weapon.cpp_CWeapon_process_FUN_005ee110 ; 0049cfc2
        ;   XREF to: 005ee110 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ee110(CWeapon * this_ptr, float delta_time)
    FLD float ptr [EBX + 0x578]         ; 0049cfc7
    FLDZ                                ; 0049cfcd
    ADD ESP,0x8                         ; 0049cfcf
    FCOMPP                              ; 0049cfd2
    FNSTSW AX                           ; 0049cfd4
    SAHF                                ; 0049cfd6
    JA 0x0049d01b                       ; 0049cfd7
        ;   XREF to: 0049d01b (CONDITIONAL_JUMP)  ; LAB_0049d01b
    FLD float ptr [EBX + 0x578]         ; 0049cfd9
    FSUB float ptr [EBP + 0x14]         ; 0049cfdf
    FLDZ                                ; 0049cfe2
    FXCH                                ; 0049cfe4
    FST float ptr [EBX + 0x578]         ; 0049cfe6
    FSTP double ptr [ESP]               ; 0049cfec
    FCOMP double ptr [ESP]              ; 0049cfef
    FNSTSW AX                           ; 0049cff2
    SAHF                                ; 0049cff4
    JA 0x0049d021                       ; 0049cff5
        ;   XREF to: 0049d021 (CONDITIONAL_JUMP)  ; LAB_0049d021
    FLD float ptr [EBP + 0x14]          ; 0049cff7
    FMUL double ptr [0x00622ea2]        ; 0049cffa | DOUBLE_00622ea2
    FMUL double ptr [ESP]               ; 0049d000
    FDIV float ptr [0x0065d30c]         ; 0049d003 | FLOAT_0065d30c
    SUB ESP,0x4                         ; 0049d009
    FSTP float ptr [ESP]                ; 0049d00c
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 0049d00f
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 0049d014
    TEST EAX,EAX                        ; 0049d017
    JNZ 0x0049d04d                      ; 0049d019
        ;   XREF to: 0049d04d (CONDITIONAL_JUMP)  ; LAB_0049d04d
    MOV ESP,EBP                         ; 0049d01b
        ;   Label: LAB_0049d01b
    POP EBP                             ; 0049d01d
    POP ESI                             ; 0049d01e
    POP EBX                             ; 0049d01f
    RET                                 ; 0049d020
    MOV ECX,dword ptr [EBX + 0x588]     ; 0049d021
        ;   Label: LAB_0049d021
    PUSH ECX                            ; 0049d027
    MOV ESI,dword ptr [0x00681ef8]      ; 0049d028 | g_CSoundPtr
    PUSH ESI                            ; 0049d02e | g_CSoundInstance
    MOV dword ptr [EBX + 0x578],0x0     ; 0049d02f
    CALL core_sound.cpp_CSound_killSound_FUN_005b3b90 ; 0049d039
        ;   XREF to: 005b3b90 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_005b3b90(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0049d03e
    MOV dword ptr [EBX + 0x588],0x0     ; 0049d041
    JMP 0x0049d01b                      ; 0049d04b
        ;   XREF to: 0049d01b (UNCONDITIONAL_JUMP)  ; LAB_0049d01b
    LEA EAX,[ESP + 0x20]                ; 0049d04d
        ;   Label: LAB_0049d04d
    PUSH EAX                            ; 0049d051
    MOV EDX,dword ptr [EBX + 0x154]     ; 0049d052
    PUSH EBX                            ; 0049d058
    CALL dword ptr [EDX + 0x14]         ; 0049d059
    LEA EDX,[EAX + 0xc]                 ; 0049d05c
    FLD float ptr [EAX]                 ; 0049d05f
    FADD float ptr [EDX]                ; 0049d061
    ADD ESP,0x8                         ; 0049d063
    FST float ptr [ESP + 0x44]          ; 0049d066
    FLD float ptr [EAX + 0x4]           ; 0049d06a
    FADD float ptr [EDX + 0x4]          ; 0049d06d
    FXCH                                ; 0049d070
    FLD float ptr [0x00622eaa]          ; 0049d072 | FLOAT_00622eaa
    FXCH                                ; 0049d078
    FMUL ST1                            ; 0049d07a
    FXCH ST2                            ; 0049d07c
    FST float ptr [ESP + 0x48]          ; 0049d07e
    FLD float ptr [EAX + 0x8]           ; 0049d082
    FADD float ptr [EDX + 0x8]          ; 0049d085
    FXCH                                ; 0049d088
    FMUL ST2                            ; 0049d08a
    FXCH                                ; 0049d08c
    FST float ptr [ESP + 0x4c]          ; 0049d08e
    FMULP ST2                           ; 0049d092
    LEA EAX,[ESP + 0x8]                 ; 0049d094
    FXCH ST2                            ; 0049d098
    FSTP float ptr [ESP + 0x38]         ; 0049d09a
    PUSH EAX                            ; 0049d09e
    FXCH                                ; 0049d09f
    FSTP float ptr [ESP + 0x40]         ; 0049d0a1
    PUSH EBX                            ; 0049d0a5
    FSTP float ptr [ESP + 0x48]         ; 0049d0a6
    MOV EDX,dword ptr [EBX + 0x154]     ; 0049d0aa
    CALL dword ptr [EDX + 0x14]         ; 0049d0b0
    ADD ESP,0x8                         ; 0049d0b3
    MOV EAX,dword ptr [EAX + 0x14]      ; 0049d0b6
    MOV dword ptr [ESP + 0x40],EAX      ; 0049d0b9
    LEA EAX,[ESP + 0x38]                ; 0049d0bd
    PUSH EAX                            ; 0049d0c1
    LEA EAX,[ESP + 0x54]                ; 0049d0c2
    PUSH EAX                            ; 0049d0c6
    PUSH EBX                            ; 0049d0c7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0049d0c8
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EBX,EAX                         ; 0049d0cd
    LEA EAX,[ESP + 0x44]                ; 0049d0cf
    ADD ESP,0xc                         ; 0049d0d3
    CMP EAX,EBX                         ; 0049d0d6
    JZ 0x0049d0ee                       ; 0049d0d8
        ;   XREF to: 0049d0ee (CONDITIONAL_JUMP)  ; LAB_0049d0ee
    MOV EAX,dword ptr [EBX]             ; 0049d0da
    MOV dword ptr [ESP + 0x38],EAX      ; 0049d0dc
    MOV EAX,dword ptr [EBX + 0x4]       ; 0049d0e0
    MOV dword ptr [ESP + 0x3c],EAX      ; 0049d0e3
    MOV EAX,dword ptr [EBX + 0x8]       ; 0049d0e7
    MOV dword ptr [ESP + 0x40],EAX      ; 0049d0ea
    PUSH 0xffff                         ; 0049d0ee
        ;   Label: LAB_0049d0ee
    PUSH 0x0                            ; 0049d0f3
    PUSH 0x10000                        ; 0049d0f5
    PUSH 0x4000                         ; 0049d0fa
    PUSH 0x0                            ; 0049d0ff
    LEA EAX,[ESP + 0x4c]                ; 0049d101
    PUSH EAX                            ; 0049d105
    MOV EDX,dword ptr [0x0067a3d0]      ; 0049d106 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EDX                            ; 0049d10c | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 0049d10d
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 0049d112
    MOV ESP,EBP                         ; 0049d115
    POP EBP                             ; 0049d117
    POP ESI                             ; 0049d118
    POP EBX                             ; 0049d119
    RET                                 ; 0049d11a

