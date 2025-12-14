; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
;
; Parameters:
; SProjectedVertex * Stack[0x4]:4   output
; CVector3i *      Stack[0x8]:4   input
;
; XREF[84]:
;   core_actor.cpp_CDemonActor_FUN_0040dec0 at 0040df70
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 at 0040de61
;   core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90 at 00409c30
;   core_actor.cpp_draw3DLineSegment_FUN_0040d330 at 0040d3ec
;   core_actor.cpp_draw3DPointMarker_FUN_00409930 at 0040996e
;   core_actor.cpp_drawBoundingBox_FUN_0040d470 at 0040d58f
;   core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840 at 004208cf
;   core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680 at 004206e3
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 at 004205eb
;   core_bugs.cpp_FUN_00425340 at 004253ef
;   ... and 74 more
;
; Referenced Globals:
;   int g_TempX = 0x0
;   int g_TempY = 0x0
;   int g_TempZ = 0x0
;   int g_TempTransformedX = 0x0
;   int g_TempTransformedY = 0x0
;   int g_TempTransformedZ = 0x0
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;   BOOL g_MMXSupported
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   CMatrix3x3i g_TransformMatrix
;   ... and 8 more
;
; *****************************************************************************

section .text

    TEST dword ptr [0x02d05248],0xffffffff ; 005b575c | g_MMXSupported
        ;   Label: wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
    JZ 0x005b58aa                       ; 005b5766
        ;   XREF to: 005b58aa (CONDITIONAL_JUMP)  ; LAB_005b58aa
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b576c
    MOV EAX,dword ptr [EBX]             ; 005b5770
    MOV ECX,dword ptr [EBX + 0x4]       ; 005b5772
    MOV EDX,dword ptr [EBX + 0x8]       ; 005b5775
    SUB EAX,dword ptr [0x02d052b8]      ; 005b5778 | g_RelativeX
    SUB ECX,dword ptr [0x02d052bc]      ; 005b577e | g_RelativeY
    SUB EDX,dword ptr [0x02d052c0]      ; 005b5784 | g_RelativeZ
    MOVD MM0,EAX                        ; 005b578a
    MOVD MM1,ECX                        ; 005b578d
    MOVD MM2,EDX                        ; 005b5790
    IMUL dword ptr [0x02d052e8]         ; 005b5793 | g_TransformMatrix
    MOV EBX,EAX                         ; 005b5799
    MOV ECX,EDX                         ; 005b579b
    MOVD EAX,MM1                        ; 005b579d
    IMUL dword ptr [0x02d052f4]         ; 005b57a0 | g_TransformMatrix[1][0]
    ADD EBX,EAX                         ; 005b57a6
    ADC ECX,EDX                         ; 005b57a8
    MOVD EAX,MM2                        ; 005b57aa
    IMUL dword ptr [0x02d05300]         ; 005b57ad | g_TransformMatrix[2][0]
    ADD EAX,EBX                         ; 005b57b3
    ADC EDX,ECX                         ; 005b57b5
    SHRD EAX,EDX,0x10                   ; 005b57b7
    MOVD MM4,EAX                        ; 005b57bb
    MOVD EAX,MM0                        ; 005b57be
    IMUL dword ptr [0x02d052ec]         ; 005b57c1 | g_TransformMatrix[0][1]
    MOV EBX,EAX                         ; 005b57c7
    MOV ECX,EDX                         ; 005b57c9
    MOVD EAX,MM1                        ; 005b57cb
    IMUL dword ptr [0x02d052f8]         ; 005b57ce | g_TransformMatrix[1][1]
    ADD EBX,EAX                         ; 005b57d4
    ADC ECX,EDX                         ; 005b57d6
    MOVD EAX,MM2                        ; 005b57d8
    IMUL dword ptr [0x02d05304]         ; 005b57db | g_TransformMatrix[2][1]
    ADD EAX,EBX                         ; 005b57e1
    ADC EDX,ECX                         ; 005b57e3
    SHRD EAX,EDX,0x10                   ; 005b57e5
    MOVD MM5,EAX                        ; 005b57e9
    MOVD EAX,MM0                        ; 005b57ec
    IMUL dword ptr [0x02d052f0]         ; 005b57ef | g_TransformMatrix[0][2]
    MOV EBX,EAX                         ; 005b57f5
    MOV ECX,EDX                         ; 005b57f7
    MOVD EAX,MM1                        ; 005b57f9
    IMUL dword ptr [0x02d052fc]         ; 005b57fc | g_TransformMatrix[1][2]
    ADD EBX,EAX                         ; 005b5802
    ADC ECX,EDX                         ; 005b5804
    MOVD EAX,MM2                        ; 005b5806
    IMUL dword ptr [0x02d05308]         ; 005b5809 | g_TransformMatrix[2][2]
    ADD EAX,EBX                         ; 005b580f
    ADC EDX,ECX                         ; 005b5811
    SHRD EAX,EDX,0x10                   ; 005b5813
    MOVD MM6,EAX                        ; 005b5817
    NEG EAX                             ; 005b581a
    MOV EDX,EAX                         ; 005b581c
    XOR EAX,EAX                         ; 005b581e
    MOVD EBX,MM4                        ; 005b5820
    MOVD ECX,MM6                        ; 005b5823
    CMP EBX,ECX                         ; 005b5826
    JLE 0x005b582f                      ; 005b5828
        ;   XREF to: 005b582f (CONDITIONAL_JUMP)  ; LAB_005b582f
    OR EAX,0x80000001                   ; 005b582a
    CMP EBX,EDX                         ; 005b582f
        ;   Label: LAB_005b582f
    JGE 0x005b5838                      ; 005b5831
        ;   XREF to: 005b5838 (CONDITIONAL_JUMP)  ; LAB_005b5838
    OR EAX,0x80000002                   ; 005b5833
    MOVD EBX,MM5                        ; 005b5838
        ;   Label: LAB_005b5838
    CMP EBX,ECX                         ; 005b583b
    JLE 0x005b5844                      ; 005b583d
        ;   XREF to: 005b5844 (CONDITIONAL_JUMP)  ; LAB_005b5844
    OR EAX,0x80000004                   ; 005b583f
    CMP EBX,EDX                         ; 005b5844
        ;   Label: LAB_005b5844
    JGE 0x005b584d                      ; 005b5846
        ;   XREF to: 005b584d (CONDITIONAL_JUMP)  ; LAB_005b584d
    OR EAX,0x80000008                   ; 005b5848
    CMP ECX,0x0                         ; 005b584d
        ;   Label: LAB_005b584d
    JG 0x005b5857                       ; 005b5850
        ;   XREF to: 005b5857 (CONDITIONAL_JUMP)  ; LAB_005b5857
    OR EAX,0x80000010                   ; 005b5852
    MOV EBX,dword ptr [ESP + 0x4]       ; 005b5857
        ;   Label: LAB_005b5857
    MOVD dword ptr [EBX],MM4            ; 005b585b
    MOVD dword ptr [EBX + 0x4],MM5      ; 005b585e
    MOVD dword ptr [EBX + 0x8],MM6      ; 005b5862
    TEST EAX,0xffffffff                 ; 005b5866
    JNZ 0x005b58a4                      ; 005b586b
        ;   XREF to: 005b58a4 (CONDITIONAL_JUMP)  ; LAB_005b58a4
    MOV EAX,0x7fffffff                  ; 005b586d
    XOR EDX,EDX                         ; 005b5872
    IDIV ECX                            ; 005b5874
    MOV dword ptr [EBX + 0xc],EAX       ; 005b5876
    MOVD EAX,MM4                        ; 005b5879
    IMUL dword ptr [0x02d02548]         ; 005b587c | g_ViewportCenterXFixed
    IDIV ECX                            ; 005b5882
    ADD EAX,dword ptr [0x02d02550]      ; 005b5884 | g_ViewportRightFixed
    MOV dword ptr [EBX + 0x10],EAX      ; 005b588a
    MOVD EAX,MM5                        ; 005b588d
    IMUL dword ptr [0x02d0254c]         ; 005b5890 | g_ViewportCenterYFixed
    IDIV ECX                            ; 005b5896
    ADD EAX,dword ptr [0x02d02554]      ; 005b5898 | g_ViewportBottomFixed
    MOV dword ptr [EBX + 0x14],EAX      ; 005b589e
    EMMS                                ; 005b58a1
    RET                                 ; 005b58a3
    MOV dword ptr [EBX + 0x10],EAX      ; 005b58a4
        ;   Label: LAB_005b58a4
    EMMS                                ; 005b58a7
    RET                                 ; 005b58a9
    PUSH ESI                            ; 005b58aa
        ;   Label: LAB_005b58aa
    PUSH EDI                            ; 005b58ab
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b58ac
    MOV EDI,dword ptr [ESP + 0xc]       ; 005b58b0
    MOV EAX,dword ptr [ESI]             ; 005b58b4
    MOV EBX,dword ptr [ESI + 0x4]       ; 005b58b6
    MOV ECX,dword ptr [ESI + 0x8]       ; 005b58b9
    SUB EAX,dword ptr [0x02d052b8]      ; 005b58bc | g_RelativeX
    SUB EBX,dword ptr [0x02d052bc]      ; 005b58c2 | g_RelativeY
    SUB ECX,dword ptr [0x02d052c0]      ; 005b58c8 | g_RelativeZ
    MOV [0x00682668],EAX                ; 005b58ce | g_TempX
    MOV dword ptr [0x0068266c],EBX      ; 005b58d3 | g_TempY
    MOV dword ptr [0x00682670],ECX      ; 005b58d9 | g_TempZ
    IMUL dword ptr [0x02d052e8]         ; 005b58df | g_TransformMatrix
    MOV EBX,EAX                         ; 005b58e5
    MOV ECX,EDX                         ; 005b58e7
    MOV EAX,[0x0068266c]                ; 005b58e9 | g_TempY
    IMUL dword ptr [0x02d052f4]         ; 005b58ee | g_TransformMatrix[1][0]
    ADD EBX,EAX                         ; 005b58f4
    ADC ECX,EDX                         ; 005b58f6
    MOV EAX,[0x00682670]                ; 005b58f8 | g_TempZ
    IMUL dword ptr [0x02d05300]         ; 005b58fd | g_TransformMatrix[2][0]
    ADD EAX,EBX                         ; 005b5903
    ADC EDX,ECX                         ; 005b5905
    SHRD EAX,EDX,0x10                   ; 005b5907
    MOV [0x00682678],EAX                ; 005b590b | g_TempTransformedX
    MOV EAX,[0x00682668]                ; 005b5910 | g_TempX
    IMUL dword ptr [0x02d052ec]         ; 005b5915 | g_TransformMatrix[0][1]
    MOV EBX,EAX                         ; 005b591b
    MOV ECX,EDX                         ; 005b591d
    MOV EAX,[0x0068266c]                ; 005b591f | g_TempY
    IMUL dword ptr [0x02d052f8]         ; 005b5924 | g_TransformMatrix[1][1]
    ADD EBX,EAX                         ; 005b592a
    ADC ECX,EDX                         ; 005b592c
    MOV EAX,[0x00682670]                ; 005b592e | g_TempZ
    IMUL dword ptr [0x02d05304]         ; 005b5933 | g_TransformMatrix[2][1]
    ADD EAX,EBX                         ; 005b5939
    ADC EDX,ECX                         ; 005b593b
    SHRD EAX,EDX,0x10                   ; 005b593d
    MOV [0x0068267c],EAX                ; 005b5941 | g_TempTransformedY
    MOV EAX,[0x00682668]                ; 005b5946 | g_TempX
    IMUL dword ptr [0x02d052f0]         ; 005b594b | g_TransformMatrix[0][2]
    MOV EBX,EAX                         ; 005b5951
    MOV ECX,EDX                         ; 005b5953
    MOV EAX,[0x0068266c]                ; 005b5955 | g_TempY
    IMUL dword ptr [0x02d052fc]         ; 005b595a | g_TransformMatrix[1][2]
    ADD EBX,EAX                         ; 005b5960
    ADC ECX,EDX                         ; 005b5962
    MOV EAX,[0x00682670]                ; 005b5964 | g_TempZ
    IMUL dword ptr [0x02d05308]         ; 005b5969 | g_TransformMatrix[2][2]
    ADD EAX,EBX                         ; 005b596f
    ADC EDX,ECX                         ; 005b5971
    SHRD EAX,EDX,0x10                   ; 005b5973
    MOV [0x00682680],EAX                ; 005b5977 | g_TempTransformedZ
    NEG EAX                             ; 005b597c
    MOV EDX,EAX                         ; 005b597e
    XOR EAX,EAX                         ; 005b5980
    MOV EBX,dword ptr [0x00682678]      ; 005b5982 | g_TempTransformedX
    MOV ECX,dword ptr [0x00682680]      ; 005b5988 | g_TempTransformedZ
    CMP EBX,ECX                         ; 005b598e
    JLE 0x005b5997                      ; 005b5990
        ;   XREF to: 005b5997 (CONDITIONAL_JUMP)  ; LAB_005b5997
    OR EAX,0x80000001                   ; 005b5992
    CMP EBX,EDX                         ; 005b5997
        ;   Label: LAB_005b5997
    JGE 0x005b59a0                      ; 005b5999
        ;   XREF to: 005b59a0 (CONDITIONAL_JUMP)  ; LAB_005b59a0
    OR EAX,0x80000002                   ; 005b599b
    MOV EBX,dword ptr [0x0068267c]      ; 005b59a0 | g_TempTransformedY
        ;   Label: LAB_005b59a0
    CMP EBX,ECX                         ; 005b59a6
    JLE 0x005b59af                      ; 005b59a8
        ;   XREF to: 005b59af (CONDITIONAL_JUMP)  ; LAB_005b59af
    OR EAX,0x80000004                   ; 005b59aa
    CMP EBX,EDX                         ; 005b59af
        ;   Label: LAB_005b59af
    JGE 0x005b59b8                      ; 005b59b1
        ;   XREF to: 005b59b8 (CONDITIONAL_JUMP)  ; LAB_005b59b8
    OR EAX,0x80000008                   ; 005b59b3
    CMP ECX,0x0                         ; 005b59b8
        ;   Label: LAB_005b59b8
    JG 0x005b59c2                       ; 005b59bb
        ;   XREF to: 005b59c2 (CONDITIONAL_JUMP)  ; LAB_005b59c2
    OR EAX,0x80000010                   ; 005b59bd
    TEST EAX,0xffffffff                 ; 005b59c2
        ;   Label: LAB_005b59c2
    JNZ 0x005b5a11                      ; 005b59c7
        ;   XREF to: 005b5a11 (CONDITIONAL_JUMP)  ; LAB_005b5a11
    MOV EAX,[0x00682678]                ; 005b59c9 | g_TempTransformedX
    MOV dword ptr [EDI],EAX             ; 005b59ce
    MOV dword ptr [EDI + 0x4],EBX       ; 005b59d0
    MOV dword ptr [EDI + 0x8],ECX       ; 005b59d3
    MOV EAX,0x7fffffff                  ; 005b59d6
    XOR EDX,EDX                         ; 005b59db
    IDIV ECX                            ; 005b59dd
    MOV dword ptr [EDI + 0xc],EAX       ; 005b59df
    MOV EAX,[0x00682678]                ; 005b59e2 | g_TempTransformedX
    IMUL dword ptr [0x02d02548]         ; 005b59e7 | g_ViewportCenterXFixed
    IDIV ECX                            ; 005b59ed
    ADD EAX,dword ptr [0x02d02550]      ; 005b59ef | g_ViewportRightFixed
    MOV dword ptr [EDI + 0x10],EAX      ; 005b59f5
    MOV EAX,[0x0068267c]                ; 005b59f8 | g_TempTransformedY
    IMUL dword ptr [0x02d0254c]         ; 005b59fd | g_ViewportCenterYFixed
    IDIV ECX                            ; 005b5a03
    ADD EAX,dword ptr [0x02d02554]      ; 005b5a05 | g_ViewportBottomFixed
    MOV dword ptr [EDI + 0x14],EAX      ; 005b5a0b
    POP EDI                             ; 005b5a0e
    POP ESI                             ; 005b5a0f
    RET                                 ; 005b5a10
    MOV EDX,dword ptr [0x00682678]      ; 005b5a11 | g_TempTransformedX
        ;   Label: LAB_005b5a11
    MOV dword ptr [EDI],EDX             ; 005b5a17
    MOV dword ptr [EDI + 0x4],EBX       ; 005b5a19
    MOV dword ptr [EDI + 0x8],ECX       ; 005b5a1c
    MOV dword ptr [EDI + 0x10],EAX      ; 005b5a1f
    POP EDI                             ; 005b5a22
    POP ESI                             ; 005b5a23
    RET                                 ; 005b5a24

