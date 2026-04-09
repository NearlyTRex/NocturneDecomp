; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CColor3f * __cdecl core_boneguy_cpp_rgbToHsv_FUN_0041b860(CColor3f *out_hsv,CColor3f *in_rgb)
;
; Parameters:
; CColor3f *       Stack[0x4]:4   out_hsv
; CColor3f *       Stack[0x8]:4   in_rgb
; Local Variables:
; float            Stack[-0x38]:4  fStack_38
; float            Stack[-0x34]:4  fStack_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x20]:4  local_20
;
; Referenced Globals:
;   double DOUBLE_00615f45 = 255
;   double DOUBLE_00615f4d = 4
;   double DOUBLE_00615f55 = 2
;   double DOUBLE_00615f5d = 42.5
;   float FLOAT_00615f65 = 255
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b860
        ;   Label: core_boneguy.cpp_rgbToHsv_FUN_0041b860
    PUSH EBP                            ; 0041b861
    MOV EBP,ESP                         ; 0041b862
    SUB ESP,0x34                        ; 0041b864
    AND ESP,0xfffffff8                  ; 0041b867
    MOV EDX,dword ptr [EBP + 0xc]       ; 0041b86a
    MOV EAX,dword ptr [EBP + 0x10]      ; 0041b86d
    MOV ECX,dword ptr [EAX]             ; 0041b870
    MOV dword ptr [ESP + 0x28],ECX      ; 0041b872
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041b876
    MOV EAX,dword ptr [EAX + 0x8]       ; 0041b879
    MOV dword ptr [ESP + 0x2c],ECX      ; 0041b87c
    MOV dword ptr [ESP + 0x24],EAX      ; 0041b880
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041b884
    FLD float ptr [ESP + 0x2c]          ; 0041b888
    MOV dword ptr [ESP + 0x20],EAX      ; 0041b88c
    FCOMP float ptr [ESP + 0x28]        ; 0041b890
    FNSTSW AX                           ; 0041b894
    SAHF                                ; 0041b896
    JC 0x0041b9a3                       ; 0041b897
        ;   XREF to: 0041b9a3 (CONDITIONAL_JUMP)  ; LAB_0041b9a3
    FLD float ptr [ESP + 0x24]          ; 0041b89d
        ;   Label: LAB_0041b89d
    FCOMP float ptr [ESP + 0x20]        ; 0041b8a1
    FNSTSW AX                           ; 0041b8a5
    SAHF                                ; 0041b8a7
    JNC 0x0041b8b2                      ; 0041b8a8
        ;   XREF to: 0041b8b2 (CONDITIONAL_JUMP)  ; LAB_0041b8b2
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041b8aa
    MOV dword ptr [ESP + 0x20],EAX      ; 0041b8ae
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041b8b2
        ;   Label: LAB_0041b8b2
    FLD float ptr [ESP + 0x2c]          ; 0041b8b6
    MOV dword ptr [ESP + 0x10],EAX      ; 0041b8ba
    FCOMP float ptr [ESP + 0x28]        ; 0041b8be
    FNSTSW AX                           ; 0041b8c2
    SAHF                                ; 0041b8c4
    JBE 0x0041b8cf                      ; 0041b8c5
        ;   XREF to: 0041b8cf (CONDITIONAL_JUMP)  ; LAB_0041b8cf
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041b8c7
    MOV dword ptr [ESP + 0x10],EAX      ; 0041b8cb
    FLD float ptr [ESP + 0x24]          ; 0041b8cf
        ;   Label: LAB_0041b8cf
    FCOMP float ptr [ESP + 0x10]        ; 0041b8d3
    FNSTSW AX                           ; 0041b8d7
    SAHF                                ; 0041b8d9
    JBE 0x0041b8e4                      ; 0041b8da
        ;   XREF to: 0041b8e4 (CONDITIONAL_JUMP)  ; LAB_0041b8e4
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041b8dc
    MOV dword ptr [ESP + 0x10],EAX      ; 0041b8e0
    FLD float ptr [ESP + 0x10]          ; 0041b8e4
        ;   Label: LAB_0041b8e4
    FLD ST0                             ; 0041b8e8
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041b8ea
    FLDZ                                ; 0041b8ee
    FXCH ST2                            ; 0041b8f0
    FSUB float ptr [ESP + 0x20]         ; 0041b8f2
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041b8f6
    FSTP float ptr [ESP + 0x30]         ; 0041b8fa
    FXCH                                ; 0041b8fe
    FCOMPP                              ; 0041b900
    FNSTSW AX                           ; 0041b902
    SAHF                                ; 0041b904
    JNC 0x0041b9ac                      ; 0041b905
        ;   XREF to: 0041b9ac (CONDITIONAL_JUMP)  ; LAB_0041b9ac
    FLD float ptr [ESP + 0x30]          ; 0041b90b
    FDIV float ptr [ESP + 0x10]         ; 0041b90f
    FSTP float ptr [ESP + 0x8]          ; 0041b913
    FLD float ptr [ESP + 0x8]           ; 0041b917
        ;   Label: LAB_0041b917
    FLDZ                                ; 0041b91b
    FXCH                                ; 0041b91d
    FSTP double ptr [ESP]               ; 0041b91f
    FCOMP double ptr [ESP]              ; 0041b922
    FNSTSW AX                           ; 0041b925
    SAHF                                ; 0041b927
    JNC 0x0041b9e9                      ; 0041b928
        ;   XREF to: 0041b9e9 (CONDITIONAL_JUMP)  ; LAB_0041b9e9
    FLD double ptr [ESP]                ; 0041b92e
    FMUL double ptr [0x00615f45]        ; 0041b931 | DOUBLE_00615f45
    FLD float ptr [ESP + 0x28]          ; 0041b937
    FXCH                                ; 0041b93b
    FSTP float ptr [ESP + 0x8]          ; 0041b93d
    FCOMP float ptr [ESP + 0x10]        ; 0041b941
    FNSTSW AX                           ; 0041b945
    SAHF                                ; 0041b947
    JZ 0x0041b9b7                       ; 0041b948
        ;   XREF to: 0041b9b7 (CONDITIONAL_JUMP)  ; LAB_0041b9b7
    FLD float ptr [ESP + 0x2c]          ; 0041b94a
    FCOMP float ptr [ESP + 0x10]        ; 0041b94e
    FNSTSW AX                           ; 0041b952
    SAHF                                ; 0041b954
    JZ 0x0041b9c5                       ; 0041b955
        ;   XREF to: 0041b9c5 (CONDITIONAL_JUMP)  ; LAB_0041b9c5
    FLD float ptr [ESP + 0x28]          ; 0041b957
    FSUB float ptr [ESP + 0x2c]         ; 0041b95b
    FDIV float ptr [ESP + 0x30]         ; 0041b95f
    FADD double ptr [0x00615f4d]        ; 0041b963 | DOUBLE_00615f4d
    FSTP float ptr [ESP + 0xc]          ; 0041b969
        ;   Label: LAB_0041b969
    FLD float ptr [ESP + 0xc]           ; 0041b96d
    FLD ST0                             ; 0041b971
    FMUL double ptr [0x00615f5d]        ; 0041b973 | DOUBLE_00615f5d
    FSTP ST1                            ; 0041b979
    FST float ptr [ESP + 0xc]           ; 0041b97b
    FLDZ                                ; 0041b97f
    FCOMPP                              ; 0041b981
    FNSTSW AX                           ; 0041b983
    SAHF                                ; 0041b985
    JA 0x0041b9d9                       ; 0041b986
        ;   XREF to: 0041b9d9 (CONDITIONAL_JUMP)  ; LAB_0041b9d9
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041b988
        ;   Label: LAB_0041b988
    MOV dword ptr [EDX],EAX             ; 0041b98c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041b98e
    MOV dword ptr [EDX + 0x4],EAX       ; 0041b992
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0041b995
    MOV dword ptr [EDX + 0x8],EAX       ; 0041b999
    MOV EAX,EDX                         ; 0041b99c
    MOV ESP,EBP                         ; 0041b99e
    POP EBP                             ; 0041b9a0
    POP EBX                             ; 0041b9a1
    RET                                 ; 0041b9a2
    MOV dword ptr [ESP + 0x20],ECX      ; 0041b9a3
        ;   Label: LAB_0041b9a3
    JMP 0x0041b89d                      ; 0041b9a7
        ;   XREF to: 0041b89d (UNCONDITIONAL_JUMP)  ; LAB_0041b89d
    XOR ECX,ECX                         ; 0041b9ac
        ;   Label: LAB_0041b9ac
    MOV dword ptr [ESP + 0x8],ECX       ; 0041b9ae
    JMP 0x0041b917                      ; 0041b9b2
        ;   XREF to: 0041b917 (UNCONDITIONAL_JUMP)  ; LAB_0041b917
    FLD float ptr [ESP + 0x2c]          ; 0041b9b7
        ;   Label: LAB_0041b9b7
    FSUB float ptr [ESP + 0x24]         ; 0041b9bb
    FDIV float ptr [ESP + 0x30]         ; 0041b9bf
    JMP 0x0041b969                      ; 0041b9c3
        ;   XREF to: 0041b969 (UNCONDITIONAL_JUMP)  ; LAB_0041b969
    FLD float ptr [ESP + 0x24]          ; 0041b9c5
        ;   Label: LAB_0041b9c5
    FSUB float ptr [ESP + 0x28]         ; 0041b9c9
    FDIV float ptr [ESP + 0x30]         ; 0041b9cd
    FSUBR double ptr [0x00615f55]       ; 0041b9d1 | DOUBLE_00615f55
    JMP 0x0041b969                      ; 0041b9d7
        ;   XREF to: 0041b969 (UNCONDITIONAL_JUMP)  ; LAB_0041b969
    FLD float ptr [ESP + 0xc]           ; 0041b9d9
        ;   Label: LAB_0041b9d9
    FADD float ptr [0x00615f65]         ; 0041b9dd | FLOAT_00615f65
    FSTP float ptr [ESP + 0xc]          ; 0041b9e3
    JMP 0x0041b988                      ; 0041b9e7
        ;   XREF to: 0041b988 (UNCONDITIONAL_JUMP)  ; LAB_0041b988
    XOR EBX,EBX                         ; 0041b9e9
        ;   Label: LAB_0041b9e9
    MOV dword ptr [ESP + 0xc],EBX       ; 0041b9eb
    JMP 0x0041b988                      ; 0041b9ef
        ;   XREF to: 0041b988 (UNCONDITIONAL_JUMP)  ; LAB_0041b988

