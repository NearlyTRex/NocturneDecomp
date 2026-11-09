; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_winrun_cpp_FUN_00590960(undefined4 param_1)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005b7790
;   engine_ini.cpp_FUN_004d8b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00590960
        ;   Label: unkafter_winrun.cpp_FUN_00590960
    PUSH ESI                            ; 00590961
    PUSH EDI                            ; 00590962
    PUSH EBP                            ; 00590963
    SUB ESP,0x110                       ; 00590964
    MOV EBP,dword ptr [ESP + 0x124]     ; 0059096a
    XOR EDI,EDI                         ; 00590971
    MOV dword ptr [ESP + 0x108],EDI     ; 00590973
    MOV dword ptr [ESP + 0x100],EDI     ; 0059097a
    MOV dword ptr [ESP + 0x104],EDI     ; 00590981
    PUSH EDI                            ; 00590988
        ;   Label: LAB_00590988
    PUSH 0x5eeb09                       ; 00590989
    LEA EAX,[ESP + 0x8]                 ; 0059098e
    PUSH EAX                            ; 00590992
    CALL crt_unknown.c_FUN_005b7790     ; 00590993
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 00590998
    MOV EAX,dword ptr [ESP + 0x108]     ; 0059099b
    MOV ESI,dword ptr [EAX + 0x26656c4] ; 005909a2
    PUSH ESI                            ; 005909a8
    LEA EAX,[ESP + 0x4]                 ; 005909a9
    PUSH EAX                            ; 005909ad
    PUSH EBP                            ; 005909ae
    CALL engine_ini.cpp_FUN_004d8b80    ; 005909af
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b80()
    ADD ESP,0xc                         ; 005909b4
    MOV EAX,dword ptr [ESP + 0x108]     ; 005909b7
    CMP dword ptr [EAX + 0x26656c4],0x0 ; 005909be
    JNZ 0x00590a0e                      ; 005909c5
        ;   XREF to: 00590a0e (CONDITIONAL_JUMP)  ; LAB_00590a0e
    MOV ESI,dword ptr [ESP + 0x100]     ; 005909c7
        ;   Label: LAB_005909c7
    MOV EAX,dword ptr [ESP + 0x104]     ; 005909ce
    MOV EBX,dword ptr [ESP + 0x108]     ; 005909d5
    INC EDI                             ; 005909dc
    ADD ESI,0x30                        ; 005909dd
    ADD EAX,0x4                         ; 005909e0
    ADD EBX,0xac                        ; 005909e3
    MOV dword ptr [ESP + 0x100],ESI     ; 005909e9
    MOV dword ptr [ESP + 0x104],EAX     ; 005909f0
    MOV dword ptr [ESP + 0x108],EBX     ; 005909f7
    CMP EDI,0x4                         ; 005909fe
    JL 0x00590988                       ; 00590a01
        ;   XREF to: 00590988 (CONDITIONAL_JUMP)  ; LAB_00590988
    ADD ESP,0x110                       ; 00590a03
    POP EBP                             ; 00590a09
    POP EDI                             ; 00590a0a
    POP ESI                             ; 00590a0b
    POP EBX                             ; 00590a0c
    RET                                 ; 00590a0d
    PUSH EDI                            ; 00590a0e
        ;   Label: LAB_00590a0e
    PUSH 0x5eeb1c                       ; 00590a0f
    LEA EAX,[ESP + 0x8]                 ; 00590a14
    PUSH EAX                            ; 00590a18
    CALL crt_unknown.c_FUN_005b7790     ; 00590a19
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 00590a1e
    MOV EAX,dword ptr [ESP + 0x104]     ; 00590a21
    MOV ECX,dword ptr [EAX + 0x2665974] ; 00590a28
    PUSH ECX                            ; 00590a2e
    LEA EAX,[ESP + 0x4]                 ; 00590a2f
    PUSH EAX                            ; 00590a33
    PUSH EBP                            ; 00590a34
    CALL engine_ini.cpp_FUN_004d8b80    ; 00590a35
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b80()
    ADD ESP,0xc                         ; 00590a3a
    XOR EBX,EBX                         ; 00590a3d
    MOV EAX,dword ptr [ESP + 0x108]     ; 00590a3f
    MOV ESI,dword ptr [ESP + 0x100]     ; 00590a46
    MOV dword ptr [ESP + 0x10c],EAX     ; 00590a4d
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00590a54
        ;   Label: LAB_00590a54
    MOV EDX,dword ptr [EAX + 0x26656c4] ; 00590a5b
    TEST EDX,EDX                        ; 00590a61
    JNZ 0x00590a74                      ; 00590a63
        ;   XREF to: 00590a74 (CONDITIONAL_JUMP)  ; LAB_00590a74
    INC EBX                             ; 00590a65
        ;   Label: LAB_00590a65
    ADD ESI,0xc                         ; 00590a66
    CMP EBX,0x4                         ; 00590a69
    JGE 0x005909c7                      ; 00590a6c
        ;   XREF to: 005909c7 (CONDITIONAL_JUMP)  ; LAB_005909c7
    JMP 0x00590a54                      ; 00590a72
        ;   XREF to: 00590a54 (UNCONDITIONAL_JUMP)  ; LAB_00590a54
    CMP EDX,0x4                         ; 00590a74
        ;   Label: LAB_00590a74
    JZ 0x00590a65                       ; 00590a77
        ;   XREF to: 00590a65 (CONDITIONAL_JUMP)  ; LAB_00590a65
    PUSH EBX                            ; 00590a79
    PUSH EDI                            ; 00590a7a
    PUSH 0x5eeb33                       ; 00590a7b
    LEA EAX,[ESP + 0xc]                 ; 00590a80
    PUSH EAX                            ; 00590a84
    CALL crt_unknown.c_FUN_005b7790     ; 00590a85
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 00590a8a
    MOV EAX,dword ptr [ESI + 0x2665984] ; 00590a8d
    PUSH EAX                            ; 00590a93
    LEA EAX,[ESP + 0x4]                 ; 00590a94
    PUSH EAX                            ; 00590a98
    PUSH EBP                            ; 00590a99
    CALL engine_ini.cpp_FUN_004d8b80    ; 00590a9a
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b80()
    ADD ESP,0xc                         ; 00590a9f
    PUSH EBX                            ; 00590aa2
    PUSH EDI                            ; 00590aa3
    PUSH 0x5eeb4d                       ; 00590aa4
    LEA EAX,[ESP + 0xc]                 ; 00590aa9
    PUSH EAX                            ; 00590aad
    CALL crt_unknown.c_FUN_005b7790     ; 00590aae
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 00590ab3
    MOV EDX,dword ptr [ESI + 0x2665988] ; 00590ab6
    PUSH EDX                            ; 00590abc
    LEA EAX,[ESP + 0x4]                 ; 00590abd
    PUSH EAX                            ; 00590ac1
    PUSH EBP                            ; 00590ac2
    CALL engine_ini.cpp_FUN_004d8b80    ; 00590ac3
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b80()
    ADD ESP,0xc                         ; 00590ac8
    PUSH EBX                            ; 00590acb
    PUSH EDI                            ; 00590acc
    PUSH 0x5eeb67                       ; 00590acd
    LEA EAX,[ESP + 0xc]                 ; 00590ad2
    PUSH EAX                            ; 00590ad6
    CALL crt_unknown.c_FUN_005b7790     ; 00590ad7
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 00590adc
    MOV ECX,dword ptr [ESI + 0x266598c] ; 00590adf
    PUSH ECX                            ; 00590ae5
    LEA EAX,[ESP + 0x4]                 ; 00590ae6
    PUSH EAX                            ; 00590aea
    PUSH EBP                            ; 00590aeb
    CALL engine_ini.cpp_FUN_004d8b80    ; 00590aec
        ;   XREF to: 004d8b80 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b80()
    ADD ESP,0xc                         ; 00590af1
    INC EBX                             ; 00590af4
    ADD ESI,0xc                         ; 00590af5
    CMP EBX,0x4                         ; 00590af8
    JGE 0x005909c7                      ; 00590afb
        ;   XREF to: 005909c7 (CONDITIONAL_JUMP)  ; LAB_005909c7
    JMP 0x00590a54                      ; 00590b01
        ;   XREF to: 00590a54 (UNCONDITIONAL_JUMP)  ; LAB_00590a54

