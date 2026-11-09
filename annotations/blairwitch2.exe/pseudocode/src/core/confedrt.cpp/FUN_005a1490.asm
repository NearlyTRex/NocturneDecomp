; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_confedrt_cpp_FUN_005a1490(undefined4 param_1)
;
;
; Called Functions:
;   unkafter_basicene.cpp_FUN_0059fa20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1490
        ;   Label: core_confedrt.cpp_FUN_005a1490
    PUSH EDX                            ; 005a1494
    CALL unkafter_basicene.cpp_FUN_0059fa20 ; 005a1495
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059fa20()
    ADD ESP,0x4                         ; 005a149a
    RET                                 ; 005a149d

