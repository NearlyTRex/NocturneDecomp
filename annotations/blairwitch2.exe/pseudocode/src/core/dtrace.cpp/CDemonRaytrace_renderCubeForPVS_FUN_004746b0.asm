; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   grid_x
; int              Stack[0xc]:4   grid_y
; int              Stack[0x10]:4   grid_z
; int              Stack[0x14]:4   render_mode
; Local Variables:
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
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
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00475000 at 00475677
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005d1b73
;   TerminatedCString s_Too_many_drawn_cubes_Nee_005d1b86
;   undefined4 DAT_005d1bb3
;   undefined4 DAT_005d1bbb
;   undefined4 DAT_005f5b10
;   undefined4 DAT_0060b27c
;   undefined4 DAT_0060b280
;   undefined4 DAT_00622024
;   undefined4 DAT_00622054
;   undefined4 DAT_00622084
;   undefined4 DAT_006220b4
;   undefined4 DAT_006220e4
;   undefined4 DAT_00622114
;   undefined4 DAT_00622144
;   undefined4 DAT_00622174
;   ... and 12 more
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_004468c0
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004746b0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0
    PUSH ESI                            ; 004746b1
    PUSH EDI                            ; 004746b2
    PUSH EBP                            ; 004746b3
    SUB ESP,0xc4                        ; 004746b4
    MOV ESI,dword ptr [ESP + 0xd8]      ; 004746ba
    MOV EDI,dword ptr [ESP + 0xdc]      ; 004746c1
    MOV EBP,dword ptr [ESP + 0xe4]      ; 004746c8
    MOV EDX,dword ptr [0x01bd3c4c]      ; 004746cf | DAT_01bd3c4c
    INC EDX                             ; 004746d5
    MOV ECX,dword ptr [ESI + 0x54]      ; 004746d6
    MOV dword ptr [0x01bd3c4c],EDX      ; 004746d9 | DAT_01bd3c4c
    CMP EDI,ECX                         ; 004746df
    JL 0x0047470a                       ; 004746e1
        ;   XREF to: 0047470a (CONDITIONAL_JUMP)  ; LAB_0047470a
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004746e3
    CMP EAX,dword ptr [ESI + 0x58]      ; 004746ea
    JL 0x0047470a                       ; 004746ed
        ;   XREF to: 0047470a (CONDITIONAL_JUMP)  ; LAB_0047470a
    CMP EBP,dword ptr [ESI + 0x5c]      ; 004746ef
    JL 0x0047470a                       ; 004746f2
        ;   XREF to: 0047470a (CONDITIONAL_JUMP)  ; LAB_0047470a
    CMP EDI,dword ptr [ESI + 0x60]      ; 004746f4
    JG 0x0047470a                       ; 004746f7
        ;   XREF to: 0047470a (CONDITIONAL_JUMP)  ; LAB_0047470a
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004746f9
    CMP EAX,dword ptr [ESI + 0x64]      ; 00474700
    JG 0x0047470a                       ; 00474703
        ;   XREF to: 0047470a (CONDITIONAL_JUMP)  ; LAB_0047470a
    CMP EBP,dword ptr [ESI + 0x68]      ; 00474705
    JLE 0x00474715                      ; 00474708
        ;   XREF to: 00474715 (CONDITIONAL_JUMP)  ; LAB_00474715
    ADD ESP,0xc4                        ; 0047470a
        ;   Label: LAB_0047470a
    POP EBP                             ; 00474710
    POP EDI                             ; 00474711
    POP ESI                             ; 00474712
    POP EBX                             ; 00474713
    RET                                 ; 00474714
    PUSH EBP                            ; 00474715
        ;   Label: LAB_00474715
    PUSH EAX                            ; 00474716
    PUSH EDI                            ; 00474717
    PUSH ESI                            ; 00474718
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0 ; 00474719
        ;   XREF to: 00472af0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0047471e
    MOV dword ptr [ESP + 0xa0],EAX      ; 00474721
    TEST EAX,EAX                        ; 00474728
    JZ 0x0047470a                       ; 0047472a
        ;   XREF to: 0047470a (CONDITIONAL_JUMP)  ; LAB_0047470a
    CMP dword ptr [EAX],0x0             ; 0047472c
    JZ 0x0047470a                       ; 0047472f
        ;   XREF to: 0047470a (CONDITIONAL_JUMP)  ; LAB_0047470a
    MOV dword ptr [ESP + 0xbc],EDI      ; 00474731
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00474738
    FILD dword ptr [ESP + 0xbc]         ; 0047473f
    FST float ptr [ESP + 0xac]          ; 00474746
    FMUL float ptr [ESI + 0x28]         ; 0047474d
    MOV dword ptr [ESP + 0xbc],EAX      ; 00474750
    MOV dword ptr [ESP + 0xc0],EBP      ; 00474757
    FILD dword ptr [ESP + 0xbc]         ; 0047475e
    FSTP float ptr [ESP + 0xb4]         ; 00474765
    FADD float ptr [ESI + 0x10]         ; 0047476c
    FLD float ptr [ESP + 0xb4]          ; 0047476f
    FXCH                                ; 00474776
    FSTP float ptr [ESP + 0x28]         ; 00474778
    FMUL float ptr [ESI + 0x2c]         ; 0047477c
    FILD dword ptr [ESP + 0xc0]         ; 0047477f
    FSTP float ptr [ESP + 0xa4]         ; 00474786
    FADD float ptr [ESI + 0x14]         ; 0047478d
    FLD float ptr [ESP + 0xa4]          ; 00474790
    FXCH                                ; 00474797
    FSTP float ptr [ESP + 0x2c]         ; 00474799
    FMUL float ptr [ESI + 0x30]         ; 0047479d
    LEA EBX,[ESP + 0x70]                ; 004747a0
    MOV ECX,dword ptr [0x01bd3c50]      ; 004747a4 | DAT_01bd3c50
    MOV EDX,dword ptr [0x0060b27c]      ; 004747aa | DAT_0060b27c
    INC ECX                             ; 004747b0
    LEA EAX,[ESP + 0x28]                ; 004747b1
    FADD float ptr [ESI + 0x18]         ; 004747b5
    MOV dword ptr [0x01bd3c50],ECX      ; 004747b8 | DAT_01bd3c50
    FSTP float ptr [ESP + 0x30]         ; 004747be
    FLD float ptr [EAX]                 ; 004747c2
    FMUL float ptr [0x005f5b10]         ; 004747c4 | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 004747ca
    FLD float ptr [EAX + 0x4]           ; 004747cc
    FMUL float ptr [0x005f5b10]         ; 004747cf | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 004747d5
    FLD float ptr [EAX + 0x8]           ; 004747d8
    FMUL float ptr [0x005f5b10]         ; 004747db | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 004747e1
    LEA EAX,[ESP + 0x70]                ; 004747e4
    PUSH EAX                            ; 004747e8
    MOV EAX,dword ptr [EDX]             ; 004747e9 | DAT_01ba5c50
    PUSH EAX                            ; 004747eb
    CALL engine_special.cpp_FUN_0055d723 ; 004747ec
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004747f1
    LEA EAX,[EDI + 0x1]                 ; 004747f4
    MOV dword ptr [ESP + 0xc0],EAX      ; 004747f7
    FILD dword ptr [ESP + 0xc0]         ; 004747fe
    FST float ptr [ESP + 0xa8]          ; 00474805
    FMUL float ptr [ESI + 0x28]         ; 0047480c
    FADD float ptr [ESI + 0x10]         ; 0047480f
    FLD float ptr [ESP + 0xb4]          ; 00474812
    FXCH                                ; 00474819
    FSTP float ptr [ESP + 0x28]         ; 0047481b
    FMUL float ptr [ESI + 0x2c]         ; 0047481f
    FADD float ptr [ESI + 0x14]         ; 00474822
    FLD float ptr [ESP + 0xa4]          ; 00474825
    FXCH                                ; 0047482c
    FSTP float ptr [ESP + 0x2c]         ; 0047482e
    FMUL float ptr [ESI + 0x30]         ; 00474832
    LEA EBX,[ESP + 0x58]                ; 00474835
    MOV EDX,dword ptr [0x0060b27c]      ; 00474839 | DAT_0060b27c
    FADD float ptr [ESI + 0x18]         ; 0047483f
    LEA EAX,[ESP + 0x28]                ; 00474842
    FSTP float ptr [ESP + 0x30]         ; 00474846
    FLD float ptr [EAX]                 ; 0047484a
    FMUL float ptr [0x005f5b10]         ; 0047484c | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 00474852
    FLD float ptr [EAX + 0x4]           ; 00474854
    FMUL float ptr [0x005f5b10]         ; 00474857 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 0047485d
    FLD float ptr [EAX + 0x8]           ; 00474860
    FMUL float ptr [0x005f5b10]         ; 00474863 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 00474869
    LEA EAX,[ESP + 0x58]                ; 0047486c
    PUSH EAX                            ; 00474870
    MOV EAX,dword ptr [EDX]             ; 00474871 | DAT_01ba5c50
    ADD EAX,0x30                        ; 00474873
    PUSH EAX                            ; 00474876
    CALL engine_special.cpp_FUN_0055d723 ; 00474877
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0047487c
    FLD float ptr [ESP + 0xa8]          ; 0047487f
    FMUL float ptr [ESI + 0x28]         ; 00474886
    LEA EAX,[EBP + 0x1]                 ; 00474889
    FLD float ptr [ESP + 0xb4]          ; 0047488c
    FXCH                                ; 00474893
    FADD float ptr [ESI + 0x10]         ; 00474895
    MOV dword ptr [ESP + 0xc0],EAX      ; 00474898
    FSTP float ptr [ESP + 0x28]         ; 0047489f
    FMUL float ptr [ESI + 0x2c]         ; 004748a3
    FILD dword ptr [ESP + 0xc0]         ; 004748a6
    FSTP float ptr [ESP + 0xb0]         ; 004748ad
    FADD float ptr [ESI + 0x14]         ; 004748b4
    FLD float ptr [ESP + 0xb0]          ; 004748b7
    FXCH                                ; 004748be
    FSTP float ptr [ESP + 0x2c]         ; 004748c0
    FMUL float ptr [ESI + 0x30]         ; 004748c4
    FADD float ptr [ESI + 0x18]         ; 004748c7
    FSTP float ptr [ESP + 0x30]         ; 004748ca
    LEA EBX,[ESP + 0x94]                ; 004748ce
    LEA EAX,[ESP + 0x28]                ; 004748d5
    MOV EDX,dword ptr [0x0060b27c]      ; 004748d9 | DAT_0060b27c
    FLD float ptr [EAX]                 ; 004748df
    FMUL float ptr [0x005f5b10]         ; 004748e1 | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 004748e7
    FLD float ptr [EAX + 0x4]           ; 004748e9
    FMUL float ptr [0x005f5b10]         ; 004748ec | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 004748f2
    FLD float ptr [EAX + 0x8]           ; 004748f5
    FMUL float ptr [0x005f5b10]         ; 004748f8 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 004748fe
    LEA EAX,[ESP + 0x94]                ; 00474901
    PUSH EAX                            ; 00474908
    MOV EAX,dword ptr [EDX]             ; 00474909 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0047490b
    PUSH EAX                            ; 0047490e
    CALL engine_special.cpp_FUN_0055d723 ; 0047490f
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00474914
    FLD float ptr [ESP + 0xac]          ; 00474917
    FMUL float ptr [ESI + 0x28]         ; 0047491e
    FADD float ptr [ESI + 0x10]         ; 00474921
    FLD float ptr [ESP + 0xb4]          ; 00474924
    FXCH                                ; 0047492b
    FSTP float ptr [ESP + 0x28]         ; 0047492d
    FMUL float ptr [ESI + 0x2c]         ; 00474931
    FADD float ptr [ESI + 0x14]         ; 00474934
    FLD float ptr [ESP + 0xb0]          ; 00474937
    FXCH                                ; 0047493e
    FSTP float ptr [ESP + 0x2c]         ; 00474940
    FMUL float ptr [ESI + 0x30]         ; 00474944
    LEA EBX,[ESP + 0x7c]                ; 00474947
    LEA EAX,[ESP + 0x28]                ; 0047494b
    FADD float ptr [ESI + 0x18]         ; 0047494f
    MOV EDX,dword ptr [0x0060b27c]      ; 00474952 | DAT_0060b27c
    FSTP float ptr [ESP + 0x30]         ; 00474958
    FLD float ptr [EAX]                 ; 0047495c
    FMUL float ptr [0x005f5b10]         ; 0047495e | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 00474964
    FLD float ptr [EAX + 0x4]           ; 00474966
    FMUL float ptr [0x005f5b10]         ; 00474969 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 0047496f
    FLD float ptr [EAX + 0x8]           ; 00474972
    FMUL float ptr [0x005f5b10]         ; 00474975 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 0047497b
    LEA EAX,[ESP + 0x7c]                ; 0047497e
    PUSH EAX                            ; 00474982
    MOV EAX,dword ptr [EDX]             ; 00474983 | DAT_01ba5c50
    ADD EAX,0x90                        ; 00474985
    PUSH EAX                            ; 0047498a
    CALL engine_special.cpp_FUN_0055d723 ; 0047498b
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00474990
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00474993
    FLD float ptr [ESP + 0xac]          ; 0047499a
    INC EAX                             ; 004749a1
    FMUL float ptr [ESI + 0x28]         ; 004749a2
    MOV dword ptr [ESP + 0xc0],EAX      ; 004749a5
    FADD float ptr [ESI + 0x10]         ; 004749ac
    FILD dword ptr [ESP + 0xc0]         ; 004749af
    FXCH                                ; 004749b6
    FSTP float ptr [ESP + 0x28]         ; 004749b8
    FST float ptr [ESP + 0xb8]          ; 004749bc
    FMUL float ptr [ESI + 0x2c]         ; 004749c3
    FADD float ptr [ESI + 0x14]         ; 004749c6
    FLD float ptr [ESP + 0xa4]          ; 004749c9
    FXCH                                ; 004749d0
    FSTP float ptr [ESP + 0x2c]         ; 004749d2
    FMUL float ptr [ESI + 0x30]         ; 004749d6
    LEA EBX,[ESP + 0x34]                ; 004749d9
    MOV EDX,dword ptr [0x0060b27c]      ; 004749dd | DAT_0060b27c
    FADD float ptr [ESI + 0x18]         ; 004749e3
    LEA EAX,[ESP + 0x28]                ; 004749e6
    FSTP float ptr [ESP + 0x30]         ; 004749ea
    FLD float ptr [EAX]                 ; 004749ee
    FMUL float ptr [0x005f5b10]         ; 004749f0 | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 004749f6
    FLD float ptr [EAX + 0x4]           ; 004749f8
    FMUL float ptr [0x005f5b10]         ; 004749fb | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 00474a01
    FLD float ptr [EAX + 0x8]           ; 00474a04
    FMUL float ptr [0x005f5b10]         ; 00474a07 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 00474a0d
    LEA EAX,[ESP + 0x34]                ; 00474a10
    PUSH EAX                            ; 00474a14
    MOV EAX,dword ptr [EDX]             ; 00474a15 | DAT_01ba5c50
    ADD EAX,0xc0                        ; 00474a17
    PUSH EAX                            ; 00474a1c
    CALL engine_special.cpp_FUN_0055d723 ; 00474a1d
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00474a22
    FLD float ptr [ESP + 0xa8]          ; 00474a25
    FMUL float ptr [ESI + 0x28]         ; 00474a2c
    FADD float ptr [ESI + 0x10]         ; 00474a2f
    FLD float ptr [ESP + 0xb8]          ; 00474a32
    FXCH                                ; 00474a39
    FSTP float ptr [ESP + 0x28]         ; 00474a3b
    FMUL float ptr [ESI + 0x2c]         ; 00474a3f
    FADD float ptr [ESI + 0x14]         ; 00474a42
    FLD float ptr [ESP + 0xa4]          ; 00474a45
    FXCH                                ; 00474a4c
    FSTP float ptr [ESP + 0x2c]         ; 00474a4e
    FMUL float ptr [ESI + 0x30]         ; 00474a52
    LEA EBX,[ESP + 0x40]                ; 00474a55
    LEA EAX,[ESP + 0x28]                ; 00474a59
    FADD float ptr [ESI + 0x18]         ; 00474a5d
    MOV EDX,dword ptr [0x0060b27c]      ; 00474a60 | DAT_0060b27c
    FSTP float ptr [ESP + 0x30]         ; 00474a66
    FLD float ptr [EAX]                 ; 00474a6a
    FMUL float ptr [0x005f5b10]         ; 00474a6c | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 00474a72
    FLD float ptr [EAX + 0x4]           ; 00474a74
    FMUL float ptr [0x005f5b10]         ; 00474a77 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 00474a7d
    FLD float ptr [EAX + 0x8]           ; 00474a80
    FMUL float ptr [0x005f5b10]         ; 00474a83 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 00474a89
    LEA EAX,[ESP + 0x40]                ; 00474a8c
    PUSH EAX                            ; 00474a90
    MOV EAX,dword ptr [EDX]             ; 00474a91 | DAT_01ba5c50
    ADD EAX,0xf0                        ; 00474a93
    PUSH EAX                            ; 00474a98
    CALL engine_special.cpp_FUN_0055d723 ; 00474a99
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00474a9e
    FLD float ptr [ESP + 0xa8]          ; 00474aa1
    FMUL float ptr [ESI + 0x28]         ; 00474aa8
    FADD float ptr [ESI + 0x10]         ; 00474aab
    FLD float ptr [ESP + 0xb8]          ; 00474aae
    FXCH                                ; 00474ab5
    FSTP float ptr [ESP + 0x28]         ; 00474ab7
    FMUL float ptr [ESI + 0x2c]         ; 00474abb
    FADD float ptr [ESI + 0x14]         ; 00474abe
    FLD float ptr [ESP + 0xb0]          ; 00474ac1
    FXCH                                ; 00474ac8
    FSTP float ptr [ESP + 0x2c]         ; 00474aca
    FMUL float ptr [ESI + 0x30]         ; 00474ace
    LEA EBX,[ESP + 0x64]                ; 00474ad1
    LEA EAX,[ESP + 0x28]                ; 00474ad5
    FADD float ptr [ESI + 0x18]         ; 00474ad9
    MOV EDX,dword ptr [0x0060b27c]      ; 00474adc | DAT_0060b27c
    FSTP float ptr [ESP + 0x30]         ; 00474ae2
    FLD float ptr [EAX]                 ; 00474ae6
    FMUL float ptr [0x005f5b10]         ; 00474ae8 | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 00474aee
    FLD float ptr [EAX + 0x4]           ; 00474af0
    FMUL float ptr [0x005f5b10]         ; 00474af3 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 00474af9
    FLD float ptr [EAX + 0x8]           ; 00474afc
    FMUL float ptr [0x005f5b10]         ; 00474aff | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 00474b05
    LEA EAX,[ESP + 0x64]                ; 00474b08
    PUSH EAX                            ; 00474b0c
    MOV EAX,dword ptr [EDX]             ; 00474b0d | DAT_01ba5c50
    ADD EAX,0x120                       ; 00474b0f
    PUSH EAX                            ; 00474b14
    CALL engine_special.cpp_FUN_0055d723 ; 00474b15
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00474b1a
    FLD float ptr [ESP + 0xac]          ; 00474b1d
    FMUL float ptr [ESI + 0x28]         ; 00474b24
    FADD float ptr [ESI + 0x10]         ; 00474b27
    FLD float ptr [ESP + 0xb8]          ; 00474b2a
    FXCH                                ; 00474b31
    FSTP float ptr [ESP + 0x28]         ; 00474b33
    FMUL float ptr [ESI + 0x2c]         ; 00474b37
    FADD float ptr [ESI + 0x14]         ; 00474b3a
    FLD float ptr [ESP + 0xb0]          ; 00474b3d
    FXCH                                ; 00474b44
    FSTP float ptr [ESP + 0x2c]         ; 00474b46
    FMUL float ptr [ESI + 0x30]         ; 00474b4a
    LEA EBX,[ESP + 0x4c]                ; 00474b4d
    LEA EAX,[ESP + 0x28]                ; 00474b51
    FADD float ptr [ESI + 0x18]         ; 00474b55
    MOV EDX,dword ptr [0x0060b27c]      ; 00474b58 | DAT_0060b27c
    FSTP float ptr [ESP + 0x30]         ; 00474b5e
    FLD float ptr [EAX]                 ; 00474b62
    FMUL float ptr [0x005f5b10]         ; 00474b64 | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 00474b6a
    FLD float ptr [EAX + 0x4]           ; 00474b6c
    FMUL float ptr [0x005f5b10]         ; 00474b6f | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 00474b75
    FLD float ptr [EAX + 0x8]           ; 00474b78
    FMUL float ptr [0x005f5b10]         ; 00474b7b | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 00474b81
    LEA EAX,[ESP + 0x4c]                ; 00474b84
    PUSH EAX                            ; 00474b88
    MOV EAX,dword ptr [EDX]             ; 00474b89 | DAT_01ba5c50
    ADD EAX,0x150                       ; 00474b8b
    PUSH EAX                            ; 00474b90
    CALL engine_special.cpp_FUN_0055d723 ; 00474b91
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00622024]                ; 00474b96 | DAT_00622024
    MOV EBX,dword ptr [0x00622054]      ; 00474b9b | DAT_00622054
    MOV EDX,dword ptr [0x00622084]      ; 00474ba1 | DAT_00622084
    AND EAX,EBX                         ; 00474ba7
    MOV ECX,dword ptr [0x006220b4]      ; 00474ba9 | DAT_006220b4
    AND EAX,EDX                         ; 00474baf
    MOV EBX,dword ptr [0x006220e4]      ; 00474bb1 | DAT_006220e4
    AND EAX,ECX                         ; 00474bb7
    MOV EDX,dword ptr [0x00622114]      ; 00474bb9 | DAT_00622114
    AND EAX,EBX                         ; 00474bbf
    MOV ECX,dword ptr [0x00622144]      ; 00474bc1 | DAT_00622144
    AND EAX,EDX                         ; 00474bc7
    MOV EBX,dword ptr [0x00622174]      ; 00474bc9 | DAT_00622174
    AND EAX,ECX                         ; 00474bcf
    AND EAX,EBX                         ; 00474bd1
    ADD ESP,0x8                         ; 00474bd3
    TEST EAX,0x80000000                 ; 00474bd6
    JZ 0x00474be5                       ; 00474bdb
        ;   XREF to: 00474be5 (CONDITIONAL_JUMP)  ; LAB_00474be5
    TEST AL,0xff                        ; 00474bdd
    JNZ 0x0047470a                      ; 00474bdf
        ;   XREF to: 0047470a (CONDITIONAL_JUMP)  ; LAB_0047470a
    MOV EAX,[0x01bd3c54]                ; 00474be5 | DAT_01bd3c54
        ;   Label: LAB_00474be5
    INC EAX                             ; 00474bea
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00474beb
    MOV [0x01bd3c54],EAX                ; 00474bf2 | DAT_01bd3c54
    CMP EDX,0x1                         ; 00474bf7
    JG 0x00474d3a                       ; 00474bfa
        ;   XREF to: 00474d3a (CONDITIONAL_JUMP)  ; LAB_00474d3a
    MOV dword ptr [ESP + 0xc0],EDI      ; 00474c00
        ;   Label: LAB_00474c00
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00474c07
    FILD dword ptr [ESP + 0xc0]         ; 00474c0e
    FMUL float ptr [ESI + 0x28]         ; 00474c15
    MOV dword ptr [ESP + 0xc0],EAX      ; 00474c18
    FADD float ptr [ESI + 0x10]         ; 00474c1f
    FILD dword ptr [ESP + 0xc0]         ; 00474c22
    FXCH                                ; 00474c29
    FSTP float ptr [ESP + 0x88]         ; 00474c2b
    FMUL float ptr [ESI + 0x2c]         ; 00474c32
    MOV dword ptr [ESP + 0xc0],EBP      ; 00474c35
    FADD float ptr [ESI + 0x14]         ; 00474c3c
    FILD dword ptr [ESP + 0xc0]         ; 00474c3f
    FXCH                                ; 00474c46
    FSTP float ptr [ESP + 0x8c]         ; 00474c48
    FMUL float ptr [ESI + 0x30]         ; 00474c4f
    MOV EBX,dword ptr [0x01bd3c58]      ; 00474c52 | DAT_01bd3c58
    MOV EDI,dword ptr [0x0060b280]      ; 00474c58 | DAT_0060b280
    INC EBX                             ; 00474c5e
    LEA EAX,[ESP + 0x88]                ; 00474c5f
    MOV dword ptr [0x01bd3c58],EBX      ; 00474c66 | DAT_01bd3c58
    PUSH EAX                            ; 00474c6c
    FADD float ptr [ESI + 0x18]         ; 00474c6d
    PUSH EDI                            ; 00474c70 | DAT_01ba5c50
    FSTP float ptr [ESP + 0x98]         ; 00474c71
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00474c78
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00474c7d
    MOV EBP,dword ptr [ESI]             ; 00474c80
    PUSH EBP                            ; 00474c82
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00474c83
    PUSH EAX                            ; 00474c8a
    CALL core_dcube.cpp_CDemonCube_rotateVertices_FUN_004468c0 ; 00474c8b
        ;   XREF to: 004468c0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_rotateVertices_FUN_004468c0(CDemonCube * this_ptr, uint rendering_mode)
    ADD ESP,0x8                         ; 00474c90
    PUSH 0x265370c                      ; 00474c93 | DAT_0265370c
    MOV EDX,dword ptr [0x0060b280]      ; 00474c98 | DAT_0060b280
    PUSH EDX                            ; 00474c9e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00474c9f
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00474ca4
    MOV EAX,[0x01bd3c5c]                ; 00474ca7 | DAT_01bd3c5c
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00474cac
    MOV EBX,EAX                         ; 00474cb3
    MOV dword ptr [EAX*0x4 + 0x1bd3c64],EDX ; 00474cb5
    SHL EAX,0x2                         ; 00474cbc
    SUB EAX,EBX                         ; 00474cbf
    MOV ESI,0x1be74e4                   ; 00474cc1
    SHL EAX,0x2                         ; 00474cc6
    ADD ESI,EAX                         ; 00474cc9
    LEA EAX,[ESP + 0x88]                ; 00474ccb
    CMP ESI,EAX                         ; 00474cd2
    JZ 0x00474cf3                       ; 00474cd4
        ;   XREF to: 00474cf3 (CONDITIONAL_JUMP)  ; LAB_00474cf3
    MOV EAX,dword ptr [ESP + 0x88]      ; 00474cd6
    MOV dword ptr [ESI],EAX             ; 00474cdd | DAT_01be74e4
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00474cdf
    MOV dword ptr [ESI + 0x4],EAX       ; 00474ce6 | DAT_01be74e8
    MOV EAX,dword ptr [ESP + 0x90]      ; 00474ce9
    MOV dword ptr [ESI + 0x8],EAX       ; 00474cf0 | DAT_01be74ec
    MOV ECX,dword ptr [0x01bd3c5c]      ; 00474cf3 | DAT_01bd3c5c
        ;   Label: LAB_00474cf3
    INC ECX                             ; 00474cf9
    MOV dword ptr [0x01bd3c5c],ECX      ; 00474cfa | DAT_01bd3c5c
    CMP ECX,0x4e20                      ; 00474d00
    JL 0x0047470a                       ; 00474d06
        ;   XREF to: 0047470a (CONDITIONAL_JUMP)  ; LAB_0047470a
    MOV ESI,0x5d1b73                    ; 00474d0c | = "..\\core\\dtrace.cpp"
    MOV EDI,0x792                       ; 00474d11
    PUSH 0x5d1b86                       ; 00474d16 | = "Too many drawn cubes.  Need to recomp..."
    MOV dword ptr [0x01d046a0],ESI      ; 00474d1b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00474d21 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00474d27
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00474d2c
    ADD ESP,0xc4                        ; 00474d2f
    POP EBP                             ; 00474d35
    POP EDI                             ; 00474d36
    POP ESI                             ; 00474d37
    POP EBX                             ; 00474d38
    RET                                 ; 00474d39
    MOV ECX,0x4                         ; 00474d3a
        ;   Label: LAB_00474d3a
    MOV EDX,0xffffffff                  ; 00474d3f
    MOV dword ptr [ESP + 0xc0],EBP      ; 00474d44
    XOR EBX,EBX                         ; 00474d4b
    MOV dword ptr [ESP + 0x4],ECX       ; 00474d4d
    MOV dword ptr [ESP + 0x8],EBX       ; 00474d51
    MOV dword ptr [ESP + 0xc],EBX       ; 00474d55
    MOV dword ptr [ESP + 0x10],EDX      ; 00474d59
    FILD dword ptr [ESP + 0xc0]         ; 00474d5d
    FMUL float ptr [ESI + 0x30]         ; 00474d64
    FADD float ptr [ESI + 0x18]         ; 00474d67
    FMUL double ptr [0x005d1bb3]        ; 00474d6a | DAT_005d1bb3
    MOV EAX,0x5                         ; 00474d70
    MOV dword ptr [ESP + 0x18],EBX      ; 00474d75
    MOV dword ptr [ESP + 0x20],EAX      ; 00474d79
    MOV dword ptr [ESP + 0x24],ECX      ; 00474d7d
    MOV EBX,0x1                         ; 00474d81
    MOV EAX,ESP                         ; 00474d86
    MOV ECX,dword ptr [0x0060b27c]      ; 00474d88 | DAT_0060b27c
    PUSH EAX                            ; 00474d8e
    CALL crt_math.c_round_FUN_005b7ff0  ; 00474d8f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH ECX                            ; 00474d94
    FISTP dword ptr [ESP + 0x1c]        ; 00474d95
    MOV dword ptr [ESP + 0x24],EBX      ; 00474d99
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0 ; 00474d9d
        ;   XREF to: 004699a0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00474da2
    TEST EAX,EAX                        ; 00474da5
    JNZ 0x00474c00                      ; 00474da7
        ;   XREF to: 00474c00 (CONDITIONAL_JUMP)  ; LAB_00474c00
    MOV dword ptr [ESP + 0x8],EAX       ; 00474dad
    MOV dword ptr [ESP + 0xc],EAX       ; 00474db1
    LEA EAX,[EBX + EBP*0x1]             ; 00474db5
    MOV dword ptr [ESP + 0xc0],EAX      ; 00474db8
    MOV dword ptr [ESP + 0x10],EBX      ; 00474dbf
    FILD dword ptr [ESP + 0xc0]         ; 00474dc3
    FMUL float ptr [ESI + 0x30]         ; 00474dca
    FADD float ptr [ESI + 0x18]         ; 00474dcd
    FMUL double ptr [0x005d1bbb]        ; 00474dd0 | DAT_005d1bbb
    MOV ECX,0x2                         ; 00474dd6
    MOV EDX,0x6                         ; 00474ddb
    MOV EBX,0x3                         ; 00474de0
    MOV EAX,0x7                         ; 00474de5
    MOV dword ptr [ESP + 0x18],ECX      ; 00474dea
    MOV dword ptr [ESP + 0x1c],EBX      ; 00474dee
    MOV dword ptr [ESP + 0x20],EAX      ; 00474df2
    MOV dword ptr [ESP + 0x24],EDX      ; 00474df6
    MOV EAX,ESP                         ; 00474dfa
    MOV ECX,dword ptr [0x0060b27c]      ; 00474dfc | DAT_0060b27c
    PUSH EAX                            ; 00474e02
    CALL crt_math.c_round_FUN_005b7ff0  ; 00474e03
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH ECX                            ; 00474e08
    FISTP dword ptr [ESP + 0x1c]        ; 00474e09
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0 ; 00474e0d
        ;   XREF to: 004699a0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00474e12
    TEST EAX,EAX                        ; 00474e15
    JNZ 0x00474c00                      ; 00474e17
        ;   XREF to: 00474c00 (CONDITIONAL_JUMP)  ; LAB_00474c00
    MOV EBX,0xffffffff                  ; 00474e1d
    MOV dword ptr [ESP + 0xc],EAX       ; 00474e22
    MOV dword ptr [ESP + 0x10],EAX      ; 00474e26
    MOV dword ptr [ESP + 0xc0],EDI      ; 00474e2a
    MOV dword ptr [ESP + 0x8],EBX       ; 00474e31
    FILD dword ptr [ESP + 0xc0]         ; 00474e35
    FMUL float ptr [ESI + 0x28]         ; 00474e3c
    FADD float ptr [ESI + 0x10]         ; 00474e3f
    FMUL double ptr [0x005d1bb3]        ; 00474e42 | DAT_005d1bb3
    MOV EDX,0x3                         ; 00474e48
    MOV ECX,dword ptr [0x0060b27c]      ; 00474e4d | DAT_0060b27c
    MOV EBX,0x4                         ; 00474e53
    MOV dword ptr [ESP + 0x18],EAX      ; 00474e58
    MOV EAX,0x7                         ; 00474e5c
    MOV dword ptr [ESP + 0x1c],EBX      ; 00474e61
    MOV dword ptr [ESP + 0x20],EAX      ; 00474e65
    MOV EAX,ESP                         ; 00474e69
    MOV dword ptr [ESP + 0x24],EDX      ; 00474e6b
    PUSH EAX                            ; 00474e6f
    CALL crt_math.c_round_FUN_005b7ff0  ; 00474e70
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH ECX                            ; 00474e75
    FISTP dword ptr [ESP + 0x1c]        ; 00474e76
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0 ; 00474e7a
        ;   XREF to: 004699a0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00474e7f
    TEST EAX,EAX                        ; 00474e82
    JNZ 0x00474c00                      ; 00474e84
        ;   XREF to: 00474c00 (CONDITIONAL_JUMP)  ; LAB_00474c00
    MOV EBX,0x1                         ; 00474e8a
    MOV dword ptr [ESP + 0xc],EAX       ; 00474e8f
    MOV dword ptr [ESP + 0x10],EAX      ; 00474e93
    LEA EAX,[EDI + EBX*0x1]             ; 00474e97
    MOV dword ptr [ESP + 0xc0],EAX      ; 00474e9a
    MOV dword ptr [ESP + 0x8],EBX       ; 00474ea1
    FILD dword ptr [ESP + 0xc0]         ; 00474ea5
    FMUL float ptr [ESI + 0x28]         ; 00474eac
    FADD float ptr [ESI + 0x10]         ; 00474eaf
    FMUL double ptr [0x005d1bbb]        ; 00474eb2 | DAT_005d1bbb
    MOV EDX,0x5                         ; 00474eb8
    MOV ECX,dword ptr [0x0060b27c]      ; 00474ebd | DAT_0060b27c
    MOV EAX,0x6                         ; 00474ec3
    MOV dword ptr [ESP + 0x18],EBX      ; 00474ec8
    MOV dword ptr [ESP + 0x20],EAX      ; 00474ecc
    MOV dword ptr [ESP + 0x24],EDX      ; 00474ed0
    MOV EAX,ESP                         ; 00474ed4
    MOV EBX,0x2                         ; 00474ed6
    PUSH EAX                            ; 00474edb
    CALL crt_math.c_round_FUN_005b7ff0  ; 00474edc
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH ECX                            ; 00474ee1
    FISTP dword ptr [ESP + 0x1c]        ; 00474ee2
    MOV dword ptr [ESP + 0x24],EBX      ; 00474ee6
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0 ; 00474eea
        ;   XREF to: 004699a0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00474eef
    TEST EAX,EAX                        ; 00474ef2
    JNZ 0x00474c00                      ; 00474ef4
        ;   XREF to: 00474c00 (CONDITIONAL_JUMP)  ; LAB_00474c00
    MOV dword ptr [ESP + 0x8],EAX       ; 00474efa
    MOV dword ptr [ESP + 0xc],0x1       ; 00474efe
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00474f06
    INC EAX                             ; 00474f0d
    XOR EDX,EDX                         ; 00474f0e
    MOV dword ptr [ESP + 0xc0],EAX      ; 00474f10
    MOV dword ptr [ESP + 0x10],EDX      ; 00474f17
    FILD dword ptr [ESP + 0xc0]         ; 00474f1b
    FMUL float ptr [ESI + 0x2c]         ; 00474f22
    FADD float ptr [ESI + 0x14]         ; 00474f25
    FMUL double ptr [0x005d1bbb]        ; 00474f28 | DAT_005d1bbb
    MOV ECX,0x4                         ; 00474f2e
    MOV EBX,0x5                         ; 00474f33
    MOV EDX,0x7                         ; 00474f38
    MOV EAX,0x6                         ; 00474f3d
    MOV dword ptr [ESP + 0x18],ECX      ; 00474f42
    MOV dword ptr [ESP + 0x1c],EBX      ; 00474f46
    MOV dword ptr [ESP + 0x20],EAX      ; 00474f4a
    MOV dword ptr [ESP + 0x24],EDX      ; 00474f4e
    MOV EAX,ESP                         ; 00474f52
    MOV ECX,dword ptr [0x0060b27c]      ; 00474f54 | DAT_0060b27c
    PUSH EAX                            ; 00474f5a
    CALL crt_math.c_round_FUN_005b7ff0  ; 00474f5b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH ECX                            ; 00474f60
    FISTP dword ptr [ESP + 0x1c]        ; 00474f61
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0 ; 00474f65
        ;   XREF to: 004699a0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00474f6a
    TEST EAX,EAX                        ; 00474f6d
    JNZ 0x00474c00                      ; 00474f6f
        ;   XREF to: 00474c00 (CONDITIONAL_JUMP)  ; LAB_00474c00
    MOV dword ptr [ESP + 0x8],EAX       ; 00474f75
    MOV dword ptr [ESP + 0xc],0xffffffff ; 00474f79
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00474f81
    XOR EDX,EDX                         ; 00474f88
    MOV dword ptr [ESP + 0xc0],EAX      ; 00474f8a
    MOV dword ptr [ESP + 0x10],EDX      ; 00474f91
    FILD dword ptr [ESP + 0xc0]         ; 00474f95
    FMUL float ptr [ESI + 0x2c]         ; 00474f9c
    FADD float ptr [ESI + 0x14]         ; 00474f9f
    FMUL double ptr [0x005d1bb3]        ; 00474fa2 | DAT_005d1bb3
    MOV ECX,dword ptr [0x0060b27c]      ; 00474fa8 | DAT_0060b27c
    XOR EBX,EBX                         ; 00474fae
    MOV EDX,0x3                         ; 00474fb0
    MOV EAX,0x2                         ; 00474fb5
    MOV dword ptr [ESP + 0x18],EBX      ; 00474fba
    MOV dword ptr [ESP + 0x20],EAX      ; 00474fbe
    MOV dword ptr [ESP + 0x24],EDX      ; 00474fc2
    MOV EAX,ESP                         ; 00474fc6
    MOV EBX,0x1                         ; 00474fc8
    PUSH EAX                            ; 00474fcd
    CALL crt_math.c_round_FUN_005b7ff0  ; 00474fce
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH ECX                            ; 00474fd3
    FISTP dword ptr [ESP + 0x1c]        ; 00474fd4
    MOV dword ptr [ESP + 0x24],EBX      ; 00474fd8
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0 ; 00474fdc
        ;   XREF to: 004699a0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00474fe1
    TEST EAX,EAX                        ; 00474fe4
    JNZ 0x00474c00                      ; 00474fe6
        ;   XREF to: 00474c00 (CONDITIONAL_JUMP)  ; LAB_00474c00
    ADD ESP,0xc4                        ; 00474fec
    POP EBP                             ; 00474ff2
    POP EDI                             ; 00474ff3
    POP ESI                             ; 00474ff4
    POP EBX                             ; 00474ff5
    RET                                 ; 00474ff6

