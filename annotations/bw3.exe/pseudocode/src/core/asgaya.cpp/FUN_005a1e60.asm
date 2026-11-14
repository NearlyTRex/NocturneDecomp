; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * core_asgaya_cpp_FUN_005a1e60(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02d24d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1e60
        ;   Label: core_asgaya.cpp_FUN_005a1e60
    PUSH ESI                            ; 005a1e61
    MOV EBX,dword ptr [0x02d24d80]      ; 005a1e62 | DAT_02d24d80
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a1e68
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a1e6c
    MOV EAX,0x2d24d84                   ; 005a1e70
    XOR EDX,EDX                         ; 005a1e75
    TEST EBX,EBX                        ; 005a1e77
    JLE 0x005a1e8b                      ; 005a1e79
        ;   XREF to: 005a1e8b (CONDITIONAL_JUMP)  ; LAB_005a1e8b
    CMP ECX,dword ptr [EAX]             ; 005a1e7b
        ;   Label: LAB_005a1e7b
    JNZ 0x005a1e83                      ; 005a1e7d
        ;   XREF to: 005a1e83 (CONDITIONAL_JUMP)  ; LAB_005a1e83
    CMP EAX,ESI                         ; 005a1e7f
    JNZ 0x005a1e8d                      ; 005a1e81
        ;   XREF to: 005a1e8d (CONDITIONAL_JUMP)  ; LAB_005a1e8d
    INC EDX                             ; 005a1e83
        ;   Label: LAB_005a1e83
    ADD EAX,0x50                        ; 005a1e84
    CMP EDX,EBX                         ; 005a1e87
    JL 0x005a1e7b                       ; 005a1e89
        ;   XREF to: 005a1e7b (CONDITIONAL_JUMP)  ; LAB_005a1e7b
    XOR EAX,EAX                         ; 005a1e8b
        ;   Label: LAB_005a1e8b
    MOV dword ptr [0x02d24d80],EBX      ; 005a1e8d | DAT_02d24d80
        ;   Label: LAB_005a1e8d
    POP ESI                             ; 005a1e93
    POP EBX                             ; 005a1e94
    RET                                 ; 005a1e95

