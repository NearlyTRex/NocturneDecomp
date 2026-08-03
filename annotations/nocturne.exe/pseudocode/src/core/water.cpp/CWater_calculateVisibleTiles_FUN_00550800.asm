; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_00550800(CWater *this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xbc]:8  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 at 00507eca
;
; Referenced Globals:
;   TerminatedCString s_core_water_cpp_0059753f
;   TerminatedCString s_Too_many_visible_water_t_00597551
;   TerminatedCString s_Vis_water_tiles_d_SqFt_f_0059756f
;   double DOUBLE_0059758f = 0.5
;   double DOUBLE_00597597 = 1.10000000000000
;   undefined4 DAT_005a3e8c
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   undefined4 DAT_005ae704
;   undefined4 DAT_005ae708
;   undefined4 DAT_005c5024
;   undefined4 DAT_005c5054
;   undefined4 DAT_005c5084
;   undefined4 DAT_005c50b4
;   CConsole g_CConsole_0077ad0c
;   undefined4 DAT_01b4d738
;   ... and 10 more
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0
;   core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0
;   core_main.c_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550800
        ;   Label: core_water.cpp_CWater_calculateVisibleTiles_FUN_00550800
    PUSH ESI                            ; 00550801
    PUSH EDI                            ; 00550802
    PUSH EBP                            ; 00550803
    SUB ESP,0xa4                        ; 00550804
    MOV EDI,dword ptr [ESP + 0xb8]      ; 0055080a
    XOR EDX,EDX                         ; 00550811
    XOR EBX,EBX                         ; 00550813
    XOR EAX,EAX                         ; 00550815
    INC EAX                             ; 00550817
        ;   Label: LAB_00550817
    LEA ESI,[EBX + EDX*0x1]             ; 00550818
    ADD EDX,0x20                        ; 0055081b
    MOV CL,byte ptr [ESI + EAX*0x1 + 0x1bf771f] ; 0055081e | DAT_01bf7720
    ADD EBX,0x400                       ; 00550825
    MOV byte ptr [EAX + 0x2dd9237],CL   ; 0055082b
    CMP EAX,0x20                        ; 00550831
    JL 0x00550817                       ; 00550834
        ;   XREF to: 00550817 (CONDITIONAL_JUMP)  ; LAB_00550817
    MOV EDX,dword ptr [EDI + 0x4]       ; 00550836
    MOV dword ptr [EDI + 0xc],0x0       ; 00550839
    TEST EDX,0x7fffffff                 ; 00550840
    JNZ 0x00550861                      ; 00550846
        ;   XREF to: 00550861 (CONDITIONAL_JUMP)  ; LAB_00550861
    ADD ESP,0xa4                        ; 00550848
    POP EBP                             ; 0055084e
    POP EDI                             ; 0055084f
    POP ESI                             ; 00550850
    POP EBX                             ; 00550851
    LEA EAX,[EAX]                       ; 00550852
    LEA EDX,[EDX]                       ; 00550858
    MOV EAX,EAX                         ; 0055085e
    LEA EAX,[ESP + 0x70]                ; 00550861
        ;   Label: LAB_00550861
    PUSH EAX                            ; 00550865
    PUSH 0x1fba938                      ; 00550866 | g_CDemonRaytrace_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0 ; 0055086b
        ;   XREF to: 0046b9c0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0(CDemonRaytrace * this_ptr, CVector3f * output_vector)
    ADD ESP,0x8                         ; 00550870
    LEA EAX,[ESP + 0x28]                ; 00550873
    PUSH EAX                            ; 00550877
    PUSH 0x1fba938                      ; 00550878 | g_CDemonRaytrace_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0 ; 0055087d
        ;   XREF to: 0046b9f0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0(CDemonRaytrace * this_ptr, CVector3f * output_vector)
    ADD ESP,0x8                         ; 00550882
    FLD float ptr [ESP + 0x70]          ; 00550885
    FADD float ptr [ESP + 0x28]         ; 00550889
    FLD double ptr [0x0059758f]         ; 0055088d | DOUBLE_0059758f
    FXCH                                ; 00550893
    FMUL ST1                            ; 00550895
    FLD float ptr [ESP + 0x78]          ; 00550897
    FLD float ptr [ESP + 0x28]          ; 0055089b
    FSUB float ptr [ESP + 0x70]         ; 0055089f
    FXCH                                ; 005508a3
    FADD float ptr [ESP + 0x30]         ; 005508a5
    FXCH                                ; 005508a9
    FMUL ST3                            ; 005508ab
    FXCH                                ; 005508ad
    FMULP ST3                           ; 005508af
    FMUL double ptr [0x00597597]        ; 005508b1 | DOUBLE_00597597
    XOR ECX,ECX                         ; 005508b7
    FLDZ                                ; 005508b9
    MOV dword ptr [0x02dd1224],ECX      ; 005508bb | DAT_02dd1224
    MOV dword ptr [ESP + 0x94],ECX      ; 005508c1
    FXCH ST2                            ; 005508c8
    FSTP float ptr [0x02dd1220]         ; 005508ca | DAT_02dd1220
    FXCH ST2                            ; 005508d0
    FSTP float ptr [0x02dd1228]         ; 005508d2 | DAT_02dd1228
    FXCH                                ; 005508d8
    FSTP float ptr [ESP + 0x8c]         ; 005508da
    FCOMP float ptr [ESP + 0x8c]        ; 005508e1
    FNSTSW AX                           ; 005508e8
    SAHF                                ; 005508ea
    JNC 0x005508fb                      ; 005508eb
        ;   XREF to: 005508fb (CONDITIONAL_JUMP)  ; LAB_005508fb
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005508ed
    MOV dword ptr [ESP + 0x94],EAX      ; 005508f4
    FLD float ptr [ESP + 0x2c]          ; 005508fb
        ;   Label: LAB_005508fb
    FSUB float ptr [ESP + 0x74]         ; 005508ff
    FST float ptr [ESP + 0x90]          ; 00550903
    FCOMP float ptr [ESP + 0x94]        ; 0055090a
    FNSTSW AX                           ; 00550911
    SAHF                                ; 00550913
    JBE 0x00550924                      ; 00550914
        ;   XREF to: 00550924 (CONDITIONAL_JUMP)  ; LAB_00550924
    MOV EAX,dword ptr [ESP + 0x90]      ; 00550916
    MOV dword ptr [ESP + 0x94],EAX      ; 0055091d
    FLD float ptr [ESP + 0x30]          ; 00550924
        ;   Label: LAB_00550924
    FSUB float ptr [ESP + 0x78]         ; 00550928
    FMUL double ptr [0x0059758f]        ; 0055092c | DOUBLE_0059758f
    FMUL double ptr [0x00597597]        ; 00550932 | DOUBLE_00597597
    FST float ptr [ESP + 0x88]          ; 00550938
    FCOMP float ptr [ESP + 0x94]        ; 0055093f
    FNSTSW AX                           ; 00550946
    SAHF                                ; 00550948
    JBE 0x00550959                      ; 00550949
        ;   XREF to: 00550959 (CONDITIONAL_JUMP)  ; LAB_00550959
    MOV EAX,dword ptr [ESP + 0x88]      ; 0055094b
    MOV dword ptr [ESP + 0x94],EAX      ; 00550952
    FLD float ptr [ESP + 0x94]          ; 00550959
        ;   Label: LAB_00550959
    FDIV float ptr [EDI + 0x8]          ; 00550960
    FLD1                                ; 00550963
    FADDP                               ; 00550965
    CALL crt_math.c_round_FUN_00563a30  ; 00550967
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x9c]        ; 0055096c
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00550973
    XOR ESI,ESI                         ; 0055097a
    MOV EBP,EAX                         ; 0055097c
    MOV dword ptr [0x02dd1234],ESI      ; 0055097e | DAT_02dd1234
    NEG EBP                             ; 00550984
    MOV dword ptr [ESP + 0x98],EAX      ; 00550986
    CMP EBP,EAX                         ; 0055098d
    JGE 0x00550bbf                      ; 0055098f
        ;   XREF to: 00550bbf (CONDITIONAL_JUMP)  ; LAB_00550bbf
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00550995
        ;   Label: LAB_00550995
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0055099c
    NEG ESI                             ; 005509a3
    CMP ESI,EAX                         ; 005509a5
    JGE 0x00550baf                      ; 005509a7
        ;   XREF to: 00550baf (CONDITIONAL_JUMP)  ; LAB_00550baf
    MOV dword ptr [ESP + 0xa0],EBP      ; 005509ad
        ;   Label: LAB_005509ad
    FILD dword ptr [ESP + 0xa0]         ; 005509b4
    FMUL float ptr [EDI + 0x8]          ; 005509bb
    FSTP float ptr [ESP + 0x64]         ; 005509be
    MOV EAX,dword ptr [EDI + 0x4]       ; 005509c2
    MOV dword ptr [ESP + 0xa0],ESI      ; 005509c5
    MOV dword ptr [ESP + 0x68],EAX      ; 005509cc
    FILD dword ptr [ESP + 0xa0]         ; 005509d0
    FMUL float ptr [EDI + 0x8]          ; 005509d7
    MOV ECX,dword ptr [0x005ae704]      ; 005509da | DAT_005ae704
    FLD float ptr [ESP + 0x64]          ; 005509e0
    FADD float ptr [0x02dd1220]         ; 005509e4 | DAT_02dd1220
    FLD float ptr [ESP + 0x68]          ; 005509ea
    LEA EAX,[ESP + 0x64]                ; 005509ee
    FXCH ST2                            ; 005509f2
    FSTP float ptr [ESP + 0x6c]         ; 005509f4
    FSTP float ptr [ESP + 0x64]         ; 005509f8
    PUSH EAX                            ; 005509fc
    FADD float ptr [0x02dd1224]         ; 005509fd | DAT_02dd1224
    FLD float ptr [ESP + 0x70]          ; 00550a03
    FXCH                                ; 00550a07
    FSTP float ptr [ESP + 0x6c]         ; 00550a09
    FADD float ptr [0x02dd1228]         ; 00550a0d | DAT_02dd1228
    PUSH ECX                            ; 00550a13
    FSTP float ptr [ESP + 0x74]         ; 00550a14
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00550a18
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00550a1d
    LEA EBX,[ESP + 0x40]                ; 00550a20
    LEA EAX,[ESP + 0x64]                ; 00550a24
    FLD float ptr [EAX]                 ; 00550a28
    FMUL float ptr [0x005a3e8c]         ; 00550a2a | DAT_005a3e8c
    FISTP dword ptr [EBX]               ; 00550a30
    FLD float ptr [EAX + 0x4]           ; 00550a32
    FMUL float ptr [0x005a3e8c]         ; 00550a35 | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x4]         ; 00550a3b
    FLD float ptr [EAX + 0x8]           ; 00550a3e
    FMUL float ptr [0x005a3e8c]         ; 00550a41 | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x8]         ; 00550a47
    XOR EBX,EBX                         ; 00550a4a
    LEA EAX,[ESP + 0x64]                ; 00550a4c
    MOV dword ptr [ESP + 0x64],EBX      ; 00550a50
    MOV dword ptr [ESP + 0x68],EBX      ; 00550a54
    MOV dword ptr [ESP + 0x6c],EBX      ; 00550a58
    LEA EBX,[ESP + 0x58]                ; 00550a5c
    MOV EDX,dword ptr [0x005ae704]      ; 00550a60 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00550a66
    FMUL float ptr [0x005a3e8c]         ; 00550a68 | DAT_005a3e8c
    FISTP dword ptr [EBX]               ; 00550a6e
    FLD float ptr [EAX + 0x4]           ; 00550a70
    FMUL float ptr [0x005a3e8c]         ; 00550a73 | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x4]         ; 00550a79
    FLD float ptr [EAX + 0x8]           ; 00550a7c
    FMUL float ptr [0x005a3e8c]         ; 00550a7f | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x8]         ; 00550a85
    LEA EAX,[ESP + 0x58]                ; 00550a88
    PUSH EAX                            ; 00550a8c
    MOV EAX,dword ptr [EDX]             ; 00550a8d | DAT_01b4d738
    PUSH EAX                            ; 00550a8f
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00550a90
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00550a95
    MOV EAX,dword ptr [EDI + 0x8]       ; 00550a98
    LEA EBX,[ESP + 0x34]                ; 00550a9b
    MOV dword ptr [ESP + 0x64],EAX      ; 00550a9f
    LEA EAX,[ESP + 0x64]                ; 00550aa3
    MOV EDX,dword ptr [0x005ae704]      ; 00550aa7 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00550aad
    FMUL float ptr [0x005a3e8c]         ; 00550aaf | DAT_005a3e8c
    FISTP dword ptr [EBX]               ; 00550ab5
    FLD float ptr [EAX + 0x4]           ; 00550ab7
    FMUL float ptr [0x005a3e8c]         ; 00550aba | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x4]         ; 00550ac0
    FLD float ptr [EAX + 0x8]           ; 00550ac3
    FMUL float ptr [0x005a3e8c]         ; 00550ac6 | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x8]         ; 00550acc
    LEA EAX,[ESP + 0x34]                ; 00550acf
    PUSH EAX                            ; 00550ad3
    MOV EAX,dword ptr [EDX]             ; 00550ad4 | DAT_01b4d738
    ADD EAX,0x30                        ; 00550ad6
    PUSH EAX                            ; 00550ad9
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00550ada
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00550adf
    MOV EAX,dword ptr [EDI + 0x8]       ; 00550ae2
    LEA EBX,[ESP + 0x7c]                ; 00550ae5
    MOV dword ptr [ESP + 0x6c],EAX      ; 00550ae9
    LEA EAX,[ESP + 0x64]                ; 00550aed
    MOV EDX,dword ptr [0x005ae704]      ; 00550af1 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00550af7
    FMUL float ptr [0x005a3e8c]         ; 00550af9 | DAT_005a3e8c
    FISTP dword ptr [EBX]               ; 00550aff
    FLD float ptr [EAX + 0x4]           ; 00550b01
    FMUL float ptr [0x005a3e8c]         ; 00550b04 | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x4]         ; 00550b0a
    FLD float ptr [EAX + 0x8]           ; 00550b0d
    FMUL float ptr [0x005a3e8c]         ; 00550b10 | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x8]         ; 00550b16
    LEA EAX,[ESP + 0x7c]                ; 00550b19
    PUSH EAX                            ; 00550b1d
    MOV EAX,dword ptr [EDX]             ; 00550b1e | DAT_01b4d738
    ADD EAX,0x60                        ; 00550b20
    PUSH EAX                            ; 00550b23
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00550b24
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x54]                ; 00550b29
    LEA EAX,[ESP + 0x6c]                ; 00550b2d
    ADD ESP,0x8                         ; 00550b31
    XOR ECX,ECX                         ; 00550b34
    MOV EDX,dword ptr [0x005ae704]      ; 00550b36 | DAT_005ae704
    MOV dword ptr [ESP + 0x64],ECX      ; 00550b3c
    FLD float ptr [EAX]                 ; 00550b40
    FMUL float ptr [0x005a3e8c]         ; 00550b42 | DAT_005a3e8c
    FISTP dword ptr [EBX]               ; 00550b48
    FLD float ptr [EAX + 0x4]           ; 00550b4a
    FMUL float ptr [0x005a3e8c]         ; 00550b4d | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x4]         ; 00550b53
    FLD float ptr [EAX + 0x8]           ; 00550b56
    FMUL float ptr [0x005a3e8c]         ; 00550b59 | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x8]         ; 00550b5f
    LEA EAX,[ESP + 0x4c]                ; 00550b62
    PUSH EAX                            ; 00550b66
    MOV EAX,dword ptr [EDX]             ; 00550b67 | DAT_01b4d738
    ADD EAX,0x90                        ; 00550b69
    PUSH EAX                            ; 00550b6e
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00550b6f
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005c5024]                ; 00550b74 | DAT_005c5024
    MOV EBX,dword ptr [0x005c5054]      ; 00550b79 | DAT_005c5054
    MOV EDX,dword ptr [0x005c5084]      ; 00550b7f | DAT_005c5084
    AND EAX,EBX                         ; 00550b85
    MOV ECX,dword ptr [0x005c50b4]      ; 00550b87 | DAT_005c50b4
    AND EAX,EDX                         ; 00550b8d
    AND EAX,ECX                         ; 00550b8f
    ADD ESP,0x8                         ; 00550b91
    TEST EAX,0x80000000                 ; 00550b94
    JZ 0x00550bfa                       ; 00550b99
        ;   XREF to: 00550bfa (CONDITIONAL_JUMP)  ; LAB_00550bfa
    TEST AL,0xff                        ; 00550b9b
    JZ 0x00550bfa                       ; 00550b9d
        ;   XREF to: 00550bfa (CONDITIONAL_JUMP)  ; LAB_00550bfa
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00550b9f
        ;   Label: LAB_00550b9f
    INC ESI                             ; 00550ba6
    CMP ESI,EDX                         ; 00550ba7
    JL 0x005509ad                       ; 00550ba9
        ;   XREF to: 005509ad (CONDITIONAL_JUMP)  ; LAB_005509ad
    MOV EDX,dword ptr [ESP + 0x98]      ; 00550baf
        ;   Label: LAB_00550baf
    INC EBP                             ; 00550bb6
    CMP EBP,EDX                         ; 00550bb7
    JL 0x00550995                       ; 00550bb9
        ;   XREF to: 00550995 (CONDITIONAL_JUMP)  ; LAB_00550995
    FILD dword ptr [0x02dd1234]         ; 00550bbf | DAT_02dd1234
        ;   Label: LAB_00550bbf
    FMUL float ptr [EDI + 0x8]          ; 00550bc5
    FMUL float ptr [EDI + 0x8]          ; 00550bc8
    SUB ESP,0x8                         ; 00550bcb
    MOV ECX,dword ptr [0x02dd1234]      ; 00550bce | DAT_02dd1234
    FST float ptr [EDI + 0xc]           ; 00550bd4
    FSTP double ptr [ESP]               ; 00550bd7
    PUSH ECX                            ; 00550bda
    PUSH 0x59756f                       ; 00550bdb | = "Vis water tiles : %d, SqFt : %f"
    MOV EBX,dword ptr [0x005ad350]      ; 00550be0 | g_CConsole_PTR_005ad350
    PUSH EBX                            ; 00550be6 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00550be7
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x14                        ; 00550bec
    ADD ESP,0xa4                        ; 00550bef
    POP EBP                             ; 00550bf5
    POP EDI                             ; 00550bf6
    POP ESI                             ; 00550bf7
    POP EBX                             ; 00550bf8
    RET                                 ; 00550bf9
    MOV EBX,0x4                         ; 00550bfa
        ;   Label: LAB_00550bfa
    MOV EDX,0x1                         ; 00550bff
    XOR EAX,EAX                         ; 00550c04
    MOV dword ptr [ESP + 0x4],EBX       ; 00550c06
    MOV dword ptr [ESP + 0x14],EAX      ; 00550c0a
    MOV dword ptr [ESP + 0x10],EAX      ; 00550c0e
    MOV dword ptr [ESP + 0xc],EAX       ; 00550c12
    MOV dword ptr [ESP + 0x8],EAX       ; 00550c16
    MOV dword ptr [ESP + 0x18],EAX      ; 00550c1a
    MOV EBX,0x3                         ; 00550c1e
    MOV EAX,0x10                        ; 00550c23
    MOV dword ptr [ESP + 0x24],EBX      ; 00550c28
    MOV EBX,dword ptr [0x005ae708]      ; 00550c2c | DAT_005ae708
    MOV [0x005ae708],EAX                ; 00550c32 | DAT_005ae708
    MOV EAX,ESP                         ; 00550c37
    MOV dword ptr [ESP + 0x1c],EDX      ; 00550c39
    PUSH EAX                            ; 00550c3d
    MOV EDX,dword ptr [0x005ae704]      ; 00550c3e | DAT_005ae704
    MOV ECX,0x2                         ; 00550c44
    PUSH EDX                            ; 00550c49 | DAT_01b4d738
    MOV dword ptr [ESP + 0x28],ECX      ; 00550c4a
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190 ; 00550c4e
        ;   XREF to: 0045f190 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00550c53
    TEST EAX,EAX                        ; 00550c56
    JZ 0x00550ca4                       ; 00550c58
        ;   XREF to: 00550ca4 (CONDITIONAL_JUMP)  ; LAB_00550ca4
    CMP dword ptr [0x02dd1234],0x1000   ; 00550c5a | DAT_02dd1234
    JL 0x00550c88                       ; 00550c64
        ;   XREF to: 00550c88 (CONDITIONAL_JUMP)  ; LAB_00550c88
    MOV EAX,0x59753f                    ; 00550c66 | = "..\\core\\water.cpp"
    MOV EDX,0x136                       ; 00550c6b
    PUSH 0x597551                       ; 00550c70 | = "Too many visible water tiles!"
    MOV [0x01cc4800],EAX                ; 00550c75 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00550c7a | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00550c80
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00550c85
    MOV EAX,[0x02dd1234]                ; 00550c88 | DAT_02dd1234
        ;   Label: LAB_00550c88
    LEA ECX,[EAX + 0x1]                 ; 00550c8d
    MOV dword ptr [EAX*0x4 + 0x2dd1238],EBP ; 00550c90 | DAT_02dd1238
    MOV dword ptr [EAX*0x4 + 0x2dd5238],ESI ; 00550c97 | DAT_02dd5238
    MOV dword ptr [0x02dd1234],ECX      ; 00550c9e | DAT_02dd1234
    MOV dword ptr [0x005ae708],EBX      ; 00550ca4 | DAT_005ae708
        ;   Label: LAB_00550ca4
    JMP 0x00550b9f                      ; 00550caa
        ;   XREF to: 00550b9f (UNCONDITIONAL_JUMP)  ; LAB_00550b9f

