; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDarkwolf * unkafter_darkwolf_cpp_CDarkwolf_ctor_FUN_00598780(CDarkwolf *this_ptr)
;
; Parameters:
; CDarkwolf *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_darkwolf.cpp_factoryFuncDarkwolf_FUN_00598750 at 00598763
;   unkafter_darkwolf.cpp_CWhitewolf_ctor_FUN_00598fe0 at 00598fe6
;
; Referenced Globals:
;   undefined4 DAT_005e79f8
;   undefined4 DAT_005e79fc
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_morph.cpp_CMorph_ctor_FUN_004fa8a0
;   core_skeleton.cpp_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598780
        ;   Label: unkafter_darkwolf.cpp_CDarkwolf_ctor_FUN_00598780
    MOV EBX,dword ptr [ESP + 0x8]       ; 00598781
    PUSH EBX                            ; 00598785
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 00598786
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059878b
    ADD EAX,0xd064                      ; 0059878e
    PUSH EAX                            ; 00598793
    CALL core_morph.cpp_CMorph_ctor_FUN_004fa8a0 ; 00598794
        ;   XREF to: 004fa8a0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_004fa8a0(CMorph * this_ptr)
    ADD ESP,0x4                         ; 00598799
    LEA EBX,[EAX + 0xffff2f9c]          ; 0059879c
    PUSH 0x5d97f7                       ; 005987a2
    LEA EAX,[EBX + 0x158]               ; 005987a7
    PUSH EAX                            ; 005987ad
    MOV dword ptr [EBX + 0x154],0x5e7a04 ; 005987ae
    CALL core_skeleton.cpp_FUN_0054eae0 ; 005987b8
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054eae0()
    FLD float ptr [0x005e79f8]          ; 005987bd | DAT_005e79f8
    MOV dword ptr [EBX + 0x326c],0x3f400000 ; 005987c3
    FLD float ptr [0x005e79fc]          ; 005987cd | DAT_005e79fc
    MOV dword ptr [EBX + 0x3270],0x3fc00000 ; 005987d3
    ADD ESP,0x8                         ; 005987dd
    MOV dword ptr [EBX + 0xd05c],0x0    ; 005987e0
    MOV EAX,EBX                         ; 005987ea
    FXCH                                ; 005987ec
    FSTP float ptr [EBX + 0x3274]       ; 005987ee
    FSTP float ptr [EBX + 0x3278]       ; 005987f4
    POP EBX                             ; 005987fa
    RET                                 ; 005987fb

