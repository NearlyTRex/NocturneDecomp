; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_texture_cpp_FUN_00596ed0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_00597b7c at 00597bd0
;
; Called Functions:
;   engine_texture.cpp_FUN_00596680
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00596ed0
        ;   Label: engine_texture.cpp_FUN_00596ed0
    PUSH EDI                            ; 00596ed1
    MOV EDI,dword ptr [ESP + 0xc]       ; 00596ed2
    PUSH EDI                            ; 00596ed6
    CALL engine_texture.cpp_FUN_00596680 ; 00596ed7
        ;   XREF to: 00596680 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00596680()
    MOV ECX,EAX                         ; 00596edc
    SHL EAX,0x2                         ; 00596ede
    SUB EAX,ECX                         ; 00596ee1
    LEA EDX,[EDI + 0x4]                 ; 00596ee3
    SHL EAX,0x5                         ; 00596ee6
    ADD ESP,0x4                         ; 00596ee9
    ADD EDX,EAX                         ; 00596eec
    MOV ESI,dword ptr [ESP + 0x10]      ; 00596eee
    LEA EDI,[EDX + 0x4]                 ; 00596ef2
    PUSH EDI                            ; 00596ef5
    MOV AL,byte ptr [ESI]               ; 00596ef6
        ;   Label: LAB_00596ef6
    MOV byte ptr [EDI],AL               ; 00596ef8
    CMP AL,0x0                          ; 00596efa
    JZ 0x00596f0e                       ; 00596efc
        ;   XREF to: 00596f0e (CONDITIONAL_JUMP)  ; LAB_00596f0e
    MOV AL,byte ptr [ESI + 0x1]         ; 00596efe
    ADD ESI,0x2                         ; 00596f01
    MOV byte ptr [EDI + 0x1],AL         ; 00596f04
    ADD EDI,0x2                         ; 00596f07
    CMP AL,0x0                          ; 00596f0a
    JNZ 0x00596ef6                      ; 00596f0c
        ;   XREF to: 00596ef6 (CONDITIONAL_JUMP)  ; LAB_00596ef6
    POP EDI                             ; 00596f0e
        ;   Label: LAB_00596f0e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00596f0f
    MOV dword ptr [EDX + 0x58],0x1      ; 00596f13
    MOV dword ptr [EDX + 0x50],EAX      ; 00596f1a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00596f1d
    MOV dword ptr [EDX],EAX             ; 00596f21
    MOV EAX,ECX                         ; 00596f23
    POP EDI                             ; 00596f25
    POP ESI                             ; 00596f26
    RET                                 ; 00596f27

