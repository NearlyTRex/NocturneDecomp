; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_script_cpp_FUN_0052a6a0(int param_1)
;
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 00527fc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0052a6a0
        ;   Label: core_script.cpp_FUN_0052a6a0
    MOV EAX,dword ptr [EDX + 0x468]     ; 0052a6a4
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x5fc] ; 0052a6aa
    RET                                 ; 0052a6b1

