; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_clipLineToPlane_FUN_00490df0(float *param_1,float *param_2,float *param_3,int param_4,uint param_5,int param_6,uint param_7,int param_8,uint param_9,double param_10)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
;
; XREF[3]:
;   core_dtri.cpp_FUN_00491260 at 0049133a
;   core_dtri.cpp_FUN_00491690 at 00491772
;   core_dtri.cpp_clipTriangleToBounds_FUN_00491850 at 00491e63
;
; Referenced Globals:
;   TerminatedCString s_core_dtri_cpp_005dbbfc
;   TerminatedCString s_Bad_clip_005dbc0d
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490df0
        ;   Label: core_dtri.cpp_clipLineToPlane_FUN_00490df0
    PUSH ESI                            ; 00490df1
    PUSH EDI                            ; 00490df2
    PUSH EBP                            ; 00490df3
    MOV EBP,ESP                         ; 00490df4
    SUB ESP,0x18                        ; 00490df6
    AND ESP,0xfffffff8                  ; 00490df9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00490dfc
    MOV EDI,dword ptr [EBP + 0x18]      ; 00490dff
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00490e02
    FLD float ptr [EDI + 0x4]           ; 00490e05
    FSUB float ptr [EBX + 0x4]          ; 00490e08
    FMUL double ptr [EBP + 0x28]        ; 00490e0b
    FLD float ptr [EDI]                 ; 00490e0e
    FSUB float ptr [EBX]                ; 00490e10
    FMUL double ptr [EBP + 0x20]        ; 00490e12
    FADDP                               ; 00490e15
    FLD float ptr [EDI + 0x8]           ; 00490e17
    FSUB float ptr [EBX + 0x8]          ; 00490e1a
    FMUL double ptr [EBP + 0x30]        ; 00490e1d
    FADDP                               ; 00490e20
    FSTP double ptr [ESP]               ; 00490e22
    MOV EDX,dword ptr [ESP + 0x4]       ; 00490e25
    MOV ECX,dword ptr [ESP]             ; 00490e29
    TEST EDX,0x7fffffff                 ; 00490e2c
    JNZ 0x00490e3c                      ; 00490e32
        ;   XREF to: 00490e3c (CONDITIONAL_JUMP)  ; LAB_00490e3c
    TEST ECX,ECX                        ; 00490e34
    JZ 0x00490f46                       ; 00490e36
        ;   XREF to: 00490f46 (CONDITIONAL_JUMP)  ; LAB_00490f46
    FLD float ptr [EBX]                 ; 00490e3c
        ;   Label: LAB_00490e3c
    FLD double ptr [EBP + 0x20]         ; 00490e3e
    FMUL ST1                            ; 00490e41
    FADD double ptr [EBP + 0x38]        ; 00490e43
    FLD float ptr [EBX + 0x4]           ; 00490e46
    FMUL double ptr [EBP + 0x28]        ; 00490e49
    FADDP                               ; 00490e4c
    FLD float ptr [EBX + 0x8]           ; 00490e4e
    FMUL double ptr [EBP + 0x30]        ; 00490e51
    FADDP                               ; 00490e54
    FLD ST0                             ; 00490e56
    FCHS                                ; 00490e58
    FDIV double ptr [ESP]               ; 00490e5a
    FLD float ptr [EDI]                 ; 00490e5d
    FSUB float ptr [EBX]                ; 00490e5f
    FXCH                                ; 00490e61
    FSTP ST2                            ; 00490e63
    FMUL ST1                            ; 00490e65
    FADDP ST2,ST0                       ; 00490e67
    FXCH                                ; 00490e69
    FSTP float ptr [ESI]                ; 00490e6b
    FLD float ptr [EDI + 0x4]           ; 00490e6d
    FSUB float ptr [EBX + 0x4]          ; 00490e70
    FMUL ST1                            ; 00490e73
    FADD float ptr [EBX + 0x4]          ; 00490e75
    FSTP float ptr [ESI + 0x4]          ; 00490e78
    FLD float ptr [EDI + 0x8]           ; 00490e7b
    FSUB float ptr [EBX + 0x8]          ; 00490e7e
    FMULP                               ; 00490e81
    MOV ECX,dword ptr [EBP + 0x24]      ; 00490e83
    FADD float ptr [EBX + 0x8]          ; 00490e86
    MOV EBX,dword ptr [EBP + 0x20]      ; 00490e89
    FSTP float ptr [ESI + 0x8]          ; 00490e8c
    TEST ECX,0x7fffffff                 ; 00490e8f
    JNZ 0x00490e9b                      ; 00490e95
        ;   XREF to: 00490e9b (CONDITIONAL_JUMP)  ; LAB_00490e9b
    TEST EBX,EBX                        ; 00490e97
    JZ 0x00490ec9                       ; 00490e99
        ;   XREF to: 00490ec9 (CONDITIONAL_JUMP)  ; LAB_00490ec9
    MOV EDI,dword ptr [EBP + 0x2c]      ; 00490e9b
        ;   Label: LAB_00490e9b
    MOV EAX,dword ptr [EBP + 0x28]      ; 00490e9e
    TEST EDI,0x7fffffff                 ; 00490ea1
    JNZ 0x00490ec9                      ; 00490ea7
        ;   XREF to: 00490ec9 (CONDITIONAL_JUMP)  ; LAB_00490ec9
    TEST EAX,EAX                        ; 00490ea9
    JNZ 0x00490ec9                      ; 00490eab
        ;   XREF to: 00490ec9 (CONDITIONAL_JUMP)  ; LAB_00490ec9
    MOV EDX,dword ptr [EBP + 0x34]      ; 00490ead
    MOV ECX,dword ptr [EBP + 0x30]      ; 00490eb0
    TEST EDX,0x7fffffff                 ; 00490eb3
    JNZ 0x00490ec9                      ; 00490eb9
        ;   XREF to: 00490ec9 (CONDITIONAL_JUMP)  ; LAB_00490ec9
    TEST ECX,ECX                        ; 00490ebb
    JNZ 0x00490ec9                      ; 00490ebd
        ;   XREF to: 00490ec9 (CONDITIONAL_JUMP)  ; LAB_00490ec9
    FLD double ptr [EBP + 0x20]         ; 00490ebf
    FCHS                                ; 00490ec2
    FMUL double ptr [EBP + 0x38]        ; 00490ec4
    FSTP float ptr [ESI]                ; 00490ec7
    MOV EBX,dword ptr [EBP + 0x24]      ; 00490ec9
        ;   Label: LAB_00490ec9
    MOV EDI,dword ptr [EBP + 0x20]      ; 00490ecc
    TEST EBX,0x7fffffff                 ; 00490ecf
    JNZ 0x00490f09                      ; 00490ed5
        ;   XREF to: 00490f09 (CONDITIONAL_JUMP)  ; LAB_00490f09
    TEST EDI,EDI                        ; 00490ed7
    JNZ 0x00490f09                      ; 00490ed9
        ;   XREF to: 00490f09 (CONDITIONAL_JUMP)  ; LAB_00490f09
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00490edb
    MOV EDX,dword ptr [EBP + 0x28]      ; 00490ede
    TEST EAX,0x7fffffff                 ; 00490ee1
    JNZ 0x00490eec                      ; 00490ee6
        ;   XREF to: 00490eec (CONDITIONAL_JUMP)  ; LAB_00490eec
    TEST EDX,EDX                        ; 00490ee8
    JZ 0x00490f09                       ; 00490eea
        ;   XREF to: 00490f09 (CONDITIONAL_JUMP)  ; LAB_00490f09
    MOV ECX,dword ptr [EBP + 0x34]      ; 00490eec
        ;   Label: LAB_00490eec
    MOV EBX,dword ptr [EBP + 0x30]      ; 00490eef
    TEST ECX,0x7fffffff                 ; 00490ef2
    JNZ 0x00490f09                      ; 00490ef8
        ;   XREF to: 00490f09 (CONDITIONAL_JUMP)  ; LAB_00490f09
    TEST EBX,EBX                        ; 00490efa
    JNZ 0x00490f09                      ; 00490efc
        ;   XREF to: 00490f09 (CONDITIONAL_JUMP)  ; LAB_00490f09
    FLD double ptr [EBP + 0x28]         ; 00490efe
    FCHS                                ; 00490f01
    FMUL double ptr [EBP + 0x38]        ; 00490f03
    FSTP float ptr [ESI + 0x4]          ; 00490f06
    MOV EDI,dword ptr [EBP + 0x24]      ; 00490f09
        ;   Label: LAB_00490f09
    MOV EAX,dword ptr [EBP + 0x20]      ; 00490f0c
    TEST EDI,0x7fffffff                 ; 00490f0f
    JNZ 0x00490f3f                      ; 00490f15
        ;   XREF to: 00490f3f (CONDITIONAL_JUMP)  ; LAB_00490f3f
    TEST EAX,EAX                        ; 00490f17
    JNZ 0x00490f3f                      ; 00490f19
        ;   XREF to: 00490f3f (CONDITIONAL_JUMP)  ; LAB_00490f3f
    MOV EDX,dword ptr [EBP + 0x2c]      ; 00490f1b
    MOV ECX,dword ptr [EBP + 0x28]      ; 00490f1e
    TEST EDX,0x7fffffff                 ; 00490f21
    JNZ 0x00490f3f                      ; 00490f27
        ;   XREF to: 00490f3f (CONDITIONAL_JUMP)  ; LAB_00490f3f
    TEST ECX,ECX                        ; 00490f29
    JNZ 0x00490f3f                      ; 00490f2b
        ;   XREF to: 00490f3f (CONDITIONAL_JUMP)  ; LAB_00490f3f
    MOV EBX,dword ptr [EBP + 0x34]      ; 00490f2d
    MOV EDI,dword ptr [EBP + 0x30]      ; 00490f30
    TEST EBX,0x7fffffff                 ; 00490f33
    JNZ 0x00490f6d                      ; 00490f39
        ;   XREF to: 00490f6d (CONDITIONAL_JUMP)  ; LAB_00490f6d
    TEST EDI,EDI                        ; 00490f3b
    JNZ 0x00490f6d                      ; 00490f3d
        ;   XREF to: 00490f6d (CONDITIONAL_JUMP)  ; LAB_00490f6d
    MOV ESP,EBP                         ; 00490f3f
        ;   Label: LAB_00490f3f
    POP EBP                             ; 00490f41
    POP EDI                             ; 00490f42
    POP ESI                             ; 00490f43
    POP EBX                             ; 00490f44
    RET                                 ; 00490f45
    MOV EAX,0x5dbbfc                    ; 00490f46 | = "..\\core\\dtri.cpp"
        ;   Label: LAB_00490f46
    MOV EDX,0x457                       ; 00490f4b
    PUSH 0x5dbc0d                       ; 00490f50 | = "Bad clip!"
    MOV [0x01d1d400],EAX                ; 00490f55 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00490f5a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00490f60
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00490f65
    JMP 0x00490e3c                      ; 00490f68
        ;   XREF to: 00490e3c (UNCONDITIONAL_JUMP)  ; LAB_00490e3c
    FLD double ptr [EBP + 0x30]         ; 00490f6d
        ;   Label: LAB_00490f6d
    FCHS                                ; 00490f70
    FMUL double ptr [EBP + 0x38]        ; 00490f72
    FSTP float ptr [ESI + 0x8]          ; 00490f75
    MOV ESP,EBP                         ; 00490f78
    POP EBP                             ; 00490f7a
    POP EDI                             ; 00490f7b
    POP ESI                             ; 00490f7c
    POP EBX                             ; 00490f7d
    RET                                 ; 00490f7e

