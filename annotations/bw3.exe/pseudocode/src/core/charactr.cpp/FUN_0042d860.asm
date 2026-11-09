; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042d860(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052eb81
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042d860
        ;   Label: core_charactr.cpp_FUN_0042d860
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042d864
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042d868
    MOV dword ptr [EAX + 0xcd88],ECX    ; 0042d86c
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042d872
    MOV dword ptr [EAX + 0xcd84],0x0    ; 0042d876
    TEST ECX,ECX                        ; 0042d880
    JNZ 0x0042d88b                      ; 0042d882
        ;   XREF to: 0042d88b (CONDITIONAL_JUMP)  ; LAB_0042d88b
    MOV dword ptr [EAX + 0xcd78],EDX    ; 0042d884
    RET                                 ; 0042d88a
    MOV dword ptr [EAX + 0xcd7c],EDX    ; 0042d88b
        ;   Label: LAB_0042d88b
    RET                                 ; 0042d891

