; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hpriest_cpp_FUN_004f0a70(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004f0a70
        ;   Label: core_hpriest.cpp_FUN_004f0a70
    MOV EDX,dword ptr [ESP + 0x4]       ; 004f0a74
    MOV ECX,dword ptr [EDX + 0x27b0]    ; 004f0a78
    TEST ECX,ECX                        ; 004f0a7e
    JZ 0x004f0a83                       ; 004f0a80
        ;   XREF to: 004f0a83 (CONDITIONAL_JUMP)  ; LAB_004f0a83
    RET                                 ; 004f0a82
    MOV dword ptr [EAX + 0x30],0x64     ; 004f0a83
        ;   Label: LAB_004f0a83
    MOV dword ptr [EAX + 0x4],ECX       ; 004f0a8a
    RET                                 ; 004f0a8d

