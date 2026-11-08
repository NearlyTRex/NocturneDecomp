; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00548e80(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00410940 at 00410952
;   FUN_00547480 at 0054748a
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e753f
;   TerminatedCString s_Can_t_load_s_because_def_005e7554
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_020cfa64
;   undefined4 DAT_02177ff4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00541540
;   FUN_005427c0
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548e80
        ;   Label: FUN_00548e80
    PUSH ESI                            ; 00548e81
    PUSH EDI                            ; 00548e82
    PUSH EBP                            ; 00548e83
    MOV EBP,ESP                         ; 00548e84
    MOV ESI,0x20ccff4                   ; 00548e86
    XOR EBX,EBX                         ; 00548e8b
    ADD ESI,0x2a70                      ; 00548e8d
    IMUL EAX,EBX,0x2ac0                 ; 00548e93
        ;   Label: LAB_00548e93
    MOV EDX,dword ptr [EBP + 0x14]      ; 00548e99
    PUSH EDX                            ; 00548e9c
    MOV EDI,0x20ccff4                   ; 00548e9d
    PUSH ESI                            ; 00548ea2 | DAT_020cfa64
    ADD EDI,EAX                         ; 00548ea3
    CALL FUN_005b8130                   ; 00548ea5
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00548eaa
    TEST EAX,EAX                        ; 00548ead
    JZ 0x00548f29                       ; 00548eaf
        ;   XREF to: 00548f29 (CONDITIONAL_JUMP)  ; LAB_00548f29
    INC EBX                             ; 00548eb5
    ADD ESI,0x2ac0                      ; 00548eb6
    CMP EBX,0x40                        ; 00548ebc
    JL 0x00548e93                       ; 00548ebf
        ;   XREF to: 00548e93 (CONDITIONAL_JUMP)  ; LAB_00548e93
    MOV ECX,dword ptr [0x02177ff4]      ; 00548ec1 | DAT_02177ff4
    XOR EBX,EBX                         ; 00548ec7
    XOR EAX,EAX                         ; 00548ec9
    TEST ECX,ECX                        ; 00548ecb
    JZ 0x00548ee4                       ; 00548ecd
        ;   XREF to: 00548ee4 (CONDITIONAL_JUMP)  ; LAB_00548ee4
    ADD EBX,0x4                         ; 00548ecf
        ;   Label: LAB_00548ecf
    INC EAX                             ; 00548ed2
    CMP EBX,0x100                       ; 00548ed3
    JGE 0x00548f45                      ; 00548ed9
        ;   XREF to: 00548f45 (CONDITIONAL_JUMP)  ; LAB_00548f45
    CMP dword ptr [EBX + 0x2177ff4],0x0 ; 00548edb
    JNZ 0x00548ecf                      ; 00548ee2
        ;   XREF to: 00548ecf (CONDITIONAL_JUMP)  ; LAB_00548ecf
    MOV ESI,EAX                         ; 00548ee4
        ;   Label: LAB_00548ee4
    SHL EAX,0x2                         ; 00548ee6
    ADD EAX,ESI                         ; 00548ee9
    SHL EAX,0x2                         ; 00548eeb
    SUB EAX,ESI                         ; 00548eee
    SHL EAX,0x6                         ; 00548ef0
    MOV ESI,EAX                         ; 00548ef3
    SHL EAX,0x3                         ; 00548ef5
    MOV EDX,dword ptr [EBP + 0x14]      ; 00548ef8
    ADD EAX,ESI                         ; 00548efb
    MOV ESI,0x20ccff4                   ; 00548efd
    PUSH EDX                            ; 00548f02
    ADD ESI,EAX                         ; 00548f03
    PUSH ESI                            ; 00548f05
    CALL FUN_005427c0                   ; 00548f06
        ;   XREF to: 005427c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005427c0()
    ADD ESP,0x8                         ; 00548f0b
    PUSH ESI                            ; 00548f0e
    CALL FUN_00541540                   ; 00548f0f
        ;   XREF to: 00541540 (UNCONDITIONAL_CALL)  ; undefined FUN_00541540()
    MOV ECX,0x1                         ; 00548f14
    ADD ESP,0x4                         ; 00548f19
    MOV EAX,ESI                         ; 00548f1c
    MOV dword ptr [EBX + 0x2177ff4],ECX ; 00548f1e
    POP EBP                             ; 00548f24
    POP EDI                             ; 00548f25
    POP ESI                             ; 00548f26
    POP EBX                             ; 00548f27
    RET                                 ; 00548f28
    PUSH EDI                            ; 00548f29
        ;   Label: LAB_00548f29
    MOV ESI,0x1                         ; 00548f2a
    CALL FUN_00541540                   ; 00548f2f
        ;   XREF to: 00541540 (UNCONDITIONAL_CALL)  ; undefined FUN_00541540()
    ADD ESP,0x4                         ; 00548f34
    MOV EAX,EDI                         ; 00548f37
    MOV dword ptr [EBX*0x4 + 0x2177ff4],ESI ; 00548f39 | DAT_02177ff4
    POP EBP                             ; 00548f40
    POP EDI                             ; 00548f41
    POP ESI                             ; 00548f42
    POP EBX                             ; 00548f43
    RET                                 ; 00548f44
    PUSH 0x40                           ; 00548f45
        ;   Label: LAB_00548f45
    MOV EDI,dword ptr [EBP + 0x14]      ; 00548f47
    PUSH EDI                            ; 00548f4a
    MOV EBX,0x5e753f                    ; 00548f4b | = "..\\core\\skeleton.cpp"
    MOV ESI,0x1076                      ; 00548f50
    PUSH 0x5e7554                       ; 00548f55 | = "Can't load %s because deformable mode..."
    MOV dword ptr [0x01d046a0],EBX      ; 00548f5a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00548f60 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00548f66
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 00548f6b
    XOR EAX,EAX                         ; 00548f6e
    POP EBP                             ; 00548f70
    POP EDI                             ; 00548f71
    POP ESI                             ; 00548f72
    POP EBX                             ; 00548f73
    RET                                 ; 00548f74

