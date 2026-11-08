; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00490ec0(undefined4 param_1,int param_2,int *param_3)
;
;
; XREF[2]:
;   FUN_0048e420 at 0048e43f
;   FUN_0048e7e0 at 0048e89f
;
; Called Functions:
;   FUN_0048e7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490ec0
        ;   Label: FUN_00490ec0
    PUSH ESI                            ; 00490ec1
    PUSH EDI                            ; 00490ec2
    PUSH EBP                            ; 00490ec3
    MOV EBP,dword ptr [ESP + 0x14]      ; 00490ec4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00490ec8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00490ecc
    PUSH EBX                            ; 00490ed0
    PUSH ESI                            ; 00490ed1
    PUSH EBP                            ; 00490ed2
    CALL FUN_0048e7e0                   ; 00490ed3
        ;   XREF to: 0048e7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e7e0()
    ADD ESP,0xc                         ; 00490ed8
    MOV EDI,EAX                         ; 00490edb
    TEST EAX,EAX                        ; 00490edd
    JL 0x0048e85d                       ; 00490edf
        ;   XREF to: 0048e85d (CONDITIONAL_JUMP)  ; LAB_0048e85d
    MOV EAX,dword ptr [EBX]             ; 00490ee5
        ;   Label: LAB_00490ee5
    ADD EAX,ESI                         ; 00490ee7
    MOV DL,byte ptr [EAX]               ; 00490ee9
    TEST DL,DL                          ; 00490eeb
    JZ 0x00490f73                       ; 00490eed
        ;   XREF to: 00490f73 (CONDITIONAL_JUMP)  ; LAB_00490f73
    CMP DL,0x7c                         ; 00490ef3
    JZ 0x00490f35                       ; 00490ef6
        ;   XREF to: 00490f35 (CONDITIONAL_JUMP)  ; LAB_00490f35
    CMP DL,0x26                         ; 00490ef8
    JNZ 0x00490f73                      ; 00490efb
        ;   XREF to: 00490f73 (CONDITIONAL_JUMP)  ; LAB_00490f73
    MOV EDX,dword ptr [EBX]             ; 00490f01
    INC EDX                             ; 00490f03
    MOV EAX,EDX                         ; 00490f04
    MOV dword ptr [EBX],EDX             ; 00490f06
    CMP byte ptr [ESI + EAX*0x1],0x26   ; 00490f08
    JNZ 0x00490f13                      ; 00490f0c
        ;   XREF to: 00490f13 (CONDITIONAL_JUMP)  ; LAB_00490f13
    LEA ECX,[EDX + 0x1]                 ; 00490f0e
    MOV dword ptr [EBX],ECX             ; 00490f11
    PUSH EBX                            ; 00490f13
        ;   Label: LAB_00490f13
    PUSH ESI                            ; 00490f14
    PUSH EBP                            ; 00490f15
    CALL FUN_0048e7e0                   ; 00490f16
        ;   XREF to: 0048e7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e7e0()
    ADD ESP,0xc                         ; 00490f1b
    TEST EAX,EAX                        ; 00490f1e
    JL 0x0048e85d                       ; 00490f20
        ;   XREF to: 0048e85d (CONDITIONAL_JUMP)  ; LAB_0048e85d
    TEST EDI,EDI                        ; 00490f26
    JZ 0x00490f6c                       ; 00490f28
        ;   XREF to: 00490f6c (CONDITIONAL_JUMP)  ; LAB_00490f6c
    TEST EAX,EAX                        ; 00490f2a
    JZ 0x00490f6c                       ; 00490f2c
        ;   XREF to: 00490f6c (CONDITIONAL_JUMP)  ; LAB_00490f6c
    MOV EDI,0x1                         ; 00490f2e
    JMP 0x00490ee5                      ; 00490f33
        ;   XREF to: 00490ee5 (UNCONDITIONAL_JUMP)  ; LAB_00490ee5
    MOV EAX,dword ptr [EBX]             ; 00490f35
        ;   Label: LAB_00490f35
    INC EAX                             ; 00490f37
    MOV dword ptr [EBX],EAX             ; 00490f38
    CMP byte ptr [ESI + EAX*0x1],0x7c   ; 00490f3a
    JNZ 0x00490f45                      ; 00490f3e
        ;   XREF to: 00490f45 (CONDITIONAL_JUMP)  ; LAB_00490f45
    LEA EDX,[EAX + 0x1]                 ; 00490f40
    MOV dword ptr [EBX],EDX             ; 00490f43
    PUSH EBX                            ; 00490f45
        ;   Label: LAB_00490f45
    PUSH ESI                            ; 00490f46
    PUSH EBP                            ; 00490f47
    CALL FUN_0048e7e0                   ; 00490f48
        ;   XREF to: 0048e7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e7e0()
    ADD ESP,0xc                         ; 00490f4d
    TEST EAX,EAX                        ; 00490f50
    JL 0x0048e85d                       ; 00490f52
        ;   XREF to: 0048e85d (CONDITIONAL_JUMP)  ; LAB_0048e85d
    TEST EDI,EDI                        ; 00490f58
    JZ 0x00490f63                       ; 00490f5a
        ;   XREF to: 00490f63 (CONDITIONAL_JUMP)  ; LAB_00490f63
    MOV EDI,0x1                         ; 00490f5c
        ;   Label: LAB_00490f5c
    JMP 0x00490ee5                      ; 00490f61
        ;   XREF to: 00490ee5 (UNCONDITIONAL_JUMP)  ; LAB_00490ee5
    TEST EAX,EAX                        ; 00490f63
        ;   Label: LAB_00490f63
    JNZ 0x00490f5c                      ; 00490f65
        ;   XREF to: 00490f5c (CONDITIONAL_JUMP)  ; LAB_00490f5c
    JMP 0x00490ee5                      ; 00490f67
        ;   XREF to: 00490ee5 (UNCONDITIONAL_JUMP)  ; LAB_00490ee5
    XOR EDI,EDI                         ; 00490f6c
        ;   Label: LAB_00490f6c
    JMP 0x00490ee5                      ; 00490f6e
        ;   XREF to: 00490ee5 (UNCONDITIONAL_JUMP)  ; LAB_00490ee5
    MOV EAX,EDI                         ; 00490f73
        ;   Label: LAB_00490f73
    POP EBP                             ; 00490f75
    POP EDI                             ; 00490f76
    POP ESI                             ; 00490f77
    POP EBX                             ; 00490f78
    RET                                 ; 00490f79

