; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_matrix.c_invertTransformMatrix_FUN_0050c640(void)
;
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200 at 0048c412
;   engine_matrix.c_buildRotationMatrix_FUN_0050c920 at 0050cc04
;
; Referenced Globals:
;   double g_FixedToFloat = 0.0000152587890625
;   double g_Fixed16Scale = 65536
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][0]
;   undefined4 g_TransformMatrix[1][1]
;   undefined4 g_TransformMatrix[1][2]
;   undefined4 g_TransformMatrix[2][0]
;   undefined4 g_TransformMatrix[2][1]
;   undefined4 g_TransformMatrix[2][2]
;   CMatrix3x3i g_InverseMatrix
;   undefined4 g_InverseMatrix[0][1]
;   undefined4 g_InverseMatrix[0][2]
;   undefined4 g_InverseMatrix[1][0]
;   ... and 14 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0050c640
        ;   Label: engine_matrix.c_invertTransformMatrix_FUN_0050c640
    MOV EBP,ESP                         ; 0050c641
    SUB ESP,0x54                        ; 0050c643
    AND ESP,0xfffffff8                  ; 0050c646
    FILD dword ptr [0x02d052e8]         ; 0050c649 | g_TransformMatrix
    FMUL double ptr [0x00635a3d]        ; 0050c64f | g_FixedToFloat
    FILD dword ptr [0x02d052ec]         ; 0050c655 | g_TransformMatrix[0][1]
    FMUL double ptr [0x00635a3d]        ; 0050c65b | g_FixedToFloat
    FILD dword ptr [0x02d052f0]         ; 0050c661 | g_TransformMatrix[0][2]
    FMUL double ptr [0x00635a3d]        ; 0050c667 | g_FixedToFloat
    FILD dword ptr [0x02d052f4]         ; 0050c66d | g_TransformMatrix[1][0]
    FMUL double ptr [0x00635a3d]        ; 0050c673 | g_FixedToFloat
    FILD dword ptr [0x02d052f8]         ; 0050c679 | g_TransformMatrix[1][1]
    FMUL double ptr [0x00635a3d]        ; 0050c67f | g_FixedToFloat
    FILD dword ptr [0x02d052fc]         ; 0050c685 | g_TransformMatrix[1][2]
    FMUL double ptr [0x00635a3d]        ; 0050c68b | g_FixedToFloat
    FILD dword ptr [0x02d05300]         ; 0050c691 | g_TransformMatrix[2][0]
    FMUL double ptr [0x00635a3d]        ; 0050c697 | g_FixedToFloat
    FXCH ST6                            ; 0050c69d
    FSTP float ptr [ESP + 0x48]         ; 0050c69f
    FILD dword ptr [0x02d05304]         ; 0050c6a3 | g_TransformMatrix[2][1]
    FMUL double ptr [0x00635a3d]        ; 0050c6a9 | g_FixedToFloat
    FXCH ST2                            ; 0050c6af
    FSTP float ptr [ESP + 0x3c]         ; 0050c6b1
    FILD dword ptr [0x02d05308]         ; 0050c6b5 | g_TransformMatrix[2][2]
    FMUL double ptr [0x00635a3d]        ; 0050c6bb | g_FixedToFloat
    FXCH                                ; 0050c6c1
    FSTP float ptr [ESP + 0x34]         ; 0050c6c3
    FLD float ptr [ESP + 0x3c]          ; 0050c6c7
    FXCH                                ; 0050c6cb
    FSTP float ptr [ESP + 0x14]         ; 0050c6cd
    FMUL float ptr [ESP + 0x14]         ; 0050c6d1
    FXCH                                ; 0050c6d5
    FSTP float ptr [ESP + 0x40]         ; 0050c6d7
    FLD float ptr [ESP + 0x34]          ; 0050c6db
    FMUL float ptr [ESP + 0x40]         ; 0050c6df
    FXCH ST4                            ; 0050c6e3
    FST float ptr [ESP + 0x50]          ; 0050c6e5
    FMUL float ptr [ESP + 0x14]         ; 0050c6e9
    FXCH ST3                            ; 0050c6ed
    FSTP float ptr [ESP + 0x4c]         ; 0050c6ef
    FLD float ptr [ESP + 0x48]          ; 0050c6f3
    FMUL float ptr [ESP + 0x14]         ; 0050c6f7
    FLD float ptr [ESP + 0x4c]          ; 0050c6fb
    FMUL float ptr [ESP + 0x40]         ; 0050c6ff
    FXCH ST2                            ; 0050c703
    FSTP float ptr [ESP + 0x18]         ; 0050c705
    FXCH ST4                            ; 0050c709
    FSUBR float ptr [ESP + 0x18]        ; 0050c70b
    FLD float ptr [ESP + 0x48]          ; 0050c70f
    FXCH                                ; 0050c713
    FSTP float ptr [ESP + 0x2c]         ; 0050c715
    FMUL float ptr [ESP + 0x2c]         ; 0050c719
    FXCH ST2                            ; 0050c71d
    FST float ptr [ESP + 0x44]          ; 0050c71f
    FMUL float ptr [ESP + 0x14]         ; 0050c723
    FXCH ST5                            ; 0050c727
    FSTP float ptr [ESP + 0x38]         ; 0050c729
    FLD float ptr [ESP + 0x34]          ; 0050c72d
    FMUL float ptr [ESP + 0x38]         ; 0050c731
    FLD float ptr [ESP + 0x4c]          ; 0050c735
    FMUL float ptr [ESP + 0x38]         ; 0050c739
    FXCH                                ; 0050c73d
    FSUBP ST6,ST0                       ; 0050c73f
    MOV EAX,[0x02d052e8]                ; 0050c741 | g_TransformMatrix
    FLD float ptr [ESP + 0x50]          ; 0050c746
    FMUL ST6                            ; 0050c74a
    MOV [0x02f0d38c],EAX                ; 0050c74c | g_TransformMatrixCopy
    FSUBP ST3,ST0                       ; 0050c751
    MOV EAX,[0x02d052ec]                ; 0050c753 | g_TransformMatrix[0][1]
    FLD float ptr [ESP + 0x44]          ; 0050c758
    FMUL float ptr [ESP + 0x40]         ; 0050c75c
    MOV [0x02f0d390],EAX                ; 0050c760 | g_TransformMatrixCopy[0][1]
    MOV EAX,[0x02d052f0]                ; 0050c765 | g_TransformMatrix[0][2]
    FSTP float ptr [ESP + 0x18]         ; 0050c76a
    FLD float ptr [ESP + 0x3c]          ; 0050c76e
    FMUL float ptr [ESP + 0x38]         ; 0050c772
    MOV [0x02f0d394],EAX                ; 0050c776 | g_TransformMatrixCopy[0][2]
    FSUBR float ptr [ESP + 0x18]        ; 0050c77b
    MOV EAX,[0x02d052f4]                ; 0050c77f | g_TransformMatrix[1][0]
    FSTP float ptr [ESP + 0x30]         ; 0050c784
    FLD float ptr [ESP + 0x4c]          ; 0050c788
    FMUL float ptr [ESP + 0x30]         ; 0050c78c
    MOV [0x02f0d398],EAX                ; 0050c790 | g_TransformMatrixCopy[1][0]
    FXCH ST2                            ; 0050c795
    FSUBP ST4,ST0                       ; 0050c797
    MOV EAX,[0x02d052f8]                ; 0050c799 | g_TransformMatrix[1][1]
    FSUBP ST4,ST0                       ; 0050c79e
    MOV [0x02f0d39c],EAX                ; 0050c7a0 | g_TransformMatrixCopy[1][1]
    MOV EAX,[0x02d052fc]                ; 0050c7a5 | g_TransformMatrix[1][2]
    FXCH ST2                            ; 0050c7aa
    FCHS                                ; 0050c7ac
    MOV [0x02f0d3a0],EAX                ; 0050c7ae | g_TransformMatrixCopy[1][2]
    MOV EAX,[0x02d05300]                ; 0050c7b3 | g_TransformMatrix[2][0]
    FXCH ST3                            ; 0050c7b8
    FSTP float ptr [ESP + 0x28]         ; 0050c7ba
    MOV [0x02f0d3a4],EAX                ; 0050c7be | g_TransformMatrixCopy[2][0]
    MOV EAX,[0x02d05304]                ; 0050c7c3 | g_TransformMatrix[2][1]
    FXCH ST2                            ; 0050c7c8
    FSTP float ptr [ESP + 0x24]         ; 0050c7ca
    MOV [0x02f0d3a8],EAX                ; 0050c7ce | g_TransformMatrixCopy[2][1]
    FXCH ST2                            ; 0050c7d3
    FCHS                                ; 0050c7d5
    FSTP float ptr [ESP + 0x20]         ; 0050c7d7
    MOV EAX,[0x02d05308]                ; 0050c7db | g_TransformMatrix[2][2]
    FADDP                               ; 0050c7e0
    MOV [0x02f0d3ac],EAX                ; 0050c7e2 | g_TransformMatrixCopy[2][2]
    FSTP float ptr [ESP]                ; 0050c7e7
    FLD float ptr [ESP]                 ; 0050c7ea
    FDIVR double ptr [0x00635a45]       ; 0050c7ed | g_Fixed16Scale
    FLD float ptr [ESP + 0x48]          ; 0050c7f3
    FLD ST0                             ; 0050c7f7
    FMUL float ptr [ESP + 0x40]         ; 0050c7f9
    FLD float ptr [ESP + 0x34]          ; 0050c7fd
    FLD float ptr [ESP + 0x50]          ; 0050c801
    FMUL ST1                            ; 0050c805
    FLD ST3                             ; 0050c807
    FMULP ST2                           ; 0050c809
    FXCH ST3                            ; 0050c80b
    FMUL float ptr [ESP + 0x3c]         ; 0050c80d
    FLD float ptr [ESP + 0x50]          ; 0050c811
    FMUL float ptr [ESP + 0x38]         ; 0050c815
    FLD float ptr [ESP + 0x4c]          ; 0050c819
    FXCH                                ; 0050c81d
    FSUBP ST4,ST0                       ; 0050c81f
    FMUL float ptr [ESP + 0x3c]         ; 0050c821
    FXCH ST3                            ; 0050c825
    FCHS                                ; 0050c827
    FSTP float ptr [ESP + 0x8]          ; 0050c829
    FLD float ptr [ESP + 0x4c]          ; 0050c82d
    FMUL float ptr [ESP + 0x44]         ; 0050c831
    FLD float ptr [ESP + 0x50]          ; 0050c835
    FMUL float ptr [ESP + 0x44]         ; 0050c839
    FXCH ST4                            ; 0050c83d
    FSUBP ST5,ST0                       ; 0050c83f
    FLD float ptr [ESP + 0x2c]          ; 0050c841
    FXCH ST6                            ; 0050c845
    FSTP float ptr [ESP]                ; 0050c847
    FXCH ST5                            ; 0050c84a
    FMUL float ptr [ESP]                ; 0050c84c
    FLD float ptr [ESP + 0x24]          ; 0050c84f
    FXCH ST6                            ; 0050c853
    FSUBP ST3,ST0                       ; 0050c855
    FXCH ST5                            ; 0050c857
    FMUL float ptr [ESP]                ; 0050c859
    FXCH ST2                            ; 0050c85c
    FCHS                                ; 0050c85e
    FXCH ST4                            ; 0050c860
    FMUL float ptr [ESP]                ; 0050c862
    FLD float ptr [ESP + 0x20]          ; 0050c865
    FMUL float ptr [ESP]                ; 0050c869
    FXCH ST4                            ; 0050c86c
    FSUBP ST2,ST0                       ; 0050c86e
    FXCH                                ; 0050c870
    FSTP float ptr [ESP + 0x10]         ; 0050c872
    FLD float ptr [ESP + 0x28]          ; 0050c876
    FMUL float ptr [ESP]                ; 0050c87a
    FXCH ST4                            ; 0050c87d
    FMUL float ptr [ESP]                ; 0050c87f
    FLD float ptr [ESP + 0x30]          ; 0050c882
    FMUL float ptr [ESP]                ; 0050c886
    FXCH ST6                            ; 0050c889
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050c88b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [0x02f0d364]        ; 0050c890 | g_InverseMatrix
    FLD float ptr [ESP + 0x8]           ; 0050c896
    FMUL float ptr [ESP]                ; 0050c89a
    FXCH ST3                            ; 0050c89d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050c89f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [0x02f0d368]        ; 0050c8a4 | g_InverseMatrix[0][1]
    FLD float ptr [ESP + 0x10]          ; 0050c8aa
    FMUL float ptr [ESP]                ; 0050c8ae
    FXCH ST2                            ; 0050c8b1
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050c8b3
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST4                            ; 0050c8b8
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050c8ba
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST5                            ; 0050c8bf
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050c8c1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0050c8c6
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050c8c8
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST6                            ; 0050c8cd
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050c8cf
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 0050c8d4
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050c8d6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 0050c8db
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050c8dd
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST4                            ; 0050c8e2
    FISTP dword ptr [0x02f0d36c]        ; 0050c8e4 | g_InverseMatrix[0][2]
    FXCH ST4                            ; 0050c8ea
    FISTP dword ptr [0x02f0d370]        ; 0050c8ec | g_InverseMatrix[1][0]
    FXCH ST3                            ; 0050c8f2
    FISTP dword ptr [0x02f0d374]        ; 0050c8f4 | g_InverseMatrix[1][1]
    FXCH ST3                            ; 0050c8fa
    FISTP dword ptr [0x02f0d378]        ; 0050c8fc | g_InverseMatrix[1][2]
    FXCH ST2                            ; 0050c902
    FISTP dword ptr [0x02f0d37c]        ; 0050c904 | g_InverseMatrix[2][0]
    FISTP dword ptr [0x02f0d380]        ; 0050c90a | g_InverseMatrix[2][1]
    FISTP dword ptr [0x02f0d384]        ; 0050c910 | g_InverseMatrix[2][2]
    MOV ESP,EBP                         ; 0050c916
    POP EBP                             ; 0050c918
    RET                                 ; 0050c919

