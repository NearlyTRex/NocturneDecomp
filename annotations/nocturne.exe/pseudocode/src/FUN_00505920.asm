; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00505920(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005058f0 at 00505903
;
; Referenced Globals:
;   TerminatedCString s_sentinel_dfm_0058ff27
;   float FLOAT_005a173c = 50
;   float FLOAT_005a1740 = 100
;   undefined1* PTR_core_sentinel.cpp_CSentinel_setup_FUN_00505990_005a1754 = 00505990
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505920
        ;   Label: FUN_00505920
    MOV EDX,dword ptr [ESP + 0x8]       ; 00505921
    PUSH EDX                            ; 00505925
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 00505926
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_ctor_FUN_00479560()
    ADD ESP,0x4                         ; 0050592b
    PUSH 0x58ff27                       ; 0050592e | = "sentinel.dfm"
    MOV EBX,EAX                         ; 00505933
    ADD EAX,0x150                       ; 00505935
    PUSH EAX                            ; 0050593a
    MOV dword ptr [EAX + -0x4],0x5a1754 ; 0050593b | PTR_core_sentinel.cpp_CSentinel_setup_FUN_00505990_005a1754
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00505942
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    FLD float ptr [0x005a173c]          ; 00505947 | FLOAT_005a173c
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 0050594d
    FLD float ptr [0x005a1740]          ; 00505957 | FLOAT_005a1740
    MOV dword ptr [EBX + 0x2dd8],0x40000000 ; 0050595d
    ADD ESP,0x8                         ; 00505967
    MOV dword ptr [EBX + 0xbd28],0x0    ; 0050596a
    MOV EAX,EBX                         ; 00505974
    FXCH                                ; 00505976
    FSTP float ptr [EBX + 0x2ddc]       ; 00505978
    FSTP float ptr [EBX + 0x2de0]       ; 0050597e
    POP EBX                             ; 00505984
    RET                                 ; 00505985

