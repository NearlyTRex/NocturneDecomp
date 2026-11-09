; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00515850(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_00515ae0 at 00515bae
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
;   undefined4 DAT_01d23040
;   undefined4 DAT_01d2307c
;   undefined4 DAT_01d23080
;   ... and 10 more
;
; Called Functions:
;   engine_mini3d.cpp_FUN_00515080
;   engine_mini3d.cpp_FUN_005151b0
;   engine_mini3d.cpp_FUN_005152e0
;   engine_mini3d.cpp_FUN_00515410
;   engine_mini3d.cpp_FUN_00515530
;   engine_mini3d.cpp_FUN_005155f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515850
        ;   Label: engine_mini3d.cpp_FUN_00515850
    PUSH ESI                            ; 00515851
    PUSH EDI                            ; 00515852
    PUSH EBP                            ; 00515853
    MOV ESI,dword ptr [ESP + 0x14]      ; 00515854
    MOV EBX,dword ptr [ESP + 0x18]      ; 00515858
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0051585c
    MOV ECX,dword ptr [EBX + 0x10]      ; 00515860
    MOV EAX,dword ptr [ESI + 0x10]      ; 00515863
    MOV EDI,dword ptr [EDX + 0x10]      ; 00515866
    AND EAX,ECX                         ; 00515869
    TEST EAX,EDI                        ; 0051586b
    JNZ 0x005158d3                      ; 0051586d
        ;   XREF to: 005158d3 (CONDITIONAL_JUMP)  ; LAB_005158d3
    MOV EAX,dword ptr [ESI + 0x10]      ; 0051586f
    OR EAX,ECX                          ; 00515872
    OR EAX,EDI                          ; 00515874
    JZ 0x005158d8                       ; 00515876
        ;   XREF to: 005158d8 (CONDITIONAL_JUMP)  ; LAB_005158d8
    MOV EDI,0x3                         ; 00515878
    MOV ECX,0x10                        ; 0051587d
    MOV dword ptr [0x01d227e8],EDI      ; 00515882 | DAT_01d227e8
    MOV EDI,0x1d22ffc                   ; 00515888
    MOVSD.REP ES:EDI,ESI                ; 0051588d | DAT_01d22ffc | DAT_01d23000
    XOR EBP,EBP                         ; 0051588f
    MOV ECX,0x10                        ; 00515891
    MOV EDI,0x1d2303c                   ; 00515896
    MOV ESI,EBX                         ; 0051589b
    MOV dword ptr [0x01d227ec],EBP      ; 0051589d | DAT_01d227ec
    MOVSD.REP ES:EDI,ESI                ; 005158a3 | DAT_01d2303c | DAT_01d23040
    MOV dword ptr [0x01d227f0],EBP      ; 005158a5 | DAT_01d227f0
    MOV ECX,0x10                        ; 005158ab
    MOV EDI,0x1d2307c                   ; 005158b0
    MOV ESI,EDX                         ; 005158b5
    MOV dword ptr [0x01d227f4],EBP      ; 005158b7 | DAT_01d227f4
    MOV dword ptr [0x01d227f8],EBP      ; 005158bd | DAT_01d227f8
    MOVSD.REP ES:EDI,ESI                ; 005158c3 | DAT_01d2307c | DAT_01d23080
    CALL engine_mini3d.cpp_FUN_00515080 ; 005158c5
        ;   XREF to: 00515080 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00515080()
    CMP dword ptr [0x01d227ec],0x3      ; 005158ca | DAT_01d227ec
    JGE 0x005158e8                      ; 005158d1
        ;   XREF to: 005158e8 (CONDITIONAL_JUMP)  ; LAB_005158e8
    POP EBP                             ; 005158d3
        ;   Label: LAB_005158d3
    POP EDI                             ; 005158d4
    POP ESI                             ; 005158d5
    POP EBX                             ; 005158d6
    RET                                 ; 005158d7
    PUSH EDX                            ; 005158d8
        ;   Label: LAB_005158d8
    PUSH EBX                            ; 005158d9
    PUSH ESI                            ; 005158da
    CALL engine_mini3d.cpp_FUN_005155f0 ; 005158db
        ;   XREF to: 005155f0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005155f0()
    ADD ESP,0xc                         ; 005158e0
    POP EBP                             ; 005158e3
    POP EDI                             ; 005158e4
    POP ESI                             ; 005158e5
    POP EBX                             ; 005158e6
    RET                                 ; 005158e7
    CALL engine_mini3d.cpp_FUN_005151b0 ; 005158e8
        ;   XREF to: 005151b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005151b0()
        ;   Label: LAB_005158e8
    CMP dword ptr [0x01d227f0],0x3      ; 005158ed | DAT_01d227f0
    JL 0x005158d3                       ; 005158f4
        ;   XREF to: 005158d3 (CONDITIONAL_JUMP)  ; LAB_005158d3
    CALL engine_mini3d.cpp_FUN_005152e0 ; 005158f6
        ;   XREF to: 005152e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005152e0()
    CMP dword ptr [0x01d227f4],0x3      ; 005158fb | DAT_01d227f4
    JL 0x005158d3                       ; 00515902
        ;   XREF to: 005158d3 (CONDITIONAL_JUMP)  ; LAB_005158d3
    CALL engine_mini3d.cpp_FUN_00515410 ; 00515904
        ;   XREF to: 00515410 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00515410()
    CMP dword ptr [0x01d227f8],0x3      ; 00515909 | DAT_01d227f8
    JL 0x005158d3                       ; 00515910
        ;   XREF to: 005158d3 (CONDITIONAL_JUMP)  ; LAB_005158d3
    CALL engine_mini3d.cpp_FUN_00515530 ; 00515912
        ;   XREF to: 00515530 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00515530()
    MOV EBX,dword ptr [0x01d227f8]      ; 00515917 | DAT_01d227f8
    XOR EDX,EDX                         ; 0051591d
    TEST EBX,EBX                        ; 0051591f
    JLE 0x0051597f                      ; 00515921
        ;   XREF to: 0051597f (CONDITIONAL_JUMP)  ; LAB_0051597f
    FLD float ptr [0x01d224e8]          ; 00515923 | DAT_01d224e8
    MOV EAX,0x1d247fc                   ; 00515929
    FLD float ptr [0x01d224e4]          ; 0051592e | DAT_01d224e4
    FLD float ptr [0x01d224dc]          ; 00515934 | DAT_01d224dc
    FLD float ptr [EAX + 0x8]           ; 0051593a | DAT_01d24804 | DAT_01d24844
        ;   Label: LAB_0051593a
    FLD1                                ; 0051593d
    FDIVRP                              ; 0051593f
    FLD float ptr [EAX]                 ; 00515941 | DAT_01d247fc | DAT_01d2483c
    FMUL ST2                            ; 00515943
    FLD float ptr [EAX + 0x4]           ; 00515945 | DAT_01d24800 | DAT_01d24840
    FMUL float ptr [0x01d224e0]         ; 00515948 | DAT_01d224e0
    FXCH ST2                            ; 0051594e
    FSTP float ptr [EAX + 0xc]          ; 00515950 | DAT_01d24808 | DAT_01d24848
    FMUL float ptr [EAX + 0xc]          ; 00515953 | DAT_01d24808 | DAT_01d24848
    FXCH                                ; 00515956
    FMUL float ptr [EAX + 0xc]          ; 00515958 | DAT_01d24808 | DAT_01d24848
    MOV ESI,dword ptr [0x01d227f8]      ; 0051595b | DAT_01d227f8
    ADD EAX,0x40                        ; 00515961
    INC EDX                             ; 00515964
    FLD ST4                             ; 00515965
    FLD ST4                             ; 00515967
    FADDP ST3,ST0                       ; 00515969
    FADDP                               ; 0051596b
    FXCH                                ; 0051596d
    FSTP float ptr [EAX + -0x2c]        ; 0051596f | DAT_01d24810
    FSTP float ptr [EAX + -0x28]        ; 00515972 | DAT_01d24814
    CMP EDX,ESI                         ; 00515975
    JL 0x0051593a                       ; 00515977
        ;   XREF to: 0051593a (CONDITIONAL_JUMP)  ; LAB_0051593a
    FSTP ST0                            ; 00515979
    FSTP ST0                            ; 0051597b
    FSTP ST0                            ; 0051597d
    MOV ESI,0x1d247fc                   ; 0051597f
        ;   Label: LAB_0051597f
    MOV EDI,0x1d247fc                   ; 00515984
    XOR EBX,EBX                         ; 00515989
    ADD ESI,0x40                        ; 0051598b
    ADD EDI,0x80                        ; 0051598e
    MOV EAX,[0x01d227f8]                ; 00515994 | DAT_01d227f8
        ;   Label: LAB_00515994
    SUB EAX,0x2                         ; 00515999
    CMP EBX,EAX                         ; 0051599c
    JGE 0x005158d3                      ; 0051599e
        ;   XREF to: 005158d3 (CONDITIONAL_JUMP)  ; LAB_005158d3
    PUSH EDI                            ; 005159a4
    PUSH ESI                            ; 005159a5
    PUSH 0x1d247fc                      ; 005159a6
    INC EBX                             ; 005159ab
    ADD EDI,0x40                        ; 005159ac
    CALL engine_mini3d.cpp_FUN_005155f0 ; 005159af
        ;   XREF to: 005155f0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005155f0()
    ADD ESI,0x40                        ; 005159b4
    ADD ESP,0xc                         ; 005159b7
    JMP 0x00515994                      ; 005159ba
        ;   XREF to: 00515994 (UNCONDITIONAL_JUMP)  ; LAB_00515994

