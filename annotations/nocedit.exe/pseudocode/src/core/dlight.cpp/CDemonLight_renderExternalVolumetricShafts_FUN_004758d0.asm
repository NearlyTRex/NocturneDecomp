; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; int[987]         Stack[-0x10d8]:3948  aiStackY_10d8
; SMRGLHeaderPrimitive Stack[-0x160]:24  local_160
; CVector3f        Stack[-0x138]:12  local_138
; CVector3i        Stack[-0x12c]:12  local_12c
; CVector3f        Stack[-0x120]:12  local_120
; float            Stack[-0x114]:4  local_114
; float            Stack[-0x110]:4  local_110
; float            Stack[-0x10c]:4  local_10c
; CVector3f        Stack[-0x108]:12  local_108
; float            Stack[-0xfc]:4  local_fc
; float            Stack[-0xf8]:4  local_f8
; float            Stack[-0xf4]:4  local_f4
; CVector3i        Stack[-0xf0]:12  local_f0
; float            Stack[-0xe4]:4  local_e4
; float            Stack[-0xe0]:4  local_e0
; float            Stack[-0xdc]:4  local_dc
; CVector3i        Stack[-0xd8]:12  local_d8
; CVector3f        Stack[-0xcc]:12  local_cc
; CVector3i        Stack[-0xc0]:12  local_c0
; CVector3f        Stack[-0xb4]:12  local_b4
; CVector3i        Stack[-0xa8]:12  local_a8
; int              Stack[-0x9c]:4  local_9c
; int[8]           Stack[-0x98]:32  local_98
; int              Stack[-0x78]:4  local_78
; int              Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; int              Stack[-0x68]:4  local_68
; int              Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; int              Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_0061f24b = 0.100000000000000
;   double DOUBLE_0061f253 = 18
;   double DOUBLE_0061f25b = 2
;   double DOUBLE_0061f263 = 0.5
;   double DOUBLE_0061f26b = 0.0625
;   float FLOAT_0061f273 = 0.0625
;   double DOUBLE_0061f27b = 3.14159265350000
;   double DOUBLE_0061f283 = 0.00390625
;   float FLOAT_0061f28b = 0.25
;   double DOUBLE_0061f293 = 512
;   float FLOAT_0065c900 = 256
;   float FLOAT_0065c908 = 0.00390625
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonSet* g_CDemonSetPtr = 03114278
;   ... and 4 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
;   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004758d0
        ;   Label: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0
    PUSH ESI                            ; 004758d1
    PUSH EDI                            ; 004758d2
    PUSH EBP                            ; 004758d3
    MOV EBP,ESP                         ; 004758d4
    SUB ESP,0x150                       ; 004758d6
    SUB EBP,0x7e                        ; 004758dc
    MOV EAX,dword ptr [EBP + 0x92]      ; 004758df
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 004758e5
    JZ 0x0047590f                       ; 004758ec
        ;   XREF to: 0047590f (CONDITIONAL_JUMP)  ; LAB_0047590f
    MOV EAX,[0x006810c8]                ; 004758ee | g_CDemonSetPtr
    FLD float ptr [EAX + 0x15ac70]      ; 004758f3 | g_CDemonSetInstance.active_fog.density_multiplier
    FCOMP double ptr [0x0061f24b]       ; 004758f9 | DOUBLE_0061f24b
    FNSTSW AX                           ; 004758ff
    SAHF                                ; 00475901
    JC 0x0047590f                       ; 00475902
        ;   XREF to: 0047590f (CONDITIONAL_JUMP)  ; LAB_0047590f
    MOV EAX,[0x0067b654]                ; 00475904 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0xc],0x0       ; 00475909 | g_CGameInstance.halo_mode
    JNZ 0x00475917                      ; 0047590d
        ;   XREF to: 00475917 (CONDITIONAL_JUMP)  ; LAB_00475917
    LEA ESP,[EBP + 0x7e]                ; 0047590f
        ;   Label: LAB_0047590f
    POP EBP                             ; 00475912
    POP EDI                             ; 00475913
    POP ESI                             ; 00475914
    POP EBX                             ; 00475915
    RET                                 ; 00475916
    MOV EBX,dword ptr [0x006703ec]      ; 00475917 | g_CDemonRendererPtr2
        ;   Label: LAB_00475917
    PUSH EBX                            ; 0047591d | g_CDemonRendererInstance
    LEA ESI,[EBP + -0x62]               ; 0047591e
    LEA EDI,[EBP + -0xe]                ; 00475921
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760 ; 00475924
        ;   XREF to: 0048c760 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[EBP + -0x62]               ; 00475929
    LEA EAX,[EBP + -0xe]                ; 0047592c
    LEA EBX,[EBP + 0xffffff7a]          ; 0047592f
    ADD ESP,0x4                         ; 00475935
    JMP 0x0060c82c                      ; 00475938
        ;   XREF to: 0060c82c (UNCONDITIONAL_JUMP)  ; LAB_0060c82c
    FMUL float ptr [0x0065c908]         ; 0047593d | FLOAT_0065c908
        ;   Label: LAB_0047593d
    FSTP float ptr [EBX]                ; 00475943
    FILD dword ptr [EAX + 0x4]          ; 00475945
    FMUL float ptr [0x0065c908]         ; 00475948 | FLOAT_0065c908
    FSTP float ptr [EBX + 0x4]          ; 0047594e
    FILD dword ptr [EAX + 0x8]          ; 00475951
    FMUL float ptr [0x0065c908]         ; 00475954 | FLOAT_0065c908
    FSTP float ptr [EBX + 0x8]          ; 0047595a
    MOV EBX,dword ptr [EBP + 0x92]      ; 0047595d
    FLD float ptr [EBP + 0xffffff7a]    ; 00475963
    FSUB float ptr [EBX + 0x4]          ; 00475969
    FLD float ptr [EBP + 0xffffff7e]    ; 0047596c
    FXCH                                ; 00475972
    FSTP float ptr [EBP + -0x56]        ; 00475974
    FSUB float ptr [EBX + 0x8]          ; 00475977
    FST float ptr [EBP + -0x52]         ; 0047597a
    FMUL float ptr [EBP + -0x52]        ; 0047597d
    FLD float ptr [EBP + -0x56]         ; 00475980
    FMUL ST0                            ; 00475983
    FLD float ptr [EBP + -0x7e]         ; 00475985
    FSUB float ptr [EBX + 0xc]          ; 00475988
    FXCH                                ; 0047598b
    FADDP ST2,ST0                       ; 0047598d
    FST float ptr [EBP + -0x4e]         ; 0047598f
    FMUL float ptr [EBP + -0x4e]        ; 00475992
    FADDP                               ; 00475995
    FSQRT                               ; 00475997
    ADD EBX,0x4                         ; 00475999
    FST float ptr [EBP + 0x3a]          ; 0047599c
    FLDZ                                ; 0047599f
    FCOMPP                              ; 004759a1
    FNSTSW AX                           ; 004759a3
    SAHF                                ; 004759a5
    JNC 0x0047590f                      ; 004759a6
        ;   XREF to: 0047590f (CONDITIONAL_JUMP)  ; LAB_0047590f
    FLD1                                ; 004759ac
    FLD float ptr [EBP + -0x56]         ; 004759ae
    FXCH                                ; 004759b1
    FDIV float ptr [EBP + 0x3a]         ; 004759b3
    FXCH                                ; 004759b6
    FMUL ST1                            ; 004759b8
    FLD float ptr [EBP + -0x52]         ; 004759ba
    FMUL ST2                            ; 004759bd
    FLD float ptr [EBP + -0x4e]         ; 004759bf
    XOR ESI,ESI                         ; 004759c2
    MOV EAX,0x3f800000                  ; 004759c4
    MOV dword ptr [EBP + 0xffffff6e],ESI ; 004759c9
    MOV dword ptr [EBP + 0xffffff72],ESI ; 004759cf
    MOV dword ptr [EBP + 0xffffff76],EAX ; 004759d5
    LEA EAX,[EBP + 0xffffff6e]          ; 004759db
    MOV ESI,dword ptr [EBP + 0x92]      ; 004759e1
    PUSH EAX                            ; 004759e7
    LEA EAX,[EBP + -0x7a]               ; 004759e8
    ADD ESI,0x10                        ; 004759eb
    PUSH EAX                            ; 004759ee
    FMULP ST3                           ; 004759ef
    PUSH ESI                            ; 004759f1
    FXCH                                ; 004759f2
    FSTP float ptr [EBP + -0x56]        ; 004759f4
    FSTP float ptr [EBP + -0x52]        ; 004759f7
    FSTP float ptr [EBP + -0x4e]        ; 004759fa
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004759fd
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00475a02
    LEA EAX,[EBP + 0xffffff56]          ; 00475a05
    PUSH EAX                            ; 00475a0b
    MOV EDX,dword ptr [0x006703ec]      ; 00475a0c | g_CDemonRendererPtr2
    PUSH EDX                            ; 00475a12 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 ; 00475a13
        ;   XREF to: 0048c780 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer * this_ptr, CVector3f * output)
    FLD float ptr [EBP + 0xffffff56]    ; 00475a18
    FLD float ptr [EBP + 0xffffff5a]    ; 00475a1e
    FLD float ptr [EBP + 0xffffff5e]    ; 00475a24
    LEA EAX,[EBP + 0xffffff56]          ; 00475a2a
    ADD ESP,0x8                         ; 00475a30
    FXCH ST2                            ; 00475a33
    FSUB float ptr [EBX]                ; 00475a35
    PUSH EAX                            ; 00475a37
    FSTP float ptr [EBP + 0xffffff56]   ; 00475a38
    LEA EAX,[EBP + -0x3e]               ; 00475a3e
    FSUB float ptr [EBX + 0x4]          ; 00475a41
    PUSH EAX                            ; 00475a44
    FSTP float ptr [EBP + 0xffffff5a]   ; 00475a45
    FSUB float ptr [EBX + 0x8]          ; 00475a4b
    PUSH ESI                            ; 00475a4e
    FSTP float ptr [EBP + 0xffffff5e]   ; 00475a4f
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 00475a55
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 00475a5a
    LEA EAX,[EBP + 0xffffff56]          ; 00475a5c
    ADD ESP,0xc                         ; 00475a62
    CMP EAX,EDX                         ; 00475a65
    JZ 0x00475a83                       ; 00475a67
        ;   XREF to: 00475a83 (CONDITIONAL_JUMP)  ; LAB_00475a83
    MOV EAX,dword ptr [EDX]             ; 00475a69
    MOV dword ptr [EBP + 0xffffff56],EAX ; 00475a6b
    MOV EAX,dword ptr [EDX + 0x4]       ; 00475a71
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 00475a74
    MOV EAX,dword ptr [EDX + 0x8]       ; 00475a7a
    MOV dword ptr [EBP + 0xffffff5e],EAX ; 00475a7d
    FLD float ptr [EBP + 0xffffff5e]    ; 00475a83
        ;   Label: LAB_00475a83
    FMUL double ptr [0x0061f253]        ; 00475a89 | DOUBLE_0061f253
    MOV EAX,dword ptr [EBP + 0x92]      ; 00475a8f
    FDIV float ptr [EAX + 0x38]         ; 00475a95
    FLD float ptr [EBP + 0xffffff5a]    ; 00475a98
    FMUL ST0                            ; 00475a9e
    FLD float ptr [EBP + 0xffffff56]    ; 00475aa0
    FMUL ST0                            ; 00475aa6
    FXCH ST2                            ; 00475aa8
    FMUL double ptr [0x0061f25b]        ; 00475aaa | DOUBLE_0061f25b
    FXCH ST2                            ; 00475ab0
    FADDP                               ; 00475ab2
    FLD ST0                             ; 00475ab4
    FLD ST2                             ; 00475ab6
    FMULP ST3                           ; 00475ab8
    FDIV ST0,ST2                        ; 00475aba
    FLD1                                ; 00475abc
    FSUBRP                              ; 00475abe
    FSTP float ptr [EBP + 0x36]         ; 00475ac0
    FCOMPP                              ; 00475ac3
    FNSTSW AX                           ; 00475ac5
    SAHF                                ; 00475ac7
    JNC 0x00475adc                      ; 00475ac8
        ;   XREF to: 00475adc (CONDITIONAL_JUMP)  ; LAB_00475adc
    FLD float ptr [EBP + 0x36]          ; 00475aca
    FCOMP double ptr [0x0061f263]       ; 00475acd | DOUBLE_0061f263
    FNSTSW AX                           ; 00475ad3
    SAHF                                ; 00475ad5
    JA 0x0047590f                       ; 00475ad6
        ;   XREF to: 0047590f (CONDITIONAL_JUMP)  ; LAB_0047590f
    MOV EAX,dword ptr [EBP + 0x92]      ; 00475adc
        ;   Label: LAB_00475adc
    ADD EAX,0x4                         ; 00475ae2
    PUSH EAX                            ; 00475ae5
    MOV ECX,dword ptr [0x006703ec]      ; 00475ae6 | g_CDemonRendererPtr2
    PUSH ECX                            ; 00475aec | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00475aed
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00475af2
    LEA EAX,[EBP + -0x26]               ; 00475af5
    PUSH EAX                            ; 00475af8
    MOV EAX,dword ptr [EBP + 0x92]      ; 00475af9
    ADD EAX,0x10                        ; 00475aff
    PUSH EAX                            ; 00475b02
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 00475b03
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00475b08
    PUSH 0x0                            ; 00475b0b
    LEA EAX,[EBP + -0x26]               ; 00475b0d
    PUSH EAX                            ; 00475b10
    MOV EBX,dword ptr [0x006703ec]      ; 00475b11 | g_CDemonRendererPtr2
    MOV ESI,0x1                         ; 00475b17
    PUSH EBX                            ; 00475b1c | g_CDemonRendererInstance
    MOV dword ptr [EBP + 0x3e],ESI      ; 00475b1d
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00475b20
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00475b25
    MOV EAX,dword ptr [EBP + 0x92]      ; 00475b28
        ;   Label: LAB_00475b28
    FLD float ptr [EAX + 0x38]          ; 00475b2e
    FDIVR double ptr [0x0061f253]       ; 00475b31 | DOUBLE_0061f253
    MOV EAX,dword ptr [EBP + 0x3e]      ; 00475b37
    MOV dword ptr [EBP + 0x76],EAX      ; 00475b3a
    FILD dword ptr [EBP + 0x76]         ; 00475b3d
    FMULP                               ; 00475b40
    FMUL double ptr [0x0061f26b]        ; 00475b42 | DOUBLE_0061f26b
    FST float ptr [EBP + 0x42]          ; 00475b48
    FLD ST0                             ; 00475b4b
    FLD1                                ; 00475b4d
    FPATAN                              ; 00475b4f
    FCOS                                ; 00475b51
    FLD1                                ; 00475b53
    XOR EDI,EDI                         ; 00475b55
    FSUBRP ST2,ST0                      ; 00475b57
    MOV dword ptr [EBP + 0x46],EDI      ; 00475b59
    FXCH                                ; 00475b5c
    FSTP float ptr [EBP + 0x4a]         ; 00475b5e
    FSTP float ptr [EBP + 0x4e]         ; 00475b61
    MOV EAX,dword ptr [EBP + 0x46]      ; 00475b64
        ;   Label: LAB_00475b64
    MOV dword ptr [EBP + 0x76],EAX      ; 00475b67
    FLD float ptr [0x0061f273]          ; 00475b6a | FLOAT_0061f273
    FILD dword ptr [EBP + 0x76]         ; 00475b70
    FMUL ST1                            ; 00475b73
    FLD double ptr [0x0061f27b]         ; 00475b75 | DOUBLE_0061f27b
    FXCH                                ; 00475b7b
    FMUL ST1                            ; 00475b7d
    INC EAX                             ; 00475b7f
    FLD double ptr [0x0061f25b]         ; 00475b80 | DOUBLE_0061f25b
    FXCH                                ; 00475b86
    FMUL ST1                            ; 00475b88
    MOV dword ptr [EBP + 0x76],EAX      ; 00475b8a
    FLD ST0                             ; 00475b8d
    FSIN                                ; 00475b8f
    FILD dword ptr [EBP + 0x76]         ; 00475b91
    FMULP ST5                           ; 00475b94
    FXCH ST4                            ; 00475b96
    FMULP ST3                           ; 00475b98
    FXCH ST2                            ; 00475b9a
    FMULP                               ; 00475b9c
    FLD ST0                             ; 00475b9e
    FSIN                                ; 00475ba0
    FXCH ST2                            ; 00475ba2
    FCOS                                ; 00475ba4
    FXCH                                ; 00475ba6
    FCOS                                ; 00475ba8
    MOV EDX,dword ptr [EBP + 0x92]      ; 00475baa
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 00475bb0
    MOV EAX,dword ptr [EBP + 0x92]      ; 00475bb6
    SAR EDX,0x1f                        ; 00475bbc
    MOV EAX,dword ptr [EAX + 0x1cc0]    ; 00475bbf
    SUB EAX,EDX                         ; 00475bc5
    SAR EAX,0x1                         ; 00475bc7
    MOV EDX,dword ptr [EBP + 0x92]      ; 00475bc9
    MOV dword ptr [EBP + 0x76],EAX      ; 00475bcf
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 00475bd2
    MOV EAX,dword ptr [EBP + 0x92]      ; 00475bd8
    SAR EDX,0x1f                        ; 00475bde
    MOV EAX,dword ptr [EAX + 0x1cc4]    ; 00475be1
    SUB EAX,EDX                         ; 00475be7
    SAR EAX,0x1                         ; 00475be9
    FLD float ptr [EBP + 0x42]          ; 00475beb
    FXCH ST2                            ; 00475bee
    FMUL ST2                            ; 00475bf0
    MOV dword ptr [EBP + 0x7a],EAX      ; 00475bf2
    FSTP float ptr [EBP + 0x5e]         ; 00475bf5
    FILD dword ptr [EBP + 0x7a]         ; 00475bf8
    FLD ST0                             ; 00475bfb
    FMUL float ptr [EBP + 0x5e]         ; 00475bfd
    MOV EDX,dword ptr [EBP + 0x92]      ; 00475c00
    FSUBP                               ; 00475c06
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 00475c08
    CALL crt_math.c_round_FUN_005fe6b0  ; 00475c0e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x16]        ; 00475c13
    MOV EAX,dword ptr [EBP + 0x16]      ; 00475c16
    IMUL EAX,ECX                        ; 00475c19
    FXCH ST3                            ; 00475c1c
    FMUL ST1                            ; 00475c1e
    FSTP float ptr [EBP + 0x5a]         ; 00475c20
    FILD dword ptr [EBP + 0x76]         ; 00475c23
    FLD ST0                             ; 00475c26
    FMUL float ptr [EBP + 0x5a]         ; 00475c28
    FADDP                               ; 00475c2b
    FXCH ST2                            ; 00475c2d
    FMUL ST1                            ; 00475c2f
    FXCH ST2                            ; 00475c31
    CALL crt_math.c_round_FUN_005fe6b0  ; 00475c33
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x1e]        ; 00475c38
    ADD EAX,dword ptr [EBP + 0x1e]      ; 00475c3b
    LEA EDX,[EAX + EAX*0x1]             ; 00475c3e
    MOV EAX,dword ptr [EBP + 0x92]      ; 00475c41
    FMULP ST2                           ; 00475c47
    MOV EAX,dword ptr [EAX + 0x2f94]    ; 00475c49
    ADD EDX,EAX                         ; 00475c4f
    XOR EAX,EAX                         ; 00475c51
    MOV AX,word ptr [EDX]               ; 00475c53
    MOV dword ptr [EBP + 0x7a],EAX      ; 00475c56
    XOR ESI,ESI                         ; 00475c59
    FILD dword ptr [EBP + 0x7a]         ; 00475c5b
    FMUL double ptr [0x0061f283]        ; 00475c5e | DOUBLE_0061f283
    MOV dword ptr [EBP + 0x6a],ESI      ; 00475c64
    FXCH                                ; 00475c67
    FSTP float ptr [EBP + 0x52]         ; 00475c69
    FSTP float ptr [EBP + 0x66]         ; 00475c6c
    MOV EAX,dword ptr [EBP + 0x66]      ; 00475c6f
    FSTP float ptr [EBP + 0x56]         ; 00475c72
    MOV dword ptr [EBP + 0x62],EAX      ; 00475c75
    MOV EAX,dword ptr [EBP + 0x92]      ; 00475c78
        ;   Label: LAB_00475c78
    MOV EAX,dword ptr [EAX + 0x140]     ; 00475c7e
    FLD float ptr [EBP + 0x4e]          ; 00475c84
    MOV dword ptr [EBP + 0x22],EAX      ; 00475c87
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00475c8a
    FMUL float ptr [EBP + 0x22]         ; 00475c8d
    MOV dword ptr [EBP + 0x7a],EAX      ; 00475c90
    FILD dword ptr [EBP + 0x7a]         ; 00475c93
    FMUL ST1                            ; 00475c96
    FLD float ptr [0x0061f28b]          ; 00475c98 | FLOAT_0061f28b
    FXCH                                ; 00475c9e
    FMUL ST1                            ; 00475ca0
    FLD float ptr [EBP + 0x22]          ; 00475ca2
    FXCH                                ; 00475ca5
    FSTP float ptr [EBP + 0x6e]         ; 00475ca7
    FSUB float ptr [EBP + 0x6e]         ; 00475caa
    FLD1                                ; 00475cad
    FDIV float ptr [EBP + 0x22]         ; 00475caf
    INC EAX                             ; 00475cb2
    FXCH                                ; 00475cb3
    FMUL ST1                            ; 00475cb5
    MOV dword ptr [EBP + 0x7a],EAX      ; 00475cb7
    FLD double ptr [0x0061f293]         ; 00475cba | DOUBLE_0061f293
    FXCH                                ; 00475cc0
    FMUL ST1                            ; 00475cc2
    FILD dword ptr [EBP + 0x7a]         ; 00475cc4
    FMULP ST5                           ; 00475cc7
    FLD float ptr [EBP + 0x4a]          ; 00475cc9
    FXCH                                ; 00475ccc
    FMUL ST1                            ; 00475cce
    MOV EAX,dword ptr [EBP + 0x92]      ; 00475cd0
    FXCH ST5                            ; 00475cd6
    FMULP ST4                           ; 00475cd8
    FLD float ptr [EAX + 0x2fa8]        ; 00475cda
    FMULP ST5                           ; 00475ce0
    FXCH ST3                            ; 00475ce2
    FSTP float ptr [EBP + 0x72]         ; 00475ce4
    FXCH ST3                            ; 00475ce7
    FSTP float ptr [EBP + 0x2e]         ; 00475ce9
    FLD float ptr [EBP + 0x22]          ; 00475cec
    FSUB float ptr [EBP + 0x72]         ; 00475cef
    FMULP                               ; 00475cf2
    FMULP ST2                           ; 00475cf4
    FMULP                               ; 00475cf6
    FMUL float ptr [EAX + 0x2fa8]       ; 00475cf8
    FSTP float ptr [EBP + 0x32]         ; 00475cfe
    FLD float ptr [EBP + 0x2e]          ; 00475d01
    FISTP dword ptr [EBP + 0x26]        ; 00475d07
    FLD float ptr [EBP + 0x32]          ; 00475d0d
    FISTP dword ptr [EBP + 0x2a]        ; 00475d13
    FLD float ptr [EBP + 0x6e]          ; 00475d19
    FCOMP float ptr [EBP + 0x66]        ; 00475d1c
    FNSTSW AX                           ; 00475d1f
    SAHF                                ; 00475d21
    JNC 0x00475f98                      ; 00475d22
        ;   XREF to: 00475f98 (CONDITIONAL_JUMP)  ; LAB_00475f98
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00475d28
    MOV dword ptr [EBP + -0x66],EAX     ; 00475d2b
        ;   Label: LAB_00475d2b
    FLD float ptr [EBP + -0x66]         ; 00475d2e
    FMUL float ptr [EBP + 0x5a]         ; 00475d31
    FLD float ptr [EBP + -0x66]         ; 00475d34
    FMUL float ptr [EBP + 0x5e]         ; 00475d37
    LEA EBX,[EBP + 0xffffff62]          ; 00475d3a
    LEA EAX,[EBP + -0x6e]               ; 00475d40
    MOV EDX,dword ptr [0x006703ec]      ; 00475d43 | g_CDemonRendererPtr2
    FXCH                                ; 00475d49
    FSTP float ptr [EBP + -0x6e]        ; 00475d4b
    FSTP float ptr [EBP + -0x6a]        ; 00475d4e
    FLD float ptr [EAX]                 ; 00475d51
    FMUL float ptr [0x0065c900]         ; 00475d53 | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00475d59
    FLD float ptr [EAX + 0x4]           ; 00475d5b
    FMUL float ptr [0x0065c900]         ; 00475d5e | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00475d64
    FLD float ptr [EAX + 0x8]           ; 00475d67
    FMUL float ptr [0x0065c900]         ; 00475d6a | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00475d70
    LEA EAX,[EBP + 0xffffff62]          ; 00475d73
    PUSH EAX                            ; 00475d79
    MOV EAX,dword ptr [EDX]             ; 00475d7a | g_CDemonRendererInstance
    PUSH EAX                            ; 00475d7c
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00475d7d
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x6e]          ; 00475d82
    ADD ESP,0x8                         ; 00475d85
    FCOMP float ptr [EBP + 0x62]        ; 00475d88
    FNSTSW AX                           ; 00475d8b
    SAHF                                ; 00475d8d
    JNC 0x00475fa0                      ; 00475d8e
        ;   XREF to: 00475fa0 (CONDITIONAL_JUMP)  ; LAB_00475fa0
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00475d94
    MOV dword ptr [EBP + -0x66],EAX     ; 00475d97
        ;   Label: LAB_00475d97
    FLD float ptr [EBP + -0x66]         ; 00475d9a
    FMUL float ptr [EBP + 0x52]         ; 00475d9d
    FLD float ptr [EBP + -0x66]         ; 00475da0
    FMUL float ptr [EBP + 0x56]         ; 00475da3
    LEA EBX,[EBP + -0x1a]               ; 00475da6
    LEA EAX,[EBP + -0x6e]               ; 00475da9
    MOV EDX,dword ptr [0x006703ec]      ; 00475dac | g_CDemonRendererPtr2
    FXCH                                ; 00475db2
    FSTP float ptr [EBP + -0x6e]        ; 00475db4
    FSTP float ptr [EBP + -0x6a]        ; 00475db7
    FLD float ptr [EAX]                 ; 00475dba
    FMUL float ptr [0x0065c900]         ; 00475dbc | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00475dc2
    FLD float ptr [EAX + 0x4]           ; 00475dc4
    FMUL float ptr [0x0065c900]         ; 00475dc7 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00475dcd
    FLD float ptr [EAX + 0x8]           ; 00475dd0
    FMUL float ptr [0x0065c900]         ; 00475dd3 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00475dd9
    LEA EAX,[EBP + -0x1a]               ; 00475ddc
    PUSH EAX                            ; 00475ddf
    MOV EAX,dword ptr [EDX]             ; 00475de0 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 00475de2
    PUSH EAX                            ; 00475de5
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00475de6
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x72]          ; 00475deb
    ADD ESP,0x8                         ; 00475dee
    FCOMP float ptr [EBP + 0x62]        ; 00475df1
    FNSTSW AX                           ; 00475df4
    SAHF                                ; 00475df6
    JNC 0x00475fa8                      ; 00475df7
        ;   XREF to: 00475fa8 (CONDITIONAL_JUMP)  ; LAB_00475fa8
    MOV EAX,dword ptr [EBP + 0x72]      ; 00475dfd
    MOV dword ptr [EBP + -0x66],EAX     ; 00475e00
        ;   Label: LAB_00475e00
    FLD float ptr [EBP + -0x66]         ; 00475e03
    FMUL float ptr [EBP + 0x52]         ; 00475e06
    FLD float ptr [EBP + -0x66]         ; 00475e09
    FMUL float ptr [EBP + 0x56]         ; 00475e0c
    LEA EBX,[EBP + -0x4a]               ; 00475e0f
    LEA EAX,[EBP + -0x6e]               ; 00475e12
    MOV EDX,dword ptr [0x006703ec]      ; 00475e15 | g_CDemonRendererPtr2
    FXCH                                ; 00475e1b
    FSTP float ptr [EBP + -0x6e]        ; 00475e1d
    FSTP float ptr [EBP + -0x6a]        ; 00475e20
    FLD float ptr [EAX]                 ; 00475e23
    FMUL float ptr [0x0065c900]         ; 00475e25 | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00475e2b
    FLD float ptr [EAX + 0x4]           ; 00475e2d
    FMUL float ptr [0x0065c900]         ; 00475e30 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00475e36
    FLD float ptr [EAX + 0x8]           ; 00475e39
    FMUL float ptr [0x0065c900]         ; 00475e3c | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00475e42
    LEA EAX,[EBP + -0x4a]               ; 00475e45
    PUSH EAX                            ; 00475e48
    MOV EAX,dword ptr [EDX]             ; 00475e49 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 00475e4b
    PUSH EAX                            ; 00475e4e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00475e4f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x72]          ; 00475e54
    ADD ESP,0x8                         ; 00475e57
    FCOMP float ptr [EBP + 0x66]        ; 00475e5a
    FNSTSW AX                           ; 00475e5d
    SAHF                                ; 00475e5f
    JNC 0x00475fb0                      ; 00475e60
        ;   XREF to: 00475fb0 (CONDITIONAL_JUMP)  ; LAB_00475fb0
    MOV EAX,dword ptr [EBP + 0x72]      ; 00475e66
    MOV dword ptr [EBP + -0x66],EAX     ; 00475e69
        ;   Label: LAB_00475e69
    FLD float ptr [EBP + -0x66]         ; 00475e6c
    FMUL float ptr [EBP + 0x5a]         ; 00475e6f
    FLD float ptr [EBP + -0x66]         ; 00475e72
    FMUL float ptr [EBP + 0x5e]         ; 00475e75
    LEA EBX,[EBP + -0x32]               ; 00475e78
    LEA EAX,[EBP + -0x6e]               ; 00475e7b
    MOV EDX,dword ptr [0x006703ec]      ; 00475e7e | g_CDemonRendererPtr2
    FXCH                                ; 00475e84
    FSTP float ptr [EBP + -0x6e]        ; 00475e86
    FSTP float ptr [EBP + -0x6a]        ; 00475e89
    FLD float ptr [EAX]                 ; 00475e8c
    FMUL float ptr [0x0065c900]         ; 00475e8e | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00475e94
    FLD float ptr [EAX + 0x4]           ; 00475e96
    FMUL float ptr [0x0065c900]         ; 00475e99 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00475e9f
    FLD float ptr [EAX + 0x8]           ; 00475ea2
    FMUL float ptr [0x0065c900]         ; 00475ea5 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00475eab
    LEA EAX,[EBP + -0x32]               ; 00475eae
    PUSH EAX                            ; 00475eb1
    MOV EAX,dword ptr [EDX]             ; 00475eb2 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 00475eb4
    PUSH EAX                            ; 00475eb9
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00475eba
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x006703ec]      ; 00475ebf | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 00475ec5
    MOV EBX,dword ptr [EDX]             ; 00475ec8 | g_CDemonRendererInstance
    MOV EAX,dword ptr [EBP + 0x26]      ; 00475eca
    MOV dword ptr [EBX + 0x20],EAX      ; 00475ecd
    MOV EBX,dword ptr [EDX]             ; 00475ed0 | g_CDemonRendererInstance
    MOV EAX,dword ptr [EBP + 0x26]      ; 00475ed2
    MOV dword ptr [EBX + 0x50],EAX      ; 00475ed5
    MOV EBX,dword ptr [EDX]             ; 00475ed8 | g_CDemonRendererInstance
    MOV EAX,dword ptr [EBP + 0x2a]      ; 00475eda
    MOV dword ptr [EBX + 0x80],EAX      ; 00475edd
    MOV EBX,dword ptr [EDX]             ; 00475ee3 | g_CDemonRendererInstance
    PUSH 0x450440                       ; 00475ee5
    MOV EAX,dword ptr [EBP + 0x2a]      ; 00475eea
    MOV EDI,0x4                         ; 00475eed
    MOV ECX,0x1                         ; 00475ef2
    MOV dword ptr [EBX + 0xb0],EAX      ; 00475ef7
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00475efd
    MOV dword ptr [EBP + 0xffffff32],EDI ; 00475f00
    XOR EAX,EAX                         ; 00475f06
    MOV dword ptr [EBP + 0xffffff4e],ECX ; 00475f08
    MOV dword ptr [EBP + 0xffffff42],EAX ; 00475f0e
    MOV dword ptr [EBP + 0xffffff3e],EAX ; 00475f14
    MOV dword ptr [EBP + 0xffffff3a],EAX ; 00475f1a
    MOV dword ptr [EBP + 0xffffff36],EAX ; 00475f20
    MOV EAX,0x2                         ; 00475f26
    INC ESI                             ; 00475f2b
    MOV dword ptr [EBP + 0xffffff4a],EAX ; 00475f2c
    LEA EAX,[EBP + 0xffffff2e]          ; 00475f32
    XOR EBX,EBX                         ; 00475f38
    PUSH EAX                            ; 00475f3a
    MOV EDI,0x3                         ; 00475f3b
    MOV dword ptr [EBP + 0xffffff52],EBX ; 00475f40
    PUSH EDX                            ; 00475f46 | g_CDemonRendererInstance
    MOV dword ptr [EBP + 0x6a],ESI      ; 00475f47
    MOV dword ptr [EBP + 0xffffff46],EDI ; 00475f4a
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0 ; 00475f50
        ;   XREF to: 0048c8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, RenderScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 00475f55
    CMP ESI,0x4                         ; 00475f58
    JL 0x00475c78                       ; 00475f5b
        ;   XREF to: 00475c78 (CONDITIONAL_JUMP)  ; LAB_00475c78
    MOV EAX,dword ptr [EBP + 0x46]      ; 00475f61
    INC EAX                             ; 00475f64
    MOV dword ptr [EBP + 0x46],EAX      ; 00475f65
    CMP EAX,0x10                        ; 00475f68
    JL 0x00475b64                       ; 00475f6b
        ;   XREF to: 00475b64 (CONDITIONAL_JUMP)  ; LAB_00475b64
    MOV ECX,dword ptr [EBP + 0x3e]      ; 00475f71
    INC ECX                             ; 00475f74
    MOV dword ptr [EBP + 0x3e],ECX      ; 00475f75
    CMP ECX,0x10                        ; 00475f78
    JL 0x00475b28                       ; 00475f7b
        ;   XREF to: 00475b28 (CONDITIONAL_JUMP)  ; LAB_00475b28
    MOV ESI,dword ptr [0x006703ec]      ; 00475f81 | g_CDemonRendererPtr2
    PUSH ESI                            ; 00475f87 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 00475f88
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00475f8d
    LEA ESP,[EBP + 0x7e]                ; 00475f90
    POP EBP                             ; 00475f93
    POP EDI                             ; 00475f94
    POP ESI                             ; 00475f95
    POP EBX                             ; 00475f96
    RET                                 ; 00475f97
    MOV EAX,dword ptr [EBP + 0x66]      ; 00475f98
        ;   Label: LAB_00475f98
    JMP 0x00475d2b                      ; 00475f9b
        ;   XREF to: 00475d2b (UNCONDITIONAL_JUMP)  ; LAB_00475d2b
    MOV EAX,dword ptr [EBP + 0x62]      ; 00475fa0
        ;   Label: LAB_00475fa0
    JMP 0x00475d97                      ; 00475fa3
        ;   XREF to: 00475d97 (UNCONDITIONAL_JUMP)  ; LAB_00475d97
    MOV EAX,dword ptr [EBP + 0x62]      ; 00475fa8
        ;   Label: LAB_00475fa8
    JMP 0x00475e00                      ; 00475fab
        ;   XREF to: 00475e00 (UNCONDITIONAL_JUMP)  ; LAB_00475e00
    MOV EAX,dword ptr [EBP + 0x66]      ; 00475fb0
        ;   Label: LAB_00475fb0
    JMP 0x00475e69                      ; 00475fb3
        ;   XREF to: 00475e69 (UNCONDITIONAL_JUMP)  ; LAB_00475e69
    MOV ECX,dword ptr [ESI]             ; 0060c82c
        ;   Label: LAB_0060c82c
    MOV dword ptr [EDI],ECX             ; 0060c82e
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c830
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c833
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c836
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c839
    ADD ESI,0xc                         ; 0060c83c
    ADD EDI,0xc                         ; 0060c83f
    FILD dword ptr [EAX]                ; 0060c842
    JMP 0x0047593d                      ; 0060c844
        ;   XREF to: 0047593d (UNCONDITIONAL_JUMP)  ; LAB_0047593d

