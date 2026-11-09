; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004e38f0(CGlass *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
;
; Referenced Globals:
;   undefined4 DAT_005e3fdc
;   undefined4 DAT_005e3fe4
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b4a8
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c50930
;
; Called Functions:
;   core_actor.cpp_FUN_00409680
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e38f0
        ;   Label: core_glass.cpp_CGlass_onLaserHit_FUN_004e38f0
    PUSH ESI                            ; 004e38f1
    PUSH EDI                            ; 004e38f2
    PUSH EBP                            ; 004e38f3
    SUB ESP,0x14                        ; 004e38f4
    MOV EBX,dword ptr [ESP + 0x28]      ; 004e38f7
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004e38fb
    PUSH ESI                            ; 004e38ff
    PUSH EBX                            ; 004e3900
    CALL core_actor.cpp_FUN_00409680    ; 004e3901
        ;   XREF to: 00409680 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409680()
    MOV EDX,dword ptr [EBX + 0x1e8]     ; 004e3906
    ADD ESP,0x8                         ; 004e390c
    TEST EDX,EDX                        ; 004e390f
    JZ 0x004e3a0b                       ; 004e3911
        ;   XREF to: 004e3a0b (CONDITIONAL_JUMP)  ; LAB_004e3a0b
    CMP dword ptr [EBX + 0x180],0x0     ; 004e3917
    JNZ 0x004e392f                      ; 004e391e
        ;   XREF to: 004e392f (CONDITIONAL_JUMP)  ; LAB_004e392f
    MOV dword ptr [ESI + 0x50],0x3f800000 ; 004e3920
    ADD ESP,0x14                        ; 004e3927
        ;   Label: LAB_004e3927
    POP EBP                             ; 004e392a
    POP EDI                             ; 004e392b
    POP ESI                             ; 004e392c
    POP EBX                             ; 004e392d
    RET                                 ; 004e392e
    FLD float ptr [ESI + 0x30]          ; 004e392f
        ;   Label: LAB_004e392f
    FDIV float ptr [EBX + 0x15c]        ; 004e3932
    FLD float ptr [ESI + 0x2c]          ; 004e3938
    FDIV float ptr [EBX + 0x158]        ; 004e393b
    ADD EBX,0x374                       ; 004e3941
    PUSH EBX                            ; 004e3947
    FLD1                                ; 004e3948
    FXCH                                ; 004e394a
    FADD double ptr [0x005e3fe4]        ; 004e394c | DAT_005e3fe4
    MOV EBX,dword ptr [0x00612560]      ; 004e3952 | DAT_00612560
    FSTP float ptr [ESP + 0x8]          ; 004e3958
    FSUBRP                              ; 004e395c
    PUSH EBX                            ; 004e395e | DAT_01bc120c
    FSTP float ptr [ESP + 0x10]         ; 004e395f
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e3963
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004e3968
    FILD dword ptr [0x0061b4a8]         ; 004e396b | DAT_0061b4a8
    FLD float ptr [ESP + 0x4]           ; 004e3971
    FMUL ST1                            ; 004e3975
    FLD float ptr [ESP + 0x8]           ; 004e3977
    FMULP ST2                           ; 004e397b
    CALL crt_math.c_round_FUN_005c03a0  ; 004e397d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 004e3982
    CALL crt_math.c_round_FUN_005c03a0  ; 004e3984
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 004e3989
    FISTP dword ptr [ESP + 0xc]         ; 004e398b
    MOV EDI,dword ptr [ESP + 0xc]       ; 004e398f
    FISTP dword ptr [ESP + 0x10]        ; 004e3993
    TEST EDI,EDI                        ; 004e3997
    JL 0x004e39fb                       ; 004e3999
        ;   XREF to: 004e39fb (CONDITIONAL_JUMP)  ; LAB_004e39fb
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e399b
        ;   Label: LAB_004e399b
    MOV EDX,dword ptr [0x0061b4a8]      ; 004e399f | DAT_0061b4a8
    CMP EAX,EDX                         ; 004e39a5
    JL 0x004e39b0                       ; 004e39a7
        ;   XREF to: 004e39b0 (CONDITIONAL_JUMP)  ; LAB_004e39b0
    LEA EAX,[EDX + -0x1]                ; 004e39a9
    MOV dword ptr [ESP + 0xc],EAX       ; 004e39ac
    CMP dword ptr [ESP + 0x10],0x0      ; 004e39b0
        ;   Label: LAB_004e39b0
    JL 0x004e3a03                       ; 004e39b5
        ;   XREF to: 004e3a03 (CONDITIONAL_JUMP)  ; LAB_004e3a03
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e39b7
        ;   Label: LAB_004e39b7
    MOV EDI,dword ptr [0x0061b4a8]      ; 004e39bb | DAT_0061b4a8
    CMP EAX,EDI                         ; 004e39c1
    JL 0x004e39cc                       ; 004e39c3
        ;   XREF to: 004e39cc (CONDITIONAL_JUMP)  ; LAB_004e39cc
    LEA EAX,[EDI + -0x1]                ; 004e39c5
    MOV dword ptr [ESP + 0x10],EAX      ; 004e39c8
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e39cc
        ;   Label: LAB_004e39cc
    IMUL EAX,dword ptr [0x0061b4a8]     ; 004e39d0 | DAT_0061b4a8
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e39d7
    ADD EBX,EAX                         ; 004e39db
    MOV EAX,[0x01c50930]                ; 004e39dd | DAT_01c50930
    CMP byte ptr [EBX + EAX*0x1],0x0    ; 004e39e2
    JNZ 0x004e3927                      ; 004e39e6
        ;   XREF to: 004e3927 (CONDITIONAL_JUMP)  ; LAB_004e3927
    MOV dword ptr [ESI + 0x50],0x3f800000 ; 004e39ec
    ADD ESP,0x14                        ; 004e39f3
    POP EBP                             ; 004e39f6
    POP EDI                             ; 004e39f7
    POP ESI                             ; 004e39f8
    POP EBX                             ; 004e39f9
    RET                                 ; 004e39fa
    XOR EBP,EBP                         ; 004e39fb
        ;   Label: LAB_004e39fb
    MOV dword ptr [ESP + 0xc],EBP       ; 004e39fd
    JMP 0x004e399b                      ; 004e3a01
        ;   XREF to: 004e399b (UNCONDITIONAL_JUMP)  ; LAB_004e399b
    XOR EBX,EBX                         ; 004e3a03
        ;   Label: LAB_004e3a03
    MOV dword ptr [ESP + 0x10],EBX      ; 004e3a05
    JMP 0x004e39b7                      ; 004e3a09
        ;   XREF to: 004e39b7 (UNCONDITIONAL_JUMP)  ; LAB_004e39b7
    FILD dword ptr [EBX + 0x17c]        ; 004e3a0b
        ;   Label: LAB_004e3a0b
    FMUL double ptr [0x005e3fdc]        ; 004e3a11 | DAT_005e3fdc
    FLD1                                ; 004e3a17
    FSUBRP                              ; 004e3a19
    FSTP float ptr [ESI + 0x48]         ; 004e3a1b
    ADD ESP,0x14                        ; 004e3a1e
    POP EBP                             ; 004e3a21
    POP EDI                             ; 004e3a22
    POP ESI                             ; 004e3a23
    POP EBX                             ; 004e3a24
    RET                                 ; 004e3a25

