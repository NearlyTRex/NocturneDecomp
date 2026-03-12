; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_elephant_cpp_CElephantGun_fireProjectile_FUN_004a79f0(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
; Local Variables:
; CVector3f        Stack[-0x74]:12  CStack_74
; CVector3f[2]     Stack[-0x68]:24  aCStack_68
; float            Stack[-0x50]:4  fStack_50
; float            Stack[-0x4c]:4  fStack_4c
; float            Stack[-0x48]:4  fStack_48
; CVector3f        Stack[-0x44]:12  local_44
; float            Stack[-0x38]:4  fStack_38
; float            Stack[-0x34]:4  fStack_34
; float            Stack[-0x30]:4  fStack_30
; CVector3f        Stack[-0x2c]:12  CStack_2c
; CVector3f        Stack[-0x20]:12  CStack_20
;
; Referenced Globals:
;   double DOUBLE_0062403a = 3.14159265350000
;   double DOUBLE_00624042 = 0.00555555555555555
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonRenderer g_CDemonRendererInstance
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_fire.cpp_CFireEffect_createLaserCone_FUN_004c7f20
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a79f0
        ;   Label: core_elephant.cpp_CElephantGun_fireProjectile_FUN_004a79f0
    PUSH EDI                            ; 004a79f1
    PUSH EBP                            ; 004a79f2
    MOV EBP,ESP                         ; 004a79f3
    SUB ESP,0x68                        ; 004a79f5
    AND ESP,0xfffffff8                  ; 004a79f8
    MOV EBX,dword ptr [EBP + 0x10]      ; 004a79fb
    MOV EDX,dword ptr [0x006703ec]      ; 004a79fe | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 004a7a04 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004a7a05
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004a7a0a
    TEST EAX,EAX                        ; 004a7a0d
    JZ 0x004a7a17                       ; 004a7a0f
        ;   XREF to: 004a7a17 (CONDITIONAL_JUMP)  ; LAB_004a7a17
    MOV ESP,EBP                         ; 004a7a11
    POP EBP                             ; 004a7a13
    POP EDI                             ; 004a7a14
    POP EBX                             ; 004a7a15
    RET                                 ; 004a7a16
    LEA EAX,[ESP + 0x34]                ; 004a7a17
        ;   Label: LAB_004a7a17
    PUSH EAX                            ; 004a7a1b
    MOV EDX,dword ptr [EBX + 0x154]     ; 004a7a1c
    PUSH EBX                            ; 004a7a22
    CALL dword ptr [EDX + 0xf4]         ; 004a7a23
    ADD ESP,0x8                         ; 004a7a29
    PUSH EAX                            ; 004a7a2c
    LEA EAX,[ESP + 0x14]                ; 004a7a2d
    PUSH EAX                            ; 004a7a31
    PUSH EBX                            ; 004a7a32
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004a7a33
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004a7a38
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 004a7a3b
    MOV dword ptr [ESP + 0x60],EAX      ; 004a7a41
    LEA EAX,[ESP + 0x58]                ; 004a7a45
    PUSH EAX                            ; 004a7a49
    LEA EAX,[ESP + 0x8]                 ; 004a7a4a
    PUSH EAX                            ; 004a7a4e
    XOR ECX,ECX                         ; 004a7a4f
    PUSH EBX                            ; 004a7a51
    MOV dword ptr [ESP + 0x64],ECX      ; 004a7a52
    MOV dword ptr [ESP + 0x68],ECX      ; 004a7a56
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004a7a5a
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    LEA EAX,[ESP + 0x4c]                ; 004a7a5f
    ADD ESP,0xc                         ; 004a7a63
    LEA EDX,[ESP + 0x28]                ; 004a7a66
    FLD float ptr [ESP + 0x10]          ; 004a7a6a
    FLD float ptr [ESP + 0x14]          ; 004a7a6e
    FLD float ptr [ESP + 0x18]          ; 004a7a72
    FLD float ptr [ESP + 0x4]           ; 004a7a76
    FLD float ptr [ESP + 0x8]           ; 004a7a7a
    FLD float ptr [ESP + 0xc]           ; 004a7a7e
    FXCH ST2                            ; 004a7a82
    FCHS                                ; 004a7a84
    FXCH                                ; 004a7a86
    FCHS                                ; 004a7a88
    FXCH ST2                            ; 004a7a8a
    FCHS                                ; 004a7a8c
    FXCH                                ; 004a7a8e
    FSTP float ptr [ESP + 0x40]         ; 004a7a90
    FXCH                                ; 004a7a94
    FSTP float ptr [ESP + 0x44]         ; 004a7a96
    FSTP float ptr [ESP + 0x48]         ; 004a7a9a
    FXCH ST2                            ; 004a7a9e
    FADD float ptr [ESP + 0x4]          ; 004a7aa0
    FXCH                                ; 004a7aa4
    FADD float ptr [ESP + 0x8]          ; 004a7aa6
    FXCH ST2                            ; 004a7aaa
    FADD float ptr [ESP + 0xc]          ; 004a7aac
    FXCH                                ; 004a7ab0
    FSTP float ptr [ESP + 0x4c]         ; 004a7ab2
    FXCH                                ; 004a7ab6
    FSTP float ptr [ESP + 0x50]         ; 004a7ab8
    FSTP float ptr [ESP + 0x54]         ; 004a7abc
    CMP EDX,EAX                         ; 004a7ac0
    JZ 0x004a7adc                       ; 004a7ac2
        ;   XREF to: 004a7adc (CONDITIONAL_JUMP)  ; LAB_004a7adc
    MOV EAX,dword ptr [ESP + 0x40]      ; 004a7ac4
    MOV dword ptr [ESP + 0x28],EAX      ; 004a7ac8
    MOV EAX,dword ptr [ESP + 0x44]      ; 004a7acc
    MOV dword ptr [ESP + 0x2c],EAX      ; 004a7ad0
    MOV EAX,dword ptr [ESP + 0x48]      ; 004a7ad4
    MOV dword ptr [ESP + 0x30],EAX      ; 004a7ad8
    FLD float ptr [ESP + 0x2c]          ; 004a7adc
        ;   Label: LAB_004a7adc
    FMUL ST0                            ; 004a7ae0
    FLD float ptr [ESP + 0x28]          ; 004a7ae2
    FMUL ST0                            ; 004a7ae6
    FADDP                               ; 004a7ae8
    FLD float ptr [ESP + 0x30]          ; 004a7aea
    FMUL ST0                            ; 004a7aee
    FADDP                               ; 004a7af0
    FSQRT                               ; 004a7af2
    FST float ptr [ESP]                 ; 004a7af4
    FLDZ                                ; 004a7af7
    FCOMPP                              ; 004a7af9
    FNSTSW AX                           ; 004a7afb
    SAHF                                ; 004a7afd
    JNC 0x004a7bc0                      ; 004a7afe
        ;   XREF to: 004a7bc0 (CONDITIONAL_JUMP)  ; LAB_004a7bc0
    FLD1                                ; 004a7b04
    FLD float ptr [ESP + 0x28]          ; 004a7b06
    FXCH                                ; 004a7b0a
    FDIV float ptr [ESP]                ; 004a7b0c
    FXCH                                ; 004a7b0f
    FMUL ST1                            ; 004a7b11
    FLD float ptr [ESP + 0x2c]          ; 004a7b13
    FMUL ST2                            ; 004a7b17
    FLD float ptr [ESP + 0x30]          ; 004a7b19
    FMULP ST3                           ; 004a7b1d
    FXCH                                ; 004a7b1f
    FSTP float ptr [ESP + 0x28]         ; 004a7b21
    FSTP float ptr [ESP + 0x2c]         ; 004a7b25
    FSTP float ptr [ESP + 0x30]         ; 004a7b29
    FLD float ptr [EBX + 0x578]         ; 004a7b2d
        ;   Label: LAB_004a7b2d
    FMUL double ptr [0x0062403a]        ; 004a7b33 | DOUBLE_0062403a
    FMUL double ptr [0x00624042]        ; 004a7b39 | DOUBLE_00624042
    SUB ESP,0x4                         ; 004a7b3f
    FSTP float ptr [ESP]                ; 004a7b42
    PUSH 0x0                            ; 004a7b45
    PUSH 0xff                           ; 004a7b47
    PUSH 0x0                            ; 004a7b4c
    LEA EAX,[ESP + 0x5c]                ; 004a7b4e
    PUSH 0x3f800000                     ; 004a7b52
    PUSH EAX                            ; 004a7b57
    LEA EAX,[ESP + 0x28]                ; 004a7b58
    PUSH EAX                            ; 004a7b5c
    MOV ECX,dword ptr [0x0067a3d0]      ; 004a7b5d | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 004a7b63 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createLaserCone_FUN_004c7f20 ; 004a7b64
        ;   XREF to: 004c7f20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserCone_FUN_004c7f20(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x20                        ; 004a7b69
    MOV dword ptr [EBX + 0x57c],0x1     ; 004a7b6c
    FLD float ptr [ESP + 0x4c]          ; 004a7b76
    FLD float ptr [ESP + 0x50]          ; 004a7b7a
    FSUB float ptr [ESP + 0x14]         ; 004a7b7e
    FXCH                                ; 004a7b82
    FSUB float ptr [ESP + 0x10]         ; 004a7b84
    FXCH                                ; 004a7b88
    FST float ptr [ESP + 0x20]          ; 004a7b8a
    FMUL float ptr [ESP + 0x20]         ; 004a7b8e
    FXCH                                ; 004a7b92
    FST float ptr [ESP + 0x1c]          ; 004a7b94
    FMUL float ptr [ESP + 0x1c]         ; 004a7b98
    FLD float ptr [ESP + 0x54]          ; 004a7b9c
    FSUB float ptr [ESP + 0x18]         ; 004a7ba0
    FXCH                                ; 004a7ba4
    FADDP ST2,ST0                       ; 004a7ba6
    FST float ptr [ESP + 0x24]          ; 004a7ba8
    FMUL float ptr [ESP + 0x24]         ; 004a7bac
    FADDP                               ; 004a7bb0
    FSQRT                               ; 004a7bb2
    FSTP float ptr [EBX + 0x580]        ; 004a7bb4
    MOV ESP,EBP                         ; 004a7bba
    POP EBP                             ; 004a7bbc
    POP EDI                             ; 004a7bbd
    POP EBX                             ; 004a7bbe
    RET                                 ; 004a7bbf
    XOR EDI,EDI                         ; 004a7bc0
        ;   Label: LAB_004a7bc0
    MOV dword ptr [ESP + 0x2c],EDI      ; 004a7bc2
    MOV dword ptr [ESP + 0x28],EDI      ; 004a7bc6
    MOV dword ptr [ESP + 0x30],EDI      ; 004a7bca
    JMP 0x004a7b2d                      ; 004a7bce
        ;   XREF to: 004a7b2d (UNCONDITIONAL_JUMP)  ; LAB_004a7b2d

