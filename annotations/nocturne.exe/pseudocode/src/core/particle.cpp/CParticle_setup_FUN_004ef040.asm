; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_particle_cpp_CParticle_setup_FUN_004ef040(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_fire.cpp_CGlassParticle_init_FUN_004850d0 at 004853a0
;   core_fire.cpp_CRock_setup_FUN_00484c90 at 00484ca6
;   core_fire.cpp_CShell_setup_FUN_00489640 at 00489658
;   core_gore.cpp_CBloodParticle_setup_FUN_004ae070 at 004ae096
;
; Referenced Globals:
;   undefined4 DAT_0058cb84
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef040
        ;   Label: core_particle.cpp_CParticle_setup_FUN_004ef040
    SUB ESP,0x28                        ; 004ef041
    MOV EBX,dword ptr [ESP + 0x30]      ; 004ef044
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ef048
    MOV EDX,dword ptr [ESP + 0x38]      ; 004ef04c
    MOV dword ptr [EBX + 0x1c],0xc2000000 ; 004ef050
    CMP EBX,EAX                         ; 004ef057
    JNZ 0x004ef079                      ; 004ef059
        ;   XREF to: 004ef079 (CONDITIONAL_JUMP)  ; LAB_004ef079
    TEST EDX,EDX                        ; 004ef05b
        ;   Label: LAB_004ef05b
    JZ 0x004ef09d                       ; 004ef05d
        ;   XREF to: 004ef09d (CONDITIONAL_JUMP)  ; LAB_004ef09d
    LEA EAX,[EBX + 0xc]                 ; 004ef05f
    CMP EAX,EDX                         ; 004ef062
    JNZ 0x004ef08b                      ; 004ef064
        ;   XREF to: 004ef08b (CONDITIONAL_JUMP)  ; LAB_004ef08b
    MOV dword ptr [EBX + 0x18],0x40a00000 ; 004ef066
        ;   Label: LAB_004ef066
    MOV dword ptr [EBX + 0x30],0x0      ; 004ef06d
    ADD ESP,0x28                        ; 004ef074
    POP EBX                             ; 004ef077
    RET                                 ; 004ef078
    MOV ECX,dword ptr [EAX]             ; 004ef079
        ;   Label: LAB_004ef079
    MOV dword ptr [EBX],ECX             ; 004ef07b
    MOV ECX,dword ptr [EAX + 0x4]       ; 004ef07d
    MOV dword ptr [EBX + 0x4],ECX       ; 004ef080
    MOV ECX,dword ptr [EAX + 0x8]       ; 004ef083
    MOV dword ptr [EBX + 0x8],ECX       ; 004ef086
    JMP 0x004ef05b                      ; 004ef089
        ;   XREF to: 004ef05b (UNCONDITIONAL_JUMP)  ; LAB_004ef05b
    MOV ECX,dword ptr [EDX]             ; 004ef08b
        ;   Label: LAB_004ef08b
    MOV dword ptr [EAX],ECX             ; 004ef08d
    MOV ECX,dword ptr [EDX + 0x4]       ; 004ef08f
    MOV dword ptr [EAX + 0x4],ECX       ; 004ef092
    MOV ECX,dword ptr [EDX + 0x8]       ; 004ef095
    MOV dword ptr [EAX + 0x8],ECX       ; 004ef098
    JMP 0x004ef066                      ; 004ef09b
        ;   XREF to: 004ef066 (UNCONDITIONAL_JUMP)  ; LAB_004ef066
    PUSH 0x3fc90fdb                     ; 004ef09d
        ;   Label: LAB_004ef09d
    PUSH 0x3f490fdb                     ; 004ef0a2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004ef0a7
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 004ef0ac
    FLD float ptr [ESP + 0x2c]          ; 004ef0b0
    ADD ESP,0x8                         ; 004ef0b4
    PUSH 0x40c90fdb                     ; 004ef0b7
    PUSH 0x0                            ; 004ef0bc
    FSTP float ptr [ESP + 0x18]         ; 004ef0be
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004ef0c2
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 004ef0c7
    FLD float ptr [ESP + 0x2c]          ; 004ef0cb
    ADD ESP,0x8                         ; 004ef0cf
    FLD ST0                             ; 004ef0d2
    FCOS                                ; 004ef0d4
    FLD float ptr [ESP + 0x10]          ; 004ef0d6
    FLD ST0                             ; 004ef0da
    FCOS                                ; 004ef0dc
    FXCH ST3                            ; 004ef0de
    FSIN                                ; 004ef0e0
    FXCH                                ; 004ef0e2
    FSIN                                ; 004ef0e4
    FXCH ST2                            ; 004ef0e6
    FLD float ptr [0x0058cb84]          ; 004ef0e8 | DAT_0058cb84
    FXCH                                ; 004ef0ee
    FMUL ST1                            ; 004ef0f0
    FXCH ST2                            ; 004ef0f2
    FMUL ST1                            ; 004ef0f4
    FXCH ST3                            ; 004ef0f6
    FMULP                               ; 004ef0f8
    FXCH                                ; 004ef0fa
    FMUL ST3                            ; 004ef0fc
    FXCH ST2                            ; 004ef0fe
    FMULP ST3                           ; 004ef100
    FSTP float ptr [EBX + 0x10]         ; 004ef102
    FSTP float ptr [EBX + 0xc]          ; 004ef105
    FSTP float ptr [EBX + 0x14]         ; 004ef108
    MOV dword ptr [EBX + 0x18],0x40a00000 ; 004ef10b
    MOV dword ptr [EBX + 0x30],0x0      ; 004ef112
    ADD ESP,0x28                        ; 004ef119
    POP EBX                             ; 004ef11c
    RET                                 ; 004ef11d

