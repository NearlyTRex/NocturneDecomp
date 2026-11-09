; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_turret_cpp_FUN_00573af0(int param_1,int param_2)
;
;
; Called Functions:
;   unkafter_turret.cpp_FUN_00573b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573af0
        ;   Label: unkafter_turret.cpp_FUN_00573af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00573af1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00573af5
    TEST EAX,EAX                        ; 00573af9
    JL 0x00573b2f                       ; 00573afb
        ;   XREF to: 00573b2f (CONDITIONAL_JUMP)  ; LAB_00573b2f
    CMP EAX,0xff                        ; 00573afd
    JG 0x00573b2f                       ; 00573b02
        ;   XREF to: 00573b2f (CONDITIONAL_JUMP)  ; LAB_00573b2f
    CMP dword ptr [EBX + 0x4],0x0       ; 00573b04
    JZ 0x00573b2f                       ; 00573b08
        ;   XREF to: 00573b2f (CONDITIONAL_JUMP)  ; LAB_00573b2f
    MOV ECX,dword ptr [EBX + 0x10]      ; 00573b0a
    TEST ECX,ECX                        ; 00573b0d
    JLE 0x00573b2f                      ; 00573b0f
        ;   XREF to: 00573b2f (CONDITIONAL_JUMP)  ; LAB_00573b2f
    PUSH ESI                            ; 00573b11
    LEA ESI,[ECX + -0x1]                ; 00573b12
    MOV dword ptr [EBX + 0x10],ESI      ; 00573b15
    CMP EAX,0xa                         ; 00573b18
    JNZ 0x00573b27                      ; 00573b1b
        ;   XREF to: 00573b27 (CONDITIONAL_JUMP)  ; LAB_00573b27
    CMP dword ptr [EBX + 0x28],0x0      ; 00573b1d
    JNZ 0x00573b27                      ; 00573b21
        ;   XREF to: 00573b27 (CONDITIONAL_JUMP)  ; LAB_00573b27
    TEST ESI,ESI                        ; 00573b23
    JG 0x00573b33                       ; 00573b25
        ;   XREF to: 00573b33 (CONDITIONAL_JUMP)  ; LAB_00573b33
    MOV EAX,0x1                         ; 00573b27
        ;   Label: LAB_00573b27
    POP ESI                             ; 00573b2c
    POP EBX                             ; 00573b2d
    RET                                 ; 00573b2e
    XOR EAX,EAX                         ; 00573b2f
        ;   Label: LAB_00573b2f
    POP EBX                             ; 00573b31
    RET                                 ; 00573b32
    PUSH ESI                            ; 00573b33
        ;   Label: LAB_00573b33
    PUSH EBX                            ; 00573b34
    CALL unkafter_turret.cpp_FUN_00573b90 ; 00573b35
        ;   XREF to: 00573b90 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573b90()
    ADD ESP,0x8                         ; 00573b3a
    CMP EAX,0xa                         ; 00573b3d
    JNZ 0x00573b27                      ; 00573b40
        ;   XREF to: 00573b27 (CONDITIONAL_JUMP)  ; LAB_00573b27
    MOV EAX,dword ptr [EBX + 0x10]      ; 00573b42
    DEC EAX                             ; 00573b45
    PUSH EAX                            ; 00573b46
    PUSH EBX                            ; 00573b47
    CALL unkafter_turret.cpp_FUN_00573b90 ; 00573b48
        ;   XREF to: 00573b90 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573b90()
    ADD ESP,0x8                         ; 00573b4d
    CMP EAX,0xd                         ; 00573b50
    JNZ 0x00573b27                      ; 00573b53
        ;   XREF to: 00573b27 (CONDITIONAL_JUMP)  ; LAB_00573b27
    DEC dword ptr [EBX + 0x10]          ; 00573b55
    MOV EAX,0x1                         ; 00573b58
    POP ESI                             ; 00573b5d
    POP EBX                             ; 00573b5e
    RET                                 ; 00573b5f

