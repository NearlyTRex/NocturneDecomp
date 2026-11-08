; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00440ef0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00441190 at 004411ef
;   FUN_00441290 at 004412ab
;
; Called Functions:
;   FUN_00440260
;   FUN_00440400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440ef0
        ;   Label: FUN_00440ef0
    PUSH ESI                            ; 00440ef1
    PUSH EDI                            ; 00440ef2
    PUSH EBP                            ; 00440ef3
    MOV EBP,ESP                         ; 00440ef4
    SUB ESP,0x4                         ; 00440ef6
    MOV ESI,dword ptr [EBP + 0x14]      ; 00440ef9
    MOV EDI,dword ptr [EBP + 0x20]      ; 00440efc
    PUSH EDI                            ; 00440eff
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00440f00
    PUSH EDX                            ; 00440f03
    CALL FUN_00440400                   ; 00440f04
        ;   XREF to: 00440400 (UNCONDITIONAL_CALL)  ; undefined FUN_00440400()
    ADD ESP,0x8                         ; 00440f09
    TEST EAX,EAX                        ; 00440f0c
    JL 0x00440f3f                       ; 00440f0e
        ;   XREF to: 00440f3f (CONDITIONAL_JUMP)  ; LAB_00440f3f
    MOV EBX,0x1                         ; 00440f10
    MOV ECX,dword ptr [ESI + 0x8]       ; 00440f15
    MOV EAX,dword ptr [ESI + 0xc]       ; 00440f18
    DEC ECX                             ; 00440f1b
    DEC EAX                             ; 00440f1c
    XOR ESI,ESI                         ; 00440f1d
    SHL EBX,CL                          ; 00440f1f
    MOV dword ptr [EBP + -0x4],EAX      ; 00440f21
    TEST EBX,EBX                        ; 00440f24
    JZ 0x00440f32                       ; 00440f26
        ;   XREF to: 00440f32 (CONDITIONAL_JUMP)  ; LAB_00440f32
    TEST dword ptr [EBP + -0x4],EBX     ; 00440f28
        ;   Label: LAB_00440f28
    JZ 0x00440f60                       ; 00440f2b
        ;   XREF to: 00440f60 (CONDITIONAL_JUMP)  ; LAB_00440f60
    TEST dword ptr [EBP + 0x18],EBX     ; 00440f2d
    JNZ 0x00440f4b                      ; 00440f30
        ;   XREF to: 00440f4b (CONDITIONAL_JUMP)  ; LAB_00440f4b
    TEST EBX,EBX                        ; 00440f32
        ;   Label: LAB_00440f32
    JNZ 0x00440f7c                      ; 00440f34
        ;   XREF to: 00440f7c (CONDITIONAL_JUMP)  ; LAB_00440f7c
    MOV EAX,ESI                         ; 00440f36
    MOV ESP,EBP                         ; 00440f38
        ;   Label: LAB_00440f38
    POP EBP                             ; 00440f3a
    POP EDI                             ; 00440f3b
    POP ESI                             ; 00440f3c
    POP EBX                             ; 00440f3d
    RET                                 ; 00440f3e
    CMP EAX,-0x1                        ; 00440f3f
        ;   Label: LAB_00440f3f
    JZ 0x00440f38                       ; 00440f42
        ;   XREF to: 00440f38 (CONDITIONAL_JUMP)  ; LAB_00440f38
    MOV EAX,0xfffffffd                  ; 00440f44
        ;   Label: LAB_00440f44
    JMP 0x00440f38                      ; 00440f49
        ;   XREF to: 00440f38 (UNCONDITIONAL_JUMP)  ; LAB_00440f38
    PUSH EDI                            ; 00440f4b
        ;   Label: LAB_00440f4b
    PUSH 0x1                            ; 00440f4c
    PUSH 0x1                            ; 00440f4e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00440f50
    PUSH EDX                            ; 00440f53
    CALL FUN_00440260                   ; 00440f54
        ;   XREF to: 00440260 (UNCONDITIONAL_CALL)  ; undefined FUN_00440260()
    ADD ESP,0x10                        ; 00440f59
    TEST EAX,EAX                        ; 00440f5c
    JL 0x00440f73                       ; 00440f5e
        ;   XREF to: 00440f73 (CONDITIONAL_JUMP)  ; LAB_00440f73
    SAR EBX,0x1                         ; 00440f60
        ;   Label: LAB_00440f60
    TEST EBX,EBX                        ; 00440f62
    JNZ 0x00440f28                      ; 00440f64
        ;   XREF to: 00440f28 (CONDITIONAL_JUMP)  ; LAB_00440f28
    TEST EBX,EBX                        ; 00440f66
    JNZ 0x00440f7c                      ; 00440f68
        ;   XREF to: 00440f7c (CONDITIONAL_JUMP)  ; LAB_00440f7c
    MOV EAX,ESI                         ; 00440f6a
    MOV ESP,EBP                         ; 00440f6c
    POP EBP                             ; 00440f6e
    POP EDI                             ; 00440f6f
    POP ESI                             ; 00440f70
    POP EBX                             ; 00440f71
    RET                                 ; 00440f72
    CMP EAX,-0x2                        ; 00440f73
        ;   Label: LAB_00440f73
    JNZ 0x00440f44                      ; 00440f76
        ;   XREF to: 00440f44 (CONDITIONAL_JUMP)  ; LAB_00440f44
    MOV ESI,EAX                         ; 00440f78
    JMP 0x00440f60                      ; 00440f7a
        ;   XREF to: 00440f60 (UNCONDITIONAL_JUMP)  ; LAB_00440f60
    MOV ECX,dword ptr [EBP + 0x18]      ; 00440f7c
        ;   Label: LAB_00440f7c
    PUSH EDI                            ; 00440f7f
    TEST EBX,ECX                        ; 00440f80
    SETNZ AL                            ; 00440f82
    AND EAX,0xff                        ; 00440f85
    PUSH EAX                            ; 00440f8a
    PUSH 0x1                            ; 00440f8b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00440f8d
    PUSH EAX                            ; 00440f90
    CALL FUN_00440260                   ; 00440f91
        ;   XREF to: 00440260 (UNCONDITIONAL_CALL)  ; undefined FUN_00440260()
    ADD ESP,0x10                        ; 00440f96
    TEST EAX,EAX                        ; 00440f99
    JL 0x00440fac                       ; 00440f9b
        ;   XREF to: 00440fac (CONDITIONAL_JUMP)  ; LAB_00440fac
    SAR EBX,0x1                         ; 00440f9d
    TEST EBX,EBX                        ; 00440f9f
    JNZ 0x00440f7c                      ; 00440fa1
        ;   XREF to: 00440f7c (CONDITIONAL_JUMP)  ; LAB_00440f7c
    MOV EAX,ESI                         ; 00440fa3
    MOV ESP,EBP                         ; 00440fa5
    POP EBP                             ; 00440fa7
    POP EDI                             ; 00440fa8
    POP ESI                             ; 00440fa9
    POP EBX                             ; 00440faa
    RET                                 ; 00440fab
    CMP EAX,-0x2                        ; 00440fac
        ;   Label: LAB_00440fac
    JNZ 0x00440f44                      ; 00440faf
        ;   XREF to: 00440f44 (CONDITIONAL_JUMP)  ; LAB_00440f44
    MOV ESI,EAX                         ; 00440fb1
    SAR EBX,0x1                         ; 00440fb3
    TEST EBX,EBX                        ; 00440fb5
    JNZ 0x00440f7c                      ; 00440fb7
        ;   XREF to: 00440f7c (CONDITIONAL_JUMP)  ; LAB_00440f7c
    MOV EAX,ESI                         ; 00440fb9
    MOV ESP,EBP                         ; 00440fbb
    POP EBP                             ; 00440fbd
    POP EDI                             ; 00440fbe
    POP ESI                             ; 00440fbf
    POP EBX                             ; 00440fc0
    RET                                 ; 00440fc1

