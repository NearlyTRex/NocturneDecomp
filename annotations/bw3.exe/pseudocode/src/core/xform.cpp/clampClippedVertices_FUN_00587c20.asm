; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clampClippedVertices_FUN_00587c20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007e3e88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587c20
        ;   Label: core_xform.cpp_clampClippedVertices_FUN_00587c20
    PUSH ESI                            ; 00587c21
    PUSH EDI                            ; 00587c22
    PUSH EBP                            ; 00587c23
    MOV ESI,dword ptr [0x007e3e88]      ; 00587c24 | DAT_007e3e88
    MOV EAX,0x7e3e8c                    ; 00587c2a
    XOR ECX,ECX                         ; 00587c2f
    TEST ESI,ESI                        ; 00587c31
    JLE 0x00587c4d                      ; 00587c33
        ;   XREF to: 00587c4d (CONDITIONAL_JUMP)  ; LAB_00587c4d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00587c35
        ;   Label: LAB_00587c35
    TEST EDX,EDX                        ; 00587c38
    JZ 0x00587c58                       ; 00587c3a
        ;   XREF to: 00587c58 (CONDITIONAL_JUMP)  ; LAB_00587c58
    MOV EBX,dword ptr [EAX + 0x8]       ; 00587c3c
    CMP EBX,dword ptr [EAX]             ; 00587c3f
    JGE 0x00587c66                      ; 00587c41
        ;   XREF to: 00587c66 (CONDITIONAL_JUMP)  ; LAB_00587c66
    MOV dword ptr [EAX],EBX             ; 00587c43
    INC ECX                             ; 00587c45
        ;   Label: LAB_00587c45
    ADD EAX,0x30                        ; 00587c46
    CMP ECX,ESI                         ; 00587c49
    JL 0x00587c35                       ; 00587c4b
        ;   XREF to: 00587c35 (CONDITIONAL_JUMP)  ; LAB_00587c35
    MOV dword ptr [0x007e3e88],ESI      ; 00587c4d | DAT_007e3e88
        ;   Label: LAB_00587c4d
    POP EBP                             ; 00587c53
    POP EDI                             ; 00587c54
    POP ESI                             ; 00587c55
    POP EBX                             ; 00587c56
    RET                                 ; 00587c57
    MOV dword ptr [EAX + 0x8],0x1       ; 00587c58
        ;   Label: LAB_00587c58
    MOV dword ptr [EAX],EDX             ; 00587c5f
    MOV dword ptr [EAX + 0x4],EDX       ; 00587c61
    JMP 0x00587c45                      ; 00587c64
        ;   XREF to: 00587c45 (UNCONDITIONAL_JUMP)  ; LAB_00587c45
    MOV EDX,EBX                         ; 00587c66
        ;   Label: LAB_00587c66
    MOV EDI,dword ptr [EAX]             ; 00587c68
    NEG EDX                             ; 00587c6a
    CMP EDX,EDI                         ; 00587c6c
    JLE 0x00587c74                      ; 00587c6e
        ;   XREF to: 00587c74 (CONDITIONAL_JUMP)  ; LAB_00587c74
    MOV dword ptr [EAX],EDX             ; 00587c70
    JMP 0x00587c45                      ; 00587c72
        ;   XREF to: 00587c45 (UNCONDITIONAL_JUMP)  ; LAB_00587c45
    MOV EBP,dword ptr [EAX + 0x8]       ; 00587c74
        ;   Label: LAB_00587c74
    MOV EBX,dword ptr [EAX + 0x4]       ; 00587c77
    CMP EBX,EBP                         ; 00587c7a
    JLE 0x00587c83                      ; 00587c7c
        ;   XREF to: 00587c83 (CONDITIONAL_JUMP)  ; LAB_00587c83
    MOV dword ptr [EAX + 0x4],EBP       ; 00587c7e
    JMP 0x00587c45                      ; 00587c81
        ;   XREF to: 00587c45 (UNCONDITIONAL_JUMP)  ; LAB_00587c45
    CMP EDX,EBX                         ; 00587c83
        ;   Label: LAB_00587c83
    JLE 0x00587c45                      ; 00587c85
        ;   XREF to: 00587c45 (CONDITIONAL_JUMP)  ; LAB_00587c45
    MOV dword ptr [EAX + 0x4],EDX       ; 00587c87
    JMP 0x00587c45                      ; 00587c8a
        ;   XREF to: 00587c45 (UNCONDITIONAL_JUMP)  ; LAB_00587c45

