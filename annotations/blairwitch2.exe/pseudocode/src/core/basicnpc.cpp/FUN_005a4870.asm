; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_basicnpc_cpp_FUN_005a4870(undefined4 param_1)
;
;
; XREF[6]:
;   core_belling.cpp_FUN_005a9050 at 005a9055
;   core_grandma.cpp_FUN_005a7be0 at 005a7be6
;   core_robin.cpp_FUN_005a6030 at 005a6037
;   core_searpart.cpp_FUN_005a8da0 at 005a8da5
;   core_steuben.cpp_FUN_005a5c10 at 005a5c15
;   core_union.cpp_FUN_005a4c00 at 005a4c07
;
; Called Functions:
;   unkafter_basicene.cpp_FUN_0059e6a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a4870
        ;   Label: core_basicnpc.cpp_FUN_005a4870
    PUSH EDX                            ; 005a4874
    CALL unkafter_basicene.cpp_FUN_0059e6a0 ; 005a4875
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e6a0()
    ADD ESP,0x4                         ; 005a487a
    RET                                 ; 005a487d

