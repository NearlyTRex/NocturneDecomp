; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_stranger_cpp_FUN_00591c30(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   core_hero.cpp_FUN_004eadf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591c30
        ;   Label: core_stranger.cpp_FUN_00591c30
    PUSH ESI                            ; 00591c31
    PUSH EBP                            ; 00591c32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00591c33
    CMP dword ptr [EBX + 0x1ff78],0x0   ; 00591c37
    JNZ 0x00591ccd                      ; 00591c3e
        ;   XREF to: 00591ccd (CONDITIONAL_JUMP)  ; LAB_00591ccd
    CMP dword ptr [EBX + 0x1ff74],0x0   ; 00591c44
    JNZ 0x00591ccd                      ; 00591c4b
        ;   XREF to: 00591ccd (CONDITIONAL_JUMP)  ; LAB_00591ccd
    MOV ESI,dword ptr [EBX + 0x1ff5c]   ; 00591c51
    TEST ESI,ESI                        ; 00591c57
    JZ 0x00591c60                       ; 00591c59
        ;   XREF to: 00591c60 (CONDITIONAL_JUMP)  ; LAB_00591c60
    CMP ESI,0x3                         ; 00591c5b
    JNZ 0x00591ccd                      ; 00591c5e
        ;   XREF to: 00591ccd (CONDITIONAL_JUMP)  ; LAB_00591ccd
    MOV EBP,dword ptr [ESP + 0x18]      ; 00591c60
        ;   Label: LAB_00591c60
    PUSH EBP                            ; 00591c64
    MOV EAX,dword ptr [ESP + 0x18]      ; 00591c65
    PUSH EAX                            ; 00591c69
    PUSH EBX                            ; 00591c6a
    CALL core_hero.cpp_FUN_004eadf0     ; 00591c6b
        ;   XREF to: 004eadf0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eadf0()
    ADD ESP,0xc                         ; 00591c70
    MOV ESI,EAX                         ; 00591c73
    TEST EAX,EAX                        ; 00591c75
    JZ 0x00591cc7                       ; 00591c77
        ;   XREF to: 00591cc7 (CONDITIONAL_JUMP)  ; LAB_00591cc7
    MOV EDX,dword ptr [EBX + 0x20004]   ; 00591c79
    CMP EDX,dword ptr [EBX + 0x25b0]    ; 00591c7f
    JZ 0x00591c9b                       ; 00591c85
        ;   XREF to: 00591c9b (CONDITIONAL_JUMP)  ; LAB_00591c9b
    PUSH 0x0                            ; 00591c87
    PUSH 0x0                            ; 00591c89
    MOV EAX,dword ptr [EBX + 0x154]     ; 00591c8b
    PUSH EBX                            ; 00591c91
    CALL dword ptr [EAX + 0x128]        ; 00591c92
    ADD ESP,0xc                         ; 00591c98
    MOV ECX,dword ptr [EBX + 0x20004]   ; 00591c9b
        ;   Label: LAB_00591c9b
    CMP ECX,dword ptr [EBX + 0x2628]    ; 00591ca1
    JZ 0x00591cbd                       ; 00591ca7
        ;   XREF to: 00591cbd (CONDITIONAL_JUMP)  ; LAB_00591cbd
    PUSH 0x0                            ; 00591ca9
    PUSH 0x1                            ; 00591cab
    MOV EAX,dword ptr [EBX + 0x154]     ; 00591cad
    PUSH EBX                            ; 00591cb3
    CALL dword ptr [EAX + 0x128]        ; 00591cb4
    ADD ESP,0xc                         ; 00591cba
    MOV dword ptr [EBX + 0x200a8],0x0   ; 00591cbd
        ;   Label: LAB_00591cbd
    MOV EAX,ESI                         ; 00591cc7
        ;   Label: LAB_00591cc7
    POP EBP                             ; 00591cc9
    POP ESI                             ; 00591cca
    POP EBX                             ; 00591ccb
    RET                                 ; 00591ccc
    XOR EAX,EAX                         ; 00591ccd
        ;   Label: LAB_00591ccd
    POP EBP                             ; 00591ccf
    POP ESI                             ; 00591cd0
    POP EBX                             ; 00591cd1
    RET                                 ; 00591cd2

