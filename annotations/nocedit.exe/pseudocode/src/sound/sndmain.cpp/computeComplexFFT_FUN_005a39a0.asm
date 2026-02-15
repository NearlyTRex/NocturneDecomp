; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_computeComplexFFT_FUN_005a39a0(float *input_real,float *input_imag,float *output_real,float *output_imag,int size)
;
; Parameters:
; float *          Stack[0x4]:4   input_real
; float *          Stack[0x8]:4   input_imag
; float *          Stack[0xc]:4   output_real
; float *          Stack[0x10]:4   output_imag
; int              Stack[0x14]:4   size
; Local Variables:
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined8       Stack[-0x74]:8  local_74
; undefined8       Stack[-0x6c]:8  local_6c
; undefined8       Stack[-0x64]:8  local_64
; undefined8       Stack[-0x5c]:8  local_5c
; undefined8       Stack[-0x54]:8  local_54
; undefined8       Stack[-0x4c]:8  local_4c
; undefined8       Stack[-0x34]:8  local_34
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   double DOUBLE_0064f397 = 2
;   double DOUBLE_0064f39f = 3.14159265350000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a39a0
        ;   Label: sound_sndmain.cpp_computeComplexFFT_FUN_005a39a0
    PUSH ESI                            ; 005a39a1
    PUSH EDI                            ; 005a39a2
    PUSH EBP                            ; 005a39a3
    MOV EBP,ESP                         ; 005a39a4
    SUB ESP,0x8c                        ; 005a39a6
    AND ESP,0xfffffff8                  ; 005a39ac
    MOV dword ptr [ESP + 0x80],0x1      ; 005a39af
    MOV CL,byte ptr [ESP + 0x80]        ; 005a39ba
        ;   Label: LAB_005a39ba
    MOV EAX,0x1                         ; 005a39c1
    SHL EAX,CL                          ; 005a39c6
    MOV ECX,dword ptr [EBP + 0x24]      ; 005a39c8
    CMP EAX,ECX                         ; 005a39cb
    JL 0x005a3c6b                       ; 005a39cd
        ;   XREF to: 005a3c6b (CONDITIONAL_JUMP)  ; LAB_005a3c6b
    XOR ESI,ESI                         ; 005a39d3
    TEST ECX,ECX                        ; 005a39d5
    JLE 0x005a3a33                      ; 005a39d7
        ;   XREF to: 005a3a33 (CONDITIONAL_JUMP)  ; LAB_005a3a33
    MOV EDI,dword ptr [EBP + 0x14]      ; 005a39d9
    MOV EBX,dword ptr [ESP + 0x80]      ; 005a39dc
        ;   Label: LAB_005a39dc
    MOV EDX,ESI                         ; 005a39e3
    XOR ECX,ECX                         ; 005a39e5
    XOR EAX,EAX                         ; 005a39e7
    TEST EBX,EBX                        ; 005a39e9
    JLE 0x005a3a04                      ; 005a39eb
        ;   XREF to: 005a3a04 (CONDITIONAL_JUMP)  ; LAB_005a3a04
    MOV EBX,EDX                         ; 005a39ed
        ;   Label: LAB_005a39ed
    ADD EAX,EAX                         ; 005a39ef
    AND EBX,0x1                         ; 005a39f1
    INC ECX                             ; 005a39f4
    OR EAX,EBX                          ; 005a39f5
    MOV EBX,dword ptr [ESP + 0x80]      ; 005a39f7
    SAR EDX,0x1                         ; 005a39fe
    CMP ECX,EBX                         ; 005a3a00
    JL 0x005a39ed                       ; 005a3a02
        ;   XREF to: 005a39ed (CONDITIONAL_JUMP)  ; LAB_005a39ed
    FLD float ptr [EDI]                 ; 005a3a04
        ;   Label: LAB_005a3a04
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005a3a06
    SHL EAX,0x2                         ; 005a3a09
    MOV EBX,dword ptr [EBP + 0x18]      ; 005a3a0c
    FSTP float ptr [EDX + EAX*0x1]      ; 005a3a0f
    MOV EDX,dword ptr [EBP + 0x20]      ; 005a3a12
    LEA ECX,[ESI*0x4 + 0x0]             ; 005a3a15
    ADD EAX,EDX                         ; 005a3a1c
    TEST EBX,EBX                        ; 005a3a1e
    JNZ 0x005a3c77                      ; 005a3a20
        ;   XREF to: 005a3c77 (CONDITIONAL_JUMP)  ; LAB_005a3c77
    MOV dword ptr [EAX],EBX             ; 005a3a26
        ;   Label: LAB_005a3a26
    MOV EAX,dword ptr [EBP + 0x24]      ; 005a3a28
    INC ESI                             ; 005a3a2b
    ADD EDI,0x4                         ; 005a3a2c
    CMP ESI,EAX                         ; 005a3a2f
    JL 0x005a39dc                       ; 005a3a31
        ;   XREF to: 005a39dc (CONDITIONAL_JUMP)  ; LAB_005a39dc
    MOV EDX,0x2                         ; 005a3a33
        ;   Label: LAB_005a3a33
    MOV ECX,dword ptr [EBP + 0x24]      ; 005a3a38
    MOV dword ptr [ESP + 0x7c],EDX      ; 005a3a3b
    CMP ECX,EDX                         ; 005a3a3f
    JL 0x005a3c64                       ; 005a3a41
        ;   XREF to: 005a3c64 (CONDITIONAL_JUMP)  ; LAB_005a3c64
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005a3a47
        ;   Label: LAB_005a3a47
    MOV EDX,EAX                         ; 005a3a4b
    SAR EDX,0x1f                        ; 005a3a4d
    SUB EAX,EDX                         ; 005a3a50
    SAR EAX,0x1                         ; 005a3a52
    MOV dword ptr [ESP + 0x88],EAX      ; 005a3a54
    MOV dword ptr [ESP + 0x28],EAX      ; 005a3a5b
    FILD dword ptr [ESP + 0x88]         ; 005a3a5f
    FDIVR double ptr [0x0064f39f]       ; 005a3a66 | DOUBLE_0064f39f
    FLD ST0                             ; 005a3a6c
    FSINCOS                             ; 005a3a6e
    FXCH ST2                            ; 005a3a70
    FLD double ptr [0x0064f397]         ; 005a3a72 | DOUBLE_0064f397
    FXCH                                ; 005a3a78
    FMUL ST1                            ; 005a3a7a
    FLD ST0                             ; 005a3a7c
    FSIN                                ; 005a3a7e
    FXCH                                ; 005a3a80
    FCOS                                ; 005a3a82
    FXCH ST4                            ; 005a3a84
    FSTP double ptr [ESP + 0x6c]        ; 005a3a86
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005a3a8a
    MOV dword ptr [ESP + 0x8],EAX       ; 005a3a8e
    MOV EAX,dword ptr [ESP + 0x70]      ; 005a3a92
    MOV dword ptr [ESP + 0xc],EAX       ; 005a3a96
    FLD double ptr [ESP + 0x8]          ; 005a3a9a
    FMULP ST2                           ; 005a3a9e
    MOV EDX,dword ptr [EBP + 0x24]      ; 005a3aa0
    FXCH ST3                            ; 005a3aa3
    FSTP double ptr [ESP + 0x6c]        ; 005a3aa5
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005a3aa9
    FXCH                                ; 005a3aad
    FSTP double ptr [ESP + 0x18]        ; 005a3aaf
    MOV dword ptr [ESP],EAX             ; 005a3ab3
    MOV EAX,dword ptr [ESP + 0x70]      ; 005a3ab6
    FXCH                                ; 005a3aba
    FSTP double ptr [ESP + 0x10]        ; 005a3abc
    MOV dword ptr [ESP + 0x4],EAX       ; 005a3ac0
    XOR EAX,EAX                         ; 005a3ac4
    FSTP double ptr [ESP + 0x20]        ; 005a3ac6
    MOV dword ptr [ESP + 0x84],EAX      ; 005a3aca
    TEST EDX,EDX                        ; 005a3ad1
    JLE 0x005a3c4f                      ; 005a3ad3
        ;   XREF to: 005a3c4f (CONDITIONAL_JUMP)  ; LAB_005a3c4f
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a3ad9
        ;   Label: LAB_005a3ad9
    MOV dword ptr [ESP + 0x4c],EAX      ; 005a3add
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a3ae1
    MOV dword ptr [ESP + 0x50],EAX      ; 005a3ae5
    MOV EAX,dword ptr [ESP]             ; 005a3ae9
    MOV dword ptr [ESP + 0x54],EAX      ; 005a3aec
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a3af0
    MOV dword ptr [ESP + 0x58],EAX      ; 005a3af4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a3af8
    MOV dword ptr [ESP + 0x34],EAX      ; 005a3afc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a3b00
    MOV dword ptr [ESP + 0x38],EAX      ; 005a3b04
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a3b08
    MOV EDI,dword ptr [ESP + 0x28]      ; 005a3b0c
    MOV dword ptr [ESP + 0x3c],EAX      ; 005a3b10
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a3b14
    XOR ESI,ESI                         ; 005a3b18
    MOV dword ptr [ESP + 0x40],EAX      ; 005a3b1a
    TEST EDI,EDI                        ; 005a3b1e
    JLE 0x005a3c30                      ; 005a3b20
        ;   XREF to: 005a3c30 (CONDITIONAL_JUMP)  ; LAB_005a3c30
    FLD double ptr [ESP + 0x20]         ; 005a3b26
    MOV EBX,dword ptr [ESP + 0x84]      ; 005a3b2a
    MOV EDX,dword ptr [EBP + 0x20]      ; 005a3b31
    LEA ECX,[EDI*0x4 + 0x0]             ; 005a3b34
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a3b3b
    MOV dword ptr [ESP + 0x88],ECX      ; 005a3b3e
    MOV ECX,dword ptr [EBP + 0x20]      ; 005a3b45
    MOV EDI,dword ptr [ESP + 0x88]      ; 005a3b48
    SHL EBX,0x2                         ; 005a3b4f
    ADD ECX,EDI                         ; 005a3b52
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005a3b54
    ADD EDX,EBX                         ; 005a3b57
    ADD EDI,dword ptr [ESP + 0x88]      ; 005a3b59
    ADD EAX,EBX                         ; 005a3b60
    ADD EDI,EBX                         ; 005a3b62
    ADD ECX,EBX                         ; 005a3b64
    MOV EBX,EDI                         ; 005a3b66
    FLD ST0                             ; 005a3b68
        ;   Label: LAB_005a3b68
    FMUL double ptr [ESP + 0x4c]        ; 005a3b6a
    FLD ST1                             ; 005a3b6e
    FMUL double ptr [ESP + 0x34]        ; 005a3b70
    FXCH                                ; 005a3b74
    FSUB double ptr [ESP + 0x54]        ; 005a3b76
    FLD float ptr [EBX]                 ; 005a3b7a
    FXCH                                ; 005a3b7c
    FST double ptr [ESP + 0x44]         ; 005a3b7e
    FMUL ST1                            ; 005a3b82
    FXCH ST2                            ; 005a3b84
    FSUB double ptr [ESP + 0x3c]        ; 005a3b86
    FLD float ptr [ECX]                 ; 005a3b8a
    FLD double ptr [ESP + 0x44]         ; 005a3b8c
    FMUL ST1                            ; 005a3b90
    FXCH ST2                            ; 005a3b92
    FST double ptr [ESP + 0x2c]         ; 005a3b94
    FMULP                               ; 005a3b98
    FLD double ptr [ESP + 0x2c]         ; 005a3b9a
    FMULP ST3                           ; 005a3b9e
    FLD float ptr [EAX]                 ; 005a3ba0
    MOV EDI,dword ptr [ESP + 0x4c]      ; 005a3ba2
    ADD EDX,0x4                         ; 005a3ba6
    ADD EAX,0x4                         ; 005a3ba9
    MOV dword ptr [ESP + 0x54],EDI      ; 005a3bac
    MOV EDI,dword ptr [ESP + 0x50]      ; 005a3bb0
    ADD ECX,0x4                         ; 005a3bb4
    MOV dword ptr [ESP + 0x58],EDI      ; 005a3bb7
    MOV EDI,dword ptr [ESP + 0x44]      ; 005a3bbb
    ADD EBX,0x4                         ; 005a3bbf
    MOV dword ptr [ESP + 0x4c],EDI      ; 005a3bc2
    MOV EDI,dword ptr [ESP + 0x48]      ; 005a3bc6
    INC ESI                             ; 005a3bca
    MOV dword ptr [ESP + 0x50],EDI      ; 005a3bcb
    FXCH                                ; 005a3bcf
    FSUBP ST4,ST0                       ; 005a3bd1
    MOV EDI,dword ptr [ESP + 0x34]      ; 005a3bd3
    FXCH ST2                            ; 005a3bd7
    FADDP                               ; 005a3bd9
    FXCH                                ; 005a3bdb
    FSUB ST0,ST2                        ; 005a3bdd
    MOV dword ptr [ESP + 0x3c],EDI      ; 005a3bdf
    FSTP float ptr [EBX + -0x4]         ; 005a3be3
    MOV EDI,dword ptr [ESP + 0x38]      ; 005a3be6
    FLD float ptr [EDX + -0x4]          ; 005a3bea
    MOV dword ptr [ESP + 0x40],EDI      ; 005a3bed
    FSUB ST0,ST1                        ; 005a3bf1
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005a3bf3
    FSTP float ptr [ECX + -0x4]         ; 005a3bf7
    FLD float ptr [EAX + -0x4]          ; 005a3bfa
    MOV dword ptr [ESP + 0x34],EDI      ; 005a3bfd
    FLD ST0                             ; 005a3c01
    MOV EDI,dword ptr [ESP + 0x30]      ; 005a3c03
    FADDP ST3,ST0                       ; 005a3c07
    MOV dword ptr [ESP + 0x38],EDI      ; 005a3c09
    FXCH ST2                            ; 005a3c0d
    FSTP ST2                            ; 005a3c0f
    FXCH                                ; 005a3c11
    FSTP float ptr [EAX + -0x4]         ; 005a3c13
    FLD float ptr [EDX + -0x4]          ; 005a3c16
    FADD ST1,ST0                        ; 005a3c19
    MOV EDI,dword ptr [ESP + 0x28]      ; 005a3c1b
    FXCH                                ; 005a3c1f
    FSTP ST1                            ; 005a3c21
    FSTP float ptr [EDX + -0x4]         ; 005a3c23
    CMP ESI,EDI                         ; 005a3c26
    JL 0x005a3b68                       ; 005a3c28
        ;   XREF to: 005a3b68 (CONDITIONAL_JUMP)  ; LAB_005a3b68
    FSTP ST0                            ; 005a3c2e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005a3c30
        ;   Label: LAB_005a3c30
    MOV ECX,dword ptr [ESP + 0x84]      ; 005a3c34
    ADD ECX,EAX                         ; 005a3c3b
    MOV EBX,dword ptr [EBP + 0x24]      ; 005a3c3d
    MOV dword ptr [ESP + 0x84],ECX      ; 005a3c40
    CMP ECX,EBX                         ; 005a3c47
    JL 0x005a3ad9                       ; 005a3c49
        ;   XREF to: 005a3ad9 (CONDITIONAL_JUMP)  ; LAB_005a3ad9
    MOV ESI,dword ptr [ESP + 0x7c]      ; 005a3c4f
        ;   Label: LAB_005a3c4f
    ADD ESI,ESI                         ; 005a3c53
    MOV EDI,dword ptr [EBP + 0x24]      ; 005a3c55
    MOV dword ptr [ESP + 0x7c],ESI      ; 005a3c58
    CMP ESI,EDI                         ; 005a3c5c
    JLE 0x005a3a47                      ; 005a3c5e
        ;   XREF to: 005a3a47 (CONDITIONAL_JUMP)  ; LAB_005a3a47
    MOV ESP,EBP                         ; 005a3c64
        ;   Label: LAB_005a3c64
    POP EBP                             ; 005a3c66
    POP EDI                             ; 005a3c67
    POP ESI                             ; 005a3c68
    POP EBX                             ; 005a3c69
    RET                                 ; 005a3c6a
    INC dword ptr [ESP + 0x80]          ; 005a3c6b
        ;   Label: LAB_005a3c6b
    JMP 0x005a39ba                      ; 005a3c72
        ;   XREF to: 005a39ba (UNCONDITIONAL_JUMP)  ; LAB_005a39ba
    MOV EDX,EBX                         ; 005a3c77
        ;   Label: LAB_005a3c77
    MOV EBX,dword ptr [ECX + EDX*0x1]   ; 005a3c79
    JMP 0x005a3a26                      ; 005a3c7c
        ;   XREF to: 005a3a26 (UNCONDITIONAL_JUMP)  ; LAB_005a3a26

