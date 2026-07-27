; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_bride_cpp_FUN_0041fbb0(undefined4 param_1)
;
;
; XREF[1]:
;   core_bride.cpp_FUN_0041fb80 at 0041fb93
;
; Referenced Globals:
;   TerminatedCString s_bride_dfm_005799f4
;   float FLOAT_0059ad10 = 50
;   float FLOAT_0059ad14 = 100
;   undefined1* PTR_core_bride.cpp_CBride_setup_FUN_0041fc20_0059ad24 = 0041fc20
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041fbb0
        ;   Label: core_bride.cpp_FUN_0041fbb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0041fbb1
    PUSH EDX                            ; 0041fbb5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 0041fbb6
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_ctor_FUN_00479560()
    ADD ESP,0x4                         ; 0041fbbb
    PUSH 0x5799f4                       ; 0041fbbe | = "bride.dfm"
    MOV EBX,EAX                         ; 0041fbc3
    ADD EAX,0x150                       ; 0041fbc5
    PUSH EAX                            ; 0041fbca
    MOV dword ptr [EAX + -0x4],0x59ad24 ; 0041fbcb | PTR_core_bride.cpp_CBride_setup_FUN_0041fc20_0059ad24
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 0041fbd2
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    FLD float ptr [0x0059ad10]          ; 0041fbd7 | FLOAT_0059ad10
    MOV dword ptr [EBX + 0x2dd4],0x3f400000 ; 0041fbdd
    FLD float ptr [0x0059ad14]          ; 0041fbe7 | FLOAT_0059ad14
    MOV dword ptr [EBX + 0x2dd8],0x3fc00000 ; 0041fbed
    ADD ESP,0x8                         ; 0041fbf7
    MOV dword ptr [EBX + 0xbd48],0x0    ; 0041fbfa
    MOV EAX,EBX                         ; 0041fc04
    FXCH                                ; 0041fc06
    FSTP float ptr [EBX + 0x2ddc]       ; 0041fc08
    FSTP float ptr [EBX + 0x2de0]       ; 0041fc0e
    POP EBX                             ; 0041fc14
    RET                                 ; 0041fc15

