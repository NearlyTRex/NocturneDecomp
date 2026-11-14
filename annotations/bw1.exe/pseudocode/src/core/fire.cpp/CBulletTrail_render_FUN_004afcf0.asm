; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004afcf0(CBulletTrail *this_ptr)
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
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b5398
;
; Referenced Globals:
;   undefined4 DAT_005df2a4
;   undefined4 DAT_005df2ac
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004afcf0
        ;   Label: core_fire.cpp_CBulletTrail_render_FUN_004afcf0
    PUSH ESI                            ; 004afcf1
    PUSH EDI                            ; 004afcf2
    PUSH EBP                            ; 004afcf3
    MOV EBP,ESP                         ; 004afcf4
    SUB ESP,0xc4                        ; 004afcf6
    AND ESP,0xfffffff8                  ; 004afcfc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004afcff
    LEA EAX,[EBX + 0xc]                 ; 004afd02
    LEA EDI,[ESP + 0x20]                ; 004afd05
    LEA ESI,[ESP + 0x50]                ; 004afd09
    FLD float ptr [EAX]                 ; 004afd0d
    FLD float ptr [EAX + 0x4]           ; 004afd0f
    FLD float ptr [EAX + 0x8]           ; 004afd12
    FXCH ST2                            ; 004afd15
    FSUB float ptr [EBX]                ; 004afd17
    FXCH                                ; 004afd19
    FSUB float ptr [EBX + 0x4]          ; 004afd1b
    FXCH ST2                            ; 004afd1e
    FSUB float ptr [EBX + 0x8]          ; 004afd20
    FXCH                                ; 004afd23
    FSTP float ptr [ESP + 0x50]         ; 004afd25
    FXCH                                ; 004afd29
    FSTP float ptr [ESP + 0x54]         ; 004afd2b
    FSTP float ptr [ESP + 0x58]         ; 004afd2f
    MOVSD ES:EDI,ESI                    ; 004afd33
    MOVSD ES:EDI,ESI                    ; 004afd34
    MOVSD ES:EDI,ESI                    ; 004afd35
    FLD float ptr [ESP + 0x24]          ; 004afd36
    FMUL ST0                            ; 004afd3a
    FLD float ptr [ESP + 0x20]          ; 004afd3c
    FMUL ST0                            ; 004afd40
    FADDP                               ; 004afd42
    FLD float ptr [ESP + 0x28]          ; 004afd44
    FMUL ST0                            ; 004afd48
    FADDP                               ; 004afd4a
    FSQRT                               ; 004afd4c
    MOV EAX,dword ptr [EBX + 0x18]      ; 004afd4e
    LEA EDI,[ESP + 0x38]                ; 004afd51
    LEA ESI,[ESP + 0x68]                ; 004afd55
    FLD float ptr [EAX + 0x344]         ; 004afd59
    FLD float ptr [EAX + 0x348]         ; 004afd5f
    LEA EDX,[EAX + 0x338]               ; 004afd65
    FLD float ptr [EAX + 0x34c]         ; 004afd6b
    FXCH ST2                            ; 004afd71
    FSUB float ptr [EDX]                ; 004afd73
    FXCH                                ; 004afd75
    FSUB float ptr [EDX + 0x4]          ; 004afd77
    FXCH ST2                            ; 004afd7a
    FSUB float ptr [EDX + 0x8]          ; 004afd7c
    FXCH                                ; 004afd7f
    FSTP float ptr [ESP + 0x68]         ; 004afd81
    FXCH                                ; 004afd85
    FSTP float ptr [ESP + 0x6c]         ; 004afd87
    FSTP float ptr [ESP + 0x70]         ; 004afd8b
    MOVSD ES:EDI,ESI                    ; 004afd8f
    MOVSD ES:EDI,ESI                    ; 004afd90
    MOVSD ES:EDI,ESI                    ; 004afd91
    FSUB float ptr [ESP + 0x40]         ; 004afd92
    FST float ptr [ESP]                 ; 004afd96
    FLDZ                                ; 004afd99
    FCOMPP                              ; 004afd9b
    FNSTSW AX                           ; 004afd9d
    SAHF                                ; 004afd9f
    JNC 0x004afed9                      ; 004afda0
        ;   XREF to: 004afed9 (CONDITIONAL_JUMP)  ; LAB_004afed9
    FLD float ptr [EBX + 0x1c]          ; 004afda6
    MOV EDX,0x2                         ; 004afda9
    FLDZ                                ; 004afdae
    MOV dword ptr [ESP + 0xb0],EDX      ; 004afdb0
    FCOMPP                              ; 004afdb7
    FNSTSW AX                           ; 004afdb9
    SAHF                                ; 004afdbb
    JNC 0x004afde6                      ; 004afdbc
        ;   XREF to: 004afde6 (CONDITIONAL_JUMP)  ; LAB_004afde6
    FLD float ptr [ESP]                 ; 004afdbe
    FDIV float ptr [EBX + 0x1c]         ; 004afdc1
    CALL crt_math.c_round_FUN_005c03a0  ; 004afdc4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xb0]        ; 004afdc9
    MOV ECX,dword ptr [ESP + 0xb0]      ; 004afdd0
    CMP ECX,EDX                         ; 004afdd7
    JGE 0x004afee0                      ; 004afdd9
        ;   XREF to: 004afee0 (CONDITIONAL_JUMP)  ; LAB_004afee0
    MOV dword ptr [ESP + 0xb0],EDX      ; 004afddf
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004afde6
        ;   Label: LAB_004afde6
    FLD1                                ; 004afded
    MOV dword ptr [ESP + 0xc0],EAX      ; 004afdef
    FLD float ptr [ESP + 0x20]          ; 004afdf6
    FILD dword ptr [ESP + 0xc0]         ; 004afdfa
    FSTP float ptr [ESP + 0xb4]         ; 004afe01
    FXCH                                ; 004afe08
    FDIV float ptr [ESP + 0xb4]         ; 004afe0a
    FXCH                                ; 004afe11
    FMUL ST1                            ; 004afe13
    FLD float ptr [ESP + 0x24]          ; 004afe15
    FMUL ST2                            ; 004afe19
    FLD float ptr [ESP + 0x28]          ; 004afe1b
    FMULP ST3                           ; 004afe1f
    LEA EDI,[ESP + 0x80]                ; 004afe21
    LEA ESI,[ESP + 0x2c]                ; 004afe28
    LEA EAX,[ESP + 0x20]                ; 004afe2c
    FXCH                                ; 004afe30
    FSTP float ptr [ESP + 0x2c]         ; 004afe32
    FSTP float ptr [ESP + 0x30]         ; 004afe36
    FSTP float ptr [ESP + 0x34]         ; 004afe3a
    MOVSD ES:EDI,ESI                    ; 004afe3e
    MOVSD ES:EDI,ESI                    ; 004afe3f
    MOVSD ES:EDI,ESI                    ; 004afe40
    PUSH EAX                            ; 004afe41
    LEA ESI,[ESP + 0x18]                ; 004afe42
    LEA EDI,[ESP + 0x48]                ; 004afe46
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004afe4a
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x18]                ; 004afe4f
    ADD ESP,0x4                         ; 004afe53
    XOR EDX,EDX                         ; 004afe56
    MOV ECX,dword ptr [ESP + 0xb0]      ; 004afe58
    MOV dword ptr [ESP + 0xb8],EDX      ; 004afe5f
    MOVSD ES:EDI,ESI                    ; 004afe66
    MOVSD ES:EDI,ESI                    ; 004afe67
    MOVSD ES:EDI,ESI                    ; 004afe68
    TEST ECX,ECX                        ; 004afe69
    JLE 0x004afed9                      ; 004afe6b
        ;   XREF to: 004afed9 (CONDITIONAL_JUMP)  ; LAB_004afed9
    LEA EAX,[ECX + -0x1]                ; 004afe6d
    MOV dword ptr [ESP + 0xac],EAX      ; 004afe70
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004afe77
        ;   Label: LAB_004afe77
    MOV dword ptr [ESP + 0xc0],EAX      ; 004afe7e
    FILD dword ptr [ESP + 0xc0]         ; 004afe85
    MOV EAX,dword ptr [ESP + 0xac]      ; 004afe8c
    FST float ptr [ESP + 0xbc]          ; 004afe93
    FMUL float ptr [0x005df2a4]         ; 004afe9a | DAT_005df2a4
    MOV dword ptr [ESP + 0xc0],EAX      ; 004afea0
    FILD dword ptr [ESP + 0xc0]         ; 004afea7
    FDIVP                               ; 004afeae
    FST float ptr [ESP + 0x4]           ; 004afeb0
    FCOMP double ptr [0x005df2ac]       ; 004afeb4 | DAT_005df2ac
    FNSTSW AX                           ; 004afeba
    SAHF                                ; 004afebc
    JA 0x004afef9                       ; 004afebd
        ;   XREF to: 004afef9 (CONDITIONAL_JUMP)  ; LAB_004afef9
    MOV ESI,dword ptr [ESP + 0xb8]      ; 004afebf
        ;   Label: LAB_004afebf
    INC ESI                             ; 004afec6
    MOV EDI,dword ptr [ESP + 0xb0]      ; 004afec7
    MOV dword ptr [ESP + 0xb8],ESI      ; 004afece
    CMP ESI,EDI                         ; 004afed5
    JL 0x004afe77                       ; 004afed7
        ;   XREF to: 004afe77 (CONDITIONAL_JUMP)  ; LAB_004afe77
    MOV ESP,EBP                         ; 004afed9
        ;   Label: LAB_004afed9
    POP EBP                             ; 004afedb
    POP EDI                             ; 004afedc
    POP ESI                             ; 004afedd
    POP EBX                             ; 004afede
    RET                                 ; 004afedf
    CMP ECX,0x64                        ; 004afee0
        ;   Label: LAB_004afee0
    JLE 0x004afde6                      ; 004afee3
        ;   XREF to: 004afde6 (CONDITIONAL_JUMP)  ; LAB_004afde6
    MOV dword ptr [ESP + 0xb0],0x64     ; 004afee9
    JMP 0x004afde6                      ; 004afef4
        ;   XREF to: 004afde6 (UNCONDITIONAL_JUMP)  ; LAB_004afde6
    FLD float ptr [ESP + 0xbc]          ; 004afef9
        ;   Label: LAB_004afef9
    FLD float ptr [ESP + 0x80]          ; 004aff00
    FMUL ST1                            ; 004aff07
    FLD float ptr [ESP + 0x84]          ; 004aff09
    FMUL ST2                            ; 004aff10
    FLD float ptr [ESP + 0x88]          ; 004aff12
    FMULP ST3                           ; 004aff19
    LEA EDI,[ESP + 0x98]                ; 004aff1b
    LEA EAX,[ESP + 0x74]                ; 004aff22
    LEA ESI,[ESP + 0x8c]                ; 004aff26
    PUSH EAX                            ; 004aff2d
    FXCH                                ; 004aff2e
    FSTP float ptr [ESP + 0x90]         ; 004aff30
    FSTP float ptr [ESP + 0x94]         ; 004aff37
    FSTP float ptr [ESP + 0x98]         ; 004aff3e
    MOV EAX,[0x00612560]                ; 004aff45 | DAT_00612560
    MOVSD ES:EDI,ESI                    ; 004aff4a
    MOVSD ES:EDI,ESI                    ; 004aff4b
    MOVSD ES:EDI,ESI                    ; 004aff4c
    PUSH EAX                            ; 004aff4d | DAT_01bc120c
    FLD float ptr [EBX]                 ; 004aff4e
    FLD float ptr [EBX + 0x4]           ; 004aff50
    FLD float ptr [EBX + 0x8]           ; 004aff53
    LEA EDI,[ESP + 0x7c]                ; 004aff56
    LEA ESI,[ESP + 0x64]                ; 004aff5a
    FXCH ST2                            ; 004aff5e
    FADD float ptr [ESP + 0xa0]         ; 004aff60
    FXCH                                ; 004aff67
    FADD float ptr [ESP + 0xa4]         ; 004aff69
    FXCH ST2                            ; 004aff70
    FADD float ptr [ESP + 0xa8]         ; 004aff72
    FXCH                                ; 004aff79
    FSTP float ptr [ESP + 0x64]         ; 004aff7b
    FXCH                                ; 004aff7f
    FSTP float ptr [ESP + 0x68]         ; 004aff81
    FSTP float ptr [ESP + 0x6c]         ; 004aff85
    MOVSD ES:EDI,ESI                    ; 004aff89
    MOVSD ES:EDI,ESI                    ; 004aff8a
    MOVSD ES:EDI,ESI                    ; 004aff8b
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004aff8c
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004aff91
    LEA EAX,[ESP + 0x8]                 ; 004aff94
    PUSH EAX                            ; 004aff98
    LEA EAX,[ESP + 0x48]                ; 004aff99
    XOR EDX,EDX                         ; 004aff9d
    PUSH EAX                            ; 004aff9f
    MOV EDI,dword ptr [0x00612560]      ; 004affa0 | DAT_00612560
    MOV dword ptr [ESP + 0x10],EDX      ; 004affa6
    PUSH EDI                            ; 004affaa | DAT_01bc120c
    MOV dword ptr [ESP + 0x18],EDX      ; 004affab
    MOV dword ptr [ESP + 0x1c],EDX      ; 004affaf
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004affb3
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004affb8
    FLD float ptr [ESP + 0x4]           ; 004affbb
    CALL crt_math.c_round_FUN_005c03a0  ; 004affbf
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xc0]        ; 004affc4
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004affcb
    PUSH EAX                            ; 004affd2
    XOR ESI,ESI                         ; 004affd3
    PUSH ESI                            ; 004affd5
    PUSH ESI                            ; 004affd6
    MOV EDX,dword ptr [EBX + 0x18]      ; 004affd7
    PUSH EDX                            ; 004affda
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270 ; 004affdb
        ;   XREF to: 00467270 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 004affe0
    MOV ECX,dword ptr [0x00612560]      ; 004affe3 | DAT_00612560
    PUSH ECX                            ; 004affe9 | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004affea
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004affef
    JMP 0x004afebf                      ; 004afff2
        ;   XREF to: 004afebf (UNCONDITIONAL_JUMP)  ; LAB_004afebf

