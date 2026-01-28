; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_filmreel_cpp_FUN_004be7d0(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004be7d0
        ;   Label: core_filmreel.cpp_FUN_004be7d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004be7d4
    MOV dword ptr [EDX + 0x2d4],EAX     ; 004be7d8
    RET                                 ; 004be7de

