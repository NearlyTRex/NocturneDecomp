; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_smiley_cpp_CSmiley_ctor_FUN_0051fcf0(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_smiley_dfm_00591eed
;   float FLOAT_005a1f9c = 50
;   float FLOAT_005a1fa0 = 100
;   undefined1* PTR_core_smiley.cpp_CSmiley_setup_FUN_0051fd90_005a1fb4 = 0051fd90
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051fcf0
        ;   Label: core_smiley.cpp_CSmiley_ctor_FUN_0051fcf0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051fcf1
    PUSH EDX                            ; 0051fcf5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 0051fcf6
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_ctor_FUN_00479560()
    ADD ESP,0x4                         ; 0051fcfb
    PUSH 0x591eed                       ; 0051fcfe | = "smiley.dfm"
    MOV EBX,EAX                         ; 0051fd03
    ADD EAX,0x150                       ; 0051fd05
    PUSH EAX                            ; 0051fd0a
    MOV dword ptr [EAX + -0x4],0x5a1fb4 ; 0051fd0b | PTR_core_smiley.cpp_CSmiley_setup_FUN_0051fd90_005a1fb4
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 0051fd12
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    MOV dword ptr [EBX + 0xbd24],0x0    ; 0051fd17
    MOV dword ptr [EBX + 0xbd28],0x42c80000 ; 0051fd21
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 0051fd2b
    MOV dword ptr [EBX + 0x2dd8],0x3f666666 ; 0051fd35
    MOV dword ptr [EBX + 0xbd58],0x0    ; 0051fd3f
    FLD float ptr [0x005a1f9c]          ; 0051fd49 | FLOAT_005a1f9c
    MOV dword ptr [EBX + 0xbd5c],0x0    ; 0051fd4f
    FLD float ptr [0x005a1fa0]          ; 0051fd59 | FLOAT_005a1fa0
    MOV dword ptr [EBX + 0xbd60],0x0    ; 0051fd5f
    ADD ESP,0x8                         ; 0051fd69
    MOV dword ptr [EBX + 0xbd64],0x1    ; 0051fd6c
    MOV EAX,EBX                         ; 0051fd76
    FXCH                                ; 0051fd78
    FSTP float ptr [EBX + 0x2ddc]       ; 0051fd7a
    FSTP float ptr [EBX + 0x2de0]       ; 0051fd80
    POP EBX                             ; 0051fd86
    RET                                 ; 0051fd87

