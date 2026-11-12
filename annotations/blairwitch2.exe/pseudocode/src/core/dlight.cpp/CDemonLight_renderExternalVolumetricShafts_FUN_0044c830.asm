; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0044c830(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x18c]:1  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined        Stack[-0x158]:1  local_158
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined        Stack[-0x140]:1  local_140
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined        Stack[-0x104]:1  local_104
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x78]:4  local_78
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60 at 0044afd8
;
; Referenced Globals:
;   undefined4 DAT_005cf50f
;   undefined4 DAT_005cf517
;   undefined4 DAT_005cf51f
;   undefined4 DAT_005cf527
;   undefined4 DAT_005cf52f
;   undefined4 DAT_005cf537
;   undefined4 DAT_005cf53b
;   undefined4 DAT_005cf53f
;   undefined4 DAT_005cf547
;   undefined4 DAT_005cf54f
;   undefined4 DAT_005f5050
;   undefined4 DAT_005f5058
;   undefined4 DAT_0060b280
;   CGame* g_CGamePtr = 01cb6900
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   ... and 3 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449530
;   core_dirmat.cpp_FUN_004495a0
;   core_dirmat.cpp_FUN_004496e0
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750
;   engine_drender.cpp_FUN_0046b5e0
;   engine_drender.cpp_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c830
        ;   Label: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0044c830
    PUSH ESI                            ; 0044c831
    PUSH EDI                            ; 0044c832
    PUSH EBP                            ; 0044c833
    MOV EBP,ESP                         ; 0044c834
    SUB ESP,0x17c                       ; 0044c836
    SUB EBP,0x7e                        ; 0044c83c
    MOV EAX,dword ptr [EBP + 0x92]      ; 0044c83f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 0044c845
    JZ 0x0044c86f                       ; 0044c84c
        ;   XREF to: 0044c86f (CONDITIONAL_JUMP)  ; LAB_0044c86f
    MOV EAX,[0x0061b5a8]                ; 0044c84e | g_CDemonSetPtr
    FLD float ptr [EAX + 0x15ac80]      ; 0044c853 | g_CDemonSetInstance.active_fog.density_multiplier
    FCOMP double ptr [0x005cf50f]       ; 0044c859 | DAT_005cf50f
    FNSTSW AX                           ; 0044c85f
    SAHF                                ; 0044c861
    JC 0x0044c86f                       ; 0044c862
        ;   XREF to: 0044c86f (CONDITIONAL_JUMP)  ; LAB_0044c86f
    MOV EAX,[0x00616494]                ; 0044c864 | g_CGamePtr
    CMP dword ptr [EAX + 0xc],0x0       ; 0044c869 | g_CGameInstance.halo_mode
    JNZ 0x0044c877                      ; 0044c86d
        ;   XREF to: 0044c877 (CONDITIONAL_JUMP)  ; LAB_0044c877
    LEA ESP,[EBP + 0x7e]                ; 0044c86f
        ;   Label: LAB_0044c86f
    POP EBP                             ; 0044c872
    POP EDI                             ; 0044c873
    POP ESI                             ; 0044c874
    POP EBX                             ; 0044c875
    RET                                 ; 0044c876
    MOV EBX,dword ptr [0x0060b280]      ; 0044c877 | DAT_0060b280
        ;   Label: LAB_0044c877
    PUSH EBX                            ; 0044c87d | DAT_01ba5c50
    LEA ESI,[EBP + -0x2e]               ; 0044c87e
    LEA EDI,[EBP + -0x16]               ; 0044c881
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0 ; 0044c884
        ;   XREF to: 0046b5c0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[EBP + -0x2e]               ; 0044c889
    LEA EAX,[EBP + -0x16]               ; 0044c88c
    LEA EBX,[EBP + 0xffffff42]          ; 0044c88f
    ADD ESP,0x4                         ; 0044c895
    MOVSD ES:EDI,ESI                    ; 0044c898
    MOVSD ES:EDI,ESI                    ; 0044c899
    MOVSD ES:EDI,ESI                    ; 0044c89a
    FILD dword ptr [EAX]                ; 0044c89b
    FMUL float ptr [0x005f5058]         ; 0044c89d | DAT_005f5058
    FSTP float ptr [EBX]                ; 0044c8a3
    FILD dword ptr [EAX + 0x4]          ; 0044c8a5
    FMUL float ptr [0x005f5058]         ; 0044c8a8 | DAT_005f5058
    FSTP float ptr [EBX + 0x4]          ; 0044c8ae
    FILD dword ptr [EAX + 0x8]          ; 0044c8b1
    FMUL float ptr [0x005f5058]         ; 0044c8b4 | DAT_005f5058
    FSTP float ptr [EBX + 0x8]          ; 0044c8ba
    FLD float ptr [EBP + 0xffffff42]    ; 0044c8bd
    FLD float ptr [EBP + 0xffffff46]    ; 0044c8c3
    FLD float ptr [EBP + 0xffffff4a]    ; 0044c8c9
    MOV EBX,dword ptr [EBP + 0x92]      ; 0044c8cf
    LEA EDI,[EBP + -0x3a]               ; 0044c8d5
    LEA ESI,[EBP + -0x22]               ; 0044c8d8
    FXCH ST2                            ; 0044c8db
    FSUB float ptr [EBX + 0x4]          ; 0044c8dd
    FXCH                                ; 0044c8e0
    FSUB float ptr [EBX + 0x8]          ; 0044c8e2
    FXCH ST2                            ; 0044c8e5
    FSUB float ptr [EBX + 0xc]          ; 0044c8e7
    FXCH                                ; 0044c8ea
    FSTP float ptr [EBP + -0x22]        ; 0044c8ec
    FXCH                                ; 0044c8ef
    FSTP float ptr [EBP + -0x1e]        ; 0044c8f1
    FSTP float ptr [EBP + -0x1a]        ; 0044c8f4
    MOVSD ES:EDI,ESI                    ; 0044c8f7
    MOVSD ES:EDI,ESI                    ; 0044c8f8
    MOVSD ES:EDI,ESI                    ; 0044c8f9
    FLD float ptr [EBP + -0x36]         ; 0044c8fa
    FMUL ST0                            ; 0044c8fd
    FLD float ptr [EBP + -0x3a]         ; 0044c8ff
    FMUL ST0                            ; 0044c902
    FADDP                               ; 0044c904
    FLD float ptr [EBP + -0x32]         ; 0044c906
    FMUL ST0                            ; 0044c909
    FADDP                               ; 0044c90b
    FSQRT                               ; 0044c90d
    ADD EBX,0x4                         ; 0044c90f
    FLDZ                                ; 0044c912
    FCOMPP                              ; 0044c914
    FNSTSW AX                           ; 0044c916
    SAHF                                ; 0044c918
    JNC 0x0044c86f                      ; 0044c919
        ;   XREF to: 0044c86f (CONDITIONAL_JUMP)  ; LAB_0044c86f
    MOV dword ptr [EBP + -0x62],0x3f800000 ; 0044c91f
    LEA EAX,[EBP + -0x6a]               ; 0044c926
    XOR ESI,ESI                         ; 0044c929
    PUSH EAX                            ; 0044c92b
    MOV EAX,dword ptr [EBP + 0x92]      ; 0044c92c
    MOV dword ptr [EBP + -0x6a],ESI     ; 0044c932
    ADD EAX,0x10                        ; 0044c935
    MOV dword ptr [EBP + -0x66],ESI     ; 0044c938
    PUSH EAX                            ; 0044c93b
    LEA ESI,[EBP + -0x5e]               ; 0044c93c
    MOV dword ptr [EBP + 0x76],EAX      ; 0044c93f
    CALL core_dirmat.cpp_FUN_00449530   ; 0044c942
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    ADD ESP,0x8                         ; 0044c947
    MOV ECX,dword ptr [0x0060b280]      ; 0044c94a | DAT_0060b280
    PUSH ECX                            ; 0044c950 | DAT_01ba5c50
    LEA ESI,[EBP + 0xffffff4e]          ; 0044c951
    LEA EDI,[EBP + 0xffffff72]          ; 0044c957
    CALL engine_drender.cpp_FUN_0046b5e0 ; 0044c95d
        ;   XREF to: 0046b5e0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b5e0()
    LEA ESI,[EBP + 0xffffff4e]          ; 0044c962
    LEA EAX,[EBP + 0xffffff72]          ; 0044c968
    ADD ESP,0x4                         ; 0044c96e
    MOVSD ES:EDI,ESI                    ; 0044c971
    MOVSD ES:EDI,ESI                    ; 0044c972
    MOVSD ES:EDI,ESI                    ; 0044c973
    PUSH EAX                            ; 0044c974
    FLD float ptr [EBP + 0xffffff76]    ; 0044c975
    FLD float ptr [EBP + 0xffffff72]    ; 0044c97b
    FSUB float ptr [EBX]                ; 0044c981
    FLD float ptr [EBP + 0xffffff7a]    ; 0044c983
    FXCH                                ; 0044c989
    FSTP float ptr [EBP + 0xffffff72]   ; 0044c98b
    FXCH                                ; 0044c991
    FSUB float ptr [EBX + 0x4]          ; 0044c993
    LEA ESI,[EBP + -0xa]                ; 0044c996
    FSTP float ptr [EBP + 0xffffff76]   ; 0044c999
    FSUB float ptr [EBX + 0x8]          ; 0044c99f
    MOV EBX,dword ptr [EBP + 0x76]      ; 0044c9a2
    LEA EDI,[EBP + 0xffffff66]          ; 0044c9a5
    PUSH EBX                            ; 0044c9ab
    FSTP float ptr [EBP + 0xffffff7a]   ; 0044c9ac
    CALL core_dirmat.cpp_FUN_004495a0   ; 0044c9b2
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[EBP + -0xa]                ; 0044c9b7
    LEA EDX,[EBP + 0xffffff66]          ; 0044c9ba
    LEA EAX,[EBP + 0xffffff72]          ; 0044c9c0
    ADD ESP,0x8                         ; 0044c9c6
    MOVSD ES:EDI,ESI                    ; 0044c9c9
    MOVSD ES:EDI,ESI                    ; 0044c9ca
    MOVSD ES:EDI,ESI                    ; 0044c9cb
    CMP EAX,EDX                         ; 0044c9cc
    JZ 0x0044c9f4                       ; 0044c9ce
        ;   XREF to: 0044c9f4 (CONDITIONAL_JUMP)  ; LAB_0044c9f4
    MOV EAX,dword ptr [EBP + 0xffffff66] ; 0044c9d0
    MOV dword ptr [EBP + 0xffffff72],EAX ; 0044c9d6
    MOV EAX,dword ptr [EBP + 0xffffff6a] ; 0044c9dc
    MOV dword ptr [EBP + 0xffffff76],EAX ; 0044c9e2
    MOV EAX,dword ptr [EBP + 0xffffff6e] ; 0044c9e8
    MOV dword ptr [EBP + 0xffffff7a],EAX ; 0044c9ee
    FLD float ptr [EBP + 0xffffff7a]    ; 0044c9f4
        ;   Label: LAB_0044c9f4
    FMUL double ptr [0x005cf517]        ; 0044c9fa | DAT_005cf517
    MOV EAX,dword ptr [EBP + 0x92]      ; 0044ca00
    FDIV float ptr [EAX + 0x38]         ; 0044ca06
    FLD float ptr [EBP + 0xffffff76]    ; 0044ca09
    FMUL ST0                            ; 0044ca0f
    FLD float ptr [EBP + 0xffffff72]    ; 0044ca11
    FMUL ST0                            ; 0044ca17
    FXCH ST2                            ; 0044ca19
    FMUL double ptr [0x005cf51f]        ; 0044ca1b | DAT_005cf51f
    FXCH ST2                            ; 0044ca21
    FADDP                               ; 0044ca23
    FLD ST0                             ; 0044ca25
    FLD ST2                             ; 0044ca27
    FMULP ST3                           ; 0044ca29
    FDIV ST0,ST2                        ; 0044ca2b
    FLD1                                ; 0044ca2d
    FSUBRP                              ; 0044ca2f
    FSTP float ptr [EBP + 0x32]         ; 0044ca31
    FCOMPP                              ; 0044ca34
    FNSTSW AX                           ; 0044ca36
    SAHF                                ; 0044ca38
    JNC 0x0044ca4d                      ; 0044ca39
        ;   XREF to: 0044ca4d (CONDITIONAL_JUMP)  ; LAB_0044ca4d
    FLD float ptr [EBP + 0x32]          ; 0044ca3b
    FCOMP double ptr [0x005cf527]       ; 0044ca3e | DAT_005cf527
    FNSTSW AX                           ; 0044ca44
    SAHF                                ; 0044ca46
    JA 0x0044c86f                       ; 0044ca47
        ;   XREF to: 0044c86f (CONDITIONAL_JUMP)  ; LAB_0044c86f
    MOV EAX,dword ptr [EBP + 0x92]      ; 0044ca4d
        ;   Label: LAB_0044ca4d
    ADD EAX,0x4                         ; 0044ca53
    PUSH EAX                            ; 0044ca56
    MOV ESI,dword ptr [0x0060b280]      ; 0044ca57 | DAT_0060b280
    PUSH ESI                            ; 0044ca5d | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0044ca5e
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0044ca63
    ADD ESP,0x8                         ; 0044ca69
    ADD EAX,0x10                        ; 0044ca6c
    PUSH EAX                            ; 0044ca6f
    LEA ESI,[EBP + 0xffffff36]          ; 0044ca70
    LEA EDI,[EBP + -0x76]               ; 0044ca76
    CALL core_dirmat.cpp_FUN_004496e0   ; 0044ca79
        ;   XREF to: 004496e0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004496e0()
    ADD ESP,0x4                         ; 0044ca7e
    LEA ESI,[EBP + 0xffffff36]          ; 0044ca81
    LEA EAX,[EBP + -0x76]               ; 0044ca87
    PUSH 0x0                            ; 0044ca8a
    MOVSD ES:EDI,ESI                    ; 0044ca8c
    MOVSD ES:EDI,ESI                    ; 0044ca8d
    MOVSD ES:EDI,ESI                    ; 0044ca8e
    PUSH EAX                            ; 0044ca8f
    MOV EDI,dword ptr [0x0060b280]      ; 0044ca90 | DAT_0060b280
    PUSH EDI                            ; 0044ca96 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0044ca97
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    MOV EAX,0x1                         ; 0044ca9c
    ADD ESP,0xc                         ; 0044caa1
    MOV dword ptr [EBP + 0x36],EAX      ; 0044caa4
    MOV EAX,dword ptr [EBP + 0x92]      ; 0044caa7
        ;   Label: LAB_0044caa7
    FLD float ptr [EAX + 0x38]          ; 0044caad
    FDIVR double ptr [0x005cf517]       ; 0044cab0 | DAT_005cf517
    MOV EAX,dword ptr [EBP + 0x36]      ; 0044cab6
    MOV dword ptr [EBP + 0x76],EAX      ; 0044cab9
    FILD dword ptr [EBP + 0x76]         ; 0044cabc
    FMULP                               ; 0044cabf
    FMUL double ptr [0x005cf52f]        ; 0044cac1 | DAT_005cf52f
    FST float ptr [EBP + 0x3a]          ; 0044cac7
    FLD ST0                             ; 0044caca
    FLD1                                ; 0044cacc
    FPATAN                              ; 0044cace
    FCOS                                ; 0044cad0
    FLD1                                ; 0044cad2
    XOR EDX,EDX                         ; 0044cad4
    FSUBRP ST2,ST0                      ; 0044cad6
    MOV dword ptr [EBP + 0x3e],EDX      ; 0044cad8
    FXCH                                ; 0044cadb
    FSTP float ptr [EBP + 0x46]         ; 0044cadd
    FSTP float ptr [EBP + 0x42]         ; 0044cae0
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0044cae3
        ;   Label: LAB_0044cae3
    MOV dword ptr [EBP + 0x76],EAX      ; 0044cae6
    FLD float ptr [0x005cf537]          ; 0044cae9 | DAT_005cf537
    FILD dword ptr [EBP + 0x76]         ; 0044caef
    FMUL ST1                            ; 0044caf2
    FLD float ptr [0x005cf53b]          ; 0044caf4 | DAT_005cf53b
    FXCH                                ; 0044cafa
    FMUL ST1                            ; 0044cafc
    INC EAX                             ; 0044cafe
    FLD double ptr [0x005cf51f]         ; 0044caff | DAT_005cf51f
    FXCH                                ; 0044cb05
    FMUL ST1                            ; 0044cb07
    MOV dword ptr [EBP + 0x76],EAX      ; 0044cb09
    FLD ST0                             ; 0044cb0c
    FSIN                                ; 0044cb0e
    FILD dword ptr [EBP + 0x76]         ; 0044cb10
    FMULP ST5                           ; 0044cb13
    FXCH ST4                            ; 0044cb15
    FMULP ST3                           ; 0044cb17
    FXCH ST2                            ; 0044cb19
    FMULP                               ; 0044cb1b
    FLD ST0                             ; 0044cb1d
    FSIN                                ; 0044cb1f
    FXCH ST2                            ; 0044cb21
    FCOS                                ; 0044cb23
    FXCH                                ; 0044cb25
    FCOS                                ; 0044cb27
    MOV EDX,dword ptr [EBP + 0x92]      ; 0044cb29
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 0044cb2f
    MOV EAX,dword ptr [EBP + 0x92]      ; 0044cb35
    SAR EDX,0x1f                        ; 0044cb3b
    MOV EAX,dword ptr [EAX + 0x1cc0]    ; 0044cb3e
    SUB EAX,EDX                         ; 0044cb44
    SAR EAX,0x1                         ; 0044cb46
    MOV EDX,dword ptr [EBP + 0x92]      ; 0044cb48
    MOV dword ptr [EBP + 0x76],EAX      ; 0044cb4e
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 0044cb51
    MOV EAX,dword ptr [EBP + 0x92]      ; 0044cb57
    SAR EDX,0x1f                        ; 0044cb5d
    MOV EAX,dword ptr [EAX + 0x1cc4]    ; 0044cb60
    SUB EAX,EDX                         ; 0044cb66
    SAR EAX,0x1                         ; 0044cb68
    FLD float ptr [EBP + 0x3a]          ; 0044cb6a
    FXCH ST2                            ; 0044cb6d
    FMUL ST2                            ; 0044cb6f
    MOV dword ptr [EBP + 0x7a],EAX      ; 0044cb71
    FSTP float ptr [EBP + 0x52]         ; 0044cb74
    FILD dword ptr [EBP + 0x7a]         ; 0044cb77
    FLD ST0                             ; 0044cb7a
    FMUL float ptr [EBP + 0x52]         ; 0044cb7c
    MOV EDX,dword ptr [EBP + 0x92]      ; 0044cb7f
    FSUBP                               ; 0044cb85
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 0044cb87
    CALL crt_math.c_round_FUN_005b7ff0  ; 0044cb8d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBP + 0x16]        ; 0044cb92
    MOV EAX,dword ptr [EBP + 0x16]      ; 0044cb95
    IMUL EAX,ECX                        ; 0044cb98
    FXCH ST3                            ; 0044cb9b
    FMUL ST1                            ; 0044cb9d
    FSTP float ptr [EBP + 0x56]         ; 0044cb9f
    FILD dword ptr [EBP + 0x76]         ; 0044cba2
    FLD ST0                             ; 0044cba5
    FMUL float ptr [EBP + 0x56]         ; 0044cba7
    FADDP                               ; 0044cbaa
    FXCH ST2                            ; 0044cbac
    FMUL ST1                            ; 0044cbae
    FXCH ST2                            ; 0044cbb0
    CALL crt_math.c_round_FUN_005b7ff0  ; 0044cbb2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBP + 0x72]        ; 0044cbb7
    ADD EAX,dword ptr [EBP + 0x72]      ; 0044cbba
    LEA EDX,[EAX + EAX*0x1]             ; 0044cbbd
    MOV EAX,dword ptr [EBP + 0x92]      ; 0044cbc0
    FMULP ST2                           ; 0044cbc6
    MOV EAX,dword ptr [EAX + 0x2f94]    ; 0044cbc8
    ADD EDX,EAX                         ; 0044cbce
    XOR EAX,EAX                         ; 0044cbd0
    MOV AX,word ptr [EDX]               ; 0044cbd2
    MOV dword ptr [EBP + 0x7a],EAX      ; 0044cbd5
    XOR ESI,ESI                         ; 0044cbd8
    FILD dword ptr [EBP + 0x7a]         ; 0044cbda
    FMUL double ptr [0x005cf53f]        ; 0044cbdd | DAT_005cf53f
    MOV dword ptr [EBP + 0x62],ESI      ; 0044cbe3
    FXCH                                ; 0044cbe6
    FSTP float ptr [EBP + 0x4e]         ; 0044cbe8
    FSTP float ptr [EBP + 0x5e]         ; 0044cbeb
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0044cbee
    FSTP float ptr [EBP + 0x4a]         ; 0044cbf1
    MOV dword ptr [EBP + 0x5a],EAX      ; 0044cbf4
    MOV EAX,dword ptr [EBP + 0x92]      ; 0044cbf7
        ;   Label: LAB_0044cbf7
    MOV EAX,dword ptr [EAX + 0x140]     ; 0044cbfd
    FLD float ptr [EBP + 0x42]          ; 0044cc03
    MOV dword ptr [EBP + 0x1e],EAX      ; 0044cc06
    MOV EAX,dword ptr [EBP + 0x62]      ; 0044cc09
    FMUL float ptr [EBP + 0x1e]         ; 0044cc0c
    MOV dword ptr [EBP + 0x7a],EAX      ; 0044cc0f
    FILD dword ptr [EBP + 0x7a]         ; 0044cc12
    FMUL ST1                            ; 0044cc15
    FLD float ptr [0x005cf547]          ; 0044cc17 | DAT_005cf547
    FXCH                                ; 0044cc1d
    FMUL ST1                            ; 0044cc1f
    FLD float ptr [EBP + 0x1e]          ; 0044cc21
    FXCH                                ; 0044cc24
    FSTP float ptr [EBP + 0x6a]         ; 0044cc26
    FSUB float ptr [EBP + 0x6a]         ; 0044cc29
    FLD1                                ; 0044cc2c
    FDIV float ptr [EBP + 0x1e]         ; 0044cc2e
    INC EAX                             ; 0044cc31
    FXCH                                ; 0044cc32
    FMUL ST1                            ; 0044cc34
    MOV dword ptr [EBP + 0x7a],EAX      ; 0044cc36
    FLD double ptr [0x005cf54f]         ; 0044cc39 | DAT_005cf54f
    FXCH                                ; 0044cc3f
    FMUL ST1                            ; 0044cc41
    FILD dword ptr [EBP + 0x7a]         ; 0044cc43
    FMULP ST5                           ; 0044cc46
    FLD float ptr [EBP + 0x46]          ; 0044cc48
    FXCH                                ; 0044cc4b
    FMUL ST1                            ; 0044cc4d
    MOV EAX,dword ptr [EBP + 0x92]      ; 0044cc4f
    FXCH ST5                            ; 0044cc55
    FMULP ST4                           ; 0044cc57
    FLD float ptr [EAX + 0x2fa8]        ; 0044cc59
    FMULP ST5                           ; 0044cc5f
    FXCH ST3                            ; 0044cc61
    FSTP float ptr [EBP + 0x66]         ; 0044cc63
    FXCH ST3                            ; 0044cc66
    FSTP float ptr [EBP + 0x2a]         ; 0044cc68
    FLD float ptr [EBP + 0x1e]          ; 0044cc6b
    FSUB float ptr [EBP + 0x66]         ; 0044cc6e
    FMULP                               ; 0044cc71
    FMULP ST2                           ; 0044cc73
    FMULP                               ; 0044cc75
    FMUL float ptr [EAX + 0x2fa8]       ; 0044cc77
    FSTP float ptr [EBP + 0x2e]         ; 0044cc7d
    FLD float ptr [EBP + 0x2a]          ; 0044cc80
    FISTP dword ptr [EBP + 0x22]        ; 0044cc86
    FLD float ptr [EBP + 0x2e]          ; 0044cc8c
    FISTP dword ptr [EBP + 0x26]        ; 0044cc92
    FLD float ptr [EBP + 0x6a]          ; 0044cc98
    FCOMP float ptr [EBP + 0x5e]        ; 0044cc9b
    FNSTSW AX                           ; 0044cc9e
    SAHF                                ; 0044cca0
    JNC 0x0044cf23                      ; 0044cca1
        ;   XREF to: 0044cf23 (CONDITIONAL_JUMP)  ; LAB_0044cf23
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0044cca7
    MOV dword ptr [EBP + -0x3e],EAX     ; 0044ccaa
        ;   Label: LAB_0044ccaa
    FLD float ptr [EBP + -0x3e]         ; 0044ccad
    FMUL float ptr [EBP + 0x56]         ; 0044ccb0
    FLD float ptr [EBP + -0x3e]         ; 0044ccb3
    FMUL float ptr [EBP + 0x52]         ; 0044ccb6
    LEA EBX,[EBP + -0x52]               ; 0044ccb9
    LEA EAX,[EBP + -0x46]               ; 0044ccbc
    MOV EDX,dword ptr [0x0060b280]      ; 0044ccbf | DAT_0060b280
    FXCH                                ; 0044ccc5
    FSTP float ptr [EBP + -0x46]        ; 0044ccc7
    FSTP float ptr [EBP + -0x42]        ; 0044ccca
    FLD float ptr [EAX]                 ; 0044cccd
    FMUL float ptr [0x005f5050]         ; 0044cccf | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044ccd5
    FLD float ptr [EAX + 0x4]           ; 0044ccd7
    FMUL float ptr [0x005f5050]         ; 0044ccda | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044cce0
    FLD float ptr [EAX + 0x8]           ; 0044cce3
    FMUL float ptr [0x005f5050]         ; 0044cce6 | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044ccec
    LEA EAX,[EBP + -0x52]               ; 0044ccef
    PUSH EAX                            ; 0044ccf2
    MOV EAX,dword ptr [EDX]             ; 0044ccf3 | DAT_01ba5c50
    PUSH EAX                            ; 0044ccf5
    CALL engine_special.cpp_FUN_0055d723 ; 0044ccf6
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x6a]          ; 0044ccfb
    ADD ESP,0x8                         ; 0044ccfe
    FCOMP float ptr [EBP + 0x5a]        ; 0044cd01
    FNSTSW AX                           ; 0044cd04
    SAHF                                ; 0044cd06
    JNC 0x0044cf2b                      ; 0044cd07
        ;   XREF to: 0044cf2b (CONDITIONAL_JUMP)  ; LAB_0044cf2b
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0044cd0d
    MOV dword ptr [EBP + -0x3e],EAX     ; 0044cd10
        ;   Label: LAB_0044cd10
    FLD float ptr [EBP + -0x3e]         ; 0044cd13
    FMUL float ptr [EBP + 0x4e]         ; 0044cd16
    FLD float ptr [EBP + -0x3e]         ; 0044cd19
    FMUL float ptr [EBP + 0x4a]         ; 0044cd1c
    LEA EBX,[EBP + 0xffffff2a]          ; 0044cd1f
    LEA EAX,[EBP + -0x46]               ; 0044cd25
    MOV EDX,dword ptr [0x0060b280]      ; 0044cd28 | DAT_0060b280
    FXCH                                ; 0044cd2e
    FSTP float ptr [EBP + -0x46]        ; 0044cd30
    FSTP float ptr [EBP + -0x42]        ; 0044cd33
    FLD float ptr [EAX]                 ; 0044cd36
    FMUL float ptr [0x005f5050]         ; 0044cd38 | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044cd3e
    FLD float ptr [EAX + 0x4]           ; 0044cd40
    FMUL float ptr [0x005f5050]         ; 0044cd43 | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044cd49
    FLD float ptr [EAX + 0x8]           ; 0044cd4c
    FMUL float ptr [0x005f5050]         ; 0044cd4f | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044cd55
    LEA EAX,[EBP + 0xffffff2a]          ; 0044cd58
    PUSH EAX                            ; 0044cd5e
    MOV EAX,dword ptr [EDX]             ; 0044cd5f | DAT_01ba5c50
    ADD EAX,0x30                        ; 0044cd61
    PUSH EAX                            ; 0044cd64
    CALL engine_special.cpp_FUN_0055d723 ; 0044cd65
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x66]          ; 0044cd6a
    ADD ESP,0x8                         ; 0044cd6d
    FCOMP float ptr [EBP + 0x5a]        ; 0044cd70
    FNSTSW AX                           ; 0044cd73
    SAHF                                ; 0044cd75
    JNC 0x0044cf33                      ; 0044cd76
        ;   XREF to: 0044cf33 (CONDITIONAL_JUMP)  ; LAB_0044cf33
    MOV EAX,dword ptr [EBP + 0x66]      ; 0044cd7c
    MOV dword ptr [EBP + -0x3e],EAX     ; 0044cd7f
        ;   Label: LAB_0044cd7f
    FLD float ptr [EBP + -0x3e]         ; 0044cd82
    FMUL float ptr [EBP + 0x4e]         ; 0044cd85
    FLD float ptr [EBP + -0x3e]         ; 0044cd88
    FMUL float ptr [EBP + 0x4a]         ; 0044cd8b
    LEA EBX,[EBP + 0xffffff5a]          ; 0044cd8e
    LEA EAX,[EBP + -0x46]               ; 0044cd94
    MOV EDX,dword ptr [0x0060b280]      ; 0044cd97 | DAT_0060b280
    FXCH                                ; 0044cd9d
    FSTP float ptr [EBP + -0x46]        ; 0044cd9f
    FSTP float ptr [EBP + -0x42]        ; 0044cda2
    FLD float ptr [EAX]                 ; 0044cda5
    FMUL float ptr [0x005f5050]         ; 0044cda7 | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044cdad
    FLD float ptr [EAX + 0x4]           ; 0044cdaf
    FMUL float ptr [0x005f5050]         ; 0044cdb2 | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044cdb8
    FLD float ptr [EAX + 0x8]           ; 0044cdbb
    FMUL float ptr [0x005f5050]         ; 0044cdbe | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044cdc4
    LEA EAX,[EBP + 0xffffff5a]          ; 0044cdc7
    PUSH EAX                            ; 0044cdcd
    MOV EAX,dword ptr [EDX]             ; 0044cdce | DAT_01ba5c50
    ADD EAX,0x60                        ; 0044cdd0
    PUSH EAX                            ; 0044cdd3
    CALL engine_special.cpp_FUN_0055d723 ; 0044cdd4
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x66]          ; 0044cdd9
    ADD ESP,0x8                         ; 0044cddc
    FCOMP float ptr [EBP + 0x5e]        ; 0044cddf
    FNSTSW AX                           ; 0044cde2
    SAHF                                ; 0044cde4
    JNC 0x0044cf3b                      ; 0044cde5
        ;   XREF to: 0044cf3b (CONDITIONAL_JUMP)  ; LAB_0044cf3b
    MOV EAX,dword ptr [EBP + 0x66]      ; 0044cdeb
    MOV dword ptr [EBP + -0x3e],EAX     ; 0044cdee
        ;   Label: LAB_0044cdee
    FLD float ptr [EBP + -0x3e]         ; 0044cdf1
    FMUL float ptr [EBP + 0x56]         ; 0044cdf4
    FLD float ptr [EBP + -0x3e]         ; 0044cdf7
    FMUL float ptr [EBP + 0x52]         ; 0044cdfa
    LEA EBX,[EBP + 0xffffff7e]          ; 0044cdfd
    LEA EAX,[EBP + -0x46]               ; 0044ce03
    MOV EDX,dword ptr [0x0060b280]      ; 0044ce06 | DAT_0060b280
    FXCH                                ; 0044ce0c
    FSTP float ptr [EBP + -0x46]        ; 0044ce0e
    FSTP float ptr [EBP + -0x42]        ; 0044ce11
    FLD float ptr [EAX]                 ; 0044ce14
    FMUL float ptr [0x005f5050]         ; 0044ce16 | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044ce1c
    FLD float ptr [EAX + 0x4]           ; 0044ce1e
    FMUL float ptr [0x005f5050]         ; 0044ce21 | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044ce27
    FLD float ptr [EAX + 0x8]           ; 0044ce2a
    FMUL float ptr [0x005f5050]         ; 0044ce2d | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044ce33
    LEA EAX,[EBP + 0xffffff7e]          ; 0044ce36
    PUSH EAX                            ; 0044ce3c
    MOV EAX,dword ptr [EDX]             ; 0044ce3d | DAT_01ba5c50
    ADD EAX,0x90                        ; 0044ce3f
    PUSH EAX                            ; 0044ce44
    CALL engine_special.cpp_FUN_0055d723 ; 0044ce45
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x0060b280]      ; 0044ce4a | DAT_0060b280
    ADD ESP,0x8                         ; 0044ce50
    MOV EBX,dword ptr [EDX]             ; 0044ce53 | DAT_01ba5c50
    MOV EAX,dword ptr [EBP + 0x22]      ; 0044ce55
    MOV dword ptr [EBX + 0x20],EAX      ; 0044ce58
    MOV EBX,dword ptr [EDX]             ; 0044ce5b | DAT_01ba5c50
    MOV EAX,dword ptr [EBP + 0x22]      ; 0044ce5d
    MOV dword ptr [EBX + 0x50],EAX      ; 0044ce60
    MOV EBX,dword ptr [EDX]             ; 0044ce63 | DAT_01ba5c50
    MOV EAX,dword ptr [EBP + 0x26]      ; 0044ce65
    MOV dword ptr [EBX + 0x80],EAX      ; 0044ce68
    MOV EBX,dword ptr [EDX]             ; 0044ce6e | DAT_01ba5c50
    PUSH 0x43f980                       ; 0044ce70 | LAB_0043f980
    MOV EAX,dword ptr [EBP + 0x26]      ; 0044ce75
    MOV EDI,0x4                         ; 0044ce78
    MOV ECX,0x1                         ; 0044ce7d
    MOV dword ptr [EBX + 0xb0],EAX      ; 0044ce82
    MOV ESI,dword ptr [EBP + 0x62]      ; 0044ce88
    MOV dword ptr [EBP + 0xffffff06],EDI ; 0044ce8b
    XOR EAX,EAX                         ; 0044ce91
    MOV dword ptr [EBP + 0xffffff22],ECX ; 0044ce93
    MOV dword ptr [EBP + 0xffffff16],EAX ; 0044ce99
    MOV dword ptr [EBP + 0xffffff12],EAX ; 0044ce9f
    MOV dword ptr [EBP + 0xffffff0e],EAX ; 0044cea5
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 0044ceab
    MOV EAX,0x2                         ; 0044ceb1
    INC ESI                             ; 0044ceb6
    MOV dword ptr [EBP + 0xffffff1e],EAX ; 0044ceb7
    LEA EAX,[EBP + 0xffffff02]          ; 0044cebd
    XOR EBX,EBX                         ; 0044cec3
    PUSH EAX                            ; 0044cec5
    MOV EDI,0x3                         ; 0044cec6
    MOV dword ptr [EBP + 0xffffff26],EBX ; 0044cecb
    PUSH EDX                            ; 0044ced1 | DAT_01ba5c50
    MOV dword ptr [EBP + 0x62],ESI      ; 0044ced2
    MOV dword ptr [EBP + 0xffffff1a],EDI ; 0044ced5
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750 ; 0044cedb
        ;   XREF to: 0046b750 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 0044cee0
    CMP ESI,0x4                         ; 0044cee3
    JL 0x0044cbf7                       ; 0044cee6
        ;   XREF to: 0044cbf7 (CONDITIONAL_JUMP)  ; LAB_0044cbf7
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0044ceec
    INC EAX                             ; 0044ceef
    MOV dword ptr [EBP + 0x3e],EAX      ; 0044cef0
    CMP EAX,0x10                        ; 0044cef3
    JL 0x0044cae3                       ; 0044cef6
        ;   XREF to: 0044cae3 (CONDITIONAL_JUMP)  ; LAB_0044cae3
    MOV ECX,dword ptr [EBP + 0x36]      ; 0044cefc
    INC ECX                             ; 0044ceff
    MOV dword ptr [EBP + 0x36],ECX      ; 0044cf00
    CMP ECX,0x10                        ; 0044cf03
    JL 0x0044caa7                       ; 0044cf06
        ;   XREF to: 0044caa7 (CONDITIONAL_JUMP)  ; LAB_0044caa7
    MOV ESI,dword ptr [0x0060b280]      ; 0044cf0c | DAT_0060b280
    PUSH ESI                            ; 0044cf12 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0044cf13
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0044cf18
    LEA ESP,[EBP + 0x7e]                ; 0044cf1b
    POP EBP                             ; 0044cf1e
    POP EDI                             ; 0044cf1f
    POP ESI                             ; 0044cf20
    POP EBX                             ; 0044cf21
    RET                                 ; 0044cf22
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0044cf23
        ;   Label: LAB_0044cf23
    JMP 0x0044ccaa                      ; 0044cf26
        ;   XREF to: 0044ccaa (UNCONDITIONAL_JUMP)  ; LAB_0044ccaa
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0044cf2b
        ;   Label: LAB_0044cf2b
    JMP 0x0044cd10                      ; 0044cf2e
        ;   XREF to: 0044cd10 (UNCONDITIONAL_JUMP)  ; LAB_0044cd10
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0044cf33
        ;   Label: LAB_0044cf33
    JMP 0x0044cd7f                      ; 0044cf36
        ;   XREF to: 0044cd7f (UNCONDITIONAL_JUMP)  ; LAB_0044cd7f
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0044cf3b
        ;   Label: LAB_0044cf3b
    JMP 0x0044cdee                      ; 0044cf3e
        ;   XREF to: 0044cdee (UNCONDITIONAL_JUMP)  ; LAB_0044cdee

