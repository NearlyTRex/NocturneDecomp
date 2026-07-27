; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_FUN_00481d50(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00481d50
        ;   Label: core_filmreel.cpp_FUN_00481d50
    MOV EAX,dword ptr [ESP + 0x8]       ; 00481d54
    MOV dword ptr [EDX + 0x2cc],EAX     ; 00481d58
    RET                                 ; 00481d5e

