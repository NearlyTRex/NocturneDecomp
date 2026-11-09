; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042d8a0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052f0a3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042d8a0
        ;   Label: core_charactr.cpp_FUN_0042d8a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042d8a4
    MOV dword ptr [EAX + 0xcd80],EDX    ; 0042d8a8
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042d8ae
    MOV dword ptr [EAX + 0xcd8c],EDX    ; 0042d8b2
    RET                                 ; 0042d8b8

