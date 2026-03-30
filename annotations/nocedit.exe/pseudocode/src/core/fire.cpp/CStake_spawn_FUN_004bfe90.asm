; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_spawn_FUN_004bfe90(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles,CVector3f *surface_normal)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   spawn_position
; CVector3f *      Stack[0xc]:4   orientation_angles
; CVector3f *      Stack[0x10]:4   surface_normal
; Local Variables:
; CMatrix3x3f      Stack[-0xb4]:36  local_b4
; float            Stack[-0x8c]:4  local_8c
; float            Stack[-0x88]:4  local_88
; float            Stack[-0x84]:4  local_84
; float            Stack[-0x80]:4  local_80
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; CVector3f        Stack[-0x74]:12  local_74
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; CVector3f        Stack[-0x5c]:12  local_5c
; CVector3f        Stack[-0x50]:12  local_50
; CVector3f        Stack[-0x44]:12  local_44
; CVector3f        Stack[-0x38]:12  local_38
; CVector3f        Stack[-0x2c]:12  local_2c
; CVector3f        Stack[-0x20]:12  local_20
; float            Stack[-0x14]:4  local_14
; float            Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0 at 004c7c56
;
; Referenced Globals:
;   float FLOAT_00629c5f = 2
;   CKeyFramedModelInstance g_FireEffectFlamingStakeModel
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_box.cpp_CBox_setupCorners_FUN_0041dd20
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfe90
        ;   Label: core_fire.cpp_CStake_spawn_FUN_004bfe90
    PUSH EDI                            ; 004bfe91
    PUSH EBP                            ; 004bfe92
    SUB ESP,0xa8                        ; 004bfe93
    MOV EBX,dword ptr [ESP + 0xc4]      ; 004bfe99
    MOV EDX,dword ptr [ESP + 0xc0]      ; 004bfea0
    PUSH EDX                            ; 004bfea7
    LEA EAX,[ESP + 0x4]                 ; 004bfea8
    PUSH EAX                            ; 004bfeac
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 004bfead
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004bfeb2
    LEA EAX,[ESP + 0x7c]                ; 004bfeb5
    MOV EDI,0x41200000                  ; 004bfeb9
    PUSH EAX                            ; 004bfebe
    LEA EAX,[ESP + 0x74]                ; 004bfebf
    XOR ECX,ECX                         ; 004bfec3
    PUSH EAX                            ; 004bfec5
    LEA EAX,[ESP + 0x8]                 ; 004bfec6
    MOV dword ptr [ESP + 0x84],ECX      ; 004bfeca
    PUSH EAX                            ; 004bfed1
    MOV dword ptr [ESP + 0x8c],ECX      ; 004bfed2
    MOV dword ptr [ESP + 0x90],EDI      ; 004bfed9
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004bfee0
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004bfee5
    FLD float ptr [EBX + 0x4]           ; 004bfee8
    FMUL float ptr [ESP + 0x74]         ; 004bfeeb
    FLD float ptr [EBX]                 ; 004bfeef
    FMUL float ptr [ESP + 0x70]         ; 004bfef1
    FADDP                               ; 004bfef5
    FLD float ptr [EBX + 0x8]           ; 004bfef7
    FMUL float ptr [ESP + 0x78]         ; 004bfefa
    FADDP                               ; 004bfefe
    FMUL float ptr [0x00629c5f]         ; 004bff00 | FLOAT_00629c5f
    FLD float ptr [EBX]                 ; 004bff06
    FXCH                                ; 004bff08
    FSTP float ptr [ESP + 0xa0]         ; 004bff0a
    FMUL float ptr [ESP + 0xa0]         ; 004bff11
    FSTP float ptr [ESP + 0x4c]         ; 004bff18
    FLD float ptr [EBX + 0x4]           ; 004bff1c
    FMUL float ptr [ESP + 0xa0]         ; 004bff1f
    FSTP float ptr [ESP + 0x50]         ; 004bff26
    FLD float ptr [EBX + 0x8]           ; 004bff2a
    FMUL float ptr [ESP + 0xa0]         ; 004bff2d
    LEA EAX,[ESP + 0x94]                ; 004bff34
    LEA EDX,[ESP + 0x70]                ; 004bff3b
    FLD float ptr [ESP + 0x4c]          ; 004bff3f
    FSUB float ptr [ESP + 0x70]         ; 004bff43
    FLD float ptr [ESP + 0x50]          ; 004bff47
    FXCH                                ; 004bff4b
    FSTP float ptr [ESP + 0x94]         ; 004bff4d
    FSUB float ptr [ESP + 0x74]         ; 004bff54
    FXCH                                ; 004bff58
    FST float ptr [ESP + 0x54]          ; 004bff5a
    FSUB float ptr [ESP + 0x78]         ; 004bff5e
    FXCH                                ; 004bff62
    FSTP float ptr [ESP + 0x98]         ; 004bff64
    FSTP float ptr [ESP + 0x9c]         ; 004bff6b
    CMP EDX,EAX                         ; 004bff72
    JNZ 0x004c0111                      ; 004bff74
        ;   XREF to: 004c0111 (CONDITIONAL_JUMP)  ; LAB_004c0111
    FLD float ptr [ESP + 0x70]          ; 004bff7a
        ;   Label: LAB_004bff7a
    FLD float ptr [ESP + 0x74]          ; 004bff7e
    FLD float ptr [ESP + 0x78]          ; 004bff82
    LEA EAX,[ESP + 0x64]                ; 004bff86
    LEA EDX,[ESP + 0x70]                ; 004bff8a
    FXCH ST2                            ; 004bff8e
    FCHS                                ; 004bff90
    FXCH                                ; 004bff92
    FCHS                                ; 004bff94
    FXCH ST2                            ; 004bff96
    FCHS                                ; 004bff98
    FXCH ST2                            ; 004bff9a
    FSTP float ptr [ESP + 0x68]         ; 004bff9c
    FXCH                                ; 004bffa0
    FSTP float ptr [ESP + 0x6c]         ; 004bffa2
    FSTP float ptr [ESP + 0x64]         ; 004bffa6
    CMP EDX,EAX                         ; 004bffaa
    JZ 0x004bffc6                       ; 004bffac
        ;   XREF to: 004bffc6 (CONDITIONAL_JUMP)  ; LAB_004bffc6
    MOV EAX,dword ptr [ESP + 0x64]      ; 004bffae
    MOV dword ptr [ESP + 0x70],EAX      ; 004bffb2
    MOV EAX,dword ptr [ESP + 0x68]      ; 004bffb6
    MOV dword ptr [ESP + 0x74],EAX      ; 004bffba
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004bffbe
    MOV dword ptr [ESP + 0x78],EAX      ; 004bffc2
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004bffc6
        ;   Label: LAB_004bffc6
    PUSH 0x2d12df4                      ; 004bffcd | g_FireEffectFlamingStakeModel
    MOV dword ptr [EAX],0x0             ; 004bffd2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004bffd8
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    LEA EDX,[EAX + 0x5678]              ; 004bffdd
    ADD ESP,0x4                         ; 004bffe3
    MOV EAX,dword ptr [EDX]             ; 004bffe6
    MOV dword ptr [ESP + 0x28],EAX      ; 004bffe8
    LEA EAX,[EDX + 0x4]                 ; 004bffec
    MOV EAX,dword ptr [EAX]             ; 004bffef
    MOV dword ptr [ESP + 0x2c],EAX      ; 004bfff1
    LEA EAX,[EDX + 0x8]                 ; 004bfff5
    MOV EAX,dword ptr [EAX]             ; 004bfff8
    MOV dword ptr [ESP + 0x30],EAX      ; 004bfffa
    MOV EAX,dword ptr [EDX + 0xc]       ; 004bfffe
    ADD EDX,0xc                         ; 004c0001
    MOV dword ptr [ESP + 0x34],EAX      ; 004c0004
    LEA EAX,[EDX + 0x4]                 ; 004c0008
    FLD float ptr [ESP + 0x34]          ; 004c000b
    MOV EAX,dword ptr [EAX]             ; 004c000f
    FSUB float ptr [ESP + 0x28]         ; 004c0011
    MOV dword ptr [ESP + 0x38],EAX      ; 004c0015
    LEA EAX,[EDX + 0x8]                 ; 004c0019
    FLD float ptr [ESP + 0x38]          ; 004c001c
    LEA EDX,[ESP + 0x40]                ; 004c0020
    FSUB float ptr [ESP + 0x2c]         ; 004c0024
    MOV EAX,dword ptr [EAX]             ; 004c0028
    FXCH                                ; 004c002a
    FSTP float ptr [ESP + 0x88]         ; 004c002c
    MOV dword ptr [ESP + 0x3c],EAX      ; 004c0033
    FSTP float ptr [ESP + 0x8c]         ; 004c0037
    FLD float ptr [ESP + 0x3c]          ; 004c003e
    FSUB float ptr [ESP + 0x30]         ; 004c0042
    LEA EAX,[ESP + 0x88]                ; 004c0046
    FSTP float ptr [ESP + 0x90]         ; 004c004d
    CMP EDX,EAX                         ; 004c0054
    JZ 0x004c0079                       ; 004c0056
        ;   XREF to: 004c0079 (CONDITIONAL_JUMP)  ; LAB_004c0079
    MOV EAX,dword ptr [ESP + 0x88]      ; 004c0058
    MOV dword ptr [ESP + 0x40],EAX      ; 004c005f
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004c0063
    MOV dword ptr [ESP + 0x44],EAX      ; 004c006a
    MOV EAX,dword ptr [ESP + 0x90]      ; 004c006e
    MOV dword ptr [ESP + 0x48],EAX      ; 004c0075
    LEA EAX,[ESP + 0x40]                ; 004c0079
        ;   Label: LAB_004c0079
    PUSH 0x40000000                     ; 004c007d
    PUSH EAX                            ; 004c0082
    MOV EBP,dword ptr [ESP + 0xc8]      ; 004c0083
    PUSH EBP                            ; 004c008a
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004c008b
    MOV EBX,dword ptr [ESP + 0xc4]      ; 004c0092
    PUSH EAX                            ; 004c0099
    ADD EBX,0x4                         ; 004c009a
    PUSH EBX                            ; 004c009d
    CALL core_box.cpp_CBox_setupCorners_FUN_0041dd20 ; 004c009e
        ;   XREF to: 0041dd20 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041dd20(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 004c00a3
    PUSH 0x4116cbe4                     ; 004c00a6
    PUSH 0xc116cbe4                     ; 004c00ab
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c00b0
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV EAX,dword ptr [ESP + 0x94]      ; 004c0111
        ;   Label: LAB_004c0111
    MOV dword ptr [ESP + 0x70],EAX      ; 004c0118
    MOV EAX,dword ptr [ESP + 0x98]      ; 004c011c
    MOV dword ptr [ESP + 0x74],EAX      ; 004c0123
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004c0127
    MOV dword ptr [ESP + 0x78],EAX      ; 004c012e
    JMP 0x004bff7a                      ; 004c0132
        ;   XREF to: 004bff7a (UNCONDITIONAL_JUMP)  ; LAB_004bff7a

