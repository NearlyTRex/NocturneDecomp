; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_renderGridQuad_FUN_00513720(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,int param_7)
;
;
; Referenced Globals:
;   undefined4 DAT_005e1829
;   undefined4 DAT_005e1831
;   undefined4 DAT_0060b280
;   undefined4 g_CDemonRaytraceInstance.bbox_min.y
;   undefined4 g_CDemonRaytraceInstance.adjusted_size.x
;   undefined4 g_CDemonRaytraceInstance.adjusted_size.y
;   undefined4 g_CDemonRaytraceInstance.adjusted_size.z
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00513720
        ;   Label: core_path.cpp_renderGridQuad_FUN_00513720
    SUB ESP,0x30                        ; 00513721
    MOV EBP,dword ptr [ESP + 0x50]      ; 00513724
    PUSH EDI                            ; 00513728
    PUSH ESI                            ; 00513729
    PUSH EBX                            ; 0051372a
    FLD float ptr [0x005e1829]          ; 0051372b | DAT_005e1829
    FLD float ptr [0x01fc9c9c]          ; 00513731 | g_CDemonRaytraceInstance.adjusted_size.x
    FMUL ST1                            ; 00513737
    FLD float ptr [0x01fc9ca0]          ; 00513739 | g_CDemonRaytraceInstance.adjusted_size.y
    FMUL ST2                            ; 0051373f
    FLD float ptr [0x01fc9ca4]          ; 00513741 | g_CDemonRaytraceInstance.adjusted_size.z
    FMULP ST3                           ; 00513747
    FLD double ptr [0x005e1831]         ; 00513749 | DAT_005e1831
    FLD float ptr [0x01fc9c7c]          ; 0051374f | g_CDemonRaytraceInstance.bbox_min.y
    FMUL ST1                            ; 00513755
    LEA EDI,[ESP + 0xc]                 ; 00513757
    LEA ESI,[ESP + 0x18]                ; 0051375b
    FXCH ST3                            ; 0051375f
    FSTP float ptr [ESP + 0x18]         ; 00513761
    FXCH                                ; 00513765
    FSTP float ptr [ESP + 0x1c]         ; 00513767
    FXCH ST2                            ; 0051376b
    FSTP float ptr [ESP + 0x20]         ; 0051376d
    MOVSD ES:EDI,ESI                    ; 00513771
    MOVSD ES:EDI,ESI                    ; 00513772
    MOVSD ES:EDI,ESI                    ; 00513773
    FILD dword ptr [ESP + 0x44]         ; 00513774
    FMUL float ptr [ESP + 0xc]          ; 00513778
    FILD dword ptr [ESP + 0x48]         ; 0051377c
    FMUL float ptr [ESP + 0x10]         ; 00513780
    FILD dword ptr [ESP + 0x4c]         ; 00513784
    FMUL float ptr [ESP + 0x14]         ; 00513788
    MOV EDX,dword ptr [ESP + 0x50]      ; 0051378c
    MOV ECX,dword ptr [ESP + 0x54]      ; 00513790
    MOV EBX,dword ptr [ESP + 0x58]      ; 00513794
    SHL EDX,0x8                         ; 00513798
    MOV EAX,[0x0060b280]                ; 0051379b | DAT_0060b280
    MOV dword ptr [ESP + 0x50],EDX      ; 005137a0
    LEA EDX,[ESP + 0x24]                ; 005137a4
    SHL ECX,0x8                         ; 005137a8
    PUSH EDX                            ; 005137ab
    FXCH ST2                            ; 005137ac
    CALL crt_math.c_round_FUN_005b7ff0  ; 005137ae
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 005137b3
    CALL crt_math.c_round_FUN_005b7ff0  ; 005137b5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 005137ba
    FADDP                               ; 005137bc
    FXCH                                ; 005137be
    FISTP dword ptr [ESP + 0x28]        ; 005137c0
    FADDP ST2,ST0                       ; 005137c4
    FISTP dword ptr [ESP + 0x30]        ; 005137c6
    CALL crt_math.c_round_FUN_005b7ff0  ; 005137ca
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x2c]        ; 005137cf
    MOV EAX,dword ptr [EAX]             ; 005137d3
    SHL EBX,0x8                         ; 005137d5
    PUSH EAX                            ; 005137d8
    MOV dword ptr [ESP + 0x5c],ECX      ; 005137d9
    MOV dword ptr [ESP + 0x60],EBX      ; 005137dd
    CALL engine_special.cpp_FUN_0055d723 ; 005137e1
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005137e6
    MOV EAX,dword ptr [ESP + 0x24]      ; 005137e9
    MOV dword ptr [ESP + 0x38],EAX      ; 005137ed
    MOV EDX,dword ptr [0x0060b280]      ; 005137f1 | DAT_0060b280
    FILD dword ptr [ESP + 0x38]         ; 005137f7
    LEA EAX,[ESP + 0x24]                ; 005137fb
    FLD ST0                             ; 005137ff
    FADD float ptr [ESP + 0xc]          ; 00513801
    PUSH EAX                            ; 00513805
    FSTP ST1                            ; 00513806
    CALL crt_math.c_round_FUN_005b7ff0  ; 00513808
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x28]        ; 0051380d
    MOV EAX,dword ptr [EDX]             ; 00513811
    ADD EAX,0x30                        ; 00513813
    PUSH EAX                            ; 00513816
    CALL engine_special.cpp_FUN_0055d723 ; 00513817
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0051381c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0051381f
    MOV dword ptr [ESP + 0x38],EAX      ; 00513823
    MOV EDX,dword ptr [0x0060b280]      ; 00513827 | DAT_0060b280
    FILD dword ptr [ESP + 0x38]         ; 0051382d
    LEA EAX,[ESP + 0x24]                ; 00513831
    FLD ST0                             ; 00513835
    FADD float ptr [ESP + 0x14]         ; 00513837
    PUSH EAX                            ; 0051383b
    FSTP ST1                            ; 0051383c
    CALL crt_math.c_round_FUN_005b7ff0  ; 0051383e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x30]        ; 00513843
    MOV EAX,dword ptr [EDX]             ; 00513847
    ADD EAX,0x60                        ; 00513849
    PUSH EAX                            ; 0051384c
    CALL engine_special.cpp_FUN_0055d723 ; 0051384d
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00513852
    MOV EAX,dword ptr [ESP + 0x24]      ; 00513855
    MOV dword ptr [ESP + 0x38],EAX      ; 00513859
    MOV EDX,dword ptr [0x0060b280]      ; 0051385d | DAT_0060b280
    FILD dword ptr [ESP + 0x38]         ; 00513863
    LEA EAX,[ESP + 0x24]                ; 00513867
    FLD ST0                             ; 0051386b
    FSUB float ptr [ESP + 0xc]          ; 0051386d
    PUSH EAX                            ; 00513871
    FSTP ST1                            ; 00513872
    CALL crt_math.c_round_FUN_005b7ff0  ; 00513874
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x28]        ; 00513879
    MOV EAX,dword ptr [EDX]             ; 0051387d
    ADD EAX,0x90                        ; 0051387f
    PUSH EAX                            ; 00513884
    SHL EBP,0x8                         ; 00513885
    CALL engine_special.cpp_FUN_0055d723 ; 00513888
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0051388d
    POP EBX                             ; 00513890
    POP ESI                             ; 00513891
    POP EDI                             ; 00513892
    MOV EAX,[0x0060b280]                ; 00513893 | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 00513898
    MOV ECX,dword ptr [ESP + 0x44]      ; 0051389a
    MOV dword ptr [EDX + 0x20],ECX      ; 0051389e
    MOV EDX,dword ptr [EAX]             ; 005138a1
    MOV ECX,dword ptr [ESP + 0x48]      ; 005138a3
    MOV dword ptr [EDX + 0x24],ECX      ; 005138a7
    MOV EDX,dword ptr [EAX]             ; 005138aa
    MOV ECX,dword ptr [ESP + 0x4c]      ; 005138ac
    MOV dword ptr [EDX + 0x28],ECX      ; 005138b0
    MOV EDX,dword ptr [EAX]             ; 005138b3
    MOV dword ptr [EDX + 0x2c],EBP      ; 005138b5
    MOV EDX,dword ptr [EAX]             ; 005138b8
    MOV ECX,dword ptr [ESP + 0x44]      ; 005138ba
    MOV dword ptr [EDX + 0x50],ECX      ; 005138be
    MOV EDX,dword ptr [EAX]             ; 005138c1
    MOV ECX,dword ptr [ESP + 0x48]      ; 005138c3
    MOV dword ptr [EDX + 0x54],ECX      ; 005138c7
    MOV EDX,dword ptr [EAX]             ; 005138ca
    MOV ECX,dword ptr [ESP + 0x4c]      ; 005138cc
    MOV dword ptr [EDX + 0x58],ECX      ; 005138d0
    MOV EDX,dword ptr [EAX]             ; 005138d3
    MOV dword ptr [EDX + 0x5c],EBP      ; 005138d5
    MOV EDX,dword ptr [EAX]             ; 005138d8
    MOV ECX,dword ptr [ESP + 0x44]      ; 005138da
    MOV dword ptr [EDX + 0x80],ECX      ; 005138de
    MOV EDX,dword ptr [EAX]             ; 005138e4
    MOV ECX,dword ptr [ESP + 0x48]      ; 005138e6
    MOV dword ptr [EDX + 0x84],ECX      ; 005138ea
    MOV EDX,dword ptr [EAX]             ; 005138f0
    MOV ECX,dword ptr [ESP + 0x4c]      ; 005138f2
    MOV dword ptr [EDX + 0x88],ECX      ; 005138f6
    MOV EDX,dword ptr [EAX]             ; 005138fc
    MOV dword ptr [EDX + 0x8c],EBP      ; 005138fe
    MOV EDX,dword ptr [EAX]             ; 00513904
    MOV ECX,dword ptr [ESP + 0x44]      ; 00513906
    MOV dword ptr [EDX + 0xb0],ECX      ; 0051390a
    MOV EDX,dword ptr [EAX]             ; 00513910
    MOV ECX,dword ptr [ESP + 0x48]      ; 00513912
    MOV dword ptr [EDX + 0xb4],ECX      ; 00513916
    MOV EDX,dword ptr [EAX]             ; 0051391c
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0051391e
    MOV dword ptr [EDX + 0xb8],ECX      ; 00513922
    PUSH 0x1e613f0                      ; 00513928
    MOV EDX,dword ptr [EAX]             ; 0051392d
    PUSH EAX                            ; 0051392f
    MOV dword ptr [EDX + 0xbc],EBP      ; 00513930
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00 ; 00513936
        ;   XREF to: 0046aa00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0051393b
    ADD ESP,0x30                        ; 0051393e
    POP EBP                             ; 00513941
    RET                                 ; 00513942

