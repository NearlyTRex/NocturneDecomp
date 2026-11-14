; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletTrail_render_FUN_0049ad20(CBulletTrail *this_ptr)
;
; Parameters:
; CBulletTrail *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004a1ad0 at 004a1d68
;
; Referenced Globals:
;   undefined4 DAT_005c05d8
;   undefined4 DAT_005c05e0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ad20
        ;   Label: core_fire.cpp_CBulletTrail_render_FUN_0049ad20
    PUSH ESI                            ; 0049ad21
    PUSH EDI                            ; 0049ad22
    PUSH EBP                            ; 0049ad23
    MOV EBP,ESP                         ; 0049ad24
    SUB ESP,0xc4                        ; 0049ad26
    AND ESP,0xfffffff8                  ; 0049ad2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049ad2f
    LEA EAX,[EBX + 0xc]                 ; 0049ad32
    LEA EDI,[ESP + 0x20]                ; 0049ad35
    LEA ESI,[ESP + 0x50]                ; 0049ad39
    FLD float ptr [EAX]                 ; 0049ad3d
    FLD float ptr [EAX + 0x4]           ; 0049ad3f
    FLD float ptr [EAX + 0x8]           ; 0049ad42
    FXCH ST2                            ; 0049ad45
    FSUB float ptr [EBX]                ; 0049ad47
    FXCH                                ; 0049ad49
    FSUB float ptr [EBX + 0x4]          ; 0049ad4b
    FXCH ST2                            ; 0049ad4e
    FSUB float ptr [EBX + 0x8]          ; 0049ad50
    FXCH                                ; 0049ad53
    FSTP float ptr [ESP + 0x50]         ; 0049ad55
    FXCH                                ; 0049ad59
    FSTP float ptr [ESP + 0x54]         ; 0049ad5b
    FSTP float ptr [ESP + 0x58]         ; 0049ad5f
    MOVSD ES:EDI,ESI                    ; 0049ad63
    MOVSD ES:EDI,ESI                    ; 0049ad64
    MOVSD ES:EDI,ESI                    ; 0049ad65
    FLD float ptr [ESP + 0x24]          ; 0049ad66
    FMUL ST0                            ; 0049ad6a
    FLD float ptr [ESP + 0x20]          ; 0049ad6c
    FMUL ST0                            ; 0049ad70
    FADDP                               ; 0049ad72
    FLD float ptr [ESP + 0x28]          ; 0049ad74
    FMUL ST0                            ; 0049ad78
    FADDP                               ; 0049ad7a
    FSQRT                               ; 0049ad7c
    MOV EAX,dword ptr [EBX + 0x18]      ; 0049ad7e
    LEA EDI,[ESP + 0x38]                ; 0049ad81
    LEA ESI,[ESP + 0x68]                ; 0049ad85
    FLD float ptr [EAX + 0x344]         ; 0049ad89
    FLD float ptr [EAX + 0x348]         ; 0049ad8f
    LEA EDX,[EAX + 0x338]               ; 0049ad95
    FLD float ptr [EAX + 0x34c]         ; 0049ad9b
    FXCH ST2                            ; 0049ada1
    FSUB float ptr [EDX]                ; 0049ada3
    FXCH                                ; 0049ada5
    FSUB float ptr [EDX + 0x4]          ; 0049ada7
    FXCH ST2                            ; 0049adaa
    FSUB float ptr [EDX + 0x8]          ; 0049adac
    FXCH                                ; 0049adaf
    FSTP float ptr [ESP + 0x68]         ; 0049adb1
    FXCH                                ; 0049adb5
    FSTP float ptr [ESP + 0x6c]         ; 0049adb7
    FSTP float ptr [ESP + 0x70]         ; 0049adbb
    MOVSD ES:EDI,ESI                    ; 0049adbf
    MOVSD ES:EDI,ESI                    ; 0049adc0
    MOVSD ES:EDI,ESI                    ; 0049adc1
    FSUB float ptr [ESP + 0x40]         ; 0049adc2
    FST float ptr [ESP]                 ; 0049adc6
    FLDZ                                ; 0049adc9
    FCOMPP                              ; 0049adcb
    FNSTSW AX                           ; 0049adcd
    SAHF                                ; 0049adcf
    JNC 0x0049af09                      ; 0049add0
        ;   XREF to: 0049af09 (CONDITIONAL_JUMP)  ; LAB_0049af09
    FLD float ptr [EBX + 0x1c]          ; 0049add6
    MOV EDX,0x2                         ; 0049add9
    FLDZ                                ; 0049adde
    MOV dword ptr [ESP + 0xb0],EDX      ; 0049ade0
    FCOMPP                              ; 0049ade7
    FNSTSW AX                           ; 0049ade9
    SAHF                                ; 0049adeb
    JNC 0x0049ae16                      ; 0049adec
        ;   XREF to: 0049ae16 (CONDITIONAL_JUMP)  ; LAB_0049ae16
    FLD float ptr [ESP]                 ; 0049adee
    FDIV float ptr [EBX + 0x1c]         ; 0049adf1
    CALL crt_math.c_round_FUN_005a3120  ; 0049adf4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0xb0]        ; 0049adf9
    MOV ECX,dword ptr [ESP + 0xb0]      ; 0049ae00
    CMP ECX,EDX                         ; 0049ae07
    JGE 0x0049af10                      ; 0049ae09
        ;   XREF to: 0049af10 (CONDITIONAL_JUMP)  ; LAB_0049af10
    MOV dword ptr [ESP + 0xb0],EDX      ; 0049ae0f
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0049ae16
        ;   Label: LAB_0049ae16
    FLD1                                ; 0049ae1d
    MOV dword ptr [ESP + 0xc0],EAX      ; 0049ae1f
    FLD float ptr [ESP + 0x20]          ; 0049ae26
    FILD dword ptr [ESP + 0xc0]         ; 0049ae2a
    FSTP float ptr [ESP + 0xb4]         ; 0049ae31
    FXCH                                ; 0049ae38
    FDIV float ptr [ESP + 0xb4]         ; 0049ae3a
    FXCH                                ; 0049ae41
    FMUL ST1                            ; 0049ae43
    FLD float ptr [ESP + 0x24]          ; 0049ae45
    FMUL ST2                            ; 0049ae49
    FLD float ptr [ESP + 0x28]          ; 0049ae4b
    FMULP ST3                           ; 0049ae4f
    LEA EDI,[ESP + 0x80]                ; 0049ae51
    LEA ESI,[ESP + 0x2c]                ; 0049ae58
    LEA EAX,[ESP + 0x20]                ; 0049ae5c
    FXCH                                ; 0049ae60
    FSTP float ptr [ESP + 0x2c]         ; 0049ae62
    FSTP float ptr [ESP + 0x30]         ; 0049ae66
    FSTP float ptr [ESP + 0x34]         ; 0049ae6a
    MOVSD ES:EDI,ESI                    ; 0049ae6e
    MOVSD ES:EDI,ESI                    ; 0049ae6f
    MOVSD ES:EDI,ESI                    ; 0049ae70
    PUSH EAX                            ; 0049ae71
    LEA ESI,[ESP + 0x18]                ; 0049ae72
    LEA EDI,[ESP + 0x48]                ; 0049ae76
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0049ae7a
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0x18]                ; 0049ae7f
    ADD ESP,0x4                         ; 0049ae83
    XOR EDX,EDX                         ; 0049ae86
    MOV ECX,dword ptr [ESP + 0xb0]      ; 0049ae88
    MOV dword ptr [ESP + 0xb8],EDX      ; 0049ae8f
    MOVSD ES:EDI,ESI                    ; 0049ae96
    MOVSD ES:EDI,ESI                    ; 0049ae97
    MOVSD ES:EDI,ESI                    ; 0049ae98
    TEST ECX,ECX                        ; 0049ae99
    JLE 0x0049af09                      ; 0049ae9b
        ;   XREF to: 0049af09 (CONDITIONAL_JUMP)  ; LAB_0049af09
    LEA EAX,[ECX + -0x1]                ; 0049ae9d
    MOV dword ptr [ESP + 0xac],EAX      ; 0049aea0
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0049aea7
        ;   Label: LAB_0049aea7
    MOV dword ptr [ESP + 0xc0],EAX      ; 0049aeae
    FILD dword ptr [ESP + 0xc0]         ; 0049aeb5
    MOV EAX,dword ptr [ESP + 0xac]      ; 0049aebc
    FST float ptr [ESP + 0xbc]          ; 0049aec3
    FMUL float ptr [0x005c05d8]         ; 0049aeca | DAT_005c05d8
    MOV dword ptr [ESP + 0xc0],EAX      ; 0049aed0
    FILD dword ptr [ESP + 0xc0]         ; 0049aed7
    FDIVP                               ; 0049aede
    FST float ptr [ESP + 0x4]           ; 0049aee0
    FCOMP double ptr [0x005c05e0]       ; 0049aee4 | DAT_005c05e0
    FNSTSW AX                           ; 0049aeea
    SAHF                                ; 0049aeec
    JA 0x0049af29                       ; 0049aeed
        ;   XREF to: 0049af29 (CONDITIONAL_JUMP)  ; LAB_0049af29
    MOV ESI,dword ptr [ESP + 0xb8]      ; 0049aeef
        ;   Label: LAB_0049aeef
    INC ESI                             ; 0049aef6
    MOV EDI,dword ptr [ESP + 0xb0]      ; 0049aef7
    MOV dword ptr [ESP + 0xb8],ESI      ; 0049aefe
    CMP ESI,EDI                         ; 0049af05
    JL 0x0049aea7                       ; 0049af07
        ;   XREF to: 0049aea7 (CONDITIONAL_JUMP)  ; LAB_0049aea7
    MOV ESP,EBP                         ; 0049af09
        ;   Label: LAB_0049af09
    POP EBP                             ; 0049af0b
    POP EDI                             ; 0049af0c
    POP ESI                             ; 0049af0d
    POP EBX                             ; 0049af0e
    RET                                 ; 0049af0f
    CMP ECX,0x64                        ; 0049af10
        ;   Label: LAB_0049af10
    JLE 0x0049ae16                      ; 0049af13
        ;   XREF to: 0049ae16 (CONDITIONAL_JUMP)  ; LAB_0049ae16
    MOV dword ptr [ESP + 0xb0],0x64     ; 0049af19
    JMP 0x0049ae16                      ; 0049af24
        ;   XREF to: 0049ae16 (UNCONDITIONAL_JUMP)  ; LAB_0049ae16
    FLD float ptr [ESP + 0xbc]          ; 0049af29
        ;   Label: LAB_0049af29
    FLD float ptr [ESP + 0x80]          ; 0049af30
    FMUL ST1                            ; 0049af37
    FLD float ptr [ESP + 0x84]          ; 0049af39
    FMUL ST2                            ; 0049af40
    FLD float ptr [ESP + 0x88]          ; 0049af42
    FMULP ST3                           ; 0049af49
    LEA EDI,[ESP + 0x98]                ; 0049af4b
    LEA EAX,[ESP + 0x74]                ; 0049af52
    LEA ESI,[ESP + 0x8c]                ; 0049af56
    PUSH EAX                            ; 0049af5d
    FXCH                                ; 0049af5e
    FSTP float ptr [ESP + 0x90]         ; 0049af60
    FSTP float ptr [ESP + 0x94]         ; 0049af67
    FSTP float ptr [ESP + 0x98]         ; 0049af6e
    MOV EAX,[0x005f2afc]                ; 0049af75 | DAT_005f2afc
    MOVSD ES:EDI,ESI                    ; 0049af7a
    MOVSD ES:EDI,ESI                    ; 0049af7b
    MOVSD ES:EDI,ESI                    ; 0049af7c
    PUSH EAX                            ; 0049af7d | DAT_01bdd7e4
    FLD float ptr [EBX]                 ; 0049af7e
    FLD float ptr [EBX + 0x4]           ; 0049af80
    FLD float ptr [EBX + 0x8]           ; 0049af83
    LEA EDI,[ESP + 0x7c]                ; 0049af86
    LEA ESI,[ESP + 0x64]                ; 0049af8a
    FXCH ST2                            ; 0049af8e
    FADD float ptr [ESP + 0xa0]         ; 0049af90
    FXCH                                ; 0049af97
    FADD float ptr [ESP + 0xa4]         ; 0049af99
    FXCH ST2                            ; 0049afa0
    FADD float ptr [ESP + 0xa8]         ; 0049afa2
    FXCH                                ; 0049afa9
    FSTP float ptr [ESP + 0x64]         ; 0049afab
    FXCH                                ; 0049afaf
    FSTP float ptr [ESP + 0x68]         ; 0049afb1
    FSTP float ptr [ESP + 0x6c]         ; 0049afb5
    MOVSD ES:EDI,ESI                    ; 0049afb9
    MOVSD ES:EDI,ESI                    ; 0049afba
    MOVSD ES:EDI,ESI                    ; 0049afbb
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0049afbc
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049afc1
    LEA EAX,[ESP + 0x8]                 ; 0049afc4
    PUSH EAX                            ; 0049afc8
    LEA EAX,[ESP + 0x48]                ; 0049afc9
    XOR EDX,EDX                         ; 0049afcd
    PUSH EAX                            ; 0049afcf
    MOV EDI,dword ptr [0x005f2afc]      ; 0049afd0 | DAT_005f2afc
    MOV dword ptr [ESP + 0x10],EDX      ; 0049afd6
    PUSH EDI                            ; 0049afda | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x18],EDX      ; 0049afdb
    MOV dword ptr [ESP + 0x1c],EDX      ; 0049afdf
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0049afe3
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049afe8
    FLD float ptr [ESP + 0x4]           ; 0049afeb
    CALL crt_math.c_round_FUN_005a3120  ; 0049afef
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0xc0]        ; 0049aff4
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0049affb
    PUSH EAX                            ; 0049b002
    XOR ESI,ESI                         ; 0049b003
    PUSH ESI                            ; 0049b005
    PUSH ESI                            ; 0049b006
    MOV EDX,dword ptr [EBX + 0x18]      ; 0049b007
    PUSH EDX                            ; 0049b00a
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20 ; 0049b00b
        ;   XREF to: 00460f20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 0049b010
    MOV ECX,dword ptr [0x005f2afc]      ; 0049b013 | DAT_005f2afc
    PUSH ECX                            ; 0049b019 | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 0049b01a
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0049b01f
    JMP 0x0049aeef                      ; 0049b022
        ;   XREF to: 0049aeef (UNCONDITIONAL_JUMP)  ; LAB_0049aeef

