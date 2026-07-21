; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_werewolf_cpp_CWerewolf_ctor_FUN_00555a90(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_wolfbrn.dfm_00597cd3
;   undefined4 DAT_005a42f0
;   undefined4 DAT_005a42f4
;   undefined4 DAT_005a42f8
;   undefined1* PTR_core_werewolf.cpp_CWerewolf_setup_FUN_00555b40_005a4314 = 00555b40
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555a90
        ;   Label: core_werewolf.cpp_CWerewolf_ctor_FUN_00555a90
    MOV EDX,dword ptr [ESP + 0x8]       ; 00555a91
    PUSH EDX                            ; 00555a95
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 00555a96
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_ctor_FUN_00479560()
    ADD ESP,0x4                         ; 00555a9b
    PUSH 0x597cd3                       ; 00555a9e | = "wolfbrn.dfm"
    MOV EBX,EAX                         ; 00555aa3
    ADD EAX,0x150                       ; 00555aa5
    PUSH EAX                            ; 00555aaa
    MOV dword ptr [EAX + -0x4],0x5a4314 ; 00555aab | PTR_core_werewolf.cpp_CWerewolf_setup_FUN_00555b40_005a4314
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00555ab2
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    MOV dword ptr [EBX + 0x2dd4],0x3f800000 ; 00555ab7
    MOV dword ptr [EBX + 0x2dd8],0x40000000 ; 00555ac1
    MOV dword ptr [EBX + 0xbd24],0x0    ; 00555acb
    MOV dword ptr [EBX + 0xbd3c],0x1    ; 00555ad5
    MOV dword ptr [EBX + 0xbd50],0x0    ; 00555adf
    FLD float ptr [0x005a42f0]          ; 00555ae9 | DAT_005a42f0
    MOV dword ptr [EBX + 0xbd54],0x40a00000 ; 00555aef
    FLD float ptr [0x005a42f4]          ; 00555af9 | DAT_005a42f4
    MOV dword ptr [EBX + 0xbd58],0x0    ; 00555aff
    FLD float ptr [0x005a42f8]          ; 00555b09 | DAT_005a42f8
    MOV dword ptr [EBX + 0xbd5c],0x0    ; 00555b0f
    ADD ESP,0x8                         ; 00555b19
    MOV dword ptr [EBX + 0xbd60],0x0    ; 00555b1c
    MOV EAX,EBX                         ; 00555b26
    FXCH ST2                            ; 00555b28
    FSTP float ptr [EBX + 0x2ddc]       ; 00555b2a
    FSTP float ptr [EBX + 0x2de0]       ; 00555b30
    FSTP float ptr [EBX + 0xbd64]       ; 00555b36
    POP EBX                             ; 00555b3c
    RET                                 ; 00555b3d

