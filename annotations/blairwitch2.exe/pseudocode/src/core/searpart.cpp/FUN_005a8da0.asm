; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_searpart_cpp_FUN_005a8da0(undefined4 param_1)
;
;
; Called Functions:
;   core_basicnpc.cpp_FUN_005a4870
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8da0
        ;   Label: core_searpart.cpp_FUN_005a8da0
    PUSH EDX                            ; 005a8da4
    CALL core_basicnpc.cpp_FUN_005a4870 ; 005a8da5
        ;   XREF to: 005a4870 (UNCONDITIONAL_CALL)  ; undefined core_basicnpc.cpp_FUN_005a4870()
    ADD ESP,0x4                         ; 005a8daa
    RET                                 ; 005a8dad

