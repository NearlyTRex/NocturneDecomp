; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_demnfolk_cpp_FUN_00458f10(int param_1,undefined4 param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458f10
        ;   Label: unkafter_demnfolk.cpp_FUN_00458f10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00458f11
    CMP dword ptr [ESP + 0x10],0x1      ; 00458f15
    JNZ 0x00458f41                      ; 00458f1a
        ;   XREF to: 00458f41 (CONDITIONAL_JUMP)  ; LAB_00458f41
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00458f1c
    TEST ECX,ECX                        ; 00458f22
    JNZ 0x00458f45                      ; 00458f24
        ;   XREF to: 00458f45 (CONDITIONAL_JUMP)  ; LAB_00458f45
    MOV EAX,dword ptr [ESP + 0xc]       ; 00458f26
        ;   Label: LAB_00458f26
    MOV dword ptr [EBX + 0x26fc],EAX    ; 00458f2a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00458f30
    MOV dword ptr [EBX + 0x2700],EAX    ; 00458f34
    MOV EAX,0x1                         ; 00458f3a
    POP EBX                             ; 00458f3f
    RET                                 ; 00458f40
    XOR EAX,EAX                         ; 00458f41
        ;   Label: LAB_00458f41
    POP EBX                             ; 00458f43
    RET                                 ; 00458f44
    PUSH ECX                            ; 00458f45
        ;   Label: LAB_00458f45
    MOV EDX,dword ptr [ECX + 0x154]     ; 00458f46
    CALL dword ptr [EDX + 0xf4]         ; 00458f4c
    ADD ESP,0x4                         ; 00458f52
    CMP EAX,EBX                         ; 00458f55
    JNZ 0x00458f26                      ; 00458f57
        ;   XREF to: 00458f26 (CONDITIONAL_JUMP)  ; LAB_00458f26
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00458f59
    PUSH EAX                            ; 00458f5f
    MOV EDX,dword ptr [EAX + 0x154]     ; 00458f60
    CALL dword ptr [EDX + 0xf0]         ; 00458f66
    ADD ESP,0x4                         ; 00458f6c
    JMP 0x00458f26                      ; 00458f6f
        ;   XREF to: 00458f26 (UNCONDITIONAL_JUMP)  ; LAB_00458f26

