; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * engine_model_c_FUN_0051f920(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_boss.c_FUN_0041d980
;   engine_model.c_freeMRGLData_FUN_0051f8a0
;   engine_model.c_loadModelFile_FUN_0051f6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f920
        ;   Label: engine_model.c_FUN_0051f920
    PUSH EDI                            ; 0051f921
    PUSH EBP                            ; 0051f922
    SUB ESP,0x154                       ; 0051f923
    MOV EAX,dword ptr [ESP + 0x164]     ; 0051f929
    MOV dword ptr [ESP + 0x130],ESI     ; 0051f930
    MOV EDX,dword ptr [EAX]             ; 0051f937
    MOV EBX,EAX                         ; 0051f939
    CMP EDX,0x20                        ; 0051f93b
    JZ 0x0051fd30                       ; 0051f93e
        ;   XREF to: 0051fd30 (CONDITIONAL_JUMP)  ; LAB_0051fd30
    CMP EDX,0x26                        ; 0051f944
    JZ 0x0051fd7e                       ; 0051f947
        ;   XREF to: 0051fd7e (CONDITIONAL_JUMP)  ; LAB_0051fd7e
    LEA EDX,[EAX + 0x8]                 ; 0051f94d
    MOV dword ptr [ESP + 0x138],EDX     ; 0051f950
    LEA EDX,[EAX + 0x14]                ; 0051f957
    MOV ESI,dword ptr [EAX]             ; 0051f95a
    MOV dword ptr [ESP + 0x12c],EDX     ; 0051f95c
    CMP ESI,0x14                        ; 0051f963
    JNZ 0x0051fda3                      ; 0051f966
        ;   XREF to: 0051fda3 (CONDITIONAL_JUMP)  ; LAB_0051fda3
    MOV EAX,0x7fffffff                  ; 0051f96c
        ;   Label: LAB_0051f96c
    MOV EDX,EAX                         ; 0051f971
    MOV ECX,dword ptr [EBX + 0x4]       ; 0051f973
    SAR EDX,0x1f                        ; 0051f976
    IDIV ECX                            ; 0051f979
    ADD EAX,EAX                         ; 0051f97b
    MOV dword ptr [ESP + 0x134],EAX     ; 0051f97d
    MOV EAX,dword ptr [ESP + 0x138]     ; 0051f984
    CMP dword ptr [EAX],0x2             ; 0051f98b
    JZ 0x0051f9c3                       ; 0051f98e
        ;   XREF to: 0051f9c3 (CONDITIONAL_JUMP)  ; LAB_0051f9c3
    PUSH 0x5ea0bb                       ; 0051f990
    LEA EAX,[ESP + 0x4]                 ; 0051f995
    PUSH EAX                            ; 0051f999
    MOV ESI,0x5ea0de                    ; 0051f99a
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0051f99f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0051f9a4
    MOV EAX,ESP                         ; 0051f9a7
    MOV EDI,0x177                       ; 0051f9a9
    PUSH EAX                            ; 0051f9ae
    MOV dword ptr [0x01d1d400],ESI      ; 0051f9af | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0051f9b5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051f9bb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051f9c0
    MOV EBP,0x80000000                  ; 0051f9c3
        ;   Label: LAB_0051f9c3
    MOV EAX,0x7fffffff                  ; 0051f9c8
    XOR EDX,EDX                         ; 0051f9cd
    MOV EDI,EBP                         ; 0051f9cf
    MOV ESI,EBP                         ; 0051f9d1
    MOV dword ptr [ESP + 0x140],EAX     ; 0051f9d3
    MOV ECX,EAX                         ; 0051f9da
    MOV EBX,EAX                         ; 0051f9dc
    MOV dword ptr [ESP + 0x13c],EBP     ; 0051f9de
    MOV EAX,dword ptr [ESP + 0x138]     ; 0051f9e5
    MOV dword ptr [ESP + 0x144],EDX     ; 0051f9ec
    MOV dword ptr [ESP + 0x148],EDX     ; 0051f9f3
    MOV EBP,dword ptr [EAX + 0x8]       ; 0051f9fa
    MOV dword ptr [ESP + 0x14c],EDX     ; 0051f9fd
    TEST EBP,EBP                        ; 0051fa04
    JLE 0x0051faab                      ; 0051fa06
        ;   XREF to: 0051faab (CONDITIONAL_JUMP)  ; LAB_0051faab
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0051fa0c
    MOV EBP,dword ptr [EAX]             ; 0051fa13
        ;   Label: LAB_0051fa13
    CMP ESI,EBP                         ; 0051fa15
    JGE 0x0051fa1b                      ; 0051fa17
        ;   XREF to: 0051fa1b (CONDITIONAL_JUMP)  ; LAB_0051fa1b
    MOV ESI,EBP                         ; 0051fa19
    MOV EBP,dword ptr [EAX + 0x4]       ; 0051fa1b
        ;   Label: LAB_0051fa1b
    CMP EDI,EBP                         ; 0051fa1e
    JGE 0x0051fa24                      ; 0051fa20
        ;   XREF to: 0051fa24 (CONDITIONAL_JUMP)  ; LAB_0051fa24
    MOV EDI,EBP                         ; 0051fa22
    MOV EBP,dword ptr [EAX + 0x8]       ; 0051fa24
        ;   Label: LAB_0051fa24
    CMP EBP,dword ptr [ESP + 0x13c]     ; 0051fa27
    JLE 0x0051fa37                      ; 0051fa2e
        ;   XREF to: 0051fa37 (CONDITIONAL_JUMP)  ; LAB_0051fa37
    MOV dword ptr [ESP + 0x13c],EBP     ; 0051fa30
    MOV EBP,dword ptr [EAX]             ; 0051fa37
        ;   Label: LAB_0051fa37
    CMP EBX,EBP                         ; 0051fa39
    JLE 0x0051fa3f                      ; 0051fa3b
        ;   XREF to: 0051fa3f (CONDITIONAL_JUMP)  ; LAB_0051fa3f
    MOV EBX,EBP                         ; 0051fa3d
    MOV EBP,dword ptr [EAX + 0x4]       ; 0051fa3f
        ;   Label: LAB_0051fa3f
    CMP ECX,EBP                         ; 0051fa42
    JLE 0x0051fa48                      ; 0051fa44
        ;   XREF to: 0051fa48 (CONDITIONAL_JUMP)  ; LAB_0051fa48
    MOV ECX,EBP                         ; 0051fa46
    MOV EBP,dword ptr [EAX + 0x8]       ; 0051fa48
        ;   Label: LAB_0051fa48
    CMP EBP,dword ptr [ESP + 0x140]     ; 0051fa4b
    JGE 0x0051fa5b                      ; 0051fa52
        ;   XREF to: 0051fa5b (CONDITIONAL_JUMP)  ; LAB_0051fa5b
    MOV dword ptr [ESP + 0x140],EBP     ; 0051fa54
    FILD dword ptr [EAX]                ; 0051fa5b
        ;   Label: LAB_0051fa5b
    FILD dword ptr [EAX + 0x4]          ; 0051fa5d
    FILD dword ptr [EAX + 0x8]          ; 0051fa60
    MOV EBP,dword ptr [ESP + 0x138]     ; 0051fa63
    ADD EAX,0xc                         ; 0051fa6a
    INC EDX                             ; 0051fa6d
    FXCH ST2                            ; 0051fa6e
    FADD float ptr [ESP + 0x14c]        ; 0051fa70
    FXCH                                ; 0051fa77
    FADD float ptr [ESP + 0x148]        ; 0051fa79
    FXCH ST2                            ; 0051fa80
    FADD float ptr [ESP + 0x144]        ; 0051fa82
    FXCH                                ; 0051fa89
    FSTP float ptr [ESP + 0x14c]        ; 0051fa8b
    FXCH                                ; 0051fa92
    FSTP float ptr [ESP + 0x148]        ; 0051fa94
    FSTP float ptr [ESP + 0x144]        ; 0051fa9b
    CMP EDX,dword ptr [EBP + 0x8]       ; 0051faa2
    JL 0x0051fa13                       ; 0051faa5
        ;   XREF to: 0051fa13 (CONDITIONAL_JUMP)  ; LAB_0051fa13
    MOV EAX,dword ptr [ESP + 0x134]     ; 0051faab
        ;   Label: LAB_0051faab
    MOV EDX,ESI                         ; 0051fab2
    IMUL EDX                            ; 0051fab4
    SHRD EAX,EDX,0x10                   ; 0051fab6
    MOV ESI,EAX                         ; 0051faba
    MOV dword ptr [ESP + 0xc4],EAX      ; 0051fabc
    MOV EDX,EDI                         ; 0051fac3
    MOV EAX,dword ptr [ESP + 0x134]     ; 0051fac5
    IMUL EDX                            ; 0051facc
    SHRD EAX,EDX,0x10                   ; 0051face
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0051fad2
    MOV dword ptr [ESP + 0xc8],EAX      ; 0051fad9
    MOV EAX,dword ptr [ESP + 0x134]     ; 0051fae0
    IMUL EDX                            ; 0051fae7
    SHRD EAX,EDX,0x10                   ; 0051fae9
    MOV dword ptr [ESP + 0xcc],EAX      ; 0051faed
    MOV EDX,EBX                         ; 0051faf4
    MOV EAX,dword ptr [ESP + 0x134]     ; 0051faf6
    IMUL EDX                            ; 0051fafd
    SHRD EAX,EDX,0x10                   ; 0051faff
    MOV EBX,EAX                         ; 0051fb03
    MOV dword ptr [ESP + 0xb8],EAX      ; 0051fb05
    MOV EDX,ECX                         ; 0051fb0c
    MOV EAX,dword ptr [ESP + 0x134]     ; 0051fb0e
    IMUL EDX                            ; 0051fb15
    SHRD EAX,EDX,0x10                   ; 0051fb17
    MOV EDX,dword ptr [ESP + 0x140]     ; 0051fb1b
    MOV dword ptr [ESP + 0xbc],EAX      ; 0051fb22
    MOV EAX,dword ptr [ESP + 0x134]     ; 0051fb29
    IMUL EDX                            ; 0051fb30
    SHRD EAX,EDX,0x10                   ; 0051fb32
    MOV dword ptr [ESP + 0xc0],EAX      ; 0051fb36
    MOV EAX,dword ptr [ESP + 0x138]     ; 0051fb3d
    FLD float ptr [ESP + 0x14c]         ; 0051fb44
    FILD dword ptr [EAX + 0x8]          ; 0051fb4b
    FLD1                                ; 0051fb4e
    FDIVRP                              ; 0051fb50
    FXCH                                ; 0051fb52
    FMUL ST1                            ; 0051fb54
    FLD float ptr [ESP + 0x148]         ; 0051fb56
    FMUL ST2                            ; 0051fb5d
    FLD float ptr [ESP + 0x144]         ; 0051fb5f
    FMULP ST3                           ; 0051fb66
    MOV EAX,dword ptr [ESP + 0x134]     ; 0051fb68
    FXCH                                ; 0051fb6f
    FSTP float ptr [ESP + 0x14c]        ; 0051fb71
    FSTP float ptr [ESP + 0x148]        ; 0051fb78
    FLD float ptr [ESP + 0x14c]         ; 0051fb7f
    CALL crt_math.c_round_FUN_005c03a0  ; 0051fb86
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x150]       ; 0051fb8b
    MOV EDX,dword ptr [ESP + 0x150]     ; 0051fb92
    FSTP float ptr [ESP + 0x144]        ; 0051fb99
    IMUL EDX                            ; 0051fba0
    SHRD EAX,EDX,0x10                   ; 0051fba2
    FLD float ptr [ESP + 0x148]         ; 0051fba6
    MOV dword ptr [ESP + 0xd0],EAX      ; 0051fbad
    CALL crt_math.c_round_FUN_005c03a0  ; 0051fbb4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x150]       ; 0051fbb9
    MOV EAX,dword ptr [ESP + 0x134]     ; 0051fbc0
    MOV EDX,dword ptr [ESP + 0x150]     ; 0051fbc7
    IMUL EDX                            ; 0051fbce
    SHRD EAX,EDX,0x10                   ; 0051fbd0
    FLD float ptr [ESP + 0x144]         ; 0051fbd4
    MOV dword ptr [ESP + 0xd4],EAX      ; 0051fbdb
    CALL crt_math.c_round_FUN_005c03a0  ; 0051fbe2
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x150]       ; 0051fbe7
    MOV EAX,dword ptr [ESP + 0x134]     ; 0051fbee
    MOV EDX,dword ptr [ESP + 0x150]     ; 0051fbf5
    IMUL EDX                            ; 0051fbfc
    SHRD EAX,EDX,0x10                   ; 0051fbfe
    MOV dword ptr [ESP + 0xd8],EAX      ; 0051fc02
    MOV EAX,ESI                         ; 0051fc09
    CDQ                                 ; 0051fc0b
    XOR EAX,EDX                         ; 0051fc0c
    SUB EAX,EDX                         ; 0051fc0e
    MOV ECX,EAX                         ; 0051fc10
    MOV dword ptr [ESP + 0xe0],EAX      ; 0051fc12
    MOV EAX,EBX                         ; 0051fc19
    CDQ                                 ; 0051fc1b
    XOR EAX,EDX                         ; 0051fc1c
    SUB EAX,EDX                         ; 0051fc1e
    CMP ECX,EAX                         ; 0051fc20
    JGE 0x0051fc32                      ; 0051fc22
        ;   XREF to: 0051fc32 (CONDITIONAL_JUMP)  ; LAB_0051fc32
    MOV EAX,EBX                         ; 0051fc24
    CDQ                                 ; 0051fc26
    XOR EAX,EDX                         ; 0051fc27
    SUB EAX,EDX                         ; 0051fc29
    MOV dword ptr [ESP + 0xe0],EAX      ; 0051fc2b
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0051fc32
        ;   Label: LAB_0051fc32
    CDQ                                 ; 0051fc39
    XOR EAX,EDX                         ; 0051fc3a
    SUB EAX,EDX                         ; 0051fc3c
    MOV ECX,EAX                         ; 0051fc3e
    MOV dword ptr [ESP + 0xe4],EAX      ; 0051fc40
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0051fc47
    CDQ                                 ; 0051fc4e
    XOR EAX,EDX                         ; 0051fc4f
    SUB EAX,EDX                         ; 0051fc51
    CMP ECX,EAX                         ; 0051fc53
    JGE 0x0051fc6a                      ; 0051fc55
        ;   XREF to: 0051fc6a (CONDITIONAL_JUMP)  ; LAB_0051fc6a
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0051fc57
    CDQ                                 ; 0051fc5e
    XOR EAX,EDX                         ; 0051fc5f
    SUB EAX,EDX                         ; 0051fc61
    MOV dword ptr [ESP + 0xe4],EAX      ; 0051fc63
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0051fc6a
        ;   Label: LAB_0051fc6a
    CDQ                                 ; 0051fc71
    XOR EAX,EDX                         ; 0051fc72
    SUB EAX,EDX                         ; 0051fc74
    MOV ECX,EAX                         ; 0051fc76
    MOV dword ptr [ESP + 0xe8],EAX      ; 0051fc78
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0051fc7f
    CDQ                                 ; 0051fc86
    XOR EAX,EDX                         ; 0051fc87
    SUB EAX,EDX                         ; 0051fc89
    CMP ECX,EAX                         ; 0051fc8b
    JGE 0x0051fca2                      ; 0051fc8d
        ;   XREF to: 0051fca2 (CONDITIONAL_JUMP)  ; LAB_0051fca2
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0051fc8f
    CDQ                                 ; 0051fc96
    XOR EAX,EDX                         ; 0051fc97
    SUB EAX,EDX                         ; 0051fc99
    MOV dword ptr [ESP + 0xe8],EAX      ; 0051fc9b
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0051fca2
        ;   Label: LAB_0051fca2
    MOV dword ptr [ESP + 0x150],EAX     ; 0051fca9
    FILD dword ptr [ESP + 0x150]        ; 0051fcb0
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0051fcb7
    FLD ST0                             ; 0051fcbe
    MOV dword ptr [ESP + 0x150],EAX     ; 0051fcc0
    FMULP                               ; 0051fcc7
    FILD dword ptr [ESP + 0x150]        ; 0051fcc9
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0051fcd0
    FMUL ST0                            ; 0051fcd7
    MOV dword ptr [ESP + 0x150],EAX     ; 0051fcd9
    FADDP                               ; 0051fce0
    FILD dword ptr [ESP + 0x150]        ; 0051fce2
    FMUL ST0                            ; 0051fce9
    FADDP                               ; 0051fceb
    FSQRT                               ; 0051fced
    MOV ECX,0xd                         ; 0051fcef
    LEA EDI,[ESP + 0x50]                ; 0051fcf4
    LEA ESI,[ESP + 0xb8]                ; 0051fcf8
    CALL crt_math.c_round_FUN_005c03a0  ; 0051fcff
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xdc]        ; 0051fd04
    MOVSD.REP ES:EDI,ESI                ; 0051fd0b
        ;   Label: LAB_0051fd0b
    MOV ECX,0xd                         ; 0051fd0d
    MOV EDI,dword ptr [ESP + 0x130]     ; 0051fd12
    LEA ESI,[ESP + 0x50]                ; 0051fd19
    MOVSD.REP ES:EDI,ESI                ; 0051fd1d
    MOV EAX,dword ptr [ESP + 0x130]     ; 0051fd1f
    ADD ESP,0x154                       ; 0051fd26
    POP EBP                             ; 0051fd2c
    POP EDI                             ; 0051fd2d
    POP EBX                             ; 0051fd2e
    RET                                 ; 0051fd2f
    ADD EAX,0x18                        ; 0051fd30
        ;   Label: LAB_0051fd30
    PUSH EAX                            ; 0051fd33
    CALL engine_model.c_loadModelFile_FUN_0051f6d0 ; 0051fd34
        ;   XREF to: 0051f6d0 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_loadModelFile_FUN_0051f6d0()
    ADD ESP,0x4                         ; 0051fd39
    LEA ESI,[ESP + 0xec]                ; 0051fd3c
    PUSH EAX                            ; 0051fd43
    LEA EDI,[ESP + 0xbc]                ; 0051fd44
    MOV EBX,EAX                         ; 0051fd4b
    CALL engine_model.c_FUN_0051f920    ; 0051fd4d
        ;   XREF to: 0051f920 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_FUN_0051f920()
    ADD ESP,0x4                         ; 0051fd52
    MOV ECX,0xd                         ; 0051fd55
    LEA ESI,[ESP + 0xec]                ; 0051fd5a
    PUSH EBX                            ; 0051fd61
    MOVSD.REP ES:EDI,ESI                ; 0051fd62
    CALL engine_model.c_freeMRGLData_FUN_0051f8a0 ; 0051fd64
        ;   XREF to: 0051f8a0 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_freeMRGLData_FUN_0051f8a0()
    MOV ECX,0xd                         ; 0051fd69
    LEA EDI,[ESP + 0x54]                ; 0051fd6e
    LEA ESI,[ESP + 0xbc]                ; 0051fd72
    ADD ESP,0x4                         ; 0051fd79
    JMP 0x0051fd0b                      ; 0051fd7c
        ;   XREF to: 0051fd0b (UNCONDITIONAL_JUMP)  ; LAB_0051fd0b
    PUSH EAX                            ; 0051fd7e
        ;   Label: LAB_0051fd7e
    LEA ESI,[ESP + 0x88]                ; 0051fd7f
    LEA EDI,[ESP + 0x54]                ; 0051fd86
    CALL engine_boss.c_FUN_0041d980     ; 0051fd8a
        ;   XREF to: 0041d980 (UNCONDITIONAL_CALL)  ; undefined engine_boss.c_FUN_0041d980()
    MOV ECX,0xd                         ; 0051fd8f
    LEA ESI,[ESP + 0x88]                ; 0051fd94
    ADD ESP,0x4                         ; 0051fd9b
    JMP 0x0051fd0b                      ; 0051fd9e
        ;   XREF to: 0051fd0b (UNCONDITIONAL_JUMP)  ; LAB_0051fd0b
    MOV EDI,0x5ea091                    ; 0051fda3
        ;   Label: LAB_0051fda3
    MOV EBP,0x173                       ; 0051fda8
    PUSH 0x5ea0a3                       ; 0051fdad
    MOV dword ptr [0x01d1d400],EDI      ; 0051fdb2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0051fdb8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051fdbe
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051fdc3
    JMP 0x0051f96c                      ; 0051fdc6
        ;   XREF to: 0051f96c (UNCONDITIONAL_JUMP)  ; LAB_0051f96c

