; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setutil_cpp_FUN_0055d71c(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f14a1
;   undefined4 DAT_005f14a9
;   undefined4 DAT_005f14ad
;   undefined4 DAT_005f14b1
;   undefined4 DAT_005f14b9
;   undefined4 DAT_005f14c1
;   undefined4 DAT_005f14c9
;   undefined4 DAT_00605158
;   undefined4 DAT_00612560
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0055d71c
        ;   Label: core_setutil.cpp_FUN_0055d71c
    PUSH EBP                            ; 0055d720
    SUB ESP,0x74                        ; 0055d721
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0055d724
    TEST dword ptr [EBP + 0x11d4],0x7fffffff ; 0055d728
    JNZ 0x0055d739                      ; 0055d732
        ;   XREF to: 0055d739 (CONDITIONAL_JUMP)  ; LAB_0055d739
    ADD ESP,0x74                        ; 0055d734
    POP EBP                             ; 0055d737
    RET                                 ; 0055d738
    PUSH EDI                            ; 0055d739
        ;   Label: LAB_0055d739
    PUSH ESI                            ; 0055d73a
    PUSH EBX                            ; 0055d73b
    LEA EAX,[EBP + 0x104]               ; 0055d73c
    PUSH EAX                            ; 0055d742
    MOV ECX,dword ptr [0x00612560]      ; 0055d743 | DAT_00612560
    PUSH ECX                            ; 0055d749
    XOR EBX,EBX                         ; 0055d74a
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 0055d74c
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0055d751
    MOV dword ptr [ESP + 0x78],EBX      ; 0055d754
    MOV dword ptr [ESP + 0x6c],EBX      ; 0055d758
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0055d75c
        ;   Label: LAB_0055d75c
    MOV EDI,0xfffffffc                  ; 0055d760
    SUB ESI,0xc0                        ; 0055d765
    MOV EAX,dword ptr [ESP + 0x78]      ; 0055d76b
        ;   Label: LAB_0055d76b
    MOV dword ptr [ESP + 0x7c],EAX      ; 0055d76f
    FILD dword ptr [ESP + 0x7c]         ; 0055d773
    FMUL float ptr [0x005f14a9]         ; 0055d777 | DAT_005f14a9
    FMUL float ptr [0x005f14ad]         ; 0055d77d | DAT_005f14ad
    FMUL double ptr [0x005f14b1]        ; 0055d783 | DAT_005f14b1
    FLD ST0                             ; 0055d789
    FSIN                                ; 0055d78b
    FXCH                                ; 0055d78d
    FCOS                                ; 0055d78f
    MOV dword ptr [ESP + 0x7c],EDI      ; 0055d791
    FILD dword ptr [ESP + 0x7c]         ; 0055d795
    FMUL float ptr [0x005f14b9]         ; 0055d799 | DAT_005f14b9
    FLD float ptr [EBP + 0x11d4]        ; 0055d79f
    FMUL double ptr [0x005f14a1]        ; 0055d7a5 | DAT_005f14a1
    FXCH                                ; 0055d7ab
    FMUL float ptr [0x005f14ad]         ; 0055d7ad | DAT_005f14ad
    FXCH ST3                            ; 0055d7b3
    FMUL ST1                            ; 0055d7b5
    FXCH ST3                            ; 0055d7b7
    FMUL double ptr [0x005f14c1]        ; 0055d7b9 | DAT_005f14c1
    FLD ST0                             ; 0055d7bf
    FCOS                                ; 0055d7c1
    FXCH                                ; 0055d7c3
    FSIN                                ; 0055d7c5
    FXCH ST3                            ; 0055d7c7
    FMUL ST2                            ; 0055d7c9
    FMUL ST1                            ; 0055d7cb
    FXCH ST4                            ; 0055d7cd
    FMULP                               ; 0055d7cf
    FXCH ST2                            ; 0055d7d1
    FMULP                               ; 0055d7d3
    LEA EBX,[ESP + 0x34]                ; 0055d7d5
    MOV EDX,dword ptr [0x00612560]      ; 0055d7d9 | DAT_00612560
    FXCH ST2                            ; 0055d7df
    FSTP float ptr [ESP + 0x48]         ; 0055d7e1
    LEA EAX,[ESP + 0x40]                ; 0055d7e5
    FSTP float ptr [ESP + 0x40]         ; 0055d7e9
    FSTP float ptr [ESP + 0x44]         ; 0055d7ed
    FLD float ptr [EAX]                 ; 0055d7f1
    FMUL float ptr [0x00605158]         ; 0055d7f3 | DAT_00605158
    FISTP dword ptr [EBX]               ; 0055d7f9
    FLD float ptr [EAX + 0x4]           ; 0055d7fb
    FMUL float ptr [0x00605158]         ; 0055d7fe | DAT_00605158
    FISTP dword ptr [EBX + 0x4]         ; 0055d804
    FLD float ptr [EAX + 0x8]           ; 0055d807
    FMUL float ptr [0x00605158]         ; 0055d80a | DAT_00605158
    FISTP dword ptr [EBX + 0x8]         ; 0055d810
    LEA EAX,[ESP + 0x34]                ; 0055d813
    PUSH EAX                            ; 0055d817
    MOV EAX,dword ptr [EDX]             ; 0055d818
    ADD EAX,ESI                         ; 0055d81a
    PUSH EAX                            ; 0055d81c
    CALL engine_special.cpp_FUN_00580173 ; 0055d81d
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x00612560]      ; 0055d822 | DAT_00612560
    MOV EAX,dword ptr [EDX]             ; 0055d828
    MOV dword ptr [ESI + EAX*0x1 + 0x18],0x800000 ; 0055d82a
    MOV EAX,dword ptr [EDX]             ; 0055d832
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x800000 ; 0055d834
    FLD float ptr [EBP + 0x11c4]        ; 0055d83c
    FMUL float ptr [0x005f14c9]         ; 0055d842 | DAT_005f14c9
    ADD ESP,0x8                         ; 0055d848
    MOV EBX,dword ptr [EDX]             ; 0055d84b
    CALL crt_math.c_round_FUN_005c03a0  ; 0055d84d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x7c]        ; 0055d852
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0055d856
    MOV dword ptr [ESI + EBX*0x1 + 0x20],EAX ; 0055d85a
    FLD float ptr [EBP + 0x11c8]        ; 0055d85e
    MOV EAX,dword ptr [EDX]             ; 0055d864
    FMUL float ptr [0x005f14c9]         ; 0055d866 | DAT_005f14c9
    LEA EBX,[EAX + ESI*0x1]             ; 0055d86c
    CALL crt_math.c_round_FUN_005c03a0  ; 0055d86f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x7c]        ; 0055d874
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0055d878
    MOV dword ptr [EBX + 0x24],EAX      ; 0055d87c
    FLD float ptr [EBP + 0x11cc]        ; 0055d87f
    FMUL float ptr [0x005f14c9]         ; 0055d885 | DAT_005f14c9
    ADD ESI,0x30                        ; 0055d88b
    MOV EBX,dword ptr [EDX]             ; 0055d88e
    CALL crt_math.c_round_FUN_005c03a0  ; 0055d890
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x7c]        ; 0055d895
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0055d899
    INC EDI                             ; 0055d89d
    MOV dword ptr [ESI + EBX*0x1 + -0x8],EAX ; 0055d89e
    CMP EDI,0x4                         ; 0055d8a2
    JLE 0x0055d76b                      ; 0055d8a5
        ;   XREF to: 0055d76b (CONDITIONAL_JUMP)  ; LAB_0055d76b
    MOV EAX,dword ptr [ESP + 0x78]      ; 0055d8ab
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0055d8af
    INC EAX                             ; 0055d8b3
    ADD EDI,0x1e0                       ; 0055d8b4
    MOV dword ptr [ESP + 0x78],EAX      ; 0055d8ba
    MOV dword ptr [ESP + 0x6c],EDI      ; 0055d8be
    CMP EAX,0x10                        ; 0055d8c2
    JLE 0x0055d75c                      ; 0055d8c5
        ;   XREF to: 0055d75c (CONDITIONAL_JUMP)  ; LAB_0055d75c
    PUSH 0x62318c                       ; 0055d8cb
    PUSH EDX                            ; 0055d8d0
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 0055d8d1
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0055d8d6
    PUSH 0x4000                         ; 0055d8d9
    MOV EBX,dword ptr [0x00612560]      ; 0055d8de | DAT_00612560
    PUSH EBX                            ; 0055d8e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 0055d8e5
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0055d8ea
    PUSH 0x0                            ; 0055d8ed
    MOV ESI,dword ptr [0x00612560]      ; 0055d8ef | DAT_00612560
    PUSH ESI                            ; 0055d8f5
    MOV EDI,0x4                         ; 0055d8f6
    XOR EBP,EBP                         ; 0055d8fb
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 0055d8fd
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0055d902
    MOV ESI,0xa                         ; 0055d905
    MOV EBX,dword ptr [0x00612560]      ; 0055d90a | DAT_00612560
    PUSH 0x1                            ; 0055d910
    MOV dword ptr [ESP + 0x14],EDI      ; 0055d912
    MOV dword ptr [ESP + 0x24],EBP      ; 0055d916
    MOV dword ptr [ESP + 0x20],EBP      ; 0055d91a
    PUSH EBX                            ; 0055d91e
    MOV dword ptr [ESP + 0x20],EBP      ; 0055d91f
    MOV dword ptr [ESP + 0x1c],EBP      ; 0055d923
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 0055d927
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0055d92c
    MOV dword ptr [ESP + 0x70],ESI      ; 0055d92f
    MOV dword ptr [ESP + 0x74],EBP      ; 0055d933
    MOV EDI,dword ptr [ESP + 0x74]      ; 0055d937
        ;   Label: LAB_0055d937
    MOV EBX,dword ptr [ESP + 0x70]      ; 0055d93b
    MOV ESI,0xfffffffc                  ; 0055d93f
    LEA EAX,[EDI + ESI*0x1]             ; 0055d944
        ;   Label: LAB_0055d944
    LEA EDX,[EBX + ESI*0x1]             ; 0055d947
    INC ESI                             ; 0055d94a
    MOV dword ptr [ESP + 0x24],EAX      ; 0055d94b
    MOV dword ptr [ESP + 0x28],EDX      ; 0055d94f
    LEA EBP,[EBX + ESI*0x1]             ; 0055d953
    LEA EAX,[ESP + 0xc]                 ; 0055d956
    MOV dword ptr [ESP + 0x2c],EBP      ; 0055d95a
    PUSH EAX                            ; 0055d95e
    MOV EBP,dword ptr [0x00612560]      ; 0055d95f | DAT_00612560
    LEA ECX,[EDI + ESI*0x1]             ; 0055d965
    PUSH EBP                            ; 0055d968
    MOV dword ptr [ESP + 0x38],ECX      ; 0055d969
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 0055d96d
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0055d972
    CMP ESI,0x4                         ; 0055d975
    JL 0x0055d944                       ; 0055d978
        ;   XREF to: 0055d944 (CONDITIONAL_JUMP)  ; LAB_0055d944
    MOV EDX,dword ptr [ESP + 0x74]      ; 0055d97a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0055d97e
    ADD EDX,0xa                         ; 0055d982
    ADD EAX,0xa                         ; 0055d985
    MOV dword ptr [ESP + 0x74],EDX      ; 0055d988
    MOV dword ptr [ESP + 0x70],EAX      ; 0055d98c
    CMP EDX,0xa0                        ; 0055d990
    JNZ 0x0055d937                      ; 0055d996
        ;   XREF to: 0055d937 (CONDITIONAL_JUMP)  ; LAB_0055d937
    PUSH 0x0                            ; 0055d998
    MOV EBX,dword ptr [0x00612560]      ; 0055d99a | DAT_00612560
    PUSH EBX                            ; 0055d9a0
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 0055d9a1
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0055d9a6
    POP EBX                             ; 0055d9a9
    POP ESI                             ; 0055d9aa
    POP EDI                             ; 0055d9ab
    ADD ESP,0x74                        ; 0055d9ac
    POP EBP                             ; 0055d9af
    RET                                 ; 0055d9b0

