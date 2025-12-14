; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bugs.cpp_FUN_004268e0()
;
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
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
; undefined1       Stack[-0xa8]:1  local_a8
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
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_bugs.cpp_FUN_00425fe0 at 0042614b
;
; Referenced Globals:
;   float FLOAT_00616e43 = -1
;   double DOUBLE_00616e4b = 0.00100000000000000
;   undefined4 DAT_0065b5b8
;   undefined4 DAT_0065b5cc
;
; Called Functions:
;   core_bugs.cpp_FUN_00426420
;   core_bugs.cpp_FUN_004270f0
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;   core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004268e0
        ;   Label: core_bugs.cpp_FUN_004268e0
    PUSH ESI                            ; 004268e1
    PUSH EDI                            ; 004268e2
    PUSH EBP                            ; 004268e3
    MOV EBP,ESP                         ; 004268e4
    SUB ESP,0x104                       ; 004268e6
    AND ESP,0xfffffff8                  ; 004268ec
    MOV EDI,dword ptr [EBP + 0x14]      ; 004268ef
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004268f2
    MOV ESI,dword ptr [EBP + 0x18]      ; 004268f5
    MOV dword ptr [ESP],EAX             ; 004268f8
    CMP dword ptr [ESI + 0x2c],0x0      ; 004268fb
    JL 0x00426f9b                       ; 004268ff
        ;   XREF to: 00426f9b (CONDITIONAL_JUMP)  ; LAB_00426f9b
    FLD float ptr [ESI + 0x38]          ; 00426905
    FLDZ                                ; 00426908
    FCOMPP                              ; 0042690a
    FNSTSW AX                           ; 0042690c
    SAHF                                ; 0042690e
    JNC 0x00427032                      ; 0042690f
        ;   XREF to: 00427032 (CONDITIONAL_JUMP)  ; LAB_00427032
    FLD float ptr [0x0065b5cc]          ; 00426915 | DAT_0065b5cc
    FDIV float ptr [ESI + 0x38]         ; 0042691b
    XOR EBX,EBX                         ; 0042691e
    FSTP float ptr [ESP + 0x8]          ; 00426920
    FLD float ptr [ESP]                 ; 00426924
        ;   Label: LAB_00426924
    MOV EAX,dword ptr [ESI + 0x34]      ; 00426927
    FMUL float ptr [ESP + 0x8]          ; 0042692a
    MOV dword ptr [ESP + 0xc],EAX       ; 0042692e
    FADD float ptr [ESP + 0xc]          ; 00426932
    FST float ptr [ESI + 0x34]          ; 00426936
    FLD1                                ; 00426939
    FCOMPP                              ; 0042693b
    FNSTSW AX                           ; 0042693d
    SAHF                                ; 0042693f
    JBE 0x00427048                      ; 00426940
        ;   XREF to: 00427048 (CONDITIONAL_JUMP)  ; LAB_00427048
    FLD float ptr [ESI + 0x34]          ; 00426946
        ;   Label: LAB_00426946
    FLDZ                                ; 00426949
    FCOMPP                              ; 0042694b
    FNSTSW AX                           ; 0042694d
    SAHF                                ; 0042694f
    JBE 0x00426959                      ; 00426950
        ;   XREF to: 00426959 (CONDITIONAL_JUMP)  ; LAB_00426959
    MOV dword ptr [ESI + 0x34],0x0      ; 00426952
    FLD float ptr [ESI + 0x34]          ; 00426959
        ;   Label: LAB_00426959
    FLD1                                ; 0042695c
    FCOMPP                              ; 0042695e
    FNSTSW AX                           ; 00426960
    SAHF                                ; 00426962
    JNC 0x0042696c                      ; 00426963
        ;   XREF to: 0042696c (CONDITIONAL_JUMP)  ; LAB_0042696c
    MOV dword ptr [ESI + 0x34],0x3f800000 ; 00426965
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0042696c
        ;   Label: LAB_0042696c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042696f
    SUB EAX,EDX                         ; 00426976
    MOV EBX,dword ptr [EDI + 0x12afc]   ; 00426978
    SHL EAX,0x2                         ; 0042697e
    MOV EDX,dword ptr [EBX + 0x2234]    ; 00426981
    LEA EBX,[ESP + 0x94]                ; 00426987
    ADD EAX,EDX                         ; 0042698e
    FILD dword ptr [EAX]                ; 00426990
    FMUL float ptr [0x0065b5b8]         ; 00426992 | DAT_0065b5b8
    FSTP float ptr [EBX]                ; 00426998
    FILD dword ptr [EAX + 0x4]          ; 0042699a
    FMUL float ptr [0x0065b5b8]         ; 0042699d | DAT_0065b5b8
    FSTP float ptr [EBX + 0x4]          ; 004269a3
    FILD dword ptr [EAX + 0x8]          ; 004269a6
    FMUL float ptr [0x0065b5b8]         ; 004269a9 | DAT_0065b5b8
    FSTP float ptr [EBX + 0x8]          ; 004269af
    MOV EDX,dword ptr [ESI + 0x30]      ; 004269b2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004269b5
    SUB EAX,EDX                         ; 004269bc
    MOV EBX,dword ptr [EDI + 0x12afc]   ; 004269be
    SHL EAX,0x2                         ; 004269c4
    MOV EDX,dword ptr [EBX + 0x2234]    ; 004269c7
    LEA EBX,[ESP + 0xe8]                ; 004269cd
    ADD EAX,EDX                         ; 004269d4
    FILD dword ptr [EAX]                ; 004269d6
    FMUL float ptr [0x0065b5b8]         ; 004269d8 | DAT_0065b5b8
    FSTP float ptr [EBX]                ; 004269de
    FILD dword ptr [EAX + 0x4]          ; 004269e0
    FMUL float ptr [0x0065b5b8]         ; 004269e3 | DAT_0065b5b8
    FSTP float ptr [EBX + 0x4]          ; 004269e9
    FILD dword ptr [EAX + 0x8]          ; 004269ec
    FMUL float ptr [0x0065b5b8]         ; 004269ef | DAT_0065b5b8
    FSTP float ptr [EBX + 0x8]          ; 004269f5
    LEA EAX,[ESI + 0x34]                ; 004269f8
    FLD float ptr [ESP + 0xe8]          ; 004269fb
    FMUL float ptr [EAX]                ; 00426a02
    FLD float ptr [ESP + 0xec]          ; 00426a04
    FXCH                                ; 00426a0b
    FSTP float ptr [ESP + 0x64]         ; 00426a0d
    FMUL float ptr [EAX]                ; 00426a11
    FLD float ptr [ESP + 0xf0]          ; 00426a13
    FXCH                                ; 00426a1a
    FSTP float ptr [ESP + 0x68]         ; 00426a1c
    FMUL float ptr [EAX]                ; 00426a20
    FLD1                                ; 00426a22
    FXCH                                ; 00426a24
    FSTP float ptr [ESP + 0x6c]         ; 00426a26
    FSUB float ptr [ESI + 0x34]         ; 00426a2a
    FLD float ptr [ESP + 0x94]          ; 00426a2d
    FXCH                                ; 00426a34
    FSTP float ptr [ESP + 0xfc]         ; 00426a36
    FMUL float ptr [ESP + 0xfc]         ; 00426a3d
    FLD float ptr [ESP + 0x98]          ; 00426a44
    FMUL float ptr [ESP + 0xfc]         ; 00426a4b
    FLD float ptr [ESP + 0x9c]          ; 00426a52
    LEA EAX,[EDI + 0x12b00]             ; 00426a59
    FMUL float ptr [ESP + 0xfc]         ; 00426a5f
    PUSH EAX                            ; 00426a66
    LEA EAX,[ESP + 0xe0]                ; 00426a67
    LEA EBX,[ESI + 0x8]                 ; 00426a6e
    PUSH EAX                            ; 00426a71
    FXCH ST2                            ; 00426a72
    FSTP float ptr [ESP + 0xa8]         ; 00426a74
    FSTP float ptr [ESP + 0xac]         ; 00426a7b
    FSTP float ptr [ESP + 0xb0]         ; 00426a82
    FLD float ptr [ESP + 0xa8]          ; 00426a89
    FLD float ptr [ESP + 0xac]          ; 00426a90
    LEA EAX,[ESP + 0x78]                ; 00426a97
    FLD float ptr [ESP + 0xb0]          ; 00426a9b
    PUSH EAX                            ; 00426aa2
    FXCH ST2                            ; 00426aa3
    FADD float ptr [ESP + 0x70]         ; 00426aa5
    FXCH                                ; 00426aa9
    FADD float ptr [ESP + 0x74]         ; 00426aab
    FXCH ST2                            ; 00426aaf
    FADD float ptr [ESP + 0x78]         ; 00426ab1
    FXCH                                ; 00426ab5
    FSTP float ptr [ESP + 0xe8]         ; 00426ab7
    FXCH                                ; 00426abe
    FSTP float ptr [ESP + 0xec]         ; 00426ac0
    FSTP float ptr [ESP + 0xf0]         ; 00426ac7
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00426ace
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00426ad3
    CMP EBX,EAX                         ; 00426ad6
    JZ 0x00426aea                       ; 00426ad8
        ;   XREF to: 00426aea (CONDITIONAL_JUMP)  ; LAB_00426aea
    MOV EDX,dword ptr [EAX]             ; 00426ada
    MOV dword ptr [EBX],EDX             ; 00426adc
    MOV EDX,dword ptr [EAX + 0x4]       ; 00426ade
    MOV dword ptr [EBX + 0x4],EDX       ; 00426ae1
    MOV EDX,dword ptr [EAX + 0x8]       ; 00426ae4
    MOV dword ptr [EBX + 0x8],EDX       ; 00426ae7
    FLD float ptr [ESP + 0xe8]          ; 00426aea
        ;   Label: LAB_00426aea
    FLD float ptr [ESP + 0xec]          ; 00426af1
    FLD float ptr [ESP + 0xf0]          ; 00426af8
    FXCH ST2                            ; 00426aff
    FSUB float ptr [ESP + 0x94]         ; 00426b01
    FXCH                                ; 00426b08
    FSUB float ptr [ESP + 0x98]         ; 00426b0a
    FXCH ST2                            ; 00426b11
    FSUB float ptr [ESP + 0x9c]         ; 00426b13
    FXCH                                ; 00426b1a
    FSTP float ptr [ESP + 0x40]         ; 00426b1c
    FXCH                                ; 00426b20
    FSTP float ptr [ESP + 0x44]         ; 00426b22
    FSTP float ptr [ESP + 0x48]         ; 00426b26
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00426b2a
    LEA EAX,[EDX*0x4 + 0x0]             ; 00426b2d
    MOV ECX,dword ptr [EDI + 0x12afc]   ; 00426b34
    ADD EAX,EDX                         ; 00426b3a
    PUSH ECX                            ; 00426b3c
    MOV EDX,dword ptr [EDI + EAX*0x8 + 0x12b3c] ; 00426b3d
    MOV EAX,dword ptr [EDI + 0x12b30]   ; 00426b44
    LEA EBX,[EDX*0x8 + 0x0]             ; 00426b4a
    SHL EAX,0x2                         ; 00426b51
    ADD EBX,EDX                         ; 00426b54
    MOV dword ptr [ESP + 0x104],EAX     ; 00426b56
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 00426b5d
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00426b62
    ADD EAX,dword ptr [ESP + 0x100]     ; 00426b65
    ADD EBX,EBX                         ; 00426b6c
    MOV EDX,dword ptr [EAX + 0x7c]      ; 00426b6e
    ADD EDX,EBX                         ; 00426b71
    XOR EBX,EBX                         ; 00426b73
    MOV BX,word ptr [EDX]               ; 00426b75
    LEA EAX,[EBX*0x4 + 0x0]             ; 00426b78
    MOV ECX,dword ptr [EDI + 0x12afc]   ; 00426b7f
    SUB EAX,EBX                         ; 00426b85
    MOV ECX,dword ptr [ECX + 0x2234]    ; 00426b87
    SHL EAX,0x2                         ; 00426b8d
    LEA EBX,[ESP + 0x94]                ; 00426b90
    ADD EAX,ECX                         ; 00426b97
    FILD dword ptr [EAX]                ; 00426b99
    FMUL float ptr [0x0065b5b8]         ; 00426b9b | DAT_0065b5b8
    FSTP float ptr [EBX]                ; 00426ba1
    FILD dword ptr [EAX + 0x4]          ; 00426ba3
    FMUL float ptr [0x0065b5b8]         ; 00426ba6 | DAT_0065b5b8
    FSTP float ptr [EBX + 0x4]          ; 00426bac
    FILD dword ptr [EAX + 0x8]          ; 00426baf
    FMUL float ptr [0x0065b5b8]         ; 00426bb2 | DAT_0065b5b8
    FSTP float ptr [EBX + 0x8]          ; 00426bb8
    XOR EBX,EBX                         ; 00426bbb
    MOV BX,word ptr [EDX + 0x2]         ; 00426bbd
    LEA EAX,[EBX*0x4 + 0x0]             ; 00426bc1
    SUB EAX,EBX                         ; 00426bc8
    MOV ECX,dword ptr [EDI + 0x12afc]   ; 00426bca
    LEA EBX,[EAX*0x4 + 0x0]             ; 00426bd0
    MOV EAX,dword ptr [ECX + 0x2234]    ; 00426bd7
    ADD EAX,EBX                         ; 00426bdd
    LEA EBX,[ESP + 0xe8]                ; 00426bdf
    FILD dword ptr [EAX]                ; 00426be6
    FMUL float ptr [0x0065b5b8]         ; 00426be8 | DAT_0065b5b8
    FSTP float ptr [EBX]                ; 00426bee
    FILD dword ptr [EAX + 0x4]          ; 00426bf0
    FMUL float ptr [0x0065b5b8]         ; 00426bf3 | DAT_0065b5b8
    FSTP float ptr [EBX + 0x4]          ; 00426bf9
    FILD dword ptr [EAX + 0x8]          ; 00426bfc
    FMUL float ptr [0x0065b5b8]         ; 00426bff | DAT_0065b5b8
    FSTP float ptr [EBX + 0x8]          ; 00426c05
    MOV EBX,dword ptr [EDI + 0x12afc]   ; 00426c08
    MOV DX,word ptr [EDX + 0x4]         ; 00426c0e
    AND EDX,0xffff                      ; 00426c12
    LEA EAX,[EDX*0x4 + 0x0]             ; 00426c18
    SUB EAX,EDX                         ; 00426c1f
    SHL EAX,0x2                         ; 00426c21
    MOV EDX,dword ptr [EBX + 0x2234]    ; 00426c24
    LEA EBX,[ESP + 0xb8]                ; 00426c2a
    ADD EAX,EDX                         ; 00426c31
    FILD dword ptr [EAX]                ; 00426c33
    FMUL float ptr [0x0065b5b8]         ; 00426c35 | DAT_0065b5b8
    FSTP float ptr [EBX]                ; 00426c3b
    FILD dword ptr [EAX + 0x4]          ; 00426c3d
    FMUL float ptr [0x0065b5b8]         ; 00426c40 | DAT_0065b5b8
    FSTP float ptr [EBX + 0x4]          ; 00426c46
    FILD dword ptr [EAX + 0x8]          ; 00426c49
    FMUL float ptr [0x0065b5b8]         ; 00426c4c | DAT_0065b5b8
    FSTP float ptr [EBX + 0x8]          ; 00426c52
    FLD float ptr [ESP + 0xc0]          ; 00426c55
    FLD float ptr [ESP + 0xec]          ; 00426c5c
    FSUB float ptr [ESP + 0x98]         ; 00426c63
    FXCH                                ; 00426c6a
    FSUB float ptr [ESP + 0xf0]         ; 00426c6c
    FXCH                                ; 00426c73
    FSTP float ptr [ESP + 0xc8]         ; 00426c75
    FSTP float ptr [ESP + 0x84]         ; 00426c7c
    FLD float ptr [ESP + 0xc8]          ; 00426c83
    FMUL float ptr [ESP + 0x84]         ; 00426c8a
    FLD float ptr [ESP + 0xb8]          ; 00426c91
    FLD float ptr [ESP + 0xf0]          ; 00426c98
    FSUB float ptr [ESP + 0x9c]         ; 00426c9f
    FXCH                                ; 00426ca6
    FSUB float ptr [ESP + 0xe8]         ; 00426ca8
    FXCH                                ; 00426caf
    FSTP float ptr [ESP + 0xcc]         ; 00426cb1
    FSTP float ptr [ESP + 0x7c]         ; 00426cb8
    FLD float ptr [ESP + 0xcc]          ; 00426cbc
    FMUL float ptr [ESP + 0x7c]         ; 00426cc3
    FLD float ptr [ESP + 0xbc]          ; 00426cc7
    FLD float ptr [ESP + 0xe8]          ; 00426cce
    FSUB float ptr [ESP + 0x94]         ; 00426cd5
    FXCH                                ; 00426cdc
    FSUB float ptr [ESP + 0xec]         ; 00426cde
    FXCH                                ; 00426ce5
    FSTP float ptr [ESP + 0xc4]         ; 00426ce7
    FSTP float ptr [ESP + 0x80]         ; 00426cee
    FLD float ptr [ESP + 0xc4]          ; 00426cf5
    FMUL float ptr [ESP + 0x80]         ; 00426cfc
    FLD float ptr [ESP + 0xcc]          ; 00426d03
    FMUL float ptr [ESP + 0x80]         ; 00426d0a
    FLD float ptr [ESP + 0xc4]          ; 00426d11
    FMUL float ptr [ESP + 0x84]         ; 00426d18
    FLD float ptr [ESP + 0xc8]          ; 00426d1f
    FXCH                                ; 00426d26
    FSUBP ST4,ST0                       ; 00426d28
    FMUL float ptr [ESP + 0x7c]         ; 00426d2a
    FXCH ST3                            ; 00426d2e
    FST float ptr [ESP + 0x5c]          ; 00426d30
    FMUL float ptr [ESP + 0x48]         ; 00426d34
    FXCH ST3                            ; 00426d38
    FSUBP ST2,ST0                       ; 00426d3a
    FSUBP ST3,ST0                       ; 00426d3c
    FST float ptr [ESP + 0x60]          ; 00426d3e
    FMUL float ptr [ESP + 0x40]         ; 00426d42
    FXCH ST2                            ; 00426d46
    FST float ptr [ESP + 0x58]          ; 00426d48
    FMUL float ptr [ESP + 0x44]         ; 00426d4c
    FLD float ptr [ESP + 0x60]          ; 00426d50
    FMUL float ptr [ESP + 0x44]         ; 00426d54
    FLD float ptr [ESP + 0x58]          ; 00426d58
    FMUL float ptr [ESP + 0x48]         ; 00426d5c
    FLD float ptr [ESP + 0x5c]          ; 00426d60
    FMUL float ptr [ESP + 0x40]         ; 00426d64
    FLD float ptr [ESP + 0x44]          ; 00426d68
    FXCH                                ; 00426d6c
    FSUBP ST4,ST0                       ; 00426d6e
    FXCH ST2                            ; 00426d70
    FSUBP ST4,ST0                       ; 00426d72
    FXCH ST2                            ; 00426d74
    FSTP float ptr [ESP + 0x90]         ; 00426d76
    FMUL float ptr [ESP + 0x90]         ; 00426d7d
    FXCH ST2                            ; 00426d84
    FSTP float ptr [ESP + 0x88]         ; 00426d86
    FLD float ptr [ESP + 0x48]          ; 00426d8d
    FMUL float ptr [ESP + 0x88]         ; 00426d91
    FXCH                                ; 00426d98
    FSUBP ST3,ST0                       ; 00426d9a
    FLD float ptr [ESP + 0x40]          ; 00426d9c
    FXCH ST3                            ; 00426da0
    FSTP float ptr [ESP + 0x8c]         ; 00426da2
    FXCH ST2                            ; 00426da9
    FMUL float ptr [ESP + 0x8c]         ; 00426dab
    FLD float ptr [ESP + 0x48]          ; 00426db2
    FMUL float ptr [ESP + 0x8c]         ; 00426db6
    FLD float ptr [ESP + 0x40]          ; 00426dbd
    FMUL float ptr [ESP + 0x90]         ; 00426dc1
    FLD float ptr [ESP + 0x44]          ; 00426dc8
    FMUL float ptr [ESP + 0x88]         ; 00426dcc
    LEA EAX,[ESP + 0x4c]                ; 00426dd3
    LEA EDX,[ESP + 0x58]                ; 00426dd7
    FXCH ST2                            ; 00426ddb
    FSUBP ST4,ST0                       ; 00426ddd
    FSUBP ST4,ST0                       ; 00426ddf
    FSUBP                               ; 00426de1
    FXCH                                ; 00426de3
    FSTP float ptr [ESP + 0x4c]         ; 00426de5
    FXCH                                ; 00426de9
    FSTP float ptr [ESP + 0x50]         ; 00426deb
    FSTP float ptr [ESP + 0x54]         ; 00426def
    CMP EDX,EAX                         ; 00426df3
    JZ 0x00426e0f                       ; 00426df5
        ;   XREF to: 00426e0f (CONDITIONAL_JUMP)  ; LAB_00426e0f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00426df7
    MOV dword ptr [ESP + 0x58],EAX      ; 00426dfb
    MOV EAX,dword ptr [ESP + 0x50]      ; 00426dff
    MOV dword ptr [ESP + 0x5c],EAX      ; 00426e03
    MOV EAX,dword ptr [ESP + 0x54]      ; 00426e07
    MOV dword ptr [ESP + 0x60],EAX      ; 00426e0b
    FLD float ptr [ESP + 0x5c]          ; 00426e0f
        ;   Label: LAB_00426e0f
    FMUL ST0                            ; 00426e13
    FLD float ptr [ESP + 0x58]          ; 00426e15
    FMUL ST0                            ; 00426e19
    FADDP                               ; 00426e1b
    FLD float ptr [ESP + 0x60]          ; 00426e1d
    FMUL ST0                            ; 00426e21
    FADDP                               ; 00426e23
    FSQRT                               ; 00426e25
    FST float ptr [ESP + 0x10]          ; 00426e27
    FLDZ                                ; 00426e2b
    FCOMPP                              ; 00426e2d
    FNSTSW AX                           ; 00426e2f
    SAHF                                ; 00426e31
    JNC 0x00427096                      ; 00426e32
        ;   XREF to: 00427096 (CONDITIONAL_JUMP)  ; LAB_00427096
    FLD1                                ; 00426e38
    FLD float ptr [ESP + 0x58]          ; 00426e3a
    FXCH                                ; 00426e3e
    FDIV float ptr [ESP + 0x10]         ; 00426e40
    FXCH                                ; 00426e44
    FMUL ST1                            ; 00426e46
    FLD float ptr [ESP + 0x5c]          ; 00426e48
    FMUL ST2                            ; 00426e4c
    FLD float ptr [ESP + 0x60]          ; 00426e4e
    FMULP ST3                           ; 00426e52
    FXCH                                ; 00426e54
    FSTP float ptr [ESP + 0x58]         ; 00426e56
    FSTP float ptr [ESP + 0x5c]         ; 00426e5a
    FSTP float ptr [ESP + 0x60]         ; 00426e5e
    FLD float ptr [ESP + 0x8c]          ; 00426e62
        ;   Label: LAB_00426e62
    FMUL ST0                            ; 00426e69
    FLD float ptr [ESP + 0x88]          ; 00426e6b
    FMUL ST0                            ; 00426e72
    FADDP                               ; 00426e74
    FLD float ptr [ESP + 0x90]          ; 00426e76
    FMUL ST0                            ; 00426e7d
    FADDP                               ; 00426e7f
    FSQRT                               ; 00426e81
    FST float ptr [ESP + 0x4]           ; 00426e83
    FLDZ                                ; 00426e87
    FCOMPP                              ; 00426e89
    FNSTSW AX                           ; 00426e8b
    SAHF                                ; 00426e8d
    JNC 0x004270a9                      ; 00426e8e
        ;   XREF to: 004270a9 (CONDITIONAL_JUMP)  ; LAB_004270a9
    FLD1                                ; 00426e94
    FLD float ptr [ESP + 0x88]          ; 00426e96
    FXCH                                ; 00426e9d
    FDIV float ptr [ESP + 0x4]          ; 00426e9f
    FXCH                                ; 00426ea3
    FMUL ST1                            ; 00426ea5
    FLD float ptr [ESP + 0x8c]          ; 00426ea7
    FMUL ST2                            ; 00426eae
    FLD float ptr [ESP + 0x90]          ; 00426eb0
    FMULP ST3                           ; 00426eb7
    FXCH                                ; 00426eb9
    FSTP float ptr [ESP + 0x88]         ; 00426ebb
    FSTP float ptr [ESP + 0x8c]         ; 00426ec2
    FSTP float ptr [ESP + 0x90]         ; 00426ec9
    FLD float ptr [ESP + 0x44]          ; 00426ed0
        ;   Label: LAB_00426ed0
    FMUL ST0                            ; 00426ed4
    FLD float ptr [ESP + 0x40]          ; 00426ed6
    FMUL ST0                            ; 00426eda
    FADDP                               ; 00426edc
    FLD float ptr [ESP + 0x48]          ; 00426ede
    FMUL ST0                            ; 00426ee2
    FADDP                               ; 00426ee4
    FSQRT                               ; 00426ee6
    FST float ptr [ESP + 0x14]          ; 00426ee8
    FLDZ                                ; 00426eec
    FCOMPP                              ; 00426eee
    FNSTSW AX                           ; 00426ef0
    SAHF                                ; 00426ef2
    JNC 0x004270c5                      ; 00426ef3
        ;   XREF to: 004270c5 (CONDITIONAL_JUMP)  ; LAB_004270c5
    FLD1                                ; 00426ef9
    FLD float ptr [ESP + 0x40]          ; 00426efb
    FXCH                                ; 00426eff
    FDIV float ptr [ESP + 0x14]         ; 00426f01
    FXCH                                ; 00426f05
    FMUL ST1                            ; 00426f07
    FLD float ptr [ESP + 0x44]          ; 00426f09
    FMUL ST2                            ; 00426f0d
    FLD float ptr [ESP + 0x48]          ; 00426f0f
    FMULP ST3                           ; 00426f13
    FXCH                                ; 00426f15
    FSTP float ptr [ESP + 0x40]         ; 00426f17
    FSTP float ptr [ESP + 0x44]         ; 00426f1b
    FSTP float ptr [ESP + 0x48]         ; 00426f1f
    MOV EAX,dword ptr [ESP + 0x88]      ; 00426f23
        ;   Label: LAB_00426f23
    MOV dword ptr [ESP + 0x18],EAX      ; 00426f2a
    MOV EAX,dword ptr [ESP + 0x58]      ; 00426f2e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00426f32
    MOV EAX,dword ptr [ESP + 0x40]      ; 00426f36
    MOV dword ptr [ESP + 0x20],EAX      ; 00426f3a
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00426f3e
    MOV dword ptr [ESP + 0x24],EAX      ; 00426f45
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00426f49
    MOV dword ptr [ESP + 0x28],EAX      ; 00426f4d
    MOV EAX,dword ptr [ESP + 0x44]      ; 00426f51
    MOV dword ptr [ESP + 0x2c],EAX      ; 00426f55
    MOV EAX,dword ptr [ESP + 0x90]      ; 00426f59
    MOV dword ptr [ESP + 0x30],EAX      ; 00426f60
    MOV EAX,dword ptr [ESP + 0x60]      ; 00426f64
    MOV dword ptr [ESP + 0x34],EAX      ; 00426f68
    MOV EAX,dword ptr [ESP + 0x48]      ; 00426f6c
    MOV dword ptr [ESP + 0x38],EAX      ; 00426f70
    LEA EAX,[ESP + 0xd0]                ; 00426f74
    PUSH EAX                            ; 00426f7b
    LEA EAX,[ESP + 0x1c]                ; 00426f7c
    PUSH EAX                            ; 00426f80
    ADD ESI,0x14                        ; 00426f81
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 00426f84
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00426f89
    CMP ESI,EAX                         ; 00426f8c
    JNZ 0x004270d8                      ; 00426f8e
        ;   XREF to: 004270d8 (CONDITIONAL_JUMP)  ; LAB_004270d8
    MOV ESP,EBP                         ; 00426f94
        ;   Label: LAB_00426f94
    POP EBP                             ; 00426f96
    POP EDI                             ; 00426f97
    POP ESI                             ; 00426f98
    POP EBX                             ; 00426f99
    RET                                 ; 00426f9a
    MOV EDX,dword ptr [ESI + 0x30]      ; 00426f9b
        ;   Label: LAB_00426f9b
    LEA EAX,[EDX*0x4 + 0x0]             ; 00426f9e
    SUB EAX,EDX                         ; 00426fa5
    MOV EBX,dword ptr [EDI + 0x12afc]   ; 00426fa7
    LEA EDX,[EAX*0x4 + 0x0]             ; 00426fad
    MOV EAX,dword ptr [EBX + 0x2234]    ; 00426fb4
    LEA EBX,[ESP + 0xac]                ; 00426fba
    ADD EAX,EDX                         ; 00426fc1
    FILD dword ptr [EAX]                ; 00426fc3
    FMUL float ptr [0x0065b5b8]         ; 00426fc5 | DAT_0065b5b8
    FSTP float ptr [EBX]                ; 00426fcb
    FILD dword ptr [EAX + 0x4]          ; 00426fcd
    FMUL float ptr [0x0065b5b8]         ; 00426fd0 | DAT_0065b5b8
    FSTP float ptr [EBX + 0x4]          ; 00426fd6
    FILD dword ptr [EAX + 0x8]          ; 00426fd9
    FMUL float ptr [0x0065b5b8]         ; 00426fdc | DAT_0065b5b8
    FSTP float ptr [EBX + 0x8]          ; 00426fe2
    LEA EAX,[EDI + 0x12b00]             ; 00426fe5
    PUSH EAX                            ; 00426feb
    LEA EAX,[ESP + 0xb0]                ; 00426fec
    PUSH EAX                            ; 00426ff3
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20 ; 00426ff4
        ;   XREF to: 005f4e20 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20(CVector3f * input_output_vector, CMatrix3x4f * matrix)
    ADD ESP,0x8                         ; 00426ff9
    LEA EAX,[ESP + 0xac]                ; 00426ffc
    PUSH EAX                            ; 00427003
    PUSH dword ptr [ESP + 0x4]          ; 00427004
    PUSH ESI                            ; 00427008
    PUSH EDI                            ; 00427009
    CALL core_bugs.cpp_FUN_00426420     ; 0042700a
        ;   XREF to: 00426420 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00426420()
    ADD ESP,0x10                        ; 0042700f
    TEST EAX,EAX                        ; 00427012
    JZ 0x00426f94                       ; 00427014
        ;   XREF to: 00426f94 (CONDITIONAL_JUMP)  ; LAB_00426f94
    PUSH ESI                            ; 0042701a
    PUSH EDI                            ; 0042701b
    CALL core_bugs.cpp_FUN_004270f0     ; 0042701c
        ;   XREF to: 004270f0 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_004270f0()
    ADD ESP,0x8                         ; 00427021
    MOV dword ptr [ESI + 0x34],0x0      ; 00427024
    MOV ESP,EBP                         ; 0042702b
    POP EBP                             ; 0042702d
    POP EDI                             ; 0042702e
    POP ESI                             ; 0042702f
    POP EBX                             ; 00427030
    RET                                 ; 00427031
    PUSH ESI                            ; 00427032
        ;   Label: LAB_00427032
    PUSH EDI                            ; 00427033
    CALL core_bugs.cpp_FUN_004270f0     ; 00427034
        ;   XREF to: 004270f0 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_004270f0()
    ADD ESP,0x8                         ; 00427039
    MOV dword ptr [ESI + 0x34],0x0      ; 0042703c
    JMP 0x0042696c                      ; 00427043
        ;   XREF to: 0042696c (UNCONDITIONAL_JUMP)  ; LAB_0042696c
    PUSH ESI                            ; 00427048
        ;   Label: LAB_00427048
    PUSH EDI                            ; 00427049
    CALL core_bugs.cpp_FUN_004270f0     ; 0042704a
        ;   XREF to: 004270f0 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_004270f0()
    ADD ESP,0x8                         ; 0042704f
    FLD float ptr [ESP + 0xc]           ; 00427052
    FLD1                                ; 00427056
    FSUBRP                              ; 00427058
    FDIV float ptr [ESP + 0x8]          ; 0042705a
    FLD float ptr [ESI + 0x34]          ; 0042705e
    FADD float ptr [0x00616e43]         ; 00427061 | FLOAT_00616e43
    FLD float ptr [ESP]                 ; 00427067
    FXCH ST2                            ; 0042706a
    FSUBR ST0,ST2                       ; 0042706c
    FXCH                                ; 0042706e
    FSTP float ptr [ESI + 0x34]         ; 00427070
    FSTP ST1                            ; 00427073
    FST float ptr [ESP]                 ; 00427075
    FCOMP double ptr [0x00616e4b]       ; 00427078 | DOUBLE_00616e4b
    FNSTSW AX                           ; 0042707e
    SAHF                                ; 00427080
    JC 0x00426946                       ; 00427081
        ;   XREF to: 00426946 (CONDITIONAL_JUMP)  ; LAB_00426946
    INC EBX                             ; 00427087
    CMP EBX,0x3                         ; 00427088
    JL 0x00426924                       ; 0042708b
        ;   XREF to: 00426924 (CONDITIONAL_JUMP)  ; LAB_00426924
    JMP 0x00426946                      ; 00427091
        ;   XREF to: 00426946 (UNCONDITIONAL_JUMP)  ; LAB_00426946
    XOR ECX,ECX                         ; 00427096
        ;   Label: LAB_00427096
    MOV dword ptr [ESP + 0x5c],ECX      ; 00427098
    MOV dword ptr [ESP + 0x58],ECX      ; 0042709c
    MOV dword ptr [ESP + 0x60],ECX      ; 004270a0
    JMP 0x00426e62                      ; 004270a4
        ;   XREF to: 00426e62 (UNCONDITIONAL_JUMP)  ; LAB_00426e62
    XOR EAX,EAX                         ; 004270a9
        ;   Label: LAB_004270a9
    MOV dword ptr [ESP + 0x8c],EAX      ; 004270ab
    MOV dword ptr [ESP + 0x88],EAX      ; 004270b2
    MOV dword ptr [ESP + 0x90],EAX      ; 004270b9
    JMP 0x00426ed0                      ; 004270c0
        ;   XREF to: 00426ed0 (UNCONDITIONAL_JUMP)  ; LAB_00426ed0
    XOR EBX,EBX                         ; 004270c5
        ;   Label: LAB_004270c5
    MOV dword ptr [ESP + 0x44],EBX      ; 004270c7
    MOV dword ptr [ESP + 0x40],EBX      ; 004270cb
    MOV dword ptr [ESP + 0x48],EBX      ; 004270cf
    JMP 0x00426f23                      ; 004270d3
        ;   XREF to: 00426f23 (UNCONDITIONAL_JUMP)  ; LAB_00426f23
    MOV EDX,dword ptr [EAX]             ; 004270d8
        ;   Label: LAB_004270d8
    MOV dword ptr [ESI],EDX             ; 004270da
    MOV EDX,dword ptr [EAX + 0x4]       ; 004270dc
    MOV dword ptr [ESI + 0x4],EDX       ; 004270df
    MOV EDX,dword ptr [EAX + 0x8]       ; 004270e2
    MOV dword ptr [ESI + 0x8],EDX       ; 004270e5
    MOV ESP,EBP                         ; 004270e8
    POP EBP                             ; 004270ea
    POP EDI                             ; 004270eb
    POP ESI                             ; 004270ec
    POP EBX                             ; 004270ed
    RET                                 ; 004270ee

