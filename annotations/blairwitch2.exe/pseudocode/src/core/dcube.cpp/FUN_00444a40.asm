; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dcube_cpp_FUN_00444a40(undefined4 *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dcube.cpp_FUN_00445620 at 0044585f
;   core_dcube.cpp_FUN_00446b60 at 00446b9a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444a40
        ;   Label: core_dcube.cpp_FUN_00444a40
    PUSH EBP                            ; 00444a41
    MOV EBP,ESP                         ; 00444a42
    SUB ESP,0x3c                        ; 00444a44
    AND ESP,0xfffffff8                  ; 00444a47
    MOV EDX,dword ptr [EBP + 0xc]       ; 00444a4a
    MOV EBX,dword ptr [EBP + 0x10]      ; 00444a4d
    MOV ECX,dword ptr [EBP + 0x14]      ; 00444a50
    FLD float ptr [EDX + 0x10]          ; 00444a53
    FMUL float ptr [ECX + 0x4]          ; 00444a56
    FLD float ptr [EDX + 0xc]           ; 00444a59
    FMUL float ptr [ECX]                ; 00444a5c
    FADDP                               ; 00444a5e
    FLD float ptr [EDX + 0x14]          ; 00444a60
    FMUL float ptr [ECX + 0x8]          ; 00444a63
    FADDP                               ; 00444a66
    FST float ptr [ESP + 0xc]           ; 00444a68
    FLDZ                                ; 00444a6c
    FCOMPP                              ; 00444a6e
    FNSTSW AX                           ; 00444a70
    SAHF                                ; 00444a72
    JNC 0x00444bd5                      ; 00444a73
        ;   XREF to: 00444bd5 (CONDITIONAL_JUMP)  ; LAB_00444bd5
    FLD float ptr [EDX + 0xc]           ; 00444a79
    FMUL float ptr [EBX]                ; 00444a7c
    FADD float ptr [EDX + 0x18]         ; 00444a7e
    FLD float ptr [EDX + 0x10]          ; 00444a81
    FMUL float ptr [EBX + 0x4]          ; 00444a84
    FADDP                               ; 00444a87
    FLD float ptr [EDX + 0x14]          ; 00444a89
    FMUL float ptr [EBX + 0x8]          ; 00444a8c
    FADDP                               ; 00444a8f
    FCHS                                ; 00444a91
    FST float ptr [ESP + 0x4]           ; 00444a93
    FLDZ                                ; 00444a97
    FCOMPP                              ; 00444a99
    FNSTSW AX                           ; 00444a9b
    SAHF                                ; 00444a9d
    JA 0x00444bd5                       ; 00444a9e
        ;   XREF to: 00444bd5 (CONDITIONAL_JUMP)  ; LAB_00444bd5
    FLD float ptr [ESP + 0x4]           ; 00444aa4
    FCOMP float ptr [ESP + 0xc]         ; 00444aa8
    FNSTSW AX                           ; 00444aac
    SAHF                                ; 00444aae
    JA 0x00444bd5                       ; 00444aaf
        ;   XREF to: 00444bd5 (CONDITIONAL_JUMP)  ; LAB_00444bd5
    FLD float ptr [ESP + 0x4]           ; 00444ab5
    FDIV float ptr [ESP + 0xc]          ; 00444ab9
    FST float ptr [ESP + 0x4]           ; 00444abd
    FMUL float ptr [ECX]                ; 00444ac1
    FLD float ptr [ESP + 0x4]           ; 00444ac3
    FMUL float ptr [ECX + 0x4]          ; 00444ac7
    FLD float ptr [ESP + 0x4]           ; 00444aca
    FMUL float ptr [ECX + 0x8]          ; 00444ace
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00444ad1
    FXCH ST2                            ; 00444ad4
    FADD float ptr [EBX]                ; 00444ad6
    FXCH                                ; 00444ad8
    FADD float ptr [EBX + 0x4]          ; 00444ada
    FXCH ST2                            ; 00444add
    FADD float ptr [EBX + 0x8]          ; 00444adf
    FXCH                                ; 00444ae2
    FSTP float ptr [ESP + 0x10]         ; 00444ae4
    FXCH                                ; 00444ae8
    FSTP float ptr [ESP + 0x14]         ; 00444aea
    FSTP float ptr [ESP + 0x18]         ; 00444aee
    CMP EAX,0x1                         ; 00444af2
    JNC 0x00444c7d                      ; 00444af5
        ;   XREF to: 00444c7d (CONDITIONAL_JUMP)  ; LAB_00444c7d
    TEST EAX,EAX                        ; 00444afb
    JNZ 0x00444b57                      ; 00444afd
        ;   XREF to: 00444b57 (CONDITIONAL_JUMP)  ; LAB_00444b57
    FLD float ptr [ESP + 0x14]          ; 00444aff
    MOV ECX,dword ptr [EDX + 0x4]       ; 00444b03
    FLD float ptr [ESP + 0x18]          ; 00444b06
    MOV EAX,dword ptr [EDX]             ; 00444b0a
    FLD float ptr [ECX + 0x4]           ; 00444b0c
    MOV EDX,dword ptr [EDX + 0x8]       ; 00444b0f
    FLD float ptr [ECX + 0x8]           ; 00444b12
    FLD float ptr [EDX + 0x4]           ; 00444b15
    FLD float ptr [EDX + 0x8]           ; 00444b18
    FXCH ST5                            ; 00444b1b
    FSUB float ptr [EAX + 0x4]          ; 00444b1d
    FXCH ST4                            ; 00444b20
    FSUB float ptr [EAX + 0x8]          ; 00444b22
    FXCH ST4                            ; 00444b25
    FSTP float ptr [ESP + 0x28]         ; 00444b27
    FXCH ST3                            ; 00444b2b
    FSTP float ptr [ESP + 0x20]         ; 00444b2d
    FXCH                                ; 00444b31
    FSUB float ptr [EAX + 0x4]          ; 00444b33
    FXCH                                ; 00444b36
    FSUB float ptr [EAX + 0x8]          ; 00444b38
    FXCH                                ; 00444b3b
    FSTP float ptr [ESP + 0x2c]         ; 00444b3d
    FSTP float ptr [ESP + 0x1c]         ; 00444b41
    FSUB float ptr [EAX + 0x4]          ; 00444b45
    FXCH                                ; 00444b48
        ;   Label: LAB_00444b48
    FSUB float ptr [EAX + 0x8]          ; 00444b4a
    FXCH                                ; 00444b4d
        ;   Label: LAB_00444b4d
    FSTP float ptr [ESP + 0x30]         ; 00444b4f
    FSTP float ptr [ESP + 0x24]         ; 00444b53
    FLD float ptr [ESP + 0x24]          ; 00444b57
        ;   Label: LAB_00444b57
    FLD float ptr [ESP + 0x2c]          ; 00444b5b
    FMUL ST1                            ; 00444b5f
    FLD float ptr [ESP + 0x30]          ; 00444b61
    FLD float ptr [ESP + 0x1c]          ; 00444b65
    FMUL ST1                            ; 00444b69
    FSUBP ST2,ST0                       ; 00444b6b
    FLD1                                ; 00444b6d
    FDIVRP ST2,ST0                      ; 00444b6f
    FLD float ptr [ESP + 0x28]          ; 00444b71
    FMULP ST3                           ; 00444b75
    FMUL float ptr [ESP + 0x20]         ; 00444b77
    FSUBP ST2,ST0                       ; 00444b7b
    FSTP float ptr [ESP + 0x38]         ; 00444b7d
    FMUL float ptr [ESP + 0x38]         ; 00444b81
    FST float ptr [ESP + 0x8]           ; 00444b85
    FLDZ                                ; 00444b89
    FCOMPP                              ; 00444b8b
    FNSTSW AX                           ; 00444b8d
    SAHF                                ; 00444b8f
    JA 0x00444bd5                       ; 00444b90
        ;   XREF to: 00444bd5 (CONDITIONAL_JUMP)  ; LAB_00444bd5
    FLD float ptr [ESP + 0x2c]          ; 00444b92
    FMUL float ptr [ESP + 0x20]         ; 00444b96
    FLD float ptr [ESP + 0x1c]          ; 00444b9a
    FMUL float ptr [ESP + 0x28]         ; 00444b9e
    FSUBP                               ; 00444ba2
    FMUL float ptr [ESP + 0x38]         ; 00444ba4
    FST float ptr [ESP]                 ; 00444ba8
    FLDZ                                ; 00444bab
    FCOMPP                              ; 00444bad
    FNSTSW AX                           ; 00444baf
    SAHF                                ; 00444bb1
    JA 0x00444bd5                       ; 00444bb2
        ;   XREF to: 00444bd5 (CONDITIONAL_JUMP)  ; LAB_00444bd5
    FLD float ptr [ESP + 0x8]           ; 00444bb4
    FADD float ptr [ESP]                ; 00444bb8
    FLD1                                ; 00444bbb
    FCOMPP                              ; 00444bbd
    FNSTSW AX                           ; 00444bbf
    SAHF                                ; 00444bc1
    JC 0x00444bd5                       ; 00444bc2
        ;   XREF to: 00444bd5 (CONDITIONAL_JUMP)  ; LAB_00444bd5
    MOV EAX,dword ptr [ESP + 0x4]       ; 00444bc4
    MOV dword ptr [ESP + 0x34],EAX      ; 00444bc8
    MOV EAX,dword ptr [ESP + 0x34]      ; 00444bcc
    MOV ESP,EBP                         ; 00444bd0
    POP EBP                             ; 00444bd2
    POP EBX                             ; 00444bd3
    RET                                 ; 00444bd4
    MOV dword ptr [ESP + 0x34],0xbf800000 ; 00444bd5
        ;   Label: LAB_00444bd5
    MOV EAX,dword ptr [ESP + 0x34]      ; 00444bdd
    MOV ESP,EBP                         ; 00444be1
    POP EBP                             ; 00444be3
    POP EBX                             ; 00444be4
    RET                                 ; 00444be5
    FLD float ptr [ESP + 0x10]          ; 00444be6
        ;   Label: LAB_00444be6
    MOV ECX,dword ptr [EDX + 0x4]       ; 00444bea
    FLD float ptr [ESP + 0x18]          ; 00444bed
    MOV EAX,dword ptr [EDX]             ; 00444bf1
    FLD float ptr [ECX]                 ; 00444bf3
    MOV EDX,dword ptr [EDX + 0x8]       ; 00444bf5
    FLD float ptr [ECX + 0x8]           ; 00444bf8
    FLD float ptr [EDX]                 ; 00444bfb
    FLD float ptr [EDX + 0x8]           ; 00444bfd
    FXCH ST5                            ; 00444c00
    FSUB float ptr [EAX]                ; 00444c02
    FXCH ST4                            ; 00444c04
    FSUB float ptr [EAX + 0x8]          ; 00444c06
    FXCH ST4                            ; 00444c09
    FSTP float ptr [ESP + 0x28]         ; 00444c0b
    FXCH ST3                            ; 00444c0f
    FSTP float ptr [ESP + 0x20]         ; 00444c11
    FXCH                                ; 00444c15
    FSUB float ptr [EAX]                ; 00444c17
    FXCH                                ; 00444c19
    FSUB float ptr [EAX + 0x8]          ; 00444c1b
    FXCH                                ; 00444c1e
    FSTP float ptr [ESP + 0x2c]         ; 00444c20
    FSTP float ptr [ESP + 0x1c]         ; 00444c24
    FSUB float ptr [EAX]                ; 00444c28
    JMP 0x00444b48                      ; 00444c2a
        ;   XREF to: 00444b48 (UNCONDITIONAL_JUMP)  ; LAB_00444b48
    FLD float ptr [ESP + 0x10]          ; 00444c2f
        ;   Label: LAB_00444c2f
    MOV ECX,dword ptr [EDX + 0x4]       ; 00444c33
    FLD float ptr [ESP + 0x14]          ; 00444c36
    MOV EAX,dword ptr [EDX]             ; 00444c3a
    FLD float ptr [ECX]                 ; 00444c3c
    MOV EDX,dword ptr [EDX + 0x8]       ; 00444c3e
    FLD float ptr [ECX + 0x4]           ; 00444c41
    FLD float ptr [EDX]                 ; 00444c44
    FLD float ptr [EDX + 0x4]           ; 00444c46
    FXCH ST5                            ; 00444c49
    FSUB float ptr [EAX]                ; 00444c4b
    FXCH ST4                            ; 00444c4d
    FSUB float ptr [EAX + 0x4]          ; 00444c4f
    FXCH ST4                            ; 00444c52
    FSTP float ptr [ESP + 0x28]         ; 00444c54
    FXCH ST3                            ; 00444c58
    FSTP float ptr [ESP + 0x20]         ; 00444c5a
    FXCH                                ; 00444c5e
    FSUB float ptr [EAX]                ; 00444c60
    FXCH                                ; 00444c62
    FSUB float ptr [EAX + 0x4]          ; 00444c64
    FXCH                                ; 00444c67
    FSTP float ptr [ESP + 0x2c]         ; 00444c69
    FSTP float ptr [ESP + 0x1c]         ; 00444c6d
    FSUB float ptr [EAX]                ; 00444c71
    FXCH                                ; 00444c73
    FSUB float ptr [EAX + 0x4]          ; 00444c75
    JMP 0x00444b4d                      ; 00444c78
        ;   XREF to: 00444b4d (UNCONDITIONAL_JUMP)  ; LAB_00444b4d
    JBE 0x00444be6                      ; 00444c7d
        ;   XREF to: 00444be6 (CONDITIONAL_JUMP)  ; LAB_00444be6
        ;   Label: LAB_00444c7d
    CMP EAX,0x2                         ; 00444c83
    JZ 0x00444c2f                       ; 00444c86
        ;   XREF to: 00444c2f (CONDITIONAL_JUMP)  ; LAB_00444c2f
    JMP 0x00444b57                      ; 00444c88
        ;   XREF to: 00444b57 (UNCONDITIONAL_JUMP)  ; LAB_00444b57

