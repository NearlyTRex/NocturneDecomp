; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_texture_cpp_FUN_00569ec0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_0056ab6c at 0056abc0
;
; Called Functions:
;   engine_texture.cpp_FUN_00569670
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00569ec0
        ;   Label: engine_texture.cpp_FUN_00569ec0
    PUSH EDI                            ; 00569ec1
    MOV EDI,dword ptr [ESP + 0xc]       ; 00569ec2
    PUSH EDI                            ; 00569ec6
    CALL engine_texture.cpp_FUN_00569670 ; 00569ec7
        ;   XREF to: 00569670 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00569670()
    MOV ECX,EAX                         ; 00569ecc
    SHL EAX,0x2                         ; 00569ece
    SUB EAX,ECX                         ; 00569ed1
    LEA EDX,[EDI + 0x4]                 ; 00569ed3
    SHL EAX,0x5                         ; 00569ed6
    ADD ESP,0x4                         ; 00569ed9
    ADD EDX,EAX                         ; 00569edc
    MOV ESI,dword ptr [ESP + 0x10]      ; 00569ede
    LEA EDI,[EDX + 0x4]                 ; 00569ee2
    PUSH EDI                            ; 00569ee5
    MOV AL,byte ptr [ESI]               ; 00569ee6
        ;   Label: LAB_00569ee6
    MOV byte ptr [EDI],AL               ; 00569ee8
    CMP AL,0x0                          ; 00569eea
    JZ 0x00569efe                       ; 00569eec
        ;   XREF to: 00569efe (CONDITIONAL_JUMP)  ; LAB_00569efe
    MOV AL,byte ptr [ESI + 0x1]         ; 00569eee
    ADD ESI,0x2                         ; 00569ef1
    MOV byte ptr [EDI + 0x1],AL         ; 00569ef4
    ADD EDI,0x2                         ; 00569ef7
    CMP AL,0x0                          ; 00569efa
    JNZ 0x00569ee6                      ; 00569efc
        ;   XREF to: 00569ee6 (CONDITIONAL_JUMP)  ; LAB_00569ee6
    POP EDI                             ; 00569efe
        ;   Label: LAB_00569efe
    MOV EAX,dword ptr [ESP + 0x18]      ; 00569eff
    MOV dword ptr [EDX + 0x58],0x1      ; 00569f03
    MOV dword ptr [EDX + 0x50],EAX      ; 00569f0a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00569f0d
    MOV dword ptr [EDX],EAX             ; 00569f11
    MOV EAX,ECX                         ; 00569f13
    POP EDI                             ; 00569f15
    POP ESI                             ; 00569f16
    RET                                 ; 00569f17

