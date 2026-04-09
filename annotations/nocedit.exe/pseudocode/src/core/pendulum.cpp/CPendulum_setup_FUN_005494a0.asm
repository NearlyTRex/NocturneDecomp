; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_CPendulum_setup_FUN_005494a0(CPendulum *this_ptr)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0x4c]:24  CStack_4c
; CBoundingBox3D   Stack[-0x34]:24  local_34
; float[3]         Stack[-0x10]:12  afStack_10
;
; Referenced Globals:
;   double DOUBLE_0063ec89 = 0.03125
;   double DOUBLE_0063ec91 = 6.28318530700000
;   float FLOAT_0063ec99 = 0.5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005494a0
        ;   Label: core_pendulum.cpp_CPendulum_setup_FUN_005494a0
    SUB ESP,0x48                        ; 005494a1
    MOV EBX,dword ptr [ESP + 0x50]      ; 005494a4
    LEA EAX,[EBX + 0x158]               ; 005494a8
    PUSH EAX                            ; 005494ae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005494af
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005494b4
    PUSH EBX                            ; 005494b7
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005494b8
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005494bd
    LEA EAX,[ESP + 0x18]                ; 005494c0
    PUSH EAX                            ; 005494c4
    MOV EDX,dword ptr [EBX + 0x154]     ; 005494c5
    PUSH EBX                            ; 005494cb
    CALL dword ptr [EDX + 0x14]         ; 005494cc
    MOV EDX,EAX                         ; 005494cf
    MOV ECX,EAX                         ; 005494d1
    LEA EAX,[ESP + 0x8]                 ; 005494d3
    ADD ESP,0x8                         ; 005494d7
    CMP EAX,EDX                         ; 005494da
    JNZ 0x0054957f                      ; 005494dc
        ;   XREF to: 0054957f (CONDITIONAL_JUMP)  ; LAB_0054957f
    LEA EAX,[ESP + 0xc]                 ; 005494e2
        ;   Label: LAB_005494e2
    LEA EDX,[ECX + 0xc]                 ; 005494e6
    CMP EAX,EDX                         ; 005494e9
    JZ 0x00549501                       ; 005494eb
        ;   XREF to: 00549501 (CONDITIONAL_JUMP)  ; LAB_00549501
    MOV EAX,dword ptr [EDX]             ; 005494ed
    MOV dword ptr [ESP + 0xc],EAX       ; 005494ef
    MOV EAX,dword ptr [EDX + 0x4]       ; 005494f3
    MOV dword ptr [ESP + 0x10],EAX      ; 005494f6
    MOV EAX,dword ptr [EDX + 0x8]       ; 005494fa
    MOV dword ptr [ESP + 0x14],EAX      ; 005494fd
    FLD float ptr [ESP + 0x10]          ; 00549501
        ;   Label: LAB_00549501
    FSUB float ptr [ESP + 0x4]          ; 00549505
    FMUL double ptr [0x0063ec89]        ; 00549509 | DOUBLE_0063ec89
    FSQRT                               ; 0054950f
    FMUL double ptr [0x0063ec91]        ; 00549511 | DOUBLE_0063ec91
    FSTP float ptr [EBX + 0x3a4]        ; 00549517
    FLD float ptr [ESP]                 ; 0054951d
    FADD float ptr [ESP + 0xc]          ; 00549520
    FST float ptr [ESP + 0x30]          ; 00549524
    FLD float ptr [0x0063ec99]          ; 00549528 | FLOAT_0063ec99
    FXCH                                ; 0054952e
    FMUL ST1                            ; 00549530
    FLD float ptr [ESP + 0x8]           ; 00549532
    FLD float ptr [ESP + 0x4]           ; 00549536
    FADD float ptr [ESP + 0x10]         ; 0054953a
    FXCH                                ; 0054953e
    FADD float ptr [ESP + 0x14]         ; 00549540
    FXCH                                ; 00549544
    FST float ptr [ESP + 0x34]          ; 00549546
    FMUL ST3                            ; 0054954a
    FXCH                                ; 0054954c
    FST float ptr [ESP + 0x38]          ; 0054954e
    FMULP ST3                           ; 00549552
    LEA EDX,[EBX + 0x410]               ; 00549554
    LEA EAX,[ESP + 0x3c]                ; 0054955a
    FXCH                                ; 0054955e
    FSTP float ptr [ESP + 0x3c]         ; 00549560
    FSTP float ptr [ESP + 0x40]         ; 00549564
    FSTP float ptr [ESP + 0x44]         ; 00549568
    CMP EDX,EAX                         ; 0054956c
    JNZ 0x00549597                      ; 0054956e
        ;   XREF to: 00549597 (CONDITIONAL_JUMP)  ; LAB_00549597
    MOV EAX,dword ptr [ESP + 0x4]       ; 00549570
    MOV dword ptr [EBX + 0x414],EAX     ; 00549574
    ADD ESP,0x48                        ; 0054957a
    POP EBX                             ; 0054957d
    RET                                 ; 0054957e
    MOV EAX,dword ptr [EDX]             ; 0054957f
        ;   Label: LAB_0054957f
    MOV dword ptr [ESP],EAX             ; 00549581
    MOV EAX,dword ptr [EDX + 0x4]       ; 00549584
    MOV dword ptr [ESP + 0x4],EAX       ; 00549587
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054958b
    MOV dword ptr [ESP + 0x8],EAX       ; 0054958e
    JMP 0x005494e2                      ; 00549592
        ;   XREF to: 005494e2 (UNCONDITIONAL_JUMP)  ; LAB_005494e2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00549597
        ;   Label: LAB_00549597
    MOV dword ptr [EDX],EAX             ; 0054959b
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054959d
    MOV dword ptr [EDX + 0x4],EAX       ; 005495a1
    MOV EAX,dword ptr [ESP + 0x44]      ; 005495a4
    MOV dword ptr [EDX + 0x8],EAX       ; 005495a8
    MOV EAX,dword ptr [ESP + 0x4]       ; 005495ab
    MOV dword ptr [EBX + 0x414],EAX     ; 005495af
    ADD ESP,0x48                        ; 005495b5
    POP EBX                             ; 005495b8
    RET                                 ; 005495b9

