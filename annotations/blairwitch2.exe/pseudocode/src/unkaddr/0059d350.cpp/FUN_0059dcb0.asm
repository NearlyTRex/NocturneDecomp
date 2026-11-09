; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059d350_cpp_FUN_0059dcb0(int param_1,undefined4 param_2)
;
;
; XREF[12]:
;   core_confedrt.cpp_FUN_005a1180 at 005a126d
;   core_confzomb.cpp_FUN_005a1f40 at 005a1ffe
;   core_confzomb.cpp_FUN_005a2130 at 005a21f5
;   core_ghostchi.cpp_FUN_005a9580 at 005a966d
;   core_ghostchi.cpp_FUN_005a9770 at 005a985d
;   core_hag.cpp_FUN_005aaa80 at 005aab11
;   core_hag.cpp_FUN_005aab50 at 005aac08
;   core_robin.cpp_FUN_005a6140 at 005a61c5
;   core_schngeis.cpp_FUN_005a3280 at 005a333b
;   core_twigzomb.cpp_FUN_005a2ac0 at 005a2d88
;   ... and 2 more
;
; Called Functions:
;   unkaddr_0059d350.cpp_FUN_0059dce0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059dcb0
        ;   Label: unkaddr_0059d350.cpp_FUN_0059dcb0
    PUSH EDX                            ; 0059dcb4
    CALL unkaddr_0059d350.cpp_FUN_0059dce0 ; 0059dcb5
        ;   XREF to: 0059dce0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dce0()
    ADD ESP,0x4                         ; 0059dcba
    TEST EAX,EAX                        ; 0059dcbd
    JZ 0x0059dcc2                       ; 0059dcbf
        ;   XREF to: 0059dcc2 (CONDITIONAL_JUMP)  ; LAB_0059dcc2
    RET                                 ; 0059dcc1
    MOV EDX,dword ptr [ESP + 0x4]       ; 0059dcc2
        ;   Label: LAB_0059dcc2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059dcc6
    MOV dword ptr [EDX + 0x848],EAX     ; 0059dcca
    RET                                 ; 0059dcd0

