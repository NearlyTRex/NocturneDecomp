; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00499eb0(float *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_rock_x_wav_005c0588
;   TerminatedCString s_rock_x_wav_005c0593
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_00603b28
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_004a23c0
;   FUN_004a2830
;   FUN_0053b440
;   FUN_00555c90
;   FUN_00555df0
;   FUN_00555fd0
;   FUN_00556050
;   FUN_00556240
;   FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499eb0
        ;   Label: FUN_00499eb0
    PUSH ESI                            ; 00499eb1
    PUSH EDI                            ; 00499eb2
    PUSH EBP                            ; 00499eb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00499eb4
    MOV EDX,dword ptr [EBX + 0x60]      ; 00499eb8
    PUSH EDX                            ; 00499ebb
    CALL FUN_00556be0                   ; 00499ebc
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00499ec1
    ADD ESP,0x4                         ; 00499ec4
    TEST ECX,ECX                        ; 00499ec7
    JNZ 0x00499f6d                      ; 00499ec9
        ;   XREF to: 00499f6d (CONDITIONAL_JUMP)  ; LAB_00499f6d
    XOR ESI,ESI                         ; 00499ecf
    XOR EDI,EDI                         ; 00499ed1
    PUSH EDI                            ; 00499ed3
        ;   Label: LAB_00499ed3
    PUSH 0x1                            ; 00499ed4
    PUSH EDI                            ; 00499ed6
    PUSH EBX                            ; 00499ed7
    MOV EAX,[0x005fc5a0]                ; 00499ed8 | DAT_005fc5a0
    PUSH EAX                            ; 00499edd
    CALL FUN_004a2830                   ; 00499ede
        ;   XREF to: 004a2830 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2830()
    ADD ESP,0x14                        ; 00499ee3
    PUSH 0xffff                         ; 00499ee6
    PUSH EDI                            ; 00499eeb
    PUSH 0x10000                        ; 00499eec
    PUSH 0x10000                        ; 00499ef1
    PUSH EDI                            ; 00499ef6
    PUSH EBX                            ; 00499ef7
    MOV EDX,dword ptr [0x005fc5a0]      ; 00499ef8 | DAT_005fc5a0
    PUSH EDX                            ; 00499efe
    INC ESI                             ; 00499eff
    CALL FUN_004a23c0                   ; 00499f00
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a23c0()
    ADD ESP,0x1c                        ; 00499f05
    CMP ESI,0x8                         ; 00499f08
    JL 0x00499ed3                       ; 00499f0b
        ;   XREF to: 00499ed3 (CONDITIONAL_JUMP)  ; LAB_00499ed3
    PUSH 0x3f800000                     ; 00499f0d
    PUSH 0x0                            ; 00499f12
    PUSH 0x0                            ; 00499f14
    MOV ECX,dword ptr [0x00603b28]      ; 00499f16 | DAT_00603b28
    PUSH 0x42c80000                     ; 00499f1c
    PUSH ECX                            ; 00499f21 | DAT_01ed78c8
    CALL FUN_0053b440                   ; 00499f22
        ;   XREF to: 0053b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b440()
    ADD ESP,0x14                        ; 00499f27
    CALL FUN_00555fd0                   ; 00499f2a
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555fd0()
    SUB ESP,0x8                         ; 00499f2f
    FLD float ptr [EBX + 0x8]           ; 00499f32
    FSTP double ptr [ESP]               ; 00499f35
    SUB ESP,0x8                         ; 00499f38
    FLD float ptr [EBX + 0x4]           ; 00499f3b
    FSTP double ptr [ESP]               ; 00499f3e
    SUB ESP,0x8                         ; 00499f41
    FLD float ptr [EBX]                 ; 00499f44
    FSTP double ptr [ESP]               ; 00499f46
    CALL FUN_00555c90                   ; 00499f49
        ;   XREF to: 00555c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00555c90()
    ADD ESP,0x18                        ; 00499f4e
    PUSH 0x5c0588                       ; 00499f51 | = "rock-x.wav"
    CALL FUN_00556240                   ; 00499f56
        ;   XREF to: 00556240 (UNCONDITIONAL_CALL)  ; undefined FUN_00556240()
        ;   Label: LAB_00499f56
    ADD ESP,0x4                         ; 00499f5b
    CALL FUN_00556050                   ; 00499f5e
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; undefined FUN_00556050()
    MOV EAX,0x1                         ; 00499f63
    POP EBP                             ; 00499f68
    POP EDI                             ; 00499f69
    POP ESI                             ; 00499f6a
    POP EBX                             ; 00499f6b
    RET                                 ; 00499f6c
    CMP ECX,0x2                         ; 00499f6d
        ;   Label: LAB_00499f6d
    JNZ 0x00499fd5                      ; 00499f70
        ;   XREF to: 00499fd5 (CONDITIONAL_JUMP)  ; LAB_00499fd5
    XOR ESI,ESI                         ; 00499f72
    MOV EDI,0x10000                     ; 00499f74
    PUSH 0xffff                         ; 00499f79
        ;   Label: LAB_00499f79
    PUSH 0x2                            ; 00499f7e
    PUSH EDI                            ; 00499f80
    PUSH EDI                            ; 00499f81
    PUSH 0x0                            ; 00499f82
    PUSH EBX                            ; 00499f84
    MOV EBP,dword ptr [0x005fc5a0]      ; 00499f85 | DAT_005fc5a0
    PUSH EBP                            ; 00499f8b
    INC ESI                             ; 00499f8c
    CALL FUN_004a23c0                   ; 00499f8d
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a23c0()
    ADD ESP,0x1c                        ; 00499f92
    CMP ESI,0x8                         ; 00499f95
    JL 0x00499f79                       ; 00499f98
        ;   XREF to: 00499f79 (CONDITIONAL_JUMP)  ; LAB_00499f79
    CALL FUN_00555fd0                   ; 00499f9a
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555fd0()
    SUB ESP,0x8                         ; 00499f9f
    FLD float ptr [EBX + 0x8]           ; 00499fa2
    FSTP double ptr [ESP]               ; 00499fa5
    SUB ESP,0x8                         ; 00499fa8
    FLD float ptr [EBX + 0x4]           ; 00499fab
    FSTP double ptr [ESP]               ; 00499fae
    SUB ESP,0x8                         ; 00499fb1
    FLD float ptr [EBX]                 ; 00499fb4
    FSTP double ptr [ESP]               ; 00499fb6
    CALL FUN_00555c90                   ; 00499fb9
        ;   XREF to: 00555c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00555c90()
    ADD ESP,0x18                        ; 00499fbe
    PUSH 0x3f4ccccd                     ; 00499fc1
    CALL FUN_00555df0                   ; 00499fc6
        ;   XREF to: 00555df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555df0()
    ADD ESP,0x4                         ; 00499fcb
    PUSH 0x5c0593                       ; 00499fce | = "rock-x.wav"
    JMP 0x00499f56                      ; 00499fd3
        ;   XREF to: 00499f56 (UNCONDITIONAL_JUMP)  ; LAB_00499f56
    XOR EAX,EAX                         ; 00499fd5
        ;   Label: LAB_00499fd5
    POP EBP                             ; 00499fd7
    POP EDI                             ; 00499fd8
    POP ESI                             ; 00499fd9
    POP EBX                             ; 00499fda
    RET                                 ; 00499fdb

