; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_extractIPOctets_FUN_00548cd0(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548cd0
        ;   Label: support_trisock.cpp_extractIPOctets_FUN_00548cd0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00548cd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00548cd5
    MOV ECX,dword ptr [ESP + 0x14]      ; 00548cd9
    TEST EBX,EBX                        ; 00548cdd
    JNZ 0x00548d08                      ; 00548cdf
        ;   XREF to: 00548d08 (CONDITIONAL_JUMP)  ; LAB_00548d08
    CMP dword ptr [ESP + 0x10],0x0      ; 00548ce1
        ;   Label: LAB_00548ce1
    JZ 0x00548cf3                       ; 00548ce6
        ;   XREF to: 00548cf3 (CONDITIONAL_JUMP)  ; LAB_00548cf3
    XOR EDX,EDX                         ; 00548ce8
    MOV EBX,dword ptr [ESP + 0x10]      ; 00548cea
    MOV DL,byte ptr [EAX + 0x1]         ; 00548cee
    MOV dword ptr [EBX],EDX             ; 00548cf1
    TEST ECX,ECX                        ; 00548cf3
        ;   Label: LAB_00548cf3
    JZ 0x00548cfe                       ; 00548cf5
        ;   XREF to: 00548cfe (CONDITIONAL_JUMP)  ; LAB_00548cfe
    XOR EDX,EDX                         ; 00548cf7
    MOV DL,byte ptr [EAX + 0x2]         ; 00548cf9
    MOV dword ptr [ECX],EDX             ; 00548cfc
    MOV ECX,dword ptr [ESP + 0x18]      ; 00548cfe
        ;   Label: LAB_00548cfe
    TEST ECX,ECX                        ; 00548d02
    JNZ 0x00548d10                      ; 00548d04
        ;   XREF to: 00548d10 (CONDITIONAL_JUMP)  ; LAB_00548d10
    POP EBX                             ; 00548d06
    RET                                 ; 00548d07
    XOR EDX,EDX                         ; 00548d08
        ;   Label: LAB_00548d08
    MOV DL,byte ptr [EAX]               ; 00548d0a
    MOV dword ptr [EBX],EDX             ; 00548d0c
    JMP 0x00548ce1                      ; 00548d0e
        ;   XREF to: 00548ce1 (UNCONDITIONAL_JUMP)  ; LAB_00548ce1
    MOV AL,byte ptr [EAX + 0x3]         ; 00548d10
        ;   Label: LAB_00548d10
    AND EAX,0xff                        ; 00548d13
    MOV dword ptr [ECX],EAX             ; 00548d18
    POP EBX                             ; 00548d1a
    RET                                 ; 00548d1b

