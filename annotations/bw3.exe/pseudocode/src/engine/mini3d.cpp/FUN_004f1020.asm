; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f1020(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f12b0 at 004f137e
;
; Referenced Globals:
;   undefined4 DAT_01d76c5c
;   undefined4 DAT_01d76c60
;   undefined4 DAT_01d76c64
;   undefined4 DAT_01d76c68
;   undefined4 DAT_01d76f68
;   undefined4 DAT_01d76f6c
;   undefined4 DAT_01d76f70
;   undefined4 DAT_01d76f74
;   undefined4 DAT_01d76f78
;   undefined4 DAT_01d7777c
;   undefined4 DAT_01d77780
;   undefined4 DAT_01d777bc
;   undefined4 DAT_01d777c0
;   undefined4 DAT_01d777fc
;   undefined4 DAT_01d77800
;   ... and 10 more
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f0850
;   engine_mini3d.cpp_FUN_004f0980
;   engine_mini3d.cpp_FUN_004f0ab0
;   engine_mini3d.cpp_FUN_004f0be0
;   engine_mini3d.cpp_FUN_004f0d00
;   engine_mini3d.cpp_FUN_004f0dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1020
        ;   Label: engine_mini3d.cpp_FUN_004f1020
    PUSH ESI                            ; 004f1021
    PUSH EDI                            ; 004f1022
    PUSH EBP                            ; 004f1023
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f1024
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f1028
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004f102c
    MOV ECX,dword ptr [EBX + 0x10]      ; 004f1030
    MOV EAX,dword ptr [ESI + 0x10]      ; 004f1033
    MOV EDI,dword ptr [EDX + 0x10]      ; 004f1036
    AND EAX,ECX                         ; 004f1039
    TEST EAX,EDI                        ; 004f103b
    JNZ 0x004f10a3                      ; 004f103d
        ;   XREF to: 004f10a3 (CONDITIONAL_JUMP)  ; LAB_004f10a3
    MOV EAX,dword ptr [ESI + 0x10]      ; 004f103f
    OR EAX,ECX                          ; 004f1042
    OR EAX,EDI                          ; 004f1044
    JZ 0x004f10a8                       ; 004f1046
        ;   XREF to: 004f10a8 (CONDITIONAL_JUMP)  ; LAB_004f10a8
    MOV EDI,0x3                         ; 004f1048
    MOV ECX,0x10                        ; 004f104d
    MOV dword ptr [0x01d76f68],EDI      ; 004f1052 | DAT_01d76f68
    MOV EDI,0x1d7777c                   ; 004f1058
    MOVSD.REP ES:EDI,ESI                ; 004f105d | DAT_01d7777c | DAT_01d77780
    XOR EBP,EBP                         ; 004f105f
    MOV ECX,0x10                        ; 004f1061
    MOV EDI,0x1d777bc                   ; 004f1066
    MOV ESI,EBX                         ; 004f106b
    MOV dword ptr [0x01d76f6c],EBP      ; 004f106d | DAT_01d76f6c
    MOVSD.REP ES:EDI,ESI                ; 004f1073 | DAT_01d777bc | DAT_01d777c0
    MOV dword ptr [0x01d76f70],EBP      ; 004f1075 | DAT_01d76f70
    MOV ECX,0x10                        ; 004f107b
    MOV EDI,0x1d777fc                   ; 004f1080
    MOV ESI,EDX                         ; 004f1085
    MOV dword ptr [0x01d76f74],EBP      ; 004f1087 | DAT_01d76f74
    MOV dword ptr [0x01d76f78],EBP      ; 004f108d | DAT_01d76f78
    MOVSD.REP ES:EDI,ESI                ; 004f1093 | DAT_01d777fc | DAT_01d77800
    CALL engine_mini3d.cpp_FUN_004f0850 ; 004f1095
        ;   XREF to: 004f0850 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0850()
    CMP dword ptr [0x01d76f6c],0x3      ; 004f109a | DAT_01d76f6c
    JGE 0x004f10b8                      ; 004f10a1
        ;   XREF to: 004f10b8 (CONDITIONAL_JUMP)  ; LAB_004f10b8
    POP EBP                             ; 004f10a3
        ;   Label: LAB_004f10a3
    POP EDI                             ; 004f10a4
    POP ESI                             ; 004f10a5
    POP EBX                             ; 004f10a6
    RET                                 ; 004f10a7
    PUSH EDX                            ; 004f10a8
        ;   Label: LAB_004f10a8
    PUSH EBX                            ; 004f10a9
    PUSH ESI                            ; 004f10aa
    CALL engine_mini3d.cpp_FUN_004f0dc0 ; 004f10ab
        ;   XREF to: 004f0dc0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0dc0()
    ADD ESP,0xc                         ; 004f10b0
    POP EBP                             ; 004f10b3
    POP EDI                             ; 004f10b4
    POP ESI                             ; 004f10b5
    POP EBX                             ; 004f10b6
    RET                                 ; 004f10b7
    CALL engine_mini3d.cpp_FUN_004f0980 ; 004f10b8
        ;   XREF to: 004f0980 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0980()
        ;   Label: LAB_004f10b8
    CMP dword ptr [0x01d76f70],0x3      ; 004f10bd | DAT_01d76f70
    JL 0x004f10a3                       ; 004f10c4
        ;   XREF to: 004f10a3 (CONDITIONAL_JUMP)  ; LAB_004f10a3
    CALL engine_mini3d.cpp_FUN_004f0ab0 ; 004f10c6
        ;   XREF to: 004f0ab0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0ab0()
    CMP dword ptr [0x01d76f74],0x3      ; 004f10cb | DAT_01d76f74
    JL 0x004f10a3                       ; 004f10d2
        ;   XREF to: 004f10a3 (CONDITIONAL_JUMP)  ; LAB_004f10a3
    CALL engine_mini3d.cpp_FUN_004f0be0 ; 004f10d4
        ;   XREF to: 004f0be0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0be0()
    CMP dword ptr [0x01d76f78],0x3      ; 004f10d9 | DAT_01d76f78
    JL 0x004f10a3                       ; 004f10e0
        ;   XREF to: 004f10a3 (CONDITIONAL_JUMP)  ; LAB_004f10a3
    CALL engine_mini3d.cpp_FUN_004f0d00 ; 004f10e2
        ;   XREF to: 004f0d00 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0d00()
    MOV EBX,dword ptr [0x01d76f78]      ; 004f10e7 | DAT_01d76f78
    XOR EDX,EDX                         ; 004f10ed
    TEST EBX,EBX                        ; 004f10ef
    JLE 0x004f114f                      ; 004f10f1
        ;   XREF to: 004f114f (CONDITIONAL_JUMP)  ; LAB_004f114f
    FLD float ptr [0x01d76c68]          ; 004f10f3 | DAT_01d76c68
    MOV EAX,0x1d78f7c                   ; 004f10f9
    FLD float ptr [0x01d76c64]          ; 004f10fe | DAT_01d76c64
    FLD float ptr [0x01d76c5c]          ; 004f1104 | DAT_01d76c5c
    FLD float ptr [EAX + 0x8]           ; 004f110a | DAT_01d78f84 | DAT_01d78fc4
        ;   Label: LAB_004f110a
    FLD1                                ; 004f110d
    FDIVRP                              ; 004f110f
    FLD float ptr [EAX]                 ; 004f1111 | DAT_01d78f7c | DAT_01d78fbc
    FMUL ST2                            ; 004f1113
    FLD float ptr [EAX + 0x4]           ; 004f1115 | DAT_01d78f80 | DAT_01d78fc0
    FMUL float ptr [0x01d76c60]         ; 004f1118 | DAT_01d76c60
    FXCH ST2                            ; 004f111e
    FSTP float ptr [EAX + 0xc]          ; 004f1120 | DAT_01d78f88 | DAT_01d78fc8
    FMUL float ptr [EAX + 0xc]          ; 004f1123 | DAT_01d78f88 | DAT_01d78fc8
    FXCH                                ; 004f1126
    FMUL float ptr [EAX + 0xc]          ; 004f1128 | DAT_01d78f88 | DAT_01d78fc8
    MOV ESI,dword ptr [0x01d76f78]      ; 004f112b | DAT_01d76f78
    ADD EAX,0x40                        ; 004f1131
    INC EDX                             ; 004f1134
    FLD ST4                             ; 004f1135
    FLD ST4                             ; 004f1137
    FADDP ST3,ST0                       ; 004f1139
    FADDP                               ; 004f113b
    FXCH                                ; 004f113d
    FSTP float ptr [EAX + -0x2c]        ; 004f113f | DAT_01d78f90
    FSTP float ptr [EAX + -0x28]        ; 004f1142 | DAT_01d78f94
    CMP EDX,ESI                         ; 004f1145
    JL 0x004f110a                       ; 004f1147
        ;   XREF to: 004f110a (CONDITIONAL_JUMP)  ; LAB_004f110a
    FSTP ST0                            ; 004f1149
    FSTP ST0                            ; 004f114b
    FSTP ST0                            ; 004f114d
    MOV ESI,0x1d78f7c                   ; 004f114f
        ;   Label: LAB_004f114f
    MOV EDI,0x1d78f7c                   ; 004f1154
    XOR EBX,EBX                         ; 004f1159
    ADD ESI,0x40                        ; 004f115b
    ADD EDI,0x80                        ; 004f115e
    MOV EAX,[0x01d76f78]                ; 004f1164 | DAT_01d76f78
        ;   Label: LAB_004f1164
    SUB EAX,0x2                         ; 004f1169
    CMP EBX,EAX                         ; 004f116c
    JGE 0x004f10a3                      ; 004f116e
        ;   XREF to: 004f10a3 (CONDITIONAL_JUMP)  ; LAB_004f10a3
    PUSH EDI                            ; 004f1174
    PUSH ESI                            ; 004f1175 | DAT_01d78fbc
    PUSH 0x1d78f7c                      ; 004f1176 | DAT_01d78f7c
    INC EBX                             ; 004f117b
    ADD EDI,0x40                        ; 004f117c
    CALL engine_mini3d.cpp_FUN_004f0dc0 ; 004f117f
        ;   XREF to: 004f0dc0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0dc0()
    ADD ESI,0x40                        ; 004f1184
    ADD ESP,0xc                         ; 004f1187
    JMP 0x004f1164                      ; 004f118a
        ;   XREF to: 004f1164 (UNCONDITIONAL_JUMP)  ; LAB_004f1164

