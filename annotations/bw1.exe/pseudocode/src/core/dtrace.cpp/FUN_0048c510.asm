; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_0048c510(int param_1,float *param_2)
;
;
; XREF[1]:
;   core_dtrace.cpp_FUN_0048ca40 at 0048cb43
;
; Referenced Globals:
;   undefined4 DAT_005db964
;   undefined4 DAT_005ff620
;   undefined4 DAT_0061255c
;   undefined4 DAT_00612560
;
; Called Functions:
;   crt_stdlib.c_rand_FUN_005c084c
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c510
        ;   Label: core_dtrace.cpp_FUN_0048c510
    PUSH ESI                            ; 0048c511
    PUSH EDI                            ; 0048c512
    PUSH EBP                            ; 0048c513
    SUB ESP,0xd8                        ; 0048c514
    MOV EBP,dword ptr [ESP + 0xf0]      ; 0048c51a
    MOV EAX,dword ptr [ESP + 0xec]      ; 0048c521
    FLD float ptr [0x005db964]          ; 0048c528 | DAT_005db964
    FLD float ptr [EAX + 0x28]          ; 0048c52e
    FMUL ST1                            ; 0048c531
    FLD float ptr [EAX + 0x2c]          ; 0048c533
    FMUL ST2                            ; 0048c536
    FLD float ptr [EAX + 0x30]          ; 0048c538
    FMULP ST3                           ; 0048c53b
    LEA EDI,[ESP + 0x9c]                ; 0048c53d
    LEA ESI,[ESP + 0x90]                ; 0048c544
    LEA EDX,[ESP + 0x48]                ; 0048c54b
    LEA EAX,[ESP + 0x9c]                ; 0048c54f
    FXCH                                ; 0048c556
    FSTP float ptr [ESP + 0x90]         ; 0048c558
    FSTP float ptr [ESP + 0x94]         ; 0048c55f
    FSTP float ptr [ESP + 0x98]         ; 0048c566
    MOVSD ES:EDI,ESI                    ; 0048c56d
    MOVSD ES:EDI,ESI                    ; 0048c56e
    MOVSD ES:EDI,ESI                    ; 0048c56f
    CMP EDX,EAX                         ; 0048c570
    JZ 0x0048c595                       ; 0048c572
        ;   XREF to: 0048c595 (CONDITIONAL_JUMP)  ; LAB_0048c595
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0048c574
    MOV dword ptr [ESP + 0x48],EAX      ; 0048c57b
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0048c57f
    MOV dword ptr [ESP + 0x4c],EAX      ; 0048c586
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0048c58a
    MOV dword ptr [ESP + 0x50],EAX      ; 0048c591
    PUSH 0x1c3d424                      ; 0048c595
        ;   Label: LAB_0048c595
    MOV EDX,dword ptr [0x0061255c]      ; 0048c59a | DAT_0061255c
    PUSH EDX                            ; 0048c5a0
    LEA EBX,[ESP + 0x5c]                ; 0048c5a1
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780 ; 0048c5a5
        ;   XREF to: 00483780 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780(CDemonRenderer * this_ptr, CVector3i * input_point)
    ADD ESP,0x8                         ; 0048c5aa
    MOV EAX,EBP                         ; 0048c5ad
    MOV EDX,dword ptr [0x00612560]      ; 0048c5af | DAT_00612560
    FLD float ptr [EAX]                 ; 0048c5b5
    FMUL float ptr [0x005ff620]         ; 0048c5b7 | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048c5bd
    FLD float ptr [EAX + 0x4]           ; 0048c5bf
    FMUL float ptr [0x005ff620]         ; 0048c5c2 | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048c5c8
    FLD float ptr [EAX + 0x8]           ; 0048c5cb
    FMUL float ptr [0x005ff620]         ; 0048c5ce | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048c5d4
    LEA EAX,[ESP + 0x54]                ; 0048c5d7
    PUSH EAX                            ; 0048c5db
    MOV EAX,dword ptr [EDX]             ; 0048c5dc
    PUSH EAX                            ; 0048c5de
    CALL engine_special.cpp_FUN_00580173 ; 0048c5df
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048c5e4
    FLD float ptr [EBP]                 ; 0048c5e7
    FADD float ptr [ESP + 0x48]         ; 0048c5ea
    FSTP float ptr [ESP + 0x6c]         ; 0048c5ee
    MOV EAX,dword ptr [EBP + 0x4]       ; 0048c5f2
    MOV dword ptr [ESP + 0x70],EAX      ; 0048c5f5
    MOV EAX,dword ptr [EBP + 0x8]       ; 0048c5f9
    LEA EBX,[ESP + 0x78]                ; 0048c5fc
    MOV dword ptr [ESP + 0x74],EAX      ; 0048c600
    LEA EAX,[ESP + 0x6c]                ; 0048c604
    MOV EDX,dword ptr [0x00612560]      ; 0048c608 | DAT_00612560
    FLD float ptr [EAX]                 ; 0048c60e
    FMUL float ptr [0x005ff620]         ; 0048c610 | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048c616
    FLD float ptr [EAX + 0x4]           ; 0048c618
    FMUL float ptr [0x005ff620]         ; 0048c61b | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048c621
    FLD float ptr [EAX + 0x8]           ; 0048c624
    FMUL float ptr [0x005ff620]         ; 0048c627 | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048c62d
    LEA EAX,[ESP + 0x78]                ; 0048c630
    PUSH EAX                            ; 0048c634
    MOV EAX,dword ptr [EDX]             ; 0048c635
    ADD EAX,0x30                        ; 0048c637
    PUSH EAX                            ; 0048c63a
    CALL engine_special.cpp_FUN_00580173 ; 0048c63b
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048c640
    FLD float ptr [EBP]                 ; 0048c643
    FADD float ptr [ESP + 0x48]         ; 0048c646
    FSTP float ptr [ESP + 0x6c]         ; 0048c64a
    MOV EAX,dword ptr [EBP + 0x4]       ; 0048c64e
    LEA EBX,[ESP + 0xa8]                ; 0048c651
    MOV dword ptr [ESP + 0x70],EAX      ; 0048c658
    MOV EDX,dword ptr [0x00612560]      ; 0048c65c | DAT_00612560
    FLD float ptr [EBP + 0x8]           ; 0048c662
    FADD float ptr [ESP + 0x50]         ; 0048c665
    LEA EAX,[ESP + 0x6c]                ; 0048c669
    FSTP float ptr [ESP + 0x74]         ; 0048c66d
    FLD float ptr [EAX]                 ; 0048c671
    FMUL float ptr [0x005ff620]         ; 0048c673 | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048c679
    FLD float ptr [EAX + 0x4]           ; 0048c67b
    FMUL float ptr [0x005ff620]         ; 0048c67e | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048c684
    FLD float ptr [EAX + 0x8]           ; 0048c687
    FMUL float ptr [0x005ff620]         ; 0048c68a | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048c690
    LEA EAX,[ESP + 0xa8]                ; 0048c693
    PUSH EAX                            ; 0048c69a
    MOV EAX,dword ptr [EDX]             ; 0048c69b
    ADD EAX,0x60                        ; 0048c69d
    PUSH EAX                            ; 0048c6a0
    CALL engine_special.cpp_FUN_00580173 ; 0048c6a1
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048c6a6
    MOV EAX,dword ptr [EBP]             ; 0048c6a9
    MOV dword ptr [ESP + 0x6c],EAX      ; 0048c6ac
    MOV EAX,dword ptr [EBP + 0x4]       ; 0048c6b0
    LEA EBX,[ESP + 0x84]                ; 0048c6b3
    MOV dword ptr [ESP + 0x70],EAX      ; 0048c6ba
    MOV EDX,dword ptr [0x00612560]      ; 0048c6be | DAT_00612560
    FLD float ptr [EBP + 0x8]           ; 0048c6c4
    FADD float ptr [ESP + 0x50]         ; 0048c6c7
    LEA EAX,[ESP + 0x6c]                ; 0048c6cb
    FSTP float ptr [ESP + 0x74]         ; 0048c6cf
    FLD float ptr [EAX]                 ; 0048c6d3
    FMUL float ptr [0x005ff620]         ; 0048c6d5 | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048c6db
    FLD float ptr [EAX + 0x4]           ; 0048c6dd
    FMUL float ptr [0x005ff620]         ; 0048c6e0 | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048c6e6
    FLD float ptr [EAX + 0x8]           ; 0048c6e9
    FMUL float ptr [0x005ff620]         ; 0048c6ec | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048c6f2
    LEA EAX,[ESP + 0x84]                ; 0048c6f5
    PUSH EAX                            ; 0048c6fc
    MOV EAX,dword ptr [EDX]             ; 0048c6fd
    ADD EAX,0x90                        ; 0048c6ff
    PUSH EAX                            ; 0048c704
    CALL engine_special.cpp_FUN_00580173 ; 0048c705
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048c70a
    MOV EAX,dword ptr [EBP]             ; 0048c70d
    MOV dword ptr [ESP + 0x6c],EAX      ; 0048c710
    FLD float ptr [EBP + 0x4]           ; 0048c714
    FADD float ptr [ESP + 0x4c]         ; 0048c717
    FSTP float ptr [ESP + 0x70]         ; 0048c71b
    MOV EAX,dword ptr [EBP + 0x8]       ; 0048c71f
    LEA EBX,[ESP + 0xb4]                ; 0048c722
    MOV dword ptr [ESP + 0x74],EAX      ; 0048c729
    LEA EAX,[ESP + 0x6c]                ; 0048c72d
    MOV EDX,dword ptr [0x00612560]      ; 0048c731 | DAT_00612560
    FLD float ptr [EAX]                 ; 0048c737
    FMUL float ptr [0x005ff620]         ; 0048c739 | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048c73f
    FLD float ptr [EAX + 0x4]           ; 0048c741
    FMUL float ptr [0x005ff620]         ; 0048c744 | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048c74a
    FLD float ptr [EAX + 0x8]           ; 0048c74d
    FMUL float ptr [0x005ff620]         ; 0048c750 | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048c756
    LEA EAX,[ESP + 0xb4]                ; 0048c759
    PUSH EAX                            ; 0048c760
    MOV EAX,dword ptr [EDX]             ; 0048c761
    ADD EAX,0xc0                        ; 0048c763
    PUSH EAX                            ; 0048c768
    CALL engine_special.cpp_FUN_00580173 ; 0048c769
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048c76e
    FLD float ptr [EBP]                 ; 0048c771
    FADD float ptr [ESP + 0x48]         ; 0048c774
    FSTP float ptr [ESP + 0x6c]         ; 0048c778
    FLD float ptr [EBP + 0x4]           ; 0048c77c
    FADD float ptr [ESP + 0x4c]         ; 0048c77f
    FSTP float ptr [ESP + 0x70]         ; 0048c783
    MOV EAX,dword ptr [EBP + 0x8]       ; 0048c787
    LEA EBX,[ESP + 0x60]                ; 0048c78a
    MOV dword ptr [ESP + 0x74],EAX      ; 0048c78e
    LEA EAX,[ESP + 0x6c]                ; 0048c792
    MOV EDX,dword ptr [0x00612560]      ; 0048c796 | DAT_00612560
    FLD float ptr [EAX]                 ; 0048c79c
    FMUL float ptr [0x005ff620]         ; 0048c79e | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048c7a4
    FLD float ptr [EAX + 0x4]           ; 0048c7a6
    FMUL float ptr [0x005ff620]         ; 0048c7a9 | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048c7af
    FLD float ptr [EAX + 0x8]           ; 0048c7b2
    FMUL float ptr [0x005ff620]         ; 0048c7b5 | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048c7bb
    LEA EAX,[ESP + 0x60]                ; 0048c7be
    PUSH EAX                            ; 0048c7c2
    MOV EAX,dword ptr [EDX]             ; 0048c7c3
    ADD EAX,0xf0                        ; 0048c7c5
    PUSH EAX                            ; 0048c7ca
    CALL engine_special.cpp_FUN_00580173 ; 0048c7cb
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048c7d0
    FLD float ptr [EBP]                 ; 0048c7d3
    FADD float ptr [ESP + 0x48]         ; 0048c7d6
    LEA EBX,[ESP + 0xcc]                ; 0048c7da
    FSTP float ptr [ESP + 0x6c]         ; 0048c7e1
    FLD float ptr [EBP + 0x4]           ; 0048c7e5
    FADD float ptr [ESP + 0x4c]         ; 0048c7e8
    LEA EAX,[ESP + 0x6c]                ; 0048c7ec
    FSTP float ptr [ESP + 0x70]         ; 0048c7f0
    FLD float ptr [EBP + 0x8]           ; 0048c7f4
    FADD float ptr [ESP + 0x50]         ; 0048c7f7
    MOV EDX,dword ptr [0x00612560]      ; 0048c7fb | DAT_00612560
    FSTP float ptr [ESP + 0x74]         ; 0048c801
    FLD float ptr [EAX]                 ; 0048c805
    FMUL float ptr [0x005ff620]         ; 0048c807 | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048c80d
    FLD float ptr [EAX + 0x4]           ; 0048c80f
    FMUL float ptr [0x005ff620]         ; 0048c812 | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048c818
    FLD float ptr [EAX + 0x8]           ; 0048c81b
    FMUL float ptr [0x005ff620]         ; 0048c81e | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048c824
    LEA EAX,[ESP + 0xcc]                ; 0048c827
    PUSH EAX                            ; 0048c82e
    MOV EAX,dword ptr [EDX]             ; 0048c82f
    ADD EAX,0x120                       ; 0048c831
    PUSH EAX                            ; 0048c836
    CALL engine_special.cpp_FUN_00580173 ; 0048c837
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048c83c
    MOV EAX,dword ptr [EBP]             ; 0048c83f
    MOV dword ptr [ESP + 0x6c],EAX      ; 0048c842
    LEA EBX,[ESP + 0xc0]                ; 0048c846
    FLD float ptr [EBP + 0x4]           ; 0048c84d
    FADD float ptr [ESP + 0x4c]         ; 0048c850
    MOV EDX,dword ptr [0x00612560]      ; 0048c854 | DAT_00612560
    FSTP float ptr [ESP + 0x70]         ; 0048c85a
    FLD float ptr [EBP + 0x8]           ; 0048c85e
    FADD float ptr [ESP + 0x50]         ; 0048c861
    LEA EAX,[ESP + 0x6c]                ; 0048c865
    FSTP float ptr [ESP + 0x74]         ; 0048c869
    FLD float ptr [EAX]                 ; 0048c86d
    FMUL float ptr [0x005ff620]         ; 0048c86f | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048c875
    FLD float ptr [EAX + 0x4]           ; 0048c877
    FMUL float ptr [0x005ff620]         ; 0048c87a | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048c880
    FLD float ptr [EAX + 0x8]           ; 0048c883
    FMUL float ptr [0x005ff620]         ; 0048c886 | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048c88c
    LEA EAX,[ESP + 0xc0]                ; 0048c88f
    PUSH EAX                            ; 0048c896
    MOV EAX,dword ptr [EDX]             ; 0048c897
    ADD EAX,0x150                       ; 0048c899
    PUSH EAX                            ; 0048c89e
    CALL engine_special.cpp_FUN_00580173 ; 0048c89f
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048c8a4
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0048c8a7
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    AND EAX,0xff                        ; 0048c8ac
    PUSH EAX                            ; 0048c8b1
    MOV ECX,dword ptr [0x00612560]      ; 0048c8b2 | DAT_00612560
    PUSH ECX                            ; 0048c8b8
    MOV EBX,0x4                         ; 0048c8b9
    MOV EDI,0x4                         ; 0048c8be
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0 ; 0048c8c3
        ;   XREF to: 00483ce0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 0048c8c8
    XOR ESI,ESI                         ; 0048c8cb
    MOV EDX,dword ptr [0x00612560]      ; 0048c8cd | DAT_00612560
    PUSH 0x1                            ; 0048c8d3
    MOV dword ptr [ESP + 0x8],EBX       ; 0048c8d5
    MOV dword ptr [ESP + 0xc],ESI       ; 0048c8d9
    MOV dword ptr [ESP + 0x10],ESI      ; 0048c8dd
    MOV dword ptr [ESP + 0x14],ESI      ; 0048c8e1
    PUSH EDX                            ; 0048c8e5
    MOV dword ptr [ESP + 0x1c],ESI      ; 0048c8e6
    MOV EBX,0x1                         ; 0048c8ea
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 0048c8ef
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    LEA EAX,[ESP + 0x8]                 ; 0048c8f4
    ADD ESP,0x8                         ; 0048c8f8
    MOV EBP,dword ptr [0x00612560]      ; 0048c8fb | DAT_00612560
    MOV dword ptr [ESP + 0x3c],ESI      ; 0048c901
    MOV dword ptr [ESP + 0x30],EBX      ; 0048c905
    MOV dword ptr [ESP + 0x18],EDI      ; 0048c909
    PUSH EAX                            ; 0048c90d
    MOV ESI,0x5                         ; 0048c90e
    MOV EBX,0x6                         ; 0048c913
    PUSH EBP                            ; 0048c918
    XOR EDI,EDI                         ; 0048c919
    MOV EBP,0x4                         ; 0048c91b
    MOV dword ptr [ESP + 0x2c],ESI      ; 0048c920
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 ; 0048c924
        ;   XREF to: 00481c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EAX,0x2                         ; 0048c929
    MOV EDX,0x3                         ; 0048c92e
    ADD ESP,0x8                         ; 0048c933
    MOV ECX,0x7                         ; 0048c936
    MOV dword ptr [ESP + 0x3c],EAX      ; 0048c93b
    MOV EAX,ESP                         ; 0048c93f
    MOV ESI,dword ptr [0x00612560]      ; 0048c941 | DAT_00612560
    PUSH EAX                            ; 0048c947
    MOV dword ptr [ESP + 0x34],EDX      ; 0048c948
    MOV dword ptr [ESP + 0x28],ECX      ; 0048c94c
    PUSH ESI                            ; 0048c950
    MOV dword ptr [ESP + 0x20],EBX      ; 0048c951
    MOV EBX,0x1                         ; 0048c955
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 ; 0048c95a
        ;   XREF to: 00481c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EAX,0x7                         ; 0048c95f
    MOV EDX,0x3                         ; 0048c964
    MOV ESI,0x2                         ; 0048c969
    ADD ESP,0x8                         ; 0048c96e
    MOV ECX,dword ptr [0x00612560]      ; 0048c971 | DAT_00612560
    MOV dword ptr [ESP + 0x24],EAX      ; 0048c977
    MOV EAX,ESP                         ; 0048c97b
    MOV dword ptr [ESP + 0x3c],EDI      ; 0048c97d
    PUSH EAX                            ; 0048c981
    MOV dword ptr [ESP + 0x34],EBP      ; 0048c982
    MOV dword ptr [ESP + 0x1c],EDX      ; 0048c986
    PUSH ECX                            ; 0048c98a
    MOV EDI,0x6                         ; 0048c98b
    MOV EBP,0x5                         ; 0048c990
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 ; 0048c995
        ;   XREF to: 00481c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0048c99a
    MOV EAX,ESP                         ; 0048c99d
    MOV dword ptr [ESP + 0x3c],EBX      ; 0048c99f
    MOV dword ptr [ESP + 0x30],ESI      ; 0048c9a3
    PUSH EAX                            ; 0048c9a7
    MOV EAX,[0x00612560]                ; 0048c9a8 | DAT_00612560
    MOV dword ptr [ESP + 0x28],EDI      ; 0048c9ad
    PUSH EAX                            ; 0048c9b1
    MOV dword ptr [ESP + 0x20],EBP      ; 0048c9b2
    MOV ESI,0x7                         ; 0048c9b6
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 ; 0048c9bb
        ;   XREF to: 00481c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EDX,0x4                         ; 0048c9c0
    ADD ESP,0x8                         ; 0048c9c5
    MOV EAX,ESP                         ; 0048c9c8
    MOV dword ptr [ESP + 0x24],EDI      ; 0048c9ca
    PUSH EAX                            ; 0048c9ce
    MOV EDI,dword ptr [0x00612560]      ; 0048c9cf | DAT_00612560
    MOV dword ptr [ESP + 0x40],EDX      ; 0048c9d5
    PUSH EDI                            ; 0048c9d9
    MOV dword ptr [ESP + 0x38],EBP      ; 0048c9da
    MOV dword ptr [ESP + 0x20],ESI      ; 0048c9de
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 ; 0048c9e2
        ;   XREF to: 00481c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EAX,0x2                         ; 0048c9e7
    ADD ESP,0x8                         ; 0048c9ec
    MOV EBP,0x3                         ; 0048c9ef
    MOV dword ptr [ESP + 0x30],EAX      ; 0048c9f4
    MOV EAX,ESP                         ; 0048c9f8
    MOV dword ptr [ESP + 0x24],EBX      ; 0048c9fa
    PUSH EAX                            ; 0048c9fe
    MOV EBX,dword ptr [0x00612560]      ; 0048c9ff | DAT_00612560
    XOR ECX,ECX                         ; 0048ca05
    PUSH EBX                            ; 0048ca07
    MOV dword ptr [ESP + 0x44],EBP      ; 0048ca08
    MOV dword ptr [ESP + 0x20],ECX      ; 0048ca0c
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 ; 0048ca10
        ;   XREF to: 00481c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0048ca15
    PUSH 0x0                            ; 0048ca18
    MOV ESI,dword ptr [0x00612560]      ; 0048ca1a | DAT_00612560
    PUSH ESI                            ; 0048ca20
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 0048ca21
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0048ca26
    ADD ESP,0xd8                        ; 0048ca29
    POP EBP                             ; 0048ca2f
    POP EDI                             ; 0048ca30
    POP ESI                             ; 0048ca31
    POP EBX                             ; 0048ca32
    RET                                 ; 0048ca33

