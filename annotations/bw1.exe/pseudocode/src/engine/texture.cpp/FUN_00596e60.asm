; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_texture_cpp_FUN_00596e60(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_00597ac0 at 00597b1a
;
; Called Functions:
;   engine_texture.cpp_FUN_00596680
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00596e60
        ;   Label: engine_texture.cpp_FUN_00596e60
    PUSH EDI                            ; 00596e61
    MOV EDI,dword ptr [ESP + 0xc]       ; 00596e62
    PUSH EDI                            ; 00596e66
    CALL engine_texture.cpp_FUN_00596680 ; 00596e67
        ;   XREF to: 00596680 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00596680()
    MOV ECX,EAX                         ; 00596e6c
    SHL EAX,0x2                         ; 00596e6e
    SUB EAX,ECX                         ; 00596e71
    LEA EDX,[EDI + 0x4]                 ; 00596e73
    SHL EAX,0x5                         ; 00596e76
    ADD ESP,0x4                         ; 00596e79
    ADD EDX,EAX                         ; 00596e7c
    MOV ESI,dword ptr [ESP + 0x10]      ; 00596e7e
    LEA EDI,[EDX + 0x4]                 ; 00596e82
    PUSH EDI                            ; 00596e85
    MOV AL,byte ptr [ESI]               ; 00596e86
        ;   Label: LAB_00596e86
    MOV byte ptr [EDI],AL               ; 00596e88
    CMP AL,0x0                          ; 00596e8a
    JZ 0x00596e9e                       ; 00596e8c
        ;   XREF to: 00596e9e (CONDITIONAL_JUMP)  ; LAB_00596e9e
    MOV AL,byte ptr [ESI + 0x1]         ; 00596e8e
    ADD ESI,0x2                         ; 00596e91
    MOV byte ptr [EDI + 0x1],AL         ; 00596e94
    ADD EDI,0x2                         ; 00596e97
    CMP AL,0x0                          ; 00596e9a
    JNZ 0x00596e86                      ; 00596e9c
        ;   XREF to: 00596e86 (CONDITIONAL_JUMP)  ; LAB_00596e86
    POP EDI                             ; 00596e9e
        ;   Label: LAB_00596e9e
    MOV EAX,dword ptr [ESP + 0x14]      ; 00596e9f
    MOV dword ptr [EDX + 0x58],0x1      ; 00596ea3
    MOV dword ptr [EDX],EAX             ; 00596eaa
    MOV EAX,dword ptr [ESP + 0x18]      ; 00596eac
    MOV dword ptr [EDX + 0x44],EAX      ; 00596eb0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00596eb3
    MOV dword ptr [EDX + 0x4c],EAX      ; 00596eb7
    MOV EAX,dword ptr [ESP + 0x20]      ; 00596eba
    MOV dword ptr [EDX + 0x48],EAX      ; 00596ebe
    MOV EAX,ECX                         ; 00596ec1
    POP EDI                             ; 00596ec3
    POP ESI                             ; 00596ec4
    RET                                 ; 00596ec5

