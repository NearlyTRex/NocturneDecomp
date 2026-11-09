; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004edcc0(void)
;
;
; XREF[12]:
;   engine_mini3d.cpp_FUN_004edea0 at 004ededd
;   engine_mini3d.cpp_FUN_004ee110 at 004ee134
;   engine_mini3d.cpp_FUN_004ee1a0 at 004ee1dd
;   engine_mini3d.cpp_FUN_004ee39e at 004ee3c4
;   engine_mini3d.cpp_FUN_004ee430 at 004ee480
;   engine_mini3d.cpp_FUN_004ee5b0 at 004ee5f9
;   engine_mini3d.cpp_FUN_004ee9f0 at 004ee9f0
;   engine_mini3d.cpp_FUN_004eec50 at 004eec5d
;   engine_mini3d.cpp_FUN_004eef00 at 004eef0a
;   engine_mini3d.cpp_FUN_004eef80 at 004eef80
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d76cac
;   undefined4 DAT_01d76cb0
;   undefined4 DAT_01d76cb4
;   undefined4 DAT_01d76cb8
;   undefined4 DAT_01d76cfc
;   undefined4 DAT_01d7977c
;   undefined4 DAT_01d7f53c
;   undefined4 DAT_01d7f540
;   undefined4 DAT_01d7f544
;   undefined4 DAT_01d7f548
;   undefined4 DAT_01d7f54c
;   undefined4 DAT_01d7f550
;   undefined4 DAT_01d7f554
;   undefined4 DAT_01d7f558
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004edcc0
        ;   Label: engine_mini3d.cpp_FUN_004edcc0
    SUB ESP,0x4                         ; 004edcc1
    CMP dword ptr [0x01d7977c],0x0      ; 004edcc4 | DAT_01d7977c
    JZ 0x004ede0b                       ; 004edccb
        ;   XREF to: 004ede0b (CONDITIONAL_JUMP)  ; LAB_004ede0b
    PUSH EDI                            ; 004edcd1
    MOV EAX,[0x01d76cfc]                ; 004edcd2 | DAT_01d76cfc
    FLD float ptr [0x01d76cb4]          ; 004edcd7 | DAT_01d76cb4
    FLD float ptr [EAX]                 ; 004edcdd
    FMUL ST1                            ; 004edcdf
    FLD float ptr [0x01d76cb8]          ; 004edce1 | DAT_01d76cb8
    FLD float ptr [EAX + 0x4]           ; 004edce7
    FMUL ST1                            ; 004edcea
    FLD float ptr [EAX + 0xc]           ; 004edcec
    FMUL ST4                            ; 004edcef
    FLD float ptr [EAX + 0x10]          ; 004edcf1
    FMUL ST3                            ; 004edcf4
    FLD float ptr [EAX + 0x18]          ; 004edcf6
    FMULP ST6                           ; 004edcf9
    FLD float ptr [EAX + 0x1c]          ; 004edcfb
    FMULP ST4                           ; 004edcfe
    MOV EDX,dword ptr [EAX + 0x8]       ; 004edd00
    MOV dword ptr [0x01d7f544],EDX      ; 004edd03 | DAT_01d7f544
    FLD float ptr [EAX + 0x28]          ; 004edd09
    FXCH ST2                            ; 004edd0c
    FSTP float ptr [0x01d7f54c]         ; 004edd0e | DAT_01d7f54c
    FXCH                                ; 004edd14
    FMUL float ptr [0x01d7f54c]         ; 004edd16 | DAT_01d7f54c
    FXCH ST4                            ; 004edd1c
    FSTP float ptr [0x01d7f53c]         ; 004edd1e | DAT_01d7f53c
    FLD float ptr [EAX + 0x24]          ; 004edd24
    FCHS                                ; 004edd27
    FLD ST0                             ; 004edd29
    FMUL float ptr [0x01d7f53c]         ; 004edd2b | DAT_01d7f53c
    FXCH ST3                            ; 004edd31
    FSTP float ptr [0x01d7f540]         ; 004edd33 | DAT_01d7f540
    FLD ST0                             ; 004edd39
    FMUL float ptr [0x01d7f540]         ; 004edd3b | DAT_01d7f540
    FXCH                                ; 004edd41
    FMUL float ptr [0x01d7f544]         ; 004edd43 | DAT_01d7f544
    FXCH ST2                            ; 004edd49
    FSTP float ptr [0x01d7f550]         ; 004edd4b | DAT_01d7f550
    MOV EDX,dword ptr [EAX + 0x14]      ; 004edd51
    MOV dword ptr [0x01d7f554],EDX      ; 004edd54 | DAT_01d7f554
    FLD float ptr [EAX + 0x28]          ; 004edd5a
    FMUL float ptr [0x01d7f550]         ; 004edd5d | DAT_01d7f550
    FXCH ST6                            ; 004edd63
    FSTP float ptr [0x01d7f55c]         ; 004edd65 | DAT_01d7f55c
    FLD float ptr [EAX + 0x28]          ; 004edd6b
    FXCH ST3                            ; 004edd6e
    FSUBRP ST5,ST0                      ; 004edd70
    FXCH ST2                            ; 004edd72
    FMUL float ptr [0x01d7f554]         ; 004edd74 | DAT_01d7f554
    FLD float ptr [EAX + 0x2c]          ; 004edd7a
    FMUL float ptr [0x01d7f55c]         ; 004edd7d | DAT_01d7f55c
    FXCH ST6                            ; 004edd83
    FSUBP ST3,ST0                       ; 004edd85
    FXCH ST3                            ; 004edd87
    FSTP float ptr [0x01d7f560]         ; 004edd89 | DAT_01d7f560
    FLD float ptr [EAX + 0x2c]          ; 004edd8f
    FMUL float ptr [0x01d7f560]         ; 004edd92 | DAT_01d7f560
    FLD float ptr [EAX + 0x20]          ; 004edd98
    FXCH ST4                            ; 004edd9b
    FSUBP ST2,ST0                       ; 004edd9d
    FXCH ST3                            ; 004edd9f
    FSTP float ptr [0x01d7f564]         ; 004edda1 | DAT_01d7f564
    FLD float ptr [EAX + 0x2c]          ; 004edda7
    FMUL float ptr [0x01d7f564]         ; 004eddaa | DAT_01d7f564
    MOV EDI,0x3f800000                  ; 004eddb0
    XOR ECX,ECX                         ; 004eddb5
    MOV EBP,dword ptr [0x02cf60b0]      ; 004eddb7 | DAT_02cf60b0
    MOV dword ptr [0x01d7f548],ECX      ; 004eddbd | DAT_01d7f548
    MOV dword ptr [0x01d7f558],ECX      ; 004eddc3 | DAT_01d7f558
    MOV dword ptr [0x01d7f568],ECX      ; 004eddc9 | DAT_01d7f568
    FXCH ST5                            ; 004eddcf
    FSUBP ST4,ST0                       ; 004eddd1
    MOV dword ptr [0x01d7f578],EDI      ; 004eddd3 | DAT_01d7f578
    FXCH ST3                            ; 004eddd9
    FSTP float ptr [0x01d7f56c]         ; 004edddb | DAT_01d7f56c
    FSUBRP                              ; 004edde1
    FXCH ST2                            ; 004edde3
    FSUBP                               ; 004edde5
    FXCH                                ; 004edde7
    FSTP float ptr [0x01d7f570]         ; 004edde9 | DAT_01d7f570
    FSTP float ptr [0x01d7f574]         ; 004eddef | DAT_01d7f574
    TEST EBP,EBP                        ; 004eddf5
    JZ 0x004ede02                       ; 004eddf7
        ;   XREF to: 004ede02 (CONDITIONAL_JUMP)  ; LAB_004ede02
    CMP dword ptr [0x01c6cee8],0x0      ; 004eddf9 | DAT_01c6cee8
    JNZ 0x004ede10                      ; 004ede00
        ;   XREF to: 004ede10 (CONDITIONAL_JUMP)  ; LAB_004ede10
    XOR EDX,EDX                         ; 004ede02
        ;   Label: LAB_004ede02
    MOV dword ptr [0x01d7977c],EDX      ; 004ede04 | DAT_01d7977c
    POP EDI                             ; 004ede0a
    ADD ESP,0x4                         ; 004ede0b
        ;   Label: LAB_004ede0b
    POP EBP                             ; 004ede0e
    RET                                 ; 004ede0f
    PUSH dword ptr [0x01d76cb0]         ; 004ede10 | DAT_01d76cb0
        ;   Label: LAB_004ede10
    PUSH dword ptr [0x01d76cac]         ; 004ede16 | DAT_01d76cac
    PUSH 0x1d7f53c                      ; 004ede1c | DAT_01d7f53c
    CALL dword ptr [0x02cf60b0]         ; 004ede21 | DAT_02cf60b0
    ADD ESP,0xc                         ; 004ede27
    XOR EDX,EDX                         ; 004ede2a
    MOV dword ptr [0x01d7977c],EDX      ; 004ede2c | DAT_01d7977c
    POP EDI                             ; 004ede32
    ADD ESP,0x4                         ; 004ede33
    POP EBP                             ; 004ede36
    RET                                 ; 004ede37

