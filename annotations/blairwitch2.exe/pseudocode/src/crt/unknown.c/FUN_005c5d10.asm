; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c5d10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; Referenced Globals:
;   undefined1* PTR_crt_unknown.c_FUN_005c67b0_0061f7f0 = 005c67b0
;   undefined1* PTR_crt_unknown.c_FUN_005c68a8_0061f7f4 = 005c68a8
;   undefined1* PTR_crt_unknown.c_FUN_005c5cd0_0061f7f8 = 005c5cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5d10
        ;   Label: crt_unknown.c_FUN_005c5d10
    PUSH ESI                            ; 005c5d11
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c5d12
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c5d16
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c5d1a
    TEST EBX,EBX                        ; 005c5d1e
    JZ 0x005c5d31                       ; 005c5d20
        ;   XREF to: 005c5d31 (CONDITIONAL_JUMP)  ; LAB_005c5d31
    MOV EAX,dword ptr [EBX]             ; 005c5d22
    MOV EDX,dword ptr [0x0061f7f0]      ; 005c5d24 | PTR_crt_unknown.c_FUN_005c67b0_0061f7f0
    MOV [0x0061f7f0],EAX                ; 005c5d2a | PTR_crt_unknown.c_FUN_005c67b0_0061f7f0
    MOV dword ptr [EBX],EDX             ; 005c5d2f
    TEST ESI,ESI                        ; 005c5d31
        ;   Label: LAB_005c5d31
    JZ 0x005c5d44                       ; 005c5d33
        ;   XREF to: 005c5d44 (CONDITIONAL_JUMP)  ; LAB_005c5d44
    MOV EAX,dword ptr [ESI]             ; 005c5d35
    MOV EDX,dword ptr [0x0061f7f4]      ; 005c5d37 | PTR_crt_unknown.c_FUN_005c68a8_0061f7f4
    MOV [0x0061f7f4],EAX                ; 005c5d3d | PTR_crt_unknown.c_FUN_005c68a8_0061f7f4
    MOV dword ptr [ESI],EDX             ; 005c5d42
    TEST ECX,ECX                        ; 005c5d44
        ;   Label: LAB_005c5d44
    JZ 0x005c5d57                       ; 005c5d46
        ;   XREF to: 005c5d57 (CONDITIONAL_JUMP)  ; LAB_005c5d57
    MOV EAX,dword ptr [ECX]             ; 005c5d48
    MOV EDX,dword ptr [0x0061f7f8]      ; 005c5d4a | PTR_crt_unknown.c_FUN_005c5cd0_0061f7f8
    MOV [0x0061f7f8],EAX                ; 005c5d50 | PTR_crt_unknown.c_FUN_005c5cd0_0061f7f8
    MOV dword ptr [ECX],EDX             ; 005c5d55
    POP ESI                             ; 005c5d57
        ;   Label: LAB_005c5d57
    POP EBX                             ; 005c5d58
    RET                                 ; 005c5d59

