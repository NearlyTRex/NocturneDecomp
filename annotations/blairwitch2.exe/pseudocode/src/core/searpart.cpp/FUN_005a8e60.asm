; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_searpart_cpp_FUN_005a8e60(undefined4 param_1)
;
;
; Called Functions:
;   core_basicnpc.cpp_FUN_005a4920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8e60
        ;   Label: core_searpart.cpp_FUN_005a8e60
    PUSH EDX                            ; 005a8e64
    CALL core_basicnpc.cpp_FUN_005a4920 ; 005a8e65
        ;   XREF to: 005a4920 (UNCONDITIONAL_CALL)  ; undefined core_basicnpc.cpp_FUN_005a4920()
    ADD ESP,0x4                         ; 005a8e6a
    RET                                 ; 005a8e6d

