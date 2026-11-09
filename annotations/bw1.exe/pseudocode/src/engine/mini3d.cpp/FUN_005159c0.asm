; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_005159c0(undefined4 *param_1,int param_2)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_00512de0 at 00513118
;
; Referenced Globals:
;   undefined4 DAT_01d224dc
;   undefined4 DAT_01d224e0
;   undefined4 DAT_01d224e4
;   undefined4 DAT_01d224e8
;   undefined4 DAT_01d227e8
;   undefined4 DAT_01d227ec
;   undefined4 DAT_01d227f0
;   undefined4 DAT_01d227f4
;   undefined4 DAT_01d227f8
;   undefined4 DAT_01d22ffc
;   undefined4 DAT_01d23000
;   undefined4 DAT_01d2303c
;   undefined4 DAT_01d247fc
;   undefined4 DAT_01d24800
;   undefined4 DAT_01d24804
;   ... and 7 more
;
; Called Functions:
;   engine_mini3d.cpp_FUN_00515080
;   engine_mini3d.cpp_FUN_005151b0
;   engine_mini3d.cpp_FUN_005152e0
;   engine_mini3d.cpp_FUN_00515410
;   engine_mini3d.cpp_FUN_00515530
;   engine_mini3d.cpp_FUN_005168c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005159c0
        ;   Label: engine_mini3d.cpp_FUN_005159c0
    PUSH EBP                            ; 005159c1
    MOV EBX,dword ptr [ESP + 0x10]      ; 005159c2
    MOV dword ptr [0x01d227e8],EBX      ; 005159c6 | DAT_01d227e8
    XOR EDX,EDX                         ; 005159cc
    XOR EBP,EBP                         ; 005159ce
    XOR EAX,EAX                         ; 005159d0
    MOV dword ptr [0x01d227ec],EDX      ; 005159d2 | DAT_01d227ec
    MOV dword ptr [0x01d227f0],EDX      ; 005159d8 | DAT_01d227f0
    MOV dword ptr [0x01d227f4],EDX      ; 005159de | DAT_01d227f4
    MOV dword ptr [0x01d227f8],EDX      ; 005159e4 | DAT_01d227f8
    TEST EBX,EBX                        ; 005159ea
    JLE 0x00515a12                      ; 005159ec
        ;   XREF to: 00515a12 (CONDITIONAL_JUMP)  ; LAB_00515a12
    PUSH EDI                            ; 005159ee
    PUSH ESI                            ; 005159ef
    MOV EDX,dword ptr [ESP + 0x14]      ; 005159f0
    MOV ESI,EAX                         ; 005159f4
        ;   Label: LAB_005159f4
    SHL ESI,0x6                         ; 005159f6
    MOV ECX,0x10                        ; 005159f9
    LEA EDI,[ESI + 0x1d22ffc]           ; 005159fe
    MOV ESI,EDX                         ; 00515a04
    INC EAX                             ; 00515a06
    ADD EDX,0x40                        ; 00515a07
    MOVSD.REP ES:EDI,ESI                ; 00515a0a | DAT_01d22ffc | DAT_01d23000 | DAT_01d2303c
    CMP EAX,EBX                         ; 00515a0c
    JL 0x005159f4                       ; 00515a0e
        ;   XREF to: 005159f4 (CONDITIONAL_JUMP)  ; LAB_005159f4
    POP ESI                             ; 00515a10
    POP EDI                             ; 00515a11
    CALL engine_mini3d.cpp_FUN_00515080 ; 00515a12
        ;   XREF to: 00515080 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00515080()
        ;   Label: LAB_00515a12
    CMP dword ptr [0x01d227ec],0x3      ; 00515a17 | DAT_01d227ec
    JGE 0x00515a29                      ; 00515a1e
        ;   XREF to: 00515a29 (CONDITIONAL_JUMP)  ; LAB_00515a29
    MOV EBP,dword ptr [0x01d227f8]      ; 00515a20 | DAT_01d227f8
        ;   Label: LAB_00515a20
    POP EBP                             ; 00515a26
    POP EBX                             ; 00515a27
    RET                                 ; 00515a28
    CALL engine_mini3d.cpp_FUN_005151b0 ; 00515a29
        ;   XREF to: 005151b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005151b0()
        ;   Label: LAB_00515a29
    CMP dword ptr [0x01d227f0],0x3      ; 00515a2e | DAT_01d227f0
    JL 0x00515a20                       ; 00515a35
        ;   XREF to: 00515a20 (CONDITIONAL_JUMP)  ; LAB_00515a20
    CALL engine_mini3d.cpp_FUN_005152e0 ; 00515a37
        ;   XREF to: 005152e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005152e0()
    CMP dword ptr [0x01d227f4],0x3      ; 00515a3c | DAT_01d227f4
    JL 0x00515a20                       ; 00515a43
        ;   XREF to: 00515a20 (CONDITIONAL_JUMP)  ; LAB_00515a20
    CALL engine_mini3d.cpp_FUN_00515410 ; 00515a45
        ;   XREF to: 00515410 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00515410()
    MOV EBP,dword ptr [0x01d227f8]      ; 00515a4a | DAT_01d227f8
    CMP EBP,0x3                         ; 00515a50
    JL 0x00515a20                       ; 00515a53
        ;   XREF to: 00515a20 (CONDITIONAL_JUMP)  ; LAB_00515a20
    CALL engine_mini3d.cpp_FUN_00515530 ; 00515a55
        ;   XREF to: 00515530 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00515530()
    MOV EBP,dword ptr [0x01d227f8]      ; 00515a5a | DAT_01d227f8
    XOR EDX,EDX                         ; 00515a60
    TEST EBP,EBP                        ; 00515a62
    JLE 0x00515abc                      ; 00515a64
        ;   XREF to: 00515abc (CONDITIONAL_JUMP)  ; LAB_00515abc
    FLD float ptr [0x01d224e8]          ; 00515a66 | DAT_01d224e8
    MOV EAX,0x1d247fc                   ; 00515a6c
    FLD float ptr [0x01d224e4]          ; 00515a71 | DAT_01d224e4
    FLD float ptr [0x01d224e0]          ; 00515a77 | DAT_01d224e0
    FLD float ptr [EAX + 0x8]           ; 00515a7d | DAT_01d24804 | DAT_01d24844
        ;   Label: LAB_00515a7d
    FLD1                                ; 00515a80
    FDIVRP                              ; 00515a82
    FLD float ptr [EAX]                 ; 00515a84 | DAT_01d247fc | DAT_01d2483c
    FMUL float ptr [0x01d224dc]         ; 00515a86 | DAT_01d224dc
    FLD float ptr [EAX + 0x4]           ; 00515a8c | DAT_01d24800 | DAT_01d24840
    FMUL ST3                            ; 00515a8f
    FXCH ST2                            ; 00515a91
    FSTP float ptr [EAX + 0xc]          ; 00515a93 | DAT_01d24808 | DAT_01d24848
    FMUL float ptr [EAX + 0xc]          ; 00515a96 | DAT_01d24808 | DAT_01d24848
    FXCH                                ; 00515a99
    FMUL float ptr [EAX + 0xc]          ; 00515a9b | DAT_01d24808 | DAT_01d24848
    ADD EAX,0x40                        ; 00515a9e
    INC EDX                             ; 00515aa1
    FLD ST4                             ; 00515aa2
    FLD ST4                             ; 00515aa4
    FADDP ST3,ST0                       ; 00515aa6
    FADDP                               ; 00515aa8
    FXCH                                ; 00515aaa
    FSTP float ptr [EAX + -0x2c]        ; 00515aac | DAT_01d24810
    FSTP float ptr [EAX + -0x28]        ; 00515aaf | DAT_01d24814
    CMP EDX,EBP                         ; 00515ab2
    JL 0x00515a7d                       ; 00515ab4
        ;   XREF to: 00515a7d (CONDITIONAL_JUMP)  ; LAB_00515a7d
    FSTP ST0                            ; 00515ab6
    FSTP ST0                            ; 00515ab8
    FSTP ST0                            ; 00515aba
    PUSH EBP                            ; 00515abc
        ;   Label: LAB_00515abc
    PUSH 0x1d247fc                      ; 00515abd | DAT_01d247fc
    MOV dword ptr [0x01d227f8],EBP      ; 00515ac2 | DAT_01d227f8
    CALL engine_mini3d.cpp_FUN_005168c0 ; 00515ac8
        ;   XREF to: 005168c0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005168c0()
    MOV EBP,dword ptr [0x01d227f8]      ; 00515acd | DAT_01d227f8
    ADD ESP,0x8                         ; 00515ad3
    MOV EBP,dword ptr [0x01d227f8]      ; 00515ad6 | DAT_01d227f8
    POP EBP                             ; 00515adc
    POP EBX                             ; 00515add
    RET                                 ; 00515ade

