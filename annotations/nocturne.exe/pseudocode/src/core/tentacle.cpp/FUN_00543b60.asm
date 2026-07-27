; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_tentacle_cpp_FUN_00543b60(undefined4 param_1)
;
;
; XREF[1]:
;   core_tentacle.cpp_FUN_00543b30 at 00543b43
;
; Referenced Globals:
;   TerminatedCString s_tentacle_dfm_00596512
;   undefined1* PTR_core_tentacle.cpp_CTentacle_setup_FUN_00543bc0_005a3104 = 00543bc0
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543b60
        ;   Label: core_tentacle.cpp_FUN_00543b60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00543b61
    PUSH EDX                            ; 00543b65
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 00543b66
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_ctor_FUN_00479560()
    ADD ESP,0x4                         ; 00543b6b
    PUSH 0x596512                       ; 00543b6e | = "tentacle.dfm"
    MOV EBX,EAX                         ; 00543b73
    ADD EAX,0x150                       ; 00543b75
    PUSH EAX                            ; 00543b7a
    MOV dword ptr [EAX + -0x4],0x5a3104 ; 00543b7b | PTR_core_tentacle.cpp_CTentacle_setup_FUN_00543bc0_005a3104
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00543b82
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    MOV dword ptr [EBX + 0x2ddc],0x42480000 ; 00543b87
    MOV dword ptr [EBX + 0x2de0],0x42c80000 ; 00543b91
    MOV dword ptr [EBX + 0xbd24],0x0    ; 00543b9b
    ADD ESP,0x8                         ; 00543ba5
    MOV dword ptr [EBX + 0xbd28],0x0    ; 00543ba8
    MOV EAX,EBX                         ; 00543bb2
    MOV dword ptr [EBX + 0xbd2c],0x0    ; 00543bb4
    POP EBX                             ; 00543bbe
    RET                                 ; 00543bbf

