; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_00503c90(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005e743d
;   undefined4 DAT_005e7445
;   undefined4 DAT_005e744d
;   undefined4 DAT_005e7455
;   undefined4 DAT_005e745d
;   undefined4 DAT_0060343c
;   undefined4 DAT_00612560
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0
;   core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0
;   core_manpuz.cpp_FUN_00504ee0
;   core_manpuz.cpp_FUN_005062a0
;   core_xform.cpp_FUN_005b5080
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_FUN_005b6270
;   core_xform.cpp_matrixToEulerAngles_FUN_005b5930
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;   crt_memory.c___arrinit_FUN_005c0357
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503c90
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_00503c90
    PUSH ESI                            ; 00503c91
    PUSH EDI                            ; 00503c92
    PUSH EBP                            ; 00503c93
    MOV EBP,ESP                         ; 00503c94
    SUB ESP,0x1fc                       ; 00503c96
    SUB EBP,0x7e                        ; 00503c9c
    MOV EDX,dword ptr [EBP + 0x92]      ; 00503c9f
    PUSH EDX                            ; 00503ca5
    MOV EBX,dword ptr [EBP + 0x92]      ; 00503ca6
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 00503cac
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00503cb1
    ADD EBX,0x158                       ; 00503cb4
    PUSH EBX                            ; 00503cba
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 00503cbb
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503cc0
    ADD ESP,0x4                         ; 00503cc6
    ADD EAX,0x2d4                       ; 00503cc9
    PUSH EAX                            ; 00503cce
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 00503ccf
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503cd4
    ADD ESP,0x4                         ; 00503cda
    ADD EAX,0x450                       ; 00503cdd
    PUSH EAX                            ; 00503ce2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 00503ce3
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503ce8
    ADD ESP,0x4                         ; 00503cee
    ADD EAX,0x14c0                      ; 00503cf1
    PUSH EAX                            ; 00503cf6
    MOV ECX,dword ptr [0x00612560]      ; 00503cf7 | DAT_00612560
    PUSH ECX                            ; 00503cfd
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00503cfe
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00503d03
    PUSH EBX                            ; 00503d06
    LEA EDI,[EBP + -0x66]               ; 00503d07
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00503d0a
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    LEA ESI,[EAX + 0x338]               ; 00503d0f
    MOV ECX,0x6                         ; 00503d15
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503d1a
    MOVSD.REP ES:EDI,ESI                ; 00503d20
    MOV dword ptr [EAX + 0x150c],0x414239c1 ; 00503d22
    FLD float ptr [EAX + 0x150c]        ; 00503d2c
    FADD float ptr [EBP + -0x52]        ; 00503d32
    FLD float ptr [0x0060343c]          ; 00503d35 | DAT_0060343c
    FMUL double ptr [0x005e743d]        ; 00503d3b | DAT_005e743d
    FCOS                                ; 00503d41
    FDIVP                               ; 00503d43
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503d45
    FLD float ptr [EAX + 0x5e8]         ; 00503d4b
    FMUL ST0                            ; 00503d51
    FLD float ptr [EAX + 0x5e4]         ; 00503d53
    FMUL ST0                            ; 00503d59
    FADDP                               ; 00503d5b
    FLD float ptr [EAX + 0x5ec]         ; 00503d5d
    FMUL ST0                            ; 00503d63
    FLD float ptr [EBP + -0x56]         ; 00503d65
    FSUB float ptr [EBP + -0x62]        ; 00503d68
    FXCH                                ; 00503d6b
    FADDP ST2,ST0                       ; 00503d6d
    FSTP float ptr [EAX + 0x1510]       ; 00503d6f
    FXCH                                ; 00503d75
    FSTP float ptr [EAX + 0x1508]       ; 00503d77
    FSQRT                               ; 00503d7d
    ADD ESP,0x4                         ; 00503d7f
    FLDZ                                ; 00503d82
    FCOMPP                              ; 00503d84
    FNSTSW AX                           ; 00503d86
    SAHF                                ; 00503d88
    JZ 0x00504273                       ; 00503d89
        ;   XREF to: 00504273 (CONDITIONAL_JUMP)  ; LAB_00504273
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503d8f
        ;   Label: LAB_00503d8f
    FLD float ptr [EAX + 0x5d0]         ; 00503d95
    FMUL ST0                            ; 00503d9b
    FLD float ptr [EAX + 0x5cc]         ; 00503d9d
    FMUL ST0                            ; 00503da3
    FADDP                               ; 00503da5
    FLD float ptr [EAX + 0x5d4]         ; 00503da7
    FMUL ST0                            ; 00503dad
    FADDP                               ; 00503daf
    FSQRT                               ; 00503db1
    FLDZ                                ; 00503db3
    FCOMPP                              ; 00503db5
    FNSTSW AX                           ; 00503db7
    SAHF                                ; 00503db9
    JNZ 0x00503de0                      ; 00503dba
        ;   XREF to: 00503de0 (CONDITIONAL_JUMP)  ; LAB_00503de0
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503dbc
    MOV dword ptr [EAX + 0x5d0],0x40400000 ; 00503dc2
    MOV dword ptr [EAX + 0x5d4],0xbdcccccd ; 00503dcc
    MOV dword ptr [EAX + 0x5cc],0x0     ; 00503dd6
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503de0
        ;   Label: LAB_00503de0
    ADD EAX,0x5d8                       ; 00503de6
    PUSH EAX                            ; 00503deb
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503dec
    ADD EAX,0x5cc                       ; 00503df2
    PUSH EAX                            ; 00503df7
    LEA EAX,[EBP + 0xfffffee2]          ; 00503df8
    PUSH EAX                            ; 00503dfe
    CALL core_xform.cpp_FUN_005b5760    ; 00503dff
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503e04
    ADD ESP,0xc                         ; 00503e0a
    ADD EAX,0x2d4                       ; 00503e0d
    PUSH EAX                            ; 00503e12
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00503e13
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    LEA ESI,[EAX + 0x338]               ; 00503e18
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503e1e
    ADD EAX,0xaa0                       ; 00503e24
    MOV dword ptr [EBP + 0x56],EAX      ; 00503e29
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503e2c
    LEA EDI,[EBP + -0x4e]               ; 00503e32
    ADD EAX,0xac4                       ; 00503e35
    XOR EBX,EBX                         ; 00503e3a
    MOV dword ptr [EBP + 0x62],EAX      ; 00503e3c
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503e3f
    MOV dword ptr [EBP + 0x66],EBX      ; 00503e45
    ADD EAX,0xaa4                       ; 00503e48
    MOV ECX,0x6                         ; 00503e4d
    MOV dword ptr [EBP + 0x5e],EAX      ; 00503e52
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503e55
    ADD ESP,0x4                         ; 00503e5b
    ADD EAX,0xaa8                       ; 00503e5e
    MOVSD.REP ES:EDI,ESI                ; 00503e63
    MOV dword ptr [EBP + 0x5a],EAX      ; 00503e65
    MOV ESI,dword ptr [EBP + 0x66]      ; 00503e68
        ;   Label: LAB_00503e68
    PUSH ESI                            ; 00503e6b
    MOV EDI,dword ptr [EBP + 0x92]      ; 00503e6c
    PUSH EDI                            ; 00503e72
    CALL core_manpuz.cpp_FUN_00504ee0   ; 00503e73
        ;   XREF to: 00504ee0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_00504ee0()
    MOV EDI,ESI                         ; 00503e78
    IMUL EAX,ESI,0xb8                   ; 00503e7a
    MOV EBX,dword ptr [EBP + 0x56]      ; 00503e80
    ADD ESP,0x8                         ; 00503e83
    MOV ECX,dword ptr [EBP + 0x5a]      ; 00503e86
    ADD EBX,EAX                         ; 00503e89
    PUSH ECX                            ; 00503e8b
    MOV dword ptr [EBP + 0x6a],EBX      ; 00503e8c
    MOV EBX,dword ptr [EBP + 0x5e]      ; 00503e8f
    PUSH EBX                            ; 00503e92
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00503e93
    PUSH ESI                            ; 00503e96
    PUSH EDI                            ; 00503e97
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503e98
    PUSH EAX                            ; 00503e9e
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0 ; 00503e9f
        ;   XREF to: 005056f0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0(CMansionPuzzleCircle * this_ptr, int panel_index, float * out_r, float * out_g, ...)
    MOV EAX,ESI                         ; 00503ea4
    MOV dword ptr [ESI + 0x14],0x0      ; 00503ea6
    MOV EDX,dword ptr [EAX + 0x14]      ; 00503ead
    MOV dword ptr [ESI + 0x10],EDX      ; 00503eb0
    FLD float ptr [EAX + 0x10]          ; 00503eb3
    MOV dword ptr [ESI + 0x20],0x0      ; 00503eb6
    FSTP float ptr [ESI + 0xc]          ; 00503ebd
    MOV EDX,dword ptr [EAX + 0x20]      ; 00503ec0
    MOV dword ptr [ESI + 0x1c],EDX      ; 00503ec3
    FLD float ptr [EAX + 0x1c]          ; 00503ec6
    MOV EAX,EDI                         ; 00503ec9
    MOV dword ptr [EBP + 0x7a],EAX      ; 00503ecb
    FILD dword ptr [EBP + 0x7a]         ; 00503ece
    FMUL float ptr [0x0060343c]         ; 00503ed1 | DAT_0060343c
    MOV dword ptr [ESI + 0xac],0x0      ; 00503ed7
    ADD ESP,0x14                        ; 00503ee1
    MOV dword ptr [ESI + 0xb0],0x0      ; 00503ee4
    XOR EDX,EDX                         ; 00503eee
    FXCH                                ; 00503ef0
    FSTP float ptr [ESI + 0x18]         ; 00503ef2
    MOV dword ptr [ESI + 0xb4],0x0      ; 00503ef5
    LEA EAX,[EBP + -0x6]                ; 00503eff
    MOV dword ptr [EBP + -0x6],EDX      ; 00503f02
    PUSH EAX                            ; 00503f05
    LEA EAX,[EBP + 0xffffff72]          ; 00503f06
    MOV dword ptr [EBP + 0x2],EDX       ; 00503f0c
    PUSH EAX                            ; 00503f0f
    FSTP float ptr [EBP + -0x2]         ; 00503f10
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 00503f13
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00503f18
    LEA EAX,[EBP + -0x6]                ; 00503f1b
    PUSH EAX                            ; 00503f1e
    MOV EAX,dword ptr [EBP + 0x92]      ; 00503f1f
    MOV EAX,dword ptr [EAX + 0x150c]    ; 00503f25
    MOV dword ptr [EBP + -0x16],EAX     ; 00503f2b
    LEA EAX,[EBP + -0x1e]               ; 00503f2e
    XOR EBX,EBX                         ; 00503f31
    PUSH EAX                            ; 00503f33
    LEA EAX,[EBP + 0xffffff72]          ; 00503f34
    LEA ESI,[EBP + 0x36]                ; 00503f3a
    PUSH EAX                            ; 00503f3d
    MOV dword ptr [EBP + -0x1e],EBX     ; 00503f3e
    MOV dword ptr [EBP + -0x1a],EBX     ; 00503f41
    CALL core_dirmat.cpp_FUN_0045f690   ; 00503f44
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    ADD ESP,0x8                         ; 00503f49
    LEA EAX,[EBP + 0x2a]                ; 00503f4c
    LEA EDI,[EBP + 0x2a]                ; 00503f4f
    PUSH EAX                            ; 00503f52
    LEA EAX,[EBP + 0xfffffe82]          ; 00503f53
    LEA ESI,[EBP + 0x36]                ; 00503f59
    PUSH EAX                            ; 00503f5c
    MOVSD ES:EDI,ESI                    ; 00503f5d
    MOVSD ES:EDI,ESI                    ; 00503f5e
    MOVSD ES:EDI,ESI                    ; 00503f5f
    CALL core_xform.cpp_FUN_005b5760    ; 00503f60
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00503f65
    LEA EAX,[EBP + 0xfffffe82]          ; 00503f68
    PUSH EAX                            ; 00503f6e
    LEA EAX,[EBP + 0xfffffee2]          ; 00503f6f
    PUSH EAX                            ; 00503f75
    LEA ESI,[EBP + 0xffffff12]          ; 00503f76
    LEA EDI,[EBP + 0xfffffeb2]          ; 00503f7c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00503f82
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00503f87
    LEA ESI,[EBP + 0xffffff12]          ; 00503f8c
    LEA EAX,[EBP + 0xfffffeb2]          ; 00503f92
    ADD ESP,0x8                         ; 00503f98
    MOVSD.REP ES:EDI,ESI                ; 00503f9b
    PUSH EAX                            ; 00503f9d
    LEA ESI,[EBP + 0x1e]                ; 00503f9e
    LEA EDI,[EBP + 0x6]                 ; 00503fa1
    CALL core_xform.cpp_FUN_005b6270    ; 00503fa4
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    LEA ESI,[EBP + 0x1e]                ; 00503fa9
    MOVSD ES:EDI,ESI                    ; 00503fac
    MOVSD ES:EDI,ESI                    ; 00503fad
    MOVSD ES:EDI,ESI                    ; 00503fae
    LEA EAX,[EBP + 0x6]                 ; 00503faf
    MOV EDI,dword ptr [EBP + 0x62]      ; 00503fb2
    ADD ESP,0x4                         ; 00503fb5
    CMP EAX,EDI                         ; 00503fb8
    JZ 0x00503fcd                       ; 00503fba
        ;   XREF to: 00503fcd (CONDITIONAL_JUMP)  ; LAB_00503fcd
    MOV EAX,dword ptr [EBP + 0x6]       ; 00503fbc
    MOV dword ptr [EDI],EAX             ; 00503fbf
    MOV EAX,dword ptr [EBP + 0xa]       ; 00503fc1
    MOV dword ptr [EDI + 0x4],EAX       ; 00503fc4
    MOV EAX,dword ptr [EBP + 0xe]       ; 00503fc7
    MOV dword ptr [EDI + 0x8],EAX       ; 00503fca
    LEA EAX,[EBP + 0xfffffeb2]          ; 00503fcd
        ;   Label: LAB_00503fcd
    LEA ESI,[EBP + 0x12]                ; 00503fd3
    PUSH EAX                            ; 00503fd6
    LEA EDI,[EBP + 0x42]                ; 00503fd7
    MOV EBX,dword ptr [EBP + 0x6a]      ; 00503fda
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 00503fdd
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    ADD EBX,0x30                        ; 00503fe2
    LEA ESI,[EBP + 0x12]                ; 00503fe5
    LEA EAX,[EBP + 0x42]                ; 00503fe8
    ADD ESP,0x4                         ; 00503feb
    MOVSD ES:EDI,ESI                    ; 00503fee
    MOVSD ES:EDI,ESI                    ; 00503fef
    MOVSD ES:EDI,ESI                    ; 00503ff0
    CMP EBX,EAX                         ; 00503ff1
    JNZ 0x005042a4                      ; 00503ff3
        ;   XREF to: 005042a4 (CONDITIONAL_JUMP)  ; LAB_005042a4
    PUSH 0x5fb430                       ; 00503ff9
        ;   Label: LAB_00503ff9
    PUSH 0x4                            ; 00503ffe
    LEA EAX,[EBP + 0xffffff42]          ; 00504000
    PUSH EAX                            ; 00504006
    LEA EBX,[EBP + 0xffffff42]          ; 00504007
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0050400d
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    XOR EAX,EAX                         ; 00504012
    ADD ESP,0xc                         ; 00504014
    MOV dword ptr [EBP + 0x76],EAX      ; 00504017
    XOR EDX,EDX                         ; 0050401a
        ;   Label: LAB_0050401a
    MOV AH,byte ptr [EBP + 0x76]        ; 0050401c
    MOV dword ptr [EBP + -0x32],EDX     ; 0050401f
    TEST AH,0x1                         ; 00504022
    JZ 0x005042ba                       ; 00504025
        ;   XREF to: 005042ba (CONDITIONAL_JUMP)  ; LAB_005042ba
    MOV EAX,dword ptr [EBP + -0x42]     ; 0050402b
    MOV dword ptr [EBP + 0x6e],EAX      ; 0050402e
        ;   Label: LAB_0050402e
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00504031
    MOV DL,byte ptr [EBP + 0x76]        ; 00504034
    MOV dword ptr [EBP + -0x36],EAX     ; 00504037
    TEST DL,0x2                         ; 0050403a
    JZ 0x005042c2                       ; 0050403d
        ;   XREF to: 005042c2 (CONDITIONAL_JUMP)  ; LAB_005042c2
    MOV EAX,dword ptr [EBP + -0x3a]     ; 00504043
    MOV dword ptr [EBP + 0x72],EAX      ; 00504046
        ;   Label: LAB_00504046
    MOV EAX,dword ptr [EBP + 0x72]      ; 00504049
    MOV dword ptr [EBP + -0x2e],EAX     ; 0050404c
    LEA EAX,[EBP + 0xfffffeb2]          ; 0050404f
    PUSH EAX                            ; 00504055
    LEA EAX,[EBP + -0x36]               ; 00504056
    PUSH EAX                            ; 00504059
    LEA ESI,[EBP + -0x2a]               ; 0050405a
    LEA EDI,[EBP + -0x12]               ; 0050405d
    CALL core_xform.cpp_FUN_005b5080    ; 00504060
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[EBP + -0x2a]               ; 00504065
    LEA EAX,[EBP + -0x12]               ; 00504068
    ADD ESP,0x8                         ; 0050406b
    MOVSD ES:EDI,ESI                    ; 0050406e
    MOVSD ES:EDI,ESI                    ; 0050406f
    MOVSD ES:EDI,ESI                    ; 00504070
    CMP EBX,EAX                         ; 00504071
    JZ 0x00504086                       ; 00504073
        ;   XREF to: 00504086 (CONDITIONAL_JUMP)  ; LAB_00504086
    MOV EAX,dword ptr [EBP + -0x12]     ; 00504075
    MOV dword ptr [EBX],EAX             ; 00504078
    MOV EAX,dword ptr [EBP + -0xe]      ; 0050407a
    MOV dword ptr [EBX + 0x4],EAX       ; 0050407d
    MOV EAX,dword ptr [EBP + -0xa]      ; 00504080
    MOV dword ptr [EBX + 0x8],EAX       ; 00504083
    MOV ECX,dword ptr [EBP + 0x76]      ; 00504086
        ;   Label: LAB_00504086
    INC ECX                             ; 00504089
    ADD EBX,0xc                         ; 0050408a
    MOV dword ptr [EBP + 0x76],ECX      ; 0050408d
    CMP ECX,0x4                         ; 00504090
    JL 0x0050401a                       ; 00504093
        ;   XREF to: 0050401a (CONDITIONAL_JUMP)  ; LAB_0050401a
    LEA EAX,[EBP + 0xffffff42]          ; 00504095
    PUSH EAX                            ; 0050409b
    LEA EAX,[EBP + 0xffffff4e]          ; 0050409c
    PUSH EAX                            ; 005040a2
    LEA EAX,[EBP + 0xffffff5a]          ; 005040a3
    PUSH EAX                            ; 005040a9
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005040aa
    ADD EAX,0x3c                        ; 005040ad
    PUSH EAX                            ; 005040b0
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 005040b1
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005040b6
    LEA EAX,[EBP + 0xffffff4e]          ; 005040b9
    PUSH EAX                            ; 005040bf
    LEA EAX,[EBP + 0xffffff66]          ; 005040c0
    PUSH EAX                            ; 005040c6
    LEA EAX,[EBP + 0xffffff5a]          ; 005040c7
    PUSH EAX                            ; 005040cd
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005040ce
    MOV EDI,dword ptr [EBP + 0x62]      ; 005040d1
    ADD EAX,0x74                        ; 005040d4
    ADD EDI,0xb8                        ; 005040d7
    PUSH EAX                            ; 005040dd
    MOV dword ptr [EBP + 0x62],EDI      ; 005040de
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 005040e1
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    MOV EAX,dword ptr [EBP + 0x5e]      ; 005040e6
    MOV EDX,dword ptr [EBP + 0x5a]      ; 005040e9
    MOV ECX,dword ptr [EBP + 0x66]      ; 005040ec
    ADD ESP,0x10                        ; 005040ef
    ADD EAX,0xb8                        ; 005040f2
    ADD EDX,0xb8                        ; 005040f7
    INC ECX                             ; 005040fd
    MOV dword ptr [EBP + 0x5e],EAX      ; 005040fe
    MOV dword ptr [EBP + 0x5a],EDX      ; 00504101
    MOV dword ptr [EBP + 0x66],ECX      ; 00504104
    CMP ECX,0xc                         ; 00504107
    JL 0x00503e68                       ; 0050410a
        ;   XREF to: 00503e68 (CONDITIONAL_JUMP)  ; LAB_00503e68
    MOV EAX,dword ptr [EBP + 0x92]      ; 00504110
    FLD float ptr [EAX + 0x150c]        ; 00504116
    FLD float ptr [0x0060343c]          ; 0050411c | DAT_0060343c
    FLD ST0                             ; 00504122
    FCOS                                ; 00504124
    FXCH                                ; 00504126
    FSIN                                ; 00504128
    MOV EAX,dword ptr [EBP + 0x92]      ; 0050412a
    FXCH                                ; 00504130
    FMULP ST2                           ; 00504132
    FLD float ptr [EAX + 0x5d0]         ; 00504134
    FMUL double ptr [0x005e744d]        ; 0050413a | DAT_005e744d
    FXCH ST2                            ; 00504140
    FLD double ptr [0x005e743d]         ; 00504142 | DAT_005e743d
    FXCH                                ; 00504148
    FMUL ST1                            ; 0050414a
    FLD float ptr [EAX + 0x150c]        ; 0050414c
    LEA EBX,[EAX + 0x1340]              ; 00504152
    FMULP ST3                           ; 00504158
    ADD EAX,0x134c                      ; 0050415a
    FXCH ST2                            ; 0050415f
    FMULP                               ; 00504161
    FLD float ptr [EAX + 0xfffff29c]    ; 00504163
    FMUL double ptr [0x005e7455]        ; 00504169 | DAT_005e7455
    FXCH ST2                            ; 0050416f
    FSTP float ptr [EAX + 0x8]          ; 00504171
    FXCH                                ; 00504174
    FADDP ST2,ST0                       ; 00504176
    FSTP float ptr [EAX]                ; 00504178
    FSTP float ptr [EAX + 0x4]          ; 0050417a
    CMP EBX,EAX                         ; 0050417d
    JNZ 0x005042ca                      ; 0050417f
        ;   XREF to: 005042ca (CONDITIONAL_JUMP)  ; LAB_005042ca
    MOV EAX,dword ptr [EBP + 0x92]      ; 00504185
        ;   Label: LAB_00504185
    ADD EAX,0x1368                      ; 0050418b
    MOV dword ptr [EAX],0xbda4de71      ; 00504190
    MOV dword ptr [EAX + 0x8],0x0       ; 00504196
    FLD float ptr [EAX + -0x24]         ; 0050419d
    MOV dword ptr [EAX + 0x4],0xbfc529dc ; 005041a0
    FADD float ptr [0x005e745d]         ; 005041a7 | DAT_005e745d
    PUSH EAX                            ; 005041ad
    FSTP float ptr [EAX + -0x24]        ; 005041ae
    MOV EAX,dword ptr [EBP + 0x92]      ; 005041b1
    ADD EAX,0x1374                      ; 005041b7
    PUSH EAX                            ; 005041bc
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 005041bd
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBP + 0x92]      ; 005041c2
    ADD ESP,0x8                         ; 005041c8
    FLD float ptr [EAX + 0x1344]        ; 005041cb
    FLD float ptr [EAX + 0x1340]        ; 005041d1
    FLD float ptr [EAX + 0x1348]        ; 005041d7
    FLD float ptr [EAX + 0x1350]        ; 005041dd
    FLD float ptr [EAX + 0x134c]        ; 005041e3
    FLD float ptr [EAX + 0x1354]        ; 005041e9
    FLD float ptr [EAX + 0x1368]        ; 005041ef
    FXCH ST6                            ; 005041f5
    FSTP float ptr [EAX + 0x13a4]       ; 005041f7
    FLD float ptr [EAX + 0x1370]        ; 005041fd
    FXCH ST5                            ; 00504203
    FCHS                                ; 00504205
    FXCH ST4                            ; 00504207
    FSTP float ptr [EAX + 0x13a8]       ; 00504209
    FLD float ptr [EAX + 0x136c]        ; 0050420f
    FXCH ST2                            ; 00504215
    FCHS                                ; 00504217
    ADD EAX,0x13c8                      ; 00504219
    FXCH ST2                            ; 0050421e
    FCHS                                ; 00504220
    FXCH ST3                            ; 00504222
    FSTP float ptr [EAX + -0x18]        ; 00504224
    FSTP float ptr [EAX + -0x14]        ; 00504227
    FXCH ST4                            ; 0050422a
    FSTP float ptr [EAX]                ; 0050422c
    FXCH ST2                            ; 0050422e
    FSTP float ptr [EAX + 0x8]          ; 00504230
    FSTP float ptr [EAX + -0x28]        ; 00504233
    FXCH                                ; 00504236
    FSTP float ptr [EAX + -0x1c]        ; 00504238
    FSTP float ptr [EAX + 0x4]          ; 0050423b
    PUSH EAX                            ; 0050423e
    MOV EAX,dword ptr [EBP + 0x92]      ; 0050423f
    ADD EAX,0x13d4                      ; 00504245
    PUSH EAX                            ; 0050424a
    MOV ESI,dword ptr [EBP + 0x92]      ; 0050424b
    XOR EBX,EBX                         ; 00504251
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 00504253
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00504258
    PUSH EBX                            ; 0050425b
        ;   Label: LAB_0050425b
    PUSH ESI                            ; 0050425c
    CALL core_manpuz.cpp_FUN_005062a0   ; 0050425d
        ;   XREF to: 005062a0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_005062a0()
    INC EBX                             ; 00504262
    ADD ESP,0x8                         ; 00504263
    CMP EBX,0x2                         ; 00504266
    JL 0x0050425b                       ; 00504269
        ;   XREF to: 0050425b (CONDITIONAL_JUMP)  ; LAB_0050425b
    LEA ESP,[EBP + 0x7e]                ; 0050426b
    POP EBP                             ; 0050426e
    POP EDI                             ; 0050426f
    POP ESI                             ; 00504270
    POP EBX                             ; 00504271
    RET                                 ; 00504272
    MOV EAX,dword ptr [EBP + 0x92]      ; 00504273
        ;   Label: LAB_00504273
    FLD float ptr [EAX + 0x1510]        ; 00504279
    MOV dword ptr [EAX + 0x5e4],0x0     ; 0050427f
    FADD double ptr [0x005e7445]        ; 00504289 | DAT_005e7445
    MOV dword ptr [EAX + 0x5ec],0xbf8ccccd ; 0050428f
    FSTP float ptr [EAX + 0x5e8]        ; 00504299
    JMP 0x00503d8f                      ; 0050429f
        ;   XREF to: 00503d8f (UNCONDITIONAL_JUMP)  ; LAB_00503d8f
    MOV EAX,dword ptr [EBP + 0x42]      ; 005042a4
        ;   Label: LAB_005042a4
    MOV dword ptr [EBX],EAX             ; 005042a7
    MOV EAX,dword ptr [EBP + 0x46]      ; 005042a9
    MOV dword ptr [EBX + 0x4],EAX       ; 005042ac
    MOV EAX,dword ptr [EBP + 0x4a]      ; 005042af
    MOV dword ptr [EBX + 0x8],EAX       ; 005042b2
    JMP 0x00503ff9                      ; 005042b5
        ;   XREF to: 00503ff9 (UNCONDITIONAL_JUMP)  ; LAB_00503ff9
    MOV EAX,dword ptr [EBP + -0x4e]     ; 005042ba
        ;   Label: LAB_005042ba
    JMP 0x0050402e                      ; 005042bd
        ;   XREF to: 0050402e (UNCONDITIONAL_JUMP)  ; LAB_0050402e
    MOV EAX,dword ptr [EBP + -0x46]     ; 005042c2
        ;   Label: LAB_005042c2
    JMP 0x00504046                      ; 005042c5
        ;   XREF to: 00504046 (UNCONDITIONAL_JUMP)  ; LAB_00504046
    MOV EDX,dword ptr [EAX]             ; 005042ca
        ;   Label: LAB_005042ca
    MOV dword ptr [EBX],EDX             ; 005042cc
    MOV EDX,dword ptr [EAX + 0x4]       ; 005042ce
    MOV dword ptr [EBX + 0x4],EDX       ; 005042d1
    MOV EDX,dword ptr [EAX + 0x8]       ; 005042d4
    MOV dword ptr [EBX + 0x8],EDX       ; 005042d7
    JMP 0x00504185                      ; 005042da
        ;   XREF to: 00504185 (UNCONDITIONAL_JUMP)  ; LAB_00504185

