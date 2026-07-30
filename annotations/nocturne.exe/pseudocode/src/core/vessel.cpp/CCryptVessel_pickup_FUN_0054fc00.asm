; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vessel_cpp_CCryptVessel_pickup_FUN_0054fc00(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054fc00
        ;   Label: core_vessel.cpp_CCryptVessel_pickup_FUN_0054fc00
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054fc04
    MOV dword ptr [EDX + 0x2cc],EAX     ; 0054fc08
    RET                                 ; 0054fc0e

