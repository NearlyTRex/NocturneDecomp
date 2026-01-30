; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_shotgun_cpp_FUN_005888f0(void)
;
; Local Variables:
; undefined1       Stack[-0x44]:1  local_44
;
; Referenced Globals:
;   double DOUBLE_00649b6f = 3.14159265350000
;   double DOUBLE_00649b77 = 0.00555555555555555
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonRenderer g_CDemonRendererInstance
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_fire.cpp_CFireEffect_FUN_004c7f20
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005888f0
        ;   Label: core_shotgun.cpp_FUN_005888f0
    PUSH EDI                            ; 005888f1
    PUSH EBP                            ; 005888f2
    MOV EBP,ESP                         ; 005888f3
    SUB ESP,0x68                        ; 005888f5
    AND ESP,0xfffffff8                  ; 005888f8
    MOV EBX,dword ptr [EBP + 0x10]      ; 005888fb
    MOV EDX,dword ptr [0x006703ec]      ; 005888fe | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 00588904 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00588905
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0058890a
    TEST EAX,EAX                        ; 0058890d
    JZ 0x00588917                       ; 0058890f
        ;   XREF to: 00588917 (CONDITIONAL_JUMP)  ; LAB_00588917
    MOV ESP,EBP                         ; 00588911
    POP EBP                             ; 00588913
    POP EDI                             ; 00588914
    POP EBX                             ; 00588915
    RET                                 ; 00588916
    LEA EAX,[ESP + 0x34]                ; 00588917
        ;   Label: LAB_00588917
    PUSH EAX                            ; 0058891b
    MOV EDX,dword ptr [EBX + 0x154]     ; 0058891c
    PUSH EBX                            ; 00588922
    CALL dword ptr [EDX + 0xf4]         ; 00588923
    ADD ESP,0x8                         ; 00588929
    PUSH EAX                            ; 0058892c
    LEA EAX,[ESP + 0x14]                ; 0058892d
    PUSH EAX                            ; 00588931
    PUSH EBX                            ; 00588932
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00588933
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00588938
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 0058893b
    MOV dword ptr [ESP + 0x60],EAX      ; 00588941
    LEA EAX,[ESP + 0x58]                ; 00588945
    PUSH EAX                            ; 00588949
    LEA EAX,[ESP + 0x8]                 ; 0058894a
    PUSH EAX                            ; 0058894e
    XOR ECX,ECX                         ; 0058894f
    PUSH EBX                            ; 00588951
    MOV dword ptr [ESP + 0x64],ECX      ; 00588952
    MOV dword ptr [ESP + 0x68],ECX      ; 00588956
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0058895a
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    LEA EAX,[ESP + 0x4c]                ; 0058895f
    ADD ESP,0xc                         ; 00588963
    LEA EDX,[ESP + 0x28]                ; 00588966
    FLD float ptr [ESP + 0x10]          ; 0058896a
    FLD float ptr [ESP + 0x14]          ; 0058896e
    FLD float ptr [ESP + 0x18]          ; 00588972
    FLD float ptr [ESP + 0x4]           ; 00588976
    FLD float ptr [ESP + 0x8]           ; 0058897a
    FLD float ptr [ESP + 0xc]           ; 0058897e
    FXCH ST2                            ; 00588982
    FCHS                                ; 00588984
    FXCH                                ; 00588986
    FCHS                                ; 00588988
    FXCH ST2                            ; 0058898a
    FCHS                                ; 0058898c
    FXCH                                ; 0058898e
    FSTP float ptr [ESP + 0x40]         ; 00588990
    FXCH                                ; 00588994
    FSTP float ptr [ESP + 0x44]         ; 00588996
    FSTP float ptr [ESP + 0x48]         ; 0058899a
    FXCH ST2                            ; 0058899e
    FADD float ptr [ESP + 0x4]          ; 005889a0
    FXCH                                ; 005889a4
    FADD float ptr [ESP + 0x8]          ; 005889a6
    FXCH ST2                            ; 005889aa
    FADD float ptr [ESP + 0xc]          ; 005889ac
    FXCH                                ; 005889b0
    FSTP float ptr [ESP + 0x4c]         ; 005889b2
    FXCH                                ; 005889b6
    FSTP float ptr [ESP + 0x50]         ; 005889b8
    FSTP float ptr [ESP + 0x54]         ; 005889bc
    CMP EDX,EAX                         ; 005889c0
    JZ 0x005889dc                       ; 005889c2
        ;   XREF to: 005889dc (CONDITIONAL_JUMP)  ; LAB_005889dc
    MOV EAX,dword ptr [ESP + 0x40]      ; 005889c4
    MOV dword ptr [ESP + 0x28],EAX      ; 005889c8
    MOV EAX,dword ptr [ESP + 0x44]      ; 005889cc
    MOV dword ptr [ESP + 0x2c],EAX      ; 005889d0
    MOV EAX,dword ptr [ESP + 0x48]      ; 005889d4
    MOV dword ptr [ESP + 0x30],EAX      ; 005889d8
    FLD float ptr [ESP + 0x2c]          ; 005889dc
        ;   Label: LAB_005889dc
    FMUL ST0                            ; 005889e0
    FLD float ptr [ESP + 0x28]          ; 005889e2
    FMUL ST0                            ; 005889e6
    FADDP                               ; 005889e8
    FLD float ptr [ESP + 0x30]          ; 005889ea
    FMUL ST0                            ; 005889ee
    FADDP                               ; 005889f0
    FSQRT                               ; 005889f2
    FST float ptr [ESP]                 ; 005889f4
    FLDZ                                ; 005889f7
    FCOMPP                              ; 005889f9
    FNSTSW AX                           ; 005889fb
    SAHF                                ; 005889fd
    JNC 0x00588ac0                      ; 005889fe
        ;   XREF to: 00588ac0 (CONDITIONAL_JUMP)  ; LAB_00588ac0
    FLD1                                ; 00588a04
    FLD float ptr [ESP + 0x28]          ; 00588a06
    FXCH                                ; 00588a0a
    FDIV float ptr [ESP]                ; 00588a0c
    FXCH                                ; 00588a0f
    FMUL ST1                            ; 00588a11
    FLD float ptr [ESP + 0x2c]          ; 00588a13
    FMUL ST2                            ; 00588a17
    FLD float ptr [ESP + 0x30]          ; 00588a19
    FMULP ST3                           ; 00588a1d
    FXCH                                ; 00588a1f
    FSTP float ptr [ESP + 0x28]         ; 00588a21
    FSTP float ptr [ESP + 0x2c]         ; 00588a25
    FSTP float ptr [ESP + 0x30]         ; 00588a29
    FLD float ptr [EBX + 0x578]         ; 00588a2d
        ;   Label: LAB_00588a2d
    FMUL double ptr [0x00649b6f]        ; 00588a33 | DOUBLE_00649b6f
    FMUL double ptr [0x00649b77]        ; 00588a39 | DOUBLE_00649b77
    SUB ESP,0x4                         ; 00588a3f
    FSTP float ptr [ESP]                ; 00588a42
    PUSH 0x0                            ; 00588a45
    PUSH 0xff                           ; 00588a47
    PUSH 0x0                            ; 00588a4c
    LEA EAX,[ESP + 0x5c]                ; 00588a4e
    PUSH 0x3f800000                     ; 00588a52
    PUSH EAX                            ; 00588a57
    LEA EAX,[ESP + 0x28]                ; 00588a58
    PUSH EAX                            ; 00588a5c
    MOV ECX,dword ptr [0x0067a3d0]      ; 00588a5d | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 00588a63 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c7f20 ; 00588a64
        ;   XREF to: 004c7f20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c7f20(CFireEffect * this_ptr)
    ADD ESP,0x20                        ; 00588a69
    MOV dword ptr [EBX + 0x57c],0x1     ; 00588a6c
    FLD float ptr [ESP + 0x4c]          ; 00588a76
    FLD float ptr [ESP + 0x50]          ; 00588a7a
    FSUB float ptr [ESP + 0x14]         ; 00588a7e
    FXCH                                ; 00588a82
    FSUB float ptr [ESP + 0x10]         ; 00588a84
    FXCH                                ; 00588a88
    FST float ptr [ESP + 0x20]          ; 00588a8a
    FMUL float ptr [ESP + 0x20]         ; 00588a8e
    FXCH                                ; 00588a92
    FST float ptr [ESP + 0x1c]          ; 00588a94
    FMUL float ptr [ESP + 0x1c]         ; 00588a98
    FLD float ptr [ESP + 0x54]          ; 00588a9c
    FSUB float ptr [ESP + 0x18]         ; 00588aa0
    FXCH                                ; 00588aa4
    FADDP ST2,ST0                       ; 00588aa6
    FST float ptr [ESP + 0x24]          ; 00588aa8
    FMUL float ptr [ESP + 0x24]         ; 00588aac
    FADDP                               ; 00588ab0
    FSQRT                               ; 00588ab2
    FSTP float ptr [EBX + 0x580]        ; 00588ab4
    MOV ESP,EBP                         ; 00588aba
    POP EBP                             ; 00588abc
    POP EDI                             ; 00588abd
    POP EBX                             ; 00588abe
    RET                                 ; 00588abf
    XOR EDI,EDI                         ; 00588ac0
        ;   Label: LAB_00588ac0
    MOV dword ptr [ESP + 0x2c],EDI      ; 00588ac2
    MOV dword ptr [ESP + 0x28],EDI      ; 00588ac6
    MOV dword ptr [ESP + 0x30],EDI      ; 00588aca
    JMP 0x00588a2d                      ; 00588ace
        ;   XREF to: 00588a2d (UNCONDITIONAL_JUMP)  ; LAB_00588a2d

