; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boneguy.cpp_FUN_0041ca40()
;
; Local Variables:
; undefined1       Stack[-0x120]:1  local_120
; undefined1       Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xc4]:4  local_c4
; undefined1       Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined1       Stack[-0x78]:1  local_78
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
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined1       Stack[-0xc]:1  local_c
;
; Referenced Globals:
;   float FLOAT_00616165 = 0.5
;   double DOUBLE_0061616d = 0.400000000000000
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CVector_ctor_FUN_00410340
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ca40
        ;   Label: core_boneguy.cpp_FUN_0041ca40
    PUSH EDI                            ; 0041ca41
    PUSH EBP                            ; 0041ca42
    MOV EBP,ESP                         ; 0041ca43
    SUB ESP,0x114                       ; 0041ca45
    SUB EBP,0x7a                        ; 0041ca4b
    MOV EBX,ESI                         ; 0041ca4e
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0041ca50
    MOV EAX,EDX                         ; 0041ca56
    SHL EAX,0x4                         ; 0041ca58
    ADD EAX,EDX                         ; 0041ca5b
    MOV EDX,dword ptr [EBP + 0x8a]      ; 0041ca5d
    SHL EAX,0x2                         ; 0041ca63
    ADD EAX,EDX                         ; 0041ca66
    MOV ESI,dword ptr [EAX + 0x24b4]    ; 0041ca68
    MOV EDI,dword ptr [EAX + 0x24ac]    ; 0041ca6e
    MOV dword ptr [EBP + 0x2e],0x40224dd3 ; 0041ca74
    LEA EAX,[EBP + 0x26]                ; 0041ca7b
    PUSH EAX                            ; 0041ca7e
    MOV ECX,0xbf456042                  ; 0041ca7f
    PUSH 0x3f87558                      ; 0041ca84 | g_ZeroVector
    LEA EAX,[EBP + 0xffffff66]          ; 0041ca89
    MOV EDX,0xc0224dd3                  ; 0041ca8f
    PUSH EAX                            ; 0041ca94
    MOV dword ptr [EBP + 0x26],ECX      ; 0041ca95
    MOV dword ptr [EBP + 0x2a],EDX      ; 0041ca98
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0041ca9b
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0041caa0
    LEA EAX,[EBP + -0xa]                ; 0041caa3
    PUSH EAX                            ; 0041caa6
    MOV EDX,dword ptr [ESI + 0x154]     ; 0041caa7
    PUSH ESI                            ; 0041caad
    CALL dword ptr [EDX + 0x14]         ; 0041caae
    ADD ESP,0x8                         ; 0041cab1
    LEA EAX,[EBP + 0x32]                ; 0041cab4
    PUSH EAX                            ; 0041cab7
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0041cab8
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    FLD float ptr [EBP + -0xa]          ; 0041cabd
    FLD float ptr [EBP + -0x6]          ; 0041cac0
    FLD float ptr [EBP + -0x2]          ; 0041cac3
    LEA EAX,[EBP + 0x56]                ; 0041cac6
    ADD ESP,0x4                         ; 0041cac9
    FXCH ST2                            ; 0041cacc
    FADD float ptr [EBP + 0x2]          ; 0041cace
    FXCH                                ; 0041cad1
    FADD float ptr [EBP + 0x6]          ; 0041cad3
    FXCH ST2                            ; 0041cad6
    FADD float ptr [EBP + 0xa]          ; 0041cad8
    PUSH EAX                            ; 0041cadb
    FXCH                                ; 0041cadc
    FSTP float ptr [EBP + 0x32]         ; 0041cade
    FXCH                                ; 0041cae1
    FSTP float ptr [EBP + 0x36]         ; 0041cae3
    FSTP float ptr [EBP + 0x3a]         ; 0041cae6
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0041cae9
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    FLD float ptr [0x00616165]          ; 0041caee | FLOAT_00616165
    FLD float ptr [EBP + 0x32]          ; 0041caf4
    FMUL ST1                            ; 0041caf7
    FLD float ptr [EBP + 0x36]          ; 0041caf9
    FMULP ST2                           ; 0041cafc
    FLD float ptr [EBP + -0x2]          ; 0041cafe
    LEA EAX,[EBP + 0x56]                ; 0041cb01
    LEA EDX,[EBP + 0x3e]                ; 0041cb04
    ADD ESP,0x4                         ; 0041cb07
    FADD double ptr [0x0061616d]        ; 0041cb0a | DOUBLE_0061616d
    FXCH                                ; 0041cb10
    FSTP float ptr [EBP + 0x56]         ; 0041cb12
    FXCH                                ; 0041cb15
    FSTP float ptr [EBP + 0x5a]         ; 0041cb17
    FSTP float ptr [EBP + 0x5e]         ; 0041cb1a
    CMP EDX,EAX                         ; 0041cb1d
    JZ 0x0041cb33                       ; 0041cb1f
        ;   XREF to: 0041cb33 (CONDITIONAL_JUMP)  ; LAB_0041cb33
    MOV EAX,dword ptr [EBP + 0x56]      ; 0041cb21
    MOV dword ptr [EBP + 0x3e],EAX      ; 0041cb24
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0041cb27
    MOV dword ptr [EBP + 0x42],EAX      ; 0041cb2a
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0041cb2d
    MOV dword ptr [EBP + 0x46],EAX      ; 0041cb30
    LEA EDX,[EDI*0x4 + 0x0]             ; 0041cb33
        ;   Label: LAB_0041cb33
    MOV EAX,dword ptr [EBP + 0x8a]      ; 0041cb3a
    SUB EDX,EDI                         ; 0041cb40
    ADD EAX,0xfd8                       ; 0041cb42
    SHL EDX,0x4                         ; 0041cb47
    ADD EAX,EDX                         ; 0041cb4a
    PUSH EAX                            ; 0041cb4c
    MOV dword ptr [EBP + 0x22],0xbda7ef9e ; 0041cb4d
    LEA EAX,[EBP + 0x1a]                ; 0041cb54
    MOV ECX,0x3d03126f                  ; 0041cb57
    PUSH EAX                            ; 0041cb5c
    LEA EAX,[EBP + 0xe]                 ; 0041cb5d
    MOV ESI,0x3e560419                  ; 0041cb60
    PUSH EAX                            ; 0041cb65
    MOV dword ptr [EBP + 0x1a],ECX      ; 0041cb66
    MOV dword ptr [EBP + 0x1e],ESI      ; 0041cb69
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0041cb6c
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EDX,EAX                         ; 0041cb71
    LEA EAX,[EBP + 0x6e]                ; 0041cb73
    ADD ESP,0xc                         ; 0041cb76
    CMP EAX,EDX                         ; 0041cb79
    JZ 0x0041cb8e                       ; 0041cb7b
        ;   XREF to: 0041cb8e (CONDITIONAL_JUMP)  ; LAB_0041cb8e
    MOV EAX,dword ptr [EDX]             ; 0041cb7d
    MOV dword ptr [EBP + 0x6e],EAX      ; 0041cb7f
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041cb82
    MOV dword ptr [EBP + 0x72],EAX      ; 0041cb85
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041cb88
    MOV dword ptr [EBP + 0x76],EAX      ; 0041cb8b
    LEA EDX,[EDI*0x4 + 0x0]             ; 0041cb8e
        ;   Label: LAB_0041cb8e
    MOV EAX,dword ptr [EBP + 0x8a]      ; 0041cb95
    SUB EDX,EDI                         ; 0041cb9b
    ADD EAX,0xfd8                       ; 0041cb9d
    SHL EDX,0x4                         ; 0041cba2
    ADD EAX,EDX                         ; 0041cba5
    PUSH EAX                            ; 0041cba7
    LEA EAX,[EBP + 0xffffff66]          ; 0041cba8
    PUSH EAX                            ; 0041cbae
    LEA ESI,[EBP + -0x3a]               ; 0041cbaf
    LEA EDI,[EBP + -0x6a]               ; 0041cbb2
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0041cbb5
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0041cbba
    LEA EAX,[EBP + -0x6a]               ; 0041cbbd
    MOV ECX,0xc                         ; 0041cbc0
    PUSH EAX                            ; 0041cbc5
    LEA EAX,[EBP + 0x3e]                ; 0041cbc6
    LEA ESI,[EBP + -0x3a]               ; 0041cbc9
    PUSH EAX                            ; 0041cbcc
    LEA EAX,[EBP + 0x62]                ; 0041cbcd
    MOVSD.REP ES:EDI,ESI                ; 0041cbd0
    PUSH EAX                            ; 0041cbd2
    LEA ESI,[EBP + -0x6a]               ; 0041cbd3
    MOV EDI,EBX                         ; 0041cbd6
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0041cbd8
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EBP + 0x6e]          ; 0041cbdd
    FLD float ptr [EBP + 0x72]          ; 0041cbe0
    FLD float ptr [EBP + 0x76]          ; 0041cbe3
    FLD float ptr [EBP + -0x5e]         ; 0041cbe6
    FLD float ptr [EBP + -0x4e]         ; 0041cbe9
    FLD float ptr [EBP + -0x3e]         ; 0041cbec
    MOV ECX,0xc                         ; 0041cbef
    FXCH ST5                            ; 0041cbf4
    FSUB float ptr [EAX]                ; 0041cbf6
    ADD ESP,0xc                         ; 0041cbf8
    FSTP float ptr [EBP + 0x4a]         ; 0041cbfb
    FXCH ST3                            ; 0041cbfe
    FSUB float ptr [EAX + 0x4]          ; 0041cc00
    FXCH                                ; 0041cc03
    FADD float ptr [EBP + 0x4a]         ; 0041cc05
    FXCH                                ; 0041cc08
    FSTP float ptr [EBP + 0x4e]         ; 0041cc0a
    FXCH                                ; 0041cc0d
    FSUB float ptr [EAX + 0x8]          ; 0041cc0f
    FXCH ST2                            ; 0041cc12
    FADD float ptr [EBP + 0x4e]         ; 0041cc14
    FXCH ST2                            ; 0041cc17
    FSTP float ptr [EBP + 0x52]         ; 0041cc19
    FSTP float ptr [EBP + -0x5e]        ; 0041cc1c
    FXCH                                ; 0041cc1f
    FADD float ptr [EBP + 0x52]         ; 0041cc21
    FXCH                                ; 0041cc24
    FSTP float ptr [EBP + -0x4e]        ; 0041cc26
    FSTP float ptr [EBP + -0x3e]        ; 0041cc29
    MOVSD.REP ES:EDI,ESI                ; 0041cc2c
    MOV EAX,EBX                         ; 0041cc2e
    LEA ESP,[EBP + 0x7a]                ; 0041cc30
    POP EBP                             ; 0041cc33
    POP EDI                             ; 0041cc34
    POP EBX                             ; 0041cc35
    RET                                 ; 0041cc36

