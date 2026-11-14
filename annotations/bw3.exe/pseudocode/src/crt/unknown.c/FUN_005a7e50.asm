; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a7e50(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005a3140 at 005a3158
;   crt_unknown.c_printf_FUN_005a40f0 at 005a4107
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;
; Called Functions:
;   crt_unknown.c_FUN_005a6190
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005a9310
;   crt_unknown.c_FUN_005a9bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7e50
        ;   Label: crt_unknown.c_FUN_005a7e50
    PUSH ESI                            ; 005a7e51
    PUSH EDI                            ; 005a7e52
    PUSH EBP                            ; 005a7e53
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a7e54
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a7e58
    PUSH EDX                            ; 005a7e5b
    CALL dword ptr [0x006079a4]         ; 005a7e5c | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a7e62
    MOV ECX,dword ptr [EAX + 0xc]       ; 005a7e65
    ADD ESP,0x4                         ; 005a7e68
    CMP ECX,0x1                         ; 005a7e6b
    JZ 0x005a7e8f                       ; 005a7e6e
        ;   XREF to: 005a7e8f (CONDITIONAL_JUMP)  ; LAB_005a7e8f
    TEST ECX,ECX                        ; 005a7e70
    JZ 0x005a7e88                       ; 005a7e72
        ;   XREF to: 005a7e88 (CONDITIONAL_JUMP)  ; LAB_005a7e88
    MOV EDI,dword ptr [EBX + 0x10]      ; 005a7e74
    PUSH EDI                            ; 005a7e77
    CALL dword ptr [0x006079a8]         ; 005a7e78 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a7e7e
    XOR EAX,EAX                         ; 005a7e81
    POP EBP                             ; 005a7e83
    POP EDI                             ; 005a7e84
    POP ESI                             ; 005a7e85
    POP EBX                             ; 005a7e86
    RET                                 ; 005a7e87
    MOV dword ptr [EAX + 0xc],0x1       ; 005a7e88
        ;   Label: LAB_005a7e88
    MOV AH,byte ptr [EBX + 0xc]         ; 005a7e8f
        ;   Label: LAB_005a7e8f
    AND AH,0xcf                         ; 005a7e92
    MOV EBP,dword ptr [EBX + 0xc]       ; 005a7e95
    MOV byte ptr [EBX + 0xc],AH         ; 005a7e98
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a7e9b
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a7e9e
    AND EBP,0x30                        ; 005a7ea1
    TEST EDX,EDX                        ; 005a7ea4
    JNZ 0x005a7eb1                      ; 005a7ea6
        ;   XREF to: 005a7eb1 (CONDITIONAL_JUMP)  ; LAB_005a7eb1
    PUSH EBX                            ; 005a7ea8
    CALL crt_unknown.c_FUN_005a9310     ; 005a7ea9
        ;   XREF to: 005a9310 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9310()
    ADD ESP,0x4                         ; 005a7eae
    MOV DL,byte ptr [EBX + 0xd]         ; 005a7eb1
        ;   Label: LAB_005a7eb1
    XOR EDI,EDI                         ; 005a7eb4
    TEST DL,0x4                         ; 005a7eb6
    JZ 0x005a7ed0                       ; 005a7eb9
        ;   XREF to: 005a7ed0 (CONDITIONAL_JUMP)  ; LAB_005a7ed0
    MOV DH,DL                           ; 005a7ebb
    AND DH,0xfa                         ; 005a7ebd
    MOV CL,DH                           ; 005a7ec0
    MOV byte ptr [EBX + 0xd],DH         ; 005a7ec2
    OR CL,0x1                           ; 005a7ec5
    MOV EDI,0x1                         ; 005a7ec8
    MOV byte ptr [EBX + 0xd],CL         ; 005a7ecd
    PUSH 0x5a7e30                       ; 005a7ed0
        ;   Label: LAB_005a7ed0
    MOV ECX,dword ptr [ESP + 0x20]      ; 005a7ed5
    PUSH ECX                            ; 005a7ed9
    MOV ESI,dword ptr [ESP + 0x20]      ; 005a7eda
    PUSH ESI                            ; 005a7ede
    PUSH EBX                            ; 005a7edf
    CALL crt_unknown.c_FUN_005a6190     ; 005a7ee0
        ;   XREF to: 005a6190 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a6190()
    ADD ESP,0x10                        ; 005a7ee5
    MOV ESI,EAX                         ; 005a7ee8
    TEST EDI,EDI                        ; 005a7eea
    JZ 0x005a7f07                       ; 005a7eec
        ;   XREF to: 005a7f07 (CONDITIONAL_JUMP)  ; LAB_005a7f07
    MOV CH,byte ptr [EBX + 0xd]         ; 005a7eee
    AND CH,0xfa                         ; 005a7ef1
    MOV AL,CH                           ; 005a7ef4
    MOV byte ptr [EBX + 0xd],CH         ; 005a7ef6
    OR AL,0x4                           ; 005a7ef9
    PUSH EBX                            ; 005a7efb
    MOV byte ptr [EBX + 0xd],AL         ; 005a7efc
    CALL crt_unknown.c_FUN_005a9bc0     ; 005a7eff
        ;   XREF to: 005a9bc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9bc0()
    ADD ESP,0x4                         ; 005a7f04
    TEST byte ptr [EBX + 0xc],0x20      ; 005a7f07
        ;   Label: LAB_005a7f07
    JZ 0x005a7f12                       ; 005a7f0b
        ;   XREF to: 005a7f12 (CONDITIONAL_JUMP)  ; LAB_005a7f12
    MOV ESI,0xffffffff                  ; 005a7f0d
    MOV EDI,dword ptr [EBX + 0xc]       ; 005a7f12
        ;   Label: LAB_005a7f12
    OR EDI,EBP                          ; 005a7f15
    MOV EBP,dword ptr [EBX + 0x10]      ; 005a7f17
    PUSH EBP                            ; 005a7f1a
    MOV dword ptr [EBX + 0xc],EDI       ; 005a7f1b
    CALL dword ptr [0x006079a8]         ; 005a7f1e | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a7f24
    MOV EAX,ESI                         ; 005a7f27
    POP EBP                             ; 005a7f29
    POP EDI                             ; 005a7f2a
    POP ESI                             ; 005a7f2b
    POP EBX                             ; 005a7f2c
    RET                                 ; 005a7f2d

