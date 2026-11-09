; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_basicnpc_cpp_FUN_005a4920(undefined4 param_1)
;
;
; XREF[5]:
;   core_belling.cpp_FUN_005a9110 at 005a9115
;   core_grandma.cpp_FUN_005a7cd0 at 005a7cd5
;   core_searpart.cpp_FUN_005a8e60 at 005a8e65
;   core_steuben.cpp_FUN_005a5d50 at 005a5d55
;   core_union.cpp_FUN_005a5440 at 005a5445
;
; Called Functions:
;   unkafter_basicene.cpp_FUN_0059fa20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a4920
        ;   Label: core_basicnpc.cpp_FUN_005a4920
    PUSH EDX                            ; 005a4924
    CALL unkafter_basicene.cpp_FUN_0059fa20 ; 005a4925
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059fa20()
    ADD ESP,0x4                         ; 005a492a
    RET                                 ; 005a492d

