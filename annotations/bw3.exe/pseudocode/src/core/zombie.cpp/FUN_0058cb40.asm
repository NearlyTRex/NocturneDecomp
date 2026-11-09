; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_zombie_cpp_FUN_0058cb40(int param_1,undefined4 param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058cb40
        ;   Label: core_zombie.cpp_FUN_0058cb40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058cb41
    CMP dword ptr [ESP + 0x10],0x1      ; 0058cb45
    JNZ 0x0058cb71                      ; 0058cb4a
        ;   XREF to: 0058cb71 (CONDITIONAL_JUMP)  ; LAB_0058cb71
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 0058cb4c
    TEST ECX,ECX                        ; 0058cb52
    JNZ 0x0058cb75                      ; 0058cb54
        ;   XREF to: 0058cb75 (CONDITIONAL_JUMP)  ; LAB_0058cb75
    MOV EAX,dword ptr [ESP + 0xc]       ; 0058cb56
        ;   Label: LAB_0058cb56
    MOV dword ptr [EBX + 0x26fc],EAX    ; 0058cb5a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058cb60
    MOV dword ptr [EBX + 0x2700],EAX    ; 0058cb64
    MOV EAX,0x1                         ; 0058cb6a
    POP EBX                             ; 0058cb6f
    RET                                 ; 0058cb70
    XOR EAX,EAX                         ; 0058cb71
        ;   Label: LAB_0058cb71
    POP EBX                             ; 0058cb73
    RET                                 ; 0058cb74
    PUSH ECX                            ; 0058cb75
        ;   Label: LAB_0058cb75
    MOV EDX,dword ptr [ECX + 0x154]     ; 0058cb76
    CALL dword ptr [EDX + 0xf4]         ; 0058cb7c
    ADD ESP,0x4                         ; 0058cb82
    CMP EAX,EBX                         ; 0058cb85
    JNZ 0x0058cb56                      ; 0058cb87
        ;   XREF to: 0058cb56 (CONDITIONAL_JUMP)  ; LAB_0058cb56
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058cb89
    PUSH EAX                            ; 0058cb8f
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058cb90
    CALL dword ptr [EDX + 0xf0]         ; 0058cb96
    ADD ESP,0x4                         ; 0058cb9c
    JMP 0x0058cb56                      ; 0058cb9f
        ;   XREF to: 0058cb56 (UNCONDITIONAL_JUMP)  ; LAB_0058cb56

