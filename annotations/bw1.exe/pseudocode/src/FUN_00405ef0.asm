; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00405ef0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_004039d0
;   FUN_00406bd0
;   FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405ef0
        ;   Label: FUN_00405ef0
    PUSH ESI                            ; 00405ef1
    PUSH EBP                            ; 00405ef2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405ef3
    LEA ESI,[EBX + 0x18]                ; 00405ef7
    LEA EAX,[EBX + 0x8]                 ; 00405efa
    PUSH EAX                            ; 00405efd
    CALL FUN_00403920                   ; 00405efe
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00405f03
    TEST EAX,EAX                        ; 00405f06
    JZ 0x00405f61                       ; 00405f08
        ;   XREF to: 00405f61 (CONDITIONAL_JUMP)  ; LAB_00405f61
    CMP dword ptr [0x01c51d00],0x0      ; 00405f0a | DAT_01c51d00
    JNZ 0x00405f7c                      ; 00405f11
        ;   XREF to: 00405f7c (CONDITIONAL_JUMP)  ; LAB_00405f7c
    CMP dword ptr [0x0061b4a0],0x20     ; 00405f13 | DAT_0061b4a0
    JNZ 0x00405f70                      ; 00405f1a
        ;   XREF to: 00405f70 (CONDITIONAL_JUMP)  ; LAB_00405f70
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00405f1c | DAT_01c4f02c
    PUSH EDI                            ; 00405f26
        ;   Label: LAB_00405f26
    MOV EDI,0xc3                        ; 00405f27
    PUSH 0xffff                         ; 00405f2c
    MOV dword ptr [0x01c51d14],EDI      ; 00405f31 | DAT_01c51d14
    CALL FUN_00406bd0                   ; 00405f37
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bd0()
    ADD ESP,0x4                         ; 00405f3c
    MOV EBP,0x1                         ; 00405f3f
    PUSH EBX                            ; 00405f44
    MOV dword ptr [0x01c51d18],EBP      ; 00405f45 | DAT_01c51d18
    CALL FUN_004039d0                   ; 00405f4b
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    ADD ESP,0x4                         ; 00405f50
    PUSH ESI                            ; 00405f53
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405f54
    PUSH EAX                            ; 00405f57
    CALL FUN_0043cbf0                   ; 00405f58
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043cbf0()
    ADD ESP,0x8                         ; 00405f5d
    POP EDI                             ; 00405f60
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405f61
        ;   Label: LAB_00405f61
    ADD EBX,0x18                        ; 00405f64
    SHL EAX,0x2                         ; 00405f67
    ADD EAX,EBX                         ; 00405f6a
    POP EBP                             ; 00405f6c
    POP ESI                             ; 00405f6d
    POP EBX                             ; 00405f6e
    RET                                 ; 00405f6f
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00405f70 | DAT_01c4f02c
        ;   Label: LAB_00405f70
    JMP 0x00405f26                      ; 00405f7a
        ;   XREF to: 00405f26 (UNCONDITIONAL_JUMP)  ; LAB_00405f26
    CMP dword ptr [0x0061b4a0],0x20     ; 00405f7c | DAT_0061b4a0
        ;   Label: LAB_00405f7c
    JNZ 0x00405f91                      ; 00405f83
        ;   XREF to: 00405f91 (CONDITIONAL_JUMP)  ; LAB_00405f91
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00405f85 | DAT_01c4f02c | LAB_0057de01
    JMP 0x00405f26                      ; 00405f8f
        ;   XREF to: 00405f26 (UNCONDITIONAL_JUMP)  ; LAB_00405f26
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00405f91 | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_00405f91
    JMP 0x00405f26                      ; 00405f9b
        ;   XREF to: 00405f26 (UNCONDITIONAL_JUMP)  ; LAB_00405f26

