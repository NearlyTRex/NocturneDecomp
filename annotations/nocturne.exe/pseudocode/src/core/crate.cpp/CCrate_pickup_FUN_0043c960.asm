; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crate_cpp_CCrate_pickup_FUN_0043c960(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043c960
        ;   Label: core_crate.cpp_CCrate_pickup_FUN_0043c960
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043c964
    MOV dword ptr [EDX + 0x2cc],EAX     ; 0043c968
    RET                                 ; 0043c96e

