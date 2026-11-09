; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_patrpoin_cpp_FUN_0059c9a0(int param_1)
;
;
; Called Functions:
;   unkafter_superopt.cpp_FUN_005a8290
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c9a0
        ;   Label: core_patrpoin.cpp_FUN_0059c9a0
    ADD EAX,0x154                       ; 0059c9a4
    PUSH EAX                            ; 0059c9a9
    CALL unkafter_superopt.cpp_FUN_005a8290 ; 0059c9aa
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8290()
    ADD ESP,0x4                         ; 0059c9af
    XOR EAX,EAX                         ; 0059c9b2
    RET                                 ; 0059c9b4

