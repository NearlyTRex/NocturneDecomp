; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004d3e20(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004d4900 at 004d494d
;
; Referenced Globals:
;   TerminatedCString s_Already_have_max_bullets_005c4e25
;   TerminatedCString s_Already_have_max_mana_005c4e3f
;   TerminatedCString s_Already_have_max_health_005c4e56
;   undefined4 DAT_005c4e75
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_00603b28
;   undefined4 DAT_007dfd24
;   undefined4 DAT_01d2130c
;   undefined4 DAT_01d5b9b4
;   undefined4 DAT_02024a2c
;   undefined4 DAT_02024a30
;
; Called Functions:
;   FUN_0040c790
;   FUN_0040c840
;   FUN_004b46b0
;   FUN_004da880
;   FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d3e20
        ;   Label: FUN_004d3e20
    PUSH ESI                            ; 004d3e21
    PUSH EDI                            ; 004d3e22
    PUSH EBP                            ; 004d3e23
    MOV EBP,ESP                         ; 004d3e24
    SUB ESP,0x114                       ; 004d3e26
    AND ESP,0xfffffff8                  ; 004d3e2c
    MOV ESI,dword ptr [EBP + 0x14]      ; 004d3e2f
    MOV EDX,0x7149f2ca                  ; 004d3e32
    XOR ECX,ECX                         ; 004d3e37
    MOV dword ptr [ESP + 0x100],EDX     ; 004d3e39
    MOV dword ptr [ESP + 0x110],ECX     ; 004d3e40
    MOV dword ptr [ESP + 0x104],ECX     ; 004d3e47
        ;   Label: LAB_004d3e47
    MOV EBX,dword ptr [0x00603b28]      ; 004d3e4e | DAT_00603b28
    MOV EAX,dword ptr [ESP + 0x110]     ; 004d3e54
    CMP EAX,dword ptr [EBX + 0x14d164]  ; 004d3e5b | DAT_02024a2c
    JGE 0x004d3fd9                      ; 004d3e61
        ;   XREF to: 004d3fd9 (CONDITIONAL_JUMP)  ; LAB_004d3fd9
    ADD EBX,dword ptr [ESP + 0x104]     ; 004d3e67
    MOV EBX,dword ptr [EBX + 0x14d168]  ; 004d3e6e | DAT_02024a30
    FLD float ptr [EBX + 0x20]          ; 004d3e74
    FSUB float ptr [ESI + 0x20]         ; 004d3e77
    FABS                                ; 004d3e7a
    FCOMP double ptr [0x005c4e75]       ; 004d3e7c | DAT_005c4e75
    FNSTSW AX                           ; 004d3e82
    SAHF                                ; 004d3e84
    JA 0x004d3e9a                       ; 004d3e85
        ;   XREF to: 004d3e9a (CONDITIONAL_JUMP)  ; LAB_004d3e9a
    FLD float ptr [EBX + 0x24]          ; 004d3e87
    FSUB float ptr [ESI + 0x24]         ; 004d3e8a
    FABS                                ; 004d3e8d
    FCOMP double ptr [0x005c4e75]       ; 004d3e8f | DAT_005c4e75
    FNSTSW AX                           ; 004d3e95
    SAHF                                ; 004d3e97
    JBE 0x004d3eb5                      ; 004d3e98
        ;   XREF to: 004d3eb5 (CONDITIONAL_JUMP)  ; LAB_004d3eb5
    MOV EBX,dword ptr [ESP + 0x110]     ; 004d3e9a
        ;   Label: LAB_004d3e9a
    MOV ECX,dword ptr [ESP + 0x104]     ; 004d3ea1
    INC EBX                             ; 004d3ea8
    ADD ECX,0x4                         ; 004d3ea9
    MOV dword ptr [ESP + 0x110],EBX     ; 004d3eac
    JMP 0x004d3e47                      ; 004d3eb3
        ;   XREF to: 004d3e47 (UNCONDITIONAL_JUMP)  ; LAB_004d3e47
    FLD float ptr [EBX + 0x28]          ; 004d3eb5
        ;   Label: LAB_004d3eb5
    FSUB float ptr [ESI + 0x28]         ; 004d3eb8
    FABS                                ; 004d3ebb
    FCOMP double ptr [0x005c4e75]       ; 004d3ebd | DAT_005c4e75
    FNSTSW AX                           ; 004d3ec3
    SAHF                                ; 004d3ec5
    JA 0x004d3e9a                       ; 004d3ec6
        ;   XREF to: 004d3e9a (CONDITIONAL_JUMP)  ; LAB_004d3e9a
    CMP EBX,ESI                         ; 004d3ec8
    JZ 0x004d3e9a                       ; 004d3eca
        ;   XREF to: 004d3e9a (CONDITIONAL_JUMP)  ; LAB_004d3e9a
    PUSH EBX                            ; 004d3ecc
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d3ecd
    CALL dword ptr [EAX + 0x94]         ; 004d3ed3
    ADD ESP,0x4                         ; 004d3ed9
    TEST EAX,EAX                        ; 004d3edc
    JNZ 0x004d3e9a                      ; 004d3ede
        ;   XREF to: 004d3e9a (CONDITIONAL_JUMP)  ; LAB_004d3e9a
    PUSH ESI                            ; 004d3ee0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d3ee1
    PUSH EBX                            ; 004d3ee7
    CALL dword ptr [EAX + 0x84]         ; 004d3ee8
    ADD ESP,0x8                         ; 004d3eee
    MOV EDI,EAX                         ; 004d3ef1
    MOV dword ptr [ESP + 0x10c],EAX     ; 004d3ef3
    TEST EAX,EAX                        ; 004d3efa
    JZ 0x004d3e9a                       ; 004d3efc
        ;   XREF to: 004d3e9a (CONDITIONAL_JUMP)  ; LAB_004d3e9a
    MOV EDX,dword ptr [EBP + 0x18]      ; 004d3efe
    PUSH EDX                            ; 004d3f01
    PUSH EBX                            ; 004d3f02
    CALL FUN_0040c790                   ; 004d3f03
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004d3f08
    TEST EAX,EAX                        ; 004d3f0b
    JZ 0x004d3e9a                       ; 004d3f0d
        ;   XREF to: 004d3e9a (CONDITIONAL_JUMP)  ; LAB_004d3e9a
    LEA EAX,[ESP + 0x100]               ; 004d3f0f
    PUSH EAX                            ; 004d3f16
    PUSH EDI                            ; 004d3f17
    PUSH EBX                            ; 004d3f18
    MOV EDX,dword ptr [ESI + 0x154]     ; 004d3f19
    PUSH ESI                            ; 004d3f1f
    CALL dword ptr [EDX + 0x154]        ; 004d3f20
    ADD ESP,0x10                        ; 004d3f26
    TEST EAX,EAX                        ; 004d3f29
    JZ 0x004d3e9a                       ; 004d3f2b
        ;   XREF to: 004d3e9a (CONDITIONAL_JUMP)  ; LAB_004d3e9a
    CMP EDI,0x5                         ; 004d3f31
    JNZ 0x004d404a                      ; 004d3f34
        ;   XREF to: 004d404a (CONDITIONAL_JUMP)  ; LAB_004d404a
    CMP dword ptr [ESP + 0x100],0x40400000 ; 004d3f3a
    JGE 0x004d404a                      ; 004d3f45
        ;   XREF to: 004d404a (CONDITIONAL_JUMP)  ; LAB_004d404a
    MOV EAX,[0x007dfd24]                ; 004d3f4b | DAT_007dfd24
    PUSH EAX                            ; 004d3f50
    PUSH EBX                            ; 004d3f51
    CALL FUN_0040c840                   ; 004d3f52
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d3f57
    MOV EDX,dword ptr [0x01d5b9b4]      ; 004d3f5a | DAT_01d5b9b4
    PUSH EDX                            ; 004d3f60
    PUSH EBX                            ; 004d3f61
    MOV EDI,EAX                         ; 004d3f62
    MOV dword ptr [ESP + 0x110],EAX     ; 004d3f64
    CALL FUN_0040c840                   ; 004d3f6b
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV EDX,0x1                         ; 004d3f70
    ADD ESP,0x8                         ; 004d3f75
    TEST EDI,EDI                        ; 004d3f78
    JZ 0x004d4027                       ; 004d3f7a
        ;   XREF to: 004d4027 (CONDITIONAL_JUMP)  ; LAB_004d4027
    CMP dword ptr [EDI + 0x318],0xb     ; 004d3f80
    JNZ 0x004d3fef                      ; 004d3f87
        ;   XREF to: 004d3fef (CONDITIONAL_JUMP)  ; LAB_004d3fef
    CMP dword ptr [ESI + 0x20b84],0x32  ; 004d3f89
    JNZ 0x004d3fef                      ; 004d3f90
        ;   XREF to: 004d3fef (CONDITIONAL_JUMP)  ; LAB_004d3fef
    PUSH 0x5c4e25                       ; 004d3f92 | = "Already have max bullets!"
    LEA EAX,[ESP + 0x4]                 ; 004d3f97
        ;   Label: LAB_004d3f97
    PUSH EAX                            ; 004d3f9b
    CALL FUN_005a28c0                   ; 004d3f9c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x8                         ; 004d3fa1
    MOV EAX,ESP                         ; 004d3fa4
        ;   Label: LAB_004d3fa4
    PUSH 0x40000000                     ; 004d3fa6
    PUSH EAX                            ; 004d3fab
    MOV EDX,dword ptr [0x005fe9dc]      ; 004d3fac | DAT_005fe9dc
    PUSH EDX                            ; 004d3fb2 | DAT_01d2130c
    CALL FUN_004b46b0                   ; 004d3fb3
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b46b0()
    ADD ESP,0xc                         ; 004d3fb8
        ;   Label: LAB_004d3fb8
    MOV dword ptr [ESI + 0x20b6c],0x0   ; 004d3fbb
    MOV dword ptr [ESI + 0x20b70],0x0   ; 004d3fc5
    MOV dword ptr [ESI + 0x20b68],0x5   ; 004d3fcf
    CMP dword ptr [ESI + 0x20b68],0x4   ; 004d3fd9
        ;   Label: LAB_004d3fd9
    SETZ AL                             ; 004d3fe0
    AND EAX,0xff                        ; 004d3fe3
    MOV ESP,EBP                         ; 004d3fe8
    POP EBP                             ; 004d3fea
    POP EDI                             ; 004d3feb
    POP ESI                             ; 004d3fec
    POP EBX                             ; 004d3fed
    RET                                 ; 004d3fee
    MOV EAX,dword ptr [ESP + 0x108]     ; 004d3fef
        ;   Label: LAB_004d3fef
    CMP dword ptr [EAX + 0x318],0xa     ; 004d3ff6
    JNZ 0x004d4008                      ; 004d3ffd
        ;   XREF to: 004d4008 (CONDITIONAL_JUMP)  ; LAB_004d4008
    CMP dword ptr [ESI + 0x20b80],0x64  ; 004d3fff
    JZ 0x004d401d                       ; 004d4006
        ;   XREF to: 004d401d (CONDITIONAL_JUMP)  ; LAB_004d401d
    TEST EDX,EDX                        ; 004d4008
        ;   Label: LAB_004d4008
    JZ 0x004d3fa4                       ; 004d400a
        ;   XREF to: 004d3fa4 (CONDITIONAL_JUMP)  ; LAB_004d3fa4
    PUSH 0x1                            ; 004d400c
    PUSH EBX                            ; 004d400e
    LEA EAX,[ESI + 0x206e8]             ; 004d400f
    PUSH EAX                            ; 004d4015
    CALL FUN_004da880                   ; 004d4016
        ;   XREF to: 004da880 (UNCONDITIONAL_CALL)  ; undefined FUN_004da880()
    JMP 0x004d3fb8                      ; 004d401b
        ;   XREF to: 004d3fb8 (UNCONDITIONAL_JUMP)  ; LAB_004d3fb8
    PUSH 0x5c4e3f                       ; 004d401d | = "Already have max mana!"
        ;   Label: LAB_004d401d
    JMP 0x004d3f97                      ; 004d4022
        ;   XREF to: 004d3f97 (UNCONDITIONAL_JUMP)  ; LAB_004d3f97
    TEST EAX,EAX                        ; 004d4027
        ;   Label: LAB_004d4027
    JZ 0x004d4008                       ; 004d4029
        ;   XREF to: 004d4008 (CONDITIONAL_JUMP)  ; LAB_004d4008
    CMP dword ptr [EAX + 0x2e0],0x0     ; 004d402b
    JZ 0x004d4008                       ; 004d4032
        ;   XREF to: 004d4008 (CONDITIONAL_JUMP)  ; LAB_004d4008
    CMP dword ptr [ESI + 0x2538],0x42c80000 ; 004d4034
    JNZ 0x004d4008                      ; 004d403e
        ;   XREF to: 004d4008 (CONDITIONAL_JUMP)  ; LAB_004d4008
    PUSH 0x5c4e56                       ; 004d4040 | = "Already have max health!"
    JMP 0x004d3f97                      ; 004d4045
        ;   XREF to: 004d3f97 (UNCONDITIONAL_JUMP)  ; LAB_004d3f97
    PUSH ESI                            ; 004d404a
        ;   Label: LAB_004d404a
    MOV EAX,dword ptr [ESI + 0x154]     ; 004d404b
    CALL dword ptr [EAX + 0x148]        ; 004d4051
    ADD ESP,0x4                         ; 004d4057
    TEST EAX,EAX                        ; 004d405a
    JNZ 0x004d3e9a                      ; 004d405c
        ;   XREF to: 004d3e9a (CONDITIONAL_JUMP)  ; LAB_004d3e9a
    CMP dword ptr [ESP + 0x10c],0x5     ; 004d4062
    JZ 0x004d3e9a                       ; 004d406a
        ;   XREF to: 004d3e9a (CONDITIONAL_JUMP)  ; LAB_004d3e9a
    MOV dword ptr [ESI + 0x20b68],0x4   ; 004d4070
    MOV dword ptr [ESI + 0x20b6c],EBX   ; 004d407a
    MOV dword ptr [ESI + 0x20b70],EBX   ; 004d4080
    JMP 0x004d3e9a                      ; 004d4086
        ;   XREF to: 004d3e9a (UNCONDITIONAL_JUMP)  ; LAB_004d3e9a

