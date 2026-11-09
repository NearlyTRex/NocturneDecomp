; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005b8e60(byte *param_1,byte *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_stdio.c_freopen_FUN_005b91a4 at 005b91b7
;   crt_unknown.c_FUN_005b90b0 at 005b90be
;
; Referenced Globals:
;   undefined4 DAT_0061f160
;   undefined4 DAT_0061f410
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8e60
        ;   Label: crt_unknown.c_FUN_005b8e60
    PUSH ESI                            ; 005b8e61
    PUSH EDI                            ; 005b8e62
    PUSH EBP                            ; 005b8e63
    SUB ESP,0x4                         ; 005b8e64
    MOV ECX,dword ptr [ESP + 0x18]      ; 005b8e67
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005b8e6b
    MOV EDX,0x1                         ; 005b8e6f
    XOR EBX,EBX                         ; 005b8e74
    XOR EDI,EDI                         ; 005b8e76
    XOR EBP,EBP                         ; 005b8e78
    MOV dword ptr [ESP],EBX             ; 005b8e7a
    TEST ESI,ESI                        ; 005b8e7d
    JZ 0x005b8e8f                       ; 005b8e7f
        ;   XREF to: 005b8e8f (CONDITIONAL_JUMP)  ; LAB_005b8e8f
    CMP EDX,dword ptr [0x0061f410]      ; 005b8e81 | DAT_0061f410
    JNZ 0x005b8e8d                      ; 005b8e87
        ;   XREF to: 005b8e8d (CONDITIONAL_JUMP)  ; LAB_005b8e8d
    MOV dword ptr [ESI],EDX             ; 005b8e89
    JMP 0x005b8e8f                      ; 005b8e8b
        ;   XREF to: 005b8e8f (UNCONDITIONAL_JUMP)  ; LAB_005b8e8f
    MOV dword ptr [ESI],EBX             ; 005b8e8d
        ;   Label: LAB_005b8e8d
    MOV AL,byte ptr [ECX]               ; 005b8e8f
        ;   Label: LAB_005b8e8f
    CMP AL,0x72                         ; 005b8e91
    JC 0x005b8e9d                       ; 005b8e93
        ;   XREF to: 005b8e9d (CONDITIONAL_JUMP)  ; LAB_005b8e9d
    JBE 0x005b8ea3                      ; 005b8e95
        ;   XREF to: 005b8ea3 (CONDITIONAL_JUMP)  ; LAB_005b8ea3
    CMP AL,0x77                         ; 005b8e97
    JZ 0x005b8ea8                       ; 005b8e99
        ;   XREF to: 005b8ea8 (CONDITIONAL_JUMP)  ; LAB_005b8ea8
    JMP 0x005b8eb2                      ; 005b8e9b
        ;   XREF to: 005b8eb2 (UNCONDITIONAL_JUMP)  ; LAB_005b8eb2
    CMP AL,0x61                         ; 005b8e9d
        ;   Label: LAB_005b8e9d
    JZ 0x005b8ead                       ; 005b8e9f
        ;   XREF to: 005b8ead (CONDITIONAL_JUMP)  ; LAB_005b8ead
    JMP 0x005b8eb2                      ; 005b8ea1
        ;   XREF to: 005b8eb2 (UNCONDITIONAL_JUMP)  ; LAB_005b8eb2
    OR BL,0x1                           ; 005b8ea3
        ;   Label: LAB_005b8ea3
    JMP 0x005b8ec3                      ; 005b8ea6
        ;   XREF to: 005b8ec3 (UNCONDITIONAL_JUMP)  ; LAB_005b8ec3
    OR BL,0x2                           ; 005b8ea8
        ;   Label: LAB_005b8ea8
    JMP 0x005b8ec3                      ; 005b8eab
        ;   XREF to: 005b8ec3 (UNCONDITIONAL_JUMP)  ; LAB_005b8ec3
    OR BL,0x82                          ; 005b8ead
        ;   Label: LAB_005b8ead
    JMP 0x005b8ec3                      ; 005b8eb0
        ;   XREF to: 005b8ec3 (UNCONDITIONAL_JUMP)  ; LAB_005b8ec3
    PUSH 0x9                            ; 005b8eb2
        ;   Label: LAB_005b8eb2
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005b8eb4
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005b8eb9
    XOR EDX,EDX                         ; 005b8ebc
    JMP 0x005b8f92                      ; 005b8ebe
        ;   XREF to: 005b8f92 (UNCONDITIONAL_JUMP)  ; LAB_005b8f92
    MOV AH,byte ptr [ECX + 0x1]         ; 005b8ec3
        ;   Label: LAB_005b8ec3
    INC ECX                             ; 005b8ec6
    TEST AH,AH                          ; 005b8ec7
    JZ 0x005b8f7d                       ; 005b8ec9
        ;   XREF to: 005b8f7d (CONDITIONAL_JUMP)  ; LAB_005b8f7d
    TEST EDX,EDX                        ; 005b8ecf
        ;   Label: LAB_005b8ecf
    JZ 0x005b8f7d                       ; 005b8ed1
        ;   XREF to: 005b8f7d (CONDITIONAL_JUMP)  ; LAB_005b8f7d
    MOV AL,byte ptr [ECX]               ; 005b8ed7
    CMP AL,0x63                         ; 005b8ed9
    JC 0x005b8efa                       ; 005b8edb
        ;   XREF to: 005b8efa (CONDITIONAL_JUMP)  ; LAB_005b8efa
    JBE 0x005b8f48                      ; 005b8edd
        ;   XREF to: 005b8f48 (CONDITIONAL_JUMP)  ; LAB_005b8f48
    CMP AL,0x6e                         ; 005b8ee3
    JC 0x005b8f71                       ; 005b8ee5
        ;   XREF to: 005b8f71 (CONDITIONAL_JUMP)  ; LAB_005b8f71
    JBE 0x005b8f5d                      ; 005b8eeb
        ;   XREF to: 005b8f5d (CONDITIONAL_JUMP)  ; LAB_005b8f5d
    CMP AL,0x74                         ; 005b8ef1
    JZ 0x005b8f27                       ; 005b8ef3
        ;   XREF to: 005b8f27 (CONDITIONAL_JUMP)  ; LAB_005b8f27
    JMP 0x005b8f71                      ; 005b8ef5
        ;   XREF to: 005b8f71 (UNCONDITIONAL_JUMP)  ; LAB_005b8f71
    CMP AL,0x2b                         ; 005b8efa
        ;   Label: LAB_005b8efa
    JC 0x005b8f71                       ; 005b8efc
        ;   XREF to: 005b8f71 (CONDITIONAL_JUMP)  ; LAB_005b8f71
    JBE 0x005b8f0d                      ; 005b8f02
        ;   XREF to: 005b8f0d (CONDITIONAL_JUMP)  ; LAB_005b8f0d
    CMP AL,0x62                         ; 005b8f04
    JZ 0x005b8f36                       ; 005b8f06
        ;   XREF to: 005b8f36 (CONDITIONAL_JUMP)  ; LAB_005b8f36
    JMP 0x005b8f71                      ; 005b8f08
        ;   XREF to: 005b8f71 (UNCONDITIONAL_JUMP)  ; LAB_005b8f71
    CMP dword ptr [ESP],0x0             ; 005b8f0d
        ;   Label: LAB_005b8f0d
    JZ 0x005b8f1a                       ; 005b8f11
        ;   XREF to: 005b8f1a (CONDITIONAL_JUMP)  ; LAB_005b8f1a
    XOR EDX,EDX                         ; 005b8f13
    JMP 0x005b8f71                      ; 005b8f15
        ;   XREF to: 005b8f71 (UNCONDITIONAL_JUMP)  ; LAB_005b8f71
    MOV EAX,0x1                         ; 005b8f1a
        ;   Label: LAB_005b8f1a
    OR BL,0x3                           ; 005b8f1f
    MOV dword ptr [ESP],EAX             ; 005b8f22
    JMP 0x005b8f71                      ; 005b8f25
        ;   XREF to: 005b8f71 (UNCONDITIONAL_JUMP)  ; LAB_005b8f71
    TEST EDI,EDI                        ; 005b8f27
        ;   Label: LAB_005b8f27
    JZ 0x005b8f2f                       ; 005b8f29
        ;   XREF to: 005b8f2f (CONDITIONAL_JUMP)  ; LAB_005b8f2f
    XOR EDX,EDX                         ; 005b8f2b
    JMP 0x005b8f71                      ; 005b8f2d
        ;   XREF to: 005b8f71 (UNCONDITIONAL_JUMP)  ; LAB_005b8f71
    MOV EDI,0x1                         ; 005b8f2f
        ;   Label: LAB_005b8f2f
    JMP 0x005b8f71                      ; 005b8f34
        ;   XREF to: 005b8f71 (UNCONDITIONAL_JUMP)  ; LAB_005b8f71
    TEST EDI,EDI                        ; 005b8f36
        ;   Label: LAB_005b8f36
    JZ 0x005b8f3e                       ; 005b8f38
        ;   XREF to: 005b8f3e (CONDITIONAL_JUMP)  ; LAB_005b8f3e
    XOR EDX,EDX                         ; 005b8f3a
    JMP 0x005b8f71                      ; 005b8f3c
        ;   XREF to: 005b8f71 (UNCONDITIONAL_JUMP)  ; LAB_005b8f71
    MOV EDI,0x1                         ; 005b8f3e
        ;   Label: LAB_005b8f3e
    OR BL,0x40                          ; 005b8f43
    JMP 0x005b8f71                      ; 005b8f46
        ;   XREF to: 005b8f71 (UNCONDITIONAL_JUMP)  ; LAB_005b8f71
    TEST EBP,EBP                        ; 005b8f48
        ;   Label: LAB_005b8f48
    JZ 0x005b8f50                       ; 005b8f4a
        ;   XREF to: 005b8f50 (CONDITIONAL_JUMP)  ; LAB_005b8f50
    XOR EDX,EDX                         ; 005b8f4c
    JMP 0x005b8f71                      ; 005b8f4e
        ;   XREF to: 005b8f71 (UNCONDITIONAL_JUMP)  ; LAB_005b8f71
    MOV AL,byte ptr [ESI]               ; 005b8f50
        ;   Label: LAB_005b8f50
    OR AL,0x1                           ; 005b8f52
    MOV EBP,0x1                         ; 005b8f54
    MOV byte ptr [ESI],AL               ; 005b8f59
    JMP 0x005b8f71                      ; 005b8f5b
        ;   XREF to: 005b8f71 (UNCONDITIONAL_JUMP)  ; LAB_005b8f71
    TEST EBP,EBP                        ; 005b8f5d
        ;   Label: LAB_005b8f5d
    JZ 0x005b8f65                       ; 005b8f5f
        ;   XREF to: 005b8f65 (CONDITIONAL_JUMP)  ; LAB_005b8f65
    XOR EDX,EDX                         ; 005b8f61
    JMP 0x005b8f71                      ; 005b8f63
        ;   XREF to: 005b8f71 (UNCONDITIONAL_JUMP)  ; LAB_005b8f71
    MOV AH,byte ptr [ESI]               ; 005b8f65
        ;   Label: LAB_005b8f65
    AND AH,0xfe                         ; 005b8f67
    MOV EBP,0x1                         ; 005b8f6a
    MOV byte ptr [ESI],AH               ; 005b8f6f
    MOV AL,byte ptr [ECX + 0x1]         ; 005b8f71
        ;   Label: LAB_005b8f71
    INC ECX                             ; 005b8f74
    TEST AL,AL                          ; 005b8f75
    JNZ 0x005b8ecf                      ; 005b8f77
        ;   XREF to: 005b8ecf (CONDITIONAL_JUMP)  ; LAB_005b8ecf
    TEST EDI,EDI                        ; 005b8f7d
        ;   Label: LAB_005b8f7d
    JNZ 0x005b8f90                      ; 005b8f7f
        ;   XREF to: 005b8f90 (CONDITIONAL_JUMP)  ; LAB_005b8f90
    CMP dword ptr [0x0061f160],0x200    ; 005b8f81 | DAT_0061f160
    JNZ 0x005b8f90                      ; 005b8f8b
        ;   XREF to: 005b8f90 (CONDITIONAL_JUMP)  ; LAB_005b8f90
    OR BL,0x40                          ; 005b8f8d
    MOV EDX,EBX                         ; 005b8f90
        ;   Label: LAB_005b8f90
    MOV EAX,EDX                         ; 005b8f92
        ;   Label: LAB_005b8f92
    ADD ESP,0x4                         ; 005b8f94
    POP EBP                             ; 005b8f97
    POP EDI                             ; 005b8f98
    POP ESI                             ; 005b8f99
    POP EBX                             ; 005b8f9a
    RET                                 ; 005b8f9b

