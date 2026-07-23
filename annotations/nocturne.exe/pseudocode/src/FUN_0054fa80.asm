; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054fa80(int param_1)
;
;
; Referenced Globals:
;   double DOUBLE_0059746b = 0.5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_flame.cpp_CFlame_setup_FUN_0048d050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054fa80
        ;   Label: FUN_0054fa80
    SUB ESP,0x24                        ; 0054fa81
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0054fa84
    PUSH EBX                            ; 0054fa88
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 0054fa89
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    ADD ESP,0x4                         ; 0054fa8e
    LEA EAX,[EBX + 0x150]               ; 0054fa91
    PUSH EAX                            ; 0054fa97
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0054fa98
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    ADD ESP,0x4                         ; 0054fa9d
    LEA EAX,[EBX + 0x65c]               ; 0054faa0
    PUSH EAX                            ; 0054faa6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0054faa7
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    ADD ESP,0x4                         ; 0054faac
    MOV EDX,ESP                         ; 0054faaf
    PUSH EDX                            ; 0054fab1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054fab2
    PUSH EBX                            ; 0054fab8
    CALL dword ptr [EAX + 0x14]         ; 0054fab9
    ADD ESP,0x8                         ; 0054fabc
    MOV EDX,dword ptr [EBX + 0x3a0]     ; 0054fabf
    MOV dword ptr [EBX + 0x2cc],0x0     ; 0054fac5
    TEST EDX,EDX                        ; 0054facf
    JZ 0x0054fb57                       ; 0054fad1
        ;   XREF to: 0054fb57 (CONDITIONAL_JUMP)  ; LAB_0054fb57
    MOV EAX,EDX                         ; 0054fad7
    LEA EDX,[EBX + 0x20]                ; 0054fad9
    FLD float ptr [EAX + 0x20]          ; 0054fadc
    FSUB float ptr [EDX]                ; 0054fadf
    FSTP float ptr [ESP + 0x18]         ; 0054fae1
    FLD float ptr [EAX + 0x24]          ; 0054fae5
    FSUB float ptr [EDX + 0x4]          ; 0054fae8
    FST float ptr [ESP + 0x1c]          ; 0054faeb
    FMUL float ptr [ESP + 0x1c]         ; 0054faef
    FLD float ptr [ESP + 0x18]          ; 0054faf3
    FMUL ST0                            ; 0054faf7
    FLD float ptr [EAX + 0x28]          ; 0054faf9
    FSUB float ptr [EDX + 0x8]          ; 0054fafc
    FXCH                                ; 0054faff
    FADDP ST2,ST0                       ; 0054fb01
    FST float ptr [ESP + 0x20]          ; 0054fb03
    FMUL float ptr [ESP + 0x20]         ; 0054fb07
    FADDP                               ; 0054fb0b
    FSQRT                               ; 0054fb0d
    FCOMP double ptr [0x0059746b]       ; 0054fb0f | DOUBLE_0059746b
    FNSTSW AX                           ; 0054fb15
    SAHF                                ; 0054fb17
    JNC 0x0054fb57                      ; 0054fb18
        ;   XREF to: 0054fb57 (CONDITIONAL_JUMP)  ; LAB_0054fb57
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 0054fb1a
    MOV ECX,dword ptr [EAX + 0x20]      ; 0054fb20
    MOV dword ptr [EDX],ECX             ; 0054fb23
    MOV ECX,dword ptr [EAX + 0x24]      ; 0054fb25
    MOV dword ptr [EDX + 0x4],ECX       ; 0054fb28
    MOV ECX,dword ptr [EAX + 0x28]      ; 0054fb2b
    MOV dword ptr [EDX + 0x8],ECX       ; 0054fb2e
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0054fb31
    MOV dword ptr [EDX + 0xc],EAX       ; 0054fb34
    MOV EDX,dword ptr [EBX + 0x3a0]     ; 0054fb37
    LEA EAX,[EBX + 0x30]                ; 0054fb3d
    ADD EDX,0x30                        ; 0054fb40
    CMP EAX,EDX                         ; 0054fb43
    JZ 0x0054fb57                       ; 0054fb45
        ;   XREF to: 0054fb57 (CONDITIONAL_JUMP)  ; LAB_0054fb57
    MOV ECX,dword ptr [EDX]             ; 0054fb47
    MOV dword ptr [EAX],ECX             ; 0054fb49
    MOV ECX,dword ptr [EDX + 0x4]       ; 0054fb4b
    MOV dword ptr [EAX + 0x4],ECX       ; 0054fb4e
    MOV ECX,dword ptr [EDX + 0x8]       ; 0054fb51
    MOV dword ptr [EAX + 0x8],ECX       ; 0054fb54
    MOV dword ptr [EBX + 0x3b8],0x1     ; 0054fb57
        ;   Label: LAB_0054fb57
    MOV dword ptr [EBX + 0x55c],0x0     ; 0054fb61
    MOV dword ptr [EBX + 0x568],0x1     ; 0054fb6b
    MOV dword ptr [EBX + 0x560],0x0     ; 0054fb75
    MOV dword ptr [EBX + 0x50c],0x3f000000 ; 0054fb7f
    LEA EAX,[EBX + 0x3bc]               ; 0054fb89
    MOV dword ptr [EBX + 0x510],0x3f800000 ; 0054fb8f
    PUSH EAX                            ; 0054fb99
    MOV dword ptr [EBX + 0x514],0x3f000000 ; 0054fb9a
    CALL core_flame.cpp_CFlame_setup_FUN_0048d050 ; 0054fba4
        ;   XREF to: 0048d050 (UNCONDITIONAL_CALL)  ; undefined core_flame.cpp_CFlame_setup_FUN_0048d050()
    ADD ESP,0x4                         ; 0054fba9
    MOV dword ptr [EBX + 0xfc],0x1      ; 0054fbac
    ADD ESP,0x24                        ; 0054fbb6
    POP EBX                             ; 0054fbb9
    RET                                 ; 0054fbba

