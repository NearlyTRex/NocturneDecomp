; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtri_cpp_clipLineToPlane_FUN_0046d4e0(float *param_1,float *param_2,float *param_3,int param_4,uint param_5,int param_6,uint param_7,int param_8,uint param_9,double param_10)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
;
; XREF[7]:
;   core_dtri.cpp_FUN_0046d680 at 0046d75c
;   core_dtri.cpp_FUN_0046d7e0 at 0046d8c2
;   core_dtri.cpp_FUN_0046d950 at 0046da2a
;   core_dtri.cpp_FUN_0046dab0 at 0046db90
;   core_dtri.cpp_FUN_0046dc10 at 0046dcf2
;   core_dtri.cpp_FUN_0046dd80 at 0046de62
;   core_dtri.cpp_clipTriangleToBounds_FUN_0046df40 at 0046e553
;
; Referenced Globals:
;   TerminatedCString s_core_dtri_cpp_0057e48e
;   TerminatedCString s_Bad_clip_0057e49f
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d4e0
        ;   Label: core_dtri.cpp_clipLineToPlane_FUN_0046d4e0
    PUSH ESI                            ; 0046d4e1
    PUSH EDI                            ; 0046d4e2
    PUSH EBP                            ; 0046d4e3
    MOV EBP,ESP                         ; 0046d4e4
    SUB ESP,0x18                        ; 0046d4e6
    AND ESP,0xfffffff8                  ; 0046d4e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0046d4ec
    MOV EDI,dword ptr [EBP + 0x18]      ; 0046d4ef
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0046d4f2
    FLD float ptr [EDI + 0x4]           ; 0046d4f5
    FSUB float ptr [EBX + 0x4]          ; 0046d4f8
    FMUL double ptr [EBP + 0x28]        ; 0046d4fb
    FLD float ptr [EDI]                 ; 0046d4fe
    FSUB float ptr [EBX]                ; 0046d500
    FMUL double ptr [EBP + 0x20]        ; 0046d502
    FADDP                               ; 0046d505
    FLD float ptr [EDI + 0x8]           ; 0046d507
    FSUB float ptr [EBX + 0x8]          ; 0046d50a
    FMUL double ptr [EBP + 0x30]        ; 0046d50d
    FADDP                               ; 0046d510
    FSTP double ptr [ESP]               ; 0046d512
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046d515
    MOV ECX,dword ptr [ESP]             ; 0046d519
    TEST EDX,0x7fffffff                 ; 0046d51c
    JNZ 0x0046d52c                      ; 0046d522
        ;   XREF to: 0046d52c (CONDITIONAL_JUMP)  ; LAB_0046d52c
    TEST ECX,ECX                        ; 0046d524
    JZ 0x0046d636                       ; 0046d526
        ;   XREF to: 0046d636 (CONDITIONAL_JUMP)  ; LAB_0046d636
    FLD float ptr [EBX]                 ; 0046d52c
        ;   Label: LAB_0046d52c
    FLD double ptr [EBP + 0x20]         ; 0046d52e
    FMUL ST1                            ; 0046d531
    FADD double ptr [EBP + 0x38]        ; 0046d533
    FLD float ptr [EBX + 0x4]           ; 0046d536
    FMUL double ptr [EBP + 0x28]        ; 0046d539
    FADDP                               ; 0046d53c
    FLD float ptr [EBX + 0x8]           ; 0046d53e
    FMUL double ptr [EBP + 0x30]        ; 0046d541
    FADDP                               ; 0046d544
    FLD ST0                             ; 0046d546
    FCHS                                ; 0046d548
    FDIV double ptr [ESP]               ; 0046d54a
    FLD float ptr [EDI]                 ; 0046d54d
    FSUB float ptr [EBX]                ; 0046d54f
    FXCH                                ; 0046d551
    FSTP ST2                            ; 0046d553
    FMUL ST1                            ; 0046d555
    FADDP ST2,ST0                       ; 0046d557
    FXCH                                ; 0046d559
    FSTP float ptr [ESI]                ; 0046d55b
    FLD float ptr [EDI + 0x4]           ; 0046d55d
    FSUB float ptr [EBX + 0x4]          ; 0046d560
    FMUL ST1                            ; 0046d563
    FADD float ptr [EBX + 0x4]          ; 0046d565
    FSTP float ptr [ESI + 0x4]          ; 0046d568
    FLD float ptr [EDI + 0x8]           ; 0046d56b
    FSUB float ptr [EBX + 0x8]          ; 0046d56e
    FMULP                               ; 0046d571
    MOV ECX,dword ptr [EBP + 0x24]      ; 0046d573
    FADD float ptr [EBX + 0x8]          ; 0046d576
    MOV EBX,dword ptr [EBP + 0x20]      ; 0046d579
    FSTP float ptr [ESI + 0x8]          ; 0046d57c
    TEST ECX,0x7fffffff                 ; 0046d57f
    JNZ 0x0046d58b                      ; 0046d585
        ;   XREF to: 0046d58b (CONDITIONAL_JUMP)  ; LAB_0046d58b
    TEST EBX,EBX                        ; 0046d587
    JZ 0x0046d5b9                       ; 0046d589
        ;   XREF to: 0046d5b9 (CONDITIONAL_JUMP)  ; LAB_0046d5b9
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0046d58b
        ;   Label: LAB_0046d58b
    MOV EAX,dword ptr [EBP + 0x28]      ; 0046d58e
    TEST EDI,0x7fffffff                 ; 0046d591
    JNZ 0x0046d5b9                      ; 0046d597
        ;   XREF to: 0046d5b9 (CONDITIONAL_JUMP)  ; LAB_0046d5b9
    TEST EAX,EAX                        ; 0046d599
    JNZ 0x0046d5b9                      ; 0046d59b
        ;   XREF to: 0046d5b9 (CONDITIONAL_JUMP)  ; LAB_0046d5b9
    MOV EDX,dword ptr [EBP + 0x34]      ; 0046d59d
    MOV ECX,dword ptr [EBP + 0x30]      ; 0046d5a0
    TEST EDX,0x7fffffff                 ; 0046d5a3
    JNZ 0x0046d5b9                      ; 0046d5a9
        ;   XREF to: 0046d5b9 (CONDITIONAL_JUMP)  ; LAB_0046d5b9
    TEST ECX,ECX                        ; 0046d5ab
    JNZ 0x0046d5b9                      ; 0046d5ad
        ;   XREF to: 0046d5b9 (CONDITIONAL_JUMP)  ; LAB_0046d5b9
    FLD double ptr [EBP + 0x20]         ; 0046d5af
    FCHS                                ; 0046d5b2
    FMUL double ptr [EBP + 0x38]        ; 0046d5b4
    FSTP float ptr [ESI]                ; 0046d5b7
    MOV EBX,dword ptr [EBP + 0x24]      ; 0046d5b9
        ;   Label: LAB_0046d5b9
    MOV EDI,dword ptr [EBP + 0x20]      ; 0046d5bc
    TEST EBX,0x7fffffff                 ; 0046d5bf
    JNZ 0x0046d5f9                      ; 0046d5c5
        ;   XREF to: 0046d5f9 (CONDITIONAL_JUMP)  ; LAB_0046d5f9
    TEST EDI,EDI                        ; 0046d5c7
    JNZ 0x0046d5f9                      ; 0046d5c9
        ;   XREF to: 0046d5f9 (CONDITIONAL_JUMP)  ; LAB_0046d5f9
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0046d5cb
    MOV EDX,dword ptr [EBP + 0x28]      ; 0046d5ce
    TEST EAX,0x7fffffff                 ; 0046d5d1
    JNZ 0x0046d5dc                      ; 0046d5d6
        ;   XREF to: 0046d5dc (CONDITIONAL_JUMP)  ; LAB_0046d5dc
    TEST EDX,EDX                        ; 0046d5d8
    JZ 0x0046d5f9                       ; 0046d5da
        ;   XREF to: 0046d5f9 (CONDITIONAL_JUMP)  ; LAB_0046d5f9
    MOV ECX,dword ptr [EBP + 0x34]      ; 0046d5dc
        ;   Label: LAB_0046d5dc
    MOV EBX,dword ptr [EBP + 0x30]      ; 0046d5df
    TEST ECX,0x7fffffff                 ; 0046d5e2
    JNZ 0x0046d5f9                      ; 0046d5e8
        ;   XREF to: 0046d5f9 (CONDITIONAL_JUMP)  ; LAB_0046d5f9
    TEST EBX,EBX                        ; 0046d5ea
    JNZ 0x0046d5f9                      ; 0046d5ec
        ;   XREF to: 0046d5f9 (CONDITIONAL_JUMP)  ; LAB_0046d5f9
    FLD double ptr [EBP + 0x28]         ; 0046d5ee
    FCHS                                ; 0046d5f1
    FMUL double ptr [EBP + 0x38]        ; 0046d5f3
    FSTP float ptr [ESI + 0x4]          ; 0046d5f6
    MOV EDI,dword ptr [EBP + 0x24]      ; 0046d5f9
        ;   Label: LAB_0046d5f9
    MOV EAX,dword ptr [EBP + 0x20]      ; 0046d5fc
    TEST EDI,0x7fffffff                 ; 0046d5ff
    JNZ 0x0046d62f                      ; 0046d605
        ;   XREF to: 0046d62f (CONDITIONAL_JUMP)  ; LAB_0046d62f
    TEST EAX,EAX                        ; 0046d607
    JNZ 0x0046d62f                      ; 0046d609
        ;   XREF to: 0046d62f (CONDITIONAL_JUMP)  ; LAB_0046d62f
    MOV EDX,dword ptr [EBP + 0x2c]      ; 0046d60b
    MOV ECX,dword ptr [EBP + 0x28]      ; 0046d60e
    TEST EDX,0x7fffffff                 ; 0046d611
    JNZ 0x0046d62f                      ; 0046d617
        ;   XREF to: 0046d62f (CONDITIONAL_JUMP)  ; LAB_0046d62f
    TEST ECX,ECX                        ; 0046d619
    JNZ 0x0046d62f                      ; 0046d61b
        ;   XREF to: 0046d62f (CONDITIONAL_JUMP)  ; LAB_0046d62f
    MOV EBX,dword ptr [EBP + 0x34]      ; 0046d61d
    MOV EDI,dword ptr [EBP + 0x30]      ; 0046d620
    TEST EBX,0x7fffffff                 ; 0046d623
    JNZ 0x0046d65d                      ; 0046d629
        ;   XREF to: 0046d65d (CONDITIONAL_JUMP)  ; LAB_0046d65d
    TEST EDI,EDI                        ; 0046d62b
    JNZ 0x0046d65d                      ; 0046d62d
        ;   XREF to: 0046d65d (CONDITIONAL_JUMP)  ; LAB_0046d65d
    MOV ESP,EBP                         ; 0046d62f
        ;   Label: LAB_0046d62f
    POP EBP                             ; 0046d631
    POP EDI                             ; 0046d632
    POP ESI                             ; 0046d633
    POP EBX                             ; 0046d634
    RET                                 ; 0046d635
    MOV EAX,0x57e48e                    ; 0046d636 | = "..\\core\\dtri.cpp"
        ;   Label: LAB_0046d636
    MOV EDX,0x457                       ; 0046d63b
    PUSH 0x57e49f                       ; 0046d640 | = "Bad clip!"
    MOV [0x01cc4800],EAX                ; 0046d645 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0046d64a | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0046d650
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0046d655
    JMP 0x0046d52c                      ; 0046d658
        ;   XREF to: 0046d52c (UNCONDITIONAL_JUMP)  ; LAB_0046d52c
    FLD double ptr [EBP + 0x30]         ; 0046d65d
        ;   Label: LAB_0046d65d
    FCHS                                ; 0046d660
    FMUL double ptr [EBP + 0x38]        ; 0046d662
    FSTP float ptr [ESI + 0x8]          ; 0046d665
    MOV ESP,EBP                         ; 0046d668
    POP EBP                             ; 0046d66a
    POP EDI                             ; 0046d66b
    POP ESI                             ; 0046d66c
    POP EBX                             ; 0046d66d
    RET                                 ; 0046d66e

