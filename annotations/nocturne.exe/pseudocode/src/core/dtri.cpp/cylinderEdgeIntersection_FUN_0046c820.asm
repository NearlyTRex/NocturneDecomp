; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dtri_cpp_cylinderEdgeIntersection_FUN_0046c820(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0046cb00 at 0046cb29
;   core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0 at 0046ce06
;
; Referenced Globals:
;   undefined4 DAT_0057e45e
;   undefined4 DAT_0057e462
;   undefined4 DAT_0057e466
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c820
        ;   Label: core_dtri.cpp_cylinderEdgeIntersection_FUN_0046c820
    PUSH EBP                            ; 0046c821
    MOV EBP,ESP                         ; 0046c822
    SUB ESP,0x58                        ; 0046c824
    AND ESP,0xfffffff8                  ; 0046c827
    MOV EDX,dword ptr [EBP + 0xc]       ; 0046c82a
    FLD float ptr [EDX + 0x44]          ; 0046c82d
    FLD float ptr [EDX + 0x48]          ; 0046c830
    FSUB float ptr [EDX + 0x40]         ; 0046c833
    FXCH                                ; 0046c836
    FSUB float ptr [EDX + 0x3c]         ; 0046c838
    FXCH                                ; 0046c83b
    FST float ptr [ESP + 0x1c]          ; 0046c83d
    FCHS                                ; 0046c841
    FST float ptr [ESP + 0x50]          ; 0046c843
    FMUL float ptr [ESP + 0x50]         ; 0046c847
    FXCH                                ; 0046c84b
    FST float ptr [ESP + 0x20]          ; 0046c84d
    FMUL float ptr [ESP + 0x20]         ; 0046c851
    FADDP                               ; 0046c855
    FLDZ                                ; 0046c857
    FXCH                                ; 0046c859
    FSTP double ptr [ESP + 0x10]        ; 0046c85b
    FCOMP double ptr [ESP + 0x10]       ; 0046c85f
    FNSTSW AX                           ; 0046c863
    SAHF                                ; 0046c865
    JNC 0x0046ca80                      ; 0046c866
        ;   XREF to: 0046ca80 (CONDITIONAL_JUMP)  ; LAB_0046ca80
    FLD double ptr [ESP + 0x10]         ; 0046c86c
    FSQRT                               ; 0046c870
    FLD float ptr [ESP + 0x50]          ; 0046c872
    FLD1                                ; 0046c876
    FDIVRP ST2,ST0                      ; 0046c878
    FMUL ST1                            ; 0046c87a
    FLD float ptr [EDX + 0x10]          ; 0046c87c
    FSUB float ptr [EDX + 0x3c]         ; 0046c87f
    FXCH                                ; 0046c882
    FSTP float ptr [ESP + 0x50]         ; 0046c884
    FMUL float ptr [ESP + 0x50]         ; 0046c888
    FLD float ptr [ESP + 0x20]          ; 0046c88c
    FMULP ST2                           ; 0046c890
    FLD float ptr [EDX + 0x14]          ; 0046c892
    FSUB float ptr [EDX + 0x40]         ; 0046c895
    FXCH ST2                            ; 0046c898
    FSTP float ptr [ESP + 0x4c]         ; 0046c89a
    FXCH                                ; 0046c89e
    FMUL float ptr [ESP + 0x4c]         ; 0046c8a0
    FADDP                               ; 0046c8a4
    FLDZ                                ; 0046c8a6
    FCOMPP                              ; 0046c8a8
    FNSTSW AX                           ; 0046c8aa
    SAHF                                ; 0046c8ac
    JC 0x0046ca87                       ; 0046c8ad
        ;   XREF to: 0046ca87 (CONDITIONAL_JUMP)  ; LAB_0046ca87
    FLD float ptr [EDX + 0x18]          ; 0046c8b3
        ;   Label: LAB_0046c8b3
    FMUL float ptr [ESP + 0x50]         ; 0046c8b6
    FLD float ptr [EDX + 0x1c]          ; 0046c8ba
    FMUL float ptr [ESP + 0x4c]         ; 0046c8bd
    FADDP                               ; 0046c8c1
    FST float ptr [ESP + 0x28]          ; 0046c8c3
    FLDZ                                ; 0046c8c7
    FCOMPP                              ; 0046c8c9
    FNSTSW AX                           ; 0046c8cb
    SAHF                                ; 0046c8cd
    JNC 0x0046ca80                      ; 0046c8ce
        ;   XREF to: 0046ca80 (CONDITIONAL_JUMP)  ; LAB_0046ca80
    FLD float ptr [ESP + 0x50]          ; 0046c8d4
    FLD float ptr [EDX + 0x3c]          ; 0046c8d8
    FMUL ST1                            ; 0046c8db
    FLD float ptr [EDX + 0x10]          ; 0046c8dd
    FMULP ST2                           ; 0046c8e0
    FLD float ptr [ESP + 0x4c]          ; 0046c8e2
    FLD float ptr [EDX + 0x40]          ; 0046c8e6
    FMUL ST1                            ; 0046c8e9
    FLD float ptr [EDX + 0x14]          ; 0046c8eb
    FMULP ST2                           ; 0046c8ee
    FADDP ST2,ST0                       ; 0046c8f0
    FADDP ST2,ST0                       ; 0046c8f2
    FSTP float ptr [ESP + 0x40]         ; 0046c8f4
    FCOMP float ptr [ESP + 0x40]        ; 0046c8f8
    FNSTSW AX                           ; 0046c8fc
    SAHF                                ; 0046c8fe
    JA 0x0046ca80                       ; 0046c8ff
        ;   XREF to: 0046ca80 (CONDITIONAL_JUMP)  ; LAB_0046ca80
    FLD float ptr [ESP + 0x50]          ; 0046c905
    FLD ST0                             ; 0046c909
    FMUL float ptr [EDX + 0x20]         ; 0046c90b
    FLD float ptr [ESP + 0x4c]          ; 0046c90e
    FLD ST0                             ; 0046c912
    FMUL float ptr [EDX + 0x20]         ; 0046c914
    FXCH ST2                            ; 0046c917
    FADD float ptr [EDX + 0x10]         ; 0046c919
    FXCH ST2                            ; 0046c91c
    FADD float ptr [EDX + 0x14]         ; 0046c91e
    FXCH ST2                            ; 0046c921
    FST float ptr [ESP + 0x3c]          ; 0046c923
    FMULP ST3                           ; 0046c927
    FXCH                                ; 0046c929
    FST float ptr [ESP + 0x44]          ; 0046c92b
    FMULP                               ; 0046c92f
    FADDP                               ; 0046c931
    FSUBR float ptr [ESP + 0x40]        ; 0046c933
    FST float ptr [ESP + 0x24]          ; 0046c937
    FCOMP float ptr [ESP + 0x28]        ; 0046c93b
    FNSTSW AX                           ; 0046c93f
    SAHF                                ; 0046c941
    JA 0x0046ca80                       ; 0046c942
        ;   XREF to: 0046ca80 (CONDITIONAL_JUMP)  ; LAB_0046ca80
    FLD float ptr [ESP + 0x24]          ; 0046c948
    FDIV float ptr [ESP + 0x28]         ; 0046c94c
    FST float ptr [ESP + 0x24]          ; 0046c950
    FCOMP float ptr [EDX]               ; 0046c954
    FNSTSW AX                           ; 0046c956
    SAHF                                ; 0046c958
    JNC 0x0046ca80                      ; 0046c959
        ;   XREF to: 0046ca80 (CONDITIONAL_JUMP)  ; LAB_0046ca80
    FLD float ptr [ESP + 0x20]          ; 0046c95f
    FABS                                ; 0046c963
    FLD float ptr [ESP + 0x1c]          ; 0046c965
    FABS                                ; 0046c969
    FLD float ptr [ESP + 0x24]          ; 0046c96b
    FLD float ptr [EDX + 0x18]          ; 0046c96f
    FMUL ST1                            ; 0046c972
    FLD float ptr [EDX + 0x1c]          ; 0046c974
    FMULP ST2                           ; 0046c977
    FADD float ptr [ESP + 0x3c]         ; 0046c979
    FXCH                                ; 0046c97d
    FADD float ptr [ESP + 0x44]         ; 0046c97f
    FXCH                                ; 0046c983
    FSTP float ptr [EDX + 0x54]         ; 0046c985
    FSTP float ptr [EDX + 0x58]         ; 0046c988
    FCOMPP                              ; 0046c98b
    FNSTSW AX                           ; 0046c98d
    SAHF                                ; 0046c98f
    JNC 0x0046caa2                      ; 0046c990
        ;   XREF to: 0046caa2 (CONDITIONAL_JUMP)  ; LAB_0046caa2
    FLD float ptr [EDX + 0x54]          ; 0046c996
    FSUB float ptr [EDX + 0x3c]         ; 0046c999
    FDIV float ptr [ESP + 0x20]         ; 0046c99c
    FSTP float ptr [EDX + 0x50]         ; 0046c9a0
        ;   Label: LAB_0046c9a0
    FLDZ                                ; 0046c9a3
    FLD float ptr [EDX + 0x50]          ; 0046c9a5
    FSTP double ptr [ESP + 0x8]         ; 0046c9a8
    FCOMP double ptr [ESP + 0x8]        ; 0046c9ac
    FNSTSW AX                           ; 0046c9b0
    SAHF                                ; 0046c9b2
    JBE 0x0046cab1                      ; 0046c9b3
        ;   XREF to: 0046cab1 (CONDITIONAL_JUMP)  ; LAB_0046cab1
    MOV dword ptr [EDX + 0x50],0x0      ; 0046c9b9
    FLD float ptr [EDX + 0x3c]          ; 0046c9c0
    MOV EAX,dword ptr [EDX + 0x40]      ; 0046c9c3
    MOV dword ptr [EDX + 0x58],EAX      ; 0046c9c6
        ;   Label: LAB_0046c9c6
    FSTP float ptr [EDX + 0x54]         ; 0046c9c9
    FLD float ptr [EDX + 0x18]          ; 0046c9cc
    FMUL ST0                            ; 0046c9cf
    FLD float ptr [EDX + 0x18]          ; 0046c9d1
    FLD float ptr [EDX + 0x54]          ; 0046c9d4
    FSUB float ptr [EDX + 0x10]         ; 0046c9d7
    FXCH                                ; 0046c9da
    FMUL ST1                            ; 0046c9dc
    FLD float ptr [EDX + 0x1c]          ; 0046c9de
    FMUL ST0                            ; 0046c9e1
    FLD ST2                             ; 0046c9e3
    FMULP ST3                           ; 0046c9e5
    FLD float ptr [EDX + 0x58]          ; 0046c9e7
    FSUB float ptr [EDX + 0x14]         ; 0046c9ea
    FLD float ptr [EDX + 0x1c]          ; 0046c9ed
    FMUL ST1                            ; 0046c9f0
    FLD ST1                             ; 0046c9f2
    FXCH ST3                            ; 0046c9f4
    FADDP ST6,ST0                       ; 0046c9f6
    FXCH ST2                            ; 0046c9f8
    FMULP                               ; 0046c9fa
    FXCH ST4                            ; 0046c9fc
    FST float ptr [ESP + 0x38]          ; 0046c9fe
    FMUL float ptr [0x0057e462]         ; 0046ca02 | DAT_0057e462
    FXCH ST4                            ; 0046ca08
    FADDP ST3,ST0                       ; 0046ca0a
    FADDP                               ; 0046ca0c
    FLD float ptr [EDX + 0x20]          ; 0046ca0e
    FMUL ST0                            ; 0046ca11
    FXCH                                ; 0046ca13
    FMUL float ptr [0x0057e45e]         ; 0046ca15 | DAT_0057e45e
    FXCH                                ; 0046ca1b
    FSUBP ST2,ST0                       ; 0046ca1d
    FXCH ST2                            ; 0046ca1f
    FMULP                               ; 0046ca21
    FXCH                                ; 0046ca23
    FST float ptr [ESP + 0x48]          ; 0046ca25
    FMUL float ptr [ESP + 0x48]         ; 0046ca29
    FSUBRP                              ; 0046ca2d
    FLDZ                                ; 0046ca2f
    FXCH                                ; 0046ca31
    FSTP float ptr [ESP + 0x18]         ; 0046ca33
    FCOMP float ptr [ESP + 0x18]        ; 0046ca37
    FNSTSW AX                           ; 0046ca3b
    SAHF                                ; 0046ca3d
    JA 0x0046ca80                       ; 0046ca3e
        ;   XREF to: 0046ca80 (CONDITIONAL_JUMP)  ; LAB_0046ca80
    FLD float ptr [ESP + 0x48]          ; 0046ca40
    FCHS                                ; 0046ca44
    FLD float ptr [ESP + 0x18]          ; 0046ca46
    FSQRT                               ; 0046ca4a
    FSUBP                               ; 0046ca4c
    FLD float ptr [ESP + 0x38]          ; 0046ca4e
    FMUL float ptr [0x0057e466]         ; 0046ca52 | DAT_0057e466
    FDIVP                               ; 0046ca58
    FLDZ                                ; 0046ca5a
    FXCH                                ; 0046ca5c
    FST float ptr [EDX + 0x4c]          ; 0046ca5e
    FSTP double ptr [ESP]               ; 0046ca61
    FCOMP double ptr [ESP]              ; 0046ca64
    FNSTSW AX                           ; 0046ca67
    SAHF                                ; 0046ca69
    JA 0x0046ca80                       ; 0046ca6a
        ;   XREF to: 0046ca80 (CONDITIONAL_JUMP)  ; LAB_0046ca80
    FLD1                                ; 0046ca6c
    FCOMP double ptr [ESP]              ; 0046ca6e
    FNSTSW AX                           ; 0046ca71
    SAHF                                ; 0046ca73
    JC 0x0046ca80                       ; 0046ca74
        ;   XREF to: 0046ca80 (CONDITIONAL_JUMP)  ; LAB_0046ca80
    FLD float ptr [EDX + 0x4c]          ; 0046ca76
    FCOMP float ptr [EDX]               ; 0046ca79
    FNSTSW AX                           ; 0046ca7b
    SAHF                                ; 0046ca7d
    JC 0x0046cae8                       ; 0046ca7e
        ;   XREF to: 0046cae8 (CONDITIONAL_JUMP)  ; LAB_0046cae8
    XOR EAX,EAX                         ; 0046ca80
        ;   Label: LAB_0046ca80
    MOV ESP,EBP                         ; 0046ca82
    POP EBP                             ; 0046ca84
    POP EBX                             ; 0046ca85
    RET                                 ; 0046ca86
    MOV BL,byte ptr [ESP + 0x4f]        ; 0046ca87
        ;   Label: LAB_0046ca87
    MOV AH,byte ptr [ESP + 0x53]        ; 0046ca8b
    XOR BL,0x80                         ; 0046ca8f
    XOR AH,0x80                         ; 0046ca92
    MOV byte ptr [ESP + 0x4f],BL        ; 0046ca95
    MOV byte ptr [ESP + 0x53],AH        ; 0046ca99
    JMP 0x0046c8b3                      ; 0046ca9d
        ;   XREF to: 0046c8b3 (UNCONDITIONAL_JUMP)  ; LAB_0046c8b3
    FLD float ptr [EDX + 0x58]          ; 0046caa2
        ;   Label: LAB_0046caa2
    FSUB float ptr [EDX + 0x40]         ; 0046caa5
    FDIV float ptr [ESP + 0x1c]         ; 0046caa8
    JMP 0x0046c9a0                      ; 0046caac
        ;   XREF to: 0046c9a0 (UNCONDITIONAL_JUMP)  ; LAB_0046c9a0
    FLD1                                ; 0046cab1
        ;   Label: LAB_0046cab1
    FCOMP double ptr [ESP + 0x8]        ; 0046cab3
    FNSTSW AX                           ; 0046cab7
    SAHF                                ; 0046cab9
    JNC 0x0046cace                      ; 0046caba
        ;   XREF to: 0046cace (CONDITIONAL_JUMP)  ; LAB_0046cace
    MOV dword ptr [EDX + 0x50],0x3f800000 ; 0046cabc
    FLD float ptr [EDX + 0x44]          ; 0046cac3
    MOV EAX,dword ptr [EDX + 0x48]      ; 0046cac6
    JMP 0x0046c9c6                      ; 0046cac9
        ;   XREF to: 0046c9c6 (UNCONDITIONAL_JUMP)  ; LAB_0046c9c6
    FLD float ptr [ESP + 0x24]          ; 0046cace
        ;   Label: LAB_0046cace
    FLDZ                                ; 0046cad2
    FCOMPP                              ; 0046cad4
    FNSTSW AX                           ; 0046cad6
    SAHF                                ; 0046cad8
    JBE 0x0046cae1                      ; 0046cad9
        ;   XREF to: 0046cae1 (CONDITIONAL_JUMP)  ; LAB_0046cae1
    XOR ECX,ECX                         ; 0046cadb
    MOV dword ptr [ESP + 0x24],ECX      ; 0046cadd
    MOV EAX,dword ptr [ESP + 0x24]      ; 0046cae1
        ;   Label: LAB_0046cae1
    MOV dword ptr [EDX + 0x4c],EAX      ; 0046cae5
    MOV EAX,0x1                         ; 0046cae8
        ;   Label: LAB_0046cae8
    MOV ESP,EBP                         ; 0046caed
    POP EBP                             ; 0046caef
    POP EBX                             ; 0046caf0
    RET                                 ; 0046caf1

