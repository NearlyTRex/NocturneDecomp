; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dtri_cpp_rayTriangleIntersection_FUN_0049a800(CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   triangle
; CVector3f *      Stack[0x8]:4   rayOrigin
; CVector3f *      Stack[0xc]:4   rayDirection
; Local Variables:
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0 at 004783eb
;   core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 at 0049b633
;   core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00509330 at 005093fc
;   core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0 at 0059cd29
;   core_stairs.cpp_CStairs_customRayIntersect_FUN_005ba590 at 005ba5d6
;   core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740 at 005eb803
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a800
        ;   Label: core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
    PUSH EBP                            ; 0049a801
    MOV EBP,ESP                         ; 0049a802
    SUB ESP,0x3c                        ; 0049a804
    AND ESP,0xfffffff8                  ; 0049a807
    MOV EDX,dword ptr [EBP + 0xc]       ; 0049a80a
    MOV EBX,dword ptr [EBP + 0x10]      ; 0049a80d
    MOV ECX,dword ptr [EBP + 0x14]      ; 0049a810
    FLD float ptr [EDX + 0x28]          ; 0049a813
    FMUL float ptr [ECX + 0x4]          ; 0049a816
    FLD float ptr [EDX + 0x24]          ; 0049a819
    FMUL float ptr [ECX]                ; 0049a81c
    FADDP                               ; 0049a81e
    FLD float ptr [EDX + 0x2c]          ; 0049a820
    FMUL float ptr [ECX + 0x8]          ; 0049a823
    FADDP                               ; 0049a826
    FST float ptr [ESP + 0x8]           ; 0049a828
    FLDZ                                ; 0049a82c
    FCOMPP                              ; 0049a82e
    FNSTSW AX                           ; 0049a830
    SAHF                                ; 0049a832
    JNC 0x0049a989                      ; 0049a833
        ;   XREF to: 0049a989 (CONDITIONAL_JUMP)  ; LAB_0049a989
    FLD float ptr [EDX + 0x24]          ; 0049a839
    FMUL float ptr [EBX]                ; 0049a83c
    FADD float ptr [EDX + 0x30]         ; 0049a83e
    FLD float ptr [EDX + 0x28]          ; 0049a841
    FMUL float ptr [EBX + 0x4]          ; 0049a844
    FADDP                               ; 0049a847
    FLD float ptr [EDX + 0x2c]          ; 0049a849
    FMUL float ptr [EBX + 0x8]          ; 0049a84c
    FADDP                               ; 0049a84f
    FCHS                                ; 0049a851
    FST float ptr [ESP + 0xc]           ; 0049a853
    FLDZ                                ; 0049a857
    FCOMPP                              ; 0049a859
    FNSTSW AX                           ; 0049a85b
    SAHF                                ; 0049a85d
    JA 0x0049a989                       ; 0049a85e
        ;   XREF to: 0049a989 (CONDITIONAL_JUMP)  ; LAB_0049a989
    FLD float ptr [ESP + 0xc]           ; 0049a864
    FCOMP float ptr [ESP + 0x8]         ; 0049a868
    FNSTSW AX                           ; 0049a86c
    SAHF                                ; 0049a86e
    JA 0x0049a989                       ; 0049a86f
        ;   XREF to: 0049a989 (CONDITIONAL_JUMP)  ; LAB_0049a989
    FLD float ptr [ESP + 0xc]           ; 0049a875
    FDIV float ptr [ESP + 0x8]          ; 0049a879
    FST float ptr [ESP + 0xc]           ; 0049a87d
    FMUL float ptr [ECX]                ; 0049a881
    FADD float ptr [EBX]                ; 0049a883
    FLD float ptr [ESP + 0xc]           ; 0049a885
    FXCH                                ; 0049a889
    FSTP float ptr [ESP + 0x10]         ; 0049a88b
    FMUL float ptr [ECX + 0x4]          ; 0049a88f
    FADD float ptr [EBX + 0x4]          ; 0049a892
    FLD float ptr [ESP + 0xc]           ; 0049a895
    FXCH                                ; 0049a899
    FSTP float ptr [ESP + 0x14]         ; 0049a89b
    FMUL float ptr [ECX + 0x8]          ; 0049a89f
    FADD float ptr [EBX + 0x8]          ; 0049a8a2
    FSTP float ptr [ESP + 0x18]         ; 0049a8a5
    MOV ECX,dword ptr [EDX + 0x34]      ; 0049a8a9
    CMP ECX,0x1                         ; 0049a8ac
    JNC 0x0049a9f3                      ; 0049a8af
        ;   XREF to: 0049a9f3 (CONDITIONAL_JUMP)  ; LAB_0049a9f3
    TEST ECX,ECX                        ; 0049a8b5
    JNZ 0x0049a90b                      ; 0049a8b7
        ;   XREF to: 0049a90b (CONDITIONAL_JUMP)  ; LAB_0049a90b
    FLD float ptr [ESP + 0x14]          ; 0049a8b9
    FLD float ptr [ESP + 0x18]          ; 0049a8bd
    FLD float ptr [EDX + 0x10]          ; 0049a8c1
    FLD float ptr [EDX + 0x1c]          ; 0049a8c4
    FLD float ptr [EDX + 0x14]          ; 0049a8c7
    FLD float ptr [EDX + 0x20]          ; 0049a8ca
    FXCH ST5                            ; 0049a8cd
    FSUB float ptr [EDX + 0x4]          ; 0049a8cf
    FXCH ST3                            ; 0049a8d2
    FSUB float ptr [EDX + 0x4]          ; 0049a8d4
    FXCH ST2                            ; 0049a8d7
    FSUB float ptr [EDX + 0x4]          ; 0049a8d9
    FXCH ST4                            ; 0049a8dc
        ;   Label: LAB_0049a8dc
    FSUB float ptr [EDX + 0x8]          ; 0049a8de
    FXCH                                ; 0049a8e1
    FSUB float ptr [EDX + 0x8]          ; 0049a8e3
    FXCH ST5                            ; 0049a8e6
    FSUB float ptr [EDX + 0x8]          ; 0049a8e8
    FXCH ST2                            ; 0049a8eb
        ;   Label: LAB_0049a8eb
    FSTP float ptr [ESP + 0x24]         ; 0049a8ed
    FXCH ST3                            ; 0049a8f1
    FSTP float ptr [ESP + 0x20]         ; 0049a8f3
    FXCH ST2                            ; 0049a8f7
    FSTP float ptr [ESP + 0x1c]         ; 0049a8f9
    FXCH ST2                            ; 0049a8fd
    FSTP float ptr [ESP + 0x2c]         ; 0049a8ff
    FSTP float ptr [ESP + 0x28]         ; 0049a903
    FSTP float ptr [ESP + 0x34]         ; 0049a907
    FLD float ptr [ESP + 0x28]          ; 0049a90b
        ;   Label: LAB_0049a90b
    FLD float ptr [ESP + 0x24]          ; 0049a90f
    FMUL ST1                            ; 0049a913
    FLD float ptr [ESP + 0x20]          ; 0049a915
    FLD float ptr [ESP + 0x2c]          ; 0049a919
    FMUL ST1                            ; 0049a91d
    FSUBP ST2,ST0                       ; 0049a91f
    FLD1                                ; 0049a921
    FDIVRP ST2,ST0                      ; 0049a923
    FLD float ptr [ESP + 0x34]          ; 0049a925
    FMULP ST3                           ; 0049a929
    FMUL float ptr [ESP + 0x1c]         ; 0049a92b
    FSUBP ST2,ST0                       ; 0049a92f
    FSTP float ptr [ESP + 0x38]         ; 0049a931
    FMUL float ptr [ESP + 0x38]         ; 0049a935
    FST float ptr [ESP]                 ; 0049a939
    FLDZ                                ; 0049a93c
    FCOMPP                              ; 0049a93e
    FNSTSW AX                           ; 0049a940
    SAHF                                ; 0049a942
    JA 0x0049a989                       ; 0049a943
        ;   XREF to: 0049a989 (CONDITIONAL_JUMP)  ; LAB_0049a989
    FLD float ptr [ESP + 0x24]          ; 0049a945
    FMUL float ptr [ESP + 0x1c]         ; 0049a949
    FLD float ptr [ESP + 0x2c]          ; 0049a94d
    FMUL float ptr [ESP + 0x34]         ; 0049a951
    FSUBP                               ; 0049a955
    FMUL float ptr [ESP + 0x38]         ; 0049a957
    FST float ptr [ESP + 0x4]           ; 0049a95b
    FLDZ                                ; 0049a95f
    FCOMPP                              ; 0049a961
    FNSTSW AX                           ; 0049a963
    SAHF                                ; 0049a965
    JA 0x0049a989                       ; 0049a966
        ;   XREF to: 0049a989 (CONDITIONAL_JUMP)  ; LAB_0049a989
    FLD float ptr [ESP]                 ; 0049a968
    FADD float ptr [ESP + 0x4]          ; 0049a96b
    FLD1                                ; 0049a96f
    FCOMPP                              ; 0049a971
    FNSTSW AX                           ; 0049a973
    SAHF                                ; 0049a975
    JC 0x0049a989                       ; 0049a976
        ;   XREF to: 0049a989 (CONDITIONAL_JUMP)  ; LAB_0049a989
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049a978
    MOV dword ptr [ESP + 0x30],EDX      ; 0049a97c
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049a980
    MOV ESP,EBP                         ; 0049a984
    POP EBP                             ; 0049a986
    POP EBX                             ; 0049a987
    RET                                 ; 0049a988
    MOV dword ptr [ESP + 0x30],0xbf800000 ; 0049a989
        ;   Label: LAB_0049a989
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049a991
    MOV ESP,EBP                         ; 0049a995
    POP EBP                             ; 0049a997
    POP EBX                             ; 0049a998
    RET                                 ; 0049a999
    FLD float ptr [ESP + 0x10]          ; 0049a99a
        ;   Label: LAB_0049a99a
    FLD float ptr [ESP + 0x18]          ; 0049a99e
    FLD float ptr [EDX + 0xc]           ; 0049a9a2
    FLD float ptr [EDX + 0x18]          ; 0049a9a5
    FLD float ptr [EDX + 0x14]          ; 0049a9a8
    FLD float ptr [EDX + 0x20]          ; 0049a9ab
    FXCH ST5                            ; 0049a9ae
    FSUB float ptr [EDX]                ; 0049a9b0
    FXCH ST3                            ; 0049a9b2
    FSUB float ptr [EDX]                ; 0049a9b4
    FXCH ST2                            ; 0049a9b6
    FSUB float ptr [EDX]                ; 0049a9b8
    JMP 0x0049a8dc                      ; 0049a9ba
        ;   XREF to: 0049a8dc (UNCONDITIONAL_JUMP)  ; LAB_0049a8dc
    FLD float ptr [ESP + 0x10]          ; 0049a9bf
        ;   Label: LAB_0049a9bf
    FLD float ptr [ESP + 0x14]          ; 0049a9c3
    FLD float ptr [EDX + 0xc]           ; 0049a9c7
    FLD float ptr [EDX + 0x18]          ; 0049a9ca
    FLD float ptr [EDX + 0x10]          ; 0049a9cd
    FLD float ptr [EDX + 0x1c]          ; 0049a9d0
    FXCH ST5                            ; 0049a9d3
    FSUB float ptr [EDX]                ; 0049a9d5
    FXCH ST3                            ; 0049a9d7
    FSUB float ptr [EDX]                ; 0049a9d9
    FXCH ST2                            ; 0049a9db
    FSUB float ptr [EDX]                ; 0049a9dd
    FXCH ST4                            ; 0049a9df
    FSUB float ptr [EDX + 0x4]          ; 0049a9e1
    FXCH                                ; 0049a9e4
    FSUB float ptr [EDX + 0x4]          ; 0049a9e6
    FXCH ST5                            ; 0049a9e9
    FSUB float ptr [EDX + 0x4]          ; 0049a9eb
    JMP 0x0049a8eb                      ; 0049a9ee
        ;   XREF to: 0049a8eb (UNCONDITIONAL_JUMP)  ; LAB_0049a8eb
    JBE 0x0049a99a                      ; 0049a9f3
        ;   XREF to: 0049a99a (CONDITIONAL_JUMP)  ; LAB_0049a99a
        ;   Label: LAB_0049a9f3
    CMP ECX,0x2                         ; 0049a9f5
    JZ 0x0049a9bf                       ; 0049a9f8
        ;   XREF to: 0049a9bf (CONDITIONAL_JUMP)  ; LAB_0049a9bf
    JMP 0x0049a90b                      ; 0049a9fa
        ;   XREF to: 0049a90b (UNCONDITIONAL_JUMP)  ; LAB_0049a90b

