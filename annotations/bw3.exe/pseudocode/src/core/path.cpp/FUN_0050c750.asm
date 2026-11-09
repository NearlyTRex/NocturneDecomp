; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_FUN_0050c750(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,int param_7)
;
;
; Referenced Globals:
;   undefined4 DAT_005cb8ec
;   undefined4 DAT_005cb8f4
;   undefined4 DAT_005f2afc
;   undefined4 g_CDemonRaytraceInstance.field20_0x14
;   undefined4 g_CDemonRaytraceInstance.field52_0x34
;   undefined4 g_CDemonRaytraceInstance.field56_0x38
;   undefined4 g_CDemonRaytraceInstance.field60_0x3c
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046c5e0
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0050c750
        ;   Label: core_path.cpp_FUN_0050c750
    SUB ESP,0x30                        ; 0050c751
    MOV EBP,dword ptr [ESP + 0x50]      ; 0050c754
    PUSH EDI                            ; 0050c758
    PUSH ESI                            ; 0050c759
    PUSH EBX                            ; 0050c75a
    FLD float ptr [0x005cb8ec]          ; 0050c75b | DAT_005cb8ec
    FLD float ptr [0x0203b3b0]          ; 0050c761 | g_CDemonRaytraceInstance.field52_0x34
    FMUL ST1                            ; 0050c767
    FLD float ptr [0x0203b3b4]          ; 0050c769 | g_CDemonRaytraceInstance.field56_0x38
    FMUL ST2                            ; 0050c76f
    FLD float ptr [0x0203b3b8]          ; 0050c771 | g_CDemonRaytraceInstance.field60_0x3c
    FMULP ST3                           ; 0050c777
    FLD double ptr [0x005cb8f4]         ; 0050c779 | DAT_005cb8f4
    FLD float ptr [0x0203b390]          ; 0050c77f | g_CDemonRaytraceInstance.field20_0x14
    FMUL ST1                            ; 0050c785
    LEA EDI,[ESP + 0xc]                 ; 0050c787
    LEA ESI,[ESP + 0x18]                ; 0050c78b
    FXCH ST3                            ; 0050c78f
    FSTP float ptr [ESP + 0x18]         ; 0050c791
    FXCH                                ; 0050c795
    FSTP float ptr [ESP + 0x1c]         ; 0050c797
    FXCH ST2                            ; 0050c79b
    FSTP float ptr [ESP + 0x20]         ; 0050c79d
    MOVSD ES:EDI,ESI                    ; 0050c7a1
    MOVSD ES:EDI,ESI                    ; 0050c7a2
    MOVSD ES:EDI,ESI                    ; 0050c7a3
    FILD dword ptr [ESP + 0x44]         ; 0050c7a4
    FMUL float ptr [ESP + 0xc]          ; 0050c7a8
    FILD dword ptr [ESP + 0x48]         ; 0050c7ac
    FMUL float ptr [ESP + 0x10]         ; 0050c7b0
    FILD dword ptr [ESP + 0x4c]         ; 0050c7b4
    FMUL float ptr [ESP + 0x14]         ; 0050c7b8
    MOV EDX,dword ptr [ESP + 0x50]      ; 0050c7bc
    MOV ECX,dword ptr [ESP + 0x54]      ; 0050c7c0
    MOV EBX,dword ptr [ESP + 0x58]      ; 0050c7c4
    SHL EDX,0x8                         ; 0050c7c8
    MOV EAX,[0x005f2afc]                ; 0050c7cb | DAT_005f2afc
    MOV dword ptr [ESP + 0x50],EDX      ; 0050c7d0
    LEA EDX,[ESP + 0x24]                ; 0050c7d4
    SHL ECX,0x8                         ; 0050c7d8
    PUSH EDX                            ; 0050c7db
    FXCH ST2                            ; 0050c7dc
    CALL crt_math.c_round_FUN_005a3120  ; 0050c7de
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 0050c7e3
    CALL crt_math.c_round_FUN_005a3120  ; 0050c7e5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST3                            ; 0050c7ea
    FADDP                               ; 0050c7ec
    FXCH                                ; 0050c7ee
    FISTP dword ptr [ESP + 0x28]        ; 0050c7f0
    FADDP ST2,ST0                       ; 0050c7f4
    FISTP dword ptr [ESP + 0x30]        ; 0050c7f6
    CALL crt_math.c_round_FUN_005a3120  ; 0050c7fa
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x2c]        ; 0050c7ff
    MOV EAX,dword ptr [EAX]             ; 0050c803
    SHL EBX,0x8                         ; 0050c805
    PUSH EAX                            ; 0050c808
    MOV dword ptr [ESP + 0x5c],ECX      ; 0050c809
    MOV dword ptr [ESP + 0x60],EBX      ; 0050c80d
    CALL engine_special.cpp_FUN_005632a3 ; 0050c811
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050c816
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050c819
    MOV dword ptr [ESP + 0x38],EAX      ; 0050c81d
    MOV EDX,dword ptr [0x005f2afc]      ; 0050c821 | DAT_005f2afc
    FILD dword ptr [ESP + 0x38]         ; 0050c827
    LEA EAX,[ESP + 0x24]                ; 0050c82b
    FLD ST0                             ; 0050c82f
    FADD float ptr [ESP + 0xc]          ; 0050c831
    PUSH EAX                            ; 0050c835
    FSTP ST1                            ; 0050c836
    CALL crt_math.c_round_FUN_005a3120  ; 0050c838
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x28]        ; 0050c83d
    MOV EAX,dword ptr [EDX]             ; 0050c841
    ADD EAX,0x30                        ; 0050c843
    PUSH EAX                            ; 0050c846
    CALL engine_special.cpp_FUN_005632a3 ; 0050c847
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050c84c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0050c84f
    MOV dword ptr [ESP + 0x38],EAX      ; 0050c853
    MOV EDX,dword ptr [0x005f2afc]      ; 0050c857 | DAT_005f2afc
    FILD dword ptr [ESP + 0x38]         ; 0050c85d
    LEA EAX,[ESP + 0x24]                ; 0050c861
    FLD ST0                             ; 0050c865
    FADD float ptr [ESP + 0x14]         ; 0050c867
    PUSH EAX                            ; 0050c86b
    FSTP ST1                            ; 0050c86c
    CALL crt_math.c_round_FUN_005a3120  ; 0050c86e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x30]        ; 0050c873
    MOV EAX,dword ptr [EDX]             ; 0050c877
    ADD EAX,0x60                        ; 0050c879
    PUSH EAX                            ; 0050c87c
    CALL engine_special.cpp_FUN_005632a3 ; 0050c87d
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050c882
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050c885
    MOV dword ptr [ESP + 0x38],EAX      ; 0050c889
    MOV EDX,dword ptr [0x005f2afc]      ; 0050c88d | DAT_005f2afc
    FILD dword ptr [ESP + 0x38]         ; 0050c893
    LEA EAX,[ESP + 0x24]                ; 0050c897
    FLD ST0                             ; 0050c89b
    FSUB float ptr [ESP + 0xc]          ; 0050c89d
    PUSH EAX                            ; 0050c8a1
    FSTP ST1                            ; 0050c8a2
    CALL crt_math.c_round_FUN_005a3120  ; 0050c8a4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x28]        ; 0050c8a9
    MOV EAX,dword ptr [EDX]             ; 0050c8ad
    ADD EAX,0x90                        ; 0050c8af
    PUSH EAX                            ; 0050c8b4
    SHL EBP,0x8                         ; 0050c8b5
    CALL engine_special.cpp_FUN_005632a3 ; 0050c8b8
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050c8bd
    POP EBX                             ; 0050c8c0
    POP ESI                             ; 0050c8c1
    POP EDI                             ; 0050c8c2
    MOV EAX,[0x005f2afc]                ; 0050c8c3 | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 0050c8c8
    MOV ECX,dword ptr [ESP + 0x44]      ; 0050c8ca
    MOV dword ptr [EDX + 0x20],ECX      ; 0050c8ce
    MOV EDX,dword ptr [EAX]             ; 0050c8d1
    MOV ECX,dword ptr [ESP + 0x48]      ; 0050c8d3
    MOV dword ptr [EDX + 0x24],ECX      ; 0050c8d7
    MOV EDX,dword ptr [EAX]             ; 0050c8da
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0050c8dc
    MOV dword ptr [EDX + 0x28],ECX      ; 0050c8e0
    MOV EDX,dword ptr [EAX]             ; 0050c8e3
    MOV dword ptr [EDX + 0x2c],EBP      ; 0050c8e5
    MOV EDX,dword ptr [EAX]             ; 0050c8e8
    MOV ECX,dword ptr [ESP + 0x44]      ; 0050c8ea
    MOV dword ptr [EDX + 0x50],ECX      ; 0050c8ee
    MOV EDX,dword ptr [EAX]             ; 0050c8f1
    MOV ECX,dword ptr [ESP + 0x48]      ; 0050c8f3
    MOV dword ptr [EDX + 0x54],ECX      ; 0050c8f7
    MOV EDX,dword ptr [EAX]             ; 0050c8fa
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0050c8fc
    MOV dword ptr [EDX + 0x58],ECX      ; 0050c900
    MOV EDX,dword ptr [EAX]             ; 0050c903
    MOV dword ptr [EDX + 0x5c],EBP      ; 0050c905
    MOV EDX,dword ptr [EAX]             ; 0050c908
    MOV ECX,dword ptr [ESP + 0x44]      ; 0050c90a
    MOV dword ptr [EDX + 0x80],ECX      ; 0050c90e
    MOV EDX,dword ptr [EAX]             ; 0050c914
    MOV ECX,dword ptr [ESP + 0x48]      ; 0050c916
    MOV dword ptr [EDX + 0x84],ECX      ; 0050c91a
    MOV EDX,dword ptr [EAX]             ; 0050c920
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0050c922
    MOV dword ptr [EDX + 0x88],ECX      ; 0050c926
    MOV EDX,dword ptr [EAX]             ; 0050c92c
    MOV dword ptr [EDX + 0x8c],EBP      ; 0050c92e
    MOV EDX,dword ptr [EAX]             ; 0050c934
    MOV ECX,dword ptr [ESP + 0x44]      ; 0050c936
    MOV dword ptr [EDX + 0xb0],ECX      ; 0050c93a
    MOV EDX,dword ptr [EAX]             ; 0050c940
    MOV ECX,dword ptr [ESP + 0x48]      ; 0050c942
    MOV dword ptr [EDX + 0xb4],ECX      ; 0050c946
    MOV EDX,dword ptr [EAX]             ; 0050c94c
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0050c94e
    MOV dword ptr [EDX + 0xb8],ECX      ; 0050c952
    PUSH 0x1ed2a30                      ; 0050c958
    MOV EDX,dword ptr [EAX]             ; 0050c95d
    PUSH EAX                            ; 0050c95f
    MOV dword ptr [EDX + 0xbc],EBP      ; 0050c960
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046c5e0 ; 0050c966
        ;   XREF to: 0046c5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046c5e0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0050c96b
    ADD ESP,0x30                        ; 0050c96e
    POP EBP                             ; 0050c971
    RET                                 ; 0050c972

