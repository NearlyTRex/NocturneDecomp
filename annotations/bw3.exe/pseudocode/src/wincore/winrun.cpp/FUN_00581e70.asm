; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float wincore_winrun_cpp_FUN_00581e70(int param_1,int *param_2,float param_3,float param_4)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_00581f50 at 00582048
;
; Referenced Globals:
;   undefined4 DAT_005d7ef2
;   undefined4 DAT_02d22fa4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00581e70
        ;   Label: wincore_winrun.cpp_FUN_00581e70
    PUSH EDI                            ; 00581e71
    SUB ESP,0x10                        ; 00581e72
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00581e75
    MOV EAX,dword ptr [ESP + 0x20]      ; 00581e79
    CMP EDX,dword ptr [EAX]             ; 00581e7d
    JL 0x00581f0f                       ; 00581e7f
        ;   XREF to: 00581f0f (CONDITIONAL_JUMP)  ; LAB_00581f0f
    CMP EDX,dword ptr [EAX + 0x4]       ; 00581e85
        ;   Label: LAB_00581e85
    JLE 0x00581e8d                      ; 00581e88
        ;   XREF to: 00581e8d (CONDITIONAL_JUMP)  ; LAB_00581e8d
    MOV dword ptr [EAX + 0x4],EDX       ; 00581e8a
    FLD float ptr [ESP + 0x24]          ; 00581e8d
        ;   Label: LAB_00581e8d
    FADD float ptr [ESP + 0x28]         ; 00581e91
    FMUL double ptr [0x005d7ef2]        ; 00581e95 | DAT_005d7ef2
    MOV ESI,dword ptr [0x02d22fa4]      ; 00581e9b | DAT_02d22fa4
    FSTP float ptr [ESP]                ; 00581ea1
    TEST ESI,ESI                        ; 00581ea4
    JZ 0x00581eab                       ; 00581ea6
        ;   XREF to: 00581eab (CONDITIONAL_JUMP)  ; LAB_00581eab
    MOV dword ptr [EAX + 0x8],EDX       ; 00581ea8
    MOV EDI,dword ptr [EAX + 0x8]       ; 00581eab
        ;   Label: LAB_00581eab
    CMP EDX,EDI                         ; 00581eae
    JGE 0x00581f1b                      ; 00581eb0
        ;   XREF to: 00581f1b (CONDITIONAL_JUMP)  ; LAB_00581f1b
    MOV ECX,dword ptr [EAX]             ; 00581eb2
    CMP ECX,EDI                         ; 00581eb4
    JGE 0x00581f16                      ; 00581eb6
        ;   XREF to: 00581f16 (CONDITIONAL_JUMP)  ; LAB_00581f16
    SUB EDX,ECX                         ; 00581eb8
    MOV dword ptr [ESP + 0xc],EDX       ; 00581eba
    FILD dword ptr [ESP + 0xc]          ; 00581ebe
    FLD float ptr [ESP]                 ; 00581ec2
    MOV EDX,EDI                         ; 00581ec5
    FLD float ptr [ESP + 0x24]          ; 00581ec7
    FXCH                                ; 00581ecb
        ;   Label: LAB_00581ecb
    FSUB ST0,ST1                        ; 00581ecd
    SUB EDX,ECX                         ; 00581ecf
    FMULP ST2                           ; 00581ed1
    MOV dword ptr [ESP + 0xc],EDX       ; 00581ed3
    FILD dword ptr [ESP + 0xc]          ; 00581ed7
    FDIVP ST2,ST0                       ; 00581edb
    FADDP                               ; 00581edd
    FSTP float ptr [ESP + 0x4]          ; 00581edf
    FLD float ptr [ESP + 0x4]           ; 00581ee3
    FCOMP float ptr [ESP + 0x24]        ; 00581ee7
    FNSTSW AX                           ; 00581eeb
    SAHF                                ; 00581eed
    JC 0x00581f37                       ; 00581eee
        ;   XREF to: 00581f37 (CONDITIONAL_JUMP)  ; LAB_00581f37
    FLD float ptr [ESP + 0x4]           ; 00581ef0
    FCOMP float ptr [ESP + 0x28]        ; 00581ef4
    FNSTSW AX                           ; 00581ef8
    SAHF                                ; 00581efa
    JBE 0x00581f3d                      ; 00581efb
        ;   XREF to: 00581f3d (CONDITIONAL_JUMP)  ; LAB_00581f3d
    MOV EAX,dword ptr [ESP + 0x28]      ; 00581efd
    MOV dword ptr [ESP + 0x8],EAX       ; 00581f01
        ;   Label: LAB_00581f01
    MOV EAX,dword ptr [ESP + 0x8]       ; 00581f05
    ADD ESP,0x10                        ; 00581f09
    POP EDI                             ; 00581f0c
    POP ESI                             ; 00581f0d
    RET                                 ; 00581f0e
    MOV dword ptr [EAX],EDX             ; 00581f0f
        ;   Label: LAB_00581f0f
    JMP 0x00581e85                      ; 00581f11
        ;   XREF to: 00581e85 (UNCONDITIONAL_JUMP)  ; LAB_00581e85
    MOV EAX,dword ptr [ESP]             ; 00581f16
        ;   Label: LAB_00581f16
    JMP 0x00581f01                      ; 00581f19
        ;   XREF to: 00581f01 (UNCONDITIONAL_JUMP)  ; LAB_00581f01
    MOV ECX,dword ptr [EAX + 0x4]       ; 00581f1b
        ;   Label: LAB_00581f1b
    CMP ECX,EDI                         ; 00581f1e
    JLE 0x00581f16                      ; 00581f20
        ;   XREF to: 00581f16 (CONDITIONAL_JUMP)  ; LAB_00581f16
    SUB EDX,ECX                         ; 00581f22
    MOV dword ptr [ESP + 0xc],EDX       ; 00581f24
    FILD dword ptr [ESP + 0xc]          ; 00581f28
    FLD float ptr [ESP]                 ; 00581f2c
    MOV EDX,EDI                         ; 00581f2f
    FLD float ptr [ESP + 0x28]          ; 00581f31
    JMP 0x00581ecb                      ; 00581f35
        ;   XREF to: 00581ecb (UNCONDITIONAL_JUMP)  ; LAB_00581ecb
    MOV EAX,dword ptr [ESP + 0x24]      ; 00581f37
        ;   Label: LAB_00581f37
    JMP 0x00581f01                      ; 00581f3b
        ;   XREF to: 00581f01 (UNCONDITIONAL_JUMP)  ; LAB_00581f01
    MOV EAX,dword ptr [ESP + 0x4]       ; 00581f3d
        ;   Label: LAB_00581f3d
    MOV dword ptr [ESP + 0x8],EAX       ; 00581f41
    MOV EAX,dword ptr [ESP + 0x8]       ; 00581f45
    ADD ESP,0x10                        ; 00581f49
    POP EDI                             ; 00581f4c
    POP ESI                             ; 00581f4d
    RET                                 ; 00581f4e

