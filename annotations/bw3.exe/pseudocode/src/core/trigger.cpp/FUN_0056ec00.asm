; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_trigger_cpp_FUN_0056ec00(int param_1,int *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ec00
        ;   Label: core_trigger.cpp_FUN_0056ec00
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056ec01
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056ec05
    MOV ECX,dword ptr [EDX]             ; 0056ec09
    CMP ECX,0x1                         ; 0056ec0b
    JNZ 0x0056ec20                      ; 0056ec0e
        ;   XREF to: 0056ec20 (CONDITIONAL_JUMP)  ; LAB_0056ec20
    MOV EBX,dword ptr [EAX + 0x174]     ; 0056ec10
    CMP EBX,0x4                         ; 0056ec16
    JZ 0x0056ec4e                       ; 0056ec19
        ;   XREF to: 0056ec4e (CONDITIONAL_JUMP)  ; LAB_0056ec4e
    CMP EBX,0x7                         ; 0056ec1b
    JZ 0x0056ec4e                       ; 0056ec1e
        ;   XREF to: 0056ec4e (CONDITIONAL_JUMP)  ; LAB_0056ec4e
    CMP dword ptr [EDX],0x3             ; 0056ec20
        ;   Label: LAB_0056ec20
    JNZ 0x0056ec39                      ; 0056ec23
        ;   XREF to: 0056ec39 (CONDITIONAL_JUMP)  ; LAB_0056ec39
    CMP dword ptr [EAX + 0x174],0x5     ; 0056ec25
    JNZ 0x0056ec39                      ; 0056ec2c
        ;   XREF to: 0056ec39 (CONDITIONAL_JUMP)  ; LAB_0056ec39
    MOV EBX,dword ptr [EAX + 0x2f4]     ; 0056ec2e
    CMP EBX,dword ptr [EDX + 0x4]       ; 0056ec34
    JZ 0x0056ec47                       ; 0056ec37
        ;   XREF to: 0056ec47 (CONDITIONAL_JUMP)  ; LAB_0056ec47
    CMP dword ptr [EDX],0x4             ; 0056ec39
        ;   Label: LAB_0056ec39
    JNZ 0x0056ec52                      ; 0056ec3c
        ;   XREF to: 0056ec52 (CONDITIONAL_JUMP)  ; LAB_0056ec52
    CMP dword ptr [EAX + 0x174],0xa     ; 0056ec3e
    JNZ 0x0056ec52                      ; 0056ec45
        ;   XREF to: 0056ec52 (CONDITIONAL_JUMP)  ; LAB_0056ec52
    MOV EAX,0x1                         ; 0056ec47
        ;   Label: LAB_0056ec47
    POP EBX                             ; 0056ec4c
    RET                                 ; 0056ec4d
    MOV EAX,ECX                         ; 0056ec4e
        ;   Label: LAB_0056ec4e
    POP EBX                             ; 0056ec50
    RET                                 ; 0056ec51
    XOR EAX,EAX                         ; 0056ec52
        ;   Label: LAB_0056ec52
    POP EBX                             ; 0056ec54
    RET                                 ; 0056ec55

