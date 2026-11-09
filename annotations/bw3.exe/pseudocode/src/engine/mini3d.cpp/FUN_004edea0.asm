; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004edea0(int param_1,int param_2,undefined4 param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d76c34
;   undefined4 DAT_01d76f60
;   undefined4 DAT_01d7a694
;   undefined4 DAT_01d7a698
;   undefined4 DAT_01ed3198
;   undefined4 DAT_02cf60b4
;   undefined4 DAT_02cf60bc
;   undefined4 DAT_02cf60c0
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_mini3d.cpp_FUN_004edcc0
;   engine_mini3d.cpp_FUN_004ede40
;   engine_mini3d.cpp_FUN_004eea30
;   engine_mini3d.cpp_FUN_004ef470
;   engine_mini3d.cpp_FUN_004ef890
;   engine_mini3d.cpp_FUN_004efe20
;   engine_mini3d.cpp_FUN_004f0170
;   engine_mini3d.cpp_FUN_004f0270
;   engine_mini3d.cpp_FUN_004f12b0
;   engine_mini3d.cpp_FUN_004f2430
;   engine_mini3d.cpp_FUN_004f2490
;   engine_mini3d.cpp_FUN_004f2e30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004edea0
        ;   Label: engine_mini3d.cpp_FUN_004edea0
    PUSH ESI                            ; 004edea1
    PUSH EDI                            ; 004edea2
    PUSH EBP                            ; 004edea3
    SUB ESP,0x8                         ; 004edea4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004edea7
    MOV EDI,dword ptr [ESP + 0x20]      ; 004edeab
    MOV EAX,dword ptr [ESP + 0x28]      ; 004edeaf
    MOV ECX,dword ptr [0x01d76c34]      ; 004edeb3 | DAT_01d76c34
    MOV EDX,dword ptr [0x01ed3198]      ; 004edeb9 | DAT_01ed3198
    MOV ESI,dword ptr [0x01d7a694]      ; 004edebf | DAT_01d7a694
    ADD ECX,EDI                         ; 004edec5
    ADD EDX,EAX                         ; 004edec7
    MOV dword ptr [0x01d76c34],ECX      ; 004edec9 | DAT_01d76c34
    MOV dword ptr [0x01ed3198],EDX      ; 004edecf | DAT_01ed3198
    TEST ESI,ESI                        ; 004eded5
    JNZ 0x004edf99                      ; 004eded7
        ;   XREF to: 004edf99 (CONDITIONAL_JUMP)  ; LAB_004edf99
    CALL engine_mini3d.cpp_FUN_004edcc0 ; 004ededd
        ;   XREF to: 004edcc0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edcc0()
    CALL engine_mini3d.cpp_FUN_004f2430 ; 004edee2
        ;   XREF to: 004f2430 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2430()
    CMP dword ptr [0x02cf60b4],0x0      ; 004edee7 | DAT_02cf60b4
    JZ 0x004edefd                       ; 004edeee
        ;   XREF to: 004edefd (CONDITIONAL_JUMP)  ; LAB_004edefd
    CMP dword ptr [0x01c6cee8],0x0      ; 004edef0 | DAT_01c6cee8
    JNZ 0x004edfb1                      ; 004edef7
        ;   XREF to: 004edfb1 (CONDITIONAL_JUMP)  ; LAB_004edfb1
    CALL engine_mini3d.cpp_FUN_004ede40 ; 004edefd
        ;   XREF to: 004ede40 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ede40()
        ;   Label: LAB_004edefd
    CMP EDI,0x2710                      ; 004edf02
    JLE 0x004edf2e                      ; 004edf08
        ;   XREF to: 004edf2e (CONDITIONAL_JUMP)  ; LAB_004edf2e
    PUSH EDI                            ; 004edf0a
    MOV EDX,0x5c7fd4                    ; 004edf0b
    MOV ECX,0x6c0                       ; 004edf10
    PUSH 0x5c7fe9                       ; 004edf15
    MOV dword ptr [0x01d71de0],EDX      ; 004edf1a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004edf20 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004edf26
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004edf2b
    CALL engine_mini3d.cpp_FUN_004efe20 ; 004edf2e
        ;   XREF to: 004efe20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004efe20()
        ;   Label: LAB_004edf2e
    CMP dword ptr [0x02cf60bc],0x0      ; 004edf33 | DAT_02cf60bc
    JZ 0x004edfd5                       ; 004edf3a
        ;   XREF to: 004edfd5 (CONDITIONAL_JUMP)  ; LAB_004edfd5
    CMP dword ptr [0x01c6cee8],0x0      ; 004edf40 | DAT_01c6cee8
    JZ 0x004edfd5                       ; 004edf47
        ;   XREF to: 004edfd5 (CONDITIONAL_JUMP)  ; LAB_004edfd5
    MOV EBP,dword ptr [0x01d76f60]      ; 004edf4d | DAT_01d76f60
    XOR ESI,ESI                         ; 004edf53
    TEST EDI,EDI                        ; 004edf55
    JLE 0x004edf70                      ; 004edf57
        ;   XREF to: 004edf70 (CONDITIONAL_JUMP)  ; LAB_004edf70
    PUSH EBX                            ; 004edf59
        ;   Label: LAB_004edf59
    PUSH EBP                            ; 004edf5a
    INC ESI                             ; 004edf5b
    CALL engine_mini3d.cpp_FUN_004f0270 ; 004edf5c
        ;   XREF to: 004f0270 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0270()
    ADD EBX,0x20                        ; 004edf61
    ADD ESP,0x8                         ; 004edf64
    ADD EBP,0x24                        ; 004edf67
    CMP ESI,EDI                         ; 004edf6a
    JL 0x004edf59                       ; 004edf6c
        ;   XREF to: 004edf59 (CONDITIONAL_JUMP)  ; LAB_004edf59
    MOV EAX,EAX                         ; 004edf6e
    MOV EBX,dword ptr [0x01c6e2b4]      ; 004edf70 | DAT_01c6e2b4
        ;   Label: LAB_004edf70
    PUSH EBX                            ; 004edf76
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004edf77
    PUSH ESI                            ; 004edf7b
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004edf7c
    PUSH EBP                            ; 004edf80
    PUSH EDI                            ; 004edf81
    MOV EAX,[0x01d76f60]                ; 004edf82 | DAT_01d76f60
    PUSH EAX                            ; 004edf87
    CALL dword ptr [0x02cf60bc]         ; 004edf88 | DAT_02cf60bc
    ADD ESP,0x14                        ; 004edf8e
    ADD ESP,0x8                         ; 004edf91
    POP EBP                             ; 004edf94
    POP EDI                             ; 004edf95
    POP ESI                             ; 004edf96
    POP EBX                             ; 004edf97
    RET                                 ; 004edf98
    PUSH EAX                            ; 004edf99
        ;   Label: LAB_004edf99
    MOV ECX,dword ptr [ESP + 0x28]      ; 004edf9a
    PUSH ECX                            ; 004edf9e
    PUSH EDI                            ; 004edf9f
    PUSH EBX                            ; 004edfa0
    CALL engine_mini3d.cpp_FUN_004f2490 ; 004edfa1
        ;   XREF to: 004f2490 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2490()
    ADD ESP,0x10                        ; 004edfa6
    ADD ESP,0x8                         ; 004edfa9
    POP EBP                             ; 004edfac
    POP EDI                             ; 004edfad
    POP ESI                             ; 004edfae
    POP EBX                             ; 004edfaf
    RET                                 ; 004edfb0
    MOV ESI,dword ptr [0x01c6e2b4]      ; 004edfb1 | DAT_01c6e2b4
        ;   Label: LAB_004edfb1
    PUSH ESI                            ; 004edfb7
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004edfb8
    PUSH EBP                            ; 004edfbc
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004edfbd
    PUSH EAX                            ; 004edfc1
    PUSH EDI                            ; 004edfc2
    PUSH EBX                            ; 004edfc3
    CALL dword ptr [0x02cf60b4]         ; 004edfc4 | DAT_02cf60b4
    ADD ESP,0x14                        ; 004edfca
    ADD ESP,0x8                         ; 004edfcd
    POP EBP                             ; 004edfd0
    POP EDI                             ; 004edfd1
    POP ESI                             ; 004edfd2
    POP EBX                             ; 004edfd3
    RET                                 ; 004edfd4
    CMP dword ptr [0x02cf60c0],0x0      ; 004edfd5 | DAT_02cf60c0
        ;   Label: LAB_004edfd5
    JZ 0x004ee03a                       ; 004edfdc
        ;   XREF to: 004ee03a (CONDITIONAL_JUMP)  ; LAB_004ee03a
    CMP dword ptr [0x01c6cee8],0x0      ; 004edfde | DAT_01c6cee8
    JZ 0x004ee03a                       ; 004edfe5
        ;   XREF to: 004ee03a (CONDITIONAL_JUMP)  ; LAB_004ee03a
    MOV EBP,dword ptr [0x01d76f60]      ; 004edfe7 | DAT_01d76f60
    XOR ESI,ESI                         ; 004edfed
    TEST EDI,EDI                        ; 004edfef
    JLE 0x004ee010                      ; 004edff1
        ;   XREF to: 004ee010 (CONDITIONAL_JUMP)  ; LAB_004ee010
    PUSH EBX                            ; 004edff3
        ;   Label: LAB_004edff3
    PUSH EBP                            ; 004edff4
    INC ESI                             ; 004edff5
    CALL engine_mini3d.cpp_FUN_004f0170 ; 004edff6
        ;   XREF to: 004f0170 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0170()
    ADD EBX,0x20                        ; 004edffb
    ADD ESP,0x8                         ; 004edffe
    ADD EBP,0x20                        ; 004ee001
    CMP ESI,EDI                         ; 004ee004
    JL 0x004edff3                       ; 004ee006
        ;   XREF to: 004edff3 (CONDITIONAL_JUMP)  ; LAB_004edff3
    LEA EAX,[EAX]                       ; 004ee008
    MOV EDX,EDX                         ; 004ee00e
    MOV EBP,dword ptr [0x01c6e2b4]      ; 004ee010 | DAT_01c6e2b4
        ;   Label: LAB_004ee010
    PUSH EBP                            ; 004ee016
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004ee017
    PUSH EAX                            ; 004ee01b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004ee01c
    PUSH EDX                            ; 004ee020
    PUSH EDI                            ; 004ee021
    MOV ECX,dword ptr [0x01d76f60]      ; 004ee022 | DAT_01d76f60
    PUSH ECX                            ; 004ee028
    CALL dword ptr [0x02cf60c0]         ; 004ee029 | DAT_02cf60c0
    ADD ESP,0x14                        ; 004ee02f
    ADD ESP,0x8                         ; 004ee032
    POP EBP                             ; 004ee035
    POP EDI                             ; 004ee036
    POP ESI                             ; 004ee037
    POP EBX                             ; 004ee038
    RET                                 ; 004ee039
    MOV ESI,EBX                         ; 004ee03a
        ;   Label: LAB_004ee03a
    XOR ECX,ECX                         ; 004ee03c
    XOR EBP,EBP                         ; 004ee03e
    MOV EBX,dword ptr [0x01d76f60]      ; 004ee040 | DAT_01d76f60
    MOV dword ptr [ESP],ECX             ; 004ee046
    TEST EDI,EDI                        ; 004ee049
    JLE 0x004ee0b0                      ; 004ee04b
        ;   XREF to: 004ee0b0 (CONDITIONAL_JUMP)  ; LAB_004ee0b0
    LEA EAX,[EBX + 0x24]                ; 004ee04d
    MOV dword ptr [ESP + 0x4],EAX       ; 004ee050
    PUSH EBX                            ; 004ee054
        ;   Label: LAB_004ee054
    PUSH ESI                            ; 004ee055
    CALL engine_mini3d.cpp_FUN_004eea30 ; 004ee056
        ;   XREF to: 004eea30 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004eea30()
    ADD ESP,0x8                         ; 004ee05b
    FLD float ptr [ESI + 0x18]          ; 004ee05e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ee061
    FSTP float ptr [EBX + 0x1c]         ; 004ee065
    PUSH EAX                            ; 004ee068
    FLD float ptr [ESI + 0x1c]          ; 004ee069
    PUSH ESI                            ; 004ee06c
    FSTP float ptr [EBX + 0x20]         ; 004ee06d
    CALL engine_mini3d.cpp_FUN_004ef470 ; 004ee070
        ;   XREF to: 004ef470 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ef470()
    ADD ESP,0x8                         ; 004ee075
    PUSH EBX                            ; 004ee078
    INC EBP                             ; 004ee079
    ADD ESI,0x20                        ; 004ee07a
    CALL engine_mini3d.cpp_FUN_004ef890 ; 004ee07d
        ;   XREF to: 004ef890 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ef890()
    ADD ESP,0x4                         ; 004ee082
    MOV EAX,dword ptr [EBX + 0x10]      ; 004ee085
    ADD EBX,0x40                        ; 004ee088
    MOV EDX,dword ptr [ESP]             ; 004ee08b
    MOV ECX,dword ptr [ESP + 0x4]       ; 004ee08e
    OR EDX,EAX                          ; 004ee092
    ADD ECX,0x40                        ; 004ee094
    MOV dword ptr [ESP],EDX             ; 004ee097
    MOV dword ptr [ESP + 0x4],ECX       ; 004ee09a
    CMP EBP,EDI                         ; 004ee09e
    JL 0x004ee054                       ; 004ee0a0
        ;   XREF to: 004ee054 (CONDITIONAL_JUMP)  ; LAB_004ee054
    LEA EAX,[EAX]                       ; 004ee0a2
    LEA EDX,[EDX]                       ; 004ee0a8
    MOV EAX,EAX                         ; 004ee0ae
    CMP dword ptr [0x01d7a698],0x0      ; 004ee0b0 | DAT_01d7a698
        ;   Label: LAB_004ee0b0
    JZ 0x004ee0db                       ; 004ee0b7
        ;   XREF to: 004ee0db (CONDITIONAL_JUMP)  ; LAB_004ee0db
    MOV ECX,dword ptr [ESP + 0x28]      ; 004ee0b9
    PUSH ECX                            ; 004ee0bd
    MOV EBX,dword ptr [ESP + 0x28]      ; 004ee0be
    PUSH EBX                            ; 004ee0c2
    PUSH EDI                            ; 004ee0c3
    MOV ESI,dword ptr [0x01d76f60]      ; 004ee0c4 | DAT_01d76f60
    PUSH ESI                            ; 004ee0ca
    CALL engine_mini3d.cpp_FUN_004f2e30 ; 004ee0cb
        ;   XREF to: 004f2e30 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2e30()
    ADD ESP,0x10                        ; 004ee0d0
    ADD ESP,0x8                         ; 004ee0d3
    POP EBP                             ; 004ee0d6
    POP EDI                             ; 004ee0d7
    POP ESI                             ; 004ee0d8
    POP EBX                             ; 004ee0d9
    RET                                 ; 004ee0da
    MOV ESI,dword ptr [ESP]             ; 004ee0db
        ;   Label: LAB_004ee0db
    PUSH ESI                            ; 004ee0de
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004ee0df
    PUSH EBP                            ; 004ee0e3
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004ee0e4
    PUSH EAX                            ; 004ee0e8
    PUSH EDI                            ; 004ee0e9
    MOV EDX,dword ptr [0x01d76f60]      ; 004ee0ea | DAT_01d76f60
    PUSH EDX                            ; 004ee0f0
    CALL engine_mini3d.cpp_FUN_004f12b0 ; 004ee0f1
        ;   XREF to: 004f12b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f12b0()
    ADD ESP,0x14                        ; 004ee0f6
    ADD ESP,0x8                         ; 004ee0f9
    POP EBP                             ; 004ee0fc
    POP EDI                             ; 004ee0fd
    POP ESI                             ; 004ee0fe
    POP EBX                             ; 004ee0ff
    RET                                 ; 004ee100

